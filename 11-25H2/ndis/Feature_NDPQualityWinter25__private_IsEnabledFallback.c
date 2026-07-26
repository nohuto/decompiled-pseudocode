/*
 * XREFs of Feature_NDPQualityWinter25__private_IsEnabledFallback @ 0x14009F518
 * Callers:
 *     Feature_NDPQualityWinter25__private_IsEnabledDeviceUsageNoInline @ 0x14009F4E0 (Feature_NDPQualityWinter25__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14009FF00 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_NDPQualityWinter25__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_NDPQualityWinter25__private_descriptor);
}
