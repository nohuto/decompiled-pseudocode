/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_ds @ 0x1402C7674
 * Callers:
 *     ?SessionInitialize@DesktopRecalc@@YAXXZ @ 0x140216540 (-SessionInitialize@DesktopRecalc@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_ds @ 0x1402C7674
 * Reason: Hex-Rays returned no pseudocode for 0x1402C7674
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402C7674: mov     rax, rsp
 * 00000001402C7677: mov     [rax+8], rbx
 * 00000001402C767B: mov     [rax+10h], rbp
 * 00000001402C767F: mov     [rax+18h], rsi
 * 00000001402C7683: mov     [rax+20h], rdi
 * 00000001402C7687: push    r13
 * 00000001402C7689: sub     rsp, 50h
 * 00000001402C768D: mov     rdi, [rsp+58h+arg_48]
 * 00000001402C7695: lea     r13, aNull; "NULL"
 * 00000001402C769C: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001402C76A0: mov     sil, r8b
 * 00000001402C76A3: mov     rbp, r9
 * 00000001402C76A6: mov     r11, rcx
 * 00000001402C76A9: mov     r8d, 9Bh
 * 00000001402C76AF: test    dl, dl
 * 00000001402C76B1: jz      short loc_1402C7725
 * 00000001402C76B3: mov     r10, cs:pfnWppTraceMessage
 * 00000001402C76BA: test    rdi, rdi
 * 00000001402C76BD: jz      short loc_1402C76D0
 * 00000001402C76BF: mov     rax, rbx
 * 00000001402C76C2: inc     rax
 * 00000001402C76C5: cmp     byte ptr [rdi+rax], 0
 * 00000001402C76C9: jnz     short loc_1402C76C2
 * 00000001402C76CB: inc     rax
 * 00000001402C76CE: jmp     short loc_1402C76D5
 * 00000001402C76D0: mov     eax, 5
 * 00000001402C76D5: test    rdi, rdi
 * 00000001402C76D8: mov     r9d, r8d
 * 00000001402C76DB: mov     rcx, rdi
 * 00000001402C76DE: lea     r8, WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids
 * 00000001402C76E5: cmovz   rcx, r13
 * 00000001402C76E9: mov     edx, 2Bh ; '+'
 * 00000001402C76EE: and     [rsp+58h+var_18], 0
 * 00000001402C76F4: mov     [rsp+58h+var_20], rax
 * 00000001402C76F9: lea     rax, [rsp+58h+arg_40]
 * 00000001402C7701: mov     [rsp+58h+var_28], rcx
 * 00000001402C7706: mov     rcx, r11
 * 00000001402C7709: mov     [rsp+58h+var_30], 4
 * 00000001402C7712: mov     [rsp+58h+var_38], rax
 * 00000001402C7717: mov     rax, r10
 * 00000001402C771A: call    _guard_dispatch_icall
 * 00000001402C771F: mov     r8d, 9Bh
 * 00000001402C7725: test    sil, sil
 * 00000001402C7728: jz      short loc_1402C7794
 * 00000001402C772A: test    rdi, rdi
 * 00000001402C772D: jz      short loc_1402C773D
 * 00000001402C772F: inc     rbx
 * 00000001402C7732: cmp     byte ptr [rdi+rbx], 0
 * 00000001402C7736: jnz     short loc_1402C772F
 * 00000001402C7738: inc     rbx
 * 00000001402C773B: jmp     short loc_1402C7742
 * 00000001402C773D: mov     ebx, 5
 * 00000001402C7742: test    rdi, rdi
 * 00000001402C7745: lea     rax, [rsp+58h+arg_40]
 * 00000001402C774D: mov     edx, 4
 * 00000001402C7752: lea     r9, WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids
 * 00000001402C7759: cmovz   rdi, r13
 * 00000001402C775D: mov     rcx, rbp
 * 00000001402C7760: and     [rsp+58h+var_10], 0
 * 00000001402C7766: mov     [rsp+58h+var_18], rbx
 * 00000001402C776B: mov     [rsp+58h+var_20], rdi
 * 00000001402C7770: mov     [rsp+58h+var_28], 4
 * 00000001402C7779: mov     [rsp+58h+var_30], rax
 * 00000001402C777E: mov     word ptr [rsp+58h+var_38], r8w
 * 00000001402C7784: lea     r8d, [rdx+3]
 * 00000001402C7788: call    cs:__imp_WppAutoLogTrace
 * 00000001402C778F: nop     dword ptr [rax+rax+00h]
 * 00000001402C7794: mov     rbx, [rsp+58h+arg_0]
 * 00000001402C7799: mov     rbp, [rsp+58h+arg_8]
 * 00000001402C779E: mov     rsi, [rsp+58h+arg_10]
 * 00000001402C77A3: mov     rdi, [rsp+58h+arg_18]
 * 00000001402C77A8: add     rsp, 50h
 * 00000001402C77AC: pop     r13
 * 00000001402C77AE: retn
 */
