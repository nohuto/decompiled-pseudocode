/*
 * XREFs of Feature_Servicing_WpsContainmentFixNoneZone__private_IsEnabledDeviceUsageNoInline @ 0x140457B34
 * Callers:
 *     PpmHeteroUpdateHgsConfiguration @ 0x140203248 (PpmHeteroUpdateHgsConfiguration.c)
 *     PpmHeteroHgsEvaluateContainmentDecision @ 0x1404579CC (PpmHeteroHgsEvaluateContainmentDecision.c)
 *     PpmEventHgsContainmentHwUpdate @ 0x1404CDF38 (PpmEventHgsContainmentHwUpdate.c)
 *     PpmHeteroHgsCalculateContainmentCount @ 0x1404EBB30 (PpmHeteroHgsCalculateContainmentCount.c)
 *     PpmHeteroHgsRegisterContainmentGroups @ 0x1405D7408 (PpmHeteroHgsRegisterContainmentGroups.c)
 *     PpmEventTraceControlCallback @ 0x140ACA960 (PpmEventTraceControlCallback.c)
 * Callees:
 *     Feature_Servicing_WpsContainmentFixNoneZone__private_IsEnabledFallback @ 0x1404FB520 (Feature_Servicing_WpsContainmentFixNoneZone__private_IsEnabledFallback.c)
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
