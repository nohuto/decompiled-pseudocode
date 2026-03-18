/*
 * XREFs of Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline @ 0x1404EFFC4
 * Callers:
 *     KeSetThreadPpmPolicy @ 0x1402005B4 (KeSetThreadPpmPolicy.c)
 *     KeSetProcessPpmPolicy @ 0x140200830 (KeSetProcessPpmPolicy.c)
 *     KzRefreshWorkloadProperties @ 0x140201D1C (KzRefreshWorkloadProperties.c)
 *     KeUpdateThreadTag @ 0x140202F10 (KeUpdateThreadTag.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x140275710 (KiTransitionSchedulingGroupGeneration.c)
 *     KiAddThreadToPrcbQueue @ 0x1402F5510 (KiAddThreadToPrcbQueue.c)
 *     KeApplyWobBamQos @ 0x140306940 (KeApplyWobBamQos.c)
 *     KiUpdateVPBackingThreadPriority @ 0x140316DD0 (KiUpdateVPBackingThreadPriority.c)
 *     KiUpdateThreadPriority @ 0x1403170A0 (KiUpdateThreadPriority.c)
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1403173E0 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     KiSwapThread @ 0x14031CEE0 (KiSwapThread.c)
 *     KiSearchForNewThread @ 0x14031E240 (KiSearchForNewThread.c)
 *     KiDispatchInterrupt @ 0x14032E330 (KiDispatchInterrupt.c)
 *     KiQuantumEnd @ 0x14032ED10 (KiQuantumEnd.c)
 *     KiQueueReadyThread @ 0x14032F910 (KiQueueReadyThread.c)
 *     KiUpdatePriorityMatrixForRunningTransition @ 0x140330AC0 (KiUpdatePriorityMatrixForRunningTransition.c)
 *     KiFlushSharedReadyQueueReadyLists @ 0x140351F9C (KiFlushSharedReadyQueueReadyLists.c)
 *     KiFlushPrcbReadyLists @ 0x140351FF0 (KiFlushPrcbReadyLists.c)
 *     KiRemoveThreadFromReadyQueue @ 0x140352274 (KiRemoveThreadFromReadyQueue.c)
 *     KiRemoveCurrentlyEnumeratedThreadFromReadyQueue @ 0x140352350 (KiRemoveCurrentlyEnumeratedThreadFromReadyQueue.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x1403527C0 (KiRemoveThreadFromSharedReadyQueue.c)
 *     ?KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x140353968 (-KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     KiUpdateThreadSchedulingProperties @ 0x1403A9D6C (KiUpdateThreadSchedulingProperties.c)
 *     KiLeaveCooperativeIdleSearch @ 0x1403CF880 (KiLeaveCooperativeIdleSearch.c)
 *     KiSearchForNewThreadsWithinSearchContext @ 0x1403CFC10 (KiSearchForNewThreadsWithinSearchContext.c)
 *     KiJoinCooperativeIdleSearch @ 0x1403CFEF0 (KiJoinCooperativeIdleSearch.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403D04C0 (KiSearchForNewThreadsOnTarget.c)
 *     KeSetThreadSchedulerAssist @ 0x1403E7EF8 (KeSetThreadSchedulerAssist.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x1403E8170 (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 *     KiAddThreadToReadyQueue @ 0x1403EFA70 (KiAddThreadToReadyQueue.c)
 *     ?KiInsertSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x140430568 (-KiInsertSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     KiSearchForNewThreadsWithinL0SearchContext @ 0x1404EFD38 (KiSearchForNewThreadsWithinL0SearchContext.c)
 *     KiInitializeSharedReadyQueue @ 0x1405B342C (KiInitializeSharedReadyQueue.c)
 *     KiInitializeBootStructures @ 0x140B48120 (KiInitializeBootStructures.c)
 *     KiInitializeKernel @ 0x140B48920 (KiInitializeKernel.c)
 * Callees:
 *     Feature_IdleSearchImprovements__private_IsEnabledFallback @ 0x1405B15BC (Feature_IdleSearchImprovements__private_IsEnabledFallback.c)
 */

__int64 Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_IdleSearchImprovements__private_featureState & 2) != 0 )
    return Feature_IdleSearchImprovements__private_featureState & 1;
  else
    return Feature_IdleSearchImprovements__private_IsEnabledFallback(
             (unsigned int)Feature_IdleSearchImprovements__private_featureState,
             0LL);
}
