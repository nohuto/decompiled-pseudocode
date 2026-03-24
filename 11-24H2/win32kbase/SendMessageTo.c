/*
 * XREFs of SendMessageTo @ 0x140048F20
 * Callers:
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x14005F298 (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x14005FD7C (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x140183BB0 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTE.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x14018D9A8 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ApiSetEditionHandleAndPostKeyEvent @ 0x140191CE4 (ApiSetEditionHandleAndPostKeyEvent.c)
 *     SendShellClipChanged @ 0x14019ADE0 (SendShellClipChanged.c)
 *     ?Broadcast@InputConfig@@SAXXZ @ 0x1401F3A34 (-Broadcast@InputConfig@@SAXXZ.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAIK@Z @ 0x1402096B8 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUCPointerInputFrame@@PEBU.c)
 *     ?ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z @ 0x14020C158 (-ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z.c)
 *     ?InjectTouchpadAction@CPTPProcessor@@SAJPEAURawInputManagerDeviceObject@@W4tagTOUCHPAD_ACTION@@@Z @ 0x14020DF40 (-InjectTouchpadAction@CPTPProcessor@@SAJPEAURawInputManagerDeviceObject@@W4tagTOUCHPAD_ACTION@@@.c)
 *     ?SendShellAction@CPTPProcessor@@AEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z @ 0x14020E260 (-SendShellAction@CPTPProcessor@@AEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z.c)
 *     ?ForwardInputToISMTimers@CAccessibilityTimer@@CAXW4_ACCESSIBILITY_TIMERS@@KHH@Z @ 0x14020E5B8 (-ForwardInputToISMTimers@CAccessibilityTimer@@CAXW4_ACCESSIBILITY_TIMERS@@KHH@Z.c)
 *     _lambda_c92a1355a24c64b2e5b1950f66ad99d0_::_lambda_invoker_cdecl_ @ 0x140212090 (_lambda_c92a1355a24c64b2e5b1950f66ad99d0_--_lambda_invoker_cdecl_.c)
 *     InputHapticsTrigger @ 0x140212DF0 (InputHapticsTrigger.c)
 *     SendShape @ 0x140213300 (SendShape.c)
 *     SendSuppressionStateChanged @ 0x140213330 (SendSuppressionStateChanged.c)
 *     UpdateDelegationTargetForMouseInput @ 0x1402137A0 (UpdateDelegationTargetForMouseInput.c)
 *     ??0VPTPContact@@QEAA@UVPTP_ID@@PEAU_LIST_ENTRY@@@Z @ 0x1402192F4 (--0VPTPContact@@QEAA@UVPTP_ID@@PEAU_LIST_ENTRY@@@Z.c)
 *     ??1VPTPContact@@QEAA@XZ @ 0x140219364 (--1VPTPContact@@QEAA@XZ.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x140048F70 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 */

/*
 * Hex-Rays decompilation failed for SendMessageTo @ 0x140048F20
 * Reason: Hex-Rays returned no pseudocode for 0x140048F20
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140048F20: mov     [rsp+arg_0], rbx
 * 0000000140048F25: mov     [rsp+arg_8], rsi
 * 0000000140048F2A: push    rdi
 * 0000000140048F2B: sub     rsp, 20h
 * 0000000140048F2F: mov     ebx, r8d
 * 0000000140048F32: mov     rdi, rdx
 * 0000000140048F35: mov     esi, ecx
 * 0000000140048F37: call    cs:__imp_W32GetUserSessionState
 * 0000000140048F3E: nop     dword ptr [rax+rax+00h]
 * 0000000140048F43: mov     r9d, ebx
 * 0000000140048F46: mov     r8, rdi
 * 0000000140048F49: mov     edx, esi
 * 0000000140048F4B: mov     rcx, [rax+4018h]
 * 0000000140048F52: call    ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z; InputExtensibilityCallout::CoreMsgSendMessage(_MIT_ENDPOINT,void const *,uint)
 * 0000000140048F57: mov     rbx, [rsp+28h+arg_0]
 * 0000000140048F5C: mov     rsi, [rsp+28h+arg_8]
 * 0000000140048F61: add     rsp, 20h
 * 0000000140048F65: pop     rdi
 * 0000000140048F66: retn
 */
