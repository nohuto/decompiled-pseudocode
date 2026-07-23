/*
 * XREFs of KiVmbusInterrupt3 @ 0x1406B16A0
 * Callers:
 *     KiVmbusInterrupt3Shadow @ 0x140BBE1C0 (KiVmbusInterrupt3Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1403FE680 (KiCheckForSListAddress.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14040ED30 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404F9550 (KiSaveDebugRegisterState.c)
 *     KeWakeProcessor @ 0x1405BA300 (KeWakeProcessor.c)
 *     KiVmbusInterrupt3 @ 0x1406B16A0 (KiVmbusInterrupt3.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406C0640 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt3 @ 0x1406B16A0
 * Reason: Hex-Rays returned no pseudocode for 0x1406B16A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B16A0: push    4
 * 00000001406B16A2: push    rbp
 * 00000001406B16A3: push    rsi
 * 00000001406B16A4: sub     rsp, 150h
 * 00000001406B16AB: lea     rbp, [rsp+168h+var_E8]
 * 00000001406B16B3: mov     byte ptr [rbp-55h], 0
 * 00000001406B16B7: mov     [rbp-50h], rax
 * 00000001406B16BB: mov     [rbp-48h], rcx
 * 00000001406B16BF: mov     [rbp-40h], rdx
 * 00000001406B16C3: mov     [rbp-38h], r8
 * 00000001406B16C7: mov     [rbp-30h], r9
 * 00000001406B16CB: mov     [rbp-28h], r10
 * 00000001406B16CF: mov     [rbp-20h], r11
 * 00000001406B16D3: test    byte ptr [rbp+0F0h], 1
 * 00000001406B16DA: jnz     short loc_1406B1714
 * 00000001406B16DC: xor     edx, edx
 * 00000001406B16DE: rdsspq  rdx
 * 00000001406B16E3: mov     [rbp+58h], rdx
 * 00000001406B16E7: lfence
 * 00000001406B16EA: test    byte ptr gs:858h, 1
 * 00000001406B16F3: jnz     short loc_1406B16FD
 * 00000001406B16F5: lfence
 * 00000001406B16F8: jmp     loc_1406B1985
 * 00000001406B16FD: movzx   eax, word ptr gs:866h
 * 00000001406B1706: mov     ecx, 48h ; 'H'
 * 00000001406B170B: xor     edx, edx
 * 00000001406B170D: wrmsr
 * 00000001406B170F: jmp     loc_1406B1985
 * 00000001406B1714: test    cs:KiKvaShadow, 1
 * 00000001406B171B: jnz     short loc_1406B1720
 * 00000001406B171D: swapgs
 * 00000001406B1720: lfence
 * 00000001406B1723: mov     rcx, gs:9D28h
 * 00000001406B172C: test    rcx, rcx
 * 00000001406B172F: jz      short loc_1406B1750
 * 00000001406B1731: rdsspq  rdx
 * 00000001406B1736: mov     r10, gs:9D20h
 * 00000001406B173F: add     r10, 8
 * 00000001406B1743: cmp     rdx, r10
 * 00000001406B1746: jnz     short loc_1406B1750
 * 00000001406B1748: rstorssp qword ptr [rcx]
 * 00000001406B174C: saveprevssp
 * 00000001406B1750: mov     r10, gs:188h
 * 00000001406B1759: mov     rcx, gs:188h
 * 00000001406B1762: mov     rcx, [rcx+220h]
 * 00000001406B1769: mov     rcx, [rcx+760h]
 * 00000001406B1770: mov     gs:850h, rcx
 * 00000001406B1779: mov     cx, gs:862h
 * 00000001406B1782: mov     gs:864h, cx
 * 00000001406B178B: mov     cl, gs:858h
 * 00000001406B1793: mov     gs:85Ah, cl
 * 00000001406B179B: movzx   eax, word ptr gs:868h
 * 00000001406B17A4: cmp     gs:866h, ax
 * 00000001406B17AD: jz      short loc_1406B17C1
 * 00000001406B17AF: mov     gs:866h, ax
 * 00000001406B17B8: mov     ecx, 48h ; 'H'
 * 00000001406B17BD: xor     edx, edx
 * 00000001406B17BF: wrmsr
 * 00000001406B17C1: movzx   edx, byte ptr gs:858h
 * 00000001406B17CA: test    edx, 8
 * 00000001406B17D0: jz      short loc_1406B17E9
 * 00000001406B17D2: mov     eax, 1
 * 00000001406B17D7: xor     edx, edx
 * 00000001406B17D9: mov     ecx, 49h ; 'I'
 * 00000001406B17DE: wrmsr
 * 00000001406B17E0: movzx   edx, byte ptr gs:858h
 * 00000001406B17E9: test    edx, 2
 * 00000001406B17EF: jz      loc_1406B192C
 * 00000001406B17F5: call    loc_1406B1908
 * 00000001406B17FA: add     rsp, 8
 * 00000001406B17FE: call    loc_1406B1911
 * 00000001406B1803: add     rsp, 8
 * 00000001406B1807: call    loc_1406B17FA
 * 00000001406B180C: add     rsp, 8
 * 00000001406B1810: call    loc_1406B1803
 * 00000001406B1815: add     rsp, 8
 * 00000001406B1819: call    loc_1406B180C
 * 00000001406B181E: add     rsp, 8
 * 00000001406B1822: call    loc_1406B1815
 * 00000001406B1827: add     rsp, 8
 * 00000001406B182B: call    loc_1406B181E
 * 00000001406B1830: add     rsp, 8
 * 00000001406B1834: call    loc_1406B1827
 * 00000001406B1839: add     rsp, 8
 * 00000001406B183D: call    loc_1406B1830
 * 00000001406B1842: add     rsp, 8
 * 00000001406B1846: call    loc_1406B1839
 * 00000001406B184B: add     rsp, 8
 * 00000001406B184F: call    loc_1406B1842
 * 00000001406B1854: add     rsp, 8
 * 00000001406B1858: call    loc_1406B184B
 * 00000001406B185D: add     rsp, 8
 * 00000001406B1861: call    loc_1406B1854
 * 00000001406B1866: add     rsp, 8
 * 00000001406B186A: call    loc_1406B185D
 * 00000001406B186F: add     rsp, 8
 * 00000001406B1873: call    loc_1406B1866
 * 00000001406B1878: add     rsp, 8
 * 00000001406B187C: call    loc_1406B186F
 * 00000001406B1881: add     rsp, 8
 * 00000001406B1885: call    loc_1406B1878
 * 00000001406B188A: add     rsp, 8
 * 00000001406B188E: call    loc_1406B1881
 * 00000001406B1893: add     rsp, 8
 * 00000001406B1897: call    loc_1406B188A
 * 00000001406B189C: add     rsp, 8
 * 00000001406B18A0: call    loc_1406B1893
 * 00000001406B18A5: add     rsp, 8
 * 00000001406B18A9: call    loc_1406B189C
 * 00000001406B18AE: add     rsp, 8
 * 00000001406B18B2: call    loc_1406B18A5
 * 00000001406B18B7: add     rsp, 8
 * 00000001406B18BB: call    loc_1406B18AE
 * 00000001406B18C0: add     rsp, 8
 * 00000001406B18C4: call    loc_1406B18B7
 * 00000001406B18C9: add     rsp, 8
 * 00000001406B18CD: call    loc_1406B18C0
 * 00000001406B18D2: add     rsp, 8
 * 00000001406B18D6: call    loc_1406B18C9
 * 00000001406B18DB: add     rsp, 8
 * 00000001406B18DF: call    loc_1406B18D2
 * 00000001406B18E4: add     rsp, 8
 * 00000001406B18E8: call    loc_1406B18DB
 * 00000001406B18ED: add     rsp, 8
 * 00000001406B18F1: call    loc_1406B18E4
 * 00000001406B18F6: add     rsp, 8
 * 00000001406B18FA: call    loc_1406B18ED
 * 00000001406B18FF: add     rsp, 8
 * 00000001406B1903: call    loc_1406B18F6
 * 00000001406B1908: add     rsp, 8
 * 00000001406B190C: call    loc_1406B18FF
 * 00000001406B1911: add     rsp, 8
 * 00000001406B1915: mov     eax, 0DADAh
 * 00000001406B191A: test    byte ptr gs:85Ch, 8
 * 00000001406B1923: jz      short loc_1406B192C
 * 00000001406B1925: mov     al, 20h ; ' '
 * 00000001406B1927: incsspq rax
 * 00000001406B192C: test    edx, 80h
 * 00000001406B1932: jz      short loc_1406B193C
 * 00000001406B1934: lfence
 * 00000001406B1937: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406B193C: lfence
 * 00000001406B193F: mov     byte ptr gs:85Eh, 0
 * 00000001406B1948: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406B194F: jz      short loc_1406B1970
 * 00000001406B1951: mov     ecx, 6A7h
 * 00000001406B1956: rdmsr
 * 00000001406B1958: cmp     edx, 0
 * 00000001406B195B: jz      short loc_1406B1970
 * 00000001406B195D: mov     ecx, edx
 * 00000001406B195F: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406B1965: cmp     edx, ecx
 * 00000001406B1967: jz      short loc_1406B1970
 * 00000001406B1969: mov     ecx, 6A7h
 * 00000001406B196E: wrmsr
 * 00000001406B1970: test    byte ptr [r10+3], 3
 * 00000001406B1975: mov     word ptr [rbp+80h], 0
 * 00000001406B197E: jz      short loc_1406B1985
 * 00000001406B1980: call    KiSaveDebugRegisterState
 * 00000001406B1985: cld
 * 00000001406B1986: stmxcsr dword ptr [rbp-54h]
 * 00000001406B198A: ldmxcsr dword ptr gs:180h
 * 00000001406B1993: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001406B1997: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001406B199B: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001406B199F: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001406B19A3: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001406B19A7: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001406B19AB: test    byte ptr [rbp+0F0h], 1
 * 00000001406B19B2: jz      short loc_1406B19B9
 * 00000001406B19B4: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406B19B9: cmp     byte ptr gs:87DAh, 0
 * 00000001406B19C2: jz      short loc_1406B19C9
 * 00000001406B19C4: call    KeWakeProcessor
 * 00000001406B19C9: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001406B19D0: cmp     rax, [rbp+0E8h]
 * 00000001406B19D7: jnb     short loc_1406B19F2
 * 00000001406B19D9: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001406B19E0: cmp     rax, [rbp+0E8h]
 * 00000001406B19E7: jb      short loc_1406B19F2
 * 00000001406B19E9: lea     rcx, [rbp-80h]
 * 00000001406B19ED: call    KiCheckForSListAddress
 * 00000001406B19F2: xor     esi, esi
 * 00000001406B19F4: inc     dword ptr gs:87C0h
 * 00000001406B19FC: jmp     KiVmbusInterruptDispatch
 */
