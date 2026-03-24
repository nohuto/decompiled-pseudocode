/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_sDD @ 0x1401BF97C
 * Callers:
 *     ?ApplyForegroundPolicyConsole@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x140189324 (-ApplyForegroundPolicyConsole@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_sDD @ 0x1401BF97C
 * Reason: Hex-Rays returned no pseudocode for 0x1401BF97C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401BF97C: mov     [rsp+arg_0], rbx
 * 00000001401BF981: mov     [rsp+arg_8], rbp
 * 00000001401BF986: mov     [rsp+arg_10], rsi
 * 00000001401BF98B: push    rdi
 * 00000001401BF98C: push    r13
 * 00000001401BF98E: push    r15
 * 00000001401BF990: sub     rsp, 60h
 * 00000001401BF994: mov     rdi, [rsp+78h+arg_40]
 * 00000001401BF99C: lea     r13, aNull; "NULL"
 * 00000001401BF9A3: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001401BF9A7: mov     sil, r8b
 * 00000001401BF9AA: mov     rbp, r9
 * 00000001401BF9AD: mov     r11, rcx
 * 00000001401BF9B0: lea     r8d, [rbx+25h]
 * 00000001401BF9B4: lea     r15d, [rbx+5]
 * 00000001401BF9B8: test    dl, dl
 * 00000001401BF9BA: jnz     loc_1401BFA55
 * 00000001401BF9C0: test    sil, sil
 * 00000001401BF9C3: jz      short loc_1401BFA3A
 * 00000001401BF9C5: test    rdi, rdi
 * 00000001401BF9C8: jz      loc_1401BFADA
 * 00000001401BF9CE: inc     rbx
 * 00000001401BF9D1: cmp     byte ptr [rdi+rbx], 0
 * 00000001401BF9D5: jnz     short loc_1401BF9CE
 * 00000001401BF9D7: inc     rbx
 * 00000001401BF9DA: test    rdi, rdi
 * 00000001401BF9DD: lea     rax, [rsp+78h+arg_50]
 * 00000001401BF9E5: lea     r9, WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids
 * 00000001401BF9EC: mov     edx, r15d
 * 00000001401BF9EF: cmovz   rdi, r13
 * 00000001401BF9F3: mov     rcx, rbp
 * 00000001401BF9F6: and     [rsp+78h+var_20], 0
 * 00000001401BF9FC: mov     [rsp+78h+var_28], r15
 * 00000001401BFA01: mov     [rsp+78h+var_30], rax
 * 00000001401BFA06: lea     rax, [rsp+78h+arg_48]
 * 00000001401BFA0E: mov     [rsp+78h+var_38], r15
 * 00000001401BFA13: mov     [rsp+78h+var_40], rax
 * 00000001401BFA18: mov     [rsp+78h+var_48], rbx
 * 00000001401BFA1D: mov     [rsp+78h+var_50], rdi
 * 00000001401BFA22: mov     word ptr [rsp+78h+var_58], r8w
 * 00000001401BFA28: mov     r8d, 2
 * 00000001401BFA2E: call    cs:__imp_WppAutoLogTrace
 * 00000001401BFA35: nop     dword ptr [rax+rax+00h]
 * 00000001401BFA3A: lea     r11, [rsp+78h+var_18]
 * 00000001401BFA3F: mov     rbx, [r11+20h]
 * 00000001401BFA43: mov     rbp, [r11+28h]
 * 00000001401BFA47: mov     rsi, [r11+30h]
 * 00000001401BFA4B: mov     rsp, r11
 * 00000001401BFA4E: pop     r15
 * 00000001401BFA50: pop     r13
 * 00000001401BFA52: pop     rdi
 * 00000001401BFA53: retn
 * 00000001401BFA55: mov     r10, cs:pfnWppTraceMessage
 * 00000001401BFA5C: test    rdi, rdi
 * 00000001401BFA5F: jz      short loc_1401BFA72
 * 00000001401BFA61: mov     rax, rbx
 * 00000001401BFA64: inc     rax
 * 00000001401BFA67: cmp     byte ptr [rdi+rax], 0
 * 00000001401BFA6B: jnz     short loc_1401BFA64
 * 00000001401BFA6D: inc     rax
 * 00000001401BFA70: jmp     short loc_1401BFA77
 * 00000001401BFA72: mov     eax, 5
 * 00000001401BFA77: test    rdi, rdi
 * 00000001401BFA7A: lea     rdx, [rsp+78h+arg_50]
 * 00000001401BFA82: mov     r9d, r8d
 * 00000001401BFA85: mov     rcx, rdi
 * 00000001401BFA88: cmovz   rcx, r13
 * 00000001401BFA8C: lea     r8, WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids
 * 00000001401BFA93: and     [rsp+78h+var_28], 0
 * 00000001401BFA99: mov     [rsp+78h+var_30], r15
 * 00000001401BFA9E: mov     [rsp+78h+var_38], rdx
 * 00000001401BFAA3: lea     rdx, [rsp+78h+arg_48]
 * 00000001401BFAAB: mov     [rsp+78h+var_40], r15
 * 00000001401BFAB0: mov     [rsp+78h+var_48], rdx
 * 00000001401BFAB5: mov     edx, 2Bh ; '+'
 * 00000001401BFABA: mov     [rsp+78h+var_50], rax
 * 00000001401BFABF: mov     rax, r10
 * 00000001401BFAC2: mov     [rsp+78h+var_58], rcx
 * 00000001401BFAC7: mov     rcx, r11
 * 00000001401BFACA: call    _guard_dispatch_icall
 * 00000001401BFACF: mov     r8d, 24h ; '$'
 * 00000001401BFAD5: jmp     loc_1401BF9C0
 * 00000001401BFADA: mov     ebx, 5
 * 00000001401BFADF: jmp     loc_1401BF9DA
 */
