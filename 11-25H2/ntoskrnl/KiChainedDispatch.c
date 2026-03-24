/*
 * XREFs of KiChainedDispatch @ 0x1406A14D0
 * Callers:
 *     <none>
 * Callees:
 *     KiEndInterruptCycleAccumulation @ 0x14028EFB0 (KiEndInterruptCycleAccumulation.c)
 *     KiUpdateStibpPairing @ 0x1403E3F50 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403EF6C0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     HalPerformEndOfInterrupt @ 0x14041A4A0 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1404F9500 (KiRestoreDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405B3940 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405BB410 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x14069FCF0 (KiRestoreSetContextState.c)
 *     KiChainedDispatch @ 0x1406A14D0 (KiChainedDispatch.c)
 *     KiScanInterruptObjectList @ 0x1406A18B0 (KiScanInterruptObjectList.c)
 *     KiInitiateUserApc @ 0x1406A4590 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1406A6F30 (KiDpcInterruptBypass.c)
 */

/*
 * Hex-Rays decompilation failed for KiChainedDispatch @ 0x1406A14D0
 * Reason: Hex-Rays returned no pseudocode for 0x1406A14D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406A14D0: mov     rcx, gs:9158h
 * 00000001406A14D9: mov     rax, rcx
 * 00000001406A14DC: mov     edx, cs:KeIsrStackSize
 * 00000001406A14E2: sub     rax, rdx
 * 00000001406A14E5: mov     rdx, rsp
 * 00000001406A14E8: cmp     rax, rsp
 * 00000001406A14EB: ja      short loc_1406A14F2
 * 00000001406A14ED: cmp     rsp, rcx
 * 00000001406A14F0: jb      short loc_1406A14FE
 * 00000001406A14F2: cmp     cs:KiBugCheckActive, 0
 * 00000001406A14F9: jnz     short loc_1406A14FE
 * 00000001406A14FB: mov     rsp, rcx
 * 00000001406A14FE: sub     rsp, 20h
 * 00000001406A1502: mov     [rsp+20h+var_10], rdx
 * 00000001406A1507: call    KiScanInterruptObjectList
 * 00000001406A150C: mov     rsp, [rsp+20h+var_10]
 * 00000001406A1511: mov     rcx, rsi
 * 00000001406A1514: call    HalPerformEndOfInterrupt
 * 00000001406A1519: mov     rcx, gs:20h
 * 00000001406A1522: movzx   edx, byte ptr [rbp-57h]
 * 00000001406A1526: call    KiEndInterruptCycleAccumulation
 * 00000001406A152B: test    al, al
 * 00000001406A152D: jz      short loc_1406A1534
 * 00000001406A152F: call    KiDpcInterruptBypass
 * 00000001406A1534: movzx   ecx, byte ptr [rbp-57h]
 * 00000001406A1538: cmp     cs:KiIrqlFlags, 0
 * 00000001406A153F: jz      short loc_1406A1548
 * 00000001406A1541: call    KzSetIrqlUnsafe
 * 00000001406A1546: jmp     short loc_1406A154C
 * 00000001406A1548: mov     cr8, rcx
 * 00000001406A154C: mov     rsi, [rbp+0D0h]
 * 00000001406A1553: test    byte ptr [rbp+0F0h], 1
 * 00000001406A155A: jz      loc_1406A1855
 * 00000001406A1560: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406A1567: jz      short loc_1406A156C
 * 00000001406A1569: stac
 * 00000001406A156C: mov     rcx, gs:188h
 * 00000001406A1575: test    byte ptr [rcx+0C2h], 3
 * 00000001406A157C: jz      short loc_1406A1599
 * 00000001406A157E: mov     ecx, 1
 * 00000001406A1583: mov     cr8, rcx
 * 00000001406A1587: sti
 * 00000001406A1588: call    KiInitiateUserApc
 * 00000001406A158D: cli
 * 00000001406A158E: mov     ecx, 0
 * 00000001406A1593: mov     cr8, rcx
 * 00000001406A1597: jmp     short loc_1406A156C
 * 00000001406A1599: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406A159E: test    eax, eax
 * 00000001406A15A0: mov     rax, [rbp-50h]
 * 00000001406A15A4: jnz     short loc_1406A156C
 * 00000001406A15A6: test    byte ptr gs:860h, 2
 * 00000001406A15AF: jz      short loc_1406A15B8
 * 00000001406A15B1: xor     ecx, ecx
 * 00000001406A15B3: call    KiUpdateStibpPairing
 * 00000001406A15B8: mov     rcx, gs:188h
 * 00000001406A15C1: test    dword ptr [rcx], 8000000h
 * 00000001406A15C7: jz      short loc_1406A15CE
 * 00000001406A15C9: call    KiRestoreSetContextState
 * 00000001406A15CE: mov     rcx, gs:188h
 * 00000001406A15D7: test    dword ptr [rcx], 10000h
 * 00000001406A15DD: jz      short loc_1406A15F3
 * 00000001406A15DF: test    byte ptr [rcx+2], 1
 * 00000001406A15E3: jz      short loc_1406A15F3
 * 00000001406A15E5: call    KiCopyCounters
 * 00000001406A15EA: mov     rcx, gs:188h
 * 00000001406A15F3: ldmxcsr dword ptr [rbp-54h]
 * 00000001406A15F7: cmp     word ptr [rbp+80h], 0
 * 00000001406A15FF: jz      short loc_1406A1606
 * 00000001406A1601: call    KiRestoreDebugRegisterState
 * 00000001406A1606: mov     rcx, gs:188h
 * 00000001406A160F: bt      dword ptr [rcx+74h], 16h
 * 00000001406A1614: jnb     short loc_1406A1640
 * 00000001406A1616: xor     ecx, ecx
 * 00000001406A1618: rdsspq  rcx
 * 00000001406A161D: mov     r8, gs:9D28h
 * 00000001406A1626: add     r8, 8
 * 00000001406A162A: cmp     rcx, r8
 * 00000001406A162D: jnz     short loc_1406A1640
 * 00000001406A162F: mov     rcx, gs:9D20h
 * 00000001406A1638: rstorssp qword ptr [rcx]
 * 00000001406A163C: saveprevssp
 * 00000001406A1640: mov     byte ptr gs:85Eh, 0
 * 00000001406A1649: movzx   eax, word ptr gs:86Ch
 * 00000001406A1652: cmp     gs:866h, ax
 * 00000001406A165B: jz      short loc_1406A166F
 * 00000001406A165D: mov     gs:866h, ax
 * 00000001406A1666: mov     ecx, 48h ; 'H'
 * 00000001406A166B: xor     edx, edx
 * 00000001406A166D: wrmsr
 * 00000001406A166F: btr     word ptr gs:858h, 2
 * 00000001406A167A: jnb     short loc_1406A168A
 * 00000001406A167C: mov     eax, 1
 * 00000001406A1681: xor     edx, edx
 * 00000001406A1683: mov     ecx, 49h ; 'I'
 * 00000001406A1688: wrmsr
 * 00000001406A168A: btr     word ptr gs:858h, 5
 * 00000001406A1695: jnb     loc_1406A17D2
 * 00000001406A169B: call    loc_1406A17AE
 * 00000001406A16A0: add     rsp, 8
 * 00000001406A16A4: call    loc_1406A17B7
 * 00000001406A16A9: add     rsp, 8
 * 00000001406A16AD: call    loc_1406A16A0
 * 00000001406A16B2: add     rsp, 8
 * 00000001406A16B6: call    loc_1406A16A9
 * 00000001406A16BB: add     rsp, 8
 * 00000001406A16BF: call    loc_1406A16B2
 * 00000001406A16C4: add     rsp, 8
 * 00000001406A16C8: call    loc_1406A16BB
 * 00000001406A16CD: add     rsp, 8
 * 00000001406A16D1: call    loc_1406A16C4
 * 00000001406A16D6: add     rsp, 8
 * 00000001406A16DA: call    loc_1406A16CD
 * 00000001406A16DF: add     rsp, 8
 * 00000001406A16E3: call    loc_1406A16D6
 * 00000001406A16E8: add     rsp, 8
 * 00000001406A16EC: call    loc_1406A16DF
 * 00000001406A16F1: add     rsp, 8
 * 00000001406A16F5: call    loc_1406A16E8
 * 00000001406A16FA: add     rsp, 8
 * 00000001406A16FE: call    loc_1406A16F1
 * 00000001406A1703: add     rsp, 8
 * 00000001406A1707: call    loc_1406A16FA
 * 00000001406A170C: add     rsp, 8
 * 00000001406A1710: call    loc_1406A1703
 * 00000001406A1715: add     rsp, 8
 * 00000001406A1719: call    loc_1406A170C
 * 00000001406A171E: add     rsp, 8
 * 00000001406A1722: call    loc_1406A1715
 * 00000001406A1727: add     rsp, 8
 * 00000001406A172B: call    loc_1406A171E
 * 00000001406A1730: add     rsp, 8
 * 00000001406A1734: call    loc_1406A1727
 * 00000001406A1739: add     rsp, 8
 * 00000001406A173D: call    loc_1406A1730
 * 00000001406A1742: add     rsp, 8
 * 00000001406A1746: call    loc_1406A1739
 * 00000001406A174B: add     rsp, 8
 * 00000001406A174F: call    loc_1406A1742
 * 00000001406A1754: add     rsp, 8
 * 00000001406A1758: call    loc_1406A174B
 * 00000001406A175D: add     rsp, 8
 * 00000001406A1761: call    loc_1406A1754
 * 00000001406A1766: add     rsp, 8
 * 00000001406A176A: call    loc_1406A175D
 * 00000001406A176F: add     rsp, 8
 * 00000001406A1773: call    loc_1406A1766
 * 00000001406A1778: add     rsp, 8
 * 00000001406A177C: call    loc_1406A176F
 * 00000001406A1781: add     rsp, 8
 * 00000001406A1785: call    loc_1406A1778
 * 00000001406A178A: add     rsp, 8
 * 00000001406A178E: call    loc_1406A1781
 * 00000001406A1793: add     rsp, 8
 * 00000001406A1797: call    loc_1406A178A
 * 00000001406A179C: add     rsp, 8
 * 00000001406A17A0: call    loc_1406A1793
 * 00000001406A17A5: add     rsp, 8
 * 00000001406A17A9: call    loc_1406A179C
 * 00000001406A17AE: add     rsp, 8
 * 00000001406A17B2: call    loc_1406A17A5
 * 00000001406A17B7: add     rsp, 8
 * 00000001406A17BB: mov     eax, 0DADAh
 * 00000001406A17C0: test    byte ptr gs:85Ch, 8
 * 00000001406A17C9: jz      short loc_1406A17D2
 * 00000001406A17CB: mov     al, 20h ; ' '
 * 00000001406A17CD: incsspq rax
 * 00000001406A17D2: test    word ptr gs:858h, 100h
 * 00000001406A17DD: jz      short loc_1406A17EB
 * 00000001406A17DF: xor     eax, eax
 * 00000001406A17E1: xor     edx, edx
 * 00000001406A17E3: mov     ecx, 1
 * 00000001406A17E8: div     rcx
 * 00000001406A17EB: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406A17EF: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406A17F3: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406A17F7: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406A17FB: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406A17FF: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406A1803: mov     r11, [rbp-20h]
 * 00000001406A1807: mov     r10, [rbp-28h]
 * 00000001406A180B: mov     r9, [rbp-30h]
 * 00000001406A180F: mov     r8, [rbp-38h]
 * 00000001406A1813: mov     rdx, [rbp-40h]
 * 00000001406A1817: mov     rcx, [rbp-48h]
 * 00000001406A181B: mov     rax, [rbp-50h]
 * 00000001406A181F: mov     rsp, rbp
 * 00000001406A1822: mov     rbp, [rbp+0D8h]
 * 00000001406A1829: add     rsp, 0E8h
 * 00000001406A1830: test    cs:KiKvaShadow, 1
 * 00000001406A1837: jz      short loc_1406A183E
 * 00000001406A1839: jmp     KiKernelExit
 * 00000001406A183E: test    word ptr gs:858h, 200h
 * 00000001406A1849: jz      short loc_1406A1850
 * 00000001406A184B: verw    [rsp-1C8h+arg_1E0]
 * 00000001406A1850: swapgs
 * 00000001406A1853: iretq
 * 00000001406A1855: ldmxcsr dword ptr [rbp-54h]
 * 00000001406A1859: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406A185D: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406A1861: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406A1865: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406A1869: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406A186D: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406A1871: mov     r11, [rbp-20h]
 * 00000001406A1875: mov     r10, [rbp-28h]
 * 00000001406A1879: mov     r9, [rbp-30h]
 * 00000001406A187D: mov     r8, [rbp-38h]
 * 00000001406A1881: mov     rdx, [rbp-40h]
 * 00000001406A1885: mov     rcx, [rbp-48h]
 * 00000001406A1889: mov     rax, [rbp-50h]
 * 00000001406A188D: mov     rsp, rbp
 * 00000001406A1890: mov     rbp, [rbp+0D8h]
 * 00000001406A1897: add     rsp, 0E8h
 * 00000001406A189E: iretq
 */
