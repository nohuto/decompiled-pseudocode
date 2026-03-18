/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4
 * Callers:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x1C0001C28 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     rimDoRimDevChange @ 0x1C0003BFC (rimDoRimDevChange.c)
 *     NtUserInjectKeyboardInput @ 0x1C0003D50 (NtUserInjectKeyboardInput.c)
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C000465C (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0004A38 (rimProcessDeviceBufferAndStartRead.c)
 *     RIMIDECreateDeviceInstancePath @ 0x1C000612C (RIMIDECreateDeviceInstancePath.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C00063E0 (RIMAddInjectionDeviceOfType.c)
 *     NtUserSetProcessLaunchForegroundPolicy @ 0x1C0009C90 (NtUserSetProcessLaunchForegroundPolicy.c)
 *     NtUserReportInertia @ 0x1C000E690 (NtUserReportInertia.c)
 *     UserKSTWait @ 0x1C0055434 (UserKSTWait.c)
 *     RIMGetMouseDeviceHardwareId @ 0x1C006CAE0 (RIMGetMouseDeviceHardwareId.c)
 *     RIMGetDeviceParent @ 0x1C006CE24 (RIMGetDeviceParent.c)
 *     RIMGetPanelId @ 0x1C006D320 (RIMGetPanelId.c)
 *     rimBlockingDeviceIoControlFile @ 0x1C006D3DC (rimBlockingDeviceIoControlFile.c)
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C0070630 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RIMDeviceIoControl @ 0x1C0070F20 (RIMDeviceIoControl.c)
 *     RIMUnregisterForInput @ 0x1C0071570 (RIMUnregisterForInput.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C0071A40 (RIMRegisterForInputWithCallbacks.c)
 *     RIMQueueDeviceClassNotifyAsyncWorkItem @ 0x1C0072890 (RIMQueueDeviceClassNotifyAsyncWorkItem.c)
 *     RIMQueueAndSignalAsyncPnpWorkItem @ 0x1C0072FE8 (RIMQueueAndSignalAsyncPnpWorkItem.c)
 *     RIMOnPnpNotification @ 0x1C0073820 (RIMOnPnpNotification.c)
 *     RIMUnregisterCurrentProcessForInput @ 0x1C0074064 (RIMUnregisterCurrentProcessForInput.c)
 *     RIMDirectStopDeviceClassNotifications @ 0x1C0075530 (RIMDirectStopDeviceClassNotifications.c)
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x1C00757A4 (RIMDeviceClassNotifyAsyncWorkItem.c)
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C0077120 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     RIMReadInput @ 0x1C0077620 (RIMReadInput.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C0084D10 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     ?CreateIocpHandleForUserMode@IOCPDispatcher@@QEAAPEAXXZ @ 0x1C00878D0 (-CreateIocpHandleForUserMode@IOCPDispatcher@@QEAAPEAXXZ.c)
 *     ?CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ @ 0x1C00B0D3C (-CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ.c)
 *     RIMRemoveInputOfType @ 0x1C00B91E0 (RIMRemoveInputOfType.c)
 *     ?VerifyDWMApiSetImplementation@@YAJXZ @ 0x1C00C18D8 (-VerifyDWMApiSetImplementation@@YAJXZ.c)
 *     RIMDeviceClassNotifyUsingAsyncPnpWorkNotification @ 0x1C00C3A38 (RIMDeviceClassNotifyUsingAsyncPnpWorkNotification.c)
 *     ?OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ @ 0x1C00CB280 (-OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C00CB2F0 (RIMDirectStartDeviceClassNotifications.c)
 *     ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x1C00CBE90 (-OnRemoteOpenNotification@CBaseInput@@AEAAJXZ.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CD994 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DbgDumpNode@@YAXKPEAUtagRIMPOINTERINFONODE@@@Z @ 0x1C00E15E4 (-DbgDumpNode@@YAXKPEAUtagRIMPOINTERINFONODE@@@Z.c)
 *     rimPointerTransitionsPolicyUpdateStateAndApply @ 0x1C00E3224 (rimPointerTransitionsPolicyUpdateStateAndApply.c)
 *     ?Get@CContentRects@@AEAA_NIPEAUtagRECT@@PEAI@Z @ 0x1C012FF70 (-Get@CContentRects@@AEAA_NIPEAUtagRECT@@PEAI@Z.c)
 *     ?Set@CContentRects@@AEAA_NIPEBUtagRECT@@@Z @ 0x1C0130224 (-Set@CContentRects@@AEAA_NIPEBUtagRECT@@@Z.c)
 *     NtUserInjectDeviceInput @ 0x1C0147210 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C0147B60 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectMouseInput @ 0x1C0148320 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C0148CC0 (NtUserInjectPointerInput.c)
 *     ?rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z @ 0x1C01746F4 (-rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z.c)
 *     NtRIMAddInputObserver @ 0x1C01749B0 (NtRIMAddInputObserver.c)
 *     NtRIMUpdateInputObserverRegistration @ 0x1C0175730 (NtRIMUpdateInputObserverRegistration.c)
 *     RIMAddInputOfType @ 0x1C0175950 (RIMAddInputOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0175C40 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0176360 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMAreSiblingDevices @ 0x1C0176B20 (RIMAreSiblingDevices.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C0176DB0 (RIMDirectStartStopDeviceRead.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C0177150 (RIMEnableMonitorMappingForDevice.c)
 *     RIMFreeInputBuffer @ 0x1C0177830 (RIMFreeInputBuffer.c)
 *     RIMGetDevicePreparsedData @ 0x1C0177A80 (RIMGetDevicePreparsedData.c)
 *     RIMGetDeviceProperties @ 0x1C0177E40 (RIMGetDeviceProperties.c)
 *     RIMGetDownContactCount @ 0x1C0178530 (RIMGetDownContactCount.c)
 *     RIMGetPhysicalDeviceRect @ 0x1C0178940 (RIMGetPhysicalDeviceRect.c)
 *     RIMGetSourceProcessId @ 0x1C0178C80 (RIMGetSourceProcessId.c)
 *     RIMInjectInput @ 0x1C01792A0 (RIMInjectInput.c)
 *     RIMIsPrimaryPointerDeviceDown @ 0x1C0179730 (RIMIsPrimaryPointerDeviceDown.c)
 *     RIMOnAsyncPnpWorkNotification @ 0x1C0179C30 (RIMOnAsyncPnpWorkNotification.c)
 *     RIMOnTimerNotification @ 0x1C017A200 (RIMOnTimerNotification.c)
 *     RIMRefreshDeviceAttributes @ 0x1C017A510 (RIMRefreshDeviceAttributes.c)
 *     RIMRemoveInjectionDevice @ 0x1C017A7D0 (RIMRemoveInjectionDevice.c)
 *     RIMResetPointerDevices @ 0x1C017AEC0 (RIMResetPointerDevices.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C017C400 (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C017D2E4 (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMActivatePointerDeviceDeadzone @ 0x1C017D5D0 (RIMActivatePointerDeviceDeadzone.c)
 *     RIMCreatePointerDeviceDeadzone @ 0x1C017D7A0 (RIMCreatePointerDeviceDeadzone.c)
 *     RIMDestroyPointerDeviceDeadzone @ 0x1C017DBF0 (RIMDestroyPointerDeviceDeadzone.c)
 *     RIMUpdatePointerDeviceDeadzoneOrigin @ 0x1C017DEB0 (RIMUpdatePointerDeviceDeadzoneOrigin.c)
 *     RIMAllocateHidConfigDesc @ 0x1C017ECB8 (RIMAllocateHidConfigDesc.c)
 *     RIMConfigureDeviceFeedback @ 0x1C017FFB0 (RIMConfigureDeviceFeedback.c)
 *     RIMHidGetPreparsedData @ 0x1C0181BB0 (RIMHidGetPreparsedData.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C0182C04 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMAddSimulatedPointerDeviceData @ 0x1C0185F90 (RIMAddSimulatedPointerDeviceData.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C01890A0 (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetProductString @ 0x1C0189C50 (RIMGetProductString.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C018B358 (RIMReleasePointerDeviceInfo.c)
 *     RIMIDEFillContactUsageValues @ 0x1C0195418 (RIMIDEFillContactUsageValues.c)
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C01960D8 (RIMIDEInjectHIDReportFromPointerInfo.c)
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C0196BF8 (RIMIDEInjectMouseFromMouseInputStruct.c)
 *     ?BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z @ 0x1C0198634 (-BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z.c)
 *     RIMIDE_InjectGenericHidInput @ 0x1C0199130 (RIMIDE_InjectGenericHidInput.c)
 *     traceFrame @ 0x1C019EE84 (traceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C01A001C (RIMStartPointerDeviceFrame.c)
 *     RIMDeviceNotifyAsyncWorkItem @ 0x1C01A1CEC (RIMDeviceNotifyAsyncWorkItem.c)
 *     RIMDeviceNotifyUsingAsyncPnpWorkNotification @ 0x1C01A1ED0 (RIMDeviceNotifyUsingAsyncPnpWorkNotification.c)
 *     RIMQueueDeviceNotifyAsyncWorkItem @ 0x1C01A2070 (RIMQueueDeviceNotifyAsyncWorkItem.c)
 *     RIMVirtDeviceClassNotifyAsyncWorkItem @ 0x1C01A21F8 (RIMVirtDeviceClassNotifyAsyncWorkItem.c)
 *     RIMVirtDeviceClassNotifyUsingAsyncPnpWorkNotification @ 0x1C01A2688 (RIMVirtDeviceClassNotifyUsingAsyncPnpWorkNotification.c)
 *     RIMVirtQueueDeviceClassNotifyAsyncWorkItem @ 0x1C01A2D78 (RIMVirtQueueDeviceClassNotifyAsyncWorkItem.c)
 *     RIMVirtQueueRimDevChangeAsyncWorkItem @ 0x1C01A2F10 (RIMVirtQueueRimDevChangeAsyncWorkItem.c)
 *     RIMVirtQueueRootPnpEndSyncAsyncWorkItem @ 0x1C01A3090 (RIMVirtQueueRootPnpEndSyncAsyncWorkItem.c)
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C01A7D00 (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     rimDigitizerActiveBitPolicyUpdateStateAndApply @ 0x1C01A80C8 (rimDigitizerActiveBitPolicyUpdateStateAndApply.c)
 *     rimExtractScantime @ 0x1C01A9E68 (rimExtractScantime.c)
 *     rimNullXYPolicyUpdateStateAndApply @ 0x1C01AABC8 (rimNullXYPolicyUpdateStateAndApply.c)
 *     rimProcessPointerDeviceContact @ 0x1C01ABB74 (rimProcessPointerDeviceContact.c)
 *     rimObsAddInputObserver @ 0x1C01ACCAC (rimObsAddInputObserver.c)
 *     rimObsCheckForObservationPermissions @ 0x1C01AD628 (rimObsCheckForObservationPermissions.c)
 *     rimObsDeliverInputToObserver @ 0x1C01ADAD4 (rimObsDeliverInputToObserver.c)
 *     rimObsPopInputMessage @ 0x1C01AE850 (rimObsPopInputMessage.c)
 *     rimObsPushInputMessage @ 0x1C01AEC74 (rimObsPushInputMessage.c)
 *     rimObsStartStopDeviceRead @ 0x1C01AF2E0 (rimObsStartStopDeviceRead.c)
 *     rimObsUpdateInputObserverRegistration @ 0x1C01AF6CC (rimObsUpdateInputObserverRegistration.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C01B44BC (RIMHandleTTMDeviceArrival.c)
 *     RIMHandleTTMDeviceInput @ 0x1C01B4714 (RIMHandleTTMDeviceInput.c)
 *     RIMHandleTTMDeviceRemoval @ 0x1C01B481C (RIMHandleTTMDeviceRemoval.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C01BE724 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C01CDFE4 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C01CFA4C (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z @ 0x1C01D7500 (-StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z.c)
 *     ?GetTransform@CDesktopInputSink@@SA_NPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01E4C70 (-GetTransform@CDesktopInputSink@@SA_NPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z @ 0x1C01E5504 (-AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z.c)
 *     ?RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z @ 0x1C01E7058 (-RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z.c)
 *     ?ivSendForegroundUpdate@IVForegroundSync@@YAXPEAUHWND__@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@@Z @ 0x1C01EF55C (-ivSendForegroundUpdate@IVForegroundSync@@YAXPEAUHWND__@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@@.c)
 *     ?ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z @ 0x1C01F6E90 (-ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z.c)
 *     Win32kBaseDriverEntry @ 0x1C02DEBC0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_d(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned int a6,
        unsigned __int16 a7,
        __int64 a8,
        ...)
{
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+90h] [rbp+48h] BYREF

  va_start(va, a8);
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, char *, __int64, _QWORD))WPP_MAIN_CB.DeviceQueue.32)(
               a1,
               43LL,
               a8,
               a7,
               va,
               4LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = a7;
    return WppAutoLogTrace(a4, a5, a6, a8, v11, va, 4LL, 0LL);
  }
  return result;
}
