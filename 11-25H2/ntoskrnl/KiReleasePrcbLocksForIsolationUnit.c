/*
 * XREFs of KiReleasePrcbLocksForIsolationUnit @ 0x1402780C0
 * Callers:
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14026C404 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiAcquireThreadStateLockForWrite @ 0x140271D50 (KiAcquireThreadStateLockForWrite.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402762CC (KiDeferGroupSchedulingPreemption.c)
 *     KiSetSystemAffinityThread @ 0x140278684 (KiSetSystemAffinityThread.c)
 *     KiHandleDeferredPreemption @ 0x1402F2F88 (KiHandleDeferredPreemption.c)
 *     KiExitThreadWaitReschedule @ 0x1402F39F4 (KiExitThreadWaitReschedule.c)
 *     ?KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x1402F61B0 (-KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 *     KeSetSchedulingGroupRankBias @ 0x1402F6544 (KeSetSchedulingGroupRankBias.c)
 *     ?KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x1402F6B24 (-KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 *     KiHeteroAttemptPreemptionSwapOnSubNode @ 0x14031280C (KiHeteroAttemptPreemptionSwapOnSubNode.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1403147F4 (KiGroupSchedulingGenerationEnd.c)
 *     KiNormalPriorityReadyScan @ 0x14031A434 (KiNormalPriorityReadyScan.c)
 *     KiSwapThread @ 0x14031CEE0 (KiSwapThread.c)
 *     KiSearchForNewThread @ 0x14031E240 (KiSearchForNewThread.c)
 *     KiAttemptToStealStandbyThread @ 0x14032E858 (KiAttemptToStealStandbyThread.c)
 *     KiQuantumEnd @ 0x14032ED10 (KiQuantumEnd.c)
 *     KiQueueReadyThread @ 0x14032F910 (KiQueueReadyThread.c)
 *     KiIdleSchedule @ 0x140330B40 (KiIdleSchedule.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x140330CFC (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiAcquirePrcbLocksForPreemptionAttemptSlowPath @ 0x1403312E4 (KiAcquirePrcbLocksForPreemptionAttemptSlowPath.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1403509D0 (KiGroupSchedulingQuantumEnd.c)
 *     KiSearchForNewThreadsWithinSearchContext @ 0x1403CFC10 (KiSearchForNewThreadsWithinSearchContext.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403D04C0 (KiSearchForNewThreadsOnTarget.c)
 *     KiAttemptToScheduleThreadToBusyIsolationUnit @ 0x1403DD240 (KiAttemptToScheduleThreadToBusyIsolationUnit.c)
 *     KeQueryValuesThread @ 0x1403DE8C0 (KeQueryValuesThread.c)
 *     KeTransitionProcessorParkState @ 0x1403DFF18 (KeTransitionProcessorParkState.c)
 *     KiParkCurrentProcessor @ 0x1403E0254 (KiParkCurrentProcessor.c)
 *     KiUnparkCurrentProcessor @ 0x1403E0888 (KiUnparkCurrentProcessor.c)
 *     KeQueryTotalCycleTimeThread @ 0x1403E5570 (KeQueryTotalCycleTimeThread.c)
 *     KeTryToFreezeThreadStack @ 0x1404AA4CC (KeTryToFreezeThreadStack.c)
 *     KiChooseTargetProcessor @ 0x1404E7040 (KiChooseTargetProcessor.c)
 *     KiSearchForNewThreadsWithinL0SearchContext @ 0x1404EFD38 (KiSearchForNewThreadsWithinL0SearchContext.c)
 *     KiFinalizeCoreControlBlockAssignment @ 0x1405B2DCC (KiFinalizeCoreControlBlockAssignment.c)
 *     KiAdjustUserIsolationDomainThread @ 0x1405BE5D0 (KiAdjustUserIsolationDomainThread.c)
 *     KeAbCrossThreadDelete @ 0x1405BFAFC (KeAbCrossThreadDelete.c)
 *     KeTraceParkingRundown @ 0x1405C3F24 (KeTraceParkingRundown.c)
 *     KiForceParkDutyCycleDpcCallback @ 0x1405C4100 (KiForceParkDutyCycleDpcCallback.c)
 *     KiStartForceParkSingleDutyCycleTimerCallback @ 0x1405C4320 (KiStartForceParkSingleDutyCycleTimerCallback.c)
 *     KiStopForceParkSingleDutyCycleTimerCallback @ 0x1405C43A0 (KiStopForceParkSingleDutyCycleTimerCallback.c)
 *     KiCompleteKernelInit @ 0x140B45C50 (KiCompleteKernelInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiReleasePrcbLocksForIsolationUnit(__int64 *a1)
{
  __int64 v1; // r9
  unsigned __int64 v2; // r10
  unsigned __int8 *v3; // rax
  unsigned __int64 *v4; // r8
  int v5; // eax
  __int64 result; // rax
  unsigned __int64 v7; // [rsp+8h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = *a1 & 0xFFFFFFFFFFFFFFFEuLL;
  v7 = v2;
  if ( (v1 & 1) != 0 )
  {
    v3 = *(unsigned __int8 **)(v2 + 36440);
    v4 = (unsigned __int64 *)(v3 + 8);
    v5 = *v3;
    if ( !v5 )
      goto LABEL_4;
  }
  else
  {
    v4 = &v7;
    v5 = 1;
  }
  do
    _InterlockedAnd64((volatile signed __int64 *)(v4[--v5] + 48), 0LL);
  while ( v5 );
LABEL_4:
  result = 0LL;
  *a1 = 0LL;
  return result;
}
