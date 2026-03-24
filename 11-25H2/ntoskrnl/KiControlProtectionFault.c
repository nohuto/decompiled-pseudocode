/*
 * XREFs of KiControlProtectionFault @ 0x1406B1140
 * Callers:
 *     KiControlProtectionFaultShadow @ 0x140BAABC0 (KiControlProtectionFaultShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1403E3F50 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403EF6C0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x140429DB0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiProcessControlProtection @ 0x14043E160 (KiProcessControlProtection.c)
 *     KiRestoreDebugRegisterState @ 0x1404F9500 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1404F9580 (KiSaveDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405BB410 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x14069FCF0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406A4590 (KiInitiateUserApc.c)
 *     KiControlProtectionFault @ 0x1406B1140 (KiControlProtectionFault.c)
 *     KiBugCheckDispatch @ 0x1406B3980 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x1406B3A00 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1406B3F40 (KiFastFailDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406B4440 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiControlProtectionFault @ 0x1406B1140
 * Reason: Hex-Rays returned no pseudocode for 0x1406B1140
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B1140: push    rbp
 * 00000001406B1141: sub     rsp, 158h
 * 00000001406B1148: lea     rbp, [rsp+80h]
 * 00000001406B1150: mov     [rbp+0D8h+var_12D], 1
 * 00000001406B1154: mov     [rbp+0D8h+var_128], rax
 * 00000001406B1158: mov     [rbp+0D8h+var_120], rcx
 * 00000001406B115C: mov     [rbp+0D8h+var_118], rdx
 * 00000001406B1160: mov     [rbp+0D8h+var_110], r8
 * 00000001406B1164: mov     [rbp+0D8h+var_108], r9
 * 00000001406B1168: mov     [rbp+0D8h+var_100], r10
 * 00000001406B116C: mov     [rbp+0D8h+var_F8], r11
 * 00000001406B1170: test    [rbp+0D8h+arg_8], 1
 * 00000001406B1177: jnz     short loc_1406B11B1
 * 00000001406B1179: xor     edx, edx
 * 00000001406B117B: rdsspq  rdx
 * 00000001406B1180: mov     [rbp+0D8h+var_80], rdx
 * 00000001406B1184: lfence
 * 00000001406B1187: test    byte ptr gs:858h, 1
 * 00000001406B1190: jnz     short loc_1406B119A
 * 00000001406B1192: lfence
 * 00000001406B1195: jmp     loc_1406B1422
 * 00000001406B119A: movzx   eax, word ptr gs:866h
 * 00000001406B11A3: mov     ecx, 48h ; 'H'
 * 00000001406B11A8: xor     edx, edx
 * 00000001406B11AA: wrmsr
 * 00000001406B11AC: jmp     loc_1406B1422
 * 00000001406B11B1: test    cs:KiKvaShadow, 1
 * 00000001406B11B8: jnz     short loc_1406B11BD
 * 00000001406B11BA: swapgs
 * 00000001406B11BD: lfence
 * 00000001406B11C0: mov     rcx, gs:9D28h
 * 00000001406B11C9: test    rcx, rcx
 * 00000001406B11CC: jz      short loc_1406B11ED
 * 00000001406B11CE: rdsspq  rdx
 * 00000001406B11D3: mov     r10, gs:9D20h
 * 00000001406B11DC: add     r10, 8
 * 00000001406B11E0: cmp     rdx, r10
 * 00000001406B11E3: jnz     short loc_1406B11ED
 * 00000001406B11E5: rstorssp qword ptr [rcx]
 * 00000001406B11E9: saveprevssp
 * 00000001406B11ED: mov     r10, gs:188h
 * 00000001406B11F6: mov     rcx, gs:188h
 * 00000001406B11FF: mov     rcx, [rcx+220h]
 * 00000001406B1206: mov     rcx, [rcx+760h]
 * 00000001406B120D: mov     gs:850h, rcx
 * 00000001406B1216: mov     cx, gs:862h
 * 00000001406B121F: mov     gs:864h, cx
 * 00000001406B1228: mov     cl, gs:858h
 * 00000001406B1230: mov     gs:85Ah, cl
 * 00000001406B1238: movzx   eax, word ptr gs:868h
 * 00000001406B1241: cmp     gs:866h, ax
 * 00000001406B124A: jz      short loc_1406B125E
 * 00000001406B124C: mov     gs:866h, ax
 * 00000001406B1255: mov     ecx, 48h ; 'H'
 * 00000001406B125A: xor     edx, edx
 * 00000001406B125C: wrmsr
 * 00000001406B125E: movzx   edx, byte ptr gs:858h
 * 00000001406B1267: test    edx, 8
 * 00000001406B126D: jz      short loc_1406B1286
 * 00000001406B126F: mov     eax, 1
 * 00000001406B1274: xor     edx, edx
 * 00000001406B1276: mov     ecx, 49h ; 'I'
 * 00000001406B127B: wrmsr
 * 00000001406B127D: movzx   edx, byte ptr gs:858h
 * 00000001406B1286: test    edx, 2
 * 00000001406B128C: jz      loc_1406B13C9
 * 00000001406B1292: call    loc_1406B13A5
 * 00000001406B1297: add     rsp, 8
 * 00000001406B129B: call    loc_1406B13AE
 * 00000001406B12A0: add     rsp, 8
 * 00000001406B12A4: call    loc_1406B1297
 * 00000001406B12A9: add     rsp, 8
 * 00000001406B12AD: call    loc_1406B12A0
 * 00000001406B12B2: add     rsp, 8
 * 00000001406B12B6: call    loc_1406B12A9
 * 00000001406B12BB: add     rsp, 8
 * 00000001406B12BF: call    loc_1406B12B2
 * 00000001406B12C4: add     rsp, 8
 * 00000001406B12C8: call    loc_1406B12BB
 * 00000001406B12CD: add     rsp, 8
 * 00000001406B12D1: call    loc_1406B12C4
 * 00000001406B12D6: add     rsp, 8
 * 00000001406B12DA: call    loc_1406B12CD
 * 00000001406B12DF: add     rsp, 8
 * 00000001406B12E3: call    loc_1406B12D6
 * 00000001406B12E8: add     rsp, 8
 * 00000001406B12EC: call    loc_1406B12DF
 * 00000001406B12F1: add     rsp, 8
 * 00000001406B12F5: call    loc_1406B12E8
 * 00000001406B12FA: add     rsp, 8
 * 00000001406B12FE: call    loc_1406B12F1
 * 00000001406B1303: add     rsp, 8
 * 00000001406B1307: call    loc_1406B12FA
 * 00000001406B130C: add     rsp, 8
 * 00000001406B1310: call    loc_1406B1303
 * 00000001406B1315: add     rsp, 8
 * 00000001406B1319: call    loc_1406B130C
 * 00000001406B131E: add     rsp, 8
 * 00000001406B1322: call    loc_1406B1315
 * 00000001406B1327: add     rsp, 8
 * 00000001406B132B: call    loc_1406B131E
 * 00000001406B1330: add     rsp, 8
 * 00000001406B1334: call    loc_1406B1327
 * 00000001406B1339: add     rsp, 8
 * 00000001406B133D: call    loc_1406B1330
 * 00000001406B1342: add     rsp, 8
 * 00000001406B1346: call    loc_1406B1339
 * 00000001406B134B: add     rsp, 8
 * 00000001406B134F: call    loc_1406B1342
 * 00000001406B1354: add     rsp, 8
 * 00000001406B1358: call    loc_1406B134B
 * 00000001406B135D: add     rsp, 8
 * 00000001406B1361: call    loc_1406B1354
 * 00000001406B1366: add     rsp, 8
 * 00000001406B136A: call    loc_1406B135D
 * 00000001406B136F: add     rsp, 8
 * 00000001406B1373: call    loc_1406B1366
 * 00000001406B1378: add     rsp, 8
 * 00000001406B137C: call    loc_1406B136F
 * 00000001406B1381: add     rsp, 8
 * 00000001406B1385: call    loc_1406B1378
 * 00000001406B138A: add     rsp, 8
 * 00000001406B138E: call    loc_1406B1381
 * 00000001406B1393: add     rsp, 8
 * 00000001406B1397: call    loc_1406B138A
 * 00000001406B139C: add     rsp, 8
 * 00000001406B13A0: call    loc_1406B1393
 * 00000001406B13A5: add     rsp, 8
 * 00000001406B13A9: call    loc_1406B139C
 * 00000001406B13AE: add     rsp, 8
 * 00000001406B13B2: mov     eax, 0DADAh
 * 00000001406B13B7: test    byte ptr gs:85Ch, 8
 * 00000001406B13C0: jz      short loc_1406B13C9
 * 00000001406B13C2: mov     al, 20h ; ' '
 * 00000001406B13C4: incsspq rax
 * 00000001406B13C9: test    edx, 80h
 * 00000001406B13CF: jz      short loc_1406B13D9
 * 00000001406B13D1: lfence
 * 00000001406B13D4: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406B13D9: lfence
 * 00000001406B13DC: mov     byte ptr gs:85Eh, 0
 * 00000001406B13E5: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406B13EC: jz      short loc_1406B140D
 * 00000001406B13EE: mov     ecx, 6A7h
 * 00000001406B13F3: rdmsr
 * 00000001406B13F5: cmp     edx, 0
 * 00000001406B13F8: jz      short loc_1406B140D
 * 00000001406B13FA: mov     ecx, edx
 * 00000001406B13FC: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406B1402: cmp     edx, ecx
 * 00000001406B1404: jz      short loc_1406B140D
 * 00000001406B1406: mov     ecx, 6A7h
 * 00000001406B140B: wrmsr
 * 00000001406B140D: test    byte ptr [r10+3], 3
 * 00000001406B1412: mov     [rbp+0D8h+var_58], 0
 * 00000001406B141B: jz      short loc_1406B1422
 * 00000001406B141D: call    KiSaveDebugRegisterState
 * 00000001406B1422: cld
 * 00000001406B1423: stmxcsr [rbp+0D8h+var_12C]
 * 00000001406B1427: ldmxcsr dword ptr gs:180h
 * 00000001406B1430: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001406B1434: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001406B1438: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001406B143C: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001406B1440: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001406B1444: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001406B1448: test    [rbp+0D8h+arg_8], 1
 * 00000001406B144F: jz      short loc_1406B1456
 * 00000001406B1451: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406B1456: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B145D: jz      short loc_1406B146B
 * 00000001406B145F: test    [rbp+0D8h+arg_8], 1
 * 00000001406B1466: jz      short loc_1406B146B
 * 00000001406B1468: stac
 * 00000001406B146B: mov     eax, [rbp+0E0h]
 * 00000001406B1471: test    [rbp+0D8h+arg_10], 200h
 * 00000001406B147B: jz      short loc_1406B147E
 * 00000001406B147D: sti
 * 00000001406B147E: test    byte ptr gs:9125h, 40h
 * 00000001406B1487: jz      loc_1406B1520
 * 00000001406B148D: lea     rcx, [rbp+0D8h+var_158]
 * 00000001406B1491: call    KiProcessControlProtection
 * 00000001406B1496: cmp     eax, 1
 * 00000001406B1499: jz      loc_1406B1543
 * 00000001406B149F: cmp     eax, 2
 * 00000001406B14A2: jz      short loc_1406B14AF
 * 00000001406B14A4: cmp     eax, 3
 * 00000001406B14A7: jz      loc_1406B152F
 * 00000001406B14AD: jmp     short loc_1406B1520
 * 00000001406B14AF: test    [rbp+0D8h+arg_8], 1
 * 00000001406B14B6: jz      short loc_1406B14FB
 * 00000001406B14B8: mov     ecx, 6A7h
 * 00000001406B14BD: rdmsr
 * 00000001406B14BF: shl     rdx, 20h
 * 00000001406B14C3: or      rax, rdx
 * 00000001406B14C6: mov     r10, rax
 * 00000001406B14C9: mov     rcx, gs:188h
 * 00000001406B14D2: mov     rcx, [rcx+220h]
 * 00000001406B14D9: mov     r11d, [rcx+754h]
 * 00000001406B14E0: and     r11d, 0C0F6C000h
 * 00000001406B14E7: mov     edx, cs:KiUserCetAppcompatOptions
 * 00000001406B14ED: shl     rdx, 20h
 * 00000001406B14F1: or      r11, rdx
 * 00000001406B14F4: mov     edx, 3
 * 00000001406B14F9: jmp     short loc_1406B1507
 * 00000001406B14FB: mov     edx, 2
 * 00000001406B1500: mov     r10, [rbp+0D8h+var_80]
 * 00000001406B1504: mov     r10, [r10]
 * 00000001406B1507: mov     r9, 39h ; '9'
 * 00000001406B150E: mov     ecx, 0C0000409h
 * 00000001406B1513: mov     r8, [rbp+0D8h+arg_0]
 * 00000001406B151A: call    KiFastFailDispatch
 * 00000001406B151F: nop
 * 00000001406B1520: mov     edx, 15h
 * 00000001406B1525: mov     ecx, 7Fh
 * 00000001406B152A: call    KiBugCheckDispatch
 * 00000001406B152F: mov     ecx, 80000033h
 * 00000001406B1534: xor     edx, edx
 * 00000001406B1536: mov     r8, [rbp+0D8h+arg_0]
 * 00000001406B153D: call    KiExceptionDispatch
 * 00000001406B1542: nop
 * 00000001406B1543: cli
 * 00000001406B1544: test    [rbp+0D8h+arg_8], 1
 * 00000001406B154B: jz      loc_1406B1846
 * 00000001406B1551: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B1558: jz      short loc_1406B155D
 * 00000001406B155A: stac
 * 00000001406B155D: mov     rcx, gs:188h
 * 00000001406B1566: test    byte ptr [rcx+0C2h], 3
 * 00000001406B156D: jz      short loc_1406B158A
 * 00000001406B156F: mov     ecx, 1
 * 00000001406B1574: mov     cr8, rcx
 * 00000001406B1578: sti
 * 00000001406B1579: call    KiInitiateUserApc
 * 00000001406B157E: cli
 * 00000001406B157F: mov     ecx, 0
 * 00000001406B1584: mov     cr8, rcx
 * 00000001406B1588: jmp     short loc_1406B155D
 * 00000001406B158A: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406B158F: test    eax, eax
 * 00000001406B1591: mov     rax, [rbp+0D8h+var_128]
 * 00000001406B1595: jnz     short loc_1406B155D
 * 00000001406B1597: test    byte ptr gs:860h, 2
 * 00000001406B15A0: jz      short loc_1406B15A9
 * 00000001406B15A2: xor     ecx, ecx
 * 00000001406B15A4: call    KiUpdateStibpPairing
 * 00000001406B15A9: mov     rcx, gs:188h
 * 00000001406B15B2: test    dword ptr [rcx], 8000000h
 * 00000001406B15B8: jz      short loc_1406B15BF
 * 00000001406B15BA: call    KiRestoreSetContextState
 * 00000001406B15BF: mov     rcx, gs:188h
 * 00000001406B15C8: test    dword ptr [rcx], 10000h
 * 00000001406B15CE: jz      short loc_1406B15E4
 * 00000001406B15D0: test    byte ptr [rcx+2], 1
 * 00000001406B15D4: jz      short loc_1406B15E4
 * 00000001406B15D6: call    KiCopyCounters
 * 00000001406B15DB: mov     rcx, gs:188h
 * 00000001406B15E4: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001406B15E8: cmp     [rbp+0D8h+var_58], 0
 * 00000001406B15F0: jz      short loc_1406B15F7
 * 00000001406B15F2: call    KiRestoreDebugRegisterState
 * 00000001406B15F7: mov     rcx, gs:188h
 * 00000001406B1600: bt      dword ptr [rcx+74h], 16h
 * 00000001406B1605: jnb     short loc_1406B1631
 * 00000001406B1607: xor     ecx, ecx
 * 00000001406B1609: rdsspq  rcx
 * 00000001406B160E: mov     r8, gs:9D28h
 * 00000001406B1617: add     r8, 8
 * 00000001406B161B: cmp     rcx, r8
 * 00000001406B161E: jnz     short loc_1406B1631
 * 00000001406B1620: mov     rcx, gs:9D20h
 * 00000001406B1629: rstorssp qword ptr [rcx]
 * 00000001406B162D: saveprevssp
 * 00000001406B1631: mov     byte ptr gs:85Eh, 0
 * 00000001406B163A: movzx   eax, word ptr gs:86Ch
 * 00000001406B1643: cmp     gs:866h, ax
 * 00000001406B164C: jz      short loc_1406B1660
 * 00000001406B164E: mov     gs:866h, ax
 * 00000001406B1657: mov     ecx, 48h ; 'H'
 * 00000001406B165C: xor     edx, edx
 * 00000001406B165E: wrmsr
 * 00000001406B1660: btr     word ptr gs:858h, 2
 * 00000001406B166B: jnb     short loc_1406B167B
 * 00000001406B166D: mov     eax, 1
 * 00000001406B1672: xor     edx, edx
 * 00000001406B1674: mov     ecx, 49h ; 'I'
 * 00000001406B1679: wrmsr
 * 00000001406B167B: btr     word ptr gs:858h, 5
 * 00000001406B1686: jnb     loc_1406B17C3
 * 00000001406B168C: call    loc_1406B179F
 * 00000001406B1691: add     rsp, 8
 * 00000001406B1695: call    loc_1406B17A8
 * 00000001406B169A: add     rsp, 8
 * 00000001406B169E: call    loc_1406B1691
 * 00000001406B16A3: add     rsp, 8
 * 00000001406B16A7: call    loc_1406B169A
 * 00000001406B16AC: add     rsp, 8
 * 00000001406B16B0: call    loc_1406B16A3
 * 00000001406B16B5: add     rsp, 8
 * 00000001406B16B9: call    loc_1406B16AC
 * 00000001406B16BE: add     rsp, 8
 * 00000001406B16C2: call    loc_1406B16B5
 * 00000001406B16C7: add     rsp, 8
 * 00000001406B16CB: call    loc_1406B16BE
 * 00000001406B16D0: add     rsp, 8
 * 00000001406B16D4: call    loc_1406B16C7
 * 00000001406B16D9: add     rsp, 8
 * 00000001406B16DD: call    loc_1406B16D0
 * 00000001406B16E2: add     rsp, 8
 * 00000001406B16E6: call    loc_1406B16D9
 * 00000001406B16EB: add     rsp, 8
 * 00000001406B16EF: call    loc_1406B16E2
 * 00000001406B16F4: add     rsp, 8
 * 00000001406B16F8: call    loc_1406B16EB
 * 00000001406B16FD: add     rsp, 8
 * 00000001406B1701: call    loc_1406B16F4
 * 00000001406B1706: add     rsp, 8
 * 00000001406B170A: call    loc_1406B16FD
 * 00000001406B170F: add     rsp, 8
 * 00000001406B1713: call    loc_1406B1706
 * 00000001406B1718: add     rsp, 8
 * 00000001406B171C: call    loc_1406B170F
 * 00000001406B1721: add     rsp, 8
 * 00000001406B1725: call    loc_1406B1718
 * 00000001406B172A: add     rsp, 8
 * 00000001406B172E: call    loc_1406B1721
 * 00000001406B1733: add     rsp, 8
 * 00000001406B1737: call    loc_1406B172A
 * 00000001406B173C: add     rsp, 8
 * 00000001406B1740: call    loc_1406B1733
 * 00000001406B1745: add     rsp, 8
 * 00000001406B1749: call    loc_1406B173C
 * 00000001406B174E: add     rsp, 8
 * 00000001406B1752: call    loc_1406B1745
 * 00000001406B1757: add     rsp, 8
 * 00000001406B175B: call    loc_1406B174E
 * 00000001406B1760: add     rsp, 8
 * 00000001406B1764: call    loc_1406B1757
 * 00000001406B1769: add     rsp, 8
 * 00000001406B176D: call    loc_1406B1760
 * 00000001406B1772: add     rsp, 8
 * 00000001406B1776: call    loc_1406B1769
 * 00000001406B177B: add     rsp, 8
 * 00000001406B177F: call    loc_1406B1772
 * 00000001406B1784: add     rsp, 8
 * 00000001406B1788: call    loc_1406B177B
 * 00000001406B178D: add     rsp, 8
 * 00000001406B1791: call    loc_1406B1784
 * 00000001406B1796: add     rsp, 8
 * 00000001406B179A: call    loc_1406B178D
 * 00000001406B179F: add     rsp, 8
 * 00000001406B17A3: call    loc_1406B1796
 * 00000001406B17A8: add     rsp, 8
 * 00000001406B17AC: mov     eax, 0DADAh
 * 00000001406B17B1: test    byte ptr gs:85Ch, 8
 * 00000001406B17BA: jz      short loc_1406B17C3
 * 00000001406B17BC: mov     al, 20h ; ' '
 * 00000001406B17BE: incsspq rax
 * 00000001406B17C3: test    word ptr gs:858h, 100h
 * 00000001406B17CE: jz      short loc_1406B17DC
 * 00000001406B17D0: xor     eax, eax
 * 00000001406B17D2: xor     edx, edx
 * 00000001406B17D4: mov     ecx, 1
 * 00000001406B17D9: div     rcx
 * 00000001406B17DC: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001406B17E0: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001406B17E4: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001406B17E8: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001406B17EC: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001406B17F0: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001406B17F4: mov     r11, [rbp+0D8h+var_F8]
 * 00000001406B17F8: mov     r10, [rbp+0D8h+var_100]
 * 00000001406B17FC: mov     r9, [rbp+0D8h+var_108]
 * 00000001406B1800: mov     r8, [rbp+0D8h+var_110]
 * 00000001406B1804: mov     rdx, [rbp+0D8h+var_118]
 * 00000001406B1808: mov     rcx, [rbp+0D8h+var_120]
 * 00000001406B180C: mov     rax, [rbp+0D8h+var_128]
 * 00000001406B1810: mov     rsp, rbp
 * 00000001406B1813: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001406B181A: add     rsp, 0E8h
 * 00000001406B1821: test    cs:KiKvaShadow, 1
 * 00000001406B1828: jz      short loc_1406B182F
 * 00000001406B182A: jmp     KiKernelExit
 * 00000001406B182F: test    word ptr gs:858h, 200h
 * 00000001406B183A: jz      short loc_1406B1841
 * 00000001406B183C: verw    [rsp-10h+arg_20]
 * 00000001406B1841: swapgs
 * 00000001406B1844: iretq
 * 00000001406B1846: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001406B184A: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001406B184E: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001406B1852: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001406B1856: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001406B185A: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001406B185E: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001406B1862: mov     r11, [rbp+0D8h+var_F8]
 * 00000001406B1866: mov     r10, [rbp+0D8h+var_100]
 * 00000001406B186A: mov     r9, [rbp+0D8h+var_108]
 * 00000001406B186E: mov     r8, [rbp+0D8h+var_110]
 * 00000001406B1872: mov     rdx, [rbp+0D8h+var_118]
 * 00000001406B1876: mov     rcx, [rbp+0D8h+var_120]
 * 00000001406B187A: mov     rax, [rbp+0D8h+var_128]
 * 00000001406B187E: mov     rsp, rbp
 * 00000001406B1881: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001406B1888: add     rsp, 0E8h
 * 00000001406B188F: iretq
 * 00000001406B1891: retn
 */
