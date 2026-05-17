/*
 * XREFs of Feature_Arm64RestoreRegistersAroundDllMain__private_IsEnabledFallback @ 0x180160EA8
 * Callers:
 *     Feature_Arm64RestoreRegistersAroundDllMain__private_IsEnabledDeviceUsageNoInline @ 0x180160E78 (Feature_Arm64RestoreRegistersAroundDllMain__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_Arm64RestoreRegistersAroundDllMain__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_Arm64RestoreRegistersAroundDllMain__private_descriptor);
}
