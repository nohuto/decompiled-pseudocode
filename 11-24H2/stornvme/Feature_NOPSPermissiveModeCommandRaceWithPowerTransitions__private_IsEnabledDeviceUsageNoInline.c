/*
 * XREFs of Feature_NOPSPermissiveModeCommandRaceWithPowerTransitions__private_IsEnabledDeviceUsageNoInline @ 0x140017780
 * Callers:
 *     NVMeHwFindAdapter @ 0x140017CA0 (NVMeHwFindAdapter.c)
 * Callees:
 *     Feature_NOPSPermissiveModeCommandRaceWithPowerTransitions__private_IsEnabledFallback @ 0x1400177B8 (Feature_NOPSPermissiveModeCommandRaceWithPowerTransitions__private_IsEnabledFallback.c)
 */

__int64 Feature_NOPSPermissiveModeCommandRaceWithPowerTransitions__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_NOPSPermissiveModeCommandRaceWithPowerTransitions__private_featureState & 0x10) != 0 )
    return Feature_NOPSPermissiveModeCommandRaceWithPowerTransitions__private_featureState & 1;
  else
    return Feature_NOPSPermissiveModeCommandRaceWithPowerTransitions__private_IsEnabledFallback(
             (unsigned int)Feature_NOPSPermissiveModeCommandRaceWithPowerTransitions__private_featureState,
             3LL);
}
