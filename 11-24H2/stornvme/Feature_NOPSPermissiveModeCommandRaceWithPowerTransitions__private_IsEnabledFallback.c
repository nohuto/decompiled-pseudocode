/*
 * XREFs of Feature_NOPSPermissiveModeCommandRaceWithPowerTransitions__private_IsEnabledFallback @ 0x1400177B8
 * Callers:
 *     Feature_NOPSPermissiveModeCommandRaceWithPowerTransitions__private_IsEnabledDeviceUsageNoInline @ 0x140017780 (Feature_NOPSPermissiveModeCommandRaceWithPowerTransitions__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140019BA8 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_NOPSPermissiveModeCommandRaceWithPowerTransitions__private_IsEnabledFallback(
        __int64 a1,
        __int64 a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           &Feature_NOPSPermissiveModeCommandRaceWithPowerTransitions__private_descriptor);
}
