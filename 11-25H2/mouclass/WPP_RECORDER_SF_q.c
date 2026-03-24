/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C0005E78
 * Callers:
 *     MouseClassWWPowerUpComplete @ 0x1C0004E70 (MouseClassWWPowerUpComplete.c)
 *     MouseClassPoRequestComplete @ 0x1C0004FD0 (MouseClassPoRequestComplete.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1C0006B20 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q @ 0x1C0005E78
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005E78
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005E78: mov     r11, rsp
 * 00000001C0005E7B: mov     [r11+8], rbx
 * 00000001C0005E7F: push    rdi
 * 00000001C0005E80: sub     rsp, 40h
 * 00000001C0005E84: mov     rdi, rcx
 * 00000001C0005E87: movzx   ebx, r9w
 * 00000001C0005E8B: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0005E92: mov     eax, [rcx+2Ch]
 * 00000001C0005E95: test    al, 10h
 * 00000001C0005E97: jz      short loc_1C0005ED3
 * 00000001C0005E99: cmp     byte ptr [rcx+29h], 2
 * 00000001C0005E9D: jb      short loc_1C0005ED3
 * 00000001C0005E9F: and     qword ptr [r11-18h], 0
 * 00000001C0005EA4: lea     rdx, [r11+30h]
 * 00000001C0005EA8: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0005EAF: lea     r8, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0005EB6: mov     rcx, [rcx+18h]
 * 00000001C0005EBA: mov     r9d, ebx
 * 00000001C0005EBD: mov     qword ptr [r11-20h], 8
 * 00000001C0005EC5: mov     [r11-28h], rdx
 * 00000001C0005EC9: mov     edx, 2Bh ; '+'
 * 00000001C0005ECE: call    _guard_dispatch_icall
 * 00000001C0005ED3: and     [rsp+48h+var_10], 0
 * 00000001C0005ED9: lea     rax, [rsp+48h+arg_28]
 * 00000001C0005EDE: mov     edx, 2
 * 00000001C0005EE3: mov     [rsp+48h+var_18], 8
 * 00000001C0005EEC: mov     [rsp+48h+var_20], rax
 * 00000001C0005EF1: lea     r9, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0005EF8: mov     rcx, rdi
 * 00000001C0005EFB: mov     [rsp+48h+var_28], bx
 * 00000001C0005F00: lea     r8d, [rdx+3]
 * 00000001C0005F04: call    cs:__imp_WppAutoLogTrace
 * 00000001C0005F0B: nop     dword ptr [rax+rax+00h]
 * 00000001C0005F10: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0005F15: add     rsp, 40h
 * 00000001C0005F19: pop     rdi
 * 00000001C0005F1A: retn
 */
