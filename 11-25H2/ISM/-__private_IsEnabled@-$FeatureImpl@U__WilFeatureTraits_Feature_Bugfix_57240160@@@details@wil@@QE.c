/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Bugfix_57240160@@@details@wil@@QEAA_NXZ @ 0x1800B10F8
 * Callers:
 *     ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x180013140 (-UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 *     ?SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z @ 0x1800AFD6C (-SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z.c)
 *     std::_Func_impl_no_alloc__lambda_09fdcce89584389a1a7da2575b3d008b__void__MIT_INPUT_FOCUS_MESSAGE_const___::_Do_call @ 0x1800B0CF0 (std--_Func_impl_no_alloc__lambda_09fdcce89584389a1a7da2575b3d008b__void__MIT_INPUT__ea_1800B0CF0.c)
 *     ?SetDelegateInformation@InputDelegationInputObjectProxy@@UEAAXIII@Z @ 0x180131DE0 (-SetDelegateInformation@InputDelegationInputObjectProxy@@UEAAXIII@Z.c)
 *     ?GetParentDelegationTarget@DWMInputRouter@@UEAAJPEAPEAUIFocusInputTarget@@@Z @ 0x1801977E0 (-GetParentDelegationTarget@DWMInputRouter@@UEAAJPEAPEAUIFocusInputTarget@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Bugfix_57240160@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800AE4C4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Bugfix_57240160@@@detail.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Bugfix_57240160@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800AF9A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Bugfix_57240160@@@details@wil@@QEAAX_NW4R.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Bugfix_57240160>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Bugfix_57240160>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Bugfix_57240160>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
