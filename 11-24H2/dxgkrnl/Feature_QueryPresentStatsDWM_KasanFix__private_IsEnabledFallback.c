/*
 * XREFs of Feature_QueryPresentStatsDWM_KasanFix__private_IsEnabledFallback @ 0x1400943EC
 * Callers:
 *     Feature_QueryPresentStatsDWM_KasanFix__private_IsEnabledDeviceUsageNoInline @ 0x1400943B4 (Feature_QueryPresentStatsDWM_KasanFix__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140061F08 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_QueryPresentStatsDWM_KasanFix__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_QueryPresentStatsDWM_KasanFix__private_descriptor);
}
