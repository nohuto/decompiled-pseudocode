/*
 * XREFs of HMUnlockObject @ 0x1C0056D70
 * Callers:
 *     ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1C0002364 (-ProcessInput@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_I.c)
 *     NtUserToUnicodeEx @ 0x1C00026F0 (NtUserToUnicodeEx.c)
 *     NtMITSynthesizeKeyboardInput @ 0x1C0009460 (NtMITSynthesizeKeyboardInput.c)
 *     NtUserSetKeyboardState @ 0x1C0009A80 (NtUserSetKeyboardState.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x1C000AB30 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     NtUserReportInertia @ 0x1C000E690 (NtUserReportInertia.c)
 *     NtUserDestroyActivationObject @ 0x1C000EB80 (NtUserDestroyActivationObject.c)
 *     UserPowerInfoCallout @ 0x1C000FBD4 (UserPowerInfoCallout.c)
 *     ?DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z @ 0x1C0018EB0 (-DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z.c)
 *     NtUserCitSetInfo @ 0x1C00334B0 (NtUserCitSetInfo.c)
 *     ?xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C003772C (-xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00385C4 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     EnterCrit @ 0x1C0048270 (EnterCrit.c)
 *     ?HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C004EC70 (-HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     HMFreeObject @ 0x1C004F310 (HMFreeObject.c)
 *     xxxUserProcessCallout @ 0x1C0050580 (xxxUserProcessCallout.c)
 *     UserThreadCallout @ 0x1C0050B50 (UserThreadCallout.c)
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0052A60 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C0053374 (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 *     HMAssignmentUnlockWorker @ 0x1C0056D3C (HMAssignmentUnlockWorker.c)
 *     _lambda_0f9e2a8fc479216b45af02f10e3c5bbd_::_lambda_invoker_cdecl_ @ 0x1C00589A0 (_lambda_0f9e2a8fc479216b45af02f10e3c5bbd_--_lambda_invoker_cdecl_.c)
 *     hdcOpenDCW @ 0x1C005ADC0 (hdcOpenDCW.c)
 *     NtUserLockCursor @ 0x1C005E230 (NtUserLockCursor.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0065068 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     NtUserLoadKeyboardLayoutEx @ 0x1C0067DD0 (NtUserLoadKeyboardLayoutEx.c)
 *     UserProcessThawCallout @ 0x1C00681D0 (UserProcessThawCallout.c)
 *     UserProcessFreezeCallout @ 0x1C0068894 (UserProcessFreezeCallout.c)
 *     NtMITCoreMsgKOpenConnectionTo @ 0x1C0068C80 (NtMITCoreMsgKOpenConnectionTo.c)
 *     NtUserActivateKeyboardLayout @ 0x1C0069830 (NtUserActivateKeyboardLayout.c)
 *     ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C006F160 (-WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C006F340 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     NtRIMOnPnpNotification @ 0x1C0070810 (NtRIMOnPnpNotification.c)
 *     NtKSTInitialize @ 0x1C0083F60 (NtKSTInitialize.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0084BF8 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C0084D10 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     PowerResumeSuspendEvent @ 0x1C0084F90 (PowerResumeSuspendEvent.c)
 *     NtUserRegisterSessionPort @ 0x1C0085F50 (NtUserRegisterSessionPort.c)
 *     NtMITActivateInputProcessing @ 0x1C0087520 (NtMITActivateInputProcessing.c)
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x1C0088180 (DestroyExclusiveUserCritDeferredUnlockList.c)
 *     NtUserSetProcessDpiAwarenessContext @ 0x1C008C4A0 (NtUserSetProcessDpiAwarenessContext.c)
 *     NtUserSetSysColors @ 0x1C00919E0 (NtUserSetSysColors.c)
 *     ??1CHMRefHwndByHandle@@QEAA@XZ @ 0x1C0094660 (--1CHMRefHwndByHandle@@QEAA@XZ.c)
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C009C214 (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00ACC98 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     NtUserSetInputServiceState @ 0x1C00AD930 (NtUserSetInputServiceState.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C00AE3AC (-UserInitialize@@YAJXZ.c)
 *     W32kEtwEnableCallback @ 0x1C00AF6CC (W32kEtwEnableCallback.c)
 *     NtMITSetInputCallbacks @ 0x1C00B0AF0 (NtMITSetInputCallbacks.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C00B1AE4 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     NtUserCreateSystemThreads @ 0x1C00B2720 (NtUserCreateSystemThreads.c)
 *     xxxCreateSystemThreads @ 0x1C00B27C0 (xxxCreateSystemThreads.c)
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C00B30F0 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 *     HMRemoveHandleForObject @ 0x1C00B3CF0 (HMRemoveHandleForObject.c)
 *     NtUserCreateActivationObject @ 0x1C00B4080 (NtUserCreateActivationObject.c)
 *     ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C00B44F0 (-DxgkEngEnterUserCrit@@YAXH@Z.c)
 *     InitSystemThread @ 0x1C00B46F0 (InitSystemThread.c)
 *     UserSessionSwitchEnterCrit @ 0x1C00B4DD0 (UserSessionSwitchEnterCrit.c)
 *     NtUserEnableMouseInPointer @ 0x1C00B6E50 (NtUserEnableMouseInPointer.c)
 *     ChangeAcquireResourceType @ 0x1C00B84C0 (ChangeAcquireResourceType.c)
 *     NtUserConfigureActivationObject @ 0x1C00B8B40 (NtUserConfigureActivationObject.c)
 *     NtUserRegisterLogonProcess @ 0x1C00BDF70 (NtUserRegisterLogonProcess.c)
 *     NtMITUpdateInputGlobals @ 0x1C00BFA50 (NtMITUpdateInputGlobals.c)
 *     NtUserRegisterTouchPadCapable @ 0x1C00C1410 (NtUserRegisterTouchPadCapable.c)
 *     NtUserRegisterManipulationThread @ 0x1C00C1790 (NtUserRegisterManipulationThread.c)
 *     UserEnterUserCritSec @ 0x1C00C4B00 (UserEnterUserCritSec.c)
 *     ?W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C00C5070 (-W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00CAA74 (DrvSetWddmDeviceMonitorPowerState.c)
 *     VideoPortCalloutThread @ 0x1C00CCFE8 (VideoPortCalloutThread.c)
 *     ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CD1D4 (-xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     VideoPortCallout @ 0x1C00CD3B0 (VideoPortCallout.c)
 *     ??1DirectLeaveEnterCrit@@QEAA@XZ @ 0x1C00D01E0 (--1DirectLeaveEnterCrit@@QEAA@XZ.c)
 *     W32CalloutDispatch @ 0x1C00DE800 (W32CalloutDispatch.c)
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C00E4D90 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 *     HMUnlockDestroyObject @ 0x1C012CA60 (HMUnlockDestroyObject.c)
 *     UserProcessTimerDelayCallout @ 0x1C012D52C (UserProcessTimerDelayCallout.c)
 *     UserProcessTimerStatisticsCallout @ 0x1C012D650 (UserProcessTimerStatisticsCallout.c)
 *     ??$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU?$AlpcRequest@$07@1@PEAU?$AlpcReply@$07@1@@Z @ 0x1C012F234 (--$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU-$AlpcRequest@$07@1@PEAU-$AlpcReply@$07.c)
 *     NtMapVisualRelativePoints @ 0x1C0131620 (NtMapVisualRelativePoints.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C01329B8 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C0133290 (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C01342F0 (-DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C0136AC0 (xxxDisplayDiagBlackScreenDetected.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C01382FC (-EtwCaptureStateCallback@@YAXXZ.c)
 *     NtConfigureInputSpace @ 0x1C0140840 (NtConfigureInputSpace.c)
 *     NtMITAccessibilityTimerNotification @ 0x1C0140E50 (NtMITAccessibilityTimerNotification.c)
 *     NtMITConfigureVirtualTouchpad @ 0x1C0140F50 (NtMITConfigureVirtualTouchpad.c)
 *     NtMITDeactivateInputProcessing @ 0x1C01412A0 (NtMITDeactivateInputProcessing.c)
 *     NtMITDisableMouseIntercept @ 0x1C01413A0 (NtMITDisableMouseIntercept.c)
 *     NtMITEnableMouseIntercept @ 0x1C01414B0 (NtMITEnableMouseIntercept.c)
 *     NtMITInitMinuserThread @ 0x1C01415E0 (NtMITInitMinuserThread.c)
 *     NtMITMinuserWindowDestroyed @ 0x1C0141840 (NtMITMinuserWindowDestroyed.c)
 *     NtMITPostMouseInputMessage @ 0x1C0141930 (NtMITPostMouseInputMessage.c)
 *     NtMITPostThreadEventMessage @ 0x1C0141B40 (NtMITPostThreadEventMessage.c)
 *     NtMITPostWindowEventMessage @ 0x1C0141D20 (NtMITPostWindowEventMessage.c)
 *     NtMITSetInputDelegationMode @ 0x1C0141F20 (NtMITSetInputDelegationMode.c)
 *     NtMITSynthesizeMouseInput @ 0x1C0142200 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeTouchInput @ 0x1C0142480 (NtMITSynthesizeTouchInput.c)
 *     NtMITUninitMinuserThread @ 0x1C01426A0 (NtMITUninitMinuserThread.c)
 *     NtSetCursorInputSpace @ 0x1C01427D0 (NtSetCursorInputSpace.c)
 *     NtSetPointerDeviceInputSpace @ 0x1C0142930 (NtSetPointerDeviceInputSpace.c)
 *     NtSetShellCursorState @ 0x1C0142BA0 (NtSetShellCursorState.c)
 *     NtUserChangeDisplaySettings @ 0x1C0142FC0 (NtUserChangeDisplaySettings.c)
 *     NtUserClipCursor @ 0x1C01431D0 (NtUserClipCursor.c)
 *     NtUserCreateBaseWindow @ 0x1C0143430 (NtUserCreateBaseWindow.c)
 *     NtUserCreatePalmRejectionDelayZone @ 0x1C0143530 (NtUserCreatePalmRejectionDelayZone.c)
 *     NtUserDestroyPalmRejectionDelayZone @ 0x1C0143750 (NtUserDestroyPalmRejectionDelayZone.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C0143850 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserDownlevelTouchpad @ 0x1C0143C50 (NtUserDownlevelTouchpad.c)
 *     NtUserEnableTouchPad @ 0x1C0143E30 (NtUserEnableTouchPad.c)
 *     NtUserGetInputContainerId @ 0x1C01447A0 (NtUserGetInputContainerId.c)
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C01456E0 (NtUserGetPrecisionTouchPadConfiguration.c)
 *     NtUserPostKeyboardInputMessage @ 0x1C0149CD0 (NtUserPostKeyboardInputMessage.c)
 *     NtUserSetDisplayConfig @ 0x1C014A730 (NtUserSetDisplayConfig.c)
 *     NtUserSetForegroundRedirectionForActivationObject @ 0x1C014B450 (NtUserSetForegroundRedirectionForActivationObject.c)
 *     NtUserSetManipulationInputTarget @ 0x1C014B620 (NtUserSetManipulationInputTarget.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C014BA10 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     NtUserSetProcessMousewheelRoutingMode @ 0x1C014BCC0 (NtUserSetProcessMousewheelRoutingMode.c)
 *     NtUserStopAndEndInertia @ 0x1C014C1A0 (NtUserStopAndEndInertia.c)
 *     NtUserSystemParametersInfo @ 0x1C014C2C0 (NtUserSystemParametersInfo.c)
 *     NtUserUnloadKeyboardLayout @ 0x1C014D800 (NtUserUnloadKeyboardLayout.c)
 *     NtUserUnregisterSessionPort @ 0x1C014D910 (NtUserUnregisterSessionPort.c)
 *     NtRIMEnableMonitorMappingForDevice @ 0x1C0174C80 (NtRIMEnableMonitorMappingForDevice.c)
 *     NtRIMOnTimerNotification @ 0x1C0174ED0 (NtRIMOnTimerNotification.c)
 *     NtRIMUnregisterForInput @ 0x1C0175640 (NtRIMUnregisterForInput.c)
 *     RIMOnAsyncPnpWorkNotification @ 0x1C0179C30 (RIMOnAsyncPnpWorkNotification.c)
 *     ?xxxMKMouseMove@@YAHG@Z @ 0x1C01B69B0 (-xxxMKMouseMove@@YAHG@Z.c)
 *     ?xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B6B40 (-xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B6CC0 (-xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ @ 0x1C01E2780 (-OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x1C01E2930 (-OnPTPTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C01E2C00 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     ?ProcessPTPInertiaActions@CHidInput@@QEAA_NPEAX_K@Z @ 0x1C01E3058 (-ProcessPTPInertiaActions@CHidInput@@QEAA_NPEAX_K@Z.c)
 *     ProcessKeyboardInputWorker @ 0x1C01EA8C0 (ProcessKeyboardInputWorker.c)
 *     ?SendIVWorkerThreadRequest@@YAJPEAU_IVWORKER_INIT@@@Z @ 0x1C01ED804 (-SendIVWorkerThreadRequest@@YAJPEAU_IVWORKER_INIT@@@Z.c)
 *     ?ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01ED9D0 (-ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManage.c)
 *     ?ivHandleKeyboardStatesPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EDB40 (-ivHandleKeyboardStatesPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject.c)
 *     ?ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z @ 0x1C01EE440 (-ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z.c)
 *     IVWorkerThread @ 0x1C01EEA2C (IVWorkerThread.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C01F6B28 (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 *     ?DwmInputThread@CInputManager@@IEAAJPEAX0H@Z @ 0x1C0230C84 (-DwmInputThread@CInputManager@@IEAAJPEAX0H@Z.c)
 *     Win32UserInitialize @ 0x1C02DBF90 (Win32UserInitialize.c)
 *     Win32kBaseDriverEntry @ 0x1C02DEBC0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C004EC10 (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x1C0056F4C (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0059AE0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C005CD30 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     LockIntoExclusiveUserCritDeferredUnlockList @ 0x1C00C16A4 (LockIntoExclusiveUserCritDeferredUnlockList.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     LockIntoSharedUserCritDeferredUnlockList @ 0x1C012CA88 (LockIntoSharedUserCritDeferredUnlockList.c)
 */

