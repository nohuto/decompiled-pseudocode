/*
 * XREFs of IopDisableTimer @ 0x140592990
 * Callers:
 *     IoStopTimer @ 0x1405935C0 (IoStopTimer.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KeCancelTimer @ 0x1402ECAA0 (KeCancelTimer.c)
 *     EtwTraceIoTimerEvent @ 0x1406419F8 (EtwTraceIoTimerEvent.c)
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
