/*
 * XREFs of Feature_Servicing_DbxRaceCondition__private_IsEnabledDeviceUsageNoInline @ 0x140609200
 * Callers:
 *     SepSecureBootCheckForUpdates @ 0x140C3ABBC (SepSecureBootCheckForUpdates.c)
 * Callees:
 *     Feature_Servicing_DbxRaceCondition__private_IsEnabledFallback @ 0x140609238 (Feature_Servicing_DbxRaceCondition__private_IsEnabledFallback.c)
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
