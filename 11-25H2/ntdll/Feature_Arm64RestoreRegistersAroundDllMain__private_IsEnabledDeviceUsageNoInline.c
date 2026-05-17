/*
 * XREFs of Feature_Arm64RestoreRegistersAroundDllMain__private_IsEnabledDeviceUsageNoInline @ 0x180160E78
 * Callers:
 *     LdrpCallInitRoutine @ 0x180074730 (LdrpCallInitRoutine.c)
 * Callees:
 *     <none>
 */

__int64 Feature_Arm64RestoreRegistersAroundDllMain__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Arm64RestoreRegistersAroundDllMain__private_featureState & 0x10) != 0 )
    return Feature_Arm64RestoreRegistersAroundDllMain__private_featureState & 1;
  else
    return Feature_Arm64RestoreRegistersAroundDllMain__private_IsEnabledFallback(
             (unsigned int)Feature_Arm64RestoreRegistersAroundDllMain__private_featureState,
             3LL);
}
