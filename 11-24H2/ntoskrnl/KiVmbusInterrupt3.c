/*
 * XREFs of KiVmbusInterrupt3 @ 0x1406B0700
 * Callers:
 *     KiVmbusInterrupt3Shadow @ 0x140BBC1C0 (KiVmbusInterrupt3Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1404038C0 (KiCheckForSListAddress.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14041B1F0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404FBC90 (KiSaveDebugRegisterState.c)
 *     KeWakeProcessor @ 0x1405BCCD0 (KeWakeProcessor.c)
 *     KiVmbusInterrupt3 @ 0x1406B0700 (KiVmbusInterrupt3.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406BF740 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt3 @ 0x1406B0700
 * Reason: Hex-Rays returned no pseudocode for 0x1406B0700
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B0700: push    4
 * 00000001406B0702: push    rbp
 * 00000001406B0703: push    rsi
 * 00000001406B0704: sub     rsp, 150h
 * 00000001406B070B: lea     rbp, [rsp+168h+var_E8]
 * 00000001406B0713: mov     byte ptr [rbp-55h], 0
 * 00000001406B0717: mov     [rbp-50h], rax
 * 00000001406B071B: mov     [rbp-48h], rcx
 * 00000001406B071F: mov     [rbp-40h], rdx
 * 00000001406B0723: mov     [rbp-38h], r8
 * 00000001406B0727: mov     [rbp-30h], r9
 * 00000001406B072B: mov     [rbp-28h], r10
 * 00000001406B072F: mov     [rbp-20h], r11
 * 00000001406B0733: test    byte ptr [rbp+0F0h], 1
 * 00000001406B073A: jnz     short loc_1406B0774
 * 00000001406B073C: xor     edx, edx
 * 00000001406B073E: rdsspq  rdx
 * 00000001406B0743: mov     [rbp+58h], rdx
 * 00000001406B0747: lfence
 * 00000001406B074A: test    byte ptr gs:858h, 1
 * 00000001406B0753: jnz     short loc_1406B075D
 * 00000001406B0755: lfence
 * 00000001406B0758: jmp     loc_1406B09E5
 * 00000001406B075D: movzx   eax, word ptr gs:866h
 * 00000001406B0766: mov     ecx, 48h ; 'H'
 * 00000001406B076B: xor     edx, edx
 * 00000001406B076D: wrmsr
 * 00000001406B076F: jmp     loc_1406B09E5
 * 00000001406B0774: test    cs:KiKvaShadow, 1
 * 00000001406B077B: jnz     short loc_1406B0780
 * 00000001406B077D: swapgs
 * 00000001406B0780: lfence
 * 00000001406B0783: mov     rcx, gs:9D28h
 * 00000001406B078C: test    rcx, rcx
 * 00000001406B078F: jz      short loc_1406B07B0
 * 00000001406B0791: rdsspq  rdx
 * 00000001406B0796: mov     r10, gs:9D20h
 * 00000001406B079F: add     r10, 8
 * 00000001406B07A3: cmp     rdx, r10
 * 00000001406B07A6: jnz     short loc_1406B07B0
 * 00000001406B07A8: rstorssp qword ptr [rcx]
 * 00000001406B07AC: saveprevssp
 * 00000001406B07B0: mov     r10, gs:188h
 * 00000001406B07B9: mov     rcx, gs:188h
 * 00000001406B07C2: mov     rcx, [rcx+220h]
 * 00000001406B07C9: mov     rcx, [rcx+760h]
 * 00000001406B07D0: mov     gs:850h, rcx
 * 00000001406B07D9: mov     cx, gs:862h
 * 00000001406B07E2: mov     gs:864h, cx
 * 00000001406B07EB: mov     cl, gs:858h
 * 00000001406B07F3: mov     gs:85Ah, cl
 * 00000001406B07FB: movzx   eax, word ptr gs:868h
 * 00000001406B0804: cmp     gs:866h, ax
 * 00000001406B080D: jz      short loc_1406B0821
 * 00000001406B080F: mov     gs:866h, ax
 * 00000001406B0818: mov     ecx, 48h ; 'H'
 * 00000001406B081D: xor     edx, edx
 * 00000001406B081F: wrmsr
 * 00000001406B0821: movzx   edx, byte ptr gs:858h
 * 00000001406B082A: test    edx, 8
 * 00000001406B0830: jz      short loc_1406B0849
 * 00000001406B0832: mov     eax, 1
 * 00000001406B0837: xor     edx, edx
 * 00000001406B0839: mov     ecx, 49h ; 'I'
 * 00000001406B083E: wrmsr
 * 00000001406B0840: movzx   edx, byte ptr gs:858h
 * 00000001406B0849: test    edx, 2
 * 00000001406B084F: jz      loc_1406B098C
 * 00000001406B0855: call    loc_1406B0968
 * 00000001406B085A: add     rsp, 8
 * 00000001406B085E: call    loc_1406B0971
 * 00000001406B0863: add     rsp, 8
 * 00000001406B0867: call    loc_1406B085A
 * 00000001406B086C: add     rsp, 8
 * 00000001406B0870: call    loc_1406B0863
 * 00000001406B0875: add     rsp, 8
 * 00000001406B0879: call    loc_1406B086C
 * 00000001406B087E: add     rsp, 8
 * 00000001406B0882: call    loc_1406B0875
 * 00000001406B0887: add     rsp, 8
 * 00000001406B088B: call    loc_1406B087E
 * 00000001406B0890: add     rsp, 8
 * 00000001406B0894: call    loc_1406B0887
 * 00000001406B0899: add     rsp, 8
 * 00000001406B089D: call    loc_1406B0890
 * 00000001406B08A2: add     rsp, 8
 * 00000001406B08A6: call    loc_1406B0899
 * 00000001406B08AB: add     rsp, 8
 * 00000001406B08AF: call    loc_1406B08A2
 * 00000001406B08B4: add     rsp, 8
 * 00000001406B08B8: call    loc_1406B08AB
 * 00000001406B08BD: add     rsp, 8
 * 00000001406B08C1: call    loc_1406B08B4
 * 00000001406B08C6: add     rsp, 8
 * 00000001406B08CA: call    loc_1406B08BD
 * 00000001406B08CF: add     rsp, 8
 * 00000001406B08D3: call    loc_1406B08C6
 * 00000001406B08D8: add     rsp, 8
 * 00000001406B08DC: call    loc_1406B08CF
 * 00000001406B08E1: add     rsp, 8
 * 00000001406B08E5: call    loc_1406B08D8
 * 00000001406B08EA: add     rsp, 8
 * 00000001406B08EE: call    loc_1406B08E1
 * 00000001406B08F3: add     rsp, 8
 * 00000001406B08F7: call    loc_1406B08EA
 * 00000001406B08FC: add     rsp, 8
 * 00000001406B0900: call    loc_1406B08F3
 * 00000001406B0905: add     rsp, 8
 * 00000001406B0909: call    loc_1406B08FC
 * 00000001406B090E: add     rsp, 8
 * 00000001406B0912: call    loc_1406B0905
 * 00000001406B0917: add     rsp, 8
 * 00000001406B091B: call    loc_1406B090E
 * 00000001406B0920: add     rsp, 8
 * 00000001406B0924: call    loc_1406B0917
 * 00000001406B0929: add     rsp, 8
 * 00000001406B092D: call    loc_1406B0920
 * 00000001406B0932: add     rsp, 8
 * 00000001406B0936: call    loc_1406B0929
 * 00000001406B093B: add     rsp, 8
 * 00000001406B093F: call    loc_1406B0932
 * 00000001406B0944: add     rsp, 8
 * 00000001406B0948: call    loc_1406B093B
 * 00000001406B094D: add     rsp, 8
 * 00000001406B0951: call    loc_1406B0944
 * 00000001406B0956: add     rsp, 8
 * 00000001406B095A: call    loc_1406B094D
 * 00000001406B095F: add     rsp, 8
 * 00000001406B0963: call    loc_1406B0956
 * 00000001406B0968: add     rsp, 8
 * 00000001406B096C: call    loc_1406B095F
 * 00000001406B0971: add     rsp, 8
 * 00000001406B0975: mov     eax, 0DADAh
 * 00000001406B097A: test    byte ptr gs:85Ch, 8
 * 00000001406B0983: jz      short loc_1406B098C
 * 00000001406B0985: mov     al, 20h ; ' '
 * 00000001406B0987: incsspq rax
 * 00000001406B098C: test    edx, 80h
 * 00000001406B0992: jz      short loc_1406B099C
 * 00000001406B0994: lfence
 * 00000001406B0997: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406B099C: lfence
 * 00000001406B099F: mov     byte ptr gs:85Eh, 0
 * 00000001406B09A8: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406B09AF: jz      short loc_1406B09D0
 * 00000001406B09B1: mov     ecx, 6A7h
 * 00000001406B09B6: rdmsr
 * 00000001406B09B8: cmp     edx, 0
 * 00000001406B09BB: jz      short loc_1406B09D0
 * 00000001406B09BD: mov     ecx, edx
 * 00000001406B09BF: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406B09C5: cmp     edx, ecx
 * 00000001406B09C7: jz      short loc_1406B09D0
 * 00000001406B09C9: mov     ecx, 6A7h
 * 00000001406B09CE: wrmsr
 * 00000001406B09D0: test    byte ptr [r10+3], 3
 * 00000001406B09D5: mov     word ptr [rbp+80h], 0
 * 00000001406B09DE: jz      short loc_1406B09E5
 * 00000001406B09E0: call    KiSaveDebugRegisterState
 * 00000001406B09E5: cld
 * 00000001406B09E6: stmxcsr dword ptr [rbp-54h]
 * 00000001406B09EA: ldmxcsr dword ptr gs:180h
 * 00000001406B09F3: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001406B09F7: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001406B09FB: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001406B09FF: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001406B0A03: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001406B0A07: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001406B0A0B: test    byte ptr [rbp+0F0h], 1
 * 00000001406B0A12: jz      short loc_1406B0A19
 * 00000001406B0A14: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406B0A19: cmp     byte ptr gs:87DAh, 0
 * 00000001406B0A22: jz      short loc_1406B0A29
 * 00000001406B0A24: call    KeWakeProcessor
 * 00000001406B0A29: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001406B0A30: cmp     rax, [rbp+0E8h]
 * 00000001406B0A37: jnb     short loc_1406B0A52
 * 00000001406B0A39: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001406B0A40: cmp     rax, [rbp+0E8h]
 * 00000001406B0A47: jb      short loc_1406B0A52
 * 00000001406B0A49: lea     rcx, [rbp-80h]
 * 00000001406B0A4D: call    KiCheckForSListAddress
 * 00000001406B0A52: xor     esi, esi
 * 00000001406B0A54: inc     dword ptr gs:87C0h
 * 00000001406B0A5C: jmp     KiVmbusInterruptDispatch
 */
