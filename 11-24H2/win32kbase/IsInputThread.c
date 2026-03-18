/*
 * XREFs of IsInputThread @ 0x1400BB380
 * Callers:
 *     NtMITGetCursorUpdateHandle @ 0x1400BB240 (NtMITGetCursorUpdateHandle.c)
 *     NtMITSetKeyboardInputRoutingPolicy @ 0x1400BB2A0 (NtMITSetKeyboardInputRoutingPolicy.c)
 *     ?CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1400BB320 (-CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     NtMITSynthesizeKeyboardInput @ 0x1401053D0 (NtMITSynthesizeKeyboardInput.c)
 *     NtMITUpdateInputGlobals @ 0x140125920 (NtMITUpdateInputGlobals.c)
 *     xxxDestroyThreadInfo @ 0x14015F444 (xxxDestroyThreadInfo.c)
 *     NtMITActivateInputProcessing @ 0x14016B010 (NtMITActivateInputProcessing.c)
 *     NtMITSetInputDelegationMode @ 0x14016B1B0 (NtMITSetInputDelegationMode.c)
 *     ?PostInitialize@CHidInput@@EEAAJXZ @ 0x140188D70 (-PostInitialize@CHidInput@@EEAAJXZ.c)
 *     ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x140188DB0 (-PreUninitialize@CHidInput@@EEAAXXZ.c)
 *     InvokeMouseCursorPositionCallout @ 0x140189720 (InvokeMouseCursorPositionCallout.c)
 *     ?ComputeUIPIForMouseEvent@CMouseProcessor@@AEAAXPEAURawMouseEvent@1@@Z @ 0x14018C328 (-ComputeUIPIForMouseEvent@CMouseProcessor@@AEAAXPEAURawMouseEvent@1@@Z.c)
 *     NtMITAccessibilityTimerNotification @ 0x1401B7CE0 (NtMITAccessibilityTimerNotification.c)
 *     NtMITConfigureVirtualTouchpad @ 0x1401B7DD0 (NtMITConfigureVirtualTouchpad.c)
 *     NtMITDeactivateInputProcessing @ 0x1401B7FF0 (NtMITDeactivateInputProcessing.c)
 *     NtMITDisableMouseIntercept @ 0x1401B80D0 (NtMITDisableMouseIntercept.c)
 *     NtMITEnableMouseIntercept @ 0x1401B81D0 (NtMITEnableMouseIntercept.c)
 *     NtMITPostMouseInputMessage @ 0x1401B8660 (NtMITPostMouseInputMessage.c)
 *     NtMITPostThreadEventMessage @ 0x1401B87E0 (NtMITPostThreadEventMessage.c)
 *     NtMITPostWindowEventMessage @ 0x1401B8950 (NtMITPostWindowEventMessage.c)
 *     NtMITSetInputCallbacks @ 0x1401B8AD0 (NtMITSetInputCallbacks.c)
 *     NtMITSetInputObservationState @ 0x1401B8BB0 (NtMITSetInputObservationState.c)
 *     NtMITSetKeyboardOverriderState @ 0x1401B8C00 (NtMITSetKeyboardOverriderState.c)
 *     NtMITSetLastInputRecipient @ 0x1401B8C50 (NtMITSetLastInputRecipient.c)
 *     NtMITSynthesizeMouseInput @ 0x1401B8CC0 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeTouchInput @ 0x1401B8EC0 (NtMITSynthesizeTouchInput.c)
 *     NtRIMSetDeadzoneRotation @ 0x1401D4F60 (NtRIMSetDeadzoneRotation.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1401FCB24 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x140208BB8 (-UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z @ 0x14020B624 (-OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z.c)
 *     ?CreateIocpHandleForUserMode@IOCPDispatcher@@QEAAPEAXXZ @ 0x14020BFCC (-CreateIocpHandleForUserMode@IOCPDispatcher@@QEAAPEAXXZ.c)
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x14020C73C (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 *     ?GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ @ 0x140210BA4 (-GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ.c)
 *     GetCursorUpdateHandle @ 0x140212734 (GetCursorUpdateHandle.c)
 *     PostMouseInputMessage @ 0x140213164 (PostMouseInputMessage.c)
 *     SetKeyboardInputRoutingPolicy @ 0x140213370 (SetKeyboardInputRoutingPolicy.c)
 *     SetUMInputObservationState @ 0x140213468 (SetUMInputObservationState.c)
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@@@Z @ 0x1402194F8 (-ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@.c)
 *     ?ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x140219F4C (-ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?AddInputToList@BufferedMouseInputList@CMouseProcessor@@QEAA_NAEBVCMouseEvent@2@AEAVCInputDest@@AEBUInputDeliveryContext@2@PEA_K@Z @ 0x14021BD34 (-AddInputToList@BufferedMouseInputList@CMouseProcessor@@QEAA_NAEBVCMouseEvent@2@AEAVCInputDest@@.c)
 *     ?Disable@MouseInterceptState@CMouseProcessor@@QEAA_NW4DisableReason@12@@Z @ 0x14021C8F4 (-Disable@MouseInterceptState@CMouseProcessor@@QEAA_NW4DisableReason@12@@Z.c)
 *     ?Enable@MouseInterceptState@CMouseProcessor@@QEAA_NW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z @ 0x14021C968 (-Enable@MouseInterceptState@CMouseProcessor@@QEAA_NW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x14021CA78 (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 *     ?MasterInputThreadDeactivated@CMouseProcessor@@UEAAXXZ @ 0x14021DAD0 (-MasterInputThreadDeactivated@CMouseProcessor@@UEAAXXZ.c)
 *     ?ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z @ 0x14021E78C (-ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall IsInputThread(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int CurrentThreadId; // eax
  __int64 v3; // rcx

  v1 = *(_QWORD *)(W32GetUserSessionState(a1) + 18808);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1 + 8, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v3 = v1 + 8;
  LOBYTE(v1) = CurrentThreadId == *(_DWORD *)(v1 + 40);
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  return v1;
}
