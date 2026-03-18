/*
 * XREFs of Feature_O3BDH__private_IsEnabledFallback @ 0x140044294
 * Callers:
 *     Feature_O3BDH__private_IsEnabledDeviceUsageNoInline @ 0x14004425C (Feature_O3BDH__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14003FD74 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_O3BDH__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_O3BDH__private_descriptor);
}
