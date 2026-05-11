/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_q @ 0x140008700
 * Callers:
 *     USBCaptureProcessPin @ 0x140003050 (USBCaptureProcessPin.c)
 *     DeviceCreate @ 0x1400089A0 (DeviceCreate.c)
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140009420 (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     DeviceRemove @ 0x14000BE50 (DeviceRemove.c)
 *     DeviceStart @ 0x14002E730 (DeviceStart.c)
 *     DeviceStop @ 0x14002EE30 (DeviceStop.c)
 *     USBType1SurpriseRemove @ 0x140039AC0 (USBType1SurpriseRemove.c)
 *     USBCaptureClosePin @ 0x140039B60 (USBCaptureClosePin.c)
 *     PinProcess @ 0x14003AAA0 (PinProcess.c)
 *     USBType1RenderCreatePin @ 0x14003D140 (USBType1RenderCreatePin.c)
 *     USBCaptureCreatePin @ 0x14003EB00 (USBCaptureCreatePin.c)
 *     PinClose @ 0x14003F730 (PinClose.c)
 *     DeviceSurpriseRemoval @ 0x1400409F0 (DeviceSurpriseRemoval.c)
 *     PinCreate @ 0x1400416B0 (PinCreate.c)
 *     USBType1RenderClosePin @ 0x140042A30 (USBType1RenderClosePin.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001BB50 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_q @ 0x140008700
 * Reason: Hex-Rays returned no pseudocode for 0x140008700
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140008700: mov     r11, rsp
 * 0000000140008703: mov     [r11+8], rbx
 * 0000000140008707: mov     [r11+10h], rsi
 * 000000014000870B: push    rdi
 * 000000014000870C: sub     rsp, 40h
 * 0000000140008710: movzx   ebx, [rsp+48h+arg_30]
 * 0000000140008718: mov     rsi, r9
 * 000000014000871B: mov     dil, r8b
 * 000000014000871E: test    dl, dl
 * 0000000140008720: jz      short loc_140008753
 * 0000000140008722: and     qword ptr [r11-18h], 0
 * 0000000140008727: lea     rdx, [r11+48h]
 * 000000014000872B: mov     rax, cs:pfnWppTraceMessage
 * 0000000140008732: mov     r9d, ebx
 * 0000000140008735: mov     r8, [rsp+48h+arg_38]
 * 000000014000873D: mov     qword ptr [r11-20h], 8
 * 0000000140008745: mov     [r11-28h], rdx
 * 0000000140008749: mov     edx, 2Bh ; '+'
 * 000000014000874E: call    _guard_dispatch_icall
 * 0000000140008753: test    dil, dil
 * 0000000140008756: jz      short loc_140008797
 * 0000000140008758: and     [rsp+48h+var_10], 0
 * 000000014000875E: lea     rax, [rsp+48h+arg_40]
 * 0000000140008766: mov     r9, [rsp+48h+arg_38]
 * 000000014000876E: xor     edx, edx
 * 0000000140008770: mov     r8d, [rsp+48h+arg_28]
 * 0000000140008775: mov     rcx, rsi
 * 0000000140008778: mov     [rsp+48h+var_18], 8
 * 0000000140008781: mov     [rsp+48h+var_20], rax
 * 0000000140008786: mov     [rsp+48h+var_28], bx
 * 000000014000878B: call    cs:__imp_WppAutoLogTrace
 * 0000000140008792: nop     dword ptr [rax+rax+00h]
 * 0000000140008797: mov     rbx, [rsp+48h+arg_0]
 * 000000014000879C: mov     rsi, [rsp+48h+arg_8]
 * 00000001400087A1: add     rsp, 40h
 * 00000001400087A5: pop     rdi
 * 00000001400087A6: retn
 */
