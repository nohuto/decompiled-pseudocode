/*
 * XREFs of KiVmbusInterrupt0 @ 0x1406AFCB0
 * Callers:
 *     KiVmbusInterrupt0Shadow @ 0x140BBC040 (KiVmbusInterrupt0Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1404038C0 (KiCheckForSListAddress.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14041B1F0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404FBC90 (KiSaveDebugRegisterState.c)
 *     KeWakeProcessor @ 0x1405BCCD0 (KeWakeProcessor.c)
 *     KiVmbusInterrupt0 @ 0x1406AFCB0 (KiVmbusInterrupt0.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406BF740 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt0 @ 0x1406AFCB0
 * Reason: Hex-Rays returned no pseudocode for 0x1406AFCB0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406AFCB0: push    1
 * 00000001406AFCB2: push    rbp
 * 00000001406AFCB3: push    rsi
 * 00000001406AFCB4: sub     rsp, 150h
 * 00000001406AFCBB: lea     rbp, [rsp+168h+var_E8]
 * 00000001406AFCC3: mov     byte ptr [rbp-55h], 0
 * 00000001406AFCC7: mov     [rbp-50h], rax
 * 00000001406AFCCB: mov     [rbp-48h], rcx
 * 00000001406AFCCF: mov     [rbp-40h], rdx
 * 00000001406AFCD3: mov     [rbp-38h], r8
 * 00000001406AFCD7: mov     [rbp-30h], r9
 * 00000001406AFCDB: mov     [rbp-28h], r10
 * 00000001406AFCDF: mov     [rbp-20h], r11
 * 00000001406AFCE3: test    byte ptr [rbp+0F0h], 1
 * 00000001406AFCEA: jnz     short loc_1406AFD24
 * 00000001406AFCEC: xor     edx, edx
 * 00000001406AFCEE: rdsspq  rdx
 * 00000001406AFCF3: mov     [rbp+58h], rdx
 * 00000001406AFCF7: lfence
 * 00000001406AFCFA: test    byte ptr gs:858h, 1
 * 00000001406AFD03: jnz     short loc_1406AFD0D
 * 00000001406AFD05: lfence
 * 00000001406AFD08: jmp     loc_1406AFF95
 * 00000001406AFD0D: movzx   eax, word ptr gs:866h
 * 00000001406AFD16: mov     ecx, 48h ; 'H'
 * 00000001406AFD1B: xor     edx, edx
 * 00000001406AFD1D: wrmsr
 * 00000001406AFD1F: jmp     loc_1406AFF95
 * 00000001406AFD24: test    cs:KiKvaShadow, 1
 * 00000001406AFD2B: jnz     short loc_1406AFD30
 * 00000001406AFD2D: swapgs
 * 00000001406AFD30: lfence
 * 00000001406AFD33: mov     rcx, gs:9D28h
 * 00000001406AFD3C: test    rcx, rcx
 * 00000001406AFD3F: jz      short loc_1406AFD60
 * 00000001406AFD41: rdsspq  rdx
 * 00000001406AFD46: mov     r10, gs:9D20h
 * 00000001406AFD4F: add     r10, 8
 * 00000001406AFD53: cmp     rdx, r10
 * 00000001406AFD56: jnz     short loc_1406AFD60
 * 00000001406AFD58: rstorssp qword ptr [rcx]
 * 00000001406AFD5C: saveprevssp
 * 00000001406AFD60: mov     r10, gs:188h
 * 00000001406AFD69: mov     rcx, gs:188h
 * 00000001406AFD72: mov     rcx, [rcx+220h]
 * 00000001406AFD79: mov     rcx, [rcx+760h]
 * 00000001406AFD80: mov     gs:850h, rcx
 * 00000001406AFD89: mov     cx, gs:862h
 * 00000001406AFD92: mov     gs:864h, cx
 * 00000001406AFD9B: mov     cl, gs:858h
 * 00000001406AFDA3: mov     gs:85Ah, cl
 * 00000001406AFDAB: movzx   eax, word ptr gs:868h
 * 00000001406AFDB4: cmp     gs:866h, ax
 * 00000001406AFDBD: jz      short loc_1406AFDD1
 * 00000001406AFDBF: mov     gs:866h, ax
 * 00000001406AFDC8: mov     ecx, 48h ; 'H'
 * 00000001406AFDCD: xor     edx, edx
 * 00000001406AFDCF: wrmsr
 * 00000001406AFDD1: movzx   edx, byte ptr gs:858h
 * 00000001406AFDDA: test    edx, 8
 * 00000001406AFDE0: jz      short loc_1406AFDF9
 * 00000001406AFDE2: mov     eax, 1
 * 00000001406AFDE7: xor     edx, edx
 * 00000001406AFDE9: mov     ecx, 49h ; 'I'
 * 00000001406AFDEE: wrmsr
 * 00000001406AFDF0: movzx   edx, byte ptr gs:858h
 * 00000001406AFDF9: test    edx, 2
 * 00000001406AFDFF: jz      loc_1406AFF3C
 * 00000001406AFE05: call    loc_1406AFF18
 * 00000001406AFE0A: add     rsp, 8
 * 00000001406AFE0E: call    loc_1406AFF21
 * 00000001406AFE13: add     rsp, 8
 * 00000001406AFE17: call    loc_1406AFE0A
 * 00000001406AFE1C: add     rsp, 8
 * 00000001406AFE20: call    loc_1406AFE13
 * 00000001406AFE25: add     rsp, 8
 * 00000001406AFE29: call    loc_1406AFE1C
 * 00000001406AFE2E: add     rsp, 8
 * 00000001406AFE32: call    loc_1406AFE25
 * 00000001406AFE37: add     rsp, 8
 * 00000001406AFE3B: call    loc_1406AFE2E
 * 00000001406AFE40: add     rsp, 8
 * 00000001406AFE44: call    loc_1406AFE37
 * 00000001406AFE49: add     rsp, 8
 * 00000001406AFE4D: call    loc_1406AFE40
 * 00000001406AFE52: add     rsp, 8
 * 00000001406AFE56: call    loc_1406AFE49
 * 00000001406AFE5B: add     rsp, 8
 * 00000001406AFE5F: call    loc_1406AFE52
 * 00000001406AFE64: add     rsp, 8
 * 00000001406AFE68: call    loc_1406AFE5B
 * 00000001406AFE6D: add     rsp, 8
 * 00000001406AFE71: call    loc_1406AFE64
 * 00000001406AFE76: add     rsp, 8
 * 00000001406AFE7A: call    loc_1406AFE6D
 * 00000001406AFE7F: add     rsp, 8
 * 00000001406AFE83: call    loc_1406AFE76
 * 00000001406AFE88: add     rsp, 8
 * 00000001406AFE8C: call    loc_1406AFE7F
 * 00000001406AFE91: add     rsp, 8
 * 00000001406AFE95: call    loc_1406AFE88
 * 00000001406AFE9A: add     rsp, 8
 * 00000001406AFE9E: call    loc_1406AFE91
 * 00000001406AFEA3: add     rsp, 8
 * 00000001406AFEA7: call    loc_1406AFE9A
 * 00000001406AFEAC: add     rsp, 8
 * 00000001406AFEB0: call    loc_1406AFEA3
 * 00000001406AFEB5: add     rsp, 8
 * 00000001406AFEB9: call    loc_1406AFEAC
 * 00000001406AFEBE: add     rsp, 8
 * 00000001406AFEC2: call    loc_1406AFEB5
 * 00000001406AFEC7: add     rsp, 8
 * 00000001406AFECB: call    loc_1406AFEBE
 * 00000001406AFED0: add     rsp, 8
 * 00000001406AFED4: call    loc_1406AFEC7
 * 00000001406AFED9: add     rsp, 8
 * 00000001406AFEDD: call    loc_1406AFED0
 * 00000001406AFEE2: add     rsp, 8
 * 00000001406AFEE6: call    loc_1406AFED9
 * 00000001406AFEEB: add     rsp, 8
 * 00000001406AFEEF: call    loc_1406AFEE2
 * 00000001406AFEF4: add     rsp, 8
 * 00000001406AFEF8: call    loc_1406AFEEB
 * 00000001406AFEFD: add     rsp, 8
 * 00000001406AFF01: call    loc_1406AFEF4
 * 00000001406AFF06: add     rsp, 8
 * 00000001406AFF0A: call    loc_1406AFEFD
 * 00000001406AFF0F: add     rsp, 8
 * 00000001406AFF13: call    loc_1406AFF06
 * 00000001406AFF18: add     rsp, 8
 * 00000001406AFF1C: call    loc_1406AFF0F
 * 00000001406AFF21: add     rsp, 8
 * 00000001406AFF25: mov     eax, 0DADAh
 * 00000001406AFF2A: test    byte ptr gs:85Ch, 8
 * 00000001406AFF33: jz      short loc_1406AFF3C
 * 00000001406AFF35: mov     al, 20h ; ' '
 * 00000001406AFF37: incsspq rax
 * 00000001406AFF3C: test    edx, 80h
 * 00000001406AFF42: jz      short loc_1406AFF4C
 * 00000001406AFF44: lfence
 * 00000001406AFF47: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406AFF4C: lfence
 * 00000001406AFF4F: mov     byte ptr gs:85Eh, 0
 * 00000001406AFF58: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406AFF5F: jz      short loc_1406AFF80
 * 00000001406AFF61: mov     ecx, 6A7h
 * 00000001406AFF66: rdmsr
 * 00000001406AFF68: cmp     edx, 0
 * 00000001406AFF6B: jz      short loc_1406AFF80
 * 00000001406AFF6D: mov     ecx, edx
 * 00000001406AFF6F: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406AFF75: cmp     edx, ecx
 * 00000001406AFF77: jz      short loc_1406AFF80
 * 00000001406AFF79: mov     ecx, 6A7h
 * 00000001406AFF7E: wrmsr
 * 00000001406AFF80: test    byte ptr [r10+3], 3
 * 00000001406AFF85: mov     word ptr [rbp+80h], 0
 * 00000001406AFF8E: jz      short loc_1406AFF95
 * 00000001406AFF90: call    KiSaveDebugRegisterState
 * 00000001406AFF95: cld
 * 00000001406AFF96: stmxcsr dword ptr [rbp-54h]
 * 00000001406AFF9A: ldmxcsr dword ptr gs:180h
 * 00000001406AFFA3: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001406AFFA7: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001406AFFAB: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001406AFFAF: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001406AFFB3: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001406AFFB7: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001406AFFBB: test    byte ptr [rbp+0F0h], 1
 * 00000001406AFFC2: jz      short loc_1406AFFC9
 * 00000001406AFFC4: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406AFFC9: cmp     byte ptr gs:87DAh, 0
 * 00000001406AFFD2: jz      short loc_1406AFFD9
 * 00000001406AFFD4: call    KeWakeProcessor
 * 00000001406AFFD9: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001406AFFE0: cmp     rax, [rbp+0E8h]
 * 00000001406AFFE7: jnb     short loc_1406B0002
 * 00000001406AFFE9: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001406AFFF0: cmp     rax, [rbp+0E8h]
 * 00000001406AFFF7: jb      short loc_1406B0002
 * 00000001406AFFF9: lea     rcx, [rbp-80h]
 * 00000001406AFFFD: call    KiCheckForSListAddress
 * 00000001406B0002: xor     esi, esi
 * 00000001406B0004: inc     dword ptr gs:87C0h
 * 00000001406B000C: jmp     KiVmbusInterruptDispatch
 */
