/*
 * XREFs of MiWalkPageTablesRecursivelyNoSynch @ 0x140235958
 * Callers:
 *     MiWalkPageTables @ 0x140235640 (MiWalkPageTables.c)
 *     MiWalkPageTablesRecursivelyNoSynch @ 0x140235958 (MiWalkPageTablesRecursivelyNoSynch.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWalkPageTablesRecursivelyNoSynch @ 0x140235958 (MiWalkPageTablesRecursivelyNoSynch.c)
 *     KdCheckForDebugBreak @ 0x14029DE08 (KdCheckForDebugBreak.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

/*
 * Hex-Rays decompilation failed for MiWalkPageTablesRecursivelyNoSynch @ 0x140235958
 * Reason: Hex-Rays returned no pseudocode for 0x140235958
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140235958: mov     rax, rsp
 * 000000014023595B: mov     [rax+8], rbx
 * 000000014023595F: mov     [rax+10h], rbp
 * 0000000140235963: mov     [rax+18h], rsi
 * 0000000140235967: mov     [rax+20h], rdi
 * 000000014023596B: push    r12
 * 000000014023596D: push    r14
 * 000000014023596F: push    r15
 * 0000000140235971: sub     rsp, 20h
 * 0000000140235975: movsxd  rsi, r8d
 * 0000000140235978: lea     r12, MiState
 * 000000014023597F: mov     rdi, rdx
 * 0000000140235982: mov     r14, rcx
 * 0000000140235985: mov     rax, [rcx+rsi*8+60h]
 * 000000014023598A: cmp     rdx, rax
 * 000000014023598D: cmovb   rdi, rax
 * 0000000140235991: mov     rax, [rcx+rsi*8+80h]
 * 0000000140235999: mov     rbp, rdi
 * 000000014023599C: and     rbp, 0FFFFFFFFFFFFF000h
 * 00000001402359A3: add     rbp, 0FF8h
 * 00000001402359AA: cmp     rbp, rax
 * 00000001402359AD: cmova   rbp, rax
 * 00000001402359B1: cmp     rdi, rbp
 * 00000001402359B4: ja      loc_140235AD2
 * 00000001402359BA: cmp     esi, 3
 * 00000001402359BD: jnz     short loc_1402359D7
 * 00000001402359BF: call    KdCheckForDebugBreak
 * 00000001402359C4: mov     rax, 0FFFFF6FB7DBEDF68h
 * 00000001402359CE: cmp     rdi, rax
 * 00000001402359D1: jz      loc_140235AC9
 * 00000001402359D7: mov     rcx, rdi
 * 00000001402359DA: call    MI_READ_PTE_LOCK_FREE
 * 00000001402359DF: mov     rbx, rax
 * 00000001402359E2: test    al, 1
 * 00000001402359E4: jz      loc_140235A75
 * 00000001402359EA: mov     edx, [r14]
 * 00000001402359ED: mov     rcx, rax
 * 00000001402359F0: shr     rcx, 0Ch
 * 00000001402359F4: mov     rax, 0FFFFFFFFFFh
 * 00000001402359FE: and     rcx, rax
 * 0000000140235A01: bt      edx, 9
 * 0000000140235A05: jnb     short loc_140235A32
 * 0000000140235A07: mov     rax, cs:qword_140E37358
 * 0000000140235A0E: cmp     cs:qword_140E37340, rax
 * 0000000140235A15: jz      short loc_140235A32
 * 0000000140235A17: cmp     rcx, [r12+rsi*8+0A900h]
 * 0000000140235A1F: jnz     short loc_140235A32
 * 0000000140235A21: test    cs:MiFlags, 20000000h
 * 0000000140235A2C: jnz     loc_140235AC9
 * 0000000140235A32: bt      edx, 0Ah
 * 0000000140235A36: jnb     short loc_140235A52
 * 0000000140235A38: mov     rax, cs:qword_140E37358
 * 0000000140235A3F: cmp     cs:qword_140E37340, rax
 * 0000000140235A46: jz      short loc_140235A52
 * 0000000140235A48: cmp     rcx, [r12+rsi*8+0A938h]
 * 0000000140235A50: jz      short loc_140235AC9
 * 0000000140235A52: test    bl, 20h
 * 0000000140235A55: jnz     short loc_140235A75
 * 0000000140235A57: test    esi, esi
 * 0000000140235A59: jz      short loc_140235A75
 * 0000000140235A5B: or      rbx, 20h
 * 0000000140235A5F: test    cs:MiFlags, 2000000h
 * 0000000140235A6A: jz      short loc_140235A6F
 * 0000000140235A6C: lfence
 * 0000000140235A6F: mov     rax, rbx
 * 0000000140235A72: xchg    rax, [rdi]
 * 0000000140235A75: mov     rax, [r14+0A8h]
 * 0000000140235A7C: mov     r8d, esi
 * 0000000140235A7F: mov     rdx, rdi
 * 0000000140235A82: mov     rcx, r14
 * 0000000140235A85: call    _guard_dispatch_icall_no_overrides
 * 0000000140235A8A: cmp     eax, 4
 * 0000000140235A8D: jge     short loc_140235AD4
 * 0000000140235A8F: test    esi, esi
 * 0000000140235A91: jz      short loc_140235AC9
 * 0000000140235A93: cmp     eax, 1
 * 0000000140235A96: jz      short loc_140235AC9
 * 0000000140235A98: test    bl, 1
 * 0000000140235A9B: jz      short loc_140235AC9
 * 0000000140235A9D: test    bl, bl
 * 0000000140235A9F: js      short loc_140235AC9
 * 0000000140235AA1: mov     rdx, rdi
 * 0000000140235AA4: lea     r8d, [rsi-1]
 * 0000000140235AA8: shl     rdx, 19h
 * 0000000140235AAC: mov     rax, 0FFFFF68000000000h
 * 0000000140235AB6: shl     rax, 19h
 * 0000000140235ABA: mov     rcx, r14
 * 0000000140235ABD: sub     rdx, rax
 * 0000000140235AC0: sar     rdx, 10h
 * 0000000140235AC4: call    MiWalkPageTablesRecursivelyNoSynch
 * 0000000140235AC9: add     rdi, 8
 * 0000000140235ACD: jmp     loc_1402359B1
 * 0000000140235AD2: xor     eax, eax
 * 0000000140235AD4: mov     rbx, [rsp+38h+arg_0]
 * 0000000140235AD9: mov     rbp, [rsp+38h+arg_8]
 * 0000000140235ADE: mov     rsi, [rsp+38h+arg_10]
 * 0000000140235AE3: mov     rdi, [rsp+38h+arg_18]
 * 0000000140235AE8: add     rsp, 20h
 * 0000000140235AEC: pop     r15
 * 0000000140235AEE: pop     r14
 * 0000000140235AF0: pop     r12
 * 0000000140235AF2: retn
 */
