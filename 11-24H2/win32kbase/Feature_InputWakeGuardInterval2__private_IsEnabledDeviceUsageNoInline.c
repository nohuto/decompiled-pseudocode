/*
 * XREFs of Feature_InputWakeGuardInterval2__private_IsEnabledDeviceUsageNoInline @ 0x1401E3D20
 * Callers:
 *     RIMIsInputSuppressed @ 0x14005D5E4 (RIMIsInputSuppressed.c)
 *     RIMSetDeviceInputMode @ 0x14017D314 (RIMSetDeviceInputMode.c)
 * Callees:
 *     Feature_InputWakeGuardInterval2__private_IsEnabledFallback @ 0x1401E3D58 (Feature_InputWakeGuardInterval2__private_IsEnabledFallback.c)
 */

__int64 Feature_InputWakeGuardInterval2__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_InputWakeGuardInterval2__private_featureState & 0x10) != 0 )
    return Feature_InputWakeGuardInterval2__private_featureState & 1;
  else
    return Feature_InputWakeGuardInterval2__private_IsEnabledFallback(
             (unsigned int)Feature_InputWakeGuardInterval2__private_featureState,
             3LL);
}
