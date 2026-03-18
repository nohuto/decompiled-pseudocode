/*
 * XREFs of PiUEventNotifyClientPendingEvent @ 0x140A12EA8
 * Callers:
 *     PiUEventHandleGetEvent @ 0x14085B5E0 (PiUEventHandleGetEvent.c)
 *     PiUEventNotifyClient @ 0x1408D2838 (PiUEventNotifyClient.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     PiUEventEstimateRequiredClientBufferSize @ 0x14046AD24 (PiUEventEstimateRequiredClientBufferSize.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 */

__int64 __fastcall PiUEventNotifyClientPendingEvent(__int64 a1)
{
  int v2; // eax
  struct _FAST_MUTEX *v3; // rcx
  int v5; // [rsp+50h] [rbp+8h] BYREF

  ExAcquireFastMutex(*(PKGUARDED_MUTEX *)(a1 + 16));
  v2 = PiUEventEstimateRequiredClientBufferSize(a1);
  v3 = *(struct _FAST_MUTEX **)(a1 + 16);
  v5 = v2;
  KeReleaseGuardedMutex(v3);
  return ZwUpdateWnfStateData(a1 + 88, (__int64)&v5);
}
