/*
 * XREFs of KiVmbusInterrupt0 @ 0x1406B0C50
 * Callers:
 *     KiVmbusInterrupt0Shadow @ 0x140BBE040 (KiVmbusInterrupt0Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1403FE680 (KiCheckForSListAddress.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14040ED30 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404F9550 (KiSaveDebugRegisterState.c)
 *     KeWakeProcessor @ 0x1405BA300 (KeWakeProcessor.c)
 *     KiVmbusInterrupt0 @ 0x1406B0C50 (KiVmbusInterrupt0.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406C0640 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt0 @ 0x1406B0C50
 * Reason: Hex-Rays returned no pseudocode for 0x1406B0C50
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B0C50: push    1
 * 00000001406B0C52: push    rbp
 * 00000001406B0C53: push    rsi
 * 00000001406B0C54: sub     rsp, 150h
 * 00000001406B0C5B: lea     rbp, [rsp+168h+var_E8]
 * 00000001406B0C63: mov     byte ptr [rbp-55h], 0
 * 00000001406B0C67: mov     [rbp-50h], rax
 * 00000001406B0C6B: mov     [rbp-48h], rcx
 * 00000001406B0C6F: mov     [rbp-40h], rdx
 * 00000001406B0C73: mov     [rbp-38h], r8
 * 00000001406B0C77: mov     [rbp-30h], r9
 * 00000001406B0C7B: mov     [rbp-28h], r10
 * 00000001406B0C7F: mov     [rbp-20h], r11
 * 00000001406B0C83: test    byte ptr [rbp+0F0h], 1
 * 00000001406B0C8A: jnz     short loc_1406B0CC4
 * 00000001406B0C8C: xor     edx, edx
 * 00000001406B0C8E: rdsspq  rdx
 * 00000001406B0C93: mov     [rbp+58h], rdx
 * 00000001406B0C97: lfence
 * 00000001406B0C9A: test    byte ptr gs:858h, 1
 * 00000001406B0CA3: jnz     short loc_1406B0CAD
 * 00000001406B0CA5: lfence
 * 00000001406B0CA8: jmp     loc_1406B0F35
 * 00000001406B0CAD: movzx   eax, word ptr gs:866h
 * 00000001406B0CB6: mov     ecx, 48h ; 'H'
 * 00000001406B0CBB: xor     edx, edx
 * 00000001406B0CBD: wrmsr
 * 00000001406B0CBF: jmp     loc_1406B0F35
 * 00000001406B0CC4: test    cs:KiKvaShadow, 1
 * 00000001406B0CCB: jnz     short loc_1406B0CD0
 * 00000001406B0CCD: swapgs
 * 00000001406B0CD0: lfence
 * 00000001406B0CD3: mov     rcx, gs:9D28h
 * 00000001406B0CDC: test    rcx, rcx
 * 00000001406B0CDF: jz      short loc_1406B0D00
 * 00000001406B0CE1: rdsspq  rdx
 * 00000001406B0CE6: mov     r10, gs:9D20h
 * 00000001406B0CEF: add     r10, 8
 * 00000001406B0CF3: cmp     rdx, r10
 * 00000001406B0CF6: jnz     short loc_1406B0D00
 * 00000001406B0CF8: rstorssp qword ptr [rcx]
 * 00000001406B0CFC: saveprevssp
 * 00000001406B0D00: mov     r10, gs:188h
 * 00000001406B0D09: mov     rcx, gs:188h
 * 00000001406B0D12: mov     rcx, [rcx+220h]
 * 00000001406B0D19: mov     rcx, [rcx+760h]
 * 00000001406B0D20: mov     gs:850h, rcx
 * 00000001406B0D29: mov     cx, gs:862h
 * 00000001406B0D32: mov     gs:864h, cx
 * 00000001406B0D3B: mov     cl, gs:858h
 * 00000001406B0D43: mov     gs:85Ah, cl
 * 00000001406B0D4B: movzx   eax, word ptr gs:868h
 * 00000001406B0D54: cmp     gs:866h, ax
 * 00000001406B0D5D: jz      short loc_1406B0D71
 * 00000001406B0D5F: mov     gs:866h, ax
 * 00000001406B0D68: mov     ecx, 48h ; 'H'
 * 00000001406B0D6D: xor     edx, edx
 * 00000001406B0D6F: wrmsr
 * 00000001406B0D71: movzx   edx, byte ptr gs:858h
 * 00000001406B0D7A: test    edx, 8
 * 00000001406B0D80: jz      short loc_1406B0D99
 * 00000001406B0D82: mov     eax, 1
 * 00000001406B0D87: xor     edx, edx
 * 00000001406B0D89: mov     ecx, 49h ; 'I'
 * 00000001406B0D8E: wrmsr
 * 00000001406B0D90: movzx   edx, byte ptr gs:858h
 * 00000001406B0D99: test    edx, 2
 * 00000001406B0D9F: jz      loc_1406B0EDC
 * 00000001406B0DA5: call    loc_1406B0EB8
 * 00000001406B0DAA: add     rsp, 8
 * 00000001406B0DAE: call    loc_1406B0EC1
 * 00000001406B0DB3: add     rsp, 8
 * 00000001406B0DB7: call    loc_1406B0DAA
 * 00000001406B0DBC: add     rsp, 8
 * 00000001406B0DC0: call    loc_1406B0DB3
 * 00000001406B0DC5: add     rsp, 8
 * 00000001406B0DC9: call    loc_1406B0DBC
 * 00000001406B0DCE: add     rsp, 8
 * 00000001406B0DD2: call    loc_1406B0DC5
 * 00000001406B0DD7: add     rsp, 8
 * 00000001406B0DDB: call    loc_1406B0DCE
 * 00000001406B0DE0: add     rsp, 8
 * 00000001406B0DE4: call    loc_1406B0DD7
 * 00000001406B0DE9: add     rsp, 8
 * 00000001406B0DED: call    loc_1406B0DE0
 * 00000001406B0DF2: add     rsp, 8
 * 00000001406B0DF6: call    loc_1406B0DE9
 * 00000001406B0DFB: add     rsp, 8
 * 00000001406B0DFF: call    loc_1406B0DF2
 * 00000001406B0E04: add     rsp, 8
 * 00000001406B0E08: call    loc_1406B0DFB
 * 00000001406B0E0D: add     rsp, 8
 * 00000001406B0E11: call    loc_1406B0E04
 * 00000001406B0E16: add     rsp, 8
 * 00000001406B0E1A: call    loc_1406B0E0D
 * 00000001406B0E1F: add     rsp, 8
 * 00000001406B0E23: call    loc_1406B0E16
 * 00000001406B0E28: add     rsp, 8
 * 00000001406B0E2C: call    loc_1406B0E1F
 * 00000001406B0E31: add     rsp, 8
 * 00000001406B0E35: call    loc_1406B0E28
 * 00000001406B0E3A: add     rsp, 8
 * 00000001406B0E3E: call    loc_1406B0E31
 * 00000001406B0E43: add     rsp, 8
 * 00000001406B0E47: call    loc_1406B0E3A
 * 00000001406B0E4C: add     rsp, 8
 * 00000001406B0E50: call    loc_1406B0E43
 * 00000001406B0E55: add     rsp, 8
 * 00000001406B0E59: call    loc_1406B0E4C
 * 00000001406B0E5E: add     rsp, 8
 * 00000001406B0E62: call    loc_1406B0E55
 * 00000001406B0E67: add     rsp, 8
 * 00000001406B0E6B: call    loc_1406B0E5E
 * 00000001406B0E70: add     rsp, 8
 * 00000001406B0E74: call    loc_1406B0E67
 * 00000001406B0E79: add     rsp, 8
 * 00000001406B0E7D: call    loc_1406B0E70
 * 00000001406B0E82: add     rsp, 8
 * 00000001406B0E86: call    loc_1406B0E79
 * 00000001406B0E8B: add     rsp, 8
 * 00000001406B0E8F: call    loc_1406B0E82
 * 00000001406B0E94: add     rsp, 8
 * 00000001406B0E98: call    loc_1406B0E8B
 * 00000001406B0E9D: add     rsp, 8
 * 00000001406B0EA1: call    loc_1406B0E94
 * 00000001406B0EA6: add     rsp, 8
 * 00000001406B0EAA: call    loc_1406B0E9D
 * 00000001406B0EAF: add     rsp, 8
 * 00000001406B0EB3: call    loc_1406B0EA6
 * 00000001406B0EB8: add     rsp, 8
 * 00000001406B0EBC: call    loc_1406B0EAF
 * 00000001406B0EC1: add     rsp, 8
 * 00000001406B0EC5: mov     eax, 0DADAh
 * 00000001406B0ECA: test    byte ptr gs:85Ch, 8
 * 00000001406B0ED3: jz      short loc_1406B0EDC
 * 00000001406B0ED5: mov     al, 20h ; ' '
 * 00000001406B0ED7: incsspq rax
 * 00000001406B0EDC: test    edx, 80h
 * 00000001406B0EE2: jz      short loc_1406B0EEC
 * 00000001406B0EE4: lfence
 * 00000001406B0EE7: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406B0EEC: lfence
 * 00000001406B0EEF: mov     byte ptr gs:85Eh, 0
 * 00000001406B0EF8: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406B0EFF: jz      short loc_1406B0F20
 * 00000001406B0F01: mov     ecx, 6A7h
 * 00000001406B0F06: rdmsr
 * 00000001406B0F08: cmp     edx, 0
 * 00000001406B0F0B: jz      short loc_1406B0F20
 * 00000001406B0F0D: mov     ecx, edx
 * 00000001406B0F0F: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406B0F15: cmp     edx, ecx
 * 00000001406B0F17: jz      short loc_1406B0F20
 * 00000001406B0F19: mov     ecx, 6A7h
 * 00000001406B0F1E: wrmsr
 * 00000001406B0F20: test    byte ptr [r10+3], 3
 * 00000001406B0F25: mov     word ptr [rbp+80h], 0
 * 00000001406B0F2E: jz      short loc_1406B0F35
 * 00000001406B0F30: call    KiSaveDebugRegisterState
 * 00000001406B0F35: cld
 * 00000001406B0F36: stmxcsr dword ptr [rbp-54h]
 * 00000001406B0F3A: ldmxcsr dword ptr gs:180h
 * 00000001406B0F43: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001406B0F47: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001406B0F4B: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001406B0F4F: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001406B0F53: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001406B0F57: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001406B0F5B: test    byte ptr [rbp+0F0h], 1
 * 00000001406B0F62: jz      short loc_1406B0F69
 * 00000001406B0F64: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406B0F69: cmp     byte ptr gs:87DAh, 0
 * 00000001406B0F72: jz      short loc_1406B0F79
 * 00000001406B0F74: call    KeWakeProcessor
 * 00000001406B0F79: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001406B0F80: cmp     rax, [rbp+0E8h]
 * 00000001406B0F87: jnb     short loc_1406B0FA2
 * 00000001406B0F89: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001406B0F90: cmp     rax, [rbp+0E8h]
 * 00000001406B0F97: jb      short loc_1406B0FA2
 * 00000001406B0F99: lea     rcx, [rbp-80h]
 * 00000001406B0F9D: call    KiCheckForSListAddress
 * 00000001406B0FA2: xor     esi, esi
 * 00000001406B0FA4: inc     dword ptr gs:87C0h
 * 00000001406B0FAC: jmp     KiVmbusInterruptDispatch
 */
