/*
 * XREFs of wil_details_RtlQueryFeatureConfiguration @ 0x1800776D8
 * Callers:
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x1800772BC (wil_RtlStagingConfig_QueryFeatureState.c)
 * Callees:
 *     ?wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z @ 0x180077084 (-wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil_details_RtlQueryFeatureConfiguration(unsigned int a1, unsigned int a2, __int64 a3, __int64 a4)
{
  FARPROC NtDllProcedureAddress; // rax

  NtDllProcedureAddress = (FARPROC)g_wil_details_pfnRtlQueryFeatureConfiguration;
  if ( g_wil_details_pfnRtlQueryFeatureConfiguration )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64))NtDllProcedureAddress)(a1, a2, a3, a4);
  NtDllProcedureAddress = wil_details_GetNtDllProcedureAddress("RtlQueryFeatureConfiguration");
  g_wil_details_pfnRtlQueryFeatureConfiguration = (__int64)NtDllProcedureAddress;
  if ( NtDllProcedureAddress )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64))NtDllProcedureAddress)(a1, a2, a3, a4);
  else
    return 3221225785LL;
}
