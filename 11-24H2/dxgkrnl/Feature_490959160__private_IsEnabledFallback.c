/*
 * XREFs of Feature_490959160__private_IsEnabledFallback @ 0x14007BFD8
 * Callers:
 *     Feature_490959160__private_IsEnabledDeviceUsageNoInline @ 0x14007BFA0 (Feature_490959160__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140061F08 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_490959160__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_490959160__private_descriptor);
}
