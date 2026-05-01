/*
 * XREFs of winrt::impl::delegate_winrt::Windows::UI::Xaml::Input::PointerEventHandler__lambda_070e192e9fba98d43315428c14debf7b___::Invoke @ 0x180774990
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_070e192e9fba98d43315428c14debf7b_::operator() @ 0x180772380 (_lambda_070e192e9fba98d43315428c14debf7b_--operator().c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::UI::Xaml::Input::PointerEventHandler__lambda_070e192e9fba98d43315428c14debf7b___::Invoke(
        __int64 a1)
{
  struct IWeakReference **v1; // rcx
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct IWeakReference **)(a1 + 8);
  try
  {
    lambda_070e192e9fba98d43315428c14debf7b_::operator()(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
