/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180036E68
 * Callers:
 *     ?_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180037464 (-_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJX.c)
 * Callees:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x18000ED6C (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18003686C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@w.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 (__fastcall *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameMode>::ReportUsage(
        __int64 a1,
        unsigned __int8 a2,
        char a3,
        __int64 a4))(_QWORD, _QWORD, _QWORD)
{
  __int64 v4; // r8
  int v6; // edi
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v8; // [rsp+30h] [rbp-48h]
  _QWORD v9[5]; // [rsp+50h] [rbp-28h] BYREF
  int v10; // [rsp+80h] [rbp+8h] BYREF
  __int16 v11; // [rsp+84h] [rbp+Ch]
  int v12; // [rsp+90h] [rbp+18h]
  __int64 v13; // [rsp+98h] [rbp+20h]

  v13 = a4;
  LOBYTE(v12) = a3;
  LODWORD(v4) = *(_DWORD *)a1;
  v6 = a2;
  if ( (*(_DWORD *)a1 & 4) == 0 )
  {
    v4 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameMode>::GetCachedFeatureEnabledState(
            (wil::details *)a1,
            v9);
    v13 = v4;
  }
  v10 = 0;
  v11 = 3;
  v12 = 3;
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))wil::details::ReportUsageToServiceDirect(
                                                             (struct wil_details_FeatureReportingCache *)(a1 + 8),
                                                             0xA8161Eu,
                                                             ((unsigned int)v4 >> 10) & 1,
                                                             ((unsigned int)v4 >> 11) & 1,
                                                             4 * (v6 ^ 1u) + 2,
                                                             0,
                                                             v8,
                                                             3);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook(11015710LL, &v10, 0LL);
  }
  return result;
}
