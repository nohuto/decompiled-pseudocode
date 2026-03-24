/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_SL @ 0x1401E3788
 * Callers:
 *     xxxSwitchDesktop @ 0x1401F69E4 (xxxSwitchDesktop.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_SL @ 0x1401E3788
 * Reason: Hex-Rays returned no pseudocode for 0x1401E3788
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401E3788: mov     rax, rsp
 * 00000001401E378B: mov     [rax+8], rbx
 * 00000001401E378F: mov     [rax+10h], rbp
 * 00000001401E3793: mov     [rax+18h], rsi
 * 00000001401E3797: mov     [rax+20h], rdi
 * 00000001401E379B: push    r13
 * 00000001401E379D: push    r14
 * 00000001401E379F: push    r15
 * 00000001401E37A1: sub     rsp, 50h
 * 00000001401E37A5: mov     rbx, [rsp+68h+arg_40]
 * 00000001401E37AD: lea     r13, aNull_0; "NULL"
 * 00000001401E37B4: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001401E37B8: xor     r15d, r15d
 * 00000001401E37BB: mov     bpl, r8b
 * 00000001401E37BE: mov     r14, r9
 * 00000001401E37C1: mov     r11, rcx
 * 00000001401E37C4: lea     esi, [rdi+0Bh]
 * 00000001401E37C7: lea     r8d, [rdi+1Bh]
 * 00000001401E37CB: test    dl, dl
 * 00000001401E37CD: jnz     loc_1401E3860
 * 00000001401E37D3: test    bpl, bpl
 * 00000001401E37D6: jz      short loc_1401E3840
 * 00000001401E37D8: test    rbx, rbx
 * 00000001401E37DB: jz      short loc_1401E37F2
 * 00000001401E37DD: inc     rdi
 * 00000001401E37E0: cmp     [rbx+rdi*2], r15w
 * 00000001401E37E5: jnz     short loc_1401E37DD
 * 00000001401E37E7: lea     rsi, ds:2[rdi*2]
 * 00000001401E37EF: test    rbx, rbx
 * 00000001401E37F2: mov     [rsp+68h+var_20], r15
 * 00000001401E37F7: lea     rax, [rsp+68h+arg_48]
 * 00000001401E37FF: mov     [rsp+68h+var_28], 4
 * 00000001401E3808: lea     r9, WPP_6e3958beb26f3f5b8556df48f81bef5f_Traceguids
 * 00000001401E380F: mov     [rsp+68h+var_30], rax
 * 00000001401E3814: mov     edx, 4
 * 00000001401E3819: cmovz   rbx, r13
 * 00000001401E381D: mov     [rsp+68h+var_38], rsi
 * 00000001401E3822: mov     [rsp+68h+var_40], rbx
 * 00000001401E3827: mov     rcx, r14
 * 00000001401E382A: mov     word ptr [rsp+68h+var_48], r8w
 * 00000001401E3830: lea     r8d, [rdx-1]
 * 00000001401E3834: call    cs:__imp_WppAutoLogTrace
 * 00000001401E383B: nop     dword ptr [rax+rax+00h]
 * 00000001401E3840: lea     r11, [rsp+68h+var_18]
 * 00000001401E3845: mov     rbx, [r11+20h]
 * 00000001401E3849: mov     rbp, [r11+28h]
 * 00000001401E384D: mov     rsi, [r11+30h]
 * 00000001401E3851: mov     rdi, [r11+38h]
 * 00000001401E3855: mov     rsp, r11
 * 00000001401E3858: pop     r15
 * 00000001401E385A: pop     r14
 * 00000001401E385C: pop     r13
 * 00000001401E385E: retn
 * 00000001401E3860: mov     r10, cs:pfnWppTraceMessage
 * 00000001401E3867: test    rbx, rbx
 * 00000001401E386A: jz      short loc_1401E3883
 * 00000001401E386C: mov     rax, rdi
 * 00000001401E386F: inc     rax
 * 00000001401E3872: cmp     [rbx+rax*2], r15w
 * 00000001401E3877: jnz     short loc_1401E386F
 * 00000001401E3879: lea     rax, ds:2[rax*2]
 * 00000001401E3881: jmp     short loc_1401E3886
 * 00000001401E3883: mov     rax, rsi
 * 00000001401E3886: mov     [rsp+68h+var_28], r15
 * 00000001401E388B: lea     rdx, [rsp+68h+arg_48]
 * 00000001401E3893: mov     [rsp+68h+var_30], 4
 * 00000001401E389C: test    rbx, rbx
 * 00000001401E389F: mov     [rsp+68h+var_38], rdx
 * 00000001401E38A4: mov     r9d, r8d
 * 00000001401E38A7: mov     [rsp+68h+var_40], rax
 * 00000001401E38AC: lea     r8, WPP_6e3958beb26f3f5b8556df48f81bef5f_Traceguids
 * 00000001401E38B3: mov     rcx, rbx
 * 00000001401E38B6: mov     edx, 2Bh ; '+'
 * 00000001401E38BB: cmovz   rcx, r13
 * 00000001401E38BF: mov     rax, r10
 * 00000001401E38C2: mov     [rsp+68h+var_48], rcx
 * 00000001401E38C7: mov     rcx, r11
 * 00000001401E38CA: call    _guard_dispatch_icall
 * 00000001401E38CF: mov     r8d, 1Ah
 * 00000001401E38D5: jmp     loc_1401E37D3
 */
