/*
 * XREFs of Feature_Servicing_PowersnapCyclesFix__private_IsEnabledDeviceUsageNoInline @ 0x1405D0050
 * Callers:
 *     PpmPerfSnapDeliveredPerformance @ 0x1402AFD50 (PpmPerfSnapDeliveredPerformance.c)
 * Callees:
 *     Feature_Servicing_PowersnapCyclesFix__private_IsEnabledFallback @ 0x1405D0088 (Feature_Servicing_PowersnapCyclesFix__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_PowersnapCyclesFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_PowersnapCyclesFix__private_featureState & 0x10) != 0 )
    return Feature_Servicing_PowersnapCyclesFix__private_featureState & 1;
  else
    return Feature_Servicing_PowersnapCyclesFix__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_PowersnapCyclesFix__private_featureState,
             3LL);
}
