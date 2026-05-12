/*
 * XREFs of Feature_GeDlrmFixInitRace__private_IsEnabledDeviceUsageNoInline @ 0x1401391B4
 * Callers:
 *     StorAdapterInitializeDlrmIfSupported @ 0x1401B2EF0 (StorAdapterInitializeDlrmIfSupported.c)
 * Callees:
 *     Feature_GeDlrmFixInitRace__private_IsEnabledFallback @ 0x1401391EC (Feature_GeDlrmFixInitRace__private_IsEnabledFallback.c)
 */

__int64 Feature_GeDlrmFixInitRace__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_GeDlrmFixInitRace__private_featureState & 0x10) != 0 )
    return Feature_GeDlrmFixInitRace__private_featureState & 1;
  else
    return Feature_GeDlrmFixInitRace__private_IsEnabledFallback(
             (unsigned int)Feature_GeDlrmFixInitRace__private_featureState,
             3LL);
}
