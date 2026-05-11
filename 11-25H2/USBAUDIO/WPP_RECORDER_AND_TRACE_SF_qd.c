/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qd @ 0x140005368
 * Callers:
 *     USBCaptureResetWorker @ 0x1400045B0 (USBCaptureResetWorker.c)
 *     USBCaptureStateChangePin @ 0x140004850 (USBCaptureStateChangePin.c)
 *     USBType1StateChangePin @ 0x140004CF0 (USBType1StateChangePin.c)
 *     DeviceCreate @ 0x140008EF0 (DeviceCreate.c)
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1400092C8 (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     USBType1ChangePowerState @ 0x14000DC90 (USBType1ChangePowerState.c)
 *     USBCaptureChangePowerState @ 0x14000E3C0 (USBCaptureChangePowerState.c)
 *     USBHwDataPipeReset @ 0x14002D70C (USBHwDataPipeReset.c)
 *     DeviceStart @ 0x14002E730 (DeviceStart.c)
 *     DeviceStop @ 0x14002EF70 (DeviceStop.c)
 *     PinGoToFullPowerState @ 0x140030B00 (PinGoToFullPowerState.c)
 *     PinGoToLowPowerState @ 0x140030C80 (PinGoToLowPowerState.c)
 *     USBHwSelectStreamingAudioInterfaceSideband @ 0x140035E44 (USBHwSelectStreamingAudioInterfaceSideband.c)
 *     USBCaptureStartTransfers @ 0x14003A9E0 (USBCaptureStartTransfers.c)
 *     PinCreate @ 0x14003B320 (PinCreate.c)
 *     PinSetDataFormat @ 0x14003B770 (PinSetDataFormat.c)
 *     USBHwSelectStreamingAudioInterface @ 0x14003C34C (USBHwSelectStreamingAudioInterface.c)
 *     USBType1RenderCreatePin @ 0x14003D8A0 (USBType1RenderCreatePin.c)
 *     USBCaptureCreatePin @ 0x14003F2C0 (USBCaptureCreatePin.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C680 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qd @ 0x140005368
 * Reason: Hex-Rays returned no pseudocode for 0x140005368
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140005368: mov     r11, rsp
 * 000000014000536B: mov     [r11+8], rbx
 * 000000014000536F: mov     [r11+10h], rsi
 * 0000000140005373: push    rdi
 * 0000000140005374: sub     rsp, 50h
 * 0000000140005378: movzx   ebx, [rsp+58h+arg_30]
 * 0000000140005380: mov     rsi, r9
 * 0000000140005383: mov     dil, r8b
 * 0000000140005386: test    dl, dl
 * 0000000140005388: jz      short loc_1400053CB
 * 000000014000538A: and     qword ptr [r11-18h], 0
 * 000000014000538F: lea     rdx, [r11+50h]
 * 0000000140005393: mov     rax, cs:pfnWppTraceMessage
 * 000000014000539A: mov     r9d, ebx
 * 000000014000539D: mov     r8, [rsp+58h+arg_38]
 * 00000001400053A5: mov     qword ptr [r11-20h], 4
 * 00000001400053AD: mov     [r11-28h], rdx
 * 00000001400053B1: lea     rdx, [r11+48h]
 * 00000001400053B5: mov     qword ptr [r11-30h], 8
 * 00000001400053BD: mov     [r11-38h], rdx
 * 00000001400053C1: mov     edx, 2Bh ; '+'
 * 00000001400053C6: call    _guard_dispatch_icall
 * 00000001400053CB: test    dil, dil
 * 00000001400053CE: jz      short loc_140005428
 * 00000001400053D0: and     [rsp+58h+var_10], 0
 * 00000001400053D6: lea     rax, [rsp+58h+arg_48]
 * 00000001400053DE: mov     r9, [rsp+58h+arg_38]
 * 00000001400053E6: xor     edx, edx
 * 00000001400053E8: mov     r8d, [rsp+58h+arg_28]
 * 00000001400053F0: mov     rcx, rsi
 * 00000001400053F3: mov     [rsp+58h+var_18], 4
 * 00000001400053FC: mov     [rsp+58h+var_20], rax
 * 0000000140005401: lea     rax, [rsp+58h+arg_40]
 * 0000000140005409: mov     [rsp+58h+var_28], 8
 * 0000000140005412: mov     [rsp+58h+var_30], rax
 * 0000000140005417: mov     [rsp+58h+var_38], bx
 * 000000014000541C: call    cs:__imp_WppAutoLogTrace
 * 0000000140005423: nop     dword ptr [rax+rax+00h]
 * 0000000140005428: mov     rbx, [rsp+58h+arg_0]
 * 000000014000542D: mov     rsi, [rsp+58h+arg_8]
 * 0000000140005432: add     rsp, 50h
 * 0000000140005436: pop     rdi
 * 0000000140005437: retn
 */
