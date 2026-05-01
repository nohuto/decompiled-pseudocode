/*
 * XREFs of wil_details_RtlQueryFeatureConfiguration @ 0x1800130D4
 * Callers:
 *     ?WilApiImpl_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x18000C4E0 (-WilApiImpl_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_T.c)
 * Callees:
 *     ?wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z @ 0x180017B2C (-wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001D010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil_details_RtlQueryFeatureConfiguration(unsigned int a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 (*NtDllProcedureAddress)(void); // rax

  NtDllProcedureAddress = (__int64 (*)(void))g_wil_details_pfnRtlQueryFeatureConfiguration;
  if ( g_wil_details_pfnRtlQueryFeatureConfiguration )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64))NtDllProcedureAddress)(a1, a2, a3, a4);
  NtDllProcedureAddress = wil_details_GetNtDllProcedureAddress("RtlQueryFeatureConfiguration");
  g_wil_details_pfnRtlQueryFeatureConfiguration = (__int64)NtDllProcedureAddress;
  if ( NtDllProcedureAddress )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64))NtDllProcedureAddress)(a1, a2, a3, a4);
  else
    return 3221225785LL;
}
