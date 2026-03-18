/*
 * XREFs of Feature_AllowAutoRotateToDockOrientationPolicy__private_IsEnabledFallback @ 0x14006D0F8
 * Callers:
 *     Feature_AllowAutoRotateToDockOrientationPolicy__private_IsEnabledDeviceUsageNoInline @ 0x14006D0C0 (Feature_AllowAutoRotateToDockOrientationPolicy__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14006164C (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_AllowAutoRotateToDockOrientationPolicy__private_IsEnabledFallback(
        __int64 a1,
        unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_AllowAutoRotateToDockOrientationPolicy__private_descriptor);
}
