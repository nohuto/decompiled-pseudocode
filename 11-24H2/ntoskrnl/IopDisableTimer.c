/*
 * XREFs of IopDisableTimer @ 0x140595FF0
 * Callers:
 *     IoStopTimer @ 0x140596C70 (IoStopTimer.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer @ 0x140333B20 (KeCancelTimer.c)
 *     EtwTraceIoTimerEvent @ 0x14064D9C4 (EtwTraceIoTimerEvent.c)
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
