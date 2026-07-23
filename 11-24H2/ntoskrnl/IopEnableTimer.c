/*
 * XREFs of IopEnableTimer @ 0x140593260
 * Callers:
 *     IoStartTimer @ 0x140593C20 (IoStartTimer.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetCoalescableTimer @ 0x1402BE6B0 (KeSetCoalescableTimer.c)
 *     EtwTraceIoTimerEvent @ 0x14064BFD4 (EtwTraceIoTimerEvent.c)
 */

void __fastcall IopEnableTimer(__int64 a1)
{
  KIRQL v2; // di

  v2 = KeAcquireSpinLockRaiseToDpc(&IopTimerLock);
  if ( !*(_WORD *)(a1 + 2) )
  {
    if ( !IopTimerCount )
      KeSetCoalescableTimer(&IopTimer, (LARGE_INTEGER)-10000000LL, 0x3E8u, 0x23u, &IopTimerDpc);
    ++IopTimerCount;
    *(_WORD *)(a1 + 2) = 1;
  }
  KeReleaseSpinLock(&IopTimerLock, v2);
  if ( (DWORD2(PerfGlobalGroupMask) & 0x800000) != 0 )
    EtwTraceIoTimerEvent(3933LL, *(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 24));
}
