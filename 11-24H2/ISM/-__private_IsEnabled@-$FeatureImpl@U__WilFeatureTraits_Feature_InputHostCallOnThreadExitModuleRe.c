/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_InputHostCallOnThreadExitModuleRef@@@details@wil@@QEAA_NXZ @ 0x1801315A0
 * Callers:
 *     ?CallOnThreadExitStatic@CallOnThreadExit@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@K@Z @ 0x180130D10 (-CallOnThreadExitStatic@CallOnThreadExit@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@K@Z.c)
 *     ?Register@CallOnThreadExit@@YAXV?$function@$$A6AXW4CallbackReason@CallOnThreadExit@@@Z@std@@PEA_K@Z @ 0x180131240 (-Register@CallOnThreadExit@@YAXV-$function@$$A6AXW4CallbackReason@CallOnThreadExit@@@Z@std@@PEA_.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_InputHostCallOnThreadExitModuleRef@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180130ECC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_InputHostCallOnThreadExi.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputHostCallOnThreadExitModuleRef@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801314D4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputHostCallOnThreadExitModuleRef@@@deta.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputHostCallOnThreadExitModuleRef>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputHostCallOnThreadExitModuleRef>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputHostCallOnThreadExitModuleRef>::ReportUsage(
    (__int64)a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
