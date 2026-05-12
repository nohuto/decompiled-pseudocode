/*
 * XREFs of Feature_NativeNVMeStackForGeServer__private_IsEnabledDeviceUsageNoInline @ 0x1400A5404
 * Callers:
 *     DllInitialize @ 0x1400A3C90 (DllInitialize.c)
 * Callees:
 *     Feature_NativeNVMeStackForGeServer__private_IsEnabledFallback @ 0x1400A543C (Feature_NativeNVMeStackForGeServer__private_IsEnabledFallback.c)
 */

__int64 Feature_NativeNVMeStackForGeServer__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_NativeNVMeStackForGeServer__private_featureState & 0x10) != 0 )
    return Feature_NativeNVMeStackForGeServer__private_featureState & 1;
  else
    return Feature_NativeNVMeStackForGeServer__private_IsEnabledFallback(
             (unsigned int)Feature_NativeNVMeStackForGeServer__private_featureState,
             3LL);
}
