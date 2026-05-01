/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Internal::Input::InputGestureManager_winrt::Windows::UI::Internal::Input::InputGestureOperation___lambda_e058c550b9a0e8fe978c38ba0103cacb___::Invoke @ 0x18054F2F0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_e058c550b9a0e8fe978c38ba0103cacb_::operator()_winrt::Windows::UI::Internal::Input::InputGestureManager_const_&_winrt::Windows::UI::Internal::Input::InputGestureOperation_const_&_ @ 0x18054B268 (_lambda_e058c550b9a0e8fe978c38ba0103cacb_--operator()_winrt--Windows--UI--Internal--Input--Input.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Internal::Input::InputGestureManager_winrt::Windows::UI::Internal::Input::InputGestureOperation___lambda_e058c550b9a0e8fe978c38ba0103cacb___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 *v3; // rcx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  v3 = (__int64 *)(a1 + 8);
  try
  {
    lambda_e058c550b9a0e8fe978c38ba0103cacb_::operator()_winrt::Windows::UI::Internal::Input::InputGestureManager_const___winrt::Windows::UI::Internal::Input::InputGestureOperation_const___(
      v3,
      a2,
      (__int64)&v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v5);
  }
  return result;
}
