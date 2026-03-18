/*
 * XREFs of Feature_CompatMatchingContainment__private_IsEnabledDeviceUsageNoInline @ 0x14069574C
 * Callers:
 *     SdbpCheckContainment @ 0x140802A30 (SdbpCheckContainment.c)
 * Callees:
 *     Feature_CompatMatchingContainment__private_IsEnabledFallback @ 0x140695784 (Feature_CompatMatchingContainment__private_IsEnabledFallback.c)
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
