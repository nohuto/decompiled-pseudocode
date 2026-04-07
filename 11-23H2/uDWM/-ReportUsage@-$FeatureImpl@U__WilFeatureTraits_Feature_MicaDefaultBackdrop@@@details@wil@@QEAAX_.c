/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MicaDefaultBackdrop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180033A7C
 * Callers:
 *     ?GetEffectiveSystemBackdropType@CTopLevelWindow@@AEBA?AW4SYSTEMBACKDROP_TYPE@@XZ @ 0x1800339F0 (-GetEffectiveSystemBackdropType@CTopLevelWindow@@AEBA-AW4SYSTEMBACKDROP_TYPE@@XZ.c)
 *     ?CalculateBackgroundType@CTopLevelWindow@@AEBA?AW4BackgroundType@1@XZ @ 0x18003B620 (-CalculateBackgroundType@CTopLevelWindow@@AEBA-AW4BackgroundType@1@XZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MicaDefaultBackdrop@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800243CC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MicaDefaultBackdrop@@@de.c)
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x180036BE0 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 *     wil_details_MapReportingKind @ 0x18005F448 (wil_details_MapReportingKind.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_MicaDefaultBackdrop>::ReportUsage(
        volatile signed __int32 *a1,
        unsigned __int8 a2,
        char a3,
        __int64 a4))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  unsigned int v5; // edi
  int v6; // eax
  unsigned int v7; // r10d
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  char v9; // [rsp+30h] [rbp-48h]
  signed __int32 v10[10]; // [rsp+50h] [rbp-28h] BYREF
  int v11; // [rsp+80h] [rbp+8h] BYREF
  char v12; // [rsp+84h] [rbp+Ch]
  int v13; // [rsp+90h] [rbp+18h] BYREF
  __int64 v14; // [rsp+98h] [rbp+20h]

  v14 = a4;
  LOBYTE(v13) = a3;
  v5 = a2;
  if ( (*a1 & 4) == 0 )
    v14 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_MicaDefaultBackdrop>::GetCachedFeatureEnabledState(
                       a1,
                       v10);
  v11 = 0;
  v12 = 3;
  v13 = 3;
  v6 = wil_details_MapReportingKind(3LL, v5);
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))wil::details::ReportUsageToServiceDirect(
                                                                                                     a1 + 2,
                                                                                                     35362067LL,
                                                                                                     (v7 >> 10) & 1,
                                                                                                     (v7 >> 11) & 1,
                                                                                                     v6);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
    {
      v9 = 0;
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook(35362067LL, &v11, 0LL, v5, &v13, 0LL, v9, 1LL);
    }
  }
  return result;
}
