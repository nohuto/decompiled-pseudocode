/*
 * XREFs of Feature_HandleIFlipConvertedTokens__private_IsEnabledFallback @ 0x140098460
 * Callers:
 *     Feature_HandleIFlipConvertedTokens__private_IsEnabledDeviceUsageNoInline @ 0x140098428 (Feature_HandleIFlipConvertedTokens__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14006164C (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_HandleIFlipConvertedTokens__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_HandleIFlipConvertedTokens__private_descriptor);
}
