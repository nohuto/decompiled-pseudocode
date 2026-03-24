/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0
 * Callers:
 *     RIMDeliverDeviceResetRequest @ 0x14005A56C (RIMDeliverDeviceResetRequest.c)
 *     rimDeviceResetApc @ 0x14005A7B0 (rimDeviceResetApc.c)
 *     RIMIDERemoveInjectionDevice @ 0x14005B144 (RIMIDERemoveInjectionDevice.c)
 *     RIMReadInput @ 0x14005C200 (RIMReadInput.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x14005CA04 (rimHandleAnyPnpRemovePendingDevices.c)
 *     RIMOnPnpNotification @ 0x140061480 (RIMOnPnpNotification.c)
 *     ?ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXW4_RIM_DEVICE_TYPE@@@Z @ 0x14006C4E8 (-ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXW4_RIM_DEVICE_TYPE@@@Z.c)
 *     rimOnPnpRemoveCompleteInUserCrit @ 0x1400C6FC8 (rimOnPnpRemoveCompleteInUserCrit.c)
 *     RIMIDECreateHIDDesc @ 0x1400C8E60 (RIMIDECreateHIDDesc.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1400D2744 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1400D39CC (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1400D4370 (-GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z.c)
 *     RIMGetPointerInputType @ 0x1400D98AC (RIMGetPointerInputType.c)
 *     ?RIMDeviceCallback_Reset@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x140107440 (-RIMDeviceCallback_Reset@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x1401076A4 (RIMSignalAllPriorPnpWorkToCompleteWaiters.c)
 *     ?SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@KAXAEBU_InputHitTestResult@@@Z @ 0x14011FEC8 (-SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@KAXAEBU_InputHitTestResult@@@Z.c)
 *     ?OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z @ 0x14012B0E4 (-OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z.c)
 *     rimObsObserveNextInput @ 0x140136B18 (rimObsObserveNextInput.c)
 *     rimObsPopInputMessage @ 0x140136DB8 (rimObsPopInputMessage.c)
 *     rimResetPnpRemovePendingStateBits @ 0x140140950 (rimResetPnpRemovePendingStateBits.c)
 *     ?dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x140147F5C (-dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     RIMRegisterForInputWithCallbacks @ 0x14014F6E0 (RIMRegisterForInputWithCallbacks.c)
 *     ?RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x140154028 (-RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 *     EtwTraceUIPISystemError @ 0x14016A710 (EtwTraceUIPISystemError.c)
 *     NtUserReportInertia @ 0x14016FA40 (NtUserReportInertia.c)
 *     RIMUnregisterForInput @ 0x14017BA20 (RIMUnregisterForInput.c)
 *     RIMMarkSiblingMouseDevice @ 0x14017C2B0 (RIMMarkSiblingMouseDevice.c)
 *     RIMAddToActiveDevices @ 0x14017C830 (RIMAddToActiveDevices.c)
 *     RIMGetMaxCountFeatureDetails @ 0x14017CAC0 (RIMGetMaxCountFeatureDetails.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1401875A0 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x14018A840 (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA-AVCInputDest@@AEBU_InputHitTestResul.c)
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x14018AF58 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     RIMOnAsyncWorkItemNotification @ 0x1401972C4 (RIMOnAsyncWorkItemNotification.c)
 *     Win32JobObject::_anonymous_namespace_::DeleteW32Job @ 0x1401A9C08 (Win32JobObject--_anonymous_namespace_--DeleteW32Job.c)
 *     ?UserGlobalAtomTableCallout_Old@@YAPEAXXZ @ 0x1401B2370 (-UserGlobalAtomTableCallout_Old@@YAPEAXXZ.c)
 *     NtUserCreateSyntheticPointerDevice2 @ 0x1401B9930 (NtUserCreateSyntheticPointerDevice2.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1401D2E38 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     _lambda_009a2c515aa32fb2c064293734de7ddc_::operator() @ 0x1401D4164 (_lambda_009a2c515aa32fb2c064293734de7ddc_--operator().c)
 *     RIMAllocateHidDesc @ 0x1401DAB28 (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1401DBCC8 (RIMCreateHidDesc.c)
 *     RIMFindSiblingMouseDeviceWorker @ 0x1401DCD28 (RIMFindSiblingMouseDeviceWorker.c)
 *     RIMFindSiblingPointerDeviceForMouseWorker @ 0x1401DCF20 (RIMFindSiblingPointerDeviceForMouseWorker.c)
 *     RIMHidGetCaps @ 0x1401DD328 (RIMHidGetCaps.c)
 *     RIMHidGetPreparsedData @ 0x1401DD6CC (RIMHidGetPreparsedData.c)
 *     RIMRemoveFromActiveDevices @ 0x1401E0EE0 (RIMRemoveFromActiveDevices.c)
 *     RawInputManagerObjectDelete @ 0x1401E35C8 (RawInputManagerObjectDelete.c)
 *     RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1401E74C4 (RIMTransferInjectionDeviceDataFifoToDataBuffer.c)
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x1401EC448 (RIMDeviceClassNotifyAsyncWorkItem.c)
 *     rimObsDeliverInputToObserver @ 0x1401EFE74 (rimObsDeliverInputToObserver.c)
 *     rimObsPushInputMessage @ 0x1401F08B0 (rimObsPushInputMessage.c)
 *     rimObsUpdateInputObserverRegistration @ 0x1401F1268 (rimObsUpdateInputObserverRegistration.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1401F7794 (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?RIMDeviceCallback_QueryRemove@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x14020D540 (-RIMDeviceCallback_QueryRemove@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?Set@CDesktopInputSink@@AEAA_NPEAXAEBU_LUID@@@Z @ 0x14020FFA4 (-Set@CDesktopInputSink@@AEAA_NPEAXAEBU_LUID@@@Z.c)
 *     ?ivSendForegroundUpdate@IVForegroundSync@@YAXPEAUHWND__@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@@Z @ 0x1402182E0 (-ivSendForegroundUpdate@IVForegroundSync@@YAXPEAUHWND__@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@@.c)
 *     InitCreateUserCrit @ 0x1402E5784 (InitCreateUserCrit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0
 * Reason: Hex-Rays returned no pseudocode for 0x14005DCC0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014005DCC0: mov     [rsp+arg_0], rbx
 * 000000014005DCC5: mov     [rsp+arg_8], rsi
 * 000000014005DCCA: push    rdi
 * 000000014005DCCB: sub     rsp, 40h
 * 000000014005DCCF: movzx   ebx, [rsp+48h+arg_30]
 * 000000014005DCD7: mov     rsi, r9
 * 000000014005DCDA: mov     dil, r8b
 * 000000014005DCDD: test    dl, dl
 * 000000014005DCDF: jnz     short loc_14005DD39
 * 000000014005DCE1: test    dil, dil
 * 000000014005DCE4: jz      short loc_14005DD28
 * 000000014005DCE6: and     [rsp+48h+var_10], 0
 * 000000014005DCEC: lea     rax, [rsp+48h+arg_40]
 * 000000014005DCF4: mov     r9, [rsp+48h+arg_38]
 * 000000014005DCFC: mov     rcx, rsi
 * 000000014005DCFF: mov     r8d, [rsp+48h+arg_28]
 * 000000014005DD04: movzx   edx, [rsp+48h+arg_20]
 * 000000014005DD09: mov     [rsp+48h+var_18], 8
 * 000000014005DD12: mov     [rsp+48h+var_20], rax
 * 000000014005DD17: mov     word ptr [rsp+48h+var_28], bx
 * 000000014005DD1C: call    cs:__imp_WppAutoLogTrace
 * 000000014005DD23: nop     dword ptr [rax+rax+00h]
 * 000000014005DD28: mov     rbx, [rsp+48h+arg_0]
 * 000000014005DD2D: mov     rsi, [rsp+48h+arg_8]
 * 000000014005DD32: add     rsp, 40h
 * 000000014005DD36: pop     rdi
 * 000000014005DD37: retn
 * 000000014005DD39: and     [rsp+48h+var_18], 0
 * 000000014005DD3F: lea     rdx, [rsp+48h+arg_40]
 * 000000014005DD47: mov     rax, cs:pfnWppTraceMessage
 * 000000014005DD4E: mov     r9d, ebx
 * 000000014005DD51: mov     r8, [rsp+48h+arg_38]
 * 000000014005DD59: mov     [rsp+48h+var_20], 8
 * 000000014005DD62: mov     [rsp+48h+var_28], rdx
 * 000000014005DD67: mov     edx, 2Bh ; '+'
 * 000000014005DD6C: call    _guard_dispatch_icall
 * 000000014005DD71: jmp     loc_14005DCE1
 */
