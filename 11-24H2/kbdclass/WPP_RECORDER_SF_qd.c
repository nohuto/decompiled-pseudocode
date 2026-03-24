/*
 * XREFs of WPP_RECORDER_SF_qd @ 0x1C00067A4
 * Callers:
 *     KeyboardClassWaitWakeComplete @ 0x1C0004B10 (KeyboardClassWaitWakeComplete.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1C00072D0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qd @ 0x1C00067A4
 * Reason: Hex-Rays returned no pseudocode for 0x1C00067A4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00067A4: mov     r11, rsp
 * 00000001C00067A7: mov     [r11+8], rbx
 * 00000001C00067AB: push    rbp
 * 00000001C00067AC: sub     rsp, 50h
 * 00000001C00067B0: mov     rbx, rcx
 * 00000001C00067B3: mov     ebp, 5Fh ; '_'
 * 00000001C00067B8: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00067BF: mov     eax, [rcx+2Ch]
 * 00000001C00067C2: test    al, 10h
 * 00000001C00067C4: jz      short loc_1C000680E
 * 00000001C00067C6: cmp     byte ptr [rcx+29h], 2
 * 00000001C00067CA: jb      short loc_1C000680E
 * 00000001C00067CC: and     qword ptr [r11-18h], 0
 * 00000001C00067D1: lea     rdx, [r11+38h]
 * 00000001C00067D5: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00067DC: lea     r8, WPP_1b6d0084df9f3ca48f318fdd34bf6db2_Traceguids
 * 00000001C00067E3: mov     rcx, [rcx+18h]
 * 00000001C00067E7: mov     r9d, ebp
 * 00000001C00067EA: mov     qword ptr [r11-20h], 4
 * 00000001C00067F2: mov     [r11-28h], rdx
 * 00000001C00067F6: lea     rdx, [r11+30h]
 * 00000001C00067FA: mov     qword ptr [r11-30h], 8
 * 00000001C0006802: mov     [r11-38h], rdx
 * 00000001C0006806: lea     edx, [rbp-34h]
 * 00000001C0006809: call    _guard_dispatch_icall
 * 00000001C000680E: and     [rsp+58h+var_10], 0
 * 00000001C0006814: lea     rax, [rsp+58h+arg_30]
 * 00000001C000681C: mov     [rsp+58h+var_18], 4
 * 00000001C0006825: lea     r9, WPP_1b6d0084df9f3ca48f318fdd34bf6db2_Traceguids
 * 00000001C000682C: mov     [rsp+58h+var_20], rax
 * 00000001C0006831: mov     edx, 2
 * 00000001C0006836: lea     rax, [rsp+58h+arg_28]
 * 00000001C000683E: mov     [rsp+58h+var_28], 8
 * 00000001C0006847: mov     [rsp+58h+var_30], rax
 * 00000001C000684C: mov     rcx, rbx
 * 00000001C000684F: mov     [rsp+58h+var_38], bp
 * 00000001C0006854: lea     r8d, [rdx+3]
 * 00000001C0006858: call    cs:__imp_WppAutoLogTrace
 * 00000001C000685F: nop     dword ptr [rax+rax+00h]
 * 00000001C0006864: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0006869: add     rsp, 50h
 * 00000001C000686D: pop     rbp
 * 00000001C000686E: retn
 */
