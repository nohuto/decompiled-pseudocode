/*
 * XREFs of KiRaiseAssertion @ 0x1406B1C40
 * Callers:
 *     KiRaiseAssertionShadow @ 0x140BAADC0 (KiRaiseAssertionShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x140429DB0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404F9580 (KiSaveDebugRegisterState.c)
 *     KiRaiseAssertion @ 0x1406B1C40 (KiRaiseAssertion.c)
 *     KiExceptionDispatch @ 0x1406B3A00 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406B4440 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseAssertion @ 0x1406B1C40
 * Reason: Hex-Rays returned no pseudocode for 0x1406B1C40
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B1C40: sub     qword ptr [rsp+0], 2
 * 00000001406B1C45: cmp     [rsp+arg_0], 23h ; '#'
 * 00000001406B1C4B: jnz     short loc_1406B1C52
 * 00000001406B1C4D: and     dword ptr [rsp+4], 0
 * 00000001406B1C52: sub     rsp, 8
 * 00000001406B1C56: push    rbp
 * 00000001406B1C57: sub     rsp, 158h
 * 00000001406B1C5E: lea     rbp, [rsp+168h+var_E8]
 * 00000001406B1C66: mov     byte ptr [rbp-55h], 1
 * 00000001406B1C6A: mov     [rbp-50h], rax
 * 00000001406B1C6E: mov     [rbp-48h], rcx
 * 00000001406B1C72: mov     [rbp-40h], rdx
 * 00000001406B1C76: mov     [rbp-38h], r8
 * 00000001406B1C7A: mov     [rbp-30h], r9
 * 00000001406B1C7E: mov     [rbp-28h], r10
 * 00000001406B1C82: mov     [rbp-20h], r11
 * 00000001406B1C86: test    byte ptr [rbp+0F0h], 1
 * 00000001406B1C8D: jnz     short loc_1406B1CC7
 * 00000001406B1C8F: xor     edx, edx
 * 00000001406B1C91: rdsspq  rdx
 * 00000001406B1C96: mov     [rbp+58h], rdx
 * 00000001406B1C9A: lfence
 * 00000001406B1C9D: test    byte ptr gs:858h, 1
 * 00000001406B1CA6: jnz     short loc_1406B1CB0
 * 00000001406B1CA8: lfence
 * 00000001406B1CAB: jmp     loc_1406B1F38
 * 00000001406B1CB0: movzx   eax, word ptr gs:866h
 * 00000001406B1CB9: mov     ecx, 48h ; 'H'
 * 00000001406B1CBE: xor     edx, edx
 * 00000001406B1CC0: wrmsr
 * 00000001406B1CC2: jmp     loc_1406B1F38
 * 00000001406B1CC7: test    cs:KiKvaShadow, 1
 * 00000001406B1CCE: jnz     short loc_1406B1CD3
 * 00000001406B1CD0: swapgs
 * 00000001406B1CD3: lfence
 * 00000001406B1CD6: mov     rcx, gs:9D28h
 * 00000001406B1CDF: test    rcx, rcx
 * 00000001406B1CE2: jz      short loc_1406B1D03
 * 00000001406B1CE4: rdsspq  rdx
 * 00000001406B1CE9: mov     r10, gs:9D20h
 * 00000001406B1CF2: add     r10, 8
 * 00000001406B1CF6: cmp     rdx, r10
 * 00000001406B1CF9: jnz     short loc_1406B1D03
 * 00000001406B1CFB: rstorssp qword ptr [rcx]
 * 00000001406B1CFF: saveprevssp
 * 00000001406B1D03: mov     r10, gs:188h
 * 00000001406B1D0C: mov     rcx, gs:188h
 * 00000001406B1D15: mov     rcx, [rcx+220h]
 * 00000001406B1D1C: mov     rcx, [rcx+760h]
 * 00000001406B1D23: mov     gs:850h, rcx
 * 00000001406B1D2C: mov     cx, gs:862h
 * 00000001406B1D35: mov     gs:864h, cx
 * 00000001406B1D3E: mov     cl, gs:858h
 * 00000001406B1D46: mov     gs:85Ah, cl
 * 00000001406B1D4E: movzx   eax, word ptr gs:868h
 * 00000001406B1D57: cmp     gs:866h, ax
 * 00000001406B1D60: jz      short loc_1406B1D74
 * 00000001406B1D62: mov     gs:866h, ax
 * 00000001406B1D6B: mov     ecx, 48h ; 'H'
 * 00000001406B1D70: xor     edx, edx
 * 00000001406B1D72: wrmsr
 * 00000001406B1D74: movzx   edx, byte ptr gs:858h
 * 00000001406B1D7D: test    edx, 8
 * 00000001406B1D83: jz      short loc_1406B1D9C
 * 00000001406B1D85: mov     eax, 1
 * 00000001406B1D8A: xor     edx, edx
 * 00000001406B1D8C: mov     ecx, 49h ; 'I'
 * 00000001406B1D91: wrmsr
 * 00000001406B1D93: movzx   edx, byte ptr gs:858h
 * 00000001406B1D9C: test    edx, 2
 * 00000001406B1DA2: jz      loc_1406B1EDF
 * 00000001406B1DA8: call    loc_1406B1EBB
 * 00000001406B1DAD: add     rsp, 8
 * 00000001406B1DB1: call    loc_1406B1EC4
 * 00000001406B1DB6: add     rsp, 8
 * 00000001406B1DBA: call    loc_1406B1DAD
 * 00000001406B1DBF: add     rsp, 8
 * 00000001406B1DC3: call    loc_1406B1DB6
 * 00000001406B1DC8: add     rsp, 8
 * 00000001406B1DCC: call    loc_1406B1DBF
 * 00000001406B1DD1: add     rsp, 8
 * 00000001406B1DD5: call    loc_1406B1DC8
 * 00000001406B1DDA: add     rsp, 8
 * 00000001406B1DDE: call    loc_1406B1DD1
 * 00000001406B1DE3: add     rsp, 8
 * 00000001406B1DE7: call    loc_1406B1DDA
 * 00000001406B1DEC: add     rsp, 8
 * 00000001406B1DF0: call    loc_1406B1DE3
 * 00000001406B1DF5: add     rsp, 8
 * 00000001406B1DF9: call    loc_1406B1DEC
 * 00000001406B1DFE: add     rsp, 8
 * 00000001406B1E02: call    loc_1406B1DF5
 * 00000001406B1E07: add     rsp, 8
 * 00000001406B1E0B: call    loc_1406B1DFE
 * 00000001406B1E10: add     rsp, 8
 * 00000001406B1E14: call    loc_1406B1E07
 * 00000001406B1E19: add     rsp, 8
 * 00000001406B1E1D: call    loc_1406B1E10
 * 00000001406B1E22: add     rsp, 8
 * 00000001406B1E26: call    loc_1406B1E19
 * 00000001406B1E2B: add     rsp, 8
 * 00000001406B1E2F: call    loc_1406B1E22
 * 00000001406B1E34: add     rsp, 8
 * 00000001406B1E38: call    loc_1406B1E2B
 * 00000001406B1E3D: add     rsp, 8
 * 00000001406B1E41: call    loc_1406B1E34
 * 00000001406B1E46: add     rsp, 8
 * 00000001406B1E4A: call    loc_1406B1E3D
 * 00000001406B1E4F: add     rsp, 8
 * 00000001406B1E53: call    loc_1406B1E46
 * 00000001406B1E58: add     rsp, 8
 * 00000001406B1E5C: call    loc_1406B1E4F
 * 00000001406B1E61: add     rsp, 8
 * 00000001406B1E65: call    loc_1406B1E58
 * 00000001406B1E6A: add     rsp, 8
 * 00000001406B1E6E: call    loc_1406B1E61
 * 00000001406B1E73: add     rsp, 8
 * 00000001406B1E77: call    loc_1406B1E6A
 * 00000001406B1E7C: add     rsp, 8
 * 00000001406B1E80: call    loc_1406B1E73
 * 00000001406B1E85: add     rsp, 8
 * 00000001406B1E89: call    loc_1406B1E7C
 * 00000001406B1E8E: add     rsp, 8
 * 00000001406B1E92: call    loc_1406B1E85
 * 00000001406B1E97: add     rsp, 8
 * 00000001406B1E9B: call    loc_1406B1E8E
 * 00000001406B1EA0: add     rsp, 8
 * 00000001406B1EA4: call    loc_1406B1E97
 * 00000001406B1EA9: add     rsp, 8
 * 00000001406B1EAD: call    loc_1406B1EA0
 * 00000001406B1EB2: add     rsp, 8
 * 00000001406B1EB6: call    loc_1406B1EA9
 * 00000001406B1EBB: add     rsp, 8
 * 00000001406B1EBF: call    loc_1406B1EB2
 * 00000001406B1EC4: add     rsp, 8
 * 00000001406B1EC8: mov     eax, 0DADAh
 * 00000001406B1ECD: test    byte ptr gs:85Ch, 8
 * 00000001406B1ED6: jz      short loc_1406B1EDF
 * 00000001406B1ED8: mov     al, 20h ; ' '
 * 00000001406B1EDA: incsspq rax
 * 00000001406B1EDF: test    edx, 80h
 * 00000001406B1EE5: jz      short loc_1406B1EEF
 * 00000001406B1EE7: lfence
 * 00000001406B1EEA: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406B1EEF: lfence
 * 00000001406B1EF2: mov     byte ptr gs:85Eh, 0
 * 00000001406B1EFB: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406B1F02: jz      short loc_1406B1F23
 * 00000001406B1F04: mov     ecx, 6A7h
 * 00000001406B1F09: rdmsr
 * 00000001406B1F0B: cmp     edx, 0
 * 00000001406B1F0E: jz      short loc_1406B1F23
 * 00000001406B1F10: mov     ecx, edx
 * 00000001406B1F12: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406B1F18: cmp     edx, ecx
 * 00000001406B1F1A: jz      short loc_1406B1F23
 * 00000001406B1F1C: mov     ecx, 6A7h
 * 00000001406B1F21: wrmsr
 * 00000001406B1F23: test    byte ptr [r10+3], 3
 * 00000001406B1F28: mov     word ptr [rbp+80h], 0
 * 00000001406B1F31: jz      short loc_1406B1F38
 * 00000001406B1F33: call    KiSaveDebugRegisterState
 * 00000001406B1F38: cld
 * 00000001406B1F39: stmxcsr dword ptr [rbp-54h]
 * 00000001406B1F3D: ldmxcsr dword ptr gs:180h
 * 00000001406B1F46: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001406B1F4A: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001406B1F4E: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001406B1F52: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001406B1F56: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001406B1F5A: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001406B1F5E: test    byte ptr [rbp+0F0h], 1
 * 00000001406B1F65: jz      short loc_1406B1F6C
 * 00000001406B1F67: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406B1F6C: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B1F73: jz      short loc_1406B1F81
 * 00000001406B1F75: test    byte ptr [rbp+0F0h], 1
 * 00000001406B1F7C: jz      short loc_1406B1F81
 * 00000001406B1F7E: stac
 * 00000001406B1F81: test    dword ptr [rbp+0F8h], 200h
 * 00000001406B1F8B: jz      short loc_1406B1F8E
 * 00000001406B1F8D: sti
 * 00000001406B1F8E: mov     ecx, 0C0000420h
 * 00000001406B1F93: xor     edx, edx
 * 00000001406B1F95: mov     r8, [rbp+0E8h]
 * 00000001406B1F9C: call    KiExceptionDispatch
 * 00000001406B1FA1: nop
 * 00000001406B1FA2: retn
 */
