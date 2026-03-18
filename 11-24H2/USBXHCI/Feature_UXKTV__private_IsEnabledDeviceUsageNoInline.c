/*
 * XREFs of Feature_UXKTV__private_IsEnabledDeviceUsageNoInline @ 0x14004405C
 * Callers:
 *     Controller_PopulateDeviceFlags @ 0x140076BD8 (Controller_PopulateDeviceFlags.c)
 * Callees:
 *     Feature_UXKTV__private_IsEnabledFallback @ 0x140044094 (Feature_UXKTV__private_IsEnabledFallback.c)
 */

__int64 Feature_UXKTV__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_UXKTV__private_featureState & 0x10) != 0 )
    return Feature_UXKTV__private_featureState & 1;
  else
    return Feature_UXKTV__private_IsEnabledFallback((unsigned int)Feature_UXKTV__private_featureState, 3LL);
}
