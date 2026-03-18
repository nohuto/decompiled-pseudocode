/*
 * XREFs of Feature_WclContainmentOptIn__private_IsEnabledDeviceUsageNoInline @ 0x1405D6D08
 * Callers:
 *     PpmHeteroHgsCpuSupportedForContainment @ 0x1405D6DB0 (PpmHeteroHgsCpuSupportedForContainment.c)
 * Callees:
 *     Feature_WclContainmentOptIn__private_IsEnabledFallback @ 0x1405D6D40 (Feature_WclContainmentOptIn__private_IsEnabledFallback.c)
 */

__int64 Feature_WclContainmentOptIn__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_WclContainmentOptIn__private_featureState & 0x10) != 0 )
    return Feature_WclContainmentOptIn__private_featureState & 1;
  else
    return Feature_WclContainmentOptIn__private_IsEnabledFallback(
             (unsigned int)Feature_WclContainmentOptIn__private_featureState,
             3LL);
}
