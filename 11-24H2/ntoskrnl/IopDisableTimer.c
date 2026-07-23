/*
 * XREFs of IopDisableTimer @ 0x140593020
 * Callers:
 *     IoStopTimer @ 0x140593C50 (IoStopTimer.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer @ 0x1402BE1D0 (KeCancelTimer.c)
 *     EtwTraceIoTimerEvent @ 0x14064BFD4 (EtwTraceIoTimerEvent.c)
 */

void __fastcall IopDisableTimer(__int64 a1)
{
  BOOL v2; // ebx
  KIRQL v3; // al

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&IopTimerLock);
  if ( *(_WORD *)(a1 + 2) )
  {
    *(_WORD *)(a1 + 2) = 0;
    v2 = --IopTimerCount == 0;
  }
  KeReleaseSpinLock(&IopTimerLock, v3);
  if ( (DWORD2(PerfGlobalGroupMask) & 0x800000) != 0 )
    EtwTraceIoTimerEvent(3934LL, *(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 24));
  if ( v2 )
    KeCancelTimer(&IopTimer);
}
