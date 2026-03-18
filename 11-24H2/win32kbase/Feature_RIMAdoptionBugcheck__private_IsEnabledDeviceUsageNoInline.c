/*
 * XREFs of Feature_RIMAdoptionBugcheck__private_IsEnabledDeviceUsageNoInline @ 0x1401D30DC
 * Callers:
 *     RIMIDEAdoptOrphanedRimDevs @ 0x1401D3130 (RIMIDEAdoptOrphanedRimDevs.c)
 * Callees:
 *     Feature_RIMAdoptionBugcheck__private_IsEnabledFallback @ 0x1401D3114 (Feature_RIMAdoptionBugcheck__private_IsEnabledFallback.c)
 */

__int64 Feature_RIMAdoptionBugcheck__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_RIMAdoptionBugcheck__private_featureState & 0x10) != 0 )
    return Feature_RIMAdoptionBugcheck__private_featureState & 1;
  else
    return Feature_RIMAdoptionBugcheck__private_IsEnabledFallback(
             (unsigned int)Feature_RIMAdoptionBugcheck__private_featureState,
             3LL);
}
