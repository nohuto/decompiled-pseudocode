/*
 * XREFs of Feature_CompatMatchingContainment__private_IsEnabledDeviceUsageNoInline @ 0x1800987B0
 * Callers:
 *     SdbpCheckContainment @ 0x180099370 (SdbpCheckContainment.c)
 * Callees:
 *     <none>
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
