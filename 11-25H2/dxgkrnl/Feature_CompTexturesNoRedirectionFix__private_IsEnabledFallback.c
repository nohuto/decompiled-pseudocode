/*
 * XREFs of Feature_CompTexturesNoRedirectionFix__private_IsEnabledFallback @ 0x140097BF8
 * Callers:
 *     Feature_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsageNoInline @ 0x140097BC0 (Feature_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14006164C (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_CompTexturesNoRedirectionFix__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_CompTexturesNoRedirectionFix__private_descriptor);
}
