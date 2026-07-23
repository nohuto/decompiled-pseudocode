/*
 * XREFs of Feature_CompatMatchingContainment__private_IsEnabledDeviceUsageNoInline @ 0x14069681C
 * Callers:
 *     SdbpCheckContainment @ 0x140803170 (SdbpCheckContainment.c)
 * Callees:
 *     Feature_CompatMatchingContainment__private_IsEnabledFallback @ 0x140696854 (Feature_CompatMatchingContainment__private_IsEnabledFallback.c)
 */

__int64 Feature_CompatMatchingContainment__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_CompatMatchingContainment__private_featureState & 0x10) != 0 )
    return Feature_CompatMatchingContainment__private_featureState & 1;
  else
    return Feature_CompatMatchingContainment__private_IsEnabledFallback(
             (unsigned int)Feature_CompatMatchingContainment__private_featureState,
             3LL);
}
