/*
 * XREFs of Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline @ 0x1405D2930
 * Callers:
 *     PpmParkApplyPolicy @ 0x1404ED2F4 (PpmParkApplyPolicy.c)
 *     PpmParkCalculateCoreParkingMask @ 0x1404EDA40 (PpmParkCalculateCoreParkingMask.c)
 *     PpmParkApplyPolicyEx @ 0x1405E1344 (PpmParkApplyPolicyEx.c)
 *     PpmParkCalculateCoreParkingMaskEx @ 0x1405E1B9C (PpmParkCalculateCoreParkingMaskEx.c)
 *     PpmPerfRemoveMaximumOverride @ 0x14074FBC8 (PpmPerfRemoveMaximumOverride.c)
 *     PpmPerfSetMaximumOverride @ 0x14074FCE0 (PpmPerfSetMaximumOverride.c)
 *     PpmEventTraceControlCallback @ 0x140ACA960 (PpmEventTraceControlCallback.c)
 * Callees:
 *     Feature_PpmHighPerfSoftParkLatency__private_IsEnabledFallback @ 0x1405D2968 (Feature_PpmHighPerfSoftParkLatency__private_IsEnabledFallback.c)
 */

__int64 Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_PpmHighPerfSoftParkLatency__private_featureState & 0x10) != 0 )
    return Feature_PpmHighPerfSoftParkLatency__private_featureState & 1;
  else
    return Feature_PpmHighPerfSoftParkLatency__private_IsEnabledFallback(
             (unsigned int)Feature_PpmHighPerfSoftParkLatency__private_featureState,
             3LL);
}
