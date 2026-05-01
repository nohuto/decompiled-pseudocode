/*
 * XREFs of winrt::impl::delegate_winrt::Windows::UI::Xaml::RoutedEventHandler__lambda_ca880a75b2c5520c482e457acf4bf272___::Invoke @ 0x180774A80
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_ca880a75b2c5520c482e457acf4bf272_::operator() @ 0x180772A84 (_lambda_ca880a75b2c5520c482e457acf4bf272_--operator().c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::UI::Xaml::RoutedEventHandler__lambda_ca880a75b2c5520c482e457acf4bf272___::Invoke(
        __int64 a1)
{
  struct IWeakReference **v1; // rcx
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct IWeakReference **)(a1 + 8);
  try
  {
    lambda_ca880a75b2c5520c482e457acf4bf272_::operator()(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
