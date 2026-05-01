/*
 * XREFs of ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x180145E20
 * Callers:
 *     ?OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1801458C0 (-OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Wind.c)
 *     ?OnSessionBecameIdle@XamlLauncherState@@QEAAJXZ @ 0x1801DB59C (-OnSessionBecameIdle@XamlLauncherState@@QEAAJXZ.c)
 *     ?HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x18024E130 (-HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 *     ?OnStartDestroyed@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1802505B0 (-OnStartDestroyed@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@.c)
 *     ?OnStartLaunchResult@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@H@Z @ 0x1802507E0 (-OnStartLaunchResult@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Intern.c)
 *     ?OnCortanaFailedToGetForeground@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180465C90 (-OnCortanaFailedToGetForeground@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience.c)
 *     ?OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@3456@@Z @ 0x180466060 (-OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@.c)
 *     ?OnStartFailedToGetForegroundImpl@XamlLauncherState@@AEAAJXZ @ 0x18046665C (-OnStartFailedToGetForegroundImpl@XamlLauncherState@@AEAAJXZ.c)
 *     ?TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ @ 0x1804670DC (-TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UIXamlLauncherState@@UIImmersiveLauncherCortana@@UIImmersiveWindowMessageNotification@@UIImmersiveSessionIdleNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180099890 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWR_ea_180099890.c)
 *     ?CancelStartTelemetryTimeout@XamlLauncherState@@AEAAX_N@Z @ 0x1800B3840 (-CancelStartTelemetryTimeout@XamlLauncherState@@AEAAX_N@Z.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x1800BAC80 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ?LauncherOpened@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXIIW4Mode@LauncherTelemetry@@@Z @ 0x1800E7930 (-LauncherOpened@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXIIW4Mode@LauncherTelemetry@@@Z.c)
 *     ?reset@?$unique_ptr@VFocusHoldingTank@@U?$default_delete@VFocusHoldingTank@@@wistd@@@wistd@@QEAAXPEAVFocusHoldingTank@@@Z @ 0x1801468D0 (-reset@-$unique_ptr@VFocusHoldingTank@@U-$default_delete@VFocusHoldingTank@@@wistd@@@wistd@@QEAA.c)
 *     ?Stop@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801D67E8 (-Stop@-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x180295BA8 (-complete@-$tip_test@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@ti.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x1802A9934 (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_970a4c8158850becbf4915e24a83312a___ @ 0x180463C98 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_970a4c8158850becbf4915e24a83312a___.c)
 *     ?InternalAddRef@?$ComPtr@VXamlLauncherState@@@WRL@Microsoft@@IEBAXXZ @ 0x180465790 (-InternalAddRef@-$ComPtr@VXamlLauncherState@@@WRL@Microsoft@@IEBAXXZ.c)
 */

void __fastcall XamlLauncherState::CompleteStartShowTelemetry(
        XamlLauncherState *this,
        int a2,
        struct CommonStartTelemetry::LauncherInvokeActivity *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  volatile int *v9; // rdx
  int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  XamlLauncherState *v12; // [rsp+30h] [rbp+8h] BYREF

  wistd::unique_ptr<FocusHoldingTank,wistd::default_delete<FocusHoldingTank>>::reset((char *)this + 1104, 0LL);
  XamlLauncherState::CancelStartTelemetryTimeout(this, a2 < 0);
  CommonStartTelemetry::LauncherInvokeActivity::LauncherOpened(
    (__int64)a3,
    *((_DWORD *)this + 74),
    *((_DWORD *)this + 75),
    23);
  *((_DWORD *)this + 74) = 0;
  *((_DWORD *)this + 75) = 0;
  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::Stop(
    a3,
    (unsigned int)a2);
  if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((char *)this + 984) )
    tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete((char *)this + 984);
  if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((char *)this + 992) )
  {
    *((_QWORD *)this + 127) = *std::chrono::steady_clock::now((__int64 *)&v12);
    v12 = this;
    Microsoft::WRL::ComPtr<XamlLauncherState>::InternalAddRef(&v12);
    v12 = this;
    Microsoft::WRL::ComPtr<XamlLauncherState>::InternalAddRef(&v12);
    v10 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_970a4c8158850becbf4915e24a83312a___(
            v7,
            v6,
            v8,
            &v12);
    if ( v12 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,IXamlLauncherState,IImmersiveLauncherCortana,IImmersiveWindowMessageNotification,IImmersiveSessionIdleNotification>::Release(
        (__int64)v12,
        v9);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x7AB,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v10);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,IXamlLauncherState,IImmersiveLauncherCortana,IImmersiveWindowMessageNotification,IImmersiveSessionIdleNotification>::Release(
      (__int64)this,
      v9);
  }
}