__int64 __fastcall HMUnlockObject(__int64 a1)
{
  struct _HANDLEENTRY *v2; // rdi
  char v3; // al
  char *v5; // rdi
  int v6; // esi
  tagDomLock *v7; // rcx
  PERESOURCE *DomainLockRef; // [rsp+20h] [rbp-48h]
  char v9; // [rsp+28h] [rbp-40h] BYREF
  void *v10; // [rsp+30h] [rbp-38h]
  char v11; // [rsp+38h] [rbp-30h]
  __int64 v12; // [rsp+40h] [rbp-28h]
  char v13; // [rsp+48h] [rbp-20h]

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 8), 0xFFFFFFFF) != 1 )
    return a1;
  v2 = (struct _HANDLEENTRY *)((char *)qword_1C028FE68 + dword_1C028FE70 * (unsigned int)(unsigned __int16)*(_DWORD *)a1);
  v3 = *((_BYTE *)v2 + 25);
  if ( (v3 & 1) == 0 || (v3 & 2) != 0 )
    return a1;
  if ( IS_USERCRIT_OWNED_SHAREDONLY() )
  {
    DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
    v5 = &v9;
    v9 = 1;
    v10 = &gDomainDummyLock;
    v12 = 0LL;
    v6 = 0;
    v13 = 0;
    v11 = 0;
    do
    {
      v7 = (tagDomLock *)*((_QWORD *)v5 - 1);
      if ( v7 )
      {
        if ( *v5 )
          tagDomLock::LockExclusive(v7);
        else
          ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)v7);
      }
      ++v6;
      v5 += 16;
    }
    while ( !v6 );
    v13 = 1;
    LockIntoSharedUserCritDeferredUnlockList(a1);
    if ( v13 && DomainLockRef )
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
  else if ( !gphePrimaryDestroyTarget
         || v2 == gphePrimaryDestroyTarget
         || gbInDestroyExclusiveUserCritDeferredUnlockList )
  {
    HMDestroyUnlockedObjectWorker(v2);
  }
  else
  {
    ++gcSecondaryDestroyTargets;
    LockIntoExclusiveUserCritDeferredUnlockList(a1);
  }
  return 0LL;
}
