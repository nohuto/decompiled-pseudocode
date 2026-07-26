/*
 * XREFs of Feature_NDPQualitySpring25__private_IsEnabledFallback @ 0x14009F4C4
 * Callers:
 *     Feature_NDPQualitySpring25__private_IsEnabledDeviceUsageNoInline @ 0x14009F48C (Feature_NDPQualitySpring25__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14009FF00 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_NDPQualitySpring25__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_NDPQualitySpring25__private_descriptor);
}
