/*
 * XREFs of wil_details_RtlNotifyFeatureUsage @ 0x1800776EC
 * Callers:
 *     wil_RtlStagingConfig_RecordFeatureUsage @ 0x1800773FC (wil_RtlStagingConfig_RecordFeatureUsage.c)
 * Callees:
 *     ?wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z @ 0x1800770E4 (-wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z.c)
 */

__int64 __fastcall wil_details_RtlNotifyFeatureUsage(__int64 a1)
{
  FARPROC NtDllProcedureAddress; // rax

  NtDllProcedureAddress = (FARPROC)g_wil_details_pfnRtlNotifyFeatureUsage;
  if ( g_wil_details_pfnRtlNotifyFeatureUsage )
    return ((__int64 (__fastcall *)(__int64))NtDllProcedureAddress)(a1);
  NtDllProcedureAddress = wil_details_GetNtDllProcedureAddress("RtlNotifyFeatureUsage");
  g_wil_details_pfnRtlNotifyFeatureUsage = (__int64)NtDllProcedureAddress;
  if ( NtDllProcedureAddress )
    return ((__int64 (__fastcall *)(__int64))NtDllProcedureAddress)(a1);
  else
    return 3221225785LL;
}
