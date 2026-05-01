/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarJumplistOnHover@@@details@wil@@QEAA_NXZ @ 0x1803963F8
 * Callers:
 *     ??1CJumpViewExperienceManager@@UEAA@XZ @ 0x1802167AC (--1CJumpViewExperienceManager@@UEAA@XZ.c)
 *     ?GetMonitorInformation@CJumpViewExperienceManager@@AEBAJUtagPOINT@@AEAUtagRECT@@AEAIAEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x1802423AC (-GetMonitorInformation@CJumpViewExperienceManager@@AEBAJUtagPOINT@@AEAUtagRECT@@AEAIAEAW4EDGEUI_.c)
 *     ?OnViewHidden@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180242590 (-OnViewHidden@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?Close@CJumpViewExperienceManager@@UEAAJXZ @ 0x1803938F0 (-Close@CJumpViewExperienceManager@@UEAAJXZ.c)
 *     ?DismissImpl@CJumpViewExperienceManager@@AEAAJ_N@Z @ 0x180393A4C (-DismissImpl@CJumpViewExperienceManager@@AEAAJ_N@Z.c)
 *     ?EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180393DB8 (-EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewCloaking@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180395360 (-OnViewCloaking@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180395420 (-OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x180395A50 (-Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarJumplistOnHover@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803944F0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarJumplistOnHover@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarJumplistOnHover@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803959C8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarJumplistOnHover@@@details@wil@@QEA.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_TaskbarJumplistOnHover>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TaskbarJumplistOnHover>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TaskbarJumplistOnHover>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
