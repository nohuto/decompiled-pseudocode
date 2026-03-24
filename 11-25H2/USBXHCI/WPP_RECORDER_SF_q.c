/*
 * XREFs of WPP_RECORDER_SF_q @ 0x14002CE68
 * Callers:
 *     XilCoreUsbDevice_Create @ 0x140003B48 (XilCoreUsbDevice_Create.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x140009D50 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x14000A910 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     XilCoreCommonBuffer_RebalanceBuffers @ 0x14000B30C (XilCoreCommonBuffer_RebalanceBuffers.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromSx @ 0x14002CD50 (Controller_WdfEvtDeviceDisarmWakeFromSx.c)
 *     Controller_WdfEvtDeviceArmWakeFromSx @ 0x14002CDE0 (Controller_WdfEvtDeviceArmWakeFromSx.c)
 *     ControllerPreInterruptsDisableAcpiCallout @ 0x1400304A4 (ControllerPreInterruptsDisableAcpiCallout.c)
 *     UsbDevice_EnableCompletion @ 0x140030C60 (UsbDevice_EnableCompletion.c)
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1400322E0 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 *     Controller_WdfEvtDeviceWakeFromS0Triggered @ 0x1400331F0 (Controller_WdfEvtDeviceWakeFromS0Triggered.c)
 *     XilCoreCommonBuffer_FreeUnusedResources @ 0x140034C3C (XilCoreCommonBuffer_FreeUnusedResources.c)
 *     CommonBuffer_WdfEvtCleanupCallback @ 0x14003F4C0 (CommonBuffer_WdfEvtCleanupCallback.c)
 *     Controller_LPEEnterExitCallback @ 0x1400414A0 (Controller_LPEEnterExitCallback.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x140043180 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x140043890 (Controller_UcxEvtStopTrackingForTimeSync.c)
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x140043CE0 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure @ 0x140047878 (Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure.c)
 *     ESM_SimulatingEndpointHaltReceivedOnTimeout @ 0x140055D60 (ESM_SimulatingEndpointHaltReceivedOnTimeout.c)
 *     ESM_SimulatingExpectedEventTRBsProcessedAfterHaltOnTimeout @ 0x140055DC0 (ESM_SimulatingExpectedEventTRBsProcessedAfterHaltOnTimeout.c)
 *     ESM_SimulatingExpectedEventTRBsProcessedOnTimeout @ 0x140055E20 (ESM_SimulatingExpectedEventTRBsProcessedOnTimeout.c)
 *     ESM_SimulatingFSEReceivedOnTimeout @ 0x140055E80 (ESM_SimulatingFSEReceivedOnTimeout.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x140057108 (XilCoreDeviceSlot_AllocateResources.c)
 *     Command_Create @ 0x1400741FC (Command_Create.c)
 *     Controller_ExecuteKBLPowerTransitionWorkaround @ 0x140076A08 (Controller_ExecuteKBLPowerTransitionWorkaround.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x140079ED0 (Controller_WdfEvtDevicePrepareHardware.c)
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x14007A3B0 (Controller_WdfEvtDeviceReleaseHardware.c)
 *     Controller_WdfEvtDeviceSelfManagedIoCleanup @ 0x14007A5F0 (Controller_WdfEvtDeviceSelfManagedIoCleanup.c)
 *     DeviceSlot_Create @ 0x14007A7B4 (DeviceSlot_Create.c)
 *     IoControl_Create @ 0x14007CD00 (IoControl_Create.c)
 *     Register_Create @ 0x14007CEE4 (Register_Create.c)
 *     Register_ParseCapabilityRegister @ 0x14007D1BC (Register_ParseCapabilityRegister.c)
 *     IntelPptFilter_Create @ 0x14007EE74 (IntelPptFilter_Create.c)
 *     DmaEnabler_Create @ 0x14007F36C (DmaEnabler_Create.c)
 *     SecureDmaEnabler_Create @ 0x14007F604 (SecureDmaEnabler_Create.c)
 *     SecureChannel_Create @ 0x14007F8F8 (SecureChannel_Create.c)
 *     UsbDevice_UcxEvtDeviceAdd @ 0x1400817A0 (UsbDevice_UcxEvtDeviceAdd.c)
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x140081AFC (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 *     CommonBuffer_Create @ 0x1400826C8 (CommonBuffer_Create.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q @ 0x14002CE68
 * Reason: Hex-Rays returned no pseudocode for 0x14002CE68
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014002CE68: mov     rax, rsp
 * 000000014002CE6B: mov     [rax+8], rbx
 * 000000014002CE6F: mov     [rax+10h], rbp
 * 000000014002CE73: mov     [rax+18h], rsi
 * 000000014002CE77: mov     [rax+20h], rdi
 * 000000014002CE7B: push    r14
 * 000000014002CE7D: sub     rsp, 40h
 * 000000014002CE81: mov     ebp, r8d
 * 000000014002CE84: mov     r14, rcx
 * 000000014002CE87: mov     ebx, r8d
 * 000000014002CE8A: shr     rbx, 10h
 * 000000014002CE8E: movzx   esi, r9w
 * 000000014002CE92: lea     r11d, [rbp-1]
 * 000000014002CE96: movzx   edi, dl
 * 000000014002CE99: mov     r10d, r11d
 * 000000014002CE9C: and     r11d, 1Fh
 * 000000014002CEA0: shr     r10, 5
 * 000000014002CEA4: lea     rax, [rbx+rbx*4]
 * 000000014002CEA8: and     r10d, 7FFh
 * 000000014002CEAF: lea     rax, [r10+rax*4]
 * 000000014002CEB3: mov     r10, cs:WPP_GLOBAL_Control
 * 000000014002CEBA: mov     eax, [r10+rax*4+2Ch]
 * 000000014002CEBF: bt      eax, r11d
 * 000000014002CEC3: jb      short loc_14002CF18
 * 000000014002CEC5: and     [rsp+48h+var_10], 0
 * 000000014002CECB: lea     rax, [rsp+48h+arg_28]
 * 000000014002CED0: mov     r9, [rsp+48h+arg_20]
 * 000000014002CED5: mov     r8d, ebp
 * 000000014002CED8: mov     [rsp+48h+var_18], 8
 * 000000014002CEE1: mov     edx, edi
 * 000000014002CEE3: mov     [rsp+48h+var_20], rax
 * 000000014002CEE8: mov     rcx, r14
 * 000000014002CEEB: mov     word ptr [rsp+48h+var_28], si
 * 000000014002CEF0: call    cs:__imp_WppAutoLogTrace
 * 000000014002CEF7: nop     dword ptr [rax+rax+00h]
 * 000000014002CEFC: mov     rbx, [rsp+48h+arg_0]
 * 000000014002CF01: mov     rbp, [rsp+48h+arg_8]
 * 000000014002CF06: mov     rsi, [rsp+48h+arg_10]
 * 000000014002CF0B: mov     rdi, [rsp+48h+arg_18]
 * 000000014002CF10: add     rsp, 40h
 * 000000014002CF14: pop     r14
 * 000000014002CF16: retn
 * 000000014002CF18: lea     rcx, [rbx+rbx*4]
 * 000000014002CF1C: add     rcx, rcx
 * 000000014002CF1F: cmp     [r10+rcx*8+29h], dil
 * 000000014002CF24: jb      short loc_14002CEC5
 * 000000014002CF26: and     [rsp+48h+var_18], 0
 * 000000014002CF2C: lea     rdx, [rsp+48h+arg_28]
 * 000000014002CF31: mov     rax, cs:pfnWppTraceMessage
 * 000000014002CF38: mov     r9d, esi
 * 000000014002CF3B: mov     r8, [rsp+48h+arg_20]
 * 000000014002CF40: mov     rcx, [r10+rcx*8+18h]
 * 000000014002CF45: mov     [rsp+48h+var_20], 8
 * 000000014002CF4E: mov     [rsp+48h+var_28], rdx
 * 000000014002CF53: mov     edx, 2Bh ; '+'
 * 000000014002CF58: call    _guard_dispatch_icall
 * 000000014002CF5D: jmp     loc_14002CEC5
 */
