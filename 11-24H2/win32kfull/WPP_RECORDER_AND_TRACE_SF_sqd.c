/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_sqd @ 0x140116BC4
 * Callers:
 *     xxxBroadcastMessageEx @ 0x1401177BC (xxxBroadcastMessageEx.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_sqd @ 0x140116BC4
 * Reason: Hex-Rays returned no pseudocode for 0x140116BC4
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140116BC4: mov     rax, rsp
 * 0000000140116BC7: mov     [rax+8], rbx
 * 0000000140116BCB: mov     [rax+10h], rbp
 * 0000000140116BCF: mov     [rax+18h], rsi
 * 0000000140116BD3: mov     [rax+20h], rdi
 * 0000000140116BD7: push    r14
 * 0000000140116BD9: sub     rsp, 60h
 * 0000000140116BDD: mov     rdi, [rsp+68h+arg_40]
 * 0000000140116BE5: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 0000000140116BE9: movzx   ebp, [rsp+68h+arg_30]
 * 0000000140116BF1: mov     sil, r8b
 * 0000000140116BF4: lea     r8, aNull; "NULL"
 * 0000000140116BFB: mov     r14, r9
 * 0000000140116BFE: mov     r11, rcx
 * 0000000140116C01: test    dl, dl
 * 0000000140116C03: jz      loc_140116C93
 * 0000000140116C09: mov     r10, cs:pfnWppTraceMessage
 * 0000000140116C10: test    rdi, rdi
 * 0000000140116C13: jz      short loc_140116C26
 * 0000000140116C15: mov     rax, rbx
 * 0000000140116C18: inc     rax
 * 0000000140116C1B: cmp     byte ptr [rdi+rax], 0
 * 0000000140116C1F: jnz     short loc_140116C18
 * 0000000140116C21: inc     rax
 * 0000000140116C24: jmp     short loc_140116C2B
 * 0000000140116C26: mov     eax, 5
 * 0000000140116C2B: test    rdi, rdi
 * 0000000140116C2E: lea     rdx, [rsp+68h+arg_50]
 * 0000000140116C36: mov     rcx, rdi
 * 0000000140116C39: mov     r9d, ebp
 * 0000000140116C3C: cmovz   rcx, r8
 * 0000000140116C40: and     [rsp+68h+var_18], 0
 * 0000000140116C46: mov     r8, [rsp+68h+arg_38]
 * 0000000140116C4E: mov     [rsp+68h+var_20], 4
 * 0000000140116C57: mov     [rsp+68h+var_28], rdx
 * 0000000140116C5C: lea     rdx, [rsp+68h+arg_48]
 * 0000000140116C64: mov     [rsp+68h+var_30], 8
 * 0000000140116C6D: mov     [rsp+68h+var_38], rdx
 * 0000000140116C72: mov     edx, 2Bh ; '+'
 * 0000000140116C77: mov     [rsp+68h+var_40], rax
 * 0000000140116C7C: mov     rax, r10
 * 0000000140116C7F: mov     [rsp+68h+var_48], rcx
 * 0000000140116C84: mov     rcx, r11
 * 0000000140116C87: call    _guard_dispatch_icall
 * 0000000140116C8C: lea     r8, aNull; "NULL"
 * 0000000140116C93: test    sil, sil
 * 0000000140116C96: jz      loc_140116D1C
 * 0000000140116C9C: test    rdi, rdi
 * 0000000140116C9F: jz      short loc_140116CAF
 * 0000000140116CA1: inc     rbx
 * 0000000140116CA4: cmp     byte ptr [rdi+rbx], 0
 * 0000000140116CA8: jnz     short loc_140116CA1
 * 0000000140116CAA: inc     rbx
 * 0000000140116CAD: jmp     short loc_140116CB4
 * 0000000140116CAF: mov     ebx, 5
 * 0000000140116CB4: mov     r9, [rsp+68h+arg_38]
 * 0000000140116CBC: lea     rax, [rsp+68h+arg_50]
 * 0000000140116CC4: test    rdi, rdi
 * 0000000140116CC7: mov     edx, 5
 * 0000000140116CCC: mov     rcx, r14
 * 0000000140116CCF: cmovz   rdi, r8
 * 0000000140116CD3: and     [rsp+68h+var_10], 0
 * 0000000140116CD9: mov     [rsp+68h+var_18], 4
 * 0000000140116CE2: mov     [rsp+68h+var_20], rax
 * 0000000140116CE7: lea     r8d, [rdx+2]
 * 0000000140116CEB: mov     [rsp+68h+var_28], 8
 * 0000000140116CF4: lea     rax, [rsp+68h+arg_48]
 * 0000000140116CFC: mov     [rsp+68h+var_30], rax
 * 0000000140116D01: mov     [rsp+68h+var_38], rbx
 * 0000000140116D06: mov     [rsp+68h+var_40], rdi
 * 0000000140116D0B: mov     word ptr [rsp+68h+var_48], bp
 * 0000000140116D10: call    cs:__imp_WppAutoLogTrace
 * 0000000140116D17: nop     dword ptr [rax+rax+00h]
 * 0000000140116D1C: lea     r11, [rsp+68h+var_8]
 * 0000000140116D21: mov     rbx, [r11+10h]
 * 0000000140116D25: mov     rbp, [r11+18h]
 * 0000000140116D29: mov     rsi, [r11+20h]
 * 0000000140116D2D: mov     rdi, [r11+28h]
 * 0000000140116D31: mov     rsp, r11
 * 0000000140116D34: pop     r14
 * 0000000140116D36: retn
 */
