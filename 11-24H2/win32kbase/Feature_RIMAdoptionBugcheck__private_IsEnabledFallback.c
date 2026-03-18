/*
 * XREFs of Feature_RIMAdoptionBugcheck__private_IsEnabledFallback @ 0x1401D3114
 * Callers:
 *     Feature_RIMAdoptionBugcheck__private_IsEnabledDeviceUsageNoInline @ 0x1401D30DC (Feature_RIMAdoptionBugcheck__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140135FE4 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_RIMAdoptionBugcheck__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_RIMAdoptionBugcheck__private_descriptor);
}
