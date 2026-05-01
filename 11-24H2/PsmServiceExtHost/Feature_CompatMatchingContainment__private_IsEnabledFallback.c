/*
 * XREFs of Feature_CompatMatchingContainment__private_IsEnabledFallback @ 0x180098C40
 * Callers:
 *     Feature_CompatMatchingContainment__private_IsEnabledDeviceUsageNoInline @ 0x180098C10 (Feature_CompatMatchingContainment__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_CompatMatchingContainment__private_IsEnabledFallback(__int64 a1, int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_CompatMatchingContainment__private_descriptor);
}
