/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qS @ 0x1401C85D0
 * Callers:
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x14023AE10 (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 *     ?xxxProcessAsyncWindowAction@AdvancedWindowPos@@YAXPEAUHWND__@@_J@Z @ 0x1402D7B40 (-xxxProcessAsyncWindowAction@AdvancedWindowPos@@YAXPEAUHWND__@@_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qS @ 0x1401C85D0
 * Reason: Hex-Rays returned no pseudocode for 0x1401C85D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C85D0: mov     rax, rsp
 * 00000001401C85D3: mov     [rax+8], rbx
 * 00000001401C85D7: mov     [rax+10h], rbp
 * 00000001401C85DB: mov     [rax+18h], rsi
 * 00000001401C85DF: mov     [rax+20h], rdi
 * 00000001401C85E3: push    r12
 * 00000001401C85E5: push    r14
 * 00000001401C85E7: push    r15
 * 00000001401C85E9: sub     rsp, 50h
 * 00000001401C85ED: mov     rbx, [rsp+68h+arg_48]
 * 00000001401C85F5: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001401C85F9: movzx   r14d, [rsp+68h+arg_30]
 * 00000001401C8602: xor     r12d, r12d
 * 00000001401C8605: mov     bpl, r8b
 * 00000001401C8608: mov     r15, r9
 * 00000001401C860B: lea     r8, aNull_0; "NULL"
 * 00000001401C8612: mov     r11, rcx
 * 00000001401C8615: lea     esi, [rdi+0Bh]
 * 00000001401C8618: test    dl, dl
 * 00000001401C861A: jnz     loc_1401C86B5
 * 00000001401C8620: test    bpl, bpl
 * 00000001401C8623: jz      short loc_1401C8695
 * 00000001401C8625: test    rbx, rbx
 * 00000001401C8628: jz      short loc_1401C863F
 * 00000001401C862A: inc     rdi
 * 00000001401C862D: cmp     [rbx+rdi*2], r12w
 * 00000001401C8632: jnz     short loc_1401C862A
 * 00000001401C8634: lea     rsi, ds:2[rdi*2]
 * 00000001401C863C: test    rbx, rbx
 * 00000001401C863F: mov     r9, [rsp+68h+arg_38]
 * 00000001401C8647: lea     rax, [rsp+68h+arg_40]
 * 00000001401C864F: movzx   edx, [rsp+68h+arg_20]
 * 00000001401C8657: cmovz   rbx, r8
 * 00000001401C865B: mov     r8d, [rsp+68h+arg_28]
 * 00000001401C8663: mov     rcx, r15
 * 00000001401C8666: mov     [rsp+68h+var_20], r12
 * 00000001401C866B: mov     [rsp+68h+var_28], rsi
 * 00000001401C8670: mov     [rsp+68h+var_30], rbx
 * 00000001401C8675: mov     [rsp+68h+var_38], 8
 * 00000001401C867E: mov     [rsp+68h+var_40], rax
 * 00000001401C8683: mov     word ptr [rsp+68h+var_48], r14w
 * 00000001401C8689: call    cs:__imp_WppAutoLogTrace
 * 00000001401C8690: nop     dword ptr [rax+rax+00h]
 * 00000001401C8695: lea     r11, [rsp+68h+var_18]
 * 00000001401C869A: mov     rbx, [r11+20h]
 * 00000001401C869E: mov     rbp, [r11+28h]
 * 00000001401C86A2: mov     rsi, [r11+30h]
 * 00000001401C86A6: mov     rdi, [r11+38h]
 * 00000001401C86AA: mov     rsp, r11
 * 00000001401C86AD: pop     r15
 * 00000001401C86AF: pop     r14
 * 00000001401C86B1: pop     r12
 * 00000001401C86B3: retn
 * 00000001401C86B5: mov     r10, cs:pfnWppTraceMessage
 * 00000001401C86BC: test    rbx, rbx
 * 00000001401C86BF: jz      short loc_1401C86D8
 * 00000001401C86C1: mov     rax, rdi
 * 00000001401C86C4: inc     rax
 * 00000001401C86C7: cmp     [rbx+rax*2], r12w
 * 00000001401C86CC: jnz     short loc_1401C86C4
 * 00000001401C86CE: lea     rax, ds:2[rax*2]
 * 00000001401C86D6: jmp     short loc_1401C86DB
 * 00000001401C86D8: mov     rax, rsi
 * 00000001401C86DB: mov     [rsp+68h+var_28], r12
 * 00000001401C86E0: test    rbx, rbx
 * 00000001401C86E3: mov     [rsp+68h+var_30], rax
 * 00000001401C86E8: mov     rcx, rbx
 * 00000001401C86EB: cmovz   rcx, r8
 * 00000001401C86EF: lea     rax, [rsp+68h+arg_40]
 * 00000001401C86F7: mov     r8, [rsp+68h+arg_38]
 * 00000001401C86FF: mov     r9d, r14d
 * 00000001401C8702: mov     [rsp+68h+var_38], rcx
 * 00000001401C8707: mov     edx, 2Bh ; '+'
 * 00000001401C870C: mov     [rsp+68h+var_40], 8
 * 00000001401C8715: mov     rcx, r11
 * 00000001401C8718: mov     [rsp+68h+var_48], rax
 * 00000001401C871D: mov     rax, r10
 * 00000001401C8720: call    _guard_dispatch_icall
 * 00000001401C8725: lea     r8, aNull_0; "NULL"
 * 00000001401C872C: jmp     loc_1401C8620
 */
