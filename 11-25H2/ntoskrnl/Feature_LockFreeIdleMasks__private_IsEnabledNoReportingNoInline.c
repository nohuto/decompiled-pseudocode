/*
 * XREFs of Feature_LockFreeIdleMasks__private_IsEnabledNoReportingNoInline @ 0x1404F0A14
 * Callers:
 *     KiCheckPreferredHeteroProcessor @ 0x140274F90 (KiCheckPreferredHeteroProcessor.c)
 *     KiHeteroAttemptPreemptionSwapOnSubNode @ 0x14031280C (KiHeteroAttemptPreemptionSwapOnSubNode.c)
 *     KiSoftParkElectionUnparkProcessor @ 0x140313EBC (KiSoftParkElectionUnparkProcessor.c)
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1403173E0 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     KiUpdateThreadQosGroupingSummaries @ 0x140317BD0 (KiUpdateThreadQosGroupingSummaries.c)
 *     KiParkCurrentProcessor @ 0x1403E0254 (KiParkCurrentProcessor.c)
 *     KiUnparkCurrentProcessor @ 0x1403E0888 (KiUnparkCurrentProcessor.c)
 *     KiSetProcessorIdle @ 0x140447AB0 (KiSetProcessorIdle.c)
 *     KiCompleteKernelInit @ 0x140B45C50 (KiCompleteKernelInit.c)
 * Callees:
 *     Feature_LockFreeIdleMasks__private_IsEnabledFallback @ 0x1405B15D8 (Feature_LockFreeIdleMasks__private_IsEnabledFallback.c)
 */

__int64 Feature_LockFreeIdleMasks__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_LockFreeIdleMasks__private_featureState & 2) != 0 )
    return Feature_LockFreeIdleMasks__private_featureState & 1;
  else
    return Feature_LockFreeIdleMasks__private_IsEnabledFallback(
             (unsigned int)Feature_LockFreeIdleMasks__private_featureState,
             0LL);
}
