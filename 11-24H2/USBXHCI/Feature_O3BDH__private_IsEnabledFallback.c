/*
 * XREFs of Feature_O3BDH__private_IsEnabledFallback @ 0x140043E38
 * Callers:
 *     Feature_O3BDH__private_IsEnabledDeviceUsageNoInline @ 0x140043E00 (Feature_O3BDH__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1400459F8 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_O3BDH__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_O3BDH__private_descriptor);
}
