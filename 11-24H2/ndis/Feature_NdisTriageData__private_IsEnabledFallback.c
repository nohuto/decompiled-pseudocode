/*
 * XREFs of Feature_NdisTriageData__private_IsEnabledFallback @ 0x140092F90
 * Callers:
 *     Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline @ 0x140092F58 (Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140090368 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_NdisTriageData__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_NdisTriageData__private_descriptor);
}
