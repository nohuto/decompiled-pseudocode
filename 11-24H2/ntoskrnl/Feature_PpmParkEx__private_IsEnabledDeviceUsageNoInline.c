/*
 * XREFs of Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline @ 0x1405B2224
 * Callers:
 *     PpmParkRecordNodeStatistics @ 0x140401FC4 (PpmParkRecordNodeStatistics.c)
 *     PpmParkCalculateUnparkCount @ 0x140417A80 (PpmParkCalculateUnparkCount.c)
 *     PpmParkGetParkNode @ 0x14049067C (PpmParkGetParkNode.c)
 *     KiComputeHeteroSet @ 0x1404A7EBC (KiComputeHeteroSet.c)
 *     PpmPerfRecordMostActiveWorkloadClass @ 0x1404E26D8 (PpmPerfRecordMostActiveWorkloadClass.c)
 *     PpmHeteroHgsCalculateContainmentCount @ 0x1404E2A70 (PpmHeteroHgsCalculateContainmentCount.c)
 *     PpmCheckComputeHeteroResponse @ 0x1404E3AD0 (PpmCheckComputeHeteroResponse.c)
 *     PpmHeteroDistributeUtility @ 0x1404E3F40 (PpmHeteroDistributeUtility.c)
 *     PpmEventHgsActiveWorkloadClass @ 0x1404E4500 (PpmEventHgsActiveWorkloadClass.c)
 *     PpmEventHgsCoresUnparkedCount @ 0x1404E4750 (PpmEventHgsCoresUnparkedCount.c)
 *     PpmEventParkNodeRestriction @ 0x1404E4890 (PpmEventParkNodeRestriction.c)
 *     PpmEventTraceMultiClassHeteroResponseUpdate @ 0x1404E49EC (PpmEventTraceMultiClassHeteroResponseUpdate.c)
 *     PpmParkApplyPolicy @ 0x1404E4B18 (PpmParkApplyPolicy.c)
 *     PpmParkCalculateCoreParkingMask @ 0x1404E5250 (PpmParkCalculateCoreParkingMask.c)
 *     PpmParkComputeDiff @ 0x1404E5A28 (PpmParkComputeDiff.c)
 *     PpmParkDistributeAllUtility @ 0x1404E5B80 (PpmParkDistributeAllUtility.c)
 *     PpmParkEvaluateRestriction @ 0x1404E5C48 (PpmParkEvaluateRestriction.c)
 *     PpmHeteroHgsRegisterContainmentGroups @ 0x1405D49AC (PpmHeteroHgsRegisterContainmentGroups.c)
 *     PpmEventAffinityMask @ 0x1405D6230 (PpmEventAffinityMask.c)
 *     PpmEventTraceHeteroDistributeUtility @ 0x1405D7014 (PpmEventTraceHeteroDistributeUtility.c)
 *     PpmParkRegisterParking @ 0x1405D72D0 (PpmParkRegisterParking.c)
 *     PpmIdleInitializeConcurrency @ 0x140748410 (PpmIdleInitializeConcurrency.c)
 *     PpmParkParkingAvailable @ 0x140A6B7A0 (PpmParkParkingAvailable.c)
 *     PpmParkUpdateConcurrencyTracking @ 0x140A6B908 (PpmParkUpdateConcurrencyTracking.c)
 *     PpmEventStaticPolicyRundown @ 0x140AC8358 (PpmEventStaticPolicyRundown.c)
 *     PpmEventTraceControlCallback @ 0x140AC8550 (PpmEventTraceControlCallback.c)
 *     PpmParkApplyForcedMask @ 0x140AC893C (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x140AC8B58 (PpmParkClearForcedMask.c)
 *     PpmEventInitialize @ 0x140C35428 (PpmEventInitialize.c)
 *     PpmParkInitialize @ 0x140C35474 (PpmParkInitialize.c)
 * Callees:
 *     Feature_PpmParkEx__private_IsEnabledFallback @ 0x1405B225C (Feature_PpmParkEx__private_IsEnabledFallback.c)
 */

__int64 Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_PpmParkEx__private_featureState & 0x10) != 0 )
    return Feature_PpmParkEx__private_featureState & 1;
  else
    return Feature_PpmParkEx__private_IsEnabledFallback((unsigned int)Feature_PpmParkEx__private_featureState, 3LL);
}
