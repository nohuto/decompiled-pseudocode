/*
 * XREFs of Feature_HdrBrightnessPolicy__private_IsEnabledFallback @ 0x14006E270
 * Callers:
 *     Feature_HdrBrightnessPolicy__private_IsEnabledDeviceUsageNoInline @ 0x14006E238 (Feature_HdrBrightnessPolicy__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14006164C (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_HdrBrightnessPolicy__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &wil_details_featureDescriptors_a);
}
