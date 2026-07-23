/*
 * XREFs of Feature_AntiStarvationReadyPeriodVariable__private_IsEnabledDeviceUsageNoInline @ 0x1405B1F2C
 * Callers:
 *     KiInitializeAntiStarvationPolicies @ 0x1405B43A4 (KiInitializeAntiStarvationPolicies.c)
 * Callees:
 *     Feature_AntiStarvationReadyPeriodVariable__private_IsEnabledFallback @ 0x1405B1F64 (Feature_AntiStarvationReadyPeriodVariable__private_IsEnabledFallback.c)
 */

__int64 Feature_AntiStarvationReadyPeriodVariable__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_AntiStarvationReadyPeriodVariable__private_featureState & 0x10) != 0 )
    return Feature_AntiStarvationReadyPeriodVariable__private_featureState & 1;
  else
    return Feature_AntiStarvationReadyPeriodVariable__private_IsEnabledFallback(
             (unsigned int)Feature_AntiStarvationReadyPeriodVariable__private_featureState,
             3LL);
}
