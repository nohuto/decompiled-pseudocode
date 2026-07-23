/*
 * XREFs of Feature_DriverStore_EnumerateBlockedDrivers__private_IsEnabledDeviceUsageNoInline @ 0x140660A24
 * Callers:
 *     ApiSetpIsFeatureEnabled @ 0x140660990 (ApiSetpIsFeatureEnabled.c)
 * Callees:
 *     Feature_DriverStore_EnumerateBlockedDrivers__private_IsEnabledFallback @ 0x140660A5C (Feature_DriverStore_EnumerateBlockedDrivers__private_IsEnabledFallback.c)
 */

__int64 Feature_DriverStore_EnumerateBlockedDrivers__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DriverStore_EnumerateBlockedDrivers__private_featureState & 0x10) != 0 )
    return Feature_DriverStore_EnumerateBlockedDrivers__private_featureState & 1;
  else
    return Feature_DriverStore_EnumerateBlockedDrivers__private_IsEnabledFallback(
             (unsigned int)Feature_DriverStore_EnumerateBlockedDrivers__private_featureState,
             3LL);
}
