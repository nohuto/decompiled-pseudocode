/*
 * XREFs of Feature_Servicing_WpsContainmentFixNoneZone__private_IsEnabledDeviceUsageNoInline @ 0x1404F2210
 * Callers:
 *     PpmHeteroUpdateHgsConfiguration @ 0x140267B4C (PpmHeteroUpdateHgsConfiguration.c)
 *     PpmHeteroHgsCalculateContainmentCount @ 0x14040A0EC (PpmHeteroHgsCalculateContainmentCount.c)
 *     PpmHeteroHgsEvaluateContainmentDecision @ 0x1404AF170 (PpmHeteroHgsEvaluateContainmentDecision.c)
 *     PpmEventHgsContainmentHwUpdate @ 0x1404CE158 (PpmEventHgsContainmentHwUpdate.c)
 *     PpmHeteroHgsRegisterContainmentGroups @ 0x1405D2974 (PpmHeteroHgsRegisterContainmentGroups.c)
 *     PpmEventTraceControlCallback @ 0x140AC4110 (PpmEventTraceControlCallback.c)
 * Callees:
 *     Feature_Servicing_WpsContainmentFixNoneZone__private_IsEnabledFallback @ 0x1404F2248 (Feature_Servicing_WpsContainmentFixNoneZone__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_WpsContainmentFixNoneZone__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_WpsContainmentFixNoneZone__private_featureState & 0x10) != 0 )
    return Feature_Servicing_WpsContainmentFixNoneZone__private_featureState & 1;
  else
    return Feature_Servicing_WpsContainmentFixNoneZone__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_WpsContainmentFixNoneZone__private_featureState,
             3LL);
}
