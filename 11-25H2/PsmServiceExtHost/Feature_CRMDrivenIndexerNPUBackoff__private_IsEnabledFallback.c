/*
 * XREFs of Feature_CRMDrivenIndexerNPUBackoff__private_IsEnabledFallback @ 0x180078DA4
 * Callers:
 *     Feature_CRMDrivenIndexerNPUBackoff__private_IsEnabledDeviceUsageNoInline @ 0x180078D74 (Feature_CRMDrivenIndexerNPUBackoff__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_CRMDrivenIndexerNPUBackoff__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_CRMDrivenIndexerNPUBackoff__private_descriptor);
}
