/*
 * XREFs of WPP_RECORDER_SF_qLL @ 0x1C0005F24
 * Callers:
 *     MouseClassServiceCallback @ 0x1C00018A0 (MouseClassServiceCallback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1C0006B20 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qLL @ 0x1C0005F24
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005F24
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005F24: mov     r11, rsp
 * 00000001C0005F27: mov     [r11+8], rbx
 * 00000001C0005F2B: mov     [r11+10h], rsi
 * 00000001C0005F2F: push    rdi
 * 00000001C0005F30: sub     rsp, 60h
 * 00000001C0005F34: mov     rdi, rcx
 * 00000001C0005F37: movzx   ebx, r9w
 * 00000001C0005F3B: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0005F42: mov     esi, 4
 * 00000001C0005F47: mov     eax, [rcx+2Ch]
 * 00000001C0005F4A: test    sil, al
 * 00000001C0005F4D: jz      short loc_1C0005F9F
 * 00000001C0005F4F: cmp     byte ptr [rcx+29h], 5
 * 00000001C0005F53: jb      short loc_1C0005F9F
 * 00000001C0005F55: and     qword ptr [r11-18h], 0
 * 00000001C0005F5A: lea     rdx, [r11+40h]
 * 00000001C0005F5E: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0005F65: lea     r8, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0005F6C: mov     rcx, [rcx+18h]
 * 00000001C0005F70: mov     r9d, ebx
 * 00000001C0005F73: mov     [r11-20h], rsi
 * 00000001C0005F77: mov     [r11-28h], rdx
 * 00000001C0005F7B: lea     rdx, [r11+38h]
 * 00000001C0005F7F: mov     [r11-30h], rsi
 * 00000001C0005F83: mov     [r11-38h], rdx
 * 00000001C0005F87: lea     rdx, [r11+30h]
 * 00000001C0005F8B: mov     qword ptr [r11-40h], 8
 * 00000001C0005F93: mov     [r11-48h], rdx
 * 00000001C0005F97: lea     edx, [rsi+27h]
 * 00000001C0005F9A: call    _guard_dispatch_icall
 * 00000001C0005F9F: and     [rsp+68h+var_10], 0
 * 00000001C0005FA5: lea     rax, [rsp+68h+arg_38]
 * 00000001C0005FAD: mov     [rsp+68h+var_18], rsi
 * 00000001C0005FB2: lea     r9, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0005FB9: mov     [rsp+68h+var_20], rax
 * 00000001C0005FBE: mov     edx, 5
 * 00000001C0005FC3: mov     [rsp+68h+var_28], rsi
 * 00000001C0005FC8: lea     rax, [rsp+68h+arg_30]
 * 00000001C0005FD0: mov     [rsp+68h+var_30], rax
 * 00000001C0005FD5: mov     rcx, rdi
 * 00000001C0005FD8: lea     rax, [rsp+68h+arg_28]
 * 00000001C0005FE0: mov     [rsp+68h+var_38], 8
 * 00000001C0005FE9: mov     [rsp+68h+var_40], rax
 * 00000001C0005FEE: lea     r8d, [rdx-2]
 * 00000001C0005FF2: mov     [rsp+68h+var_48], bx
 * 00000001C0005FF7: call    cs:__imp_WppAutoLogTrace
 * 00000001C0005FFE: nop     dword ptr [rax+rax+00h]
 * 00000001C0006003: mov     rbx, [rsp+68h+arg_0]
 * 00000001C0006008: mov     rsi, [rsp+68h+arg_8]
 * 00000001C000600D: add     rsp, 60h
 * 00000001C0006011: pop     rdi
 * 00000001C0006012: retn
 */
