/*
 * XREFs of WPP_RECORDER_SF_qd @ 0x1C0006134
 * Callers:
 *     MouseClassWaitWakeComplete @ 0x1C0004AB0 (MouseClassWaitWakeComplete.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1C0006B20 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qd @ 0x1C0006134
 * Reason: Hex-Rays returned no pseudocode for 0x1C0006134
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0006134: mov     r11, rsp
 * 00000001C0006137: mov     [r11+8], rbx
 * 00000001C000613B: push    rbp
 * 00000001C000613C: sub     rsp, 50h
 * 00000001C0006140: mov     rbx, rcx
 * 00000001C0006143: mov     ebp, 59h ; 'Y'
 * 00000001C0006148: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000614F: mov     eax, [rcx+2Ch]
 * 00000001C0006152: test    al, 10h
 * 00000001C0006154: jz      short loc_1C000619E
 * 00000001C0006156: cmp     byte ptr [rcx+29h], 2
 * 00000001C000615A: jb      short loc_1C000619E
 * 00000001C000615C: and     qword ptr [r11-18h], 0
 * 00000001C0006161: lea     rdx, [r11+38h]
 * 00000001C0006165: mov     rax, cs:pfnWppTraceMessage
 * 00000001C000616C: lea     r8, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0006173: mov     rcx, [rcx+18h]
 * 00000001C0006177: mov     r9d, ebp
 * 00000001C000617A: mov     qword ptr [r11-20h], 4
 * 00000001C0006182: mov     [r11-28h], rdx
 * 00000001C0006186: lea     rdx, [r11+30h]
 * 00000001C000618A: mov     qword ptr [r11-30h], 8
 * 00000001C0006192: mov     [r11-38h], rdx
 * 00000001C0006196: lea     edx, [rbp-2Eh]
 * 00000001C0006199: call    _guard_dispatch_icall
 * 00000001C000619E: and     [rsp+58h+var_10], 0
 * 00000001C00061A4: lea     rax, [rsp+58h+arg_30]
 * 00000001C00061AC: mov     [rsp+58h+var_18], 4
 * 00000001C00061B5: lea     r9, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C00061BC: mov     [rsp+58h+var_20], rax
 * 00000001C00061C1: mov     edx, 2
 * 00000001C00061C6: lea     rax, [rsp+58h+arg_28]
 * 00000001C00061CE: mov     [rsp+58h+var_28], 8
 * 00000001C00061D7: mov     [rsp+58h+var_30], rax
 * 00000001C00061DC: mov     rcx, rbx
 * 00000001C00061DF: mov     [rsp+58h+var_38], bp
 * 00000001C00061E4: lea     r8d, [rdx+3]
 * 00000001C00061E8: call    cs:__imp_WppAutoLogTrace
 * 00000001C00061EF: nop     dword ptr [rax+rax+00h]
 * 00000001C00061F4: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00061F9: add     rsp, 50h
 * 00000001C00061FD: pop     rbp
 * 00000001C00061FE: retn
 */
