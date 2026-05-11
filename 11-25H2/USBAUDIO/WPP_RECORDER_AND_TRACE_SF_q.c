/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_q @ 0x140008C50
 * Callers:
 *     USBCaptureProcessPin @ 0x140003280 (USBCaptureProcessPin.c)
 *     DeviceCreate @ 0x140008EF0 (DeviceCreate.c)
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1400092C8 (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     DeviceRemove @ 0x14000B000 (DeviceRemove.c)
 *     DeviceStart @ 0x14002E730 (DeviceStart.c)
 *     DeviceStop @ 0x14002EF70 (DeviceStop.c)
 *     USBType1SurpriseRemove @ 0x140039DE0 (USBType1SurpriseRemove.c)
 *     USBCaptureClosePin @ 0x140039E80 (USBCaptureClosePin.c)
 *     PinProcess @ 0x14003ADB0 (PinProcess.c)
 *     PinCreate @ 0x14003B320 (PinCreate.c)
 *     USBType1RenderCreatePin @ 0x14003D8A0 (USBType1RenderCreatePin.c)
 *     USBCaptureCreatePin @ 0x14003F2C0 (USBCaptureCreatePin.c)
 *     PinClose @ 0x14003FEF0 (PinClose.c)
 *     DeviceSurpriseRemoval @ 0x1400411B0 (DeviceSurpriseRemoval.c)
 *     USBType1RenderClosePin @ 0x140042D80 (USBType1RenderClosePin.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C680 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_q @ 0x140008C50
 * Reason: Hex-Rays returned no pseudocode for 0x140008C50
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140008C50: mov     r11, rsp
 * 0000000140008C53: mov     [r11+8], rbx
 * 0000000140008C57: mov     [r11+10h], rsi
 * 0000000140008C5B: push    rdi
 * 0000000140008C5C: sub     rsp, 40h
 * 0000000140008C60: movzx   ebx, [rsp+48h+arg_30]
 * 0000000140008C68: mov     rsi, r9
 * 0000000140008C6B: mov     dil, r8b
 * 0000000140008C6E: test    dl, dl
 * 0000000140008C70: jz      short loc_140008CA3
 * 0000000140008C72: and     qword ptr [r11-18h], 0
 * 0000000140008C77: lea     rdx, [r11+48h]
 * 0000000140008C7B: mov     rax, cs:pfnWppTraceMessage
 * 0000000140008C82: mov     r9d, ebx
 * 0000000140008C85: mov     r8, [rsp+48h+arg_38]
 * 0000000140008C8D: mov     qword ptr [r11-20h], 8
 * 0000000140008C95: mov     [r11-28h], rdx
 * 0000000140008C99: mov     edx, 2Bh ; '+'
 * 0000000140008C9E: call    _guard_dispatch_icall
 * 0000000140008CA3: test    dil, dil
 * 0000000140008CA6: jz      short loc_140008CE7
 * 0000000140008CA8: and     [rsp+48h+var_10], 0
 * 0000000140008CAE: lea     rax, [rsp+48h+arg_40]
 * 0000000140008CB6: mov     r9, [rsp+48h+arg_38]
 * 0000000140008CBE: xor     edx, edx
 * 0000000140008CC0: mov     r8d, [rsp+48h+arg_28]
 * 0000000140008CC5: mov     rcx, rsi
 * 0000000140008CC8: mov     [rsp+48h+var_18], 8
 * 0000000140008CD1: mov     [rsp+48h+var_20], rax
 * 0000000140008CD6: mov     [rsp+48h+var_28], bx
 * 0000000140008CDB: call    cs:__imp_WppAutoLogTrace
 * 0000000140008CE2: nop     dword ptr [rax+rax+00h]
 * 0000000140008CE7: mov     rbx, [rsp+48h+arg_0]
 * 0000000140008CEC: mov     rsi, [rsp+48h+arg_8]
 * 0000000140008CF1: add     rsp, 40h
 * 0000000140008CF5: pop     rdi
 * 0000000140008CF6: retn
 */
