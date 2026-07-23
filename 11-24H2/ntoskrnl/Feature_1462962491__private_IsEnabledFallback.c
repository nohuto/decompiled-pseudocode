/*
 * XREFs of Feature_1462962491__private_IsEnabledFallback @ 0x140659140
 * Callers:
 *     Feature_1462962491__private_IsEnabledDeviceUsageNoInline @ 0x140659108 (Feature_1462962491__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404CA820 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_1462962491__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_1462962491__private_descriptor);
}
