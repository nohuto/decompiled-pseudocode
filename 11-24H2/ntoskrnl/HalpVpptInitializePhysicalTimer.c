/*
 * XREFs of HalpVpptInitializePhysicalTimer @ 0x140548BC4
 * Callers:
 *     HalpTimerInitializeVpptClockTimer @ 0x1404F7090 (HalpTimerInitializeVpptClockTimer.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14033BC10 (HalpTimerGetInternalData.c)
 *     HalpReleaseHighLevelLock @ 0x1403B9898 (HalpReleaseHighLevelLock.c)
 *     HalpAcquireHighLevelLock @ 0x1403B9FD0 (HalpAcquireHighLevelLock.c)
 *     ExtEnvCriticalFailure @ 0x14055FC80 (ExtEnvCriticalFailure.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpVpptInitializePhysicalTimer()
{
  int v0; // ecx
  __int64 InternalData; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // ebx

  byte_140FC14D8 = HalpAcquireHighLevelLock(&qword_140FC14D0);
  if ( *(int **)&HalpVpptQueue != &HalpVpptQueue )
    ExtEnvCriticalFailure(v0, 277, HalpVpptPhysicalTimer, (int)&HalpVpptQueue, 0LL);
  HalpVpptPhysicalTimerTarget = -1;
  InternalData = HalpTimerGetInternalData(*(__int64 *)&HalpVpptPhysicalTimer);
  v5 = guard_dispatch_icall_no_overrides(InternalData, v2, v3, v4);
  HalpReleaseHighLevelLock((volatile signed __int64 *)&qword_140FC14D0, byte_140FC14D8);
  return v5;
}
