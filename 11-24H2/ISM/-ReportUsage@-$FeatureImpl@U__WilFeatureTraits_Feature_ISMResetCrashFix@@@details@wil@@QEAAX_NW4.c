/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ISMResetCrashFix@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C9ED0
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ISMResetCrashFix@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800CB0D8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ISMResetCrashFix@@@details@wil@@Q.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ISMResetCrashFix@@@details@wil@@QEAA_NXZ @ 0x1800D4340 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ISMResetCrashFix@@@d_ea_1800D4340.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18005FFBC (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ISMResetCrashFix@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800C834C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ISMResetCrashFix@@@detai.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ISMResetCrashFix>::ReportUsage(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        __int64 a4)
{
  int v5; // ebx
  unsigned int v6; // edi
  unsigned int v7; // r8d
  _QWORD v8[3]; // [rsp+40h] [rbp-18h] BYREF
  int v9; // [rsp+60h] [rbp+8h] BYREF
  __int16 v10; // [rsp+64h] [rbp+Ch]
  __int64 v11; // [rsp+78h] [rbp+20h]

  v11 = a4;
  v5 = a3;
  v6 = a2;
  v7 = *(_DWORD *)Feature_ISMResetCrashFix__descriptor;
  if ( (*(_DWORD *)Feature_ISMResetCrashFix__descriptor & 4) == 0 )
  {
    v11 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_ISMResetCrashFix>::GetCachedFeatureEnabledState(
             (wil::details *)a1,
             v8);
    v7 = v11;
  }
  v9 = 0;
  v10 = 2;
  wil::details::ReportUsageToService(
    (struct wil_details_FeatureReportingCache *)(a1 + 8),
    0x2E7F1D9u,
    (v7 >> 10) & 1,
    (v7 >> 11) & 1,
    (__int64)&v9,
    v6,
    v5);
}
