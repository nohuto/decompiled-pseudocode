/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00591BC
 * Callers:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x1C0001C28 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1C00057F4 (RIMTransferInjectionDeviceDataFifoToDataBuffer.c)
 *     NtUserReportInertia @ 0x1C000E690 (NtUserReportInertia.c)
 *     xxxCreateThreadInfo @ 0x1C004D550 (xxxCreateThreadInfo.c)
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x1C0058BF4 (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA-AVCInputDest@@AEBU_InputHitTestResul.c)
 *     RIMUnregisterForInput @ 0x1C0071570 (RIMUnregisterForInput.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C0071A40 (RIMRegisterForInputWithCallbacks.c)
 *     RawInputManagerObjectDelete @ 0x1C007267C (RawInputManagerObjectDelete.c)
 *     RIMOnPnpNotification @ 0x1C0073820 (RIMOnPnpNotification.c)
 *     EtwTraceUIPISystemError @ 0x1C0074670 (EtwTraceUIPISystemError.c)
 *     RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x1C0075238 (RIMSignalAllPriorPnpWorkToCompleteWaiters.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C00752D4 (rimHandleAnyPnpRemovePendingDevices.c)
 *     RIMDoAsyncPnpWorkItem @ 0x1C00756D4 (RIMDoAsyncPnpWorkItem.c)
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x1C00757A4 (RIMDeviceClassNotifyAsyncWorkItem.c)
 *     ?GatherDeviceInfoSummaryInformation@CBaseInput@@AEAAXPEAUDEVICEINFO@@PEAK1PEAH11@Z @ 0x1C0077020 (-GatherDeviceInfoSummaryInformation@CBaseInput@@AEAAXPEAUDEVICEINFO@@PEAK1PEAH11@Z.c)
 *     RIMReadInput @ 0x1C0077620 (RIMReadInput.c)
 *     RIMCreateHidDesc @ 0x1C007EF3C (RIMCreateHidDesc.c)
 *     RIMDeliverDeviceResetRequest @ 0x1C00BA71C (RIMDeliverDeviceResetRequest.c)
 *     RIMFindSiblingPointerDeviceForMouseWorker @ 0x1C00BDCE8 (RIMFindSiblingPointerDeviceForMouseWorker.c)
 *     rimResetPnpRemovePendingStateBits @ 0x1C00C0758 (rimResetPnpRemovePendingStateBits.c)
 *     ?dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00C1E8C (-dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00C1EDC (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     _lambda_e01a74845eb5856ba032dc9cd6fa71ed_::operator() @ 0x1C00D3AF8 (_lambda_e01a74845eb5856ba032dc9cd6fa71ed_--operator().c)
 *     RIMGetPointerInputType @ 0x1C00E0FE4 (RIMGetPointerInputType.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C0178FA8 (RIMIDERemoveInjectionDevice.c)
 *     RIMOnAsyncPnpWorkNotification @ 0x1C0179C30 (RIMOnAsyncPnpWorkNotification.c)
 *     RIMAllocateHidDesc @ 0x1C017F534 (RIMAllocateHidDesc.c)
 *     RIMFindSiblingMouseDeviceWorker @ 0x1C0180E7C (RIMFindSiblingMouseDeviceWorker.c)
 *     RIMHidGetCaps @ 0x1C0181530 (RIMHidGetCaps.c)
 *     RIMHidGetPreparsedData @ 0x1C0181BB0 (RIMHidGetPreparsedData.c)
 *     RIMMarkSiblingMouseDevice @ 0x1C01824F0 (RIMMarkSiblingMouseDevice.c)
 *     RIMVirtAllocateHidDesc @ 0x1C01837E8 (RIMVirtAllocateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C01841C0 (RIMVirtCreateHidDesc.c)
 *     RIMAddToActiveDevices @ 0x1C0186398 (RIMAddToActiveDevices.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C01890A0 (RIMGetMaxCountFeatureDetails.c)
 *     RIMRemoveFromActiveDevices @ 0x1C018B484 (RIMRemoveFromActiveDevices.c)
 *     RIMIDECreateHIDDesc @ 0x1C019395C (RIMIDECreateHIDDesc.c)
 *     rimOnPnpRemoveCompleteInUserCrit @ 0x1C019AD98 (rimOnPnpRemoveCompleteInUserCrit.c)
 *     RIMVirtDeviceClassNotifyAsyncWorkItem @ 0x1C01A21F8 (RIMVirtDeviceClassNotifyAsyncWorkItem.c)
 *     rimObsDeliverInputToObserver @ 0x1C01ADAD4 (rimObsDeliverInputToObserver.c)
 *     rimObsObserveNextInput @ 0x1C01AE614 (rimObsObserveNextInput.c)
 *     rimObsPopInputMessage @ 0x1C01AE850 (rimObsPopInputMessage.c)
 *     rimObsPushInputMessage @ 0x1C01AEC74 (rimObsPushInputMessage.c)
 *     rimObsUpdateInputObserverRegistration @ 0x1C01AF6CC (rimObsUpdateInputObserverRegistration.c)
 *     ?RIMOnTTMDeviceClose@@YAX_K@Z @ 0x1C01B4360 (-RIMOnTTMDeviceClose@@YAX_K@Z.c)
 *     rimDeviceResetApc @ 0x1C01B4D40 (rimDeviceResetApc.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C01BC678 (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1C01C9BA4 (-GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01D2350 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01D8738 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C01DD480 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Reset@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C01DD640 (-RIMDeviceCallback_Reset@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?Set@CDesktopInputSink@@AEAA_NPEAXAEBU_LUID@@@Z @ 0x1C01E4F38 (-Set@CDesktopInputSink@@AEAA_NPEAXAEBU_LUID@@@Z.c)
 *     ?OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z @ 0x1C01E6324 (-OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z.c)
 *     ?RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01E71AC (-RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 *     ?ivSendForegroundUpdate@IVForegroundSync@@YAXPEAUHWND__@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@@Z @ 0x1C01EF55C (-ivSendForegroundUpdate@IVForegroundSync@@YAXPEAUHWND__@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@@.c)
 *     ?SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@KAXAEBU_InputHitTestResult@@@Z @ 0x1C01F26AC (-SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@KAXAEBU_InputHitTestResult@@@Z.c)
 *     InitCreateUserCrit @ 0x1C02DD5E0 (InitCreateUserCrit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00591BC
 * Reason: Hex-Rays returned no pseudocode for 0x1C00591BC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00591BC: mov     [rsp+arg_0], rbx
 * 00000001C00591C1: mov     [rsp+arg_8], rsi
 * 00000001C00591C6: push    rdi
 * 00000001C00591C7: sub     rsp, 40h
 * 00000001C00591CB: movzx   ebx, [rsp+48h+arg_30]
 * 00000001C00591D3: mov     rsi, r9
 * 00000001C00591D6: mov     dil, r8b
 * 00000001C00591D9: test    dl, dl
 * 00000001C00591DB: jnz     loc_1C0100BDE
 * 00000001C00591E1: test    dil, dil
 * 00000001C00591E4: jz      short loc_1C0059228
 * 00000001C00591E6: and     [rsp+48h+var_10], 0
 * 00000001C00591EC: lea     rax, [rsp+48h+arg_40]
 * 00000001C00591F4: mov     r9, [rsp+48h+arg_38]
 * 00000001C00591FC: mov     rcx, rsi
 * 00000001C00591FF: mov     r8d, [rsp+48h+arg_28]
 * 00000001C0059204: movzx   edx, [rsp+48h+arg_20]
 * 00000001C0059209: mov     [rsp+48h+var_18], 8
 * 00000001C0059212: mov     [rsp+48h+var_20], rax
 * 00000001C0059217: mov     word ptr [rsp+48h+var_28], bx
 * 00000001C005921C: call    cs:__imp_WppAutoLogTrace
 * 00000001C0059223: nop     dword ptr [rax+rax+00h]
 * 00000001C0059228: mov     rbx, [rsp+48h+arg_0]
 * 00000001C005922D: mov     rsi, [rsp+48h+arg_8]
 * 00000001C0059232: add     rsp, 40h
 * 00000001C0059236: pop     rdi
 * 00000001C0059237: retn
 * 00000001C0100BDE: and     [rsp+48h+var_18], 0
 * 00000001C0100BE4: lea     rdx, [rsp+48h+arg_40]
 * 00000001C0100BEC: mov     rax, qword ptr cs:WPP_MAIN_CB.DeviceQueue.20h
 * 00000001C0100BF3: mov     r9d, ebx
 * 00000001C0100BF6: mov     r8, [rsp+48h+arg_38]
 * 00000001C0100BFE: mov     [rsp+48h+var_20], 8
 * 00000001C0100C07: mov     [rsp+48h+var_28], rdx
 * 00000001C0100C0C: mov     edx, 2Bh ; '+'
 * 00000001C0100C11: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0100C17: nop
 * 00000001C0100C18: jmp     loc_1C00591E1
 */
