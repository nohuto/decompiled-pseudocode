/*
 * XREFs of Feature_RH5S__private_IsEnabledFallback @ 0x14000C8EC
 * Callers:
 *     Feature_RH5S__private_IsEnabledDeviceUsageNoInline @ 0x14000C8B4 (Feature_RH5S__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14001056C (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_RH5S__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_RH5S__private_descriptor);
}
