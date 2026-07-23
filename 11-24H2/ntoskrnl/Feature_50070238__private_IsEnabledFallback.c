/*
 * XREFs of Feature_50070238__private_IsEnabledFallback @ 0x14069BC64
 * Callers:
 *     Feature_50070238__private_IsEnabledDeviceUsageNoInline @ 0x14069BC2C (Feature_50070238__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404CA820 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_50070238__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_50070238__private_descriptor);
}
