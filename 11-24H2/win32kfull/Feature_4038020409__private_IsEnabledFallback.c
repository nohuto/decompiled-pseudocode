/*
 * XREFs of Feature_4038020409__private_IsEnabledFallback @ 0x140292464
 * Callers:
 *     Feature_4038020409__private_IsEnabledDeviceUsageNoInline @ 0x14029242C (Feature_4038020409__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1402677D8 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_4038020409__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_4038020409__private_descriptor);
}
