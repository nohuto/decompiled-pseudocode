/*
 * XREFs of Feature_Servicing_UACPerfIdle__private_IsEnabledFallback @ 0x14000BE68
 * Callers:
 *     Feature_Servicing_UACPerfIdle__private_IsEnabledDeviceUsageNoInline @ 0x14000BE30 (Feature_Servicing_UACPerfIdle__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14000D218 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_UACPerfIdle__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_Servicing_UACPerfIdle__private_descriptor);
}
