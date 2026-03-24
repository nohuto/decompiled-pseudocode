/*
 * XREFs of KiSwInterrupt @ 0x1406B1390
 * Callers:
 *     KiSwInterruptShadow @ 0x140BBBCC0 (KiSwInterruptShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14025F5D0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiEndInterruptCycleAccumulation @ 0x14034A8A0 (KiEndInterruptCycleAccumulation.c)
 *     KiStartInterruptCycleAccumulation @ 0x14034C150 (KiStartInterruptCycleAccumulation.c)
 *     KiUpdateStibpPairing @ 0x1403EB760 (KiUpdateStibpPairing.c)
 *     KiCheckForSListAddress @ 0x1404038C0 (KiCheckForSListAddress.c)
 *     HalPerformEndOfInterrupt @ 0x140418370 (HalPerformEndOfInterrupt.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14041B1F0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x1404FBC10 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1404FBC90 (KiSaveDebugRegisterState.c)
 *     KiSwInterruptDispatch @ 0x1405088F0 (KiSwInterruptDispatch.c)
 *     KzSetIrqlUnsafe @ 0x1405B7800 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x1405BCCD0 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1405BF250 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x1406AAFC0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406AF860 (KiInitiateUserApc.c)
 *     KiSwInterrupt @ 0x1406B1390 (KiSwInterrupt.c)
 *     KiDpcInterruptBypass @ 0x1406B2200 (KiDpcInterruptBypass.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406BF740 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiSwInterrupt @ 0x1406B1390
 * Reason: Hex-Rays returned no pseudocode for 0x1406B1390
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B1390: sub     rsp, 8
 * 00000001406B1394: push    rbp
 * 00000001406B1395: push    rsi
 * 00000001406B1396: sub     rsp, 150h
 * 00000001406B139D: lea     rbp, [rsp+80h]
 * 00000001406B13A5: mov     [rbp+0E8h+var_13D], 0
 * 00000001406B13A9: mov     [rbp+0E8h+var_138], rax
 * 00000001406B13AD: mov     [rbp+0E8h+var_130], rcx
 * 00000001406B13B1: mov     [rbp+0E8h+var_128], rdx
 * 00000001406B13B5: mov     [rbp+0E8h+var_120], r8
 * 00000001406B13B9: mov     [rbp+0E8h+var_118], r9
 * 00000001406B13BD: mov     [rbp+0E8h+var_110], r10
 * 00000001406B13C1: mov     [rbp+0E8h+var_108], r11
 * 00000001406B13C5: test    [rbp+0E8h+arg_0], 1
 * 00000001406B13CC: jnz     short loc_1406B1406
 * 00000001406B13CE: xor     edx, edx
 * 00000001406B13D0: rdsspq  rdx
 * 00000001406B13D5: mov     [rbp+0E8h+var_90], rdx
 * 00000001406B13D9: lfence
 * 00000001406B13DC: test    byte ptr gs:858h, 1
 * 00000001406B13E5: jnz     short loc_1406B13EF
 * 00000001406B13E7: lfence
 * 00000001406B13EA: jmp     loc_1406B1677
 * 00000001406B13EF: movzx   eax, word ptr gs:866h
 * 00000001406B13F8: mov     ecx, 48h ; 'H'
 * 00000001406B13FD: xor     edx, edx
 * 00000001406B13FF: wrmsr
 * 00000001406B1401: jmp     loc_1406B1677
 * 00000001406B1406: test    cs:KiKvaShadow, 1
 * 00000001406B140D: jnz     short loc_1406B1412
 * 00000001406B140F: swapgs
 * 00000001406B1412: lfence
 * 00000001406B1415: mov     rcx, gs:9D28h
 * 00000001406B141E: test    rcx, rcx
 * 00000001406B1421: jz      short loc_1406B1442
 * 00000001406B1423: rdsspq  rdx
 * 00000001406B1428: mov     r10, gs:9D20h
 * 00000001406B1431: add     r10, 8
 * 00000001406B1435: cmp     rdx, r10
 * 00000001406B1438: jnz     short loc_1406B1442
 * 00000001406B143A: rstorssp qword ptr [rcx]
 * 00000001406B143E: saveprevssp
 * 00000001406B1442: mov     r10, gs:188h
 * 00000001406B144B: mov     rcx, gs:188h
 * 00000001406B1454: mov     rcx, [rcx+220h]
 * 00000001406B145B: mov     rcx, [rcx+760h]
 * 00000001406B1462: mov     gs:850h, rcx
 * 00000001406B146B: mov     cx, gs:862h
 * 00000001406B1474: mov     gs:864h, cx
 * 00000001406B147D: mov     cl, gs:858h
 * 00000001406B1485: mov     gs:85Ah, cl
 * 00000001406B148D: movzx   eax, word ptr gs:868h
 * 00000001406B1496: cmp     gs:866h, ax
 * 00000001406B149F: jz      short loc_1406B14B3
 * 00000001406B14A1: mov     gs:866h, ax
 * 00000001406B14AA: mov     ecx, 48h ; 'H'
 * 00000001406B14AF: xor     edx, edx
 * 00000001406B14B1: wrmsr
 * 00000001406B14B3: movzx   edx, byte ptr gs:858h
 * 00000001406B14BC: test    edx, 8
 * 00000001406B14C2: jz      short loc_1406B14DB
 * 00000001406B14C4: mov     eax, 1
 * 00000001406B14C9: xor     edx, edx
 * 00000001406B14CB: mov     ecx, 49h ; 'I'
 * 00000001406B14D0: wrmsr
 * 00000001406B14D2: movzx   edx, byte ptr gs:858h
 * 00000001406B14DB: test    edx, 2
 * 00000001406B14E1: jz      loc_1406B161E
 * 00000001406B14E7: call    loc_1406B15FA
 * 00000001406B14EC: add     rsp, 8
 * 00000001406B14F0: call    loc_1406B1603
 * 00000001406B14F5: add     rsp, 8
 * 00000001406B14F9: call    loc_1406B14EC
 * 00000001406B14FE: add     rsp, 8
 * 00000001406B1502: call    loc_1406B14F5
 * 00000001406B1507: add     rsp, 8
 * 00000001406B150B: call    loc_1406B14FE
 * 00000001406B1510: add     rsp, 8
 * 00000001406B1514: call    loc_1406B1507
 * 00000001406B1519: add     rsp, 8
 * 00000001406B151D: call    loc_1406B1510
 * 00000001406B1522: add     rsp, 8
 * 00000001406B1526: call    loc_1406B1519
 * 00000001406B152B: add     rsp, 8
 * 00000001406B152F: call    loc_1406B1522
 * 00000001406B1534: add     rsp, 8
 * 00000001406B1538: call    loc_1406B152B
 * 00000001406B153D: add     rsp, 8
 * 00000001406B1541: call    loc_1406B1534
 * 00000001406B1546: add     rsp, 8
 * 00000001406B154A: call    loc_1406B153D
 * 00000001406B154F: add     rsp, 8
 * 00000001406B1553: call    loc_1406B1546
 * 00000001406B1558: add     rsp, 8
 * 00000001406B155C: call    loc_1406B154F
 * 00000001406B1561: add     rsp, 8
 * 00000001406B1565: call    loc_1406B1558
 * 00000001406B156A: add     rsp, 8
 * 00000001406B156E: call    loc_1406B1561
 * 00000001406B1573: add     rsp, 8
 * 00000001406B1577: call    loc_1406B156A
 * 00000001406B157C: add     rsp, 8
 * 00000001406B1580: call    loc_1406B1573
 * 00000001406B1585: add     rsp, 8
 * 00000001406B1589: call    loc_1406B157C
 * 00000001406B158E: add     rsp, 8
 * 00000001406B1592: call    loc_1406B1585
 * 00000001406B1597: add     rsp, 8
 * 00000001406B159B: call    loc_1406B158E
 * 00000001406B15A0: add     rsp, 8
 * 00000001406B15A4: call    loc_1406B1597
 * 00000001406B15A9: add     rsp, 8
 * 00000001406B15AD: call    loc_1406B15A0
 * 00000001406B15B2: add     rsp, 8
 * 00000001406B15B6: call    loc_1406B15A9
 * 00000001406B15BB: add     rsp, 8
 * 00000001406B15BF: call    loc_1406B15B2
 * 00000001406B15C4: add     rsp, 8
 * 00000001406B15C8: call    loc_1406B15BB
 * 00000001406B15CD: add     rsp, 8
 * 00000001406B15D1: call    loc_1406B15C4
 * 00000001406B15D6: add     rsp, 8
 * 00000001406B15DA: call    loc_1406B15CD
 * 00000001406B15DF: add     rsp, 8
 * 00000001406B15E3: call    loc_1406B15D6
 * 00000001406B15E8: add     rsp, 8
 * 00000001406B15EC: call    loc_1406B15DF
 * 00000001406B15F1: add     rsp, 8
 * 00000001406B15F5: call    loc_1406B15E8
 * 00000001406B15FA: add     rsp, 8
 * 00000001406B15FE: call    loc_1406B15F1
 * 00000001406B1603: add     rsp, 8
 * 00000001406B1607: mov     eax, 0DADAh
 * 00000001406B160C: test    byte ptr gs:85Ch, 8
 * 00000001406B1615: jz      short loc_1406B161E
 * 00000001406B1617: mov     al, 20h ; ' '
 * 00000001406B1619: incsspq rax
 * 00000001406B161E: test    edx, 80h
 * 00000001406B1624: jz      short loc_1406B162E
 * 00000001406B1626: lfence
 * 00000001406B1629: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406B162E: lfence
 * 00000001406B1631: mov     byte ptr gs:85Eh, 0
 * 00000001406B163A: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406B1641: jz      short loc_1406B1662
 * 00000001406B1643: mov     ecx, 6A7h
 * 00000001406B1648: rdmsr
 * 00000001406B164A: cmp     edx, 0
 * 00000001406B164D: jz      short loc_1406B1662
 * 00000001406B164F: mov     ecx, edx
 * 00000001406B1651: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406B1657: cmp     edx, ecx
 * 00000001406B1659: jz      short loc_1406B1662
 * 00000001406B165B: mov     ecx, 6A7h
 * 00000001406B1660: wrmsr
 * 00000001406B1662: test    byte ptr [r10+3], 3
 * 00000001406B1667: mov     [rbp+0E8h+var_68], 0
 * 00000001406B1670: jz      short loc_1406B1677
 * 00000001406B1672: call    KiSaveDebugRegisterState
 * 00000001406B1677: cld
 * 00000001406B1678: stmxcsr [rbp+0E8h+var_13C]
 * 00000001406B167C: ldmxcsr dword ptr gs:180h
 * 00000001406B1685: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001406B1689: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001406B168D: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001406B1691: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001406B1695: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001406B1699: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001406B169D: test    [rbp+0E8h+arg_0], 1
 * 00000001406B16A4: jz      short loc_1406B16AB
 * 00000001406B16A6: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406B16AB: cmp     byte ptr gs:87DAh, 0
 * 00000001406B16B4: jz      short loc_1406B16BB
 * 00000001406B16B6: call    KeWakeProcessor
 * 00000001406B16BB: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001406B16C2: cmp     rax, [rbp+0E8h]
 * 00000001406B16C9: jnb     short loc_1406B16E4
 * 00000001406B16CB: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001406B16D2: cmp     rax, [rbp+0E8h]
 * 00000001406B16D9: jb      short loc_1406B16E4
 * 00000001406B16DB: lea     rcx, [rbp+0E8h+var_168]
 * 00000001406B16DF: call    KiCheckForSListAddress
 * 00000001406B16E4: xor     esi, esi
 * 00000001406B16E6: inc     dword ptr gs:87C0h
 * 00000001406B16EE: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B16F5: jz      short loc_1406B16FA
 * 00000001406B16F7: clac
 * 00000001406B16FA: mov     ecx, 2
 * 00000001406B16FF: cmp     cs:KiIrqlFlags, 0
 * 00000001406B1706: jz      short loc_1406B170F
 * 00000001406B1708: call    KzSetIrqlUnsafe
 * 00000001406B170D: jmp     short loc_1406B1717
 * 00000001406B170F: mov     rax, cr8
 * 00000001406B1713: mov     cr8, rcx
 * 00000001406B1717: mov     [rbp+0E8h+var_13F], al
 * 00000001406B171A: mov     rcx, gs:20h
 * 00000001406B1723: xor     edx, edx
 * 00000001406B1725: call    KiStartInterruptCycleAccumulation
 * 00000001406B172A: sti
 * 00000001406B172B: lea     rcx, [rbp+0E8h+var_168]
 * 00000001406B172F: call    KiSwInterruptDispatch
 * 00000001406B1734: cli
 * 00000001406B1735: mov     rcx, rsi
 * 00000001406B1738: call    HalPerformEndOfInterrupt
 * 00000001406B173D: mov     rcx, gs:20h
 * 00000001406B1746: movzx   edx, [rbp+0E8h+var_13F]
 * 00000001406B174A: call    KiEndInterruptCycleAccumulation
 * 00000001406B174F: test    al, al
 * 00000001406B1751: jz      short loc_1406B1758
 * 00000001406B1753: call    KiDpcInterruptBypass
 * 00000001406B1758: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001406B175C: cmp     cs:KiIrqlFlags, 0
 * 00000001406B1763: jz      short loc_1406B176C
 * 00000001406B1765: call    KzSetIrqlUnsafe
 * 00000001406B176A: jmp     short loc_1406B1770
 * 00000001406B176C: mov     cr8, rcx
 * 00000001406B1770: mov     rsi, [rbp+0E8h+var_18]
 * 00000001406B1777: cli
 * 00000001406B1778: test    [rbp+0E8h+arg_0], 1
 * 00000001406B177F: jz      loc_1406B1A7A
 * 00000001406B1785: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B178C: jz      short loc_1406B1791
 * 00000001406B178E: stac
 * 00000001406B1791: mov     rcx, gs:188h
 * 00000001406B179A: test    byte ptr [rcx+0C2h], 3
 * 00000001406B17A1: jz      short loc_1406B17BE
 * 00000001406B17A3: mov     ecx, 1
 * 00000001406B17A8: mov     cr8, rcx
 * 00000001406B17AC: sti
 * 00000001406B17AD: call    KiInitiateUserApc
 * 00000001406B17B2: cli
 * 00000001406B17B3: mov     ecx, 0
 * 00000001406B17B8: mov     cr8, rcx
 * 00000001406B17BC: jmp     short loc_1406B1791
 * 00000001406B17BE: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406B17C3: test    eax, eax
 * 00000001406B17C5: mov     rax, [rbp+0E8h+var_138]
 * 00000001406B17C9: jnz     short loc_1406B1791
 * 00000001406B17CB: test    byte ptr gs:860h, 2
 * 00000001406B17D4: jz      short loc_1406B17DD
 * 00000001406B17D6: xor     ecx, ecx
 * 00000001406B17D8: call    KiUpdateStibpPairing
 * 00000001406B17DD: mov     rcx, gs:188h
 * 00000001406B17E6: test    dword ptr [rcx], 8000000h
 * 00000001406B17EC: jz      short loc_1406B17F3
 * 00000001406B17EE: call    KiRestoreSetContextState
 * 00000001406B17F3: mov     rcx, gs:188h
 * 00000001406B17FC: test    dword ptr [rcx], 10000h
 * 00000001406B1802: jz      short loc_1406B1818
 * 00000001406B1804: test    byte ptr [rcx+2], 1
 * 00000001406B1808: jz      short loc_1406B1818
 * 00000001406B180A: call    KiCopyCounters
 * 00000001406B180F: mov     rcx, gs:188h
 * 00000001406B1818: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001406B181C: cmp     [rbp+0E8h+var_68], 0
 * 00000001406B1824: jz      short loc_1406B182B
 * 00000001406B1826: call    KiRestoreDebugRegisterState
 * 00000001406B182B: mov     rcx, gs:188h
 * 00000001406B1834: bt      dword ptr [rcx+74h], 16h
 * 00000001406B1839: jnb     short loc_1406B1865
 * 00000001406B183B: xor     ecx, ecx
 * 00000001406B183D: rdsspq  rcx
 * 00000001406B1842: mov     r8, gs:9D28h
 * 00000001406B184B: add     r8, 8
 * 00000001406B184F: cmp     rcx, r8
 * 00000001406B1852: jnz     short loc_1406B1865
 * 00000001406B1854: mov     rcx, gs:9D20h
 * 00000001406B185D: rstorssp qword ptr [rcx]
 * 00000001406B1861: saveprevssp
 * 00000001406B1865: mov     byte ptr gs:85Eh, 0
 * 00000001406B186E: movzx   eax, word ptr gs:86Ch
 * 00000001406B1877: cmp     gs:866h, ax
 * 00000001406B1880: jz      short loc_1406B1894
 * 00000001406B1882: mov     gs:866h, ax
 * 00000001406B188B: mov     ecx, 48h ; 'H'
 * 00000001406B1890: xor     edx, edx
 * 00000001406B1892: wrmsr
 * 00000001406B1894: btr     word ptr gs:858h, 2
 * 00000001406B189F: jnb     short loc_1406B18AF
 * 00000001406B18A1: mov     eax, 1
 * 00000001406B18A6: xor     edx, edx
 * 00000001406B18A8: mov     ecx, 49h ; 'I'
 * 00000001406B18AD: wrmsr
 * 00000001406B18AF: btr     word ptr gs:858h, 5
 * 00000001406B18BA: jnb     loc_1406B19F7
 * 00000001406B18C0: call    loc_1406B19D3
 * 00000001406B18C5: add     rsp, 8
 * 00000001406B18C9: call    loc_1406B19DC
 * 00000001406B18CE: add     rsp, 8
 * 00000001406B18D2: call    loc_1406B18C5
 * 00000001406B18D7: add     rsp, 8
 * 00000001406B18DB: call    loc_1406B18CE
 * 00000001406B18E0: add     rsp, 8
 * 00000001406B18E4: call    loc_1406B18D7
 * 00000001406B18E9: add     rsp, 8
 * 00000001406B18ED: call    loc_1406B18E0
 * 00000001406B18F2: add     rsp, 8
 * 00000001406B18F6: call    loc_1406B18E9
 * 00000001406B18FB: add     rsp, 8
 * 00000001406B18FF: call    loc_1406B18F2
 * 00000001406B1904: add     rsp, 8
 * 00000001406B1908: call    loc_1406B18FB
 * 00000001406B190D: add     rsp, 8
 * 00000001406B1911: call    loc_1406B1904
 * 00000001406B1916: add     rsp, 8
 * 00000001406B191A: call    loc_1406B190D
 * 00000001406B191F: add     rsp, 8
 * 00000001406B1923: call    loc_1406B1916
 * 00000001406B1928: add     rsp, 8
 * 00000001406B192C: call    loc_1406B191F
 * 00000001406B1931: add     rsp, 8
 * 00000001406B1935: call    loc_1406B1928
 * 00000001406B193A: add     rsp, 8
 * 00000001406B193E: call    loc_1406B1931
 * 00000001406B1943: add     rsp, 8
 * 00000001406B1947: call    loc_1406B193A
 * 00000001406B194C: add     rsp, 8
 * 00000001406B1950: call    loc_1406B1943
 * 00000001406B1955: add     rsp, 8
 * 00000001406B1959: call    loc_1406B194C
 * 00000001406B195E: add     rsp, 8
 * 00000001406B1962: call    loc_1406B1955
 * 00000001406B1967: add     rsp, 8
 * 00000001406B196B: call    loc_1406B195E
 * 00000001406B1970: add     rsp, 8
 * 00000001406B1974: call    loc_1406B1967
 * 00000001406B1979: add     rsp, 8
 * 00000001406B197D: call    loc_1406B1970
 * 00000001406B1982: add     rsp, 8
 * 00000001406B1986: call    loc_1406B1979
 * 00000001406B198B: add     rsp, 8
 * 00000001406B198F: call    loc_1406B1982
 * 00000001406B1994: add     rsp, 8
 * 00000001406B1998: call    loc_1406B198B
 * 00000001406B199D: add     rsp, 8
 * 00000001406B19A1: call    loc_1406B1994
 * 00000001406B19A6: add     rsp, 8
 * 00000001406B19AA: call    loc_1406B199D
 * 00000001406B19AF: add     rsp, 8
 * 00000001406B19B3: call    loc_1406B19A6
 * 00000001406B19B8: add     rsp, 8
 * 00000001406B19BC: call    loc_1406B19AF
 * 00000001406B19C1: add     rsp, 8
 * 00000001406B19C5: call    loc_1406B19B8
 * 00000001406B19CA: add     rsp, 8
 * 00000001406B19CE: call    loc_1406B19C1
 * 00000001406B19D3: add     rsp, 8
 * 00000001406B19D7: call    loc_1406B19CA
 * 00000001406B19DC: add     rsp, 8
 * 00000001406B19E0: mov     eax, 0DADAh
 * 00000001406B19E5: test    byte ptr gs:85Ch, 8
 * 00000001406B19EE: jz      short loc_1406B19F7
 * 00000001406B19F0: mov     al, 20h ; ' '
 * 00000001406B19F2: incsspq rax
 * 00000001406B19F7: test    word ptr gs:858h, 100h
 * 00000001406B1A02: jz      short loc_1406B1A10
 * 00000001406B1A04: xor     eax, eax
 * 00000001406B1A06: xor     edx, edx
 * 00000001406B1A08: mov     ecx, 1
 * 00000001406B1A0D: div     rcx
 * 00000001406B1A10: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001406B1A14: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001406B1A18: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001406B1A1C: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001406B1A20: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001406B1A24: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001406B1A28: mov     r11, [rbp+0E8h+var_108]
 * 00000001406B1A2C: mov     r10, [rbp+0E8h+var_110]
 * 00000001406B1A30: mov     r9, [rbp+0E8h+var_118]
 * 00000001406B1A34: mov     r8, [rbp+0E8h+var_120]
 * 00000001406B1A38: mov     rdx, [rbp+0E8h+var_128]
 * 00000001406B1A3C: mov     rcx, [rbp+0E8h+var_130]
 * 00000001406B1A40: mov     rax, [rbp+0E8h+var_138]
 * 00000001406B1A44: mov     rsp, rbp
 * 00000001406B1A47: mov     rbp, [rbp+0E8h+var_10]
 * 00000001406B1A4E: add     rsp, 0E8h
 * 00000001406B1A55: test    cs:KiKvaShadow, 1
 * 00000001406B1A5C: jz      short loc_1406B1A63
 * 00000001406B1A5E: jmp     KiKernelExit
 * 00000001406B1A63: test    word ptr gs:858h, 200h
 * 00000001406B1A6E: jz      short loc_1406B1A75
 * 00000001406B1A70: verw    [rsp+arg_18]
 * 00000001406B1A75: swapgs
 * 00000001406B1A78: iretq
 * 00000001406B1A7A: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001406B1A7E: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001406B1A82: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001406B1A86: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001406B1A8A: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001406B1A8E: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001406B1A92: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001406B1A96: mov     r11, [rbp+0E8h+var_108]
 * 00000001406B1A9A: mov     r10, [rbp+0E8h+var_110]
 * 00000001406B1A9E: mov     r9, [rbp+0E8h+var_118]
 * 00000001406B1AA2: mov     r8, [rbp+0E8h+var_120]
 * 00000001406B1AA6: mov     rdx, [rbp+0E8h+var_128]
 * 00000001406B1AAA: mov     rcx, [rbp+0E8h+var_130]
 * 00000001406B1AAE: mov     rax, [rbp+0E8h+var_138]
 * 00000001406B1AB2: mov     rsp, rbp
 * 00000001406B1AB5: mov     rbp, [rbp+0E8h+var_10]
 * 00000001406B1ABC: add     rsp, 0E8h
 * 00000001406B1AC3: iretq
 */
