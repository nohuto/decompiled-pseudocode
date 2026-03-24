/*
 * XREFs of KiVmbusInterrupt2 @ 0x1406B0390
 * Callers:
 *     KiVmbusInterrupt2Shadow @ 0x140BBC140 (KiVmbusInterrupt2Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1404038C0 (KiCheckForSListAddress.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14041B1F0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404FBC90 (KiSaveDebugRegisterState.c)
 *     KeWakeProcessor @ 0x1405BCCD0 (KeWakeProcessor.c)
 *     KiVmbusInterrupt2 @ 0x1406B0390 (KiVmbusInterrupt2.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406BF740 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt2 @ 0x1406B0390
 * Reason: Hex-Rays returned no pseudocode for 0x1406B0390
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B0390: push    3
 * 00000001406B0392: push    rbp
 * 00000001406B0393: push    rsi
 * 00000001406B0394: sub     rsp, 150h
 * 00000001406B039B: lea     rbp, [rsp+168h+var_E8]
 * 00000001406B03A3: mov     byte ptr [rbp-55h], 0
 * 00000001406B03A7: mov     [rbp-50h], rax
 * 00000001406B03AB: mov     [rbp-48h], rcx
 * 00000001406B03AF: mov     [rbp-40h], rdx
 * 00000001406B03B3: mov     [rbp-38h], r8
 * 00000001406B03B7: mov     [rbp-30h], r9
 * 00000001406B03BB: mov     [rbp-28h], r10
 * 00000001406B03BF: mov     [rbp-20h], r11
 * 00000001406B03C3: test    byte ptr [rbp+0F0h], 1
 * 00000001406B03CA: jnz     short loc_1406B0404
 * 00000001406B03CC: xor     edx, edx
 * 00000001406B03CE: rdsspq  rdx
 * 00000001406B03D3: mov     [rbp+58h], rdx
 * 00000001406B03D7: lfence
 * 00000001406B03DA: test    byte ptr gs:858h, 1
 * 00000001406B03E3: jnz     short loc_1406B03ED
 * 00000001406B03E5: lfence
 * 00000001406B03E8: jmp     loc_1406B0675
 * 00000001406B03ED: movzx   eax, word ptr gs:866h
 * 00000001406B03F6: mov     ecx, 48h ; 'H'
 * 00000001406B03FB: xor     edx, edx
 * 00000001406B03FD: wrmsr
 * 00000001406B03FF: jmp     loc_1406B0675
 * 00000001406B0404: test    cs:KiKvaShadow, 1
 * 00000001406B040B: jnz     short loc_1406B0410
 * 00000001406B040D: swapgs
 * 00000001406B0410: lfence
 * 00000001406B0413: mov     rcx, gs:9D28h
 * 00000001406B041C: test    rcx, rcx
 * 00000001406B041F: jz      short loc_1406B0440
 * 00000001406B0421: rdsspq  rdx
 * 00000001406B0426: mov     r10, gs:9D20h
 * 00000001406B042F: add     r10, 8
 * 00000001406B0433: cmp     rdx, r10
 * 00000001406B0436: jnz     short loc_1406B0440
 * 00000001406B0438: rstorssp qword ptr [rcx]
 * 00000001406B043C: saveprevssp
 * 00000001406B0440: mov     r10, gs:188h
 * 00000001406B0449: mov     rcx, gs:188h
 * 00000001406B0452: mov     rcx, [rcx+220h]
 * 00000001406B0459: mov     rcx, [rcx+760h]
 * 00000001406B0460: mov     gs:850h, rcx
 * 00000001406B0469: mov     cx, gs:862h
 * 00000001406B0472: mov     gs:864h, cx
 * 00000001406B047B: mov     cl, gs:858h
 * 00000001406B0483: mov     gs:85Ah, cl
 * 00000001406B048B: movzx   eax, word ptr gs:868h
 * 00000001406B0494: cmp     gs:866h, ax
 * 00000001406B049D: jz      short loc_1406B04B1
 * 00000001406B049F: mov     gs:866h, ax
 * 00000001406B04A8: mov     ecx, 48h ; 'H'
 * 00000001406B04AD: xor     edx, edx
 * 00000001406B04AF: wrmsr
 * 00000001406B04B1: movzx   edx, byte ptr gs:858h
 * 00000001406B04BA: test    edx, 8
 * 00000001406B04C0: jz      short loc_1406B04D9
 * 00000001406B04C2: mov     eax, 1
 * 00000001406B04C7: xor     edx, edx
 * 00000001406B04C9: mov     ecx, 49h ; 'I'
 * 00000001406B04CE: wrmsr
 * 00000001406B04D0: movzx   edx, byte ptr gs:858h
 * 00000001406B04D9: test    edx, 2
 * 00000001406B04DF: jz      loc_1406B061C
 * 00000001406B04E5: call    loc_1406B05F8
 * 00000001406B04EA: add     rsp, 8
 * 00000001406B04EE: call    loc_1406B0601
 * 00000001406B04F3: add     rsp, 8
 * 00000001406B04F7: call    loc_1406B04EA
 * 00000001406B04FC: add     rsp, 8
 * 00000001406B0500: call    loc_1406B04F3
 * 00000001406B0505: add     rsp, 8
 * 00000001406B0509: call    loc_1406B04FC
 * 00000001406B050E: add     rsp, 8
 * 00000001406B0512: call    loc_1406B0505
 * 00000001406B0517: add     rsp, 8
 * 00000001406B051B: call    loc_1406B050E
 * 00000001406B0520: add     rsp, 8
 * 00000001406B0524: call    loc_1406B0517
 * 00000001406B0529: add     rsp, 8
 * 00000001406B052D: call    loc_1406B0520
 * 00000001406B0532: add     rsp, 8
 * 00000001406B0536: call    loc_1406B0529
 * 00000001406B053B: add     rsp, 8
 * 00000001406B053F: call    loc_1406B0532
 * 00000001406B0544: add     rsp, 8
 * 00000001406B0548: call    loc_1406B053B
 * 00000001406B054D: add     rsp, 8
 * 00000001406B0551: call    loc_1406B0544
 * 00000001406B0556: add     rsp, 8
 * 00000001406B055A: call    loc_1406B054D
 * 00000001406B055F: add     rsp, 8
 * 00000001406B0563: call    loc_1406B0556
 * 00000001406B0568: add     rsp, 8
 * 00000001406B056C: call    loc_1406B055F
 * 00000001406B0571: add     rsp, 8
 * 00000001406B0575: call    loc_1406B0568
 * 00000001406B057A: add     rsp, 8
 * 00000001406B057E: call    loc_1406B0571
 * 00000001406B0583: add     rsp, 8
 * 00000001406B0587: call    loc_1406B057A
 * 00000001406B058C: add     rsp, 8
 * 00000001406B0590: call    loc_1406B0583
 * 00000001406B0595: add     rsp, 8
 * 00000001406B0599: call    loc_1406B058C
 * 00000001406B059E: add     rsp, 8
 * 00000001406B05A2: call    loc_1406B0595
 * 00000001406B05A7: add     rsp, 8
 * 00000001406B05AB: call    loc_1406B059E
 * 00000001406B05B0: add     rsp, 8
 * 00000001406B05B4: call    loc_1406B05A7
 * 00000001406B05B9: add     rsp, 8
 * 00000001406B05BD: call    loc_1406B05B0
 * 00000001406B05C2: add     rsp, 8
 * 00000001406B05C6: call    loc_1406B05B9
 * 00000001406B05CB: add     rsp, 8
 * 00000001406B05CF: call    loc_1406B05C2
 * 00000001406B05D4: add     rsp, 8
 * 00000001406B05D8: call    loc_1406B05CB
 * 00000001406B05DD: add     rsp, 8
 * 00000001406B05E1: call    loc_1406B05D4
 * 00000001406B05E6: add     rsp, 8
 * 00000001406B05EA: call    loc_1406B05DD
 * 00000001406B05EF: add     rsp, 8
 * 00000001406B05F3: call    loc_1406B05E6
 * 00000001406B05F8: add     rsp, 8
 * 00000001406B05FC: call    loc_1406B05EF
 * 00000001406B0601: add     rsp, 8
 * 00000001406B0605: mov     eax, 0DADAh
 * 00000001406B060A: test    byte ptr gs:85Ch, 8
 * 00000001406B0613: jz      short loc_1406B061C
 * 00000001406B0615: mov     al, 20h ; ' '
 * 00000001406B0617: incsspq rax
 * 00000001406B061C: test    edx, 80h
 * 00000001406B0622: jz      short loc_1406B062C
 * 00000001406B0624: lfence
 * 00000001406B0627: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406B062C: lfence
 * 00000001406B062F: mov     byte ptr gs:85Eh, 0
 * 00000001406B0638: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406B063F: jz      short loc_1406B0660
 * 00000001406B0641: mov     ecx, 6A7h
 * 00000001406B0646: rdmsr
 * 00000001406B0648: cmp     edx, 0
 * 00000001406B064B: jz      short loc_1406B0660
 * 00000001406B064D: mov     ecx, edx
 * 00000001406B064F: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406B0655: cmp     edx, ecx
 * 00000001406B0657: jz      short loc_1406B0660
 * 00000001406B0659: mov     ecx, 6A7h
 * 00000001406B065E: wrmsr
 * 00000001406B0660: test    byte ptr [r10+3], 3
 * 00000001406B0665: mov     word ptr [rbp+80h], 0
 * 00000001406B066E: jz      short loc_1406B0675
 * 00000001406B0670: call    KiSaveDebugRegisterState
 * 00000001406B0675: cld
 * 00000001406B0676: stmxcsr dword ptr [rbp-54h]
 * 00000001406B067A: ldmxcsr dword ptr gs:180h
 * 00000001406B0683: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001406B0687: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001406B068B: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001406B068F: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001406B0693: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001406B0697: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001406B069B: test    byte ptr [rbp+0F0h], 1
 * 00000001406B06A2: jz      short loc_1406B06A9
 * 00000001406B06A4: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406B06A9: cmp     byte ptr gs:87DAh, 0
 * 00000001406B06B2: jz      short loc_1406B06B9
 * 00000001406B06B4: call    KeWakeProcessor
 * 00000001406B06B9: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001406B06C0: cmp     rax, [rbp+0E8h]
 * 00000001406B06C7: jnb     short loc_1406B06E2
 * 00000001406B06C9: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001406B06D0: cmp     rax, [rbp+0E8h]
 * 00000001406B06D7: jb      short loc_1406B06E2
 * 00000001406B06D9: lea     rcx, [rbp-80h]
 * 00000001406B06DD: call    KiCheckForSListAddress
 * 00000001406B06E2: xor     esi, esi
 * 00000001406B06E4: inc     dword ptr gs:87C0h
 * 00000001406B06EC: jmp     KiVmbusInterruptDispatch
 */
