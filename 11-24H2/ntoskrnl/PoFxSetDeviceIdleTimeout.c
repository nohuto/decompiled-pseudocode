/*
 * XREFs of PoFxSetDeviceIdleTimeout @ 0x14049A830
 * Callers:
 *     DifPoFxSetDeviceIdleTimeoutWrapper @ 0x140637FD0 (DifPoFxSetDeviceIdleTimeoutWrapper.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x14049A8A4 (PopFxUpdateDeviceIdleTimer.c)
 */

void __fastcall PoFxSetDeviceIdleTimeout(__int64 a1, unsigned __int64 a2)
{
  KSPIN_LOCK *v2; // rbp
  KIRQL v5; // al
  __int64 v6; // r8
  KIRQL v7; // bl

  v2 = (KSPIN_LOCK *)(a1 + 400);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 400));
  v6 = 0x3FFFFFFFFFFFFFFFLL;
  v7 = v5;
  if ( a2 <= 0x3FFFFFFFFFFFFFFFLL )
    v6 = a2;
  *(_QWORD *)(a1 + 536) = v6;
  PopFxUpdateDeviceIdleTimer(a1);
  KeReleaseSpinLock(v2, v7);
}
