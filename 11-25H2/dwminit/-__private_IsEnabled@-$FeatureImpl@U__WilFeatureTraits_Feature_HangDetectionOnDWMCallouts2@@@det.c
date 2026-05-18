/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2@@@details@wil@@QEAA_NXZ @ 0x18000D040
 * Callers:
 *     ??0CallWithHangTimeout@@QEAA@W4TimeoutDuration@0@@Z @ 0x18000A760 (--0CallWithHangTimeout@@QEAA@W4TimeoutDuration@0@@Z.c)
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x18000AED0 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18000B590 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionOnDWMCallou.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000C73C (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned int v2; // r8d
  unsigned __int8 v3; // di
  int v5; // [rsp+50h] [rbp+8h] BYREF
  __int16 v6; // [rsp+54h] [rbp+Ch]
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2>::GetCachedFeatureEnabledState(
    a1,
    &v7);
  v2 = *(_DWORD *)a1;
  v3 = v7 & 1;
  if ( (*(_DWORD *)a1 & 4) == 0 )
  {
    v7 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2>::GetCachedFeatureEnabledState(
            a1,
            &v8);
    v2 = v7;
  }
  v5 = 0;
  v6 = 1;
  wil::details::ReportUsageToService((__int64)a1 + 8, 0x36B7406u, (v2 >> 10) & 1, (v2 >> 11) & 1, (__int64)&v5, v3, 3);
  return v3;
}
