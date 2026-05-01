/*
 * XREFs of wil_details_RtlNotifyFeatureUsage @ 0x18007768C
 * Callers:
 *     wil_RtlStagingConfig_RecordFeatureUsage @ 0x18007739C (wil_RtlStagingConfig_RecordFeatureUsage.c)
 * Callees:
 *     ?wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z @ 0x180077084 (-wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z.c)
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
