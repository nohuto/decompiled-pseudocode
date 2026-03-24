/*
 * XREFs of WPP_RECORDER_SF_ @ 0x14001A724
 * Callers:
 *     RootHub_HandlePortStatusChangeEvent @ 0x140009CC0 (RootHub_HandlePortStatusChangeEvent.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x14000A09C (Command_HandleCommandRingStoppedEvent.c)
 *     XilCommand_SendAddCommandCRBToRingRequest @ 0x14000A398 (XilCommand_SendAddCommandCRBToRingRequest.c)
 *     RootHub_DetectLinkErrorState @ 0x14000AEF8 (RootHub_DetectLinkErrorState.c)
 *     Command_HandleCommandCompletionEvent @ 0x14000B740 (Command_HandleCommandCompletionEvent.c)
 *     Command_InternalSendCommand @ 0x14000C004 (Command_InternalSendCommand.c)
 *     Controller_CheckHealth @ 0x14000CDC4 (Controller_CheckHealth.c)
 *     Controller_RaiseAndTrackIrql @ 0x14000DA20 (Controller_RaiseAndTrackIrql.c)
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x140013E00 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 *     XilCoreCommonBuffer_AcquireBufferWithSegmenter @ 0x140016C88 (XilCoreCommonBuffer_AcquireBufferWithSegmenter.c)
 *     TR_AcquireSecureSegments @ 0x140016D88 (TR_AcquireSecureSegments.c)
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x140017334 (XilCoreCommonBuffer_AllocateBuffers.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x140017A08 (SecureDmaEnabler_PrepareMemoryForDma.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x140018AD4 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     Register_WaitForControllerReady @ 0x140019340 (Register_WaitForControllerReady.c)
 *     RootHub_ForceU3 @ 0x1400195BC (RootHub_ForceU3.c)
 *     XilCoreDeviceSlot_Initialize @ 0x14001A080 (XilCoreDeviceSlot_Initialize.c)
 *     Register_ControllerStop @ 0x14001A214 (Register_ControllerStop.c)
 *     Register_BiosHandoff @ 0x14001A3F4 (Register_BiosHandoff.c)
 *     SecureChannel_SendRequestSynchronously @ 0x14001AD7C (SecureChannel_SendRequestSynchronously.c)
 *     Controller_Start @ 0x14001B1F0 (Controller_Start.c)
 *     Register_ControllerReset @ 0x14001C654 (Register_ControllerReset.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x14001D070 (RootHub_RestoreU1U2Timeouts.c)
 *     CommonBuffer_QueueWorkItem @ 0x14001F51C (CommonBuffer_QueueWorkItem.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x140024160 (RootHub_UcxEvtGetPortStatus.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1400251A0 (RootHub_UcxEvtInterruptTransfer.c)
 *     Interrupter_DeferredWorkProcessor @ 0x140025820 (Interrupter_DeferredWorkProcessor.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x140026440 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1400277B0 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_ForceU0AndWait @ 0x140028EFC (RootHub_ForceU0AndWait.c)
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1400292A0 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x140029C68 (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     IoControl_WdfEvtIoDeviceControl @ 0x14002BA00 (IoControl_WdfEvtIoDeviceControl.c)
 *     CommonBuffer_FlushWorkItems @ 0x140030B48 (CommonBuffer_FlushWorkItems.c)
 *     Command_D0EntryPostInterruptsEnabled @ 0x140031554 (Command_D0EntryPostInterruptsEnabled.c)
 *     Wmi_CreateControllerCapabilities @ 0x140032444 (Wmi_CreateControllerCapabilities.c)
 *     RootHub_Read30PortSpeeds @ 0x140033D10 (RootHub_Read30PortSpeeds.c)
 *     Controller_D0EntryRestoreState @ 0x14003634C (Controller_D0EntryRestoreState.c)
 *     Controller_D0ExitSaveState @ 0x1400366C4 (Controller_D0ExitSaveState.c)
 *     Controller_UcxEvtQueryUsbCapability @ 0x140036A80 (Controller_UcxEvtQueryUsbCapability.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1400370B0 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x140037740 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1400379B0 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtPreprocessSetPowerIrp @ 0x140037E90 (Controller_WdfEvtPreprocessSetPowerIrp.c)
 *     Controller_SetControllerGone @ 0x14003C400 (Controller_SetControllerGone.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x14003D690 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_ClearHSIIWorkaround @ 0x14003FA90 (Controller_ClearHSIIWorkaround.c)
 *     Controller_DecrementNumberOfEndpointsOffloaded @ 0x14003FB5C (Controller_DecrementNumberOfEndpointsOffloaded.c)
 *     Controller_DisableController @ 0x14003FE84 (Controller_DisableController.c)
 *     Controller_EvtIoInternalDeviceControl @ 0x14003FF40 (Controller_EvtIoInternalDeviceControl.c)
 *     Controller_InitiateRecovery @ 0x14004032C (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1400406EC (Controller_InternalReset.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x140041408 (Controller_PopulateDeviceFlagsFromKse.c)
 *     Controller_QueryControllerCapabilitiesFromACPI @ 0x140041BAC (Controller_QueryControllerCapabilitiesFromACPI.c)
 *     Controller_ReferenceTrustletProcess @ 0x140041D34 (Controller_ReferenceTrustletProcess.c)
 *     Controller_SetHSIIWorkaround @ 0x140042094 (Controller_SetHSIIWorkaround.c)
 *     Controller_TelemetryReport @ 0x14004231C (Controller_TelemetryReport.c)
 *     Controller_TelemetryReportWorker @ 0x1400426F0 (Controller_TelemetryReportWorker.c)
 *     Controller_UcxEvtReset @ 0x140042BE0 (Controller_UcxEvtReset.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x140042CD0 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1400433E0 (Controller_UcxEvtStopTrackingForTimeSync.c)
 *     RootHub_UcxEvtClearHubFeature @ 0x140049860 (RootHub_UcxEvtClearHubFeature.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x14004A220 (RootHub_UcxEvtGetPortErrorCount.c)
 *     Isoch_WdfEvtRingEmptyTimer @ 0x14004C770 (Isoch_WdfEvtRingEmptyTimer.c)
 *     XilCoreCommand_AllocateResources @ 0x140056068 (XilCoreCommand_AllocateResources.c)
 *     XilCoreCommonBuffer_AllocateBuffer @ 0x140056294 (XilCoreCommonBuffer_AllocateBuffer.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x140056528 (XilCoreDeviceSlot_AllocateResources.c)
 *     Command_ReleaseHardware @ 0x140074720 (Command_ReleaseHardware.c)
 *     Controller_ConfigureS0IdleSettings @ 0x140074818 (Controller_ConfigureS0IdleSettings.c)
 *     Controller_Create @ 0x140074C78 (Controller_Create.c)
 *     Controller_PopulateDeviceFlags @ 0x140076BD8 (Controller_PopulateDeviceFlags.c)
 *     Controller_PopulateDeviceFlagsFromACPI @ 0x140076EFC (Controller_PopulateDeviceFlagsFromACPI.c)
 *     Controller_PopulateHardwareVerifierFlags @ 0x140077234 (Controller_PopulateHardwareVerifierFlags.c)
 *     Controller_SetDeviceDescription @ 0x140078590 (Controller_SetDeviceDescription.c)
 *     Interrupter_FilterAllMSIResources @ 0x14007C014 (Interrupter_FilterAllMSIResources.c)
 *     Interrupter_PopulateInterrupterLookupTable @ 0x14007C4C4 (Interrupter_PopulateInterrupterLookupTable.c)
 *     Interrupter_PrepareHardware @ 0x14007C5D0 (Interrupter_PrepareHardware.c)
 *     Register_ParseCapabilityRegister @ 0x14007D158 (Register_ParseCapabilityRegister.c)
 *     Register_PrepareHardware @ 0x14007DABC (Register_PrepareHardware.c)
 *     RootHub_PrepareHardware @ 0x14007E080 (RootHub_PrepareHardware.c)
 *     SecureDmaEnabler_MapMemory @ 0x1400826D8 (SecureDmaEnabler_MapMemory.c)
 *     Interrupter_PrepareInterrupter @ 0x140082980 (Interrupter_PrepareInterrupter.c)
 *     IntelPptFilter_FilterCommand @ 0x140084100 (IntelPptFilter_FilterCommand.c)
 *     IntelPptFilter_FilterCommandCompletion @ 0x140084230 (IntelPptFilter_FilterCommandCompletion.c)
 *     IntelPptFilter_FilterEndpointConfigureCommand @ 0x1400842F8 (IntelPptFilter_FilterEndpointConfigureCommand.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x14001A724
 * Reason: Hex-Rays returned no pseudocode for 0x14001A724
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014001A724: mov     rax, rsp
 * 000000014001A727: mov     [rax+8], rbx
 * 000000014001A72B: mov     [rax+10h], rbp
 * 000000014001A72F: mov     [rax+18h], rsi
 * 000000014001A733: mov     [rax+20h], rdi
 * 000000014001A737: push    r14
 * 000000014001A739: sub     rsp, 30h
 * 000000014001A73D: mov     ebp, r8d
 * 000000014001A740: mov     r14, rcx
 * 000000014001A743: mov     ebx, r8d
 * 000000014001A746: shr     rbx, 10h
 * 000000014001A74A: movzx   esi, r9w
 * 000000014001A74E: lea     r11d, [rbp-1]
 * 000000014001A752: movzx   edi, dl
 * 000000014001A755: mov     r10d, r11d
 * 000000014001A758: and     r11d, 1Fh
 * 000000014001A75C: shr     r10, 5
 * 000000014001A760: lea     rax, [rbx+rbx*4]
 * 000000014001A764: and     r10d, 7FFh
 * 000000014001A76B: lea     rax, [r10+rax*4]
 * 000000014001A76F: mov     r10, cs:WPP_GLOBAL_Control
 * 000000014001A776: mov     eax, [r10+rax*4+2Ch]
 * 000000014001A77B: bt      eax, r11d
 * 000000014001A77F: jb      short loc_14001A7C1
 * 000000014001A781: and     [rsp+38h+var_10], 0
 * 000000014001A787: mov     r8d, ebp
 * 000000014001A78A: mov     r9, [rsp+38h+arg_20]
 * 000000014001A78F: mov     edx, edi
 * 000000014001A791: mov     rcx, r14
 * 000000014001A794: mov     word ptr [rsp+38h+var_18], si
 * 000000014001A799: call    cs:__imp_WppAutoLogTrace
 * 000000014001A7A0: nop     dword ptr [rax+rax+00h]
 * 000000014001A7A5: mov     rbx, [rsp+38h+arg_0]
 * 000000014001A7AA: mov     rbp, [rsp+38h+arg_8]
 * 000000014001A7AF: mov     rsi, [rsp+38h+arg_10]
 * 000000014001A7B4: mov     rdi, [rsp+38h+arg_18]
 * 000000014001A7B9: add     rsp, 30h
 * 000000014001A7BD: pop     r14
 * 000000014001A7BF: retn
 * 000000014001A7C1: lea     rcx, [rbx+rbx*4]
 * 000000014001A7C5: add     rcx, rcx
 * 000000014001A7C8: cmp     [r10+rcx*8+29h], dil
 * 000000014001A7CD: jb      short loc_14001A781
 * 000000014001A7CF: mov     rax, cs:pfnWppTraceMessage
 * 000000014001A7D6: mov     r9d, esi
 * 000000014001A7D9: and     [rsp+38h+var_18], 0
 * 000000014001A7DF: mov     edx, 2Bh ; '+'
 * 000000014001A7E4: mov     r8, [rsp+38h+arg_20]
 * 000000014001A7E9: mov     rcx, [r10+rcx*8+18h]
 * 000000014001A7EE: call    _guard_dispatch_icall
 * 000000014001A7F3: jmp     short loc_14001A781
 */
