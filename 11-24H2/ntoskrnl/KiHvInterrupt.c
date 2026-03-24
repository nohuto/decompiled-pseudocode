/*
 * XREFs of KiHvInterrupt @ 0x1406AF940
 * Callers:
 *     KiHvInterruptShadow @ 0x140BBBFC0 (KiHvInterruptShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1404038C0 (KiCheckForSListAddress.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14041B1F0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404FBC90 (KiSaveDebugRegisterState.c)
 *     KeWakeProcessor @ 0x1405BCCD0 (KeWakeProcessor.c)
 *     KiHvInterrupt @ 0x1406AF940 (KiHvInterrupt.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406BF740 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiHvInterrupt @ 0x1406AF940
 * Reason: Hex-Rays returned no pseudocode for 0x1406AF940
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406AF940: push    0
 * 00000001406AF942: push    rbp
 * 00000001406AF943: push    rsi
 * 00000001406AF944: sub     rsp, 150h
 * 00000001406AF94B: lea     rbp, [rsp+168h+var_E8]
 * 00000001406AF953: mov     byte ptr [rbp-55h], 0
 * 00000001406AF957: mov     [rbp-50h], rax
 * 00000001406AF95B: mov     [rbp-48h], rcx
 * 00000001406AF95F: mov     [rbp-40h], rdx
 * 00000001406AF963: mov     [rbp-38h], r8
 * 00000001406AF967: mov     [rbp-30h], r9
 * 00000001406AF96B: mov     [rbp-28h], r10
 * 00000001406AF96F: mov     [rbp-20h], r11
 * 00000001406AF973: test    byte ptr [rbp+0F0h], 1
 * 00000001406AF97A: jnz     short loc_1406AF9B4
 * 00000001406AF97C: xor     edx, edx
 * 00000001406AF97E: rdsspq  rdx
 * 00000001406AF983: mov     [rbp+58h], rdx
 * 00000001406AF987: lfence
 * 00000001406AF98A: test    byte ptr gs:858h, 1
 * 00000001406AF993: jnz     short loc_1406AF99D
 * 00000001406AF995: lfence
 * 00000001406AF998: jmp     loc_1406AFC25
 * 00000001406AF99D: movzx   eax, word ptr gs:866h
 * 00000001406AF9A6: mov     ecx, 48h ; 'H'
 * 00000001406AF9AB: xor     edx, edx
 * 00000001406AF9AD: wrmsr
 * 00000001406AF9AF: jmp     loc_1406AFC25
 * 00000001406AF9B4: test    cs:KiKvaShadow, 1
 * 00000001406AF9BB: jnz     short loc_1406AF9C0
 * 00000001406AF9BD: swapgs
 * 00000001406AF9C0: lfence
 * 00000001406AF9C3: mov     rcx, gs:9D28h
 * 00000001406AF9CC: test    rcx, rcx
 * 00000001406AF9CF: jz      short loc_1406AF9F0
 * 00000001406AF9D1: rdsspq  rdx
 * 00000001406AF9D6: mov     r10, gs:9D20h
 * 00000001406AF9DF: add     r10, 8
 * 00000001406AF9E3: cmp     rdx, r10
 * 00000001406AF9E6: jnz     short loc_1406AF9F0
 * 00000001406AF9E8: rstorssp qword ptr [rcx]
 * 00000001406AF9EC: saveprevssp
 * 00000001406AF9F0: mov     r10, gs:188h
 * 00000001406AF9F9: mov     rcx, gs:188h
 * 00000001406AFA02: mov     rcx, [rcx+220h]
 * 00000001406AFA09: mov     rcx, [rcx+760h]
 * 00000001406AFA10: mov     gs:850h, rcx
 * 00000001406AFA19: mov     cx, gs:862h
 * 00000001406AFA22: mov     gs:864h, cx
 * 00000001406AFA2B: mov     cl, gs:858h
 * 00000001406AFA33: mov     gs:85Ah, cl
 * 00000001406AFA3B: movzx   eax, word ptr gs:868h
 * 00000001406AFA44: cmp     gs:866h, ax
 * 00000001406AFA4D: jz      short loc_1406AFA61
 * 00000001406AFA4F: mov     gs:866h, ax
 * 00000001406AFA58: mov     ecx, 48h ; 'H'
 * 00000001406AFA5D: xor     edx, edx
 * 00000001406AFA5F: wrmsr
 * 00000001406AFA61: movzx   edx, byte ptr gs:858h
 * 00000001406AFA6A: test    edx, 8
 * 00000001406AFA70: jz      short loc_1406AFA89
 * 00000001406AFA72: mov     eax, 1
 * 00000001406AFA77: xor     edx, edx
 * 00000001406AFA79: mov     ecx, 49h ; 'I'
 * 00000001406AFA7E: wrmsr
 * 00000001406AFA80: movzx   edx, byte ptr gs:858h
 * 00000001406AFA89: test    edx, 2
 * 00000001406AFA8F: jz      loc_1406AFBCC
 * 00000001406AFA95: call    loc_1406AFBA8
 * 00000001406AFA9A: add     rsp, 8
 * 00000001406AFA9E: call    loc_1406AFBB1
 * 00000001406AFAA3: add     rsp, 8
 * 00000001406AFAA7: call    loc_1406AFA9A
 * 00000001406AFAAC: add     rsp, 8
 * 00000001406AFAB0: call    loc_1406AFAA3
 * 00000001406AFAB5: add     rsp, 8
 * 00000001406AFAB9: call    loc_1406AFAAC
 * 00000001406AFABE: add     rsp, 8
 * 00000001406AFAC2: call    loc_1406AFAB5
 * 00000001406AFAC7: add     rsp, 8
 * 00000001406AFACB: call    loc_1406AFABE
 * 00000001406AFAD0: add     rsp, 8
 * 00000001406AFAD4: call    loc_1406AFAC7
 * 00000001406AFAD9: add     rsp, 8
 * 00000001406AFADD: call    loc_1406AFAD0
 * 00000001406AFAE2: add     rsp, 8
 * 00000001406AFAE6: call    loc_1406AFAD9
 * 00000001406AFAEB: add     rsp, 8
 * 00000001406AFAEF: call    loc_1406AFAE2
 * 00000001406AFAF4: add     rsp, 8
 * 00000001406AFAF8: call    loc_1406AFAEB
 * 00000001406AFAFD: add     rsp, 8
 * 00000001406AFB01: call    loc_1406AFAF4
 * 00000001406AFB06: add     rsp, 8
 * 00000001406AFB0A: call    loc_1406AFAFD
 * 00000001406AFB0F: add     rsp, 8
 * 00000001406AFB13: call    loc_1406AFB06
 * 00000001406AFB18: add     rsp, 8
 * 00000001406AFB1C: call    loc_1406AFB0F
 * 00000001406AFB21: add     rsp, 8
 * 00000001406AFB25: call    loc_1406AFB18
 * 00000001406AFB2A: add     rsp, 8
 * 00000001406AFB2E: call    loc_1406AFB21
 * 00000001406AFB33: add     rsp, 8
 * 00000001406AFB37: call    loc_1406AFB2A
 * 00000001406AFB3C: add     rsp, 8
 * 00000001406AFB40: call    loc_1406AFB33
 * 00000001406AFB45: add     rsp, 8
 * 00000001406AFB49: call    loc_1406AFB3C
 * 00000001406AFB4E: add     rsp, 8
 * 00000001406AFB52: call    loc_1406AFB45
 * 00000001406AFB57: add     rsp, 8
 * 00000001406AFB5B: call    loc_1406AFB4E
 * 00000001406AFB60: add     rsp, 8
 * 00000001406AFB64: call    loc_1406AFB57
 * 00000001406AFB69: add     rsp, 8
 * 00000001406AFB6D: call    loc_1406AFB60
 * 00000001406AFB72: add     rsp, 8
 * 00000001406AFB76: call    loc_1406AFB69
 * 00000001406AFB7B: add     rsp, 8
 * 00000001406AFB7F: call    loc_1406AFB72
 * 00000001406AFB84: add     rsp, 8
 * 00000001406AFB88: call    loc_1406AFB7B
 * 00000001406AFB8D: add     rsp, 8
 * 00000001406AFB91: call    loc_1406AFB84
 * 00000001406AFB96: add     rsp, 8
 * 00000001406AFB9A: call    loc_1406AFB8D
 * 00000001406AFB9F: add     rsp, 8
 * 00000001406AFBA3: call    loc_1406AFB96
 * 00000001406AFBA8: add     rsp, 8
 * 00000001406AFBAC: call    loc_1406AFB9F
 * 00000001406AFBB1: add     rsp, 8
 * 00000001406AFBB5: mov     eax, 0DADAh
 * 00000001406AFBBA: test    byte ptr gs:85Ch, 8
 * 00000001406AFBC3: jz      short loc_1406AFBCC
 * 00000001406AFBC5: mov     al, 20h ; ' '
 * 00000001406AFBC7: incsspq rax
 * 00000001406AFBCC: test    edx, 80h
 * 00000001406AFBD2: jz      short loc_1406AFBDC
 * 00000001406AFBD4: lfence
 * 00000001406AFBD7: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406AFBDC: lfence
 * 00000001406AFBDF: mov     byte ptr gs:85Eh, 0
 * 00000001406AFBE8: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406AFBEF: jz      short loc_1406AFC10
 * 00000001406AFBF1: mov     ecx, 6A7h
 * 00000001406AFBF6: rdmsr
 * 00000001406AFBF8: cmp     edx, 0
 * 00000001406AFBFB: jz      short loc_1406AFC10
 * 00000001406AFBFD: mov     ecx, edx
 * 00000001406AFBFF: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406AFC05: cmp     edx, ecx
 * 00000001406AFC07: jz      short loc_1406AFC10
 * 00000001406AFC09: mov     ecx, 6A7h
 * 00000001406AFC0E: wrmsr
 * 00000001406AFC10: test    byte ptr [r10+3], 3
 * 00000001406AFC15: mov     word ptr [rbp+80h], 0
 * 00000001406AFC1E: jz      short loc_1406AFC25
 * 00000001406AFC20: call    KiSaveDebugRegisterState
 * 00000001406AFC25: cld
 * 00000001406AFC26: stmxcsr dword ptr [rbp-54h]
 * 00000001406AFC2A: ldmxcsr dword ptr gs:180h
 * 00000001406AFC33: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001406AFC37: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001406AFC3B: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001406AFC3F: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001406AFC43: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001406AFC47: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001406AFC4B: test    byte ptr [rbp+0F0h], 1
 * 00000001406AFC52: jz      short loc_1406AFC59
 * 00000001406AFC54: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406AFC59: cmp     byte ptr gs:87DAh, 0
 * 00000001406AFC62: jz      short loc_1406AFC69
 * 00000001406AFC64: call    KeWakeProcessor
 * 00000001406AFC69: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001406AFC70: cmp     rax, [rbp+0E8h]
 * 00000001406AFC77: jnb     short loc_1406AFC92
 * 00000001406AFC79: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001406AFC80: cmp     rax, [rbp+0E8h]
 * 00000001406AFC87: jb      short loc_1406AFC92
 * 00000001406AFC89: lea     rcx, [rbp-80h]
 * 00000001406AFC8D: call    KiCheckForSListAddress
 * 00000001406AFC92: xor     esi, esi
 * 00000001406AFC94: inc     dword ptr gs:87C0h
 * 00000001406AFC9C: jmp     KiHvInterruptDispatch
 */
