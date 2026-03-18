/*
 * XREFs of Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline @ 0x1405B4FB0
 * Callers:
 *     PpmParkRecordNodeStatistics @ 0x140409AE4 (PpmParkRecordNodeStatistics.c)
 *     PpmParkCalculateUnparkCount @ 0x140423BD0 (PpmParkCalculateUnparkCount.c)
 *     PpmParkGetParkNode @ 0x140495DBC (PpmParkGetParkNode.c)
 *     KiComputeHeteroSet @ 0x1404AD7DC (KiComputeHeteroSet.c)
 *     PpmPerfRecordMostActiveWorkloadClass @ 0x1404EB798 (PpmPerfRecordMostActiveWorkloadClass.c)
 *     PpmHeteroHgsCalculateContainmentCount @ 0x1404EBB30 (PpmHeteroHgsCalculateContainmentCount.c)
 *     PpmCheckComputeHeteroResponse @ 0x1404EC390 (PpmCheckComputeHeteroResponse.c)
 *     PpmHeteroDistributeUtility @ 0x1404EC800 (PpmHeteroDistributeUtility.c)
 *     PpmEventHgsActiveWorkloadClass @ 0x1404ECDC0 (PpmEventHgsActiveWorkloadClass.c)
 *     PpmEventHgsCoresUnparkedCount @ 0x1404ECF2C (PpmEventHgsCoresUnparkedCount.c)
 *     PpmEventParkNodeRestriction @ 0x1404ED06C (PpmEventParkNodeRestriction.c)
 *     PpmEventTraceMultiClassHeteroResponseUpdate @ 0x1404ED1C8 (PpmEventTraceMultiClassHeteroResponseUpdate.c)
 *     PpmParkApplyPolicy @ 0x1404ED2F4 (PpmParkApplyPolicy.c)
 *     PpmParkCalculateCoreParkingMask @ 0x1404EDA40 (PpmParkCalculateCoreParkingMask.c)
 *     PpmParkComputeDiff @ 0x1404EE290 (PpmParkComputeDiff.c)
 *     PpmParkDistributeAllUtility @ 0x1404EE3F0 (PpmParkDistributeAllUtility.c)
 *     PpmParkEvaluateRestriction @ 0x1404EE4B8 (PpmParkEvaluateRestriction.c)
 *     PpmHeteroHgsRegisterContainmentGroups @ 0x1405D7408 (PpmHeteroHgsRegisterContainmentGroups.c)
 *     PpmEventAffinityMask @ 0x1405D8D90 (PpmEventAffinityMask.c)
 *     PpmEventTraceHeteroDistributeUtility @ 0x1405D9CF8 (PpmEventTraceHeteroDistributeUtility.c)
 *     PpmParkRegisterParking @ 0x1405D9FB4 (PpmParkRegisterParking.c)
 *     PpmIdleInitializeConcurrency @ 0x14074A0E0 (PpmIdleInitializeConcurrency.c)
 *     PpmParkParkingAvailable @ 0x140A723C0 (PpmParkParkingAvailable.c)
 *     PpmParkUpdateConcurrencyTracking @ 0x140A72528 (PpmParkUpdateConcurrencyTracking.c)
 *     PpmEventStaticPolicyRundown @ 0x140ACA768 (PpmEventStaticPolicyRundown.c)
 *     PpmEventTraceControlCallback @ 0x140ACA960 (PpmEventTraceControlCallback.c)
 *     PpmParkApplyForcedMask @ 0x140ACAD80 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x140ACAF9C (PpmParkClearForcedMask.c)
 *     PpmEventInitialize @ 0x140C332E8 (PpmEventInitialize.c)
 *     PpmParkInitialize @ 0x140C33334 (PpmParkInitialize.c)
 * Callees:
 *     Feature_PpmParkEx__private_IsEnabledFallback @ 0x1405B4FE8 (Feature_PpmParkEx__private_IsEnabledFallback.c)
 */

__int64 Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_PpmParkEx__private_featureState & 0x10) != 0 )
    return Feature_PpmParkEx__private_featureState & 1;
  else
    return Feature_PpmParkEx__private_IsEnabledFallback((unsigned int)Feature_PpmParkEx__private_featureState, 3LL);
}
