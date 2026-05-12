/*
 * XREFs of Feature_Servicing_NativeNVMe__private_IsEnabledDeviceUsageNoInline @ 0x1400A5458
 * Callers:
 *     DllInitialize @ 0x1400A3C90 (DllInitialize.c)
 * Callees:
 *     Feature_Servicing_NativeNVMe__private_IsEnabledFallback @ 0x1400A5490 (Feature_Servicing_NativeNVMe__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_NativeNVMe__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_NativeNVMe__private_featureState & 0x10) != 0 )
    return Feature_Servicing_NativeNVMe__private_featureState & 1;
  else
    return Feature_Servicing_NativeNVMe__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_NativeNVMe__private_featureState,
             3LL);
}
