/*
 * XREFs of WPP_RECORDER_SF_d @ 0x1C0006360
 * Callers:
 *     KbdDeterminePortsServiced @ 0x1C000E610 (KbdDeterminePortsServiced.c)
 *     KeyboardAddDevice @ 0x1C000FAE0 (KeyboardAddDevice.c)
 *     DriverEntry @ 0x1C0011080 (DriverEntry.c)
 *     KbdConfiguration @ 0x1C00119A0 (KbdConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1C00072D0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_d @ 0x1C0006360
 * Reason: Hex-Rays returned no pseudocode for 0x1C0006360
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0006360: mov     r11, rsp
 * 00000001C0006363: mov     [r11+8], rbx
 * 00000001C0006367: mov     [r11+10h], rsi
 * 00000001C000636B: push    rdi
 * 00000001C000636C: sub     rsp, 40h
 * 00000001C0006370: mov     rsi, rcx
 * 00000001C0006373: movzx   edi, r9w
 * 00000001C0006377: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000637E: movzx   ebx, dl
 * 00000001C0006381: mov     eax, [rcx+2Ch]
 * 00000001C0006384: test    al, 1
 * 00000001C0006386: jz      short loc_1C00063C1
 * 00000001C0006388: cmp     [rcx+29h], bl
 * 00000001C000638B: jb      short loc_1C00063C1
 * 00000001C000638D: and     qword ptr [r11-18h], 0
 * 00000001C0006392: lea     rdx, [r11+30h]
 * 00000001C0006396: mov     rax, cs:pfnWppTraceMessage
 * 00000001C000639D: lea     r8, WPP_1b6d0084df9f3ca48f318fdd34bf6db2_Traceguids
 * 00000001C00063A4: mov     rcx, [rcx+18h]
 * 00000001C00063A8: mov     r9d, edi
 * 00000001C00063AB: mov     qword ptr [r11-20h], 4
 * 00000001C00063B3: mov     [r11-28h], rdx
 * 00000001C00063B7: mov     edx, 2Bh ; '+'
 * 00000001C00063BC: call    _guard_dispatch_icall
 * 00000001C00063C1: and     [rsp+48h+var_10], 0
 * 00000001C00063C7: lea     rax, [rsp+48h+arg_28]
 * 00000001C00063CC: mov     [rsp+48h+var_18], 4
 * 00000001C00063D5: lea     r9, WPP_1b6d0084df9f3ca48f318fdd34bf6db2_Traceguids
 * 00000001C00063DC: mov     [rsp+48h+var_20], rax
 * 00000001C00063E1: mov     r8d, 1
 * 00000001C00063E7: mov     edx, ebx
 * 00000001C00063E9: mov     [rsp+48h+var_28], di
 * 00000001C00063EE: mov     rcx, rsi
 * 00000001C00063F1: call    cs:__imp_WppAutoLogTrace
 * 00000001C00063F8: nop     dword ptr [rax+rax+00h]
 * 00000001C00063FD: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0006402: mov     rsi, [rsp+48h+arg_8]
 * 00000001C0006407: add     rsp, 40h
 * 00000001C000640B: pop     rdi
 * 00000001C000640C: retn
 */
