/*
 * XREFs of Feature_Servicing_StorageSetProperty_BufferCheck__private_IsEnabledFallback @ 0x1400565D8
 * Callers:
 *     Feature_Servicing_StorageSetProperty_BufferCheck__private_IsEnabledDeviceUsageNoInline @ 0x1400565A0 (Feature_Servicing_StorageSetProperty_BufferCheck__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140068770 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_StorageSetProperty_BufferCheck__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_Servicing_StorageSetProperty_BufferCheck__private_descriptor);
}
