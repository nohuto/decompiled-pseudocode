/*
 * XREFs of Feature_WpsHybridToNoneZoneFix__private_IsEnabledDeviceUsageNoInline @ 0x1405D6D5C
 * Callers:
 *     PpmHeteroHgsCalculateContainmentCount @ 0x1404EBB30 (PpmHeteroHgsCalculateContainmentCount.c)
 * Callees:
 *     Feature_WpsHybridToNoneZoneFix__private_IsEnabledFallback @ 0x1405D6D94 (Feature_WpsHybridToNoneZoneFix__private_IsEnabledFallback.c)
 */

__int64 Feature_WpsHybridToNoneZoneFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_WpsHybridToNoneZoneFix__private_featureState & 0x10) != 0 )
    return Feature_WpsHybridToNoneZoneFix__private_featureState & 1;
  else
    return Feature_WpsHybridToNoneZoneFix__private_IsEnabledFallback(
             (unsigned int)Feature_WpsHybridToNoneZoneFix__private_featureState,
             3LL);
}
