/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId___lambda_e1015264fe649a72270f58c4e4d07372___::Invoke @ 0x180281960
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_e1015264fe649a72270f58c4e4d07372_::operator() @ 0x1802817F8 (_lambda_e1015264fe649a72270f58c4e4d07372_--operator().c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId___lambda_e1015264fe649a72270f58c4e4d07372___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rcx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1 + 8;
  try
  {
    lambda_e1015264fe649a72270f58c4e4d07372_::operator()(v3, a2, a3);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v5);
  }
  return result;
}
