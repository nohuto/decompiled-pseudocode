/*
 * XREFs of winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::GetResults @ 0x1806A23E4
 * Callers:
 *     winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____::GetResults @ 0x1806A2360 (winrt--impl--produce_std--experimental--coroutine_traits_winrt--Windows--Foundation_ea_1806A2360.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1801C7914 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1801C792C (__Platform_AcquireSRWLockExclusive.c)
 *     ??0hresult_illegal_method_call@winrt@@QEAA@XZ @ 0x18041D944 (--0hresult_illegal_method_call@winrt@@QEAA@XZ.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::rethrow_if_failed @ 0x18063D2F0 (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_18063D2F0.c)
 */

_QWORD *__fastcall winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::GetResults(
        __int64 a1,
        _QWORD *a2)
{
  int v4; // edx
  __int64 v5; // rax
  _BYTE pExceptionObject[32]; // [rsp+28h] [rbp-20h] BYREF
  RTL_SRWLOCK *SRWLock; // [rsp+50h] [rbp+8h]

  SRWLock = (RTL_SRWLOCK *)(a1 + 48);
  _Platform_AcquireSRWLockExclusive((PSRWLOCK)(a1 + 48));
  v4 = *(_DWORD *)(a1 + 88);
  if ( v4 != 1 )
  {
    winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::rethrow_if_failed(
      a1,
      v4);
    winrt::hresult_illegal_method_call::hresult_illegal_method_call((winrt::hresult_illegal_method_call *)pExceptionObject);
    throw (winrt::hresult_illegal_method_call *)pExceptionObject;
  }
  v5 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 96) = 0LL;
  *a2 = v5;
  ReleaseSRWLockExclusive_0(SRWLock);
  return a2;
}
