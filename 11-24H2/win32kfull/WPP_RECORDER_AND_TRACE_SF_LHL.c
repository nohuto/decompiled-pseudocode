/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_LHL @ 0x1400A71F4
 * Callers:
 *     _DelegateCapturePointers @ 0x1400A6408 (_DelegateCapturePointers.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_LHL @ 0x1400A71F4
 * Reason: Hex-Rays returned no pseudocode for 0x1400A71F4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400A71F4: mov     [rsp+arg_0], rbx
 * 00000001400A71F9: mov     [rsp+arg_8], rbp
 * 00000001400A71FE: mov     [rsp+arg_10], rsi
 * 00000001400A7203: push    rdi
 * 00000001400A7204: sub     rsp, 60h
 * 00000001400A7208: movzx   edi, [rsp+68h+arg_30]
 * 00000001400A7210: mov     rsi, r9
 * 00000001400A7213: mov     bl, r8b
 * 00000001400A7216: mov     ebp, 4
 * 00000001400A721B: test    dl, dl
 * 00000001400A721D: jnz     short loc_1400A729D
 * 00000001400A721F: test    bl, bl
 * 00000001400A7221: jz      short loc_1400A7286
 * 00000001400A7223: and     [rsp+68h+var_10], 0
 * 00000001400A7229: lea     rax, [rsp+68h+arg_50]
 * 00000001400A7231: mov     [rsp+68h+var_18], rbp
 * 00000001400A7236: lea     r9, WPP_498cb4b0a6fe38d4bf1a8d41cfaba51a_Traceguids
 * 00000001400A723D: mov     [rsp+68h+var_20], rax
 * 00000001400A7242: mov     r8d, 0Ah
 * 00000001400A7248: mov     [rsp+68h+var_28], 2
 * 00000001400A7251: lea     rax, [rsp+68h+arg_48]
 * 00000001400A7259: mov     [rsp+68h+var_30], rax
 * 00000001400A725E: mov     edx, ebp
 * 00000001400A7260: lea     rax, [rsp+68h+arg_40]
 * 00000001400A7268: mov     [rsp+68h+var_38], rbp
 * 00000001400A726D: mov     [rsp+68h+var_40], rax
 * 00000001400A7272: mov     rcx, rsi
 * 00000001400A7275: mov     word ptr [rsp+68h+var_48], di
 * 00000001400A727A: call    cs:__imp_WppAutoLogTrace
 * 00000001400A7281: nop     dword ptr [rax+rax+00h]
 * 00000001400A7286: lea     r11, [rsp+68h+var_8]
 * 00000001400A728B: mov     rbx, [r11+10h]
 * 00000001400A728F: mov     rbp, [r11+18h]
 * 00000001400A7293: mov     rsi, [r11+20h]
 * 00000001400A7297: mov     rsp, r11
 * 00000001400A729A: pop     rdi
 * 00000001400A729B: retn
 * 00000001400A729D: and     [rsp+68h+var_18], 0
 * 00000001400A72A3: lea     rdx, [rsp+68h+arg_50]
 * 00000001400A72AB: mov     rax, cs:pfnWppTraceMessage
 * 00000001400A72B2: lea     r8, WPP_498cb4b0a6fe38d4bf1a8d41cfaba51a_Traceguids
 * 00000001400A72B9: mov     [rsp+68h+var_20], rbp
 * 00000001400A72BE: mov     r9d, edi
 * 00000001400A72C1: mov     [rsp+68h+var_28], rdx
 * 00000001400A72C6: lea     rdx, [rsp+68h+arg_48]
 * 00000001400A72CE: mov     [rsp+68h+var_30], 2
 * 00000001400A72D7: mov     [rsp+68h+var_38], rdx
 * 00000001400A72DC: lea     rdx, [rsp+68h+arg_40]
 * 00000001400A72E4: mov     [rsp+68h+var_40], rbp
 * 00000001400A72E9: mov     [rsp+68h+var_48], rdx
 * 00000001400A72EE: mov     edx, 2Bh ; '+'
 * 00000001400A72F3: call    _guard_dispatch_icall
 * 00000001400A72F8: jmp     loc_1400A721F
 */
