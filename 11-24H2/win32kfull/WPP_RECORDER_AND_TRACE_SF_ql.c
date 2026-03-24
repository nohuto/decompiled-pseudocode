/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_ql @ 0x1402E4580
 * Callers:
 *     ?DrawThumb2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@PEAUHBRUSH__@@HI@Z @ 0x140257074 (-DrawThumb2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@PEAUHBRUSH__@@HI@Z.c)
 *     ?DrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1402574D0 (-DrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxDrawScrollBar @ 0x1402E695C (xxxDrawScrollBar.c)
 *     xxxEndScroll @ 0x1402E6AC0 (xxxEndScroll.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_ql @ 0x1402E4580
 * Reason: Hex-Rays returned no pseudocode for 0x1402E4580
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402E4580: mov     r11, rsp
 * 00000001402E4583: mov     [r11+8], rbx
 * 00000001402E4587: mov     [r11+10h], rsi
 * 00000001402E458B: push    rdi
 * 00000001402E458C: sub     rsp, 50h
 * 00000001402E4590: movzx   ebx, [rsp+58h+arg_30]
 * 00000001402E4598: mov     rsi, r9
 * 00000001402E459B: mov     dil, r8b
 * 00000001402E459E: test    dl, dl
 * 00000001402E45A0: jz      short loc_1402E45E2
 * 00000001402E45A2: and     qword ptr [r11-18h], 0
 * 00000001402E45A7: lea     rdx, [r11+50h]
 * 00000001402E45AB: mov     rax, cs:pfnWppTraceMessage
 * 00000001402E45B2: lea     r8, WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids
 * 00000001402E45B9: mov     qword ptr [r11-20h], 4
 * 00000001402E45C1: mov     r9d, ebx
 * 00000001402E45C4: mov     [r11-28h], rdx
 * 00000001402E45C8: lea     rdx, [r11+48h]
 * 00000001402E45CC: mov     qword ptr [r11-30h], 8
 * 00000001402E45D4: mov     [r11-38h], rdx
 * 00000001402E45D8: mov     edx, 2Bh ; '+'
 * 00000001402E45DD: call    _guard_dispatch_icall
 * 00000001402E45E2: test    dil, dil
 * 00000001402E45E5: jz      short loc_1402E4642
 * 00000001402E45E7: and     [rsp+58h+var_10], 0
 * 00000001402E45ED: lea     rax, [rsp+58h+arg_48]
 * 00000001402E45F5: movzx   edx, [rsp+58h+arg_20]
 * 00000001402E45FD: lea     r9, WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids
 * 00000001402E4604: mov     [rsp+58h+var_18], 4
 * 00000001402E460D: mov     r8d, 9
 * 00000001402E4613: mov     [rsp+58h+var_20], rax
 * 00000001402E4618: mov     rcx, rsi
 * 00000001402E461B: lea     rax, [rsp+58h+arg_40]
 * 00000001402E4623: mov     [rsp+58h+var_28], 8
 * 00000001402E462C: mov     [rsp+58h+var_30], rax
 * 00000001402E4631: mov     [rsp+58h+var_38], bx
 * 00000001402E4636: call    cs:__imp_WppAutoLogTrace
 * 00000001402E463D: nop     dword ptr [rax+rax+00h]
 * 00000001402E4642: mov     rbx, [rsp+58h+arg_0]
 * 00000001402E4647: mov     rsi, [rsp+58h+arg_8]
 * 00000001402E464C: add     rsp, 50h
 * 00000001402E4650: pop     rdi
 * 00000001402E4651: retn
 */
