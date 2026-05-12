/*
 * XREFs of Feature_SteelixLbaSizeFix__private_IsEnabledFallback @ 0x1400904C8
 * Callers:
 *     Feature_SteelixLbaSizeFix__private_IsEnabledDeviceUsageNoInline @ 0x140090490 (Feature_SteelixLbaSizeFix__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140068770 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_SteelixLbaSizeFix__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_SteelixLbaSizeFix__private_descriptor);
}
