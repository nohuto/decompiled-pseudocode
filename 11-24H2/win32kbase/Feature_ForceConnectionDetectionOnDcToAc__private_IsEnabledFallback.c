/*
 * XREFs of Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledFallback @ 0x1401AED0C
 * Callers:
 *     Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline @ 0x1401AECD4 (Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140135FE4 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_ForceConnectionDetectionOnDcToAc__private_descriptor);
}
