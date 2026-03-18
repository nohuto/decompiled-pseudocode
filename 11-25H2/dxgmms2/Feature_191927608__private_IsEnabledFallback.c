/*
 * XREFs of Feature_191927608__private_IsEnabledFallback @ 0x14004DC4C
 * Callers:
 *     Feature_191927608__private_IsEnabledDeviceUsageNoInline @ 0x14004DC14 (Feature_191927608__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14004D570 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_191927608__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_191927608__private_descriptor);
}
