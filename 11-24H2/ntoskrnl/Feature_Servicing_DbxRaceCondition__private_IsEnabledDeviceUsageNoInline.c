/*
 * XREFs of Feature_Servicing_DbxRaceCondition__private_IsEnabledDeviceUsageNoInline @ 0x1406076A8
 * Callers:
 *     SepSecureBootCheckForUpdates @ 0x140C3CD14 (SepSecureBootCheckForUpdates.c)
 * Callees:
 *     Feature_Servicing_DbxRaceCondition__private_IsEnabledFallback @ 0x1406076E0 (Feature_Servicing_DbxRaceCondition__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_DbxRaceCondition__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_DbxRaceCondition__private_featureState & 0x10) != 0 )
    return Feature_Servicing_DbxRaceCondition__private_featureState & 1;
  else
    return Feature_Servicing_DbxRaceCondition__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_DbxRaceCondition__private_featureState,
             3LL);
}
