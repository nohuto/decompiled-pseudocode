/*
 * XREFs of Feature_Servicing_VARangeHoldReference__private_IsEnabledFallback @ 0x14004C5E4
 * Callers:
 *     Feature_Servicing_VARangeHoldReference__private_IsEnabledDeviceUsageNoInline @ 0x14004C5AC (Feature_Servicing_VARangeHoldReference__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14004CE2C (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_VARangeHoldReference__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_Servicing_VARangeHoldReference__private_descriptor);
}
