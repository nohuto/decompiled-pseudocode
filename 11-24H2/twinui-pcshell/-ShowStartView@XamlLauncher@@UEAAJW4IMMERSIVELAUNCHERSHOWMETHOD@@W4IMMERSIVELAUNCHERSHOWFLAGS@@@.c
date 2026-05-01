/*
 * XREFs of ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18024D0C0
 * Callers:
 *     XamlLauncher::LauncherShowRequested$_ResumeCoro$1 @ 0x18024B870 (XamlLauncher--LauncherShowRequested$_ResumeCoro$1.c)
 *     ?OnHotkeyInvoke@XamlLauncher@@AEAAJW4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18024BE7C (-OnHotkeyInvoke@XamlLauncher@@AEAAJW4IMMERSIVELAUNCHERSHOWFLAGS@@@Z.c)
 *     ?HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ @ 0x1802C6690 (-HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ.c)
 *     ?ConsiderShowStartAutomatically@XamlLauncher@@AEAAXXZ @ 0x18045DAB8 (-ConsiderShowStartAutomatically@XamlLauncher@@AEAAXXZ.c)
 *     ?OnStartButtonPressed@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x180460520 (-OnStartButtonPressed@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERDISMI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LauncherOpened@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXIIW4Mode@LauncherTelemetry@@@Z @ 0x1800E7930 (-LauncherOpened@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXIIW4Mode@LauncherTelemetry@@@Z.c)
 *     ??1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x18014588C (--1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ.c)
 *     ?QueryService@XamlLauncher@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18016C510 (-QueryService@XamlLauncher@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?Stop@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801D67E8 (-Stop@-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag.c)
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801EF814 (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgRe_ea_1801EF814.c)
 *     ?DismissPopupMenus@ForegroundHelpers@@YA_NXZ @ 0x18021400C (-DismissPopupMenus@ForegroundHelpers@@YA_NXZ.c)
 *     ?DidHolographicHandleHotKey@XamlLauncher@@AEAA_NXZ @ 0x18022C304 (-DidHolographicHandleHotKey@XamlLauncher@@AEAA_NXZ.c)
 *     ?IsStartMenuEnabled@XamlLauncher@@AEBA_NPEAW4Mode@LauncherTelemetry@@@Z @ 0x18024B778 (-IsStartMenuEnabled@XamlLauncher@@AEBA_NPEAW4Mode@LauncherTelemetry@@@Z.c)
 *     ??1?$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180294914 (--1-$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsForegroundOnLockZBand@ImmersiveMonitorHelper@@QEBA_NXZ @ 0x1802C94D4 (-IsForegroundOnLockZBand@ImmersiveMonitorHelper@@QEBA_NXZ.c)
 *     ?StartInvokeSkipped_ForegroundOnLockZBand@StartWindowTelemetry@@SAXXZ @ 0x1802CE650 (-StartInvokeSkipped_ForegroundOnLockZBand@StartWindowTelemetry@@SAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?ShowAttemptSkippedDueToOpenContextMenu@StartWindowTelemetry@@SAXXZ @ 0x180460F80 (-ShowAttemptSkippedDueToOpenContextMenu@StartWindowTelemetry@@SAXXZ.c)
 *     ?StartActivity@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXXZ @ 0x180460FC0 (-StartActivity@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_61012860@@@details@wil@@QEAA_NXZ @ 0x18046186C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_61012860@@@details@wil@@QEAA_NXZ.c)
 *     ?AdjustMonitorConnectedIfNeeded@ImmersiveMonitorHelper@@QEAAJXZ @ 0x1804623DC (-AdjustMonitorConnectedIfNeeded@ImmersiveMonitorHelper@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XamlLauncher::ShowStartView(__int64 a1, unsigned int a2, unsigned int a3)
{
  ImmersiveMonitorHelper *v7; // rcx
  HRESULT Service; // eax
  wil::details::in1diag3 *v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  unsigned int v12; // edi
  int v13; // eax
  unsigned int v14; // ebx
  void *v15[2]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v16[42]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  if ( !*(_QWORD *)(a1 + 352) )
    return 2147943568LL;
  if ( (a3 & 8) == 0 )
  {
    if ( !ForegroundHelpers::DismissPopupMenus((ForegroundHelpers *)a1) && (a3 & 4) == 0 )
    {
      StartWindowTelemetry::ShowAttemptSkippedDueToOpenContextMenu();
      return 0LL;
    }
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 160) + 56LL))(*(_QWORD *)(a1 + 160));
    if ( ImmersiveMonitorHelper::IsForegroundOnLockZBand(v7) )
    {
      StartWindowTelemetry::StartInvokeSkipped_ForegroundOnLockZBand();
      return 0LL;
    }
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_61012860>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_61012860>::GetImpl'::`2'::impl)
    && (unsigned int)IsGamingFullScreenExperienceActive() )
  {
    v15[0] = 0LL;
    Service = XamlLauncher::QueryService(
                (XamlLauncher *)(a1 + 24),
                (const struct _GUID *)&SID_AllUpView,
                &GUID_e053969d_e07d_482d_ae3b_17d1f01bf1ad,
                v15);
    v9 = retaddr;
    if ( Service >= 0 )
    {
      Service = (*(__int64 (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)v15[0] + 24LL))(v15[0], 0LL, 0LL);
      v9 = retaddr;
      if ( Service >= 0 )
      {
LABEL_16:
        wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>(v15);
        return 0LL;
      }
      v10 = 367LL;
    }
    else
    {
      v10 = 365LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v9,
      (void *)v10,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)Service);
    goto LABEL_16;
  }
  LODWORD(v15[0]) = 0;
  if ( !XamlLauncher::IsStartMenuEnabled((XamlLauncher *)(a1 - 24), (enum LauncherTelemetry::Mode *)v15) )
  {
    wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v16);
    v16[0] = &CommonStartTelemetry::LauncherInvokeActivity::`vftable';
    CommonStartTelemetry::LauncherInvokeActivity::StartActivity((CommonStartTelemetry::LauncherInvokeActivity *)v16);
    CommonStartTelemetry::LauncherInvokeActivity::LauncherOpened((__int64)v16, a2, a3, (int)v15[0]);
    wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v16,
      0);
    CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v16);
    return 0LL;
  }
  if ( a2 == 1 )
  {
    if ( XamlLauncher::DidHolographicHandleHotKey((XamlLauncher *)(a1 - 24)) )
      return 0LL;
  }
  else if ( a2 == 11 || a2 == 16 )
  {
    goto LABEL_25;
  }
  v11 = ImmersiveMonitorHelper::AdjustMonitorConnectedIfNeeded(*(ImmersiveMonitorHelper **)(a1 + 176));
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x185,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v11);
    return v12;
  }
LABEL_25:
  v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 352) + 56LL))(
          *(_QWORD *)(a1 + 352),
          a2,
          a3);
  v14 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x187,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v13);
    return v14;
  }
  return 0LL;
}
