/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GameConfigStoreGameListEntries@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18000ED88
 * Callers:
 *     ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800108AC (-_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_GameConfigStoreGameListEntries@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18000DAB4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_GameConfigStoreGameListE.c)
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x18000EE6C (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 (__fastcall *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_GameConfigStoreGameListEntries>::ReportUsage(
        wil::details *a1,
        unsigned __int8 a2,
        char a3,
        __int64 a4))(_QWORD, _QWORD, _QWORD)
{
  __int64 v4; // r8
  int v6; // edi
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD); // rax
  _QWORD v8[5]; // [rsp+50h] [rbp-28h] BYREF
  int v9; // [rsp+80h] [rbp+8h] BYREF
  __int16 v10; // [rsp+84h] [rbp+Ch]
  int v11; // [rsp+90h] [rbp+18h]
  __int64 v12; // [rsp+98h] [rbp+20h]

  v12 = a4;
  LOBYTE(v11) = a3;
  LODWORD(v4) = *(_DWORD *)a1;
  v6 = a2;
  if ( (*(_DWORD *)a1 & 4) == 0 )
  {
    v4 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_GameConfigStoreGameListEntries>::GetCachedFeatureEnabledState(
            a1,
            v8);
    v12 = v4;
  }
  v9 = 0;
  v10 = 3;
  v11 = 3;
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))wil::details::ReportUsageToServiceDirect(
                                                             (char *)a1 + 8,
                                                             11973136LL,
                                                             ((unsigned int)v4 >> 10) & 1,
                                                             ((unsigned int)v4 >> 11) & 1,
                                                             4 * (v6 ^ 1u) + 2,
                                                             0);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook(11973136LL, &v9, 0LL);
  }
  return result;
}
