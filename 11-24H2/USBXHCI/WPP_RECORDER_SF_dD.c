/*
 * XREFs of WPP_RECORDER_SF_Dd @ 0x140048D78
 * Callers:
 *     Interrupter_PrepareHardware @ 0x14007C5D0 (Interrupter_PrepareHardware.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Dd @ 0x140048D78
 * Reason: Hex-Rays returned no pseudocode for 0x140048D78
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140048D78: mov     r11, rsp
 * 0000000140048D7B: mov     [r11+8], rbx
 * 0000000140048D7F: mov     [r11+10h], rsi
 * 0000000140048D83: push    rdi
 * 0000000140048D84: sub     rsp, 50h
 * 0000000140048D88: mov     rdi, rcx
 * 0000000140048D8B: movzx   ebx, r9w
 * 0000000140048D8F: mov     rcx, cs:WPP_GLOBAL_Control
 * 0000000140048D96: mov     esi, 4
 * 0000000140048D9B: test    dword ptr [rcx+2Ch], 100h
 * 0000000140048DA2: jz      short loc_140048DE4
 * 0000000140048DA4: cmp     byte ptr [rcx+29h], 2
 * 0000000140048DA8: jb      short loc_140048DE4
 * 0000000140048DAA: and     qword ptr [r11-18h], 0
 * 0000000140048DAF: lea     rdx, [r11+38h]
 * 0000000140048DB3: mov     rax, cs:pfnWppTraceMessage
 * 0000000140048DBA: lea     r8, WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids
 * 0000000140048DC1: mov     rcx, [rcx+18h]
 * 0000000140048DC5: mov     r9d, ebx
 * 0000000140048DC8: mov     [r11-20h], rsi
 * 0000000140048DCC: mov     [r11-28h], rdx
 * 0000000140048DD0: lea     rdx, [r11+30h]
 * 0000000140048DD4: mov     [r11-30h], rsi
 * 0000000140048DD8: mov     [r11-38h], rdx
 * 0000000140048DDC: lea     edx, [rsi+27h]
 * 0000000140048DDF: call    _guard_dispatch_icall
 * 0000000140048DE4: and     [rsp+58h+var_10], 0
 * 0000000140048DEA: lea     rax, [rsp+58h+arg_30]
 * 0000000140048DF2: mov     [rsp+58h+var_18], rsi
 * 0000000140048DF7: lea     r9, WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids
 * 0000000140048DFE: mov     [rsp+58h+var_20], rax
 * 0000000140048E03: mov     edx, 2
 * 0000000140048E08: lea     rax, [rsp+58h+arg_28]
 * 0000000140048E10: mov     [rsp+58h+var_28], rsi
 * 0000000140048E15: mov     [rsp+58h+var_30], rax
 * 0000000140048E1A: mov     rcx, rdi
 * 0000000140048E1D: mov     [rsp+58h+var_38], bx
 * 0000000140048E22: lea     r8d, [rdx+7]
 * 0000000140048E26: call    cs:__imp_WppAutoLogTrace
 * 0000000140048E2D: nop     dword ptr [rax+rax+00h]
 * 0000000140048E32: mov     rbx, [rsp+58h+arg_0]
 * 0000000140048E37: mov     rsi, [rsp+58h+arg_8]
 * 0000000140048E3C: add     rsp, 50h
 * 0000000140048E40: pop     rdi
 * 0000000140048E41: retn
 */
