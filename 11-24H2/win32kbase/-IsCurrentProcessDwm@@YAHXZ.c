/*
 * XREFs of ?IsCurrentProcessDwm@@YAHXZ @ 0x1400CFC50
 * Callers:
 *     UserSessionSwitchEnterCrit @ 0x14004C9C0 (UserSessionSwitchEnterCrit.c)
 *     RIMIsCurrentProcessTrusted @ 0x1400CFC20 (RIMIsCurrentProcessTrusted.c)
 *     NtMITCoreMsgKOpenConnectionTo @ 0x140126F90 (NtMITCoreMsgKOpenConnectionTo.c)
 *     NtUserConfigureActivationObject @ 0x14013A410 (NtUserConfigureActivationObject.c)
 *     ?CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRoutingInfo@@@Z @ 0x140148F34 (-CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRouting.c)
 *     InitClientInfo @ 0x14015DD28 (InitClientInfo.c)
 *     xxxDestroyThreadInfo @ 0x14015F444 (xxxDestroyThreadInfo.c)
 *     NtUserCheckProcessSession @ 0x14016B6A0 (NtUserCheckProcessSession.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x14016BDA0 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserRegisterManipulationThread @ 0x14016F960 (NtUserRegisterManipulationThread.c)
 *     NtUserReportInertia @ 0x14016FA40 (NtUserReportInertia.c)
 *     NtUserSetManipulationInputTarget @ 0x140171460 (NtUserSetManipulationInputTarget.c)
 *     NtKSTInitialize @ 0x1401B7BB0 (NtKSTInitialize.c)
 *     NtMITSetInputCallbacks @ 0x1401B8AD0 (NtMITSetInputCallbacks.c)
 *     NtSetCursorInputSpace @ 0x1401B91E0 (NtSetCursorInputSpace.c)
 *     NtUserPostKeyboardInputMessage @ 0x1401BCB10 (NtUserPostKeyboardInputMessage.c)
 *     NtUserStopAndEndInertia @ 0x1401BDF90 (NtUserStopAndEndInertia.c)
 *     NtUserUnregisterSessionPort @ 0x1401BE190 (NtUserUnregisterSessionPort.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x140205FD0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x140208BB8 (-UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?ShouldKSTInitializeHidSensor@@YA_NXZ @ 0x1402155D4 (-ShouldKSTInitializeHidSensor@@YA_NXZ.c)
 * Callees:
 *     UserUnsafeIsProcessDwm @ 0x1400CFCD0 (UserUnsafeIsProcessDwm.c)
 */

__int64 __fastcall IsCurrentProcessDwm(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 CurrentProcess; // rax

  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  return UserUnsafeIsProcessDwm(CurrentProcess);
}
