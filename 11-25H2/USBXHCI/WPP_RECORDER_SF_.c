/*
 * XREFs of WPP_RECORDER_SF_ @ 0x14000CCC8
 * Callers:
 *     CommonBuffer_QueueWorkItem @ 0x14000444C (CommonBuffer_QueueWorkItem.c)
 *     Command_InternalSendCommand @ 0x1400080E4 (Command_InternalSendCommand.c)
 *     Command_HandleCommandCompletionEvent @ 0x140008884 (Command_HandleCommandCompletionEvent.c)
 *     Controller_CheckHealth @ 0x14000957C (Controller_CheckHealth.c)
 *     RootHub_DetectLinkErrorState @ 0x14000A288 (RootHub_DetectLinkErrorState.c)
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x14000A670 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     XilCommand_SendAddCommandCRBToRingRequest @ 0x14000AACC (XilCommand_SendAddCommandCRBToRingRequest.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x14000AEBC (RootHub_HandlePortStatusChangeEvent.c)
 *     Controller_Start @ 0x14000B894 (Controller_Start.c)
 *     SecureChannel_SendRequestSynchronously @ 0x14000C25C (SecureChannel_SendRequestSynchronously.c)
 *     Register_ControllerStop @ 0x14000C7B8 (Register_ControllerStop.c)
 *     Register_BiosHandoff @ 0x14000C998 (Register_BiosHandoff.c)
 *     XilCoreDeviceSlot_Initialize @ 0x14000D464 (XilCoreDeviceSlot_Initialize.c)
 *     Controller_RaiseAndTrackIrql @ 0x14001C700 (Controller_RaiseAndTrackIrql.c)
 *     XilCoreCommonBuffer_AcquireBufferWithSegmenter @ 0x14001FB88 (XilCoreCommonBuffer_AcquireBufferWithSegmenter.c)
 *     TR_AcquireSecureSegments @ 0x14001FC88 (TR_AcquireSecureSegments.c)
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x140020234 (XilCoreCommonBuffer_AllocateBuffers.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x140024440 (RootHub_UcxEvtGetPortStatus.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1400252D0 (RootHub_UcxEvtInterruptTransfer.c)
 *     Interrupter_DeferredWorkProcessor @ 0x140025E20 (Interrupter_DeferredWorkProcessor.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1400269B0 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x140027D64 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     RootHub_ForceU0AndWait @ 0x1400281F8 (RootHub_ForceU0AndWait.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x140028598 (RootHub_RestoreU1U2Timeouts.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x140028710 (RootHub_UcxEvtClearPortFeature.c)
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x14002A6A8 (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     IoControl_WdfEvtIoDeviceControl @ 0x14002B760 (IoControl_WdfEvtIoDeviceControl.c)
 *     Register_ControllerReset @ 0x14002D87C (Register_ControllerReset.c)
 *     Register_WaitForControllerReady @ 0x14002E138 (Register_WaitForControllerReady.c)
 *     CommonBuffer_FlushWorkItems @ 0x140031998 (CommonBuffer_FlushWorkItems.c)
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1400322E0 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 *     Command_D0EntryPostInterruptsEnabled @ 0x140032A9C (Command_D0EntryPostInterruptsEnabled.c)
 *     Controller_UcxEvtQueryUsbCapability @ 0x140033320 (Controller_UcxEvtQueryUsbCapability.c)
 *     Wmi_CreateControllerCapabilities @ 0x140033EC4 (Wmi_CreateControllerCapabilities.c)
 *     RootHub_Read30PortSpeeds @ 0x1400358B0 (RootHub_Read30PortSpeeds.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x1400360C8 (SecureDmaEnabler_PrepareMemoryForDma.c)
 *     RootHub_ForceU3 @ 0x1400362F4 (RootHub_ForceU3.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1400367E8 (Command_HandleCommandRingStoppedEvent.c)
 *     Controller_D0EntryRestoreState @ 0x140037BF8 (Controller_D0EntryRestoreState.c)
 *     Controller_D0ExitSaveState @ 0x140037EF8 (Controller_D0ExitSaveState.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1400382B0 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x140038940 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x140038BB0 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtPreprocessSetPowerIrp @ 0x140039090 (Controller_WdfEvtPreprocessSetPowerIrp.c)
 *     Controller_SetControllerGone @ 0x14003C470 (Controller_SetControllerGone.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x14003D7A0 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_ClearHSIIWorkaround @ 0x140040140 (Controller_ClearHSIIWorkaround.c)
 *     Controller_DecrementNumberOfEndpointsOffloaded @ 0x14004020C (Controller_DecrementNumberOfEndpointsOffloaded.c)
 *     Controller_DisableController @ 0x140040534 (Controller_DisableController.c)
 *     Controller_EvtIoInternalDeviceControl @ 0x1400405F0 (Controller_EvtIoInternalDeviceControl.c)
 *     Controller_InitiateRecovery @ 0x1400409DC (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x140040D9C (Controller_InternalReset.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1400418B0 (Controller_PopulateDeviceFlagsFromKse.c)
 *     Controller_QueryControllerCapabilitiesFromACPI @ 0x140042054 (Controller_QueryControllerCapabilitiesFromACPI.c)
 *     Controller_ReferenceTrustletProcess @ 0x1400421DC (Controller_ReferenceTrustletProcess.c)
 *     Controller_SetHSIIWorkaround @ 0x14004253C (Controller_SetHSIIWorkaround.c)
 *     Controller_TelemetryReport @ 0x1400427C4 (Controller_TelemetryReport.c)
 *     Controller_TelemetryReportWorker @ 0x140042BA0 (Controller_TelemetryReportWorker.c)
 *     Controller_UcxEvtReset @ 0x140043090 (Controller_UcxEvtReset.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x140043180 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x140043890 (Controller_UcxEvtStopTrackingForTimeSync.c)
 *     Interrupter_DeferredWorkProcessorWithVelocityFor48657796Disabled @ 0x140048624 (Interrupter_DeferredWorkProcessorWithVelocityFor48657796Disabled.c)
 *     RootHub_UcxEvtClearHubFeature @ 0x14004A150 (RootHub_UcxEvtClearHubFeature.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x14004AB10 (RootHub_UcxEvtGetPortErrorCount.c)
 *     Isoch_WdfEvtRingEmptyTimer @ 0x14004D080 (Isoch_WdfEvtRingEmptyTimer.c)
 *     XilCoreCommand_AllocateResources @ 0x140056C08 (XilCoreCommand_AllocateResources.c)
 *     XilCoreCommonBuffer_AllocateBuffer @ 0x140056E34 (XilCoreCommonBuffer_AllocateBuffer.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x140057108 (XilCoreDeviceSlot_AllocateResources.c)
 *     Command_ReleaseHardware @ 0x140074720 (Command_ReleaseHardware.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1400748E4 (Controller_ConfigureS0IdleSettings.c)
 *     Controller_Create @ 0x140074D44 (Controller_Create.c)
 *     Controller_PopulateDeviceFlags @ 0x140076CC0 (Controller_PopulateDeviceFlags.c)
 *     Controller_PopulateDeviceFlagsFromACPI @ 0x1400771E8 (Controller_PopulateDeviceFlagsFromACPI.c)
 *     Controller_PopulateHardwareVerifierFlags @ 0x140077520 (Controller_PopulateHardwareVerifierFlags.c)
 *     Controller_SetDeviceDescription @ 0x14007887C (Controller_SetDeviceDescription.c)
 *     Interrupter_FilterAllMSIResources @ 0x14007C078 (Interrupter_FilterAllMSIResources.c)
 *     Interrupter_PopulateInterrupterLookupTable @ 0x14007C528 (Interrupter_PopulateInterrupterLookupTable.c)
 *     Interrupter_PrepareHardware @ 0x14007C634 (Interrupter_PrepareHardware.c)
 *     Register_ParseCapabilityRegister @ 0x14007D1BC (Register_ParseCapabilityRegister.c)
 *     Register_PrepareHardware @ 0x14007DAC8 (Register_PrepareHardware.c)
 *     RootHub_PrepareHardware @ 0x14007E08C (RootHub_PrepareHardware.c)
 *     SecureDmaEnabler_MapMemory @ 0x1400829B4 (SecureDmaEnabler_MapMemory.c)
 *     Interrupter_PrepareInterrupter @ 0x140082C5C (Interrupter_PrepareInterrupter.c)
 *     IntelPptFilter_FilterCommand @ 0x140084100 (IntelPptFilter_FilterCommand.c)
 *     IntelPptFilter_FilterCommandCompletion @ 0x140084230 (IntelPptFilter_FilterCommandCompletion.c)
 *     IntelPptFilter_FilterEndpointConfigureCommand @ 0x1400842F8 (IntelPptFilter_FilterEndpointConfigureCommand.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x14000CCC8
 * Reason: Hex-Rays returned no pseudocode for 0x14000CCC8
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014000CCC8: mov     rax, rsp
 * 000000014000CCCB: mov     [rax+8], rbx
 * 000000014000CCCF: mov     [rax+10h], rbp
 * 000000014000CCD3: mov     [rax+18h], rsi
 * 000000014000CCD7: mov     [rax+20h], rdi
 * 000000014000CCDB: push    r14
 * 000000014000CCDD: sub     rsp, 30h
 * 000000014000CCE1: mov     ebp, r8d
 * 000000014000CCE4: mov     r14, rcx
 * 000000014000CCE7: mov     ebx, r8d
 * 000000014000CCEA: shr     rbx, 10h
 * 000000014000CCEE: movzx   esi, r9w
 * 000000014000CCF2: lea     r11d, [rbp-1]
 * 000000014000CCF6: movzx   edi, dl
 * 000000014000CCF9: mov     r10d, r11d
 * 000000014000CCFC: and     r11d, 1Fh
 * 000000014000CD00: shr     r10, 5
 * 000000014000CD04: lea     rax, [rbx+rbx*4]
 * 000000014000CD08: and     r10d, 7FFh
 * 000000014000CD0F: lea     rax, [r10+rax*4]
 * 000000014000CD13: mov     r10, cs:WPP_GLOBAL_Control
 * 000000014000CD1A: mov     eax, [r10+rax*4+2Ch]
 * 000000014000CD1F: bt      eax, r11d
 * 000000014000CD23: jb      short loc_14000CD65
 * 000000014000CD25: and     [rsp+38h+var_10], 0
 * 000000014000CD2B: mov     r8d, ebp
 * 000000014000CD2E: mov     r9, [rsp+38h+arg_20]
 * 000000014000CD33: mov     edx, edi
 * 000000014000CD35: mov     rcx, r14
 * 000000014000CD38: mov     word ptr [rsp+38h+var_18], si
 * 000000014000CD3D: call    cs:__imp_WppAutoLogTrace
 * 000000014000CD44: nop     dword ptr [rax+rax+00h]
 * 000000014000CD49: mov     rbx, [rsp+38h+arg_0]
 * 000000014000CD4E: mov     rbp, [rsp+38h+arg_8]
 * 000000014000CD53: mov     rsi, [rsp+38h+arg_10]
 * 000000014000CD58: mov     rdi, [rsp+38h+arg_18]
 * 000000014000CD5D: add     rsp, 30h
 * 000000014000CD61: pop     r14
 * 000000014000CD63: retn
 * 000000014000CD65: lea     rcx, [rbx+rbx*4]
 * 000000014000CD69: add     rcx, rcx
 * 000000014000CD6C: cmp     [r10+rcx*8+29h], dil
 * 000000014000CD71: jb      short loc_14000CD25
 * 000000014000CD73: mov     rax, cs:pfnWppTraceMessage
 * 000000014000CD7A: mov     r9d, esi
 * 000000014000CD7D: and     [rsp+38h+var_18], 0
 * 000000014000CD83: mov     edx, 2Bh ; '+'
 * 000000014000CD88: mov     r8, [rsp+38h+arg_20]
 * 000000014000CD8D: mov     rcx, [r10+rcx*8+18h]
 * 000000014000CD92: call    _guard_dispatch_icall
 * 000000014000CD97: jmp     short loc_14000CD25
 */
