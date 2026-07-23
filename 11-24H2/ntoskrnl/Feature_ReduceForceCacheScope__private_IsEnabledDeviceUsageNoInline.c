/*
 * XREFs of Feature_ReduceForceCacheScope__private_IsEnabledDeviceUsageNoInline @ 0x1404F4258
 * Callers:
 *     SdbpCheckForMatch @ 0x140A04CB0 (SdbpCheckForMatch.c)
 * Callees:
 *     Feature_ReduceForceCacheScope__private_IsEnabledFallback @ 0x1404F4290 (Feature_ReduceForceCacheScope__private_IsEnabledFallback.c)
 */

__int64 Feature_ReduceForceCacheScope__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ReduceForceCacheScope__private_featureState & 0x10) != 0 )
    return Feature_ReduceForceCacheScope__private_featureState & 1;
  else
    return Feature_ReduceForceCacheScope__private_IsEnabledFallback(
             (unsigned int)Feature_ReduceForceCacheScope__private_featureState,
             3LL);
}
