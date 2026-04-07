/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AccentColorTitlebar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180009514
 * Callers:
 *     ?CalculateBackgroundType@CTopLevelWindow@@AEBA?AW4BackgroundType@1@XZ @ 0x18003B620 (-CalculateBackgroundType@CTopLevelWindow@@AEBA-AW4BackgroundType@1@XZ.c)
 *     ?UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ @ 0x18003B810 (-UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_AccentColorTitlebar@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800241EC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_AccentColorTitlebar@@@de.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180036B20 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_AccentColorTitlebar>::ReportUsage(
        _DWORD *a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  int v6; // edi
  _BYTE v8[24]; // [rsp+40h] [rbp-18h] BYREF
  int v9; // [rsp+60h] [rbp+8h] BYREF
  char v10; // [rsp+64h] [rbp+Ch]
  __int64 v11; // [rsp+78h] [rbp+20h]

  v11 = a4;
  LODWORD(v4) = *a1;
  v6 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v4 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_AccentColorTitlebar>::GetCachedFeatureEnabledState(
                      a1,
                      v8);
    v11 = v4;
  }
  v9 = 0;
  v10 = 3;
  return wil::details::ReportUsageToService(
           a1 + 2,
           37015830LL,
           ((unsigned int)v4 >> 10) & 1,
           ((unsigned int)v4 >> 11) & 1,
           &v9,
           v6,
           3);
}
