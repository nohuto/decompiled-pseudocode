/*
 * XREFs of HalpVpptInitializePhysicalTimer @ 0x1405462D4
 * Callers:
 *     HalpTimerInitializeVpptClockTimer @ 0x1404F4520 (HalpTimerInitializeVpptClockTimer.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x140205754 (HalpReleaseHighLevelLock.c)
 *     HalpTimerGetInternalData @ 0x14027A960 (HalpTimerGetInternalData.c)
 *     HalpAcquireHighLevelLock @ 0x140445E40 (HalpAcquireHighLevelLock.c)
 *     ExtEnvCriticalFailure @ 0x14055D380 (ExtEnvCriticalFailure.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpVpptInitializePhysicalTimer()
{
  int v0; // ecx
  __int64 InternalData; // rax
  unsigned int v2; // ebx

  byte_140FC0D38 = HalpAcquireHighLevelLock(&qword_140FC0D30);
  if ( *(int **)&HalpVpptQueue != &HalpVpptQueue )
    ExtEnvCriticalFailure(v0, 277, HalpVpptPhysicalTimer, (int)&HalpVpptQueue, 0LL);
  HalpVpptPhysicalTimerTarget = -1;
  InternalData = HalpTimerGetInternalData(*(__int64 *)&HalpVpptPhysicalTimer);
  v2 = guard_dispatch_icall_no_overrides(InternalData);
  HalpReleaseHighLevelLock((__int64)&qword_140FC0D30, byte_140FC0D38);
  return v2;
}
