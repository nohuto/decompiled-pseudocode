/*
 * XREFs of ?CancelDeferredPowerReferenceRelease@CXvmPowerReferenceManager@@AEAAXXZ @ 0x180103EF8
 * Callers:
 *     ??1CXvmPowerReferenceManager@@QEAA@XZ @ 0x180103A98 (--1CXvmPowerReferenceManager@@QEAA@XZ.c)
 *     ?AcquirePowerReference@CXvmPowerReferenceManager@@QEAA?AV?$shared_ptr@VCXvmPowerReference@@@std@@XZ @ 0x180103D94 (-AcquirePowerReference@CXvmPowerReferenceManager@@QEAA-AV-$shared_ptr@VCXvmPowerReference@@@std@.c)
 * Callees:
 *     <none>
 */

void __fastcall CXvmPowerReferenceManager::CancelDeferredPowerReferenceRelease(CXvmPowerReferenceManager *this)
{
  struct _TP_TIMER *v2; // rcx

  v2 = (struct _TP_TIMER *)*((_QWORD *)this + 9);
  if ( v2 )
  {
    SetThreadpoolTimer(v2, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(*((PTP_TIMER *)this + 9), 1);
  }
}
