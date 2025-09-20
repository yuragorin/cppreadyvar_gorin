// first.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
int SumDelitel(int n) {
    int sum = 0;
   
    int i = 1;
    if (n < 0) {
        n = n * (-1);
        for (i; i <= n; i++) {
            if (n % i == 0) {
                sum += i;

            }



        }
        return sum;

    }
    else {

        for (i; i <= n; i++) {
            if (n % i == 0) {
                sum += i;

            }



        }

        return sum;
    }
}
bool PoiskProstogo(int n) {
    int i = 2;
    int count = 0;
    for (i; i < n; i++) {
        if (n % i == 0) {
            count++;
        }
        }
    if (count == 0) {
        return true;
    }
    else {
        return false;
    }
}

int main()
{
    int n;
    std::cout << "input number: ";
    std::cin >> n;
    int sum=SumDelitel(n);
    bool test=false;
  
    
    while (test == false) {
        if (n == 1) {
            std::cout << "number ====1";
            return 1;

        }

        if (n > 0) {
            n = n - (sum);

        }
        else {
            n = n + sum;

        }


        if (n > 0) {
            test = PoiskProstogo(n);
            if (test == true) {
                std::cout << n << " prostoe ";
                    return 2;
            }
            else {
                sum = SumDelitel(n);


            }
         
        }
        else {

            sum = SumDelitel(n);

        }
       
    std::cout << "cikl";
    std::cout <<n;
            if (test == true) {
                std::cout << n<<'\n' << " prostoe ";
            }

        
        
    }


        }

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
