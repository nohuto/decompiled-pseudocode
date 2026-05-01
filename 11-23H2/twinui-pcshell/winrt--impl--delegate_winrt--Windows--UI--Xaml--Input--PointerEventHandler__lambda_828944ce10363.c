/*
 * XREFs of winrt::impl::delegate_winrt::Windows::UI::Xaml::Input::PointerEventHandler__lambda_828944ce103634e2e050a423f7a4c10d___::Invoke @ 0x1807749E0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_828944ce103634e2e050a423f7a4c10d_::operator() @ 0x180772744 (_lambda_828944ce103634e2e050a423f7a4c10d_--operator().c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::UI::Xaml::Input::PointerEventHandler__lambda_828944ce103634e2e050a423f7a4c10d___::Invoke(
        __int64 a1)
{
  struct IWeakReference **v1; // rcx
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct IWeakReference **)(a1 + 8);
  try
  {
    lambda_828944ce103634e2e050a423f7a4c10d_::operator()(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
