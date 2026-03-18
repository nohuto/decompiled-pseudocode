/*
 * XREFs of Feature_178219323__private_IsEnabledFallback @ 0x1C0140388
 * Callers:
 *     Feature_178219323__private_IsEnabledDeviceUsage @ 0x1C0140350 (Feature_178219323__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C01392B4 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_178219323__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_178219323__private_descriptor);
}
