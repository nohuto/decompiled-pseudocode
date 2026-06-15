/*
 * XREFs of ?CancelDeferredSebReferenceRelease@CSebNotifier@@AEAAXXZ @ 0x18008BB30
 * Callers:
 *     ?AcquireSebReference@CSebNotifier@@QEAA?AV?$shared_ptr@VCSebReference@@@std@@XZ @ 0x180017410 (-AcquireSebReference@CSebNotifier@@QEAA-AV-$shared_ptr@VCSebReference@@@std@@XZ.c)
 *     ??1CSebNotifier@@QEAA@XZ @ 0x1801039FC (--1CSebNotifier@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CSebNotifier::CancelDeferredSebReferenceRelease(CSebNotifier *this)
{
  if ( *((_QWORD *)this + 7) )
  {
    NtCancelTimer2(*((_QWORD *)this + 6), 0LL);
    SetThreadpoolWait(*((PTP_WAIT *)this + 7), 0LL, 0LL);
    WaitForThreadpoolWaitCallbacks(*((PTP_WAIT *)this + 7), 1);
  }
}
