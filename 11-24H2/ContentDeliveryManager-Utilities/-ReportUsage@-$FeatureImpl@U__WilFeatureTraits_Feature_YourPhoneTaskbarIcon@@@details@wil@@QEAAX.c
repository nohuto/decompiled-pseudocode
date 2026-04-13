/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180039B10
 * Callers:
 *     ??R_lambda_3a3b929e5d63e7f37c8f1fb2c9733fad_@@QEBA@XZ @ 0x18002BA50 (--R_lambda_3a3b929e5d63e7f37c8f1fb2c9733fad_@@QEBA@XZ.c)
 *     ?CreateYourPhoneTaskbarIconIfNeeded@Pinning@Mobility@@YAXKKK@Z @ 0x18002E784 (-CreateYourPhoneTaskbarIconIfNeeded@Pinning@Mobility@@YAXKKK@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180030E6C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@d.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180039BA4 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::ReportUsage(
        wil::details *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        __int64 a4)
{
  int v4; // edi
  unsigned int v6; // r8d
  int v7; // esi
  _QWORD v9[3]; // [rsp+40h] [rbp-18h] BYREF
  int v10; // [rsp+60h] [rbp+8h] BYREF
  __int16 v11; // [rsp+64h] [rbp+Ch]
  __int64 v12; // [rsp+78h] [rbp+20h]

  v12 = a4;
  v4 = a3;
  v6 = *(_DWORD *)a1;
  v7 = a2;
  if ( (*(_DWORD *)a1 & 4) == 0 )
  {
    v12 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetCachedFeatureEnabledState(
             a1,
             v9);
    v6 = v12;
  }
  v10 = 2;
  v11 = 3;
  return wil::details::ReportUsageToService((char *)a1 + 8, 16257538LL, (v6 >> 10) & 1, (v6 >> 11) & 1, &v10, v7, v4);
}
