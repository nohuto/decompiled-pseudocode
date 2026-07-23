/*
 * XREFs of KeUpdateGroupSchedulingConstants @ 0x1405C5034
 * Callers:
 *     ?KiEnableGroupScheduling@@YAXXZ @ 0x1405C4B30 (-KiEnableGroupScheduling@@YAXXZ.c)
 *     PspReadDfssConfigurationValues @ 0x1405E20E0 (PspReadDfssConfigurationValues.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ?KiAssignSchedulingGroupWeights@@YAXW4_KSCHEDULING_GROUP_TYPE@@EPEAU_KSCHEDULING_GROUP@@@Z @ 0x14045C524 (-KiAssignSchedulingGroupWeights@@YAXW4_KSCHEDULING_GROUP_TYPE@@EPEAU_KSCHEDULING_GROUP@@@Z.c)
 *     ?KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x14045CFB4 (-KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 */

void __fastcall KeUpdateGroupSchedulingConstants(char a1)
{
  struct _LIST_ENTRY *Flink; // rbx
  unsigned __int64 v3; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a1 )
    KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  Flink = KiSchedulingGroupList.Flink;
  v3 = 1000000 * (unsigned __int64)*(unsigned int *)(KiProcessorBlock[0] + 68) / 0x3E8;
  KiCycleDivisorShortTerm = v3 * (unsigned int)PsDfssShortTermSharingMS;
  KiCycleDivisorLongTerm = v3 * (unsigned int)PsDfssLongTermSharingMS;
  KiCyclesPerGeneration = v3 * (unsigned int)PsDfssGenerationLengthMS;
  KiGroupSchedulingNumerator = PsDfssLongTermFraction1024;
  KiGenerationTicks = 10000 * (unsigned __int64)(unsigned int)PsDfssGenerationLengthMS / KeMaximumIncrement;
  if ( KiSchedulingGroupList.Flink )
  {
    while ( Flink != &KiSchedulingGroupList )
    {
      if ( (HIDWORD(Flink[-4].Blink) & 1) != 0 )
        KiUpdateCpuTargetByRate((struct _KSCHEDULING_GROUP *)&Flink[-4].Blink, 1u);
      Flink = Flink->Flink;
    }
  }
  KiAssignSchedulingGroupWeights(0, 1u, 0LL);
  if ( !a1 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
}
