/*
 * XREFs of ?DismissImpl@CJumpViewExperienceManager@@AEAAJ_N@Z @ 0x180393A4C
 * Callers:
 *     ?ActiveZBandChangedForMonitor@CJumpViewExperienceManager@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x1801DC2A0 (-ActiveZBandChangedForMonitor@CJumpViewExperienceManager@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_C.c)
 *     ?DisplaySettingsChange@CJumpViewExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18021E910 (-DisplaySettingsChange@CJumpViewExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONIT.c)
 *     ?Dismiss@CJumpViewExperienceManager@@UEAAJXZ @ 0x1802213D0 (-Dismiss@CJumpViewExperienceManager@@UEAAJXZ.c)
 *     ?OnIdleStateChanged@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@_N@Z @ 0x180232740 (-OnIdleStateChanged@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@_N@Z.c)
 *     CJumpViewExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x180393BB0 (CJumpViewExperienceManager--DismissRequested$_ResumeCoro$1.c)
 *     ?OnEventQueued@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803950F0 (-OnEventQueued@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@P.c)
 *     ?OnSetForegroundFailed@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803952B0 (-OnSetForegroundFailed@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x1800AEAEC (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?ReportVisibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW4ViewVisibility@Shell@UI@WindowsUdk@3@@Z @ 0x1802409D0 (-ReportVisibility@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@She.c)
 *     ?StopMouseHoverHook@CJumpViewExperienceManager@@AEAAXXZ @ 0x1803962E0 (-StopMouseHoverHook@CJumpViewExperienceManager@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarJumplistOnHover@@@details@wil@@QEAA_NXZ @ 0x1803963F8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarJumplistOnHover@@@details@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CJumpViewExperienceManager::DismissImpl(CJumpViewExperienceManager *this, char a2)
{
  int v4; // eax
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v8; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_TaskbarJumplistOnHover>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_TaskbarJumplistOnHover>::GetImpl'::`2'::impl) )
  {
    if ( *((_DWORD *)this + 125) == 5 && g_hoverState && !*(&g_hoverState + 1) )
      return 0LL;
    CJumpViewExperienceManager::StopMouseHoverHook(this);
  }
  if ( *((_DWORD *)this + 48) == 2 )
  {
    if ( *((_QWORD *)this + 22) )
    {
      v4 = CSingleViewShellExperience::Hide((__int64)this + 152, 0LL);
      v5 = v4;
      if ( v4 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x219,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
          (const char *)(unsigned int)v4);
        return v5;
      }
    }
    if ( a2
      && (!(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_TaskbarJumplistOnHover>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_TaskbarJumplistOnHover>::GetImpl'::`2'::impl)
       || *((_DWORD *)this + 125) != 5) )
    {
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 47) + 24LL))(*((_QWORD *)this + 47), 0xFFFFLL);
    }
    v8 = 1;
    winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::ReportVisibility(
      (__int64 *)this + 111,
      &v8);
  }
  return 0LL;
}
