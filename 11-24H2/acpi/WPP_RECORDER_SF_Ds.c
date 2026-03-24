/*
 * XREFs of WPP_RECORDER_SF_Ds @ 0x1400413A0
 * Callers:
 *     PushFrame @ 0x140009A30 (PushFrame.c)
 *     PushTerm @ 0x14000A040 (PushTerm.c)
 *     GetNameSpaceObjectNoLock @ 0x14000AA30 (GetNameSpaceObjectNoLock.c)
 *     ParseOpcode @ 0x14000E5F0 (ParseOpcode.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Ds @ 0x1400413A0
 * Reason: Hex-Rays returned no pseudocode for 0x1400413A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400413A0: mov     rax, rsp
 * 00000001400413A3: mov     [rax+8], rbx
 * 00000001400413A7: mov     [rax+10h], rsi
 * 00000001400413AB: mov     [rax+18h], rdi
 * 00000001400413AF: mov     [rax+20h], r12
 * 00000001400413B3: push    r13
 * 00000001400413B5: sub     rsp, 50h
 * 00000001400413B9: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001400413C0: lea     r12, aNull; "NULL"
 * 00000001400413C7: mov     rdi, [rsp+58h+arg_30]
 * 00000001400413CF: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001400413D3: mov     rsi, rcx
 * 00000001400413D6: test    dword ptr [rdx+2Ch], 100000h
 * 00000001400413DD: lea     r13d, [rbx+0Bh]
 * 00000001400413E1: jnz     loc_14004146A
 * 00000001400413E7: test    rdi, rdi
 * 00000001400413EA: jz      loc_1400414EA
 * 00000001400413F0: inc     rbx
 * 00000001400413F3: cmp     byte ptr [rdi+rbx], 0
 * 00000001400413F7: jnz     short loc_1400413F0
 * 00000001400413F9: inc     rbx
 * 00000001400413FC: test    rdi, rdi
 * 00000001400413FF: lea     rax, [rsp+58h+arg_28]
 * 0000000140041407: mov     edx, 2
 * 000000014004140C: lea     r9, WPP_e7438a64a4c63f284945a95d17f53cf0_Traceguids
 * 0000000140041413: cmovz   rdi, r12
 * 0000000140041417: mov     rcx, rsi
 * 000000014004141A: and     [rsp+58h+var_10], 0
 * 0000000140041420: mov     [rsp+58h+var_18], rbx
 * 0000000140041425: mov     [rsp+58h+var_20], rdi
 * 000000014004142A: lea     r8d, [rdx+13h]
 * 000000014004142E: mov     [rsp+58h+var_28], 4
 * 0000000140041437: mov     [rsp+58h+var_30], rax
 * 000000014004143C: mov     word ptr [rsp+58h+var_38], r13w
 * 0000000140041442: call    cs:__imp_WppAutoLogTrace
 * 0000000140041449: nop     dword ptr [rax+rax+00h]
 * 000000014004144E: mov     rbx, [rsp+58h+arg_0]
 * 0000000140041453: mov     rsi, [rsp+58h+arg_8]
 * 0000000140041458: mov     rdi, [rsp+58h+arg_10]
 * 000000014004145D: mov     r12, [rsp+58h+arg_18]
 * 0000000140041462: add     rsp, 50h
 * 0000000140041466: pop     r13
 * 0000000140041468: retn
 * 000000014004146A: cmp     byte ptr [rdx+29h], 2
 * 000000014004146E: jb      loc_1400413E7
 * 0000000140041474: test    rdi, rdi
 * 0000000140041477: jz      short loc_14004148A
 * 0000000140041479: mov     rdx, rbx
 * 000000014004147C: inc     rdx
 * 000000014004147F: cmp     byte ptr [rdi+rdx], 0
 * 0000000140041483: jnz     short loc_14004147C
 * 0000000140041485: inc     rdx
 * 0000000140041488: jmp     short loc_14004148F
 * 000000014004148A: mov     edx, 5
 * 000000014004148F: mov     rax, cs:pfnWppTraceMessage
 * 0000000140041496: lea     r8, WPP_e7438a64a4c63f284945a95d17f53cf0_Traceguids
 * 000000014004149D: test    rdi, rdi
 * 00000001400414A0: mov     rcx, rdi
 * 00000001400414A3: mov     r9d, r13d
 * 00000001400414A6: cmovz   rcx, r12
 * 00000001400414AA: and     [rsp+58h+var_18], 0
 * 00000001400414B0: mov     [rsp+58h+var_20], rdx
 * 00000001400414B5: mov     edx, 2Bh ; '+'
 * 00000001400414BA: mov     [rsp+58h+var_28], rcx
 * 00000001400414BF: lea     rcx, [rsp+58h+arg_28]
 * 00000001400414C7: mov     [rsp+58h+var_30], 4
 * 00000001400414D0: mov     [rsp+58h+var_38], rcx
 * 00000001400414D5: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001400414DC: mov     rcx, [rcx+18h]
 * 00000001400414E0: call    _guard_dispatch_icall
 * 00000001400414E5: jmp     loc_1400413E7
 * 00000001400414EA: mov     ebx, 5
 * 00000001400414EF: jmp     loc_1400413FC
 */
