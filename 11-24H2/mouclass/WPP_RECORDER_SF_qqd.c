/*
 * XREFs of WPP_RECORDER_SF_qqd @ 0x1C0004CF0
 * Callers:
 *     MouseClassWaitWakeComplete @ 0x1C0004AB0 (MouseClassWaitWakeComplete.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1C0006B20 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqd @ 0x1C0004CF0
 * Reason: Hex-Rays returned no pseudocode for 0x1C0004CF0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0004CF0: mov     r11, rsp
 * 00000001C0004CF3: mov     [r11+8], rbx
 * 00000001C0004CF7: mov     [r11+10h], rsi
 * 00000001C0004CFB: push    rdi
 * 00000001C0004CFC: sub     rsp, 60h
 * 00000001C0004D00: mov     rsi, rcx
 * 00000001C0004D03: movzx   edi, r9w
 * 00000001C0004D07: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0004D0E: movzx   ebx, dl
 * 00000001C0004D11: mov     eax, [rcx+2Ch]
 * 00000001C0004D14: test    al, 10h
 * 00000001C0004D16: jz      short loc_1C0004D74
 * 00000001C0004D18: cmp     [rcx+29h], bl
 * 00000001C0004D1B: jb      short loc_1C0004D74
 * 00000001C0004D1D: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0004D24: lea     rdx, [r11+40h]
 * 00000001C0004D28: mov     rcx, [rcx+18h]
 * 00000001C0004D2C: lea     r8, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0004D33: mov     qword ptr [r11-18h], 0
 * 00000001C0004D3B: mov     r9d, edi
 * 00000001C0004D3E: mov     qword ptr [r11-20h], 4
 * 00000001C0004D46: mov     [r11-28h], rdx
 * 00000001C0004D4A: lea     rdx, [r11+38h]
 * 00000001C0004D4E: mov     qword ptr [r11-30h], 8
 * 00000001C0004D56: mov     [r11-38h], rdx
 * 00000001C0004D5A: lea     rdx, [r11+30h]
 * 00000001C0004D5E: mov     qword ptr [r11-40h], 8
 * 00000001C0004D66: mov     [r11-48h], rdx
 * 00000001C0004D6A: mov     edx, 2Bh ; '+'
 * 00000001C0004D6F: call    _guard_dispatch_icall
 * 00000001C0004D74: mov     [rsp+68h+var_10], 0
 * 00000001C0004D7D: lea     rax, [rsp+68h+arg_38]
 * 00000001C0004D85: mov     [rsp+68h+var_18], 4
 * 00000001C0004D8E: lea     r9, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0004D95: mov     [rsp+68h+var_20], rax
 * 00000001C0004D9A: mov     r8d, 5
 * 00000001C0004DA0: mov     [rsp+68h+var_28], 8
 * 00000001C0004DA9: lea     rax, [rsp+68h+arg_30]
 * 00000001C0004DB1: mov     [rsp+68h+var_30], rax
 * 00000001C0004DB6: mov     edx, ebx
 * 00000001C0004DB8: lea     rax, [rsp+68h+arg_28]
 * 00000001C0004DC0: mov     [rsp+68h+var_38], 8
 * 00000001C0004DC9: mov     [rsp+68h+var_40], rax
 * 00000001C0004DCE: mov     rcx, rsi
 * 00000001C0004DD1: mov     [rsp+68h+var_48], di
 * 00000001C0004DD6: call    cs:__imp_WppAutoLogTrace
 * 00000001C0004DDD: nop     dword ptr [rax+rax+00h]
 * 00000001C0004DE2: mov     rbx, [rsp+68h+arg_0]
 * 00000001C0004DE7: mov     rsi, [rsp+68h+arg_8]
 * 00000001C0004DEC: add     rsp, 60h
 * 00000001C0004DF0: pop     rdi
 * 00000001C0004DF1: retn
 */
