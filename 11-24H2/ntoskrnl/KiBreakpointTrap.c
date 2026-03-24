/*
 * XREFs of KiBreakpointTrap @ 0x1406B6D40
 * Callers:
 *     KiBreakpointTrapShadow @ 0x140BBB2C0 (KiBreakpointTrapShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x14041B1F0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404FBC90 (KiSaveDebugRegisterState.c)
 *     KiBreakpointTrap @ 0x1406B6D40 (KiBreakpointTrap.c)
 *     KiExceptionDispatch @ 0x1406BED00 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406BF740 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiBreakpointTrap @ 0x1406B6D40
 * Reason: Hex-Rays returned no pseudocode for 0x1406B6D40
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B6D40: sub     rsp, 8
 * 00000001406B6D44: push    rbp
 * 00000001406B6D45: sub     rsp, 158h
 * 00000001406B6D4C: lea     rbp, [rsp+80h]
 * 00000001406B6D54: mov     [rbp+0E8h+var_13D], 1
 * 00000001406B6D58: mov     [rbp+0E8h+var_138], rax
 * 00000001406B6D5C: mov     [rbp+0E8h+var_130], rcx
 * 00000001406B6D60: mov     [rbp+0E8h+var_128], rdx
 * 00000001406B6D64: mov     [rbp+0E8h+var_120], r8
 * 00000001406B6D68: mov     [rbp+0E8h+var_118], r9
 * 00000001406B6D6C: mov     [rbp+0E8h+var_110], r10
 * 00000001406B6D70: mov     [rbp+0E8h+var_108], r11
 * 00000001406B6D74: test    [rbp+0E8h+arg_0], 1
 * 00000001406B6D7B: jnz     short loc_1406B6DB5
 * 00000001406B6D7D: xor     edx, edx
 * 00000001406B6D7F: rdsspq  rdx
 * 00000001406B6D84: mov     [rbp+0E8h+var_90], rdx
 * 00000001406B6D88: lfence
 * 00000001406B6D8B: test    byte ptr gs:858h, 1
 * 00000001406B6D94: jnz     short loc_1406B6D9E
 * 00000001406B6D96: lfence
 * 00000001406B6D99: jmp     loc_1406B7026
 * 00000001406B6D9E: movzx   eax, word ptr gs:866h
 * 00000001406B6DA7: mov     ecx, 48h ; 'H'
 * 00000001406B6DAC: xor     edx, edx
 * 00000001406B6DAE: wrmsr
 * 00000001406B6DB0: jmp     loc_1406B7026
 * 00000001406B6DB5: test    cs:KiKvaShadow, 1
 * 00000001406B6DBC: jnz     short loc_1406B6DC1
 * 00000001406B6DBE: swapgs
 * 00000001406B6DC1: lfence
 * 00000001406B6DC4: mov     rcx, gs:9D28h
 * 00000001406B6DCD: test    rcx, rcx
 * 00000001406B6DD0: jz      short loc_1406B6DF1
 * 00000001406B6DD2: rdsspq  rdx
 * 00000001406B6DD7: mov     r10, gs:9D20h
 * 00000001406B6DE0: add     r10, 8
 * 00000001406B6DE4: cmp     rdx, r10
 * 00000001406B6DE7: jnz     short loc_1406B6DF1
 * 00000001406B6DE9: rstorssp qword ptr [rcx]
 * 00000001406B6DED: saveprevssp
 * 00000001406B6DF1: mov     r10, gs:188h
 * 00000001406B6DFA: mov     rcx, gs:188h
 * 00000001406B6E03: mov     rcx, [rcx+220h]
 * 00000001406B6E0A: mov     rcx, [rcx+760h]
 * 00000001406B6E11: mov     gs:850h, rcx
 * 00000001406B6E1A: mov     cx, gs:862h
 * 00000001406B6E23: mov     gs:864h, cx
 * 00000001406B6E2C: mov     cl, gs:858h
 * 00000001406B6E34: mov     gs:85Ah, cl
 * 00000001406B6E3C: movzx   eax, word ptr gs:868h
 * 00000001406B6E45: cmp     gs:866h, ax
 * 00000001406B6E4E: jz      short loc_1406B6E62
 * 00000001406B6E50: mov     gs:866h, ax
 * 00000001406B6E59: mov     ecx, 48h ; 'H'
 * 00000001406B6E5E: xor     edx, edx
 * 00000001406B6E60: wrmsr
 * 00000001406B6E62: movzx   edx, byte ptr gs:858h
 * 00000001406B6E6B: test    edx, 8
 * 00000001406B6E71: jz      short loc_1406B6E8A
 * 00000001406B6E73: mov     eax, 1
 * 00000001406B6E78: xor     edx, edx
 * 00000001406B6E7A: mov     ecx, 49h ; 'I'
 * 00000001406B6E7F: wrmsr
 * 00000001406B6E81: movzx   edx, byte ptr gs:858h
 * 00000001406B6E8A: test    edx, 2
 * 00000001406B6E90: jz      loc_1406B6FCD
 * 00000001406B6E96: call    loc_1406B6FA9
 * 00000001406B6E9B: add     rsp, 8
 * 00000001406B6E9F: call    loc_1406B6FB2
 * 00000001406B6EA4: add     rsp, 8
 * 00000001406B6EA8: call    loc_1406B6E9B
 * 00000001406B6EAD: add     rsp, 8
 * 00000001406B6EB1: call    loc_1406B6EA4
 * 00000001406B6EB6: add     rsp, 8
 * 00000001406B6EBA: call    loc_1406B6EAD
 * 00000001406B6EBF: add     rsp, 8
 * 00000001406B6EC3: call    loc_1406B6EB6
 * 00000001406B6EC8: add     rsp, 8
 * 00000001406B6ECC: call    loc_1406B6EBF
 * 00000001406B6ED1: add     rsp, 8
 * 00000001406B6ED5: call    loc_1406B6EC8
 * 00000001406B6EDA: add     rsp, 8
 * 00000001406B6EDE: call    loc_1406B6ED1
 * 00000001406B6EE3: add     rsp, 8
 * 00000001406B6EE7: call    loc_1406B6EDA
 * 00000001406B6EEC: add     rsp, 8
 * 00000001406B6EF0: call    loc_1406B6EE3
 * 00000001406B6EF5: add     rsp, 8
 * 00000001406B6EF9: call    loc_1406B6EEC
 * 00000001406B6EFE: add     rsp, 8
 * 00000001406B6F02: call    loc_1406B6EF5
 * 00000001406B6F07: add     rsp, 8
 * 00000001406B6F0B: call    loc_1406B6EFE
 * 00000001406B6F10: add     rsp, 8
 * 00000001406B6F14: call    loc_1406B6F07
 * 00000001406B6F19: add     rsp, 8
 * 00000001406B6F1D: call    loc_1406B6F10
 * 00000001406B6F22: add     rsp, 8
 * 00000001406B6F26: call    loc_1406B6F19
 * 00000001406B6F2B: add     rsp, 8
 * 00000001406B6F2F: call    loc_1406B6F22
 * 00000001406B6F34: add     rsp, 8
 * 00000001406B6F38: call    loc_1406B6F2B
 * 00000001406B6F3D: add     rsp, 8
 * 00000001406B6F41: call    loc_1406B6F34
 * 00000001406B6F46: add     rsp, 8
 * 00000001406B6F4A: call    loc_1406B6F3D
 * 00000001406B6F4F: add     rsp, 8
 * 00000001406B6F53: call    loc_1406B6F46
 * 00000001406B6F58: add     rsp, 8
 * 00000001406B6F5C: call    loc_1406B6F4F
 * 00000001406B6F61: add     rsp, 8
 * 00000001406B6F65: call    loc_1406B6F58
 * 00000001406B6F6A: add     rsp, 8
 * 00000001406B6F6E: call    loc_1406B6F61
 * 00000001406B6F73: add     rsp, 8
 * 00000001406B6F77: call    loc_1406B6F6A
 * 00000001406B6F7C: add     rsp, 8
 * 00000001406B6F80: call    loc_1406B6F73
 * 00000001406B6F85: add     rsp, 8
 * 00000001406B6F89: call    loc_1406B6F7C
 * 00000001406B6F8E: add     rsp, 8
 * 00000001406B6F92: call    loc_1406B6F85
 * 00000001406B6F97: add     rsp, 8
 * 00000001406B6F9B: call    loc_1406B6F8E
 * 00000001406B6FA0: add     rsp, 8
 * 00000001406B6FA4: call    loc_1406B6F97
 * 00000001406B6FA9: add     rsp, 8
 * 00000001406B6FAD: call    loc_1406B6FA0
 * 00000001406B6FB2: add     rsp, 8
 * 00000001406B6FB6: mov     eax, 0DADAh
 * 00000001406B6FBB: test    byte ptr gs:85Ch, 8
 * 00000001406B6FC4: jz      short loc_1406B6FCD
 * 00000001406B6FC6: mov     al, 20h ; ' '
 * 00000001406B6FC8: incsspq rax
 * 00000001406B6FCD: test    edx, 80h
 * 00000001406B6FD3: jz      short loc_1406B6FDD
 * 00000001406B6FD5: lfence
 * 00000001406B6FD8: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406B6FDD: lfence
 * 00000001406B6FE0: mov     byte ptr gs:85Eh, 0
 * 00000001406B6FE9: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406B6FF0: jz      short loc_1406B7011
 * 00000001406B6FF2: mov     ecx, 6A7h
 * 00000001406B6FF7: rdmsr
 * 00000001406B6FF9: cmp     edx, 0
 * 00000001406B6FFC: jz      short loc_1406B7011
 * 00000001406B6FFE: mov     ecx, edx
 * 00000001406B7000: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406B7006: cmp     edx, ecx
 * 00000001406B7008: jz      short loc_1406B7011
 * 00000001406B700A: mov     ecx, 6A7h
 * 00000001406B700F: wrmsr
 * 00000001406B7011: test    byte ptr [r10+3], 3
 * 00000001406B7016: mov     [rbp+0E8h+var_68], 0
 * 00000001406B701F: jz      short loc_1406B7026
 * 00000001406B7021: call    KiSaveDebugRegisterState
 * 00000001406B7026: cld
 * 00000001406B7027: stmxcsr [rbp+0E8h+var_13C]
 * 00000001406B702B: ldmxcsr dword ptr gs:180h
 * 00000001406B7034: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001406B7038: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001406B703C: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001406B7040: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001406B7044: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001406B7048: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001406B704C: test    [rbp+0E8h+arg_0], 1
 * 00000001406B7053: jz      short loc_1406B705A
 * 00000001406B7055: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406B705A: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B7061: jz      short loc_1406B706F
 * 00000001406B7063: test    [rbp+0E8h+arg_0], 1
 * 00000001406B706A: jz      short loc_1406B706F
 * 00000001406B706C: stac
 * 00000001406B706F: test    [rbp+0E8h+arg_8], 200h
 * 00000001406B7079: jz      short loc_1406B707C
 * 00000001406B707B: sti
 * 00000001406B707C: mov     ecx, 80000003h
 * 00000001406B7081: mov     edx, 1
 * 00000001406B7086: mov     r8, [rbp+0E8h]
 * 00000001406B708D: dec     r8
 * 00000001406B7090: mov     r9d, 0
 * 00000001406B7096: call    KiExceptionDispatch
 * 00000001406B709B: nop
 * 00000001406B709C: retn
 */
