/*
 * XREFs of SendMessageTo @ 0x1C006A100
 * Callers:
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x1C005649C (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     SendAppClipChanged @ 0x1C00640B0 (SendAppClipChanged.c)
 *     ?Broadcast@InputConfig@@SAXXZ @ 0x1C0066B00 (-Broadcast@InputConfig@@SAXXZ.c)
 *     SynchronizeContext @ 0x1C0068170 (SynchronizeContext.c)
 *     ?NotifySystemSateChanged@CActivationObjectManager@@AEBAXPEBVCActivationObject@@W4ACTIVATION_OBJECT_NOTIFICATION_ACTION@@U_tagActivationObjectNotificationForegroundData@@@Z @ 0x1C0068A30 (-NotifySystemSateChanged@CActivationObjectManager@@AEBAXPEBVCActivationObject@@W4ACTIVATION_OBJE.c)
 *     ?ForwardInputToISM@CKeyboardProcessor@@SAX_NGGGPEAXK0_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C006A030 (-ForwardInputToISM@CKeyboardProcessor@@SAX_NGGGPEAXK0_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z.c)
 *     ?ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z @ 0x1C006C548 (-ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z.c)
 *     SendVisibilityChanged @ 0x1C00C20D0 (SendVisibilityChanged.c)
 *     SendPositionChanged @ 0x1C00C4610 (SendPositionChanged.c)
 *     _lambda_82048e68f5598f867a09767a358fae1b_::_lambda_invoker_cdecl_ @ 0x1C00D5460 (_lambda_82048e68f5598f867a09767a358fae1b_--_lambda_invoker_cdecl_.c)
 *     ?rimInvalidateInputs@@YAXPEAURIMDEV@@@Z @ 0x1C0191DA0 (-rimInvalidateInputs@@YAXPEAURIMDEV@@@Z.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x1C01C2DE0 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTE.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAIK@Z @ 0x1C01D95B4 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUCPointerInputFrame@@PEBU.c)
 *     ?ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C01DB550 (-ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_.c)
 *     ?ForwardInputToISMTimers@CAccessibilityTimer@@CAXW4_ACCESSIBILITY_TIMERS@@KHH@Z @ 0x1C01E13C0 (-ForwardInputToISMTimers@CAccessibilityTimer@@CAXW4_ACCESSIBILITY_TIMERS@@KHH@Z.c)
 *     SendOrientationChanged @ 0x1C01E8A40 (SendOrientationChanged.c)
 *     SendShape @ 0x1C01E8A90 (SendShape.c)
 *     SendShellClipChanged @ 0x1C01E8AC0 (SendShellClipChanged.c)
 *     SendSuppressionStateChanged @ 0x1C01E8D30 (SendSuppressionStateChanged.c)
 *     ??0VPTPContact@@QEAA@UVPTP_ID@@PEAU_LIST_ENTRY@@@Z @ 0x1C01F0420 (--0VPTPContact@@QEAA@UVPTP_ID@@PEAU_LIST_ENTRY@@@Z.c)
 *     ??1VPTPContact@@QEAA@XZ @ 0x1C01F04F4 (--1VPTPContact@@QEAA@XZ.c)
 *     ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z @ 0x1C01F2528 (-CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z.c)
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x1C01F81DC (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C01F9444 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?SendInputStreamEndedMessage@CMouseProcessor@@AEBAXAEBVCMouseEvent@1@@Z @ 0x1C01FAED4 (-SendInputStreamEndedMessage@CMouseProcessor@@AEBAXAEBVCMouseEvent@1@@Z.c)
 *     ApiSetEditionHandleAndPostKeyEvent @ 0x1C020647C (ApiSetEditionHandleAndPostKeyEvent.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C006A150 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 */

__int64 __fastcall SendMessageTo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned int v6; // esi
  __int64 v7; // rax

  v4 = a3;
  v6 = a1;
  v7 = SGDGetUserSessionState(a1, a2, a3, a4);
  return InputExtensibilityCallout::CoreMsgSendMessage(*(_QWORD *)(v7 + 16048), v6, a2, v4);
}
