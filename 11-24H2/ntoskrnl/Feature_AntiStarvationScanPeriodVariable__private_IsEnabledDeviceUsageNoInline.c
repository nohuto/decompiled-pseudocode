/*
 * XREFs of Feature_AntiStarvationScanPeriodVariable__private_IsEnabledDeviceUsageNoInline @ 0x1405B1FC0
 * Callers:
 *     KiInitializeAntiStarvationPolicies @ 0x1405B43A4 (KiInitializeAntiStarvationPolicies.c)
 * Callees:
 *     Feature_AntiStarvationScanPeriodVariable__private_IsEnabledFallback @ 0x1405B1FF8 (Feature_AntiStarvationScanPeriodVariable__private_IsEnabledFallback.c)
 */

__int64 Feature_AntiStarvationScanPeriodVariable__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_AntiStarvationScanPeriodVariable__private_featureState & 0x10) != 0 )
    return Feature_AntiStarvationScanPeriodVariable__private_featureState & 1;
  else
    return Feature_AntiStarvationScanPeriodVariable__private_IsEnabledFallback(
             (unsigned int)Feature_AntiStarvationScanPeriodVariable__private_featureState,
             3LL);
}
