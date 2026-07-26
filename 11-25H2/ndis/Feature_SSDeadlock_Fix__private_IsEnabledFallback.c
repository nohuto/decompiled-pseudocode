/*
 * XREFs of Feature_SSDeadlock_Fix__private_IsEnabledFallback @ 0x1400A9830
 * Callers:
 *     Feature_SSDeadlock_Fix__private_IsEnabledDeviceUsageNoInline @ 0x1400A97F8 (Feature_SSDeadlock_Fix__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14009FF00 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_SSDeadlock_Fix__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_SSDeadlock_Fix__private_descriptor);
}
