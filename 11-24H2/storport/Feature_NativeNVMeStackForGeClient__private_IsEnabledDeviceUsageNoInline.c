/*
 * XREFs of Feature_NativeNVMeStackForGeClient__private_IsEnabledDeviceUsageNoInline @ 0x1400A53B0
 * Callers:
 *     DllInitialize @ 0x1400A3C90 (DllInitialize.c)
 * Callees:
 *     Feature_NativeNVMeStackForGeClient__private_IsEnabledFallback @ 0x1400A53E8 (Feature_NativeNVMeStackForGeClient__private_IsEnabledFallback.c)
 */

__int64 Feature_NativeNVMeStackForGeClient__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_NativeNVMeStackForGeClient__private_featureState & 0x10) != 0 )
    return Feature_NativeNVMeStackForGeClient__private_featureState & 1;
  else
    return Feature_NativeNVMeStackForGeClient__private_IsEnabledFallback(
             (unsigned int)Feature_NativeNVMeStackForGeClient__private_featureState,
             3LL);
}
