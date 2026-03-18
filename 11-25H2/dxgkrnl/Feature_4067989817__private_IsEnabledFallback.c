/*
 * XREFs of Feature_4067989817__private_IsEnabledFallback @ 0x140068618
 * Callers:
 *     Feature_4067989817__private_IsEnabledDeviceUsageNoInline @ 0x1400685E0 (Feature_4067989817__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14006164C (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_4067989817__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_4067989817__private_descriptor);
}
