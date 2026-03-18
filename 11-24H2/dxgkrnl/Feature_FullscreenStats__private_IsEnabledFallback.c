/*
 * XREFs of Feature_FullscreenStats__private_IsEnabledFallback @ 0x14009D1AC
 * Callers:
 *     Feature_FullscreenStats__private_IsEnabledDeviceUsageNoInline @ 0x14009D174 (Feature_FullscreenStats__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140061F08 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_FullscreenStats__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_FullscreenStats__private_descriptor);
}
