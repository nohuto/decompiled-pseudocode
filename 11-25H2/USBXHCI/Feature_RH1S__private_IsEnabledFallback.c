/*
 * XREFs of Feature_RH1S__private_IsEnabledFallback @ 0x1400442E8
 * Callers:
 *     Feature_RH1S__private_IsEnabledDeviceUsageNoInline @ 0x1400442B0 (Feature_RH1S__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14003FD74 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_RH1S__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_RH1S__private_descriptor);
}
