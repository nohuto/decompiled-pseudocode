/*
 * XREFs of Feature_DriverStore_EnumerateBlockedDrivers__private_IsEnabledDeviceUsageNoInline @ 0x140019D18
 * Callers:
 *     ApiSetpIsFeatureEnabled @ 0x140019C94 (ApiSetpIsFeatureEnabled.c)
 * Callees:
 *     <none>
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
