/*
 * XREFs of KiHvInterrupt @ 0x1406B08E0
 * Callers:
 *     KiHvInterruptShadow @ 0x140BBDFC0 (KiHvInterruptShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1403FE680 (KiCheckForSListAddress.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14040ED30 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404F9550 (KiSaveDebugRegisterState.c)
 *     KeWakeProcessor @ 0x1405BA300 (KeWakeProcessor.c)
 *     KiHvInterrupt @ 0x1406B08E0 (KiHvInterrupt.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406C0640 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiHvInterrupt @ 0x1406B08E0
 * Reason: Hex-Rays returned no pseudocode for 0x1406B08E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B08E0: push    0
 * 00000001406B08E2: push    rbp
 * 00000001406B08E3: push    rsi
 * 00000001406B08E4: sub     rsp, 150h
 * 00000001406B08EB: lea     rbp, [rsp+168h+var_E8]
 * 00000001406B08F3: mov     byte ptr [rbp-55h], 0
 * 00000001406B08F7: mov     [rbp-50h], rax
 * 00000001406B08FB: mov     [rbp-48h], rcx
 * 00000001406B08FF: mov     [rbp-40h], rdx
 * 00000001406B0903: mov     [rbp-38h], r8
 * 00000001406B0907: mov     [rbp-30h], r9
 * 00000001406B090B: mov     [rbp-28h], r10
 * 00000001406B090F: mov     [rbp-20h], r11
 * 00000001406B0913: test    byte ptr [rbp+0F0h], 1
 * 00000001406B091A: jnz     short loc_1406B0954
 * 00000001406B091C: xor     edx, edx
 * 00000001406B091E: rdsspq  rdx
 * 00000001406B0923: mov     [rbp+58h], rdx
 * 00000001406B0927: lfence
 * 00000001406B092A: test    byte ptr gs:858h, 1
 * 00000001406B0933: jnz     short loc_1406B093D
 * 00000001406B0935: lfence
 * 00000001406B0938: jmp     loc_1406B0BC5
 * 00000001406B093D: movzx   eax, word ptr gs:866h
 * 00000001406B0946: mov     ecx, 48h ; 'H'
 * 00000001406B094B: xor     edx, edx
 * 00000001406B094D: wrmsr
 * 00000001406B094F: jmp     loc_1406B0BC5
 * 00000001406B0954: test    cs:KiKvaShadow, 1
 * 00000001406B095B: jnz     short loc_1406B0960
 * 00000001406B095D: swapgs
 * 00000001406B0960: lfence
 * 00000001406B0963: mov     rcx, gs:9D28h
 * 00000001406B096C: test    rcx, rcx
 * 00000001406B096F: jz      short loc_1406B0990
 * 00000001406B0971: rdsspq  rdx
 * 00000001406B0976: mov     r10, gs:9D20h
 * 00000001406B097F: add     r10, 8
 * 00000001406B0983: cmp     rdx, r10
 * 00000001406B0986: jnz     short loc_1406B0990
 * 00000001406B0988: rstorssp qword ptr [rcx]
 * 00000001406B098C: saveprevssp
 * 00000001406B0990: mov     r10, gs:188h
 * 00000001406B0999: mov     rcx, gs:188h
 * 00000001406B09A2: mov     rcx, [rcx+220h]
 * 00000001406B09A9: mov     rcx, [rcx+760h]
 * 00000001406B09B0: mov     gs:850h, rcx
 * 00000001406B09B9: mov     cx, gs:862h
 * 00000001406B09C2: mov     gs:864h, cx
 * 00000001406B09CB: mov     cl, gs:858h
 * 00000001406B09D3: mov     gs:85Ah, cl
 * 00000001406B09DB: movzx   eax, word ptr gs:868h
 * 00000001406B09E4: cmp     gs:866h, ax
 * 00000001406B09ED: jz      short loc_1406B0A01
 * 00000001406B09EF: mov     gs:866h, ax
 * 00000001406B09F8: mov     ecx, 48h ; 'H'
 * 00000001406B09FD: xor     edx, edx
 * 00000001406B09FF: wrmsr
 * 00000001406B0A01: movzx   edx, byte ptr gs:858h
 * 00000001406B0A0A: test    edx, 8
 * 00000001406B0A10: jz      short loc_1406B0A29
 * 00000001406B0A12: mov     eax, 1
 * 00000001406B0A17: xor     edx, edx
 * 00000001406B0A19: mov     ecx, 49h ; 'I'
 * 00000001406B0A1E: wrmsr
 * 00000001406B0A20: movzx   edx, byte ptr gs:858h
 * 00000001406B0A29: test    edx, 2
 * 00000001406B0A2F: jz      loc_1406B0B6C
 * 00000001406B0A35: call    loc_1406B0B48
 * 00000001406B0A3A: add     rsp, 8
 * 00000001406B0A3E: call    loc_1406B0B51
 * 00000001406B0A43: add     rsp, 8
 * 00000001406B0A47: call    loc_1406B0A3A
 * 00000001406B0A4C: add     rsp, 8
 * 00000001406B0A50: call    loc_1406B0A43
 * 00000001406B0A55: add     rsp, 8
 * 00000001406B0A59: call    loc_1406B0A4C
 * 00000001406B0A5E: add     rsp, 8
 * 00000001406B0A62: call    loc_1406B0A55
 * 00000001406B0A67: add     rsp, 8
 * 00000001406B0A6B: call    loc_1406B0A5E
 * 00000001406B0A70: add     rsp, 8
 * 00000001406B0A74: call    loc_1406B0A67
 * 00000001406B0A79: add     rsp, 8
 * 00000001406B0A7D: call    loc_1406B0A70
 * 00000001406B0A82: add     rsp, 8
 * 00000001406B0A86: call    loc_1406B0A79
 * 00000001406B0A8B: add     rsp, 8
 * 00000001406B0A8F: call    loc_1406B0A82
 * 00000001406B0A94: add     rsp, 8
 * 00000001406B0A98: call    loc_1406B0A8B
 * 00000001406B0A9D: add     rsp, 8
 * 00000001406B0AA1: call    loc_1406B0A94
 * 00000001406B0AA6: add     rsp, 8
 * 00000001406B0AAA: call    loc_1406B0A9D
 * 00000001406B0AAF: add     rsp, 8
 * 00000001406B0AB3: call    loc_1406B0AA6
 * 00000001406B0AB8: add     rsp, 8
 * 00000001406B0ABC: call    loc_1406B0AAF
 * 00000001406B0AC1: add     rsp, 8
 * 00000001406B0AC5: call    loc_1406B0AB8
 * 00000001406B0ACA: add     rsp, 8
 * 00000001406B0ACE: call    loc_1406B0AC1
 * 00000001406B0AD3: add     rsp, 8
 * 00000001406B0AD7: call    loc_1406B0ACA
 * 00000001406B0ADC: add     rsp, 8
 * 00000001406B0AE0: call    loc_1406B0AD3
 * 00000001406B0AE5: add     rsp, 8
 * 00000001406B0AE9: call    loc_1406B0ADC
 * 00000001406B0AEE: add     rsp, 8
 * 00000001406B0AF2: call    loc_1406B0AE5
 * 00000001406B0AF7: add     rsp, 8
 * 00000001406B0AFB: call    loc_1406B0AEE
 * 00000001406B0B00: add     rsp, 8
 * 00000001406B0B04: call    loc_1406B0AF7
 * 00000001406B0B09: add     rsp, 8
 * 00000001406B0B0D: call    loc_1406B0B00
 * 00000001406B0B12: add     rsp, 8
 * 00000001406B0B16: call    loc_1406B0B09
 * 00000001406B0B1B: add     rsp, 8
 * 00000001406B0B1F: call    loc_1406B0B12
 * 00000001406B0B24: add     rsp, 8
 * 00000001406B0B28: call    loc_1406B0B1B
 * 00000001406B0B2D: add     rsp, 8
 * 00000001406B0B31: call    loc_1406B0B24
 * 00000001406B0B36: add     rsp, 8
 * 00000001406B0B3A: call    loc_1406B0B2D
 * 00000001406B0B3F: add     rsp, 8
 * 00000001406B0B43: call    loc_1406B0B36
 * 00000001406B0B48: add     rsp, 8
 * 00000001406B0B4C: call    loc_1406B0B3F
 * 00000001406B0B51: add     rsp, 8
 * 00000001406B0B55: mov     eax, 0DADAh
 * 00000001406B0B5A: test    byte ptr gs:85Ch, 8
 * 00000001406B0B63: jz      short loc_1406B0B6C
 * 00000001406B0B65: mov     al, 20h ; ' '
 * 00000001406B0B67: incsspq rax
 * 00000001406B0B6C: test    edx, 80h
 * 00000001406B0B72: jz      short loc_1406B0B7C
 * 00000001406B0B74: lfence
 * 00000001406B0B77: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406B0B7C: lfence
 * 00000001406B0B7F: mov     byte ptr gs:85Eh, 0
 * 00000001406B0B88: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406B0B8F: jz      short loc_1406B0BB0
 * 00000001406B0B91: mov     ecx, 6A7h
 * 00000001406B0B96: rdmsr
 * 00000001406B0B98: cmp     edx, 0
 * 00000001406B0B9B: jz      short loc_1406B0BB0
 * 00000001406B0B9D: mov     ecx, edx
 * 00000001406B0B9F: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406B0BA5: cmp     edx, ecx
 * 00000001406B0BA7: jz      short loc_1406B0BB0
 * 00000001406B0BA9: mov     ecx, 6A7h
 * 00000001406B0BAE: wrmsr
 * 00000001406B0BB0: test    byte ptr [r10+3], 3
 * 00000001406B0BB5: mov     word ptr [rbp+80h], 0
 * 00000001406B0BBE: jz      short loc_1406B0BC5
 * 00000001406B0BC0: call    KiSaveDebugRegisterState
 * 00000001406B0BC5: cld
 * 00000001406B0BC6: stmxcsr dword ptr [rbp-54h]
 * 00000001406B0BCA: ldmxcsr dword ptr gs:180h
 * 00000001406B0BD3: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001406B0BD7: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001406B0BDB: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001406B0BDF: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001406B0BE3: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001406B0BE7: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001406B0BEB: test    byte ptr [rbp+0F0h], 1
 * 00000001406B0BF2: jz      short loc_1406B0BF9
 * 00000001406B0BF4: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406B0BF9: cmp     byte ptr gs:87DAh, 0
 * 00000001406B0C02: jz      short loc_1406B0C09
 * 00000001406B0C04: call    KeWakeProcessor
 * 00000001406B0C09: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001406B0C10: cmp     rax, [rbp+0E8h]
 * 00000001406B0C17: jnb     short loc_1406B0C32
 * 00000001406B0C19: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001406B0C20: cmp     rax, [rbp+0E8h]
 * 00000001406B0C27: jb      short loc_1406B0C32
 * 00000001406B0C29: lea     rcx, [rbp-80h]
 * 00000001406B0C2D: call    KiCheckForSListAddress
 * 00000001406B0C32: xor     esi, esi
 * 00000001406B0C34: inc     dword ptr gs:87C0h
 * 00000001406B0C3C: jmp     KiHvInterruptDispatch
 */
