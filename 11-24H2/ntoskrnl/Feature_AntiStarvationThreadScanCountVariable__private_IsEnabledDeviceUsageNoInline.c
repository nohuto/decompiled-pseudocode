/*
 * XREFs of Feature_AntiStarvationThreadScanCountVariable__private_IsEnabledDeviceUsageNoInline @ 0x1405B20E8
 * Callers:
 *     KiInitializeAntiStarvationPolicies @ 0x1405B43A4 (KiInitializeAntiStarvationPolicies.c)
 *     KiInitializeVelocity @ 0x140C2A6C8 (KiInitializeVelocity.c)
 * Callees:
 *     Feature_AntiStarvationThreadScanCountVariable__private_IsEnabledFallback @ 0x1405B2120 (Feature_AntiStarvationThreadScanCountVariable__private_IsEnabledFallback.c)
 */

__int64 Feature_AntiStarvationThreadScanCountVariable__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_AntiStarvationThreadScanCountVariable__private_featureState & 0x10) != 0 )
    return Feature_AntiStarvationThreadScanCountVariable__private_featureState & 1;
  else
    return Feature_AntiStarvationThreadScanCountVariable__private_IsEnabledFallback(
             (unsigned int)Feature_AntiStarvationThreadScanCountVariable__private_featureState,
             3LL);
}
