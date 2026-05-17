/*
 * XREFs of Feature_3078821176__private_IsEnabledFallback @ 0x18015CF74
 * Callers:
 *     Feature_3078821176__private_IsEnabledDeviceUsageNoInline @ 0x18015CF44 (Feature_3078821176__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_3078821176__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_3078821176__private_descriptor);
}
