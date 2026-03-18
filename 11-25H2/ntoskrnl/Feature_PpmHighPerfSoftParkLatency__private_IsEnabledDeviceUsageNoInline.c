/*
 * XREFs of Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline @ 0x1405CE05C
 * Callers:
 *     PpmParkApplyPolicy @ 0x1404E9D84 (PpmParkApplyPolicy.c)
 *     PpmParkCalculateCoreParkingMask @ 0x1404EA450 (PpmParkCalculateCoreParkingMask.c)
 *     PpmPerfRemoveMaximumOverride @ 0x140743AF8 (PpmPerfRemoveMaximumOverride.c)
 *     PpmPerfSetMaximumOverride @ 0x140743C10 (PpmPerfSetMaximumOverride.c)
 *     PpmEventTraceControlCallback @ 0x140AC4110 (PpmEventTraceControlCallback.c)
 * Callees:
 *     Feature_PpmHighPerfSoftParkLatency__private_IsEnabledFallback @ 0x1405CE094 (Feature_PpmHighPerfSoftParkLatency__private_IsEnabledFallback.c)
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
