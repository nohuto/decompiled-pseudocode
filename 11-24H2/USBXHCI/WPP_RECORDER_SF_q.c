/*
 * XREFs of WPP_RECORDER_SF_q @ 0x14002C6F8
 * Callers:
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x14000A640 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x14000B2A0 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x140013E00 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 *     XilCoreUsbDevice_Create @ 0x14001DAD8 (XilCoreUsbDevice_Create.c)
 *     XilCoreCommonBuffer_RebalanceBuffers @ 0x1400296BC (XilCoreCommonBuffer_RebalanceBuffers.c)
 *     XilCoreCommonBuffer_FreeUnusedResources @ 0x14002991C (XilCoreCommonBuffer_FreeUnusedResources.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromSx @ 0x14002C5E0 (Controller_WdfEvtDeviceDisarmWakeFromSx.c)
 *     Controller_WdfEvtDeviceArmWakeFromSx @ 0x14002C670 (Controller_WdfEvtDeviceArmWakeFromSx.c)
 *     ControllerPreInterruptsDisableAcpiCallout @ 0x14002F4DC (ControllerPreInterruptsDisableAcpiCallout.c)
 *     UsbDevice_EnableCompletion @ 0x14002FC80 (UsbDevice_EnableCompletion.c)
 *     Controller_WdfEvtDeviceWakeFromS0Triggered @ 0x140031CB0 (Controller_WdfEvtDeviceWakeFromS0Triggered.c)
 *     CommonBuffer_WdfEvtCleanupCallback @ 0x14003F390 (CommonBuffer_WdfEvtCleanupCallback.c)
 *     Controller_LPEEnterExitCallback @ 0x140040DF0 (Controller_LPEEnterExitCallback.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x140042CD0 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1400433E0 (Controller_UcxEvtStopTrackingForTimeSync.c)
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x140043830 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure @ 0x140047B88 (Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure.c)
 *     ESM_SimulatingEndpointHaltReceivedOnTimeout @ 0x140055400 (ESM_SimulatingEndpointHaltReceivedOnTimeout.c)
 *     ESM_SimulatingExpectedEventTRBsProcessedAfterHaltOnTimeout @ 0x140055460 (ESM_SimulatingExpectedEventTRBsProcessedAfterHaltOnTimeout.c)
 *     ESM_SimulatingExpectedEventTRBsProcessedOnTimeout @ 0x1400554C0 (ESM_SimulatingExpectedEventTRBsProcessedOnTimeout.c)
 *     ESM_SimulatingFSEReceivedOnTimeout @ 0x140055520 (ESM_SimulatingFSEReceivedOnTimeout.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x140056528 (XilCoreDeviceSlot_AllocateResources.c)
 *     Command_Create @ 0x1400741FC (Command_Create.c)
 *     Controller_ExecuteKBLPowerTransitionWorkaround @ 0x140076920 (Controller_ExecuteKBLPowerTransitionWorkaround.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x140079BE0 (Controller_WdfEvtDevicePrepareHardware.c)
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x14007A0C0 (Controller_WdfEvtDeviceReleaseHardware.c)
 *     Controller_WdfEvtDeviceSelfManagedIoCleanup @ 0x14007A300 (Controller_WdfEvtDeviceSelfManagedIoCleanup.c)
 *     DeviceSlot_Create @ 0x14007A590 (DeviceSlot_Create.c)
 *     IoControl_Create @ 0x14007CC9C (IoControl_Create.c)
 *     Register_Create @ 0x14007CE80 (Register_Create.c)
 *     Register_ParseCapabilityRegister @ 0x14007D158 (Register_ParseCapabilityRegister.c)
 *     IntelPptFilter_Create @ 0x14007EE54 (IntelPptFilter_Create.c)
 *     DmaEnabler_Create @ 0x14007F34C (DmaEnabler_Create.c)
 *     SecureDmaEnabler_Create @ 0x14007F5E4 (SecureDmaEnabler_Create.c)
 *     SecureChannel_Create @ 0x14007F8D8 (SecureChannel_Create.c)
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x1400817D0 (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 *     CommonBuffer_Create @ 0x1400823EC (CommonBuffer_Create.c)
 *     UsbDevice_UcxEvtDeviceAdd @ 0x140083520 (UsbDevice_UcxEvtDeviceAdd.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q @ 0x14002C6F8
 * Reason: Hex-Rays returned no pseudocode for 0x14002C6F8
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014002C6F8: mov     rax, rsp
 * 000000014002C6FB: mov     [rax+8], rbx
 * 000000014002C6FF: mov     [rax+10h], rbp
 * 000000014002C703: mov     [rax+18h], rsi
 * 000000014002C707: mov     [rax+20h], rdi
 * 000000014002C70B: push    r14
 * 000000014002C70D: sub     rsp, 40h
 * 000000014002C711: mov     ebp, r8d
 * 000000014002C714: mov     r14, rcx
 * 000000014002C717: mov     ebx, r8d
 * 000000014002C71A: shr     rbx, 10h
 * 000000014002C71E: movzx   esi, r9w
 * 000000014002C722: lea     r11d, [rbp-1]
 * 000000014002C726: movzx   edi, dl
 * 000000014002C729: mov     r10d, r11d
 * 000000014002C72C: and     r11d, 1Fh
 * 000000014002C730: shr     r10, 5
 * 000000014002C734: lea     rax, [rbx+rbx*4]
 * 000000014002C738: and     r10d, 7FFh
 * 000000014002C73F: lea     rax, [r10+rax*4]
 * 000000014002C743: mov     r10, cs:WPP_GLOBAL_Control
 * 000000014002C74A: mov     eax, [r10+rax*4+2Ch]
 * 000000014002C74F: bt      eax, r11d
 * 000000014002C753: jb      short loc_14002C7A8
 * 000000014002C755: and     [rsp+48h+var_10], 0
 * 000000014002C75B: lea     rax, [rsp+48h+arg_28]
 * 000000014002C760: mov     r9, [rsp+48h+arg_20]
 * 000000014002C765: mov     r8d, ebp
 * 000000014002C768: mov     [rsp+48h+var_18], 8
 * 000000014002C771: mov     edx, edi
 * 000000014002C773: mov     [rsp+48h+var_20], rax
 * 000000014002C778: mov     rcx, r14
 * 000000014002C77B: mov     word ptr [rsp+48h+var_28], si
 * 000000014002C780: call    cs:__imp_WppAutoLogTrace
 * 000000014002C787: nop     dword ptr [rax+rax+00h]
 * 000000014002C78C: mov     rbx, [rsp+48h+arg_0]
 * 000000014002C791: mov     rbp, [rsp+48h+arg_8]
 * 000000014002C796: mov     rsi, [rsp+48h+arg_10]
 * 000000014002C79B: mov     rdi, [rsp+48h+arg_18]
 * 000000014002C7A0: add     rsp, 40h
 * 000000014002C7A4: pop     r14
 * 000000014002C7A6: retn
 * 000000014002C7A8: lea     rcx, [rbx+rbx*4]
 * 000000014002C7AC: add     rcx, rcx
 * 000000014002C7AF: cmp     [r10+rcx*8+29h], dil
 * 000000014002C7B4: jb      short loc_14002C755
 * 000000014002C7B6: and     [rsp+48h+var_18], 0
 * 000000014002C7BC: lea     rdx, [rsp+48h+arg_28]
 * 000000014002C7C1: mov     rax, cs:pfnWppTraceMessage
 * 000000014002C7C8: mov     r9d, esi
 * 000000014002C7CB: mov     r8, [rsp+48h+arg_20]
 * 000000014002C7D0: mov     rcx, [r10+rcx*8+18h]
 * 000000014002C7D5: mov     [rsp+48h+var_20], 8
 * 000000014002C7DE: mov     [rsp+48h+var_28], rdx
 * 000000014002C7E3: mov     edx, 2Bh ; '+'
 * 000000014002C7E8: call    _guard_dispatch_icall
 * 000000014002C7ED: jmp     loc_14002C755
 */
