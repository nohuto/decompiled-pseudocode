/*
 * XREFs of WPP_RECORDER_SF_S @ 0x1C00054C0
 * Callers:
 *     KbdCreateClassObject @ 0x1C000FD50 (KbdCreateClassObject.c)
 *     KeyboardAddDeviceEx @ 0x1C00105B0 (KeyboardAddDeviceEx.c)
 *     KbdConfiguration @ 0x1C00119A0 (KbdConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1C00072D0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_S @ 0x1C00054C0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00054C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00054C0: mov     [rsp+arg_0], rbx
 * 00000001C00054C5: mov     [rsp+arg_8], rbp
 * 00000001C00054CA: mov     [rsp+arg_10], rsi
 * 00000001C00054CF: mov     [rsp+arg_18], rdi
 * 00000001C00054D4: push    r13
 * 00000001C00054D6: push    r14
 * 00000001C00054D8: push    r15
 * 00000001C00054DA: sub     rsp, 40h
 * 00000001C00054DE: mov     r8, cs:WPP_GLOBAL_Control
 * 00000001C00054E5: lea     r13, aNull_0; "NULL"
 * 00000001C00054EC: mov     rdi, [rsp+58h+arg_28]
 * 00000001C00054F4: mov     rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C00054FB: movzx   r14d, r9w
 * 00000001C00054FF: mov     r15, rcx
 * 00000001C0005502: movzx   ebp, dl
 * 00000001C0005505: mov     eax, [r8+2Ch]
 * 00000001C0005509: lea     esi, [rbx+0Bh]
 * 00000001C000550C: test    al, 1
 * 00000001C000550E: jz      short loc_1C000557A
 * 00000001C0005510: cmp     [r8+29h], bpl
 * 00000001C0005514: jb      short loc_1C000557A
 * 00000001C0005516: test    rdi, rdi
 * 00000001C0005519: jz      short loc_1C0005534
 * 00000001C000551B: mov     rax, rbx
 * 00000001C000551E: cmp     word ptr [rdi+rax*2+2], 0
 * 00000001C0005524: lea     rax, [rax+1]
 * 00000001C0005528: jnz     short loc_1C000551E
 * 00000001C000552A: lea     rdx, ds:2[rax*2]
 * 00000001C0005532: jmp     short loc_1C0005537
 * 00000001C0005534: mov     rdx, rsi
 * 00000001C0005537: mov     rax, cs:pfnWppTraceMessage
 * 00000001C000553E: lea     r8, WPP_1b6d0084df9f3ca48f318fdd34bf6db2_Traceguids
 * 00000001C0005545: test    rdi, rdi
 * 00000001C0005548: mov     [rsp+58h+var_28], 0
 * 00000001C0005551: mov     [rsp+58h+var_30], rdx
 * 00000001C0005556: mov     rcx, rdi
 * 00000001C0005559: cmovz   rcx, r13
 * 00000001C000555D: mov     r9d, r14d
 * 00000001C0005560: mov     [rsp+58h+var_38], rcx
 * 00000001C0005565: mov     edx, 2Bh ; '+'
 * 00000001C000556A: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0005571: mov     rcx, [rcx+18h]
 * 00000001C0005575: call    _guard_dispatch_icall
 * 00000001C000557A: test    rdi, rdi
 * 00000001C000557D: jz      short loc_1C0005597
 * 00000001C000557F: nop
 * 00000001C0005580: cmp     word ptr [rdi+rbx*2+2], 0
 * 00000001C0005586: lea     rbx, [rbx+1]
 * 00000001C000558A: jnz     short loc_1C0005580
 * 00000001C000558C: lea     rsi, ds:2[rbx*2]
 * 00000001C0005594: test    rdi, rdi
 * 00000001C0005597: mov     [rsp+58h+var_20], 0
 * 00000001C00055A0: lea     r9, WPP_1b6d0084df9f3ca48f318fdd34bf6db2_Traceguids
 * 00000001C00055A7: cmovz   rdi, r13
 * 00000001C00055AB: mov     [rsp+58h+var_28], rsi
 * 00000001C00055B0: mov     [rsp+58h+var_30], rdi
 * 00000001C00055B5: mov     r8d, 1
 * 00000001C00055BB: mov     edx, ebp
 * 00000001C00055BD: mov     word ptr [rsp+58h+var_38], r14w
 * 00000001C00055C3: mov     rcx, r15
 * 00000001C00055C6: call    cs:__imp_WppAutoLogTrace
 * 00000001C00055CD: nop     dword ptr [rax+rax+00h]
 * 00000001C00055D2: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00055D7: mov     rbp, [rsp+58h+arg_8]
 * 00000001C00055DC: mov     rsi, [rsp+58h+arg_10]
 * 00000001C00055E1: mov     rdi, [rsp+58h+arg_18]
 * 00000001C00055E6: add     rsp, 40h
 * 00000001C00055EA: pop     r15
 * 00000001C00055EC: pop     r14
 * 00000001C00055EE: pop     r13
 * 00000001C00055F0: retn
 */
