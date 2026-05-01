/*
 * XREFs of ??0slim_lock_guard@winrt@@QEAA@AEAUslim_mutex@1@@Z @ 0x1801B1784
 * Callers:
 *     ?unhandled_exception@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@@experimental@std@@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x180338640 (-unhandled_exception@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@UPackage.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction__lambda_da9f5ee43db59325462f58bbda1cfc4c__const___::promise_type_winrt::Windows::Foundation::IAsyncAction_void_::unhandled_exception @ 0x18036147C (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_18036147C.c)
 * Callees:
 *     __Platform_AcquireSRWLockExclusive @ 0x1802D2A8C (__Platform_AcquireSRWLockExclusive.c)
 */

winrt::slim_lock_guard *__fastcall winrt::slim_lock_guard::slim_lock_guard(
        winrt::slim_lock_guard *this,
        RTL_SRWLOCK *a2)
{
  *(_QWORD *)this = a2;
  _Platform_AcquireSRWLockExclusive(a2);
  return this;
}
