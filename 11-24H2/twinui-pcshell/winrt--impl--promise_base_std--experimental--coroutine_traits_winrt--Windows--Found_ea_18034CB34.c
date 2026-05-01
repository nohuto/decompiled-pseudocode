/*
 * XREFs of winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction__lambda_da9f5ee43db59325462f58bbda1cfc4c__const___::promise_type_winrt::Windows::Foundation::IAsyncAction_void_::ErrorCode @ 0x18034CB34
 * Callers:
 *     winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction__lambda_da9f5ee43db59325462f58bbda1cfc4c__const___::promise_type_winrt::Windows::Foundation::IAsyncInfo_::get_ErrorCode @ 0x180360A30 (winrt--impl--produce_std--experimental--coroutine_traits_winrt--Windows--Foundation_ea_180360A30.c)
 * Callees:
 *     ReleaseSRWLockExclusive_0 @ 0x1802D2A74 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802D2A8C (__Platform_AcquireSRWLockExclusive.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction__lambda_da9f5ee43db59325462f58bbda1cfc4c__const___::promise_type_winrt::Windows::Foundation::IAsyncAction_void_::rethrow_if_failed @ 0x1803613B8 (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_1803613B8.c)
 */

_DWORD *__fastcall winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction__lambda_da9f5ee43db59325462f58bbda1cfc4c__const___::promise_type_winrt::Windows::Foundation::IAsyncAction_void_::ErrorCode(
        __int64 a1,
        _DWORD *a2)
{
  RTL_SRWLOCK *SRWLock; // [rsp+30h] [rbp+8h]

  SRWLock = (RTL_SRWLOCK *)(a1 + 72);
  _Platform_AcquireSRWLockExclusive((PSRWLOCK)(a1 + 72));
  winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction__lambda_da9f5ee43db59325462f58bbda1cfc4c__const___::promise_type_winrt::Windows::Foundation::IAsyncAction_void_::rethrow_if_failed(
    a1,
    *(unsigned int *)(a1 + 96));
  *a2 = 0;
  ReleaseSRWLockExclusive_0(SRWLock);
  return a2;
}
