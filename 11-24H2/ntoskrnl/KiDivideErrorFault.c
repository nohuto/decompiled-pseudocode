/*
 * XREFs of KiDivideErrorFault @ 0x1406B6D00
 * Callers:
 *     KiDivideErrorFaultShadow @ 0x140BBD100 (KiDivideErrorFaultShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x14040ED30 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404F9550 (KiSaveDebugRegisterState.c)
 *     KiDivideErrorFault @ 0x1406B6D00 (KiDivideErrorFault.c)
 *     KiExceptionDispatch @ 0x1406BFC00 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406C0640 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiDivideErrorFault @ 0x1406B6D00
 * Reason: Hex-Rays returned no pseudocode for 0x1406B6D00
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B6D00: sub     rsp, 8
 * 00000001406B6D04: push    rbp
 * 00000001406B6D05: sub     rsp, 158h
 * 00000001406B6D0C: lea     rbp, [rsp+80h]
 * 00000001406B6D14: mov     [rbp+0E8h+var_13D], 1
 * 00000001406B6D18: mov     [rbp+0E8h+var_138], rax
 * 00000001406B6D1C: mov     [rbp+0E8h+var_130], rcx
 * 00000001406B6D20: mov     [rbp+0E8h+var_128], rdx
 * 00000001406B6D24: mov     [rbp+0E8h+var_120], r8
 * 00000001406B6D28: mov     [rbp+0E8h+var_118], r9
 * 00000001406B6D2C: mov     [rbp+0E8h+var_110], r10
 * 00000001406B6D30: mov     [rbp+0E8h+var_108], r11
 * 00000001406B6D34: test    [rbp+0E8h+arg_0], 1
 * 00000001406B6D3B: jnz     short loc_1406B6D75
 * 00000001406B6D3D: xor     edx, edx
 * 00000001406B6D3F: rdsspq  rdx
 * 00000001406B6D44: mov     [rbp+0E8h+var_90], rdx
 * 00000001406B6D48: lfence
 * 00000001406B6D4B: test    byte ptr gs:858h, 1
 * 00000001406B6D54: jnz     short loc_1406B6D5E
 * 00000001406B6D56: lfence
 * 00000001406B6D59: jmp     loc_1406B6FE6
 * 00000001406B6D5E: movzx   eax, word ptr gs:866h
 * 00000001406B6D67: mov     ecx, 48h ; 'H'
 * 00000001406B6D6C: xor     edx, edx
 * 00000001406B6D6E: wrmsr
 * 00000001406B6D70: jmp     loc_1406B6FE6
 * 00000001406B6D75: test    cs:KiKvaShadow, 1
 * 00000001406B6D7C: jnz     short loc_1406B6D81
 * 00000001406B6D7E: swapgs
 * 00000001406B6D81: lfence
 * 00000001406B6D84: mov     rcx, gs:9D28h
 * 00000001406B6D8D: test    rcx, rcx
 * 00000001406B6D90: jz      short loc_1406B6DB1
 * 00000001406B6D92: rdsspq  rdx
 * 00000001406B6D97: mov     r10, gs:9D20h
 * 00000001406B6DA0: add     r10, 8
 * 00000001406B6DA4: cmp     rdx, r10
 * 00000001406B6DA7: jnz     short loc_1406B6DB1
 * 00000001406B6DA9: rstorssp qword ptr [rcx]
 * 00000001406B6DAD: saveprevssp
 * 00000001406B6DB1: mov     r10, gs:188h
 * 00000001406B6DBA: mov     rcx, gs:188h
 * 00000001406B6DC3: mov     rcx, [rcx+220h]
 * 00000001406B6DCA: mov     rcx, [rcx+760h]
 * 00000001406B6DD1: mov     gs:850h, rcx
 * 00000001406B6DDA: mov     cx, gs:862h
 * 00000001406B6DE3: mov     gs:864h, cx
 * 00000001406B6DEC: mov     cl, gs:858h
 * 00000001406B6DF4: mov     gs:85Ah, cl
 * 00000001406B6DFC: movzx   eax, word ptr gs:868h
 * 00000001406B6E05: cmp     gs:866h, ax
 * 00000001406B6E0E: jz      short loc_1406B6E22
 * 00000001406B6E10: mov     gs:866h, ax
 * 00000001406B6E19: mov     ecx, 48h ; 'H'
 * 00000001406B6E1E: xor     edx, edx
 * 00000001406B6E20: wrmsr
 * 00000001406B6E22: movzx   edx, byte ptr gs:858h
 * 00000001406B6E2B: test    edx, 8
 * 00000001406B6E31: jz      short loc_1406B6E4A
 * 00000001406B6E33: mov     eax, 1
 * 00000001406B6E38: xor     edx, edx
 * 00000001406B6E3A: mov     ecx, 49h ; 'I'
 * 00000001406B6E3F: wrmsr
 * 00000001406B6E41: movzx   edx, byte ptr gs:858h
 * 00000001406B6E4A: test    edx, 2
 * 00000001406B6E50: jz      loc_1406B6F8D
 * 00000001406B6E56: call    loc_1406B6F69
 * 00000001406B6E5B: add     rsp, 8
 * 00000001406B6E5F: call    loc_1406B6F72
 * 00000001406B6E64: add     rsp, 8
 * 00000001406B6E68: call    loc_1406B6E5B
 * 00000001406B6E6D: add     rsp, 8
 * 00000001406B6E71: call    loc_1406B6E64
 * 00000001406B6E76: add     rsp, 8
 * 00000001406B6E7A: call    loc_1406B6E6D
 * 00000001406B6E7F: add     rsp, 8
 * 00000001406B6E83: call    loc_1406B6E76
 * 00000001406B6E88: add     rsp, 8
 * 00000001406B6E8C: call    loc_1406B6E7F
 * 00000001406B6E91: add     rsp, 8
 * 00000001406B6E95: call    loc_1406B6E88
 * 00000001406B6E9A: add     rsp, 8
 * 00000001406B6E9E: call    loc_1406B6E91
 * 00000001406B6EA3: add     rsp, 8
 * 00000001406B6EA7: call    loc_1406B6E9A
 * 00000001406B6EAC: add     rsp, 8
 * 00000001406B6EB0: call    loc_1406B6EA3
 * 00000001406B6EB5: add     rsp, 8
 * 00000001406B6EB9: call    loc_1406B6EAC
 * 00000001406B6EBE: add     rsp, 8
 * 00000001406B6EC2: call    loc_1406B6EB5
 * 00000001406B6EC7: add     rsp, 8
 * 00000001406B6ECB: call    loc_1406B6EBE
 * 00000001406B6ED0: add     rsp, 8
 * 00000001406B6ED4: call    loc_1406B6EC7
 * 00000001406B6ED9: add     rsp, 8
 * 00000001406B6EDD: call    loc_1406B6ED0
 * 00000001406B6EE2: add     rsp, 8
 * 00000001406B6EE6: call    loc_1406B6ED9
 * 00000001406B6EEB: add     rsp, 8
 * 00000001406B6EEF: call    loc_1406B6EE2
 * 00000001406B6EF4: add     rsp, 8
 * 00000001406B6EF8: call    loc_1406B6EEB
 * 00000001406B6EFD: add     rsp, 8
 * 00000001406B6F01: call    loc_1406B6EF4
 * 00000001406B6F06: add     rsp, 8
 * 00000001406B6F0A: call    loc_1406B6EFD
 * 00000001406B6F0F: add     rsp, 8
 * 00000001406B6F13: call    loc_1406B6F06
 * 00000001406B6F18: add     rsp, 8
 * 00000001406B6F1C: call    loc_1406B6F0F
 * 00000001406B6F21: add     rsp, 8
 * 00000001406B6F25: call    loc_1406B6F18
 * 00000001406B6F2A: add     rsp, 8
 * 00000001406B6F2E: call    loc_1406B6F21
 * 00000001406B6F33: add     rsp, 8
 * 00000001406B6F37: call    loc_1406B6F2A
 * 00000001406B6F3C: add     rsp, 8
 * 00000001406B6F40: call    loc_1406B6F33
 * 00000001406B6F45: add     rsp, 8
 * 00000001406B6F49: call    loc_1406B6F3C
 * 00000001406B6F4E: add     rsp, 8
 * 00000001406B6F52: call    loc_1406B6F45
 * 00000001406B6F57: add     rsp, 8
 * 00000001406B6F5B: call    loc_1406B6F4E
 * 00000001406B6F60: add     rsp, 8
 * 00000001406B6F64: call    loc_1406B6F57
 * 00000001406B6F69: add     rsp, 8
 * 00000001406B6F6D: call    loc_1406B6F60
 * 00000001406B6F72: add     rsp, 8
 * 00000001406B6F76: mov     eax, 0DADAh
 * 00000001406B6F7B: test    byte ptr gs:85Ch, 8
 * 00000001406B6F84: jz      short loc_1406B6F8D
 * 00000001406B6F86: mov     al, 20h ; ' '
 * 00000001406B6F88: incsspq rax
 * 00000001406B6F8D: test    edx, 80h
 * 00000001406B6F93: jz      short loc_1406B6F9D
 * 00000001406B6F95: lfence
 * 00000001406B6F98: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406B6F9D: lfence
 * 00000001406B6FA0: mov     byte ptr gs:85Eh, 0
 * 00000001406B6FA9: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406B6FB0: jz      short loc_1406B6FD1
 * 00000001406B6FB2: mov     ecx, 6A7h
 * 00000001406B6FB7: rdmsr
 * 00000001406B6FB9: cmp     edx, 0
 * 00000001406B6FBC: jz      short loc_1406B6FD1
 * 00000001406B6FBE: mov     ecx, edx
 * 00000001406B6FC0: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406B6FC6: cmp     edx, ecx
 * 00000001406B6FC8: jz      short loc_1406B6FD1
 * 00000001406B6FCA: mov     ecx, 6A7h
 * 00000001406B6FCF: wrmsr
 * 00000001406B6FD1: test    byte ptr [r10+3], 3
 * 00000001406B6FD6: mov     [rbp+0E8h+var_68], 0
 * 00000001406B6FDF: jz      short loc_1406B6FE6
 * 00000001406B6FE1: call    KiSaveDebugRegisterState
 * 00000001406B6FE6: cld
 * 00000001406B6FE7: stmxcsr [rbp+0E8h+var_13C]
 * 00000001406B6FEB: ldmxcsr dword ptr gs:180h
 * 00000001406B6FF4: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001406B6FF8: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001406B6FFC: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001406B7000: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001406B7004: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001406B7008: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001406B700C: test    [rbp+0E8h+arg_0], 1
 * 00000001406B7013: jz      short loc_1406B701A
 * 00000001406B7015: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406B701A: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B7021: jz      short loc_1406B702F
 * 00000001406B7023: test    [rbp+0E8h+arg_0], 1
 * 00000001406B702A: jz      short loc_1406B702F
 * 00000001406B702C: stac
 * 00000001406B702F: test    [rbp+0E8h+arg_8], 200h
 * 00000001406B7039: jz      short loc_1406B703C
 * 00000001406B703B: sti
 * 00000001406B703C: mov     ecx, 10000003h
 * 00000001406B7041: xor     edx, edx
 * 00000001406B7043: mov     r8, [rbp+0E8h]
 * 00000001406B704A: call    KiExceptionDispatch
 * 00000001406B704F: nop
 * 00000001406B7050: retn
 */
