/*
 * XREFs of Feature_UXTM__private_IsEnabledFallback @ 0x140044598
 * Callers:
 *     Feature_UXTM__private_IsEnabledDeviceUsageNoInline @ 0x140044560 (Feature_UXTM__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14003FD74 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_UXTM__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_UXTM__private_descriptor);
}
