/*
 * XREFs of KiBreakpointTrap @ 0x1406ABA40
 * Callers:
 *     KiBreakpointTrapShadow @ 0x140BAA2C0 (KiBreakpointTrapShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x140429DB0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404F9580 (KiSaveDebugRegisterState.c)
 *     KiBreakpointTrap @ 0x1406ABA40 (KiBreakpointTrap.c)
 *     KiExceptionDispatch @ 0x1406B3A00 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406B4440 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiBreakpointTrap @ 0x1406ABA40
 * Reason: Hex-Rays returned no pseudocode for 0x1406ABA40
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406ABA40: sub     rsp, 8
 * 00000001406ABA44: push    rbp
 * 00000001406ABA45: sub     rsp, 158h
 * 00000001406ABA4C: lea     rbp, [rsp+80h]
 * 00000001406ABA54: mov     [rbp+0E8h+var_13D], 1
 * 00000001406ABA58: mov     [rbp+0E8h+var_138], rax
 * 00000001406ABA5C: mov     [rbp+0E8h+var_130], rcx
 * 00000001406ABA60: mov     [rbp+0E8h+var_128], rdx
 * 00000001406ABA64: mov     [rbp+0E8h+var_120], r8
 * 00000001406ABA68: mov     [rbp+0E8h+var_118], r9
 * 00000001406ABA6C: mov     [rbp+0E8h+var_110], r10
 * 00000001406ABA70: mov     [rbp+0E8h+var_108], r11
 * 00000001406ABA74: test    [rbp+0E8h+arg_0], 1
 * 00000001406ABA7B: jnz     short loc_1406ABAB5
 * 00000001406ABA7D: xor     edx, edx
 * 00000001406ABA7F: rdsspq  rdx
 * 00000001406ABA84: mov     [rbp+0E8h+var_90], rdx
 * 00000001406ABA88: lfence
 * 00000001406ABA8B: test    byte ptr gs:858h, 1
 * 00000001406ABA94: jnz     short loc_1406ABA9E
 * 00000001406ABA96: lfence
 * 00000001406ABA99: jmp     loc_1406ABD26
 * 00000001406ABA9E: movzx   eax, word ptr gs:866h
 * 00000001406ABAA7: mov     ecx, 48h ; 'H'
 * 00000001406ABAAC: xor     edx, edx
 * 00000001406ABAAE: wrmsr
 * 00000001406ABAB0: jmp     loc_1406ABD26
 * 00000001406ABAB5: test    cs:KiKvaShadow, 1
 * 00000001406ABABC: jnz     short loc_1406ABAC1
 * 00000001406ABABE: swapgs
 * 00000001406ABAC1: lfence
 * 00000001406ABAC4: mov     rcx, gs:9D28h
 * 00000001406ABACD: test    rcx, rcx
 * 00000001406ABAD0: jz      short loc_1406ABAF1
 * 00000001406ABAD2: rdsspq  rdx
 * 00000001406ABAD7: mov     r10, gs:9D20h
 * 00000001406ABAE0: add     r10, 8
 * 00000001406ABAE4: cmp     rdx, r10
 * 00000001406ABAE7: jnz     short loc_1406ABAF1
 * 00000001406ABAE9: rstorssp qword ptr [rcx]
 * 00000001406ABAED: saveprevssp
 * 00000001406ABAF1: mov     r10, gs:188h
 * 00000001406ABAFA: mov     rcx, gs:188h
 * 00000001406ABB03: mov     rcx, [rcx+220h]
 * 00000001406ABB0A: mov     rcx, [rcx+760h]
 * 00000001406ABB11: mov     gs:850h, rcx
 * 00000001406ABB1A: mov     cx, gs:862h
 * 00000001406ABB23: mov     gs:864h, cx
 * 00000001406ABB2C: mov     cl, gs:858h
 * 00000001406ABB34: mov     gs:85Ah, cl
 * 00000001406ABB3C: movzx   eax, word ptr gs:868h
 * 00000001406ABB45: cmp     gs:866h, ax
 * 00000001406ABB4E: jz      short loc_1406ABB62
 * 00000001406ABB50: mov     gs:866h, ax
 * 00000001406ABB59: mov     ecx, 48h ; 'H'
 * 00000001406ABB5E: xor     edx, edx
 * 00000001406ABB60: wrmsr
 * 00000001406ABB62: movzx   edx, byte ptr gs:858h
 * 00000001406ABB6B: test    edx, 8
 * 00000001406ABB71: jz      short loc_1406ABB8A
 * 00000001406ABB73: mov     eax, 1
 * 00000001406ABB78: xor     edx, edx
 * 00000001406ABB7A: mov     ecx, 49h ; 'I'
 * 00000001406ABB7F: wrmsr
 * 00000001406ABB81: movzx   edx, byte ptr gs:858h
 * 00000001406ABB8A: test    edx, 2
 * 00000001406ABB90: jz      loc_1406ABCCD
 * 00000001406ABB96: call    loc_1406ABCA9
 * 00000001406ABB9B: add     rsp, 8
 * 00000001406ABB9F: call    loc_1406ABCB2
 * 00000001406ABBA4: add     rsp, 8
 * 00000001406ABBA8: call    loc_1406ABB9B
 * 00000001406ABBAD: add     rsp, 8
 * 00000001406ABBB1: call    loc_1406ABBA4
 * 00000001406ABBB6: add     rsp, 8
 * 00000001406ABBBA: call    loc_1406ABBAD
 * 00000001406ABBBF: add     rsp, 8
 * 00000001406ABBC3: call    loc_1406ABBB6
 * 00000001406ABBC8: add     rsp, 8
 * 00000001406ABBCC: call    loc_1406ABBBF
 * 00000001406ABBD1: add     rsp, 8
 * 00000001406ABBD5: call    loc_1406ABBC8
 * 00000001406ABBDA: add     rsp, 8
 * 00000001406ABBDE: call    loc_1406ABBD1
 * 00000001406ABBE3: add     rsp, 8
 * 00000001406ABBE7: call    loc_1406ABBDA
 * 00000001406ABBEC: add     rsp, 8
 * 00000001406ABBF0: call    loc_1406ABBE3
 * 00000001406ABBF5: add     rsp, 8
 * 00000001406ABBF9: call    loc_1406ABBEC
 * 00000001406ABBFE: add     rsp, 8
 * 00000001406ABC02: call    loc_1406ABBF5
 * 00000001406ABC07: add     rsp, 8
 * 00000001406ABC0B: call    loc_1406ABBFE
 * 00000001406ABC10: add     rsp, 8
 * 00000001406ABC14: call    loc_1406ABC07
 * 00000001406ABC19: add     rsp, 8
 * 00000001406ABC1D: call    loc_1406ABC10
 * 00000001406ABC22: add     rsp, 8
 * 00000001406ABC26: call    loc_1406ABC19
 * 00000001406ABC2B: add     rsp, 8
 * 00000001406ABC2F: call    loc_1406ABC22
 * 00000001406ABC34: add     rsp, 8
 * 00000001406ABC38: call    loc_1406ABC2B
 * 00000001406ABC3D: add     rsp, 8
 * 00000001406ABC41: call    loc_1406ABC34
 * 00000001406ABC46: add     rsp, 8
 * 00000001406ABC4A: call    loc_1406ABC3D
 * 00000001406ABC4F: add     rsp, 8
 * 00000001406ABC53: call    loc_1406ABC46
 * 00000001406ABC58: add     rsp, 8
 * 00000001406ABC5C: call    loc_1406ABC4F
 * 00000001406ABC61: add     rsp, 8
 * 00000001406ABC65: call    loc_1406ABC58
 * 00000001406ABC6A: add     rsp, 8
 * 00000001406ABC6E: call    loc_1406ABC61
 * 00000001406ABC73: add     rsp, 8
 * 00000001406ABC77: call    loc_1406ABC6A
 * 00000001406ABC7C: add     rsp, 8
 * 00000001406ABC80: call    loc_1406ABC73
 * 00000001406ABC85: add     rsp, 8
 * 00000001406ABC89: call    loc_1406ABC7C
 * 00000001406ABC8E: add     rsp, 8
 * 00000001406ABC92: call    loc_1406ABC85
 * 00000001406ABC97: add     rsp, 8
 * 00000001406ABC9B: call    loc_1406ABC8E
 * 00000001406ABCA0: add     rsp, 8
 * 00000001406ABCA4: call    loc_1406ABC97
 * 00000001406ABCA9: add     rsp, 8
 * 00000001406ABCAD: call    loc_1406ABCA0
 * 00000001406ABCB2: add     rsp, 8
 * 00000001406ABCB6: mov     eax, 0DADAh
 * 00000001406ABCBB: test    byte ptr gs:85Ch, 8
 * 00000001406ABCC4: jz      short loc_1406ABCCD
 * 00000001406ABCC6: mov     al, 20h ; ' '
 * 00000001406ABCC8: incsspq rax
 * 00000001406ABCCD: test    edx, 80h
 * 00000001406ABCD3: jz      short loc_1406ABCDD
 * 00000001406ABCD5: lfence
 * 00000001406ABCD8: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406ABCDD: lfence
 * 00000001406ABCE0: mov     byte ptr gs:85Eh, 0
 * 00000001406ABCE9: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406ABCF0: jz      short loc_1406ABD11
 * 00000001406ABCF2: mov     ecx, 6A7h
 * 00000001406ABCF7: rdmsr
 * 00000001406ABCF9: cmp     edx, 0
 * 00000001406ABCFC: jz      short loc_1406ABD11
 * 00000001406ABCFE: mov     ecx, edx
 * 00000001406ABD00: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406ABD06: cmp     edx, ecx
 * 00000001406ABD08: jz      short loc_1406ABD11
 * 00000001406ABD0A: mov     ecx, 6A7h
 * 00000001406ABD0F: wrmsr
 * 00000001406ABD11: test    byte ptr [r10+3], 3
 * 00000001406ABD16: mov     [rbp+0E8h+var_68], 0
 * 00000001406ABD1F: jz      short loc_1406ABD26
 * 00000001406ABD21: call    KiSaveDebugRegisterState
 * 00000001406ABD26: cld
 * 00000001406ABD27: stmxcsr [rbp+0E8h+var_13C]
 * 00000001406ABD2B: ldmxcsr dword ptr gs:180h
 * 00000001406ABD34: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001406ABD38: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001406ABD3C: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001406ABD40: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001406ABD44: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001406ABD48: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001406ABD4C: test    [rbp+0E8h+arg_0], 1
 * 00000001406ABD53: jz      short loc_1406ABD5A
 * 00000001406ABD55: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406ABD5A: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406ABD61: jz      short loc_1406ABD6F
 * 00000001406ABD63: test    [rbp+0E8h+arg_0], 1
 * 00000001406ABD6A: jz      short loc_1406ABD6F
 * 00000001406ABD6C: stac
 * 00000001406ABD6F: test    [rbp+0E8h+arg_8], 200h
 * 00000001406ABD79: jz      short loc_1406ABD7C
 * 00000001406ABD7B: sti
 * 00000001406ABD7C: mov     ecx, 80000003h
 * 00000001406ABD81: mov     edx, 1
 * 00000001406ABD86: mov     r8, [rbp+0E8h]
 * 00000001406ABD8D: dec     r8
 * 00000001406ABD90: mov     r9d, 0
 * 00000001406ABD96: call    KiExceptionDispatch
 * 00000001406ABD9B: nop
 * 00000001406ABD9C: retn
 */
