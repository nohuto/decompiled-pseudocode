/*
 * XREFs of ?UnsubscribeFromServices@LockScreenDirectorServiceProviderImpl@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802159A0
 * Callers:
 *     <none>
 * Callees:
 *     ?StopDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAXXZ @ 0x1802159BC (-StopDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAXXZ.c)
 */

__int64 __fastcall LockScreenDirectorServiceProviderImpl::UnsubscribeFromServices(
        LockScreenDirectorServiceProviderImpl *this,
        struct IServiceProvider *a2)
{
  LockScreenDirectorServiceProviderImpl::StopDirectorThread((LockScreenDirectorServiceProviderImpl *)((char *)this - 48));
  return 0LL;
}
