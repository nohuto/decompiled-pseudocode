/*
 * XREFs of Feature_3388731705__private_IsEnabledFallback @ 0x14065C534
 * Callers:
 *     Feature_3388731705__private_IsEnabledDeviceUsageNoInline @ 0x14065C4FC (Feature_3388731705__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404CA820 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_3388731705__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_3388731705__private_descriptor);
}
