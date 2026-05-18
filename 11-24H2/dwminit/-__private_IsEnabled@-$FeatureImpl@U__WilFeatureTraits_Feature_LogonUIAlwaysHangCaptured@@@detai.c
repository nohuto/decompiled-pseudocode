/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_LogonUIAlwaysHangCaptured@@@details@wil@@QEAA_NXZ @ 0x18000D810
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_fe166ee785c77a0b82d43104ca244eaa_@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18000A7C0 (-_lambda_invoker_cdecl_@_lambda_fe166ee785c77a0b82d43104ca244eaa_@@CAXPEAU_TP_CALLBACK_INSTANCE@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_LogonUIAlwaysHangCaptured@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18000B968 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_LogonUIAlwaysHangCapture.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000CC5C (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_LogonUIAlwaysHangCaptured>::__private_IsEnabled(
        wil::details *a1)
{
  wil::details *v2; // rcx
  unsigned __int8 v3; // bl
  unsigned int v4; // r8d
  int v6; // [rsp+50h] [rbp+8h] BYREF
  __int16 v7; // [rsp+54h] [rbp+Ch]
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_LogonUIAlwaysHangCaptured>::GetCachedFeatureEnabledState(a1, &v8);
  v3 = v8 & 1;
  v4 = *(_DWORD *)Feature_LogonUIAlwaysHangCaptured__descriptor;
  if ( (*(_DWORD *)Feature_LogonUIAlwaysHangCaptured__descriptor & 4) == 0 )
  {
    v8 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_LogonUIAlwaysHangCaptured>::GetCachedFeatureEnabledState(
            v2,
            &v9);
    v4 = v8;
  }
  v6 = 0;
  v7 = 2;
  wil::details::ReportUsageToService((__int64)a1 + 8, 0x3A5F88Cu, (v4 >> 10) & 1, (v4 >> 11) & 1, (__int64)&v6, v3, 3);
  return v3;
}
