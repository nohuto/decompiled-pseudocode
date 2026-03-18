/*
 * XREFs of Feature_1825796408__private_IsEnabledFallback @ 0x14006792C
 * Callers:
 *     Feature_1825796408__private_IsEnabledDeviceUsageNoInline @ 0x1400678F4 (Feature_1825796408__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140061F08 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_1825796408__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_1825796408__private_descriptor);
}
