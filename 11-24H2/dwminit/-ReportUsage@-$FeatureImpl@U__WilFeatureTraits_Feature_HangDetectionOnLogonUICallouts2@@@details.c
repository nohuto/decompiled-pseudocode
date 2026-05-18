/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionOnLogonUICallouts2@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18000CBC0
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionOnLogonUICallouts2@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18000D790 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionOnLogonUICallouts2@@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionOnLogonUICallouts2@@@details@wil@@QEAA_NXZ @ 0x18000D7D0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionOnLogon_ea_18000D7D0.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionOnLogonUICallouts2@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18000B880 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionOnLogonUICa.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000CC5C (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangDetectionOnLogonUICallouts2>::ReportUsage(
        wil::details *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        __int64 a4)
{
  int v5; // ebx
  int v6; // edi
  unsigned int v7; // r8d
  _QWORD v9[3]; // [rsp+40h] [rbp-18h] BYREF
  int v10; // [rsp+60h] [rbp+8h] BYREF
  __int16 v11; // [rsp+64h] [rbp+Ch]
  __int64 v12; // [rsp+78h] [rbp+20h]

  v12 = a4;
  v5 = a3;
  v6 = a2;
  v7 = *(_DWORD *)Feature_HangDetectionOnLogonUICallouts2__descriptor;
  if ( (*(_DWORD *)Feature_HangDetectionOnLogonUICallouts2__descriptor & 4) == 0 )
  {
    v12 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangDetectionOnLogonUICallouts2>::GetCachedFeatureEnabledState(
             a1,
             v9);
    v7 = v12;
  }
  v10 = 0;
  v11 = 1;
  return wil::details::ReportUsageToService((char *)a1 + 8, 57373699LL, (v7 >> 10) & 1, (v7 >> 11) & 1, &v10, v6, v5);
}
