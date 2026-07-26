/*
 * XREFs of Feature_UDFDOD__private_IsEnabledFallback @ 0x1400E6E78
 * Callers:
 *     Feature_UDFDOD__private_IsEnabledDeviceUsageNoInline @ 0x1400E6E40 (Feature_UDFDOD__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140090368 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_UDFDOD__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_UDFDOD__private_descriptor);
}
