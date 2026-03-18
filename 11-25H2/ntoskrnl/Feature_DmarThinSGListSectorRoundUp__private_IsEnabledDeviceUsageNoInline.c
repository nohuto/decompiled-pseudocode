/*
 * XREFs of Feature_DmarThinSGListSectorRoundUp__private_IsEnabledDeviceUsageNoInline @ 0x14054EE50
 * Callers:
 *     HalpConstructScatterGatherListDmarThin @ 0x14045FBC0 (HalpConstructScatterGatherListDmarThin.c)
 * Callees:
 *     Feature_DmarThinSGListSectorRoundUp__private_IsEnabledFallback @ 0x14054EE88 (Feature_DmarThinSGListSectorRoundUp__private_IsEnabledFallback.c)
 */

__int64 Feature_DmarThinSGListSectorRoundUp__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DmarThinSGListSectorRoundUp__private_featureState & 0x10) != 0 )
    return Feature_DmarThinSGListSectorRoundUp__private_featureState & 1;
  else
    return Feature_DmarThinSGListSectorRoundUp__private_IsEnabledFallback(
             (unsigned int)Feature_DmarThinSGListSectorRoundUp__private_featureState,
             3LL);
}
