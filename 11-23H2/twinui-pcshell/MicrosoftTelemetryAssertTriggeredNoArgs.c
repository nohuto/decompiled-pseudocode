/*
 * XREFs of MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18074BCA8
 * Callers:
 *     ??0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z @ 0x1800270D0 (--0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z.c)
 *     ?CreateFrames@TaskViewHost@@AEAAJXZ @ 0x180060A88 (-CreateFrames@TaskViewHost@@AEAAJXZ.c)
 *     ?NotifyRaiseDesktopCompleted@MultitaskingViewGestureHandler@@UEAAXXZ @ 0x180066690 (-NotifyRaiseDesktopCompleted@MultitaskingViewGestureHandler@@UEAAXXZ.c)
 *     ?CompareNewValues@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAUIUwpWindowWrapperInternal@@@Z @ 0x18018DCD4 (-CompareNewValues@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAUIUwpWindowWrappe.c)
 *     CAppThumbnailWindow::StartSwitchGestureOperationAsync$_ResumeCoro$1 @ 0x1802106D0 (CAppThumbnailWindow--StartSwitchGestureOperationAsync$_ResumeCoro$1.c)
 *     TouchEdgeGripperHost::CreateGripperWindowAsync$_ResumeCoro$1 @ 0x18021EBA0 (TouchEdgeGripperHost--CreateGripperWindowAsync$_ResumeCoro$1.c)
 *     ?CheckAndUpdateHostedAumid@CScreenClippingExperienceManager@@AEAAJXZ @ 0x180455BE4 (-CheckAndUpdateHostedAumid@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?InputGestureOperationStarted@MultitaskingViewGestureHandler@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@@Z @ 0x18054EEE0 (-InputGestureOperationStarted@MultitaskingViewGestureHandler@@AEAAXAEBUInputGestureOperation@Inp.c)
 *     ?ResolveThumbnailWindow@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGestureHandlerHelpers@@@Z @ 0x18054FD98 (-ResolveThumbnailWindow@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGes.c)
 *     ?GetTaskbarHeight@MultitaskingViewGestureHandlerHelpers@@YAMPEAUHMONITOR__@@AEBUDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@Z @ 0x18055D66C (-GetTaskbarHeight@MultitaskingViewGestureHandlerHelpers@@YAMPEAUHMONITOR__@@AEBUDisplayMonitorIn.c)
 *     ?ShowStartupAppNotification@StartupNotification@@SAXPEBG0_N@Z @ 0x180644CB0 (-ShowStartupAppNotification@StartupNotification@@SAXPEBG0_N@Z.c)
 *     ?ShowTouchEdgeGripper@TouchEdgeGestureManager@@UEAAJHPEAUIImmersiveMonitor@@PEAUITouchEdgeGripperEventHandler@@@Z @ 0x18064D8D0 (-ShowTouchEdgeGripper@TouchEdgeGestureManager@@UEAAJHPEAUIImmersiveMonitor@@PEAUITouchEdgeGrippe.c)
 *     _lambda_3ef64bf90f44864a6bd4620ac4549ef0_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController_ @ 0x18064E45C (_lambda_3ef64bf90f44864a6bd4620ac4549ef0_--operator()_winrt--Windows--UI--Internal--Input--Shell.c)
 *     ?ProcessUpEvent@PointerEventsDetector@TouchGestureProcessor@@QEAAXAEBUPointerPoint@Input@UI@Windows@winrt@@@Z @ 0x180651638 (-ProcessUpEvent@PointerEventsDetector@TouchGestureProcessor@@QEAAXAEBUPointerPoint@Input@UI@Wind.c)
 *     ?UpdateTouchEdgeGestureType@TouchEdgeGestureProcessor@@AEAAXW4InputGestureSourceType@Input@Internal@UI@Windows@winrt@@@Z @ 0x180655BE0 (-UpdateTouchEdgeGestureType@TouchEdgeGestureProcessor@@AEAAXW4InputGestureSourceType@Input@Inter.c)
 *     _TouchEdgeGripperHost::EnsureXamlHostThreadStarted_::_1_::catch$4 @ 0x180656A07 (_TouchEdgeGripperHost--EnsureXamlHostThreadStarted_--_1_--catch$4.c)
 *     _TouchEdgeGripperHost::XamlHostThreadProc_::_1_::catch$75 @ 0x180657378 (_TouchEdgeGripperHost--XamlHostThreadProc_--_1_--catch$75.c)
 *     wil::details::lambda_call__lambda_cbd050c3a2bffbabf931a9f51c6305b9___::_lambda_call__lambda_cbd050c3a2bffbabf931a9f51c6305b9___ @ 0x180658ECC (wil--details--lambda_call__lambda_cbd050c3a2bffbabf931a9f51c6305b9___--_lambda_call__lambda_cbd0.c)
 *     ?GetMonitorDisplayInfo@TouchEdgeGripperWindow@@AEAAJPEAUIImmersiveMonitor@@PEAUCRect@Geometry@@PEAI2@Z @ 0x18065B378 (-GetMonitorDisplayInfo@TouchEdgeGripperWindow@@AEAAJPEAUIImmersiveMonitor@@PEAUCRect@Geometry@@P.c)
 *     ?ComputeDefaultSafetyRectForRegion@CustomDragout@SnapLayoutHelpers@@YA?AUCRect@Geometry@@W4SnapRegion@@AEBU34@1HHHH@Z @ 0x180670848 (-ComputeDefaultSafetyRectForRegion@CustomDragout@SnapLayoutHelpers@@YA-AUCRect@Geometry@@W4SnapR.c)
 *     ?Initialize@CActivatedEventArgsBase@@UEAAJ_KPEAUHSTRING__@@W4ApplicationExecutionState@Activation@ApplicationModel@Windows@@EE0U_GUID@@@Z @ 0x18073A890 (-Initialize@CActivatedEventArgsBase@@UEAAJ_KPEAUHSTRING__@@W4ApplicationExecutionState@Activatio.c)
 *     ?InitializeViewDependent@CActivatedEventArgsBase@@UEAAJW4ApplicationExecutionState@Activation@ApplicationModel@Windows@@HPEAUISplashScreen@345@E@Z @ 0x18073A930 (-InitializeViewDependent@CActivatedEventArgsBase@@UEAAJW4ApplicationExecutionState@Activation@Ap.c)
 *     ?get_Kind@CActivatedEventArgsBase@@UEAAJPEAW4ActivationKind@Activation@ApplicationModel@Windows@@@Z @ 0x18073AE60 (-get_Kind@CActivatedEventArgsBase@@UEAAJPEAW4ActivationKind@Activation@ApplicationModel@Windows@.c)
 *     ?get_PreviousExecutionState@CActivatedEventArgsBase@@UEAAJPEAW4ApplicationExecutionState@Activation@ApplicationModel@Windows@@@Z @ 0x18073AEA0 (-get_PreviousExecutionState@CActivatedEventArgsBase@@UEAAJPEAW4ApplicationExecutionState@Activat.c)
 *     ?get_SplashScreen@CActivatedEventArgsBase@@UEAAJPEAPEAUISplashScreen@Activation@ApplicationModel@Windows@@@Z @ 0x18073AEE0 (-get_SplashScreen@CActivatedEventArgsBase@@UEAAJPEAPEAUISplashScreen@Activation@ApplicationModel.c)
 *     ?put_ActivationViewSwitcher@CActivatedEventArgsWithViewIdBase@@UEAAJPEAUIActivationViewSwitcher@ViewManagement@UI@Windows@@@Z @ 0x18073B1E0 (-put_ActivationViewSwitcher@CActivatedEventArgsWithViewIdBase@@UEAAJPEAUIActivationViewSwitcher@.c)
 *     ?v_GetActivationKind@CActivatedEventArgsBase@@EEAAJPEAUHSTRING__@@PEAW4ActivationKind@Activation@ApplicationModel@Windows@@@Z @ 0x18073B360 (-v_GetActivationKind@CActivatedEventArgsBase@@EEAAJPEAUHSTRING__@@PEAW4ActivationKind@Activation.c)
 *     ?CreateSplashScreen@CImmersiveWindowFactoryBase@@UEAAJW4SPLASHSCREEN_FLAGS@@PEAPEAUISplashScreen@@@Z @ 0x180799110 (-CreateSplashScreen@CImmersiveWindowFactoryBase@@UEAAJW4SPLASHSCREEN_FLAGS@@PEAPEAUISplashScreen.c)
 *     ?InitializeWithPosition@CImmersiveWindowFactoryBase@@UEAAJPEAUIImmersiveMonitor@@PEBGPEBUtagRECT@@@Z @ 0x180799400 (-InitializeWithPosition@CImmersiveWindowFactoryBase@@UEAAJPEAUIImmersiveMonitor@@PEBGPEBUtagRECT.c)
 *     ?SetExistingSplashScreen@CImmersiveWindowFactoryBase@@QEAAXPEAUISplashScreen@@@Z @ 0x180799528 (-SetExistingSplashScreen@CImmersiveWindowFactoryBase@@QEAAXPEAUISplashScreen@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

int MicrosoftTelemetryAssertTriggeredNoArgs()
{
  FARPROC ProcAddress; // rax
  int v2; // [rsp+20h] [rbp-40h] BYREF
  struct HINSTANCE__ *v3; // [rsp+28h] [rbp-38h]
  void *v4; // [rsp+30h] [rbp-30h]
  char v5; // [rsp+38h] [rbp-28h]
  __int64 v6; // [rsp+40h] [rbp-20h]
  int v7; // [rsp+48h] [rbp-18h]
  int v8; // [rsp+4Ch] [rbp-14h]
  char v9; // [rsp+50h] [rbp-10h]
  void *retaddr; // [rsp+68h] [rbp+8h]
  HMODULE phModule; // [rsp+70h] [rbp+10h] BYREF

  phModule = 0LL;
  LODWORD(ProcAddress) = GetModuleHandleExA(2u, "ntdll.dll", &phModule);
  if ( (_DWORD)ProcAddress )
  {
    if ( phModule )
    {
      ProcAddress = GetProcAddress(phModule, "MicrosoftTelemetryAssertTriggeredUM");
      if ( ProcAddress )
      {
        v2 = 11;
        v3 = &_ImageBase;
        v6 = 0LL;
        v4 = retaddr;
        v7 = -1;
        v8 = -1;
        v9 = 1;
        v5 = 0;
        LODWORD(ProcAddress) = ((__int64 (__fastcall *)(int *))ProcAddress)(&v2);
      }
    }
  }
  return (int)ProcAddress;
}
