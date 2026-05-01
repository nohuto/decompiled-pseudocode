/*
 * XREFs of ?StopDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAXXZ @ 0x1802159BC
 * Callers:
 *     ?UnsubscribeFromServices@LockScreenDirectorServiceProviderImpl@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802159A0 (-UnsubscribeFromServices@LockScreenDirectorServiceProviderImpl@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?v_ShutdownServices@LockScreenDirectorServiceProviderImpl@@MEAAJPEAUIProfferService@@@Z @ 0x180249130 (-v_ShutdownServices@LockScreenDirectorServiceProviderImpl@@MEAAJPEAUIProfferService@@@Z.c)
 * Callees:
 *     ?ShutdownChildServices@LockScreenDirectorServiceProviderImpl@@AEAAXXZ @ 0x1802C4E58 (-ShutdownChildServices@LockScreenDirectorServiceProviderImpl@@AEAAXXZ.c)
 *     ?LockScreenDirectorServiceProviderImpl_StopDirectorThread@LockScreenServiceTelemetry@@SAXXZ @ 0x1802C9A0C (-LockScreenDirectorServiceProviderImpl_StopDirectorThread@LockScreenServiceTelemetry@@SAXXZ.c)
 */

void __fastcall LockScreenDirectorServiceProviderImpl::StopDirectorThread(LockScreenDirectorServiceProviderImpl *this)
{
  char *v2; // rcx

  LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_StopDirectorThread();
  LockScreenDirectorServiceProviderImpl::ShutdownChildServices(this);
  v2 = (char *)*((_QWORD *)this + 16);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    SetEvent(v2);
}
