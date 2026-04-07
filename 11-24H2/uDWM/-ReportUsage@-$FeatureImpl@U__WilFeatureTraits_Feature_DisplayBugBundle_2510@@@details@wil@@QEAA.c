/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DisplayBugBundle_2510@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800BB154
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DisplayBugBundle_2510@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800BB7F8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DisplayBugBundle_2510@@@details@w.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180007EA0 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DisplayBugBundle_2510@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800B9248 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DisplayBugBundle_2510@@@.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisplayBugBundle_2510>::ReportUsage(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  unsigned int v6; // edi
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF
  int v8; // [rsp+60h] [rbp+8h] BYREF
  __int16 v9; // [rsp+64h] [rbp+Ch]
  __int64 v10; // [rsp+78h] [rbp+20h]

  v10 = a4;
  LODWORD(v4) = *(_DWORD *)a1;
  v6 = a2;
  if ( (*(_DWORD *)a1 & 4) == 0 )
  {
    v4 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisplayBugBundle_2510>::GetCachedFeatureEnabledState(
            (wil::details *)a1,
            v7);
    v10 = v4;
  }
  v9 = 2;
  v8 = 0;
  wil::details::ReportUsageToService(
    (struct wil_details_FeatureReportingCache *)(a1 + 8),
    0x37EF03Au,
    ((unsigned int)v4 >> 10) & 1,
    ((unsigned int)v4 >> 11) & 1,
    (__int64)&v8,
    v6,
    0);
}
