/*
 * XREFs of KiBreakpointTrap @ 0x1406B7C40
 * Callers:
 *     KiBreakpointTrapShadow @ 0x140BBD2C0 (KiBreakpointTrapShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x14040ED30 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404F9550 (KiSaveDebugRegisterState.c)
 *     KiBreakpointTrap @ 0x1406B7C40 (KiBreakpointTrap.c)
 *     KiExceptionDispatch @ 0x1406BFC00 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406C0640 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiBreakpointTrap @ 0x1406B7C40
 * Reason: Hex-Rays returned no pseudocode for 0x1406B7C40
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B7C40: sub     rsp, 8
 * 00000001406B7C44: push    rbp
 * 00000001406B7C45: sub     rsp, 158h
 * 00000001406B7C4C: lea     rbp, [rsp+80h]
 * 00000001406B7C54: mov     [rbp+0E8h+var_13D], 1
 * 00000001406B7C58: mov     [rbp+0E8h+var_138], rax
 * 00000001406B7C5C: mov     [rbp+0E8h+var_130], rcx
 * 00000001406B7C60: mov     [rbp+0E8h+var_128], rdx
 * 00000001406B7C64: mov     [rbp+0E8h+var_120], r8
 * 00000001406B7C68: mov     [rbp+0E8h+var_118], r9
 * 00000001406B7C6C: mov     [rbp+0E8h+var_110], r10
 * 00000001406B7C70: mov     [rbp+0E8h+var_108], r11
 * 00000001406B7C74: test    [rbp+0E8h+arg_0], 1
 * 00000001406B7C7B: jnz     short loc_1406B7CB5
 * 00000001406B7C7D: xor     edx, edx
 * 00000001406B7C7F: rdsspq  rdx
 * 00000001406B7C84: mov     [rbp+0E8h+var_90], rdx
 * 00000001406B7C88: lfence
 * 00000001406B7C8B: test    byte ptr gs:858h, 1
 * 00000001406B7C94: jnz     short loc_1406B7C9E
 * 00000001406B7C96: lfence
 * 00000001406B7C99: jmp     loc_1406B7F26
 * 00000001406B7C9E: movzx   eax, word ptr gs:866h
 * 00000001406B7CA7: mov     ecx, 48h ; 'H'
 * 00000001406B7CAC: xor     edx, edx
 * 00000001406B7CAE: wrmsr
 * 00000001406B7CB0: jmp     loc_1406B7F26
 * 00000001406B7CB5: test    cs:KiKvaShadow, 1
 * 00000001406B7CBC: jnz     short loc_1406B7CC1
 * 00000001406B7CBE: swapgs
 * 00000001406B7CC1: lfence
 * 00000001406B7CC4: mov     rcx, gs:9D28h
 * 00000001406B7CCD: test    rcx, rcx
 * 00000001406B7CD0: jz      short loc_1406B7CF1
 * 00000001406B7CD2: rdsspq  rdx
 * 00000001406B7CD7: mov     r10, gs:9D20h
 * 00000001406B7CE0: add     r10, 8
 * 00000001406B7CE4: cmp     rdx, r10
 * 00000001406B7CE7: jnz     short loc_1406B7CF1
 * 00000001406B7CE9: rstorssp qword ptr [rcx]
 * 00000001406B7CED: saveprevssp
 * 00000001406B7CF1: mov     r10, gs:188h
 * 00000001406B7CFA: mov     rcx, gs:188h
 * 00000001406B7D03: mov     rcx, [rcx+220h]
 * 00000001406B7D0A: mov     rcx, [rcx+760h]
 * 00000001406B7D11: mov     gs:850h, rcx
 * 00000001406B7D1A: mov     cx, gs:862h
 * 00000001406B7D23: mov     gs:864h, cx
 * 00000001406B7D2C: mov     cl, gs:858h
 * 00000001406B7D34: mov     gs:85Ah, cl
 * 00000001406B7D3C: movzx   eax, word ptr gs:868h
 * 00000001406B7D45: cmp     gs:866h, ax
 * 00000001406B7D4E: jz      short loc_1406B7D62
 * 00000001406B7D50: mov     gs:866h, ax
 * 00000001406B7D59: mov     ecx, 48h ; 'H'
 * 00000001406B7D5E: xor     edx, edx
 * 00000001406B7D60: wrmsr
 * 00000001406B7D62: movzx   edx, byte ptr gs:858h
 * 00000001406B7D6B: test    edx, 8
 * 00000001406B7D71: jz      short loc_1406B7D8A
 * 00000001406B7D73: mov     eax, 1
 * 00000001406B7D78: xor     edx, edx
 * 00000001406B7D7A: mov     ecx, 49h ; 'I'
 * 00000001406B7D7F: wrmsr
 * 00000001406B7D81: movzx   edx, byte ptr gs:858h
 * 00000001406B7D8A: test    edx, 2
 * 00000001406B7D90: jz      loc_1406B7ECD
 * 00000001406B7D96: call    loc_1406B7EA9
 * 00000001406B7D9B: add     rsp, 8
 * 00000001406B7D9F: call    loc_1406B7EB2
 * 00000001406B7DA4: add     rsp, 8
 * 00000001406B7DA8: call    loc_1406B7D9B
 * 00000001406B7DAD: add     rsp, 8
 * 00000001406B7DB1: call    loc_1406B7DA4
 * 00000001406B7DB6: add     rsp, 8
 * 00000001406B7DBA: call    loc_1406B7DAD
 * 00000001406B7DBF: add     rsp, 8
 * 00000001406B7DC3: call    loc_1406B7DB6
 * 00000001406B7DC8: add     rsp, 8
 * 00000001406B7DCC: call    loc_1406B7DBF
 * 00000001406B7DD1: add     rsp, 8
 * 00000001406B7DD5: call    loc_1406B7DC8
 * 00000001406B7DDA: add     rsp, 8
 * 00000001406B7DDE: call    loc_1406B7DD1
 * 00000001406B7DE3: add     rsp, 8
 * 00000001406B7DE7: call    loc_1406B7DDA
 * 00000001406B7DEC: add     rsp, 8
 * 00000001406B7DF0: call    loc_1406B7DE3
 * 00000001406B7DF5: add     rsp, 8
 * 00000001406B7DF9: call    loc_1406B7DEC
 * 00000001406B7DFE: add     rsp, 8
 * 00000001406B7E02: call    loc_1406B7DF5
 * 00000001406B7E07: add     rsp, 8
 * 00000001406B7E0B: call    loc_1406B7DFE
 * 00000001406B7E10: add     rsp, 8
 * 00000001406B7E14: call    loc_1406B7E07
 * 00000001406B7E19: add     rsp, 8
 * 00000001406B7E1D: call    loc_1406B7E10
 * 00000001406B7E22: add     rsp, 8
 * 00000001406B7E26: call    loc_1406B7E19
 * 00000001406B7E2B: add     rsp, 8
 * 00000001406B7E2F: call    loc_1406B7E22
 * 00000001406B7E34: add     rsp, 8
 * 00000001406B7E38: call    loc_1406B7E2B
 * 00000001406B7E3D: add     rsp, 8
 * 00000001406B7E41: call    loc_1406B7E34
 * 00000001406B7E46: add     rsp, 8
 * 00000001406B7E4A: call    loc_1406B7E3D
 * 00000001406B7E4F: add     rsp, 8
 * 00000001406B7E53: call    loc_1406B7E46
 * 00000001406B7E58: add     rsp, 8
 * 00000001406B7E5C: call    loc_1406B7E4F
 * 00000001406B7E61: add     rsp, 8
 * 00000001406B7E65: call    loc_1406B7E58
 * 00000001406B7E6A: add     rsp, 8
 * 00000001406B7E6E: call    loc_1406B7E61
 * 00000001406B7E73: add     rsp, 8
 * 00000001406B7E77: call    loc_1406B7E6A
 * 00000001406B7E7C: add     rsp, 8
 * 00000001406B7E80: call    loc_1406B7E73
 * 00000001406B7E85: add     rsp, 8
 * 00000001406B7E89: call    loc_1406B7E7C
 * 00000001406B7E8E: add     rsp, 8
 * 00000001406B7E92: call    loc_1406B7E85
 * 00000001406B7E97: add     rsp, 8
 * 00000001406B7E9B: call    loc_1406B7E8E
 * 00000001406B7EA0: add     rsp, 8
 * 00000001406B7EA4: call    loc_1406B7E97
 * 00000001406B7EA9: add     rsp, 8
 * 00000001406B7EAD: call    loc_1406B7EA0
 * 00000001406B7EB2: add     rsp, 8
 * 00000001406B7EB6: mov     eax, 0DADAh
 * 00000001406B7EBB: test    byte ptr gs:85Ch, 8
 * 00000001406B7EC4: jz      short loc_1406B7ECD
 * 00000001406B7EC6: mov     al, 20h ; ' '
 * 00000001406B7EC8: incsspq rax
 * 00000001406B7ECD: test    edx, 80h
 * 00000001406B7ED3: jz      short loc_1406B7EDD
 * 00000001406B7ED5: lfence
 * 00000001406B7ED8: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406B7EDD: lfence
 * 00000001406B7EE0: mov     byte ptr gs:85Eh, 0
 * 00000001406B7EE9: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406B7EF0: jz      short loc_1406B7F11
 * 00000001406B7EF2: mov     ecx, 6A7h
 * 00000001406B7EF7: rdmsr
 * 00000001406B7EF9: cmp     edx, 0
 * 00000001406B7EFC: jz      short loc_1406B7F11
 * 00000001406B7EFE: mov     ecx, edx
 * 00000001406B7F00: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406B7F06: cmp     edx, ecx
 * 00000001406B7F08: jz      short loc_1406B7F11
 * 00000001406B7F0A: mov     ecx, 6A7h
 * 00000001406B7F0F: wrmsr
 * 00000001406B7F11: test    byte ptr [r10+3], 3
 * 00000001406B7F16: mov     [rbp+0E8h+var_68], 0
 * 00000001406B7F1F: jz      short loc_1406B7F26
 * 00000001406B7F21: call    KiSaveDebugRegisterState
 * 00000001406B7F26: cld
 * 00000001406B7F27: stmxcsr [rbp+0E8h+var_13C]
 * 00000001406B7F2B: ldmxcsr dword ptr gs:180h
 * 00000001406B7F34: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001406B7F38: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001406B7F3C: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001406B7F40: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001406B7F44: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001406B7F48: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001406B7F4C: test    [rbp+0E8h+arg_0], 1
 * 00000001406B7F53: jz      short loc_1406B7F5A
 * 00000001406B7F55: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406B7F5A: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B7F61: jz      short loc_1406B7F6F
 * 00000001406B7F63: test    [rbp+0E8h+arg_0], 1
 * 00000001406B7F6A: jz      short loc_1406B7F6F
 * 00000001406B7F6C: stac
 * 00000001406B7F6F: test    [rbp+0E8h+arg_8], 200h
 * 00000001406B7F79: jz      short loc_1406B7F7C
 * 00000001406B7F7B: sti
 * 00000001406B7F7C: mov     ecx, 80000003h
 * 00000001406B7F81: mov     edx, 1
 * 00000001406B7F86: mov     r8, [rbp+0E8h]
 * 00000001406B7F8D: dec     r8
 * 00000001406B7F90: mov     r9d, 0
 * 00000001406B7F96: call    KiExceptionDispatch
 * 00000001406B7F9B: nop
 * 00000001406B7F9C: retn
 */
