/*
 * XREFs of Feature_CompositionTextureDX12Support__private_IsEnabledFallback @ 0x14009D1F4
 * Callers:
 *     Feature_CompositionTextureDX12Support__private_IsEnabledDeviceUsageNoInline @ 0x14009D1BC (Feature_CompositionTextureDX12Support__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14006164C (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_CompositionTextureDX12Support__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_CompositionTextureDX12Support__private_descriptor);
}
