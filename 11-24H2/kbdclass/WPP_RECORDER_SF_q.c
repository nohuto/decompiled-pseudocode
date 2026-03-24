/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C0006414
 * Callers:
 *     KeyboardClassWWPowerUpComplete @ 0x1C0004ED0 (KeyboardClassWWPowerUpComplete.c)
 *     KeyboardClassPoRequestComplete @ 0x1C0005070 (KeyboardClassPoRequestComplete.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1C00072D0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q @ 0x1C0006414
 * Reason: Hex-Rays returned no pseudocode for 0x1C0006414
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0006414: mov     r11, rsp
 * 00000001C0006417: mov     [r11+8], rbx
 * 00000001C000641B: push    rdi
 * 00000001C000641C: sub     rsp, 40h
 * 00000001C0006420: mov     rdi, rcx
 * 00000001C0006423: movzx   ebx, r9w
 * 00000001C0006427: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000642E: mov     eax, [rcx+2Ch]
 * 00000001C0006431: test    al, 10h
 * 00000001C0006433: jz      short loc_1C000646F
 * 00000001C0006435: cmp     byte ptr [rcx+29h], 2
 * 00000001C0006439: jb      short loc_1C000646F
 * 00000001C000643B: and     qword ptr [r11-18h], 0
 * 00000001C0006440: lea     rdx, [r11+30h]
 * 00000001C0006444: mov     rax, cs:pfnWppTraceMessage
 * 00000001C000644B: lea     r8, WPP_1b6d0084df9f3ca48f318fdd34bf6db2_Traceguids
 * 00000001C0006452: mov     rcx, [rcx+18h]
 * 00000001C0006456: mov     r9d, ebx
 * 00000001C0006459: mov     qword ptr [r11-20h], 8
 * 00000001C0006461: mov     [r11-28h], rdx
 * 00000001C0006465: mov     edx, 2Bh ; '+'
 * 00000001C000646A: call    _guard_dispatch_icall
 * 00000001C000646F: and     [rsp+48h+var_10], 0
 * 00000001C0006475: lea     rax, [rsp+48h+arg_28]
 * 00000001C000647A: mov     edx, 2
 * 00000001C000647F: mov     [rsp+48h+var_18], 8
 * 00000001C0006488: mov     [rsp+48h+var_20], rax
 * 00000001C000648D: lea     r9, WPP_1b6d0084df9f3ca48f318fdd34bf6db2_Traceguids
 * 00000001C0006494: mov     rcx, rdi
 * 00000001C0006497: mov     [rsp+48h+var_28], bx
 * 00000001C000649C: lea     r8d, [rdx+3]
 * 00000001C00064A0: call    cs:__imp_WppAutoLogTrace
 * 00000001C00064A7: nop     dword ptr [rax+rax+00h]
 * 00000001C00064AC: mov     rbx, [rsp+48h+arg_0]
 * 00000001C00064B1: add     rsp, 40h
 * 00000001C00064B5: pop     rdi
 * 00000001C00064B6: retn
 */
