/*
 * XREFs of winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::await_transform_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____&_ @ 0x18069C008
 * Callers:
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_ResumeCoro$1 @ 0x180251610 (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_ResumeCoro$1.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0hresult_canceled@winrt@@QEAA@XZ @ 0x1803E2DA0 (--0hresult_canceled@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::await_transform_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool______(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  char v3; // al
  _QWORD *v4; // r8
  _BYTE pExceptionObject[32]; // [rsp+28h] [rbp-20h] BYREF

  if ( *(_DWORD *)(a1 + 88) == 2 )
  {
    winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject);
    throw (winrt::hresult_canceled *)pExceptionObject;
  }
  v3 = *(_BYTE *)(a1 + 93);
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = a3;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_BYTE *)(a2 + 24) = 1;
  v4 = (_QWORD *)((a1 + 72) & -(__int64)(v3 != 0));
  if ( v4 )
  {
    *(_QWORD *)a2 = v4;
    *(_QWORD *)(((a1 + 72) & -(__int64)(v3 != 0)) + 8) = a2;
    *v4 = _lambda_02c0e7e3e0c9bb1a008abdacb67258b9_::_lambda_invoker_cdecl_;
  }
  return a2;
}
