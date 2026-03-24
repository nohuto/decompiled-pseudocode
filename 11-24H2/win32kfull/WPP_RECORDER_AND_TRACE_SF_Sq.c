/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_sq @ 0x14026FF20
 * Callers:
 *     CheckFullScreen @ 0x14022E334 (CheckFullScreen.c)
 *     NtUserSBGetParms @ 0x140245070 (NtUserSBGetParms.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1402A7510 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxResolveArrangePosition@@YA_NPEAUtagWND@@PEBVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z @ 0x1402D1294 (-xxxResolveArrangePosition@@YA_NPEAUtagWND@@PEBVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_sq @ 0x14026FF20
 * Reason: Hex-Rays returned no pseudocode for 0x14026FF20
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014026FF20: mov     rax, rsp
 * 000000014026FF23: mov     [rax+8], rbx
 * 000000014026FF27: mov     [rax+10h], rbp
 * 000000014026FF2B: mov     [rax+18h], rsi
 * 000000014026FF2F: mov     [rax+20h], rdi
 * 000000014026FF33: push    r14
 * 000000014026FF35: sub     rsp, 50h
 * 000000014026FF39: mov     rdi, [rsp+58h+arg_40]
 * 000000014026FF41: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 000000014026FF45: movzx   ebp, [rsp+58h+arg_30]
 * 000000014026FF4D: mov     sil, r8b
 * 000000014026FF50: lea     r8, aNull; "NULL"
 * 000000014026FF57: mov     r14, r9
 * 000000014026FF5A: mov     r11, rcx
 * 000000014026FF5D: test    dl, dl
 * 000000014026FF5F: jz      short loc_14026FFD5
 * 000000014026FF61: mov     r10, cs:pfnWppTraceMessage
 * 000000014026FF68: test    rdi, rdi
 * 000000014026FF6B: jz      short loc_14026FF7E
 * 000000014026FF6D: mov     rax, rbx
 * 000000014026FF70: inc     rax
 * 000000014026FF73: cmp     byte ptr [rdi+rax], 0
 * 000000014026FF77: jnz     short loc_14026FF70
 * 000000014026FF79: inc     rax
 * 000000014026FF7C: jmp     short loc_14026FF83
 * 000000014026FF7E: mov     eax, 5
 * 000000014026FF83: lea     rdx, [rsp+58h+arg_48]
 * 000000014026FF8B: test    rdi, rdi
 * 000000014026FF8E: mov     rcx, rdi
 * 000000014026FF91: mov     r9d, ebp
 * 000000014026FF94: cmovz   rcx, r8
 * 000000014026FF98: and     [rsp+58h+var_18], 0
 * 000000014026FF9E: mov     r8, [rsp+58h+arg_38]
 * 000000014026FFA6: mov     [rsp+58h+var_20], 8
 * 000000014026FFAF: mov     [rsp+58h+var_28], rdx
 * 000000014026FFB4: mov     edx, 2Bh ; '+'
 * 000000014026FFB9: mov     [rsp+58h+var_30], rax
 * 000000014026FFBE: mov     rax, r10
 * 000000014026FFC1: mov     [rsp+58h+var_38], rcx
 * 000000014026FFC6: mov     rcx, r11
 * 000000014026FFC9: call    _guard_dispatch_icall
 * 000000014026FFCE: lea     r8, aNull; "NULL"
 * 000000014026FFD5: test    sil, sil
 * 000000014026FFD8: jz      short loc_14027004B
 * 000000014026FFDA: test    rdi, rdi
 * 000000014026FFDD: jz      short loc_14026FFED
 * 000000014026FFDF: inc     rbx
 * 000000014026FFE2: cmp     byte ptr [rdi+rbx], 0
 * 000000014026FFE6: jnz     short loc_14026FFDF
 * 000000014026FFE8: inc     rbx
 * 000000014026FFEB: jmp     short loc_14026FFF2
 * 000000014026FFED: mov     ebx, 5
 * 000000014026FFF2: mov     r9, [rsp+58h+arg_38]
 * 000000014026FFFA: lea     rax, [rsp+58h+arg_48]
 * 0000000140270002: movzx   edx, [rsp+58h+arg_20]
 * 000000014027000A: test    rdi, rdi
 * 000000014027000D: mov     rcx, r14
 * 0000000140270010: cmovz   rdi, r8
 * 0000000140270014: and     [rsp+58h+var_10], 0
 * 000000014027001A: mov     r8d, [rsp+58h+arg_28]
 * 0000000140270022: mov     [rsp+58h+var_18], 8
 * 000000014027002B: mov     [rsp+58h+var_20], rax
 * 0000000140270030: mov     [rsp+58h+var_28], rbx
 * 0000000140270035: mov     [rsp+58h+var_30], rdi
 * 000000014027003A: mov     word ptr [rsp+58h+var_38], bp
 * 000000014027003F: call    cs:__imp_WppAutoLogTrace
 * 0000000140270046: nop     dword ptr [rax+rax+00h]
 * 000000014027004B: mov     rbx, [rsp+58h+arg_0]
 * 0000000140270050: mov     rbp, [rsp+58h+arg_8]
 * 0000000140270055: mov     rsi, [rsp+58h+arg_10]
 * 000000014027005A: mov     rdi, [rsp+58h+arg_18]
 * 000000014027005F: add     rsp, 50h
 * 0000000140270063: pop     r14
 * 0000000140270065: retn
 */
