/*
 * XREFs of Feature_BasicDisplayDeviceEscape_Fix__private_IsEnabledFallback @ 0x140072B70
 * Callers:
 *     Feature_BasicDisplayDeviceEscape_Fix__private_IsEnabledDeviceUsageNoInline @ 0x140072B38 (Feature_BasicDisplayDeviceEscape_Fix__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140061F08 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_BasicDisplayDeviceEscape_Fix__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_BasicDisplayDeviceEscape_Fix__private_descriptor);
}
