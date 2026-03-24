/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_sd @ 0x1401CC868
 * Callers:
 *     ?StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z @ 0x1401CB20C (-StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_sd @ 0x1401CC868
 * Reason: Hex-Rays returned no pseudocode for 0x1401CC868
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401CC868: mov     rax, rsp
 * 00000001401CC86B: mov     [rax+8], rbx
 * 00000001401CC86F: mov     [rax+10h], rbp
 * 00000001401CC873: mov     [rax+18h], rsi
 * 00000001401CC877: mov     [rax+20h], rdi
 * 00000001401CC87B: push    r13
 * 00000001401CC87D: sub     rsp, 50h
 * 00000001401CC881: mov     rdi, [rsp+58h+arg_40]
 * 00000001401CC889: lea     r13, aNull; "NULL"
 * 00000001401CC890: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001401CC894: mov     sil, r8b
 * 00000001401CC897: mov     rbp, r9
 * 00000001401CC89A: mov     r11, rcx
 * 00000001401CC89D: mov     r8d, 95h
 * 00000001401CC8A3: test    dl, dl
 * 00000001401CC8A5: jnz     loc_1401CC933
 * 00000001401CC8AB: test    sil, sil
 * 00000001401CC8AE: jz      short loc_1401CC917
 * 00000001401CC8B0: test    rdi, rdi
 * 00000001401CC8B3: jz      loc_1401CC9AA
 * 00000001401CC8B9: inc     rbx
 * 00000001401CC8BC: cmp     byte ptr [rdi+rbx], 0
 * 00000001401CC8C0: jnz     short loc_1401CC8B9
 * 00000001401CC8C2: inc     rbx
 * 00000001401CC8C5: test    rdi, rdi
 * 00000001401CC8C8: lea     rax, [rsp+58h+arg_48]
 * 00000001401CC8D0: mov     edx, 4
 * 00000001401CC8D5: lea     r9, WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids
 * 00000001401CC8DC: cmovz   rdi, r13
 * 00000001401CC8E0: mov     rcx, rbp
 * 00000001401CC8E3: and     [rsp+58h+var_10], 0
 * 00000001401CC8E9: mov     [rsp+58h+var_18], 4
 * 00000001401CC8F2: mov     [rsp+58h+var_20], rax
 * 00000001401CC8F7: mov     [rsp+58h+var_28], rbx
 * 00000001401CC8FC: mov     [rsp+58h+var_30], rdi
 * 00000001401CC901: mov     word ptr [rsp+58h+var_38], r8w
 * 00000001401CC907: lea     r8d, [rdx+3]
 * 00000001401CC90B: call    cs:__imp_WppAutoLogTrace
 * 00000001401CC912: nop     dword ptr [rax+rax+00h]
 * 00000001401CC917: mov     rbx, [rsp+58h+arg_0]
 * 00000001401CC91C: mov     rbp, [rsp+58h+arg_8]
 * 00000001401CC921: mov     rsi, [rsp+58h+arg_10]
 * 00000001401CC926: mov     rdi, [rsp+58h+arg_18]
 * 00000001401CC92B: add     rsp, 50h
 * 00000001401CC92F: pop     r13
 * 00000001401CC931: retn
 * 00000001401CC933: mov     r10, cs:pfnWppTraceMessage
 * 00000001401CC93A: test    rdi, rdi
 * 00000001401CC93D: jz      short loc_1401CC950
 * 00000001401CC93F: mov     rax, rbx
 * 00000001401CC942: inc     rax
 * 00000001401CC945: cmp     byte ptr [rdi+rax], 0
 * 00000001401CC949: jnz     short loc_1401CC942
 * 00000001401CC94B: inc     rax
 * 00000001401CC94E: jmp     short loc_1401CC955
 * 00000001401CC950: mov     eax, 5
 * 00000001401CC955: lea     rdx, [rsp+58h+arg_48]
 * 00000001401CC95D: test    rdi, rdi
 * 00000001401CC960: mov     r9d, r8d
 * 00000001401CC963: mov     rcx, rdi
 * 00000001401CC966: cmovz   rcx, r13
 * 00000001401CC96A: lea     r8, WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids
 * 00000001401CC971: and     [rsp+58h+var_18], 0
 * 00000001401CC977: mov     [rsp+58h+var_20], 4
 * 00000001401CC980: mov     [rsp+58h+var_28], rdx
 * 00000001401CC985: mov     edx, 2Bh ; '+'
 * 00000001401CC98A: mov     [rsp+58h+var_30], rax
 * 00000001401CC98F: mov     rax, r10
 * 00000001401CC992: mov     [rsp+58h+var_38], rcx
 * 00000001401CC997: mov     rcx, r11
 * 00000001401CC99A: call    _guard_dispatch_icall
 * 00000001401CC99F: mov     r8d, 95h
 * 00000001401CC9A5: jmp     loc_1401CC8AB
 * 00000001401CC9AA: mov     ebx, 5
 * 00000001401CC9AF: jmp     loc_1401CC8C5
 */
