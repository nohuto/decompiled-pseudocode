/*
 * XREFs of KiVmbusInterrupt2 @ 0x1406B1330
 * Callers:
 *     KiVmbusInterrupt2Shadow @ 0x140BBE140 (KiVmbusInterrupt2Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1403FE680 (KiCheckForSListAddress.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14040ED30 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404F9550 (KiSaveDebugRegisterState.c)
 *     KeWakeProcessor @ 0x1405BA300 (KeWakeProcessor.c)
 *     KiVmbusInterrupt2 @ 0x1406B1330 (KiVmbusInterrupt2.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406C0640 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt2 @ 0x1406B1330
 * Reason: Hex-Rays returned no pseudocode for 0x1406B1330
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B1330: push    3
 * 00000001406B1332: push    rbp
 * 00000001406B1333: push    rsi
 * 00000001406B1334: sub     rsp, 150h
 * 00000001406B133B: lea     rbp, [rsp+168h+var_E8]
 * 00000001406B1343: mov     byte ptr [rbp-55h], 0
 * 00000001406B1347: mov     [rbp-50h], rax
 * 00000001406B134B: mov     [rbp-48h], rcx
 * 00000001406B134F: mov     [rbp-40h], rdx
 * 00000001406B1353: mov     [rbp-38h], r8
 * 00000001406B1357: mov     [rbp-30h], r9
 * 00000001406B135B: mov     [rbp-28h], r10
 * 00000001406B135F: mov     [rbp-20h], r11
 * 00000001406B1363: test    byte ptr [rbp+0F0h], 1
 * 00000001406B136A: jnz     short loc_1406B13A4
 * 00000001406B136C: xor     edx, edx
 * 00000001406B136E: rdsspq  rdx
 * 00000001406B1373: mov     [rbp+58h], rdx
 * 00000001406B1377: lfence
 * 00000001406B137A: test    byte ptr gs:858h, 1
 * 00000001406B1383: jnz     short loc_1406B138D
 * 00000001406B1385: lfence
 * 00000001406B1388: jmp     loc_1406B1615
 * 00000001406B138D: movzx   eax, word ptr gs:866h
 * 00000001406B1396: mov     ecx, 48h ; 'H'
 * 00000001406B139B: xor     edx, edx
 * 00000001406B139D: wrmsr
 * 00000001406B139F: jmp     loc_1406B1615
 * 00000001406B13A4: test    cs:KiKvaShadow, 1
 * 00000001406B13AB: jnz     short loc_1406B13B0
 * 00000001406B13AD: swapgs
 * 00000001406B13B0: lfence
 * 00000001406B13B3: mov     rcx, gs:9D28h
 * 00000001406B13BC: test    rcx, rcx
 * 00000001406B13BF: jz      short loc_1406B13E0
 * 00000001406B13C1: rdsspq  rdx
 * 00000001406B13C6: mov     r10, gs:9D20h
 * 00000001406B13CF: add     r10, 8
 * 00000001406B13D3: cmp     rdx, r10
 * 00000001406B13D6: jnz     short loc_1406B13E0
 * 00000001406B13D8: rstorssp qword ptr [rcx]
 * 00000001406B13DC: saveprevssp
 * 00000001406B13E0: mov     r10, gs:188h
 * 00000001406B13E9: mov     rcx, gs:188h
 * 00000001406B13F2: mov     rcx, [rcx+220h]
 * 00000001406B13F9: mov     rcx, [rcx+760h]
 * 00000001406B1400: mov     gs:850h, rcx
 * 00000001406B1409: mov     cx, gs:862h
 * 00000001406B1412: mov     gs:864h, cx
 * 00000001406B141B: mov     cl, gs:858h
 * 00000001406B1423: mov     gs:85Ah, cl
 * 00000001406B142B: movzx   eax, word ptr gs:868h
 * 00000001406B1434: cmp     gs:866h, ax
 * 00000001406B143D: jz      short loc_1406B1451
 * 00000001406B143F: mov     gs:866h, ax
 * 00000001406B1448: mov     ecx, 48h ; 'H'
 * 00000001406B144D: xor     edx, edx
 * 00000001406B144F: wrmsr
 * 00000001406B1451: movzx   edx, byte ptr gs:858h
 * 00000001406B145A: test    edx, 8
 * 00000001406B1460: jz      short loc_1406B1479
 * 00000001406B1462: mov     eax, 1
 * 00000001406B1467: xor     edx, edx
 * 00000001406B1469: mov     ecx, 49h ; 'I'
 * 00000001406B146E: wrmsr
 * 00000001406B1470: movzx   edx, byte ptr gs:858h
 * 00000001406B1479: test    edx, 2
 * 00000001406B147F: jz      loc_1406B15BC
 * 00000001406B1485: call    loc_1406B1598
 * 00000001406B148A: add     rsp, 8
 * 00000001406B148E: call    loc_1406B15A1
 * 00000001406B1493: add     rsp, 8
 * 00000001406B1497: call    loc_1406B148A
 * 00000001406B149C: add     rsp, 8
 * 00000001406B14A0: call    loc_1406B1493
 * 00000001406B14A5: add     rsp, 8
 * 00000001406B14A9: call    loc_1406B149C
 * 00000001406B14AE: add     rsp, 8
 * 00000001406B14B2: call    loc_1406B14A5
 * 00000001406B14B7: add     rsp, 8
 * 00000001406B14BB: call    loc_1406B14AE
 * 00000001406B14C0: add     rsp, 8
 * 00000001406B14C4: call    loc_1406B14B7
 * 00000001406B14C9: add     rsp, 8
 * 00000001406B14CD: call    loc_1406B14C0
 * 00000001406B14D2: add     rsp, 8
 * 00000001406B14D6: call    loc_1406B14C9
 * 00000001406B14DB: add     rsp, 8
 * 00000001406B14DF: call    loc_1406B14D2
 * 00000001406B14E4: add     rsp, 8
 * 00000001406B14E8: call    loc_1406B14DB
 * 00000001406B14ED: add     rsp, 8
 * 00000001406B14F1: call    loc_1406B14E4
 * 00000001406B14F6: add     rsp, 8
 * 00000001406B14FA: call    loc_1406B14ED
 * 00000001406B14FF: add     rsp, 8
 * 00000001406B1503: call    loc_1406B14F6
 * 00000001406B1508: add     rsp, 8
 * 00000001406B150C: call    loc_1406B14FF
 * 00000001406B1511: add     rsp, 8
 * 00000001406B1515: call    loc_1406B1508
 * 00000001406B151A: add     rsp, 8
 * 00000001406B151E: call    loc_1406B1511
 * 00000001406B1523: add     rsp, 8
 * 00000001406B1527: call    loc_1406B151A
 * 00000001406B152C: add     rsp, 8
 * 00000001406B1530: call    loc_1406B1523
 * 00000001406B1535: add     rsp, 8
 * 00000001406B1539: call    loc_1406B152C
 * 00000001406B153E: add     rsp, 8
 * 00000001406B1542: call    loc_1406B1535
 * 00000001406B1547: add     rsp, 8
 * 00000001406B154B: call    loc_1406B153E
 * 00000001406B1550: add     rsp, 8
 * 00000001406B1554: call    loc_1406B1547
 * 00000001406B1559: add     rsp, 8
 * 00000001406B155D: call    loc_1406B1550
 * 00000001406B1562: add     rsp, 8
 * 00000001406B1566: call    loc_1406B1559
 * 00000001406B156B: add     rsp, 8
 * 00000001406B156F: call    loc_1406B1562
 * 00000001406B1574: add     rsp, 8
 * 00000001406B1578: call    loc_1406B156B
 * 00000001406B157D: add     rsp, 8
 * 00000001406B1581: call    loc_1406B1574
 * 00000001406B1586: add     rsp, 8
 * 00000001406B158A: call    loc_1406B157D
 * 00000001406B158F: add     rsp, 8
 * 00000001406B1593: call    loc_1406B1586
 * 00000001406B1598: add     rsp, 8
 * 00000001406B159C: call    loc_1406B158F
 * 00000001406B15A1: add     rsp, 8
 * 00000001406B15A5: mov     eax, 0DADAh
 * 00000001406B15AA: test    byte ptr gs:85Ch, 8
 * 00000001406B15B3: jz      short loc_1406B15BC
 * 00000001406B15B5: mov     al, 20h ; ' '
 * 00000001406B15B7: incsspq rax
 * 00000001406B15BC: test    edx, 80h
 * 00000001406B15C2: jz      short loc_1406B15CC
 * 00000001406B15C4: lfence
 * 00000001406B15C7: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406B15CC: lfence
 * 00000001406B15CF: mov     byte ptr gs:85Eh, 0
 * 00000001406B15D8: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406B15DF: jz      short loc_1406B1600
 * 00000001406B15E1: mov     ecx, 6A7h
 * 00000001406B15E6: rdmsr
 * 00000001406B15E8: cmp     edx, 0
 * 00000001406B15EB: jz      short loc_1406B1600
 * 00000001406B15ED: mov     ecx, edx
 * 00000001406B15EF: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406B15F5: cmp     edx, ecx
 * 00000001406B15F7: jz      short loc_1406B1600
 * 00000001406B15F9: mov     ecx, 6A7h
 * 00000001406B15FE: wrmsr
 * 00000001406B1600: test    byte ptr [r10+3], 3
 * 00000001406B1605: mov     word ptr [rbp+80h], 0
 * 00000001406B160E: jz      short loc_1406B1615
 * 00000001406B1610: call    KiSaveDebugRegisterState
 * 00000001406B1615: cld
 * 00000001406B1616: stmxcsr dword ptr [rbp-54h]
 * 00000001406B161A: ldmxcsr dword ptr gs:180h
 * 00000001406B1623: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001406B1627: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001406B162B: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001406B162F: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001406B1633: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001406B1637: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001406B163B: test    byte ptr [rbp+0F0h], 1
 * 00000001406B1642: jz      short loc_1406B1649
 * 00000001406B1644: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406B1649: cmp     byte ptr gs:87DAh, 0
 * 00000001406B1652: jz      short loc_1406B1659
 * 00000001406B1654: call    KeWakeProcessor
 * 00000001406B1659: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001406B1660: cmp     rax, [rbp+0E8h]
 * 00000001406B1667: jnb     short loc_1406B1682
 * 00000001406B1669: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001406B1670: cmp     rax, [rbp+0E8h]
 * 00000001406B1677: jb      short loc_1406B1682
 * 00000001406B1679: lea     rcx, [rbp-80h]
 * 00000001406B167D: call    KiCheckForSListAddress
 * 00000001406B1682: xor     esi, esi
 * 00000001406B1684: inc     dword ptr gs:87C0h
 * 00000001406B168C: jmp     KiVmbusInterruptDispatch
 */
