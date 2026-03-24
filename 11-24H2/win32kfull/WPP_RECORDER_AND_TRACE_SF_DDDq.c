/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_DDDq @ 0x1401C2F30
 * Callers:
 *     ?xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z @ 0x1401D6118 (-xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_DDDq @ 0x1401C2F30
 * Reason: Hex-Rays returned no pseudocode for 0x1401C2F30
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C2F30: mov     [rsp+arg_0], rbx
 * 00000001401C2F35: mov     [rsp+arg_8], rsi
 * 00000001401C2F3A: mov     [rsp+arg_10], rdi
 * 00000001401C2F3F: push    r14
 * 00000001401C2F41: sub     rsp, 70h
 * 00000001401C2F45: mov     esi, 4
 * 00000001401C2F4A: mov     rdi, r9
 * 00000001401C2F4D: mov     bl, r8b
 * 00000001401C2F50: lea     r14d, [rsi+0Ah]
 * 00000001401C2F54: test    dl, dl
 * 00000001401C2F56: jnz     loc_1401C2FEE
 * 00000001401C2F5C: test    bl, bl
 * 00000001401C2F5E: jz      short loc_1401C2FD6
 * 00000001401C2F60: and     [rsp+78h+var_10], 0
 * 00000001401C2F66: lea     rax, [rsp+78h+arg_58]
 * 00000001401C2F6E: mov     [rsp+78h+var_18], 8
 * 00000001401C2F77: lea     r9, WPP_10cc4f57605a3a9d31248f005dacd70d_Traceguids
 * 00000001401C2F7E: mov     [rsp+78h+var_20], rax
 * 00000001401C2F83: mov     r8d, 0Bh
 * 00000001401C2F89: mov     [rsp+78h+var_28], rsi
 * 00000001401C2F8E: lea     rax, [rsp+78h+arg_50]
 * 00000001401C2F96: mov     [rsp+78h+var_30], rax
 * 00000001401C2F9B: mov     edx, esi
 * 00000001401C2F9D: mov     [rsp+78h+var_38], rsi
 * 00000001401C2FA2: lea     rax, [rsp+78h+arg_48]
 * 00000001401C2FAA: mov     [rsp+78h+var_40], rax
 * 00000001401C2FAF: mov     rcx, rdi
 * 00000001401C2FB2: lea     rax, [rsp+78h+arg_40]
 * 00000001401C2FBA: mov     [rsp+78h+var_48], rsi
 * 00000001401C2FBF: mov     [rsp+78h+var_50], rax
 * 00000001401C2FC4: mov     word ptr [rsp+78h+var_58], r14w
 * 00000001401C2FCA: call    cs:__imp_WppAutoLogTrace
 * 00000001401C2FD1: nop     dword ptr [rax+rax+00h]
 * 00000001401C2FD6: lea     r11, [rsp+78h+var_8]
 * 00000001401C2FDB: mov     rbx, [r11+10h]
 * 00000001401C2FDF: mov     rsi, [r11+18h]
 * 00000001401C2FE3: mov     rdi, [r11+20h]
 * 00000001401C2FE7: mov     rsp, r11
 * 00000001401C2FEA: pop     r14
 * 00000001401C2FEC: retn
 * 00000001401C2FEE: and     [rsp+78h+var_18], 0
 * 00000001401C2FF4: lea     rdx, [rsp+78h+arg_58]
 * 00000001401C2FFC: mov     rax, cs:pfnWppTraceMessage
 * 00000001401C3003: lea     r8, WPP_10cc4f57605a3a9d31248f005dacd70d_Traceguids
 * 00000001401C300A: mov     [rsp+78h+var_20], 8
 * 00000001401C3013: mov     r9d, r14d
 * 00000001401C3016: mov     [rsp+78h+var_28], rdx
 * 00000001401C301B: lea     rdx, [rsp+78h+arg_50]
 * 00000001401C3023: mov     [rsp+78h+var_30], rsi
 * 00000001401C3028: mov     [rsp+78h+var_38], rdx
 * 00000001401C302D: lea     rdx, [rsp+78h+arg_48]
 * 00000001401C3035: mov     [rsp+78h+var_40], rsi
 * 00000001401C303A: mov     [rsp+78h+var_48], rdx
 * 00000001401C303F: lea     rdx, [rsp+78h+arg_40]
 * 00000001401C3047: mov     [rsp+78h+var_50], rsi
 * 00000001401C304C: mov     [rsp+78h+var_58], rdx
 * 00000001401C3051: mov     edx, 2Bh ; '+'
 * 00000001401C3056: call    _guard_dispatch_icall
 * 00000001401C305B: jmp     loc_1401C2F5C
 */
