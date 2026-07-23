/*
 * XREFs of HalpVpptInitializePhysicalTimer @ 0x140546484
 * Callers:
 *     HalpTimerInitializeVpptClockTimer @ 0x1404F4970 (HalpTimerInitializeVpptClockTimer.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14031B0F0 (HalpTimerGetInternalData.c)
 *     HalpReleaseHighLevelLock @ 0x140372268 (HalpReleaseHighLevelLock.c)
 *     HalpAcquireHighLevelLock @ 0x1403729A0 (HalpAcquireHighLevelLock.c)
 *     ExtEnvCriticalFailure @ 0x14055D8B0 (ExtEnvCriticalFailure.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpVpptInitializePhysicalTimer()
{
  int v0; // ecx
  __int64 InternalData; // rax
  __int64 v2; // rdx
  unsigned int v3; // ebx

  byte_140FC1738 = HalpAcquireHighLevelLock(&qword_140FC1730);
  if ( *(int **)&HalpVpptQueue != &HalpVpptQueue )
    ExtEnvCriticalFailure(v0, 277, HalpVpptPhysicalTimer, (int)&HalpVpptQueue, 0LL);
  HalpVpptPhysicalTimerTarget = -1;
  InternalData = HalpTimerGetInternalData(*(__int64 *)&HalpVpptPhysicalTimer);
  v3 = guard_dispatch_icall_no_overrides(InternalData, v2);
  HalpReleaseHighLevelLock((volatile signed __int64 *)&qword_140FC1730, byte_140FC1738);
  return v3;
}
