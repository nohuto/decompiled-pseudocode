/*
 * XREFs of Feature_O3BDH__private_IsEnabledDeviceUsageNoInline @ 0x14004425C
 * Callers:
 *     Controller_PopulateDeviceFlags @ 0x140076CC0 (Controller_PopulateDeviceFlags.c)
 * Callees:
 *     Feature_O3BDH__private_IsEnabledFallback @ 0x140044294 (Feature_O3BDH__private_IsEnabledFallback.c)
 */

__int64 Feature_O3BDH__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_O3BDH__private_featureState & 0x10) != 0 )
    return Feature_O3BDH__private_featureState & 1;
  else
    return Feature_O3BDH__private_IsEnabledFallback((unsigned int)Feature_O3BDH__private_featureState, 3LL);
}
