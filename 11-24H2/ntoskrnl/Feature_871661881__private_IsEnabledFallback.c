/*
 * XREFs of Feature_871661881__private_IsEnabledFallback @ 0x140605ACC
 * Callers:
 *     Feature_871661881__private_IsEnabledDeviceUsageNoInline @ 0x140605A94 (Feature_871661881__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404CA820 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_871661881__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_871661881__private_descriptor);
}
