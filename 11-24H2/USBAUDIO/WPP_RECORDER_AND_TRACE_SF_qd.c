/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qd @ 0x140005138
 * Callers:
 *     USBCaptureResetWorker @ 0x140004380 (USBCaptureResetWorker.c)
 *     USBCaptureStateChangePin @ 0x140004620 (USBCaptureStateChangePin.c)
 *     USBType1StateChangePin @ 0x140004AC0 (USBType1StateChangePin.c)
 *     DeviceCreate @ 0x1400089A0 (DeviceCreate.c)
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140009420 (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     USBType1ChangePowerState @ 0x14000D380 (USBType1ChangePowerState.c)
 *     USBCaptureChangePowerState @ 0x14000DAB0 (USBCaptureChangePowerState.c)
 *     USBHwDataPipeReset @ 0x14002D70C (USBHwDataPipeReset.c)
 *     DeviceStart @ 0x14002E730 (DeviceStart.c)
 *     DeviceStop @ 0x14002EE30 (DeviceStop.c)
 *     PinGoToFullPowerState @ 0x140030990 (PinGoToFullPowerState.c)
 *     PinGoToLowPowerState @ 0x140030B10 (PinGoToLowPowerState.c)
 *     USBHwSelectStreamingAudioInterfaceSideband @ 0x140035B24 (USBHwSelectStreamingAudioInterfaceSideband.c)
 *     USBCaptureStartTransfers @ 0x14003A6D0 (USBCaptureStartTransfers.c)
 *     PinSetDataFormat @ 0x14003B010 (PinSetDataFormat.c)
 *     USBHwSelectStreamingAudioInterface @ 0x14003BBEC (USBHwSelectStreamingAudioInterface.c)
 *     USBType1RenderCreatePin @ 0x14003D140 (USBType1RenderCreatePin.c)
 *     USBCaptureCreatePin @ 0x14003EB00 (USBCaptureCreatePin.c)
 *     PinCreate @ 0x1400416B0 (PinCreate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001BB50 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qd @ 0x140005138
 * Reason: Hex-Rays returned no pseudocode for 0x140005138
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140005138: mov     r11, rsp
 * 000000014000513B: mov     [r11+8], rbx
 * 000000014000513F: mov     [r11+10h], rsi
 * 0000000140005143: push    rdi
 * 0000000140005144: sub     rsp, 50h
 * 0000000140005148: movzx   ebx, [rsp+58h+arg_30]
 * 0000000140005150: mov     rsi, r9
 * 0000000140005153: mov     dil, r8b
 * 0000000140005156: test    dl, dl
 * 0000000140005158: jz      short loc_14000519B
 * 000000014000515A: and     qword ptr [r11-18h], 0
 * 000000014000515F: lea     rdx, [r11+50h]
 * 0000000140005163: mov     rax, cs:pfnWppTraceMessage
 * 000000014000516A: mov     r9d, ebx
 * 000000014000516D: mov     r8, [rsp+58h+arg_38]
 * 0000000140005175: mov     qword ptr [r11-20h], 4
 * 000000014000517D: mov     [r11-28h], rdx
 * 0000000140005181: lea     rdx, [r11+48h]
 * 0000000140005185: mov     qword ptr [r11-30h], 8
 * 000000014000518D: mov     [r11-38h], rdx
 * 0000000140005191: mov     edx, 2Bh ; '+'
 * 0000000140005196: call    _guard_dispatch_icall
 * 000000014000519B: test    dil, dil
 * 000000014000519E: jz      short loc_1400051F8
 * 00000001400051A0: and     [rsp+58h+var_10], 0
 * 00000001400051A6: lea     rax, [rsp+58h+arg_48]
 * 00000001400051AE: mov     r9, [rsp+58h+arg_38]
 * 00000001400051B6: xor     edx, edx
 * 00000001400051B8: mov     r8d, [rsp+58h+arg_28]
 * 00000001400051C0: mov     rcx, rsi
 * 00000001400051C3: mov     [rsp+58h+var_18], 4
 * 00000001400051CC: mov     [rsp+58h+var_20], rax
 * 00000001400051D1: lea     rax, [rsp+58h+arg_40]
 * 00000001400051D9: mov     [rsp+58h+var_28], 8
 * 00000001400051E2: mov     [rsp+58h+var_30], rax
 * 00000001400051E7: mov     [rsp+58h+var_38], bx
 * 00000001400051EC: call    cs:__imp_WppAutoLogTrace
 * 00000001400051F3: nop     dword ptr [rax+rax+00h]
 * 00000001400051F8: mov     rbx, [rsp+58h+arg_0]
 * 00000001400051FD: mov     rsi, [rsp+58h+arg_8]
 * 0000000140005202: add     rsp, 50h
 * 0000000140005206: pop     rdi
 * 0000000140005207: retn
 */
