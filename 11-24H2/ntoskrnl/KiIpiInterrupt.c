/*
 * XREFs of KiIpiInterrupt @ 0x1406B2240
 * Callers:
 *     KiIpiInterruptShadow @ 0x140BBC240 (KiIpiInterruptShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14025F5D0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiEndInterruptCycleAccumulation @ 0x14034A8A0 (KiEndInterruptCycleAccumulation.c)
 *     KiUpdateStibpPairing @ 0x1403EB760 (KiUpdateStibpPairing.c)
 *     KiCheckForSListAddress @ 0x1404038C0 (KiCheckForSListAddress.c)
 *     HalPerformEndOfInterrupt @ 0x140418370 (HalPerformEndOfInterrupt.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14041B1F0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x1404FBC10 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1404FBC90 (KiSaveDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405B7800 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x1405BCCD0 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1405BF250 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x1406AAFC0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406AF860 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1406B2200 (KiDpcInterruptBypass.c)
 *     KiIpiInterrupt @ 0x1406B2240 (KiIpiInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x1406B2980 (KiIpiInterruptSubDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406BF740 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiIpiInterrupt @ 0x1406B2240
 * Reason: Hex-Rays returned no pseudocode for 0x1406B2240
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B2240: sub     rsp, 8
 * 00000001406B2244: push    rbp
 * 00000001406B2245: push    rsi
 * 00000001406B2246: sub     rsp, 150h
 * 00000001406B224D: lea     rbp, [rsp+80h]
 * 00000001406B2255: mov     [rbp+0E8h+var_13D], 0
 * 00000001406B2259: mov     [rbp+0E8h+var_138], rax
 * 00000001406B225D: mov     [rbp+0E8h+var_130], rcx
 * 00000001406B2261: mov     [rbp+0E8h+var_128], rdx
 * 00000001406B2265: mov     [rbp+0E8h+var_120], r8
 * 00000001406B2269: mov     [rbp+0E8h+var_118], r9
 * 00000001406B226D: mov     [rbp+0E8h+var_110], r10
 * 00000001406B2271: mov     [rbp+0E8h+var_108], r11
 * 00000001406B2275: test    [rbp+0E8h+arg_0], 1
 * 00000001406B227C: jnz     short loc_1406B22B6
 * 00000001406B227E: xor     edx, edx
 * 00000001406B2280: rdsspq  rdx
 * 00000001406B2285: mov     [rbp+0E8h+var_90], rdx
 * 00000001406B2289: lfence
 * 00000001406B228C: test    byte ptr gs:858h, 1
 * 00000001406B2295: jnz     short loc_1406B229F
 * 00000001406B2297: lfence
 * 00000001406B229A: jmp     loc_1406B2527
 * 00000001406B229F: movzx   eax, word ptr gs:866h
 * 00000001406B22A8: mov     ecx, 48h ; 'H'
 * 00000001406B22AD: xor     edx, edx
 * 00000001406B22AF: wrmsr
 * 00000001406B22B1: jmp     loc_1406B2527
 * 00000001406B22B6: test    cs:KiKvaShadow, 1
 * 00000001406B22BD: jnz     short loc_1406B22C2
 * 00000001406B22BF: swapgs
 * 00000001406B22C2: lfence
 * 00000001406B22C5: mov     rcx, gs:9D28h
 * 00000001406B22CE: test    rcx, rcx
 * 00000001406B22D1: jz      short loc_1406B22F2
 * 00000001406B22D3: rdsspq  rdx
 * 00000001406B22D8: mov     r10, gs:9D20h
 * 00000001406B22E1: add     r10, 8
 * 00000001406B22E5: cmp     rdx, r10
 * 00000001406B22E8: jnz     short loc_1406B22F2
 * 00000001406B22EA: rstorssp qword ptr [rcx]
 * 00000001406B22EE: saveprevssp
 * 00000001406B22F2: mov     r10, gs:188h
 * 00000001406B22FB: mov     rcx, gs:188h
 * 00000001406B2304: mov     rcx, [rcx+220h]
 * 00000001406B230B: mov     rcx, [rcx+760h]
 * 00000001406B2312: mov     gs:850h, rcx
 * 00000001406B231B: mov     cx, gs:862h
 * 00000001406B2324: mov     gs:864h, cx
 * 00000001406B232D: mov     cl, gs:858h
 * 00000001406B2335: mov     gs:85Ah, cl
 * 00000001406B233D: movzx   eax, word ptr gs:868h
 * 00000001406B2346: cmp     gs:866h, ax
 * 00000001406B234F: jz      short loc_1406B2363
 * 00000001406B2351: mov     gs:866h, ax
 * 00000001406B235A: mov     ecx, 48h ; 'H'
 * 00000001406B235F: xor     edx, edx
 * 00000001406B2361: wrmsr
 * 00000001406B2363: movzx   edx, byte ptr gs:858h
 * 00000001406B236C: test    edx, 8
 * 00000001406B2372: jz      short loc_1406B238B
 * 00000001406B2374: mov     eax, 1
 * 00000001406B2379: xor     edx, edx
 * 00000001406B237B: mov     ecx, 49h ; 'I'
 * 00000001406B2380: wrmsr
 * 00000001406B2382: movzx   edx, byte ptr gs:858h
 * 00000001406B238B: test    edx, 2
 * 00000001406B2391: jz      loc_1406B24CE
 * 00000001406B2397: call    loc_1406B24AA
 * 00000001406B239C: add     rsp, 8
 * 00000001406B23A0: call    loc_1406B24B3
 * 00000001406B23A5: add     rsp, 8
 * 00000001406B23A9: call    loc_1406B239C
 * 00000001406B23AE: add     rsp, 8
 * 00000001406B23B2: call    loc_1406B23A5
 * 00000001406B23B7: add     rsp, 8
 * 00000001406B23BB: call    loc_1406B23AE
 * 00000001406B23C0: add     rsp, 8
 * 00000001406B23C4: call    loc_1406B23B7
 * 00000001406B23C9: add     rsp, 8
 * 00000001406B23CD: call    loc_1406B23C0
 * 00000001406B23D2: add     rsp, 8
 * 00000001406B23D6: call    loc_1406B23C9
 * 00000001406B23DB: add     rsp, 8
 * 00000001406B23DF: call    loc_1406B23D2
 * 00000001406B23E4: add     rsp, 8
 * 00000001406B23E8: call    loc_1406B23DB
 * 00000001406B23ED: add     rsp, 8
 * 00000001406B23F1: call    loc_1406B23E4
 * 00000001406B23F6: add     rsp, 8
 * 00000001406B23FA: call    loc_1406B23ED
 * 00000001406B23FF: add     rsp, 8
 * 00000001406B2403: call    loc_1406B23F6
 * 00000001406B2408: add     rsp, 8
 * 00000001406B240C: call    loc_1406B23FF
 * 00000001406B2411: add     rsp, 8
 * 00000001406B2415: call    loc_1406B2408
 * 00000001406B241A: add     rsp, 8
 * 00000001406B241E: call    loc_1406B2411
 * 00000001406B2423: add     rsp, 8
 * 00000001406B2427: call    loc_1406B241A
 * 00000001406B242C: add     rsp, 8
 * 00000001406B2430: call    loc_1406B2423
 * 00000001406B2435: add     rsp, 8
 * 00000001406B2439: call    loc_1406B242C
 * 00000001406B243E: add     rsp, 8
 * 00000001406B2442: call    loc_1406B2435
 * 00000001406B2447: add     rsp, 8
 * 00000001406B244B: call    loc_1406B243E
 * 00000001406B2450: add     rsp, 8
 * 00000001406B2454: call    loc_1406B2447
 * 00000001406B2459: add     rsp, 8
 * 00000001406B245D: call    loc_1406B2450
 * 00000001406B2462: add     rsp, 8
 * 00000001406B2466: call    loc_1406B2459
 * 00000001406B246B: add     rsp, 8
 * 00000001406B246F: call    loc_1406B2462
 * 00000001406B2474: add     rsp, 8
 * 00000001406B2478: call    loc_1406B246B
 * 00000001406B247D: add     rsp, 8
 * 00000001406B2481: call    loc_1406B2474
 * 00000001406B2486: add     rsp, 8
 * 00000001406B248A: call    loc_1406B247D
 * 00000001406B248F: add     rsp, 8
 * 00000001406B2493: call    loc_1406B2486
 * 00000001406B2498: add     rsp, 8
 * 00000001406B249C: call    loc_1406B248F
 * 00000001406B24A1: add     rsp, 8
 * 00000001406B24A5: call    loc_1406B2498
 * 00000001406B24AA: add     rsp, 8
 * 00000001406B24AE: call    loc_1406B24A1
 * 00000001406B24B3: add     rsp, 8
 * 00000001406B24B7: mov     eax, 0DADAh
 * 00000001406B24BC: test    byte ptr gs:85Ch, 8
 * 00000001406B24C5: jz      short loc_1406B24CE
 * 00000001406B24C7: mov     al, 20h ; ' '
 * 00000001406B24C9: incsspq rax
 * 00000001406B24CE: test    edx, 80h
 * 00000001406B24D4: jz      short loc_1406B24DE
 * 00000001406B24D6: lfence
 * 00000001406B24D9: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406B24DE: lfence
 * 00000001406B24E1: mov     byte ptr gs:85Eh, 0
 * 00000001406B24EA: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406B24F1: jz      short loc_1406B2512
 * 00000001406B24F3: mov     ecx, 6A7h
 * 00000001406B24F8: rdmsr
 * 00000001406B24FA: cmp     edx, 0
 * 00000001406B24FD: jz      short loc_1406B2512
 * 00000001406B24FF: mov     ecx, edx
 * 00000001406B2501: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406B2507: cmp     edx, ecx
 * 00000001406B2509: jz      short loc_1406B2512
 * 00000001406B250B: mov     ecx, 6A7h
 * 00000001406B2510: wrmsr
 * 00000001406B2512: test    byte ptr [r10+3], 3
 * 00000001406B2517: mov     [rbp+0E8h+var_68], 0
 * 00000001406B2520: jz      short loc_1406B2527
 * 00000001406B2522: call    KiSaveDebugRegisterState
 * 00000001406B2527: cld
 * 00000001406B2528: stmxcsr [rbp+0E8h+var_13C]
 * 00000001406B252C: ldmxcsr dword ptr gs:180h
 * 00000001406B2535: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001406B2539: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001406B253D: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001406B2541: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001406B2545: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001406B2549: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001406B254D: test    [rbp+0E8h+arg_0], 1
 * 00000001406B2554: jz      short loc_1406B255B
 * 00000001406B2556: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406B255B: cmp     byte ptr gs:87DAh, 0
 * 00000001406B2564: jz      short loc_1406B256B
 * 00000001406B2566: call    KeWakeProcessor
 * 00000001406B256B: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001406B2572: cmp     rax, [rbp+0E8h]
 * 00000001406B2579: jnb     short loc_1406B2594
 * 00000001406B257B: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001406B2582: cmp     rax, [rbp+0E8h]
 * 00000001406B2589: jb      short loc_1406B2594
 * 00000001406B258B: lea     rcx, [rbp+0E8h+var_168]
 * 00000001406B258F: call    KiCheckForSListAddress
 * 00000001406B2594: xor     esi, esi
 * 00000001406B2596: inc     dword ptr gs:87C0h
 * 00000001406B259E: mov     rcx, gs:9158h
 * 00000001406B25A7: mov     rax, rcx
 * 00000001406B25AA: mov     edx, cs:KeIsrStackSize
 * 00000001406B25B0: sub     rax, rdx
 * 00000001406B25B3: mov     rdx, rsp
 * 00000001406B25B6: cmp     rax, rsp
 * 00000001406B25B9: ja      short loc_1406B25C0
 * 00000001406B25BB: cmp     rsp, rcx
 * 00000001406B25BE: jb      short loc_1406B25CC
 * 00000001406B25C0: cmp     cs:KiBugCheckActive, 0
 * 00000001406B25C7: jnz     short loc_1406B25CC
 * 00000001406B25C9: mov     rsp, rcx
 * 00000001406B25CC: sub     rsp, 20h
 * 00000001406B25D0: mov     qword ptr [rsp+108h+var_F8], rdx
 * 00000001406B25D5: call    KiIpiInterruptSubDispatch
 * 00000001406B25DA: mov     rsp, qword ptr [rsp+108h+var_F8]
 * 00000001406B25DF: mov     rcx, rsi
 * 00000001406B25E2: call    HalPerformEndOfInterrupt
 * 00000001406B25E7: mov     rcx, gs:20h
 * 00000001406B25F0: movzx   edx, [rbp+0E8h+var_13F]
 * 00000001406B25F4: call    KiEndInterruptCycleAccumulation
 * 00000001406B25F9: test    al, al
 * 00000001406B25FB: jz      short loc_1406B2602
 * 00000001406B25FD: call    KiDpcInterruptBypass
 * 00000001406B2602: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001406B2606: cmp     cs:KiIrqlFlags, 0
 * 00000001406B260D: jz      short loc_1406B2616
 * 00000001406B260F: call    KzSetIrqlUnsafe
 * 00000001406B2614: jmp     short loc_1406B261A
 * 00000001406B2616: mov     cr8, rcx
 * 00000001406B261A: mov     rsi, [rbp+0E8h+var_18]
 * 00000001406B2621: test    [rbp+0E8h+arg_0], 1
 * 00000001406B2628: jz      loc_1406B2923
 * 00000001406B262E: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B2635: jz      short loc_1406B263A
 * 00000001406B2637: stac
 * 00000001406B263A: mov     rcx, gs:188h
 * 00000001406B2643: test    byte ptr [rcx+0C2h], 3
 * 00000001406B264A: jz      short loc_1406B2667
 * 00000001406B264C: mov     ecx, 1
 * 00000001406B2651: mov     cr8, rcx
 * 00000001406B2655: sti
 * 00000001406B2656: call    KiInitiateUserApc
 * 00000001406B265B: cli
 * 00000001406B265C: mov     ecx, 0
 * 00000001406B2661: mov     cr8, rcx
 * 00000001406B2665: jmp     short loc_1406B263A
 * 00000001406B2667: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406B266C: test    eax, eax
 * 00000001406B266E: mov     rax, [rbp+0E8h+var_138]
 * 00000001406B2672: jnz     short loc_1406B263A
 * 00000001406B2674: test    byte ptr gs:860h, 2
 * 00000001406B267D: jz      short loc_1406B2686
 * 00000001406B267F: xor     ecx, ecx
 * 00000001406B2681: call    KiUpdateStibpPairing
 * 00000001406B2686: mov     rcx, gs:188h
 * 00000001406B268F: test    dword ptr [rcx], 8000000h
 * 00000001406B2695: jz      short loc_1406B269C
 * 00000001406B2697: call    KiRestoreSetContextState
 * 00000001406B269C: mov     rcx, gs:188h
 * 00000001406B26A5: test    dword ptr [rcx], 10000h
 * 00000001406B26AB: jz      short loc_1406B26C1
 * 00000001406B26AD: test    byte ptr [rcx+2], 1
 * 00000001406B26B1: jz      short loc_1406B26C1
 * 00000001406B26B3: call    KiCopyCounters
 * 00000001406B26B8: mov     rcx, gs:188h
 * 00000001406B26C1: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001406B26C5: cmp     [rbp+0E8h+var_68], 0
 * 00000001406B26CD: jz      short loc_1406B26D4
 * 00000001406B26CF: call    KiRestoreDebugRegisterState
 * 00000001406B26D4: mov     rcx, gs:188h
 * 00000001406B26DD: bt      dword ptr [rcx+74h], 16h
 * 00000001406B26E2: jnb     short loc_1406B270E
 * 00000001406B26E4: xor     ecx, ecx
 * 00000001406B26E6: rdsspq  rcx
 * 00000001406B26EB: mov     r8, gs:9D28h
 * 00000001406B26F4: add     r8, 8
 * 00000001406B26F8: cmp     rcx, r8
 * 00000001406B26FB: jnz     short loc_1406B270E
 * 00000001406B26FD: mov     rcx, gs:9D20h
 * 00000001406B2706: rstorssp qword ptr [rcx]
 * 00000001406B270A: saveprevssp
 * 00000001406B270E: mov     byte ptr gs:85Eh, 0
 * 00000001406B2717: movzx   eax, word ptr gs:86Ch
 * 00000001406B2720: cmp     gs:866h, ax
 * 00000001406B2729: jz      short loc_1406B273D
 * 00000001406B272B: mov     gs:866h, ax
 * 00000001406B2734: mov     ecx, 48h ; 'H'
 * 00000001406B2739: xor     edx, edx
 * 00000001406B273B: wrmsr
 * 00000001406B273D: btr     word ptr gs:858h, 2
 * 00000001406B2748: jnb     short loc_1406B2758
 * 00000001406B274A: mov     eax, 1
 * 00000001406B274F: xor     edx, edx
 * 00000001406B2751: mov     ecx, 49h ; 'I'
 * 00000001406B2756: wrmsr
 * 00000001406B2758: btr     word ptr gs:858h, 5
 * 00000001406B2763: jnb     loc_1406B28A0
 * 00000001406B2769: call    loc_1406B287C
 * 00000001406B276E: add     rsp, 8
 * 00000001406B2772: call    loc_1406B2885
 * 00000001406B2777: add     rsp, 8
 * 00000001406B277B: call    loc_1406B276E
 * 00000001406B2780: add     rsp, 8
 * 00000001406B2784: call    loc_1406B2777
 * 00000001406B2789: add     rsp, 8
 * 00000001406B278D: call    loc_1406B2780
 * 00000001406B2792: add     rsp, 8
 * 00000001406B2796: call    loc_1406B2789
 * 00000001406B279B: add     rsp, 8
 * 00000001406B279F: call    loc_1406B2792
 * 00000001406B27A4: add     rsp, 8
 * 00000001406B27A8: call    loc_1406B279B
 * 00000001406B27AD: add     rsp, 8
 * 00000001406B27B1: call    loc_1406B27A4
 * 00000001406B27B6: add     rsp, 8
 * 00000001406B27BA: call    loc_1406B27AD
 * 00000001406B27BF: add     rsp, 8
 * 00000001406B27C3: call    loc_1406B27B6
 * 00000001406B27C8: add     rsp, 8
 * 00000001406B27CC: call    loc_1406B27BF
 * 00000001406B27D1: add     rsp, 8
 * 00000001406B27D5: call    loc_1406B27C8
 * 00000001406B27DA: add     rsp, 8
 * 00000001406B27DE: call    loc_1406B27D1
 * 00000001406B27E3: add     rsp, 8
 * 00000001406B27E7: call    loc_1406B27DA
 * 00000001406B27EC: add     rsp, 8
 * 00000001406B27F0: call    loc_1406B27E3
 * 00000001406B27F5: add     rsp, 8
 * 00000001406B27F9: call    loc_1406B27EC
 * 00000001406B27FE: add     rsp, 8
 * 00000001406B2802: call    loc_1406B27F5
 * 00000001406B2807: add     rsp, 8
 * 00000001406B280B: call    loc_1406B27FE
 * 00000001406B2810: add     rsp, 8
 * 00000001406B2814: call    loc_1406B2807
 * 00000001406B2819: add     rsp, 8
 * 00000001406B281D: call    loc_1406B2810
 * 00000001406B2822: add     rsp, 8
 * 00000001406B2826: call    loc_1406B2819
 * 00000001406B282B: add     rsp, 8
 * 00000001406B282F: call    loc_1406B2822
 * 00000001406B2834: add     rsp, 8
 * 00000001406B2838: call    loc_1406B282B
 * 00000001406B283D: add     rsp, 8
 * 00000001406B2841: call    loc_1406B2834
 * 00000001406B2846: add     rsp, 8
 * 00000001406B284A: call    loc_1406B283D
 * 00000001406B284F: add     rsp, 8
 * 00000001406B2853: call    loc_1406B2846
 * 00000001406B2858: add     rsp, 8
 * 00000001406B285C: call    loc_1406B284F
 * 00000001406B2861: add     rsp, 8
 * 00000001406B2865: call    loc_1406B2858
 * 00000001406B286A: add     rsp, 8
 * 00000001406B286E: call    loc_1406B2861
 * 00000001406B2873: add     rsp, 8
 * 00000001406B2877: call    loc_1406B286A
 * 00000001406B287C: add     rsp, 8
 * 00000001406B2880: call    loc_1406B2873
 * 00000001406B2885: add     rsp, 8
 * 00000001406B2889: mov     eax, 0DADAh
 * 00000001406B288E: test    byte ptr gs:85Ch, 8
 * 00000001406B2897: jz      short loc_1406B28A0
 * 00000001406B2899: mov     al, 20h ; ' '
 * 00000001406B289B: incsspq rax
 * 00000001406B28A0: test    word ptr gs:858h, 100h
 * 00000001406B28AB: jz      short loc_1406B28B9
 * 00000001406B28AD: xor     eax, eax
 * 00000001406B28AF: xor     edx, edx
 * 00000001406B28B1: mov     ecx, 1
 * 00000001406B28B6: div     rcx
 * 00000001406B28B9: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001406B28BD: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001406B28C1: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001406B28C5: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001406B28C9: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001406B28CD: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001406B28D1: mov     r11, [rbp+0E8h+var_108]
 * 00000001406B28D5: mov     r10, [rbp+0E8h+var_110]
 * 00000001406B28D9: mov     r9, [rbp+0E8h+var_118]
 * 00000001406B28DD: mov     r8, [rbp+0E8h+var_120]
 * 00000001406B28E1: mov     rdx, [rbp+0E8h+var_128]
 * 00000001406B28E5: mov     rcx, [rbp+0E8h+var_130]
 * 00000001406B28E9: mov     rax, [rbp+0E8h+var_138]
 * 00000001406B28ED: mov     rsp, rbp
 * 00000001406B28F0: mov     rbp, [rbp+0E8h+var_10]
 * 00000001406B28F7: add     rsp, 0E8h
 * 00000001406B28FE: test    cs:KiKvaShadow, 1
 * 00000001406B2905: jz      short loc_1406B290C
 * 00000001406B2907: jmp     KiKernelExit
 * 00000001406B290C: test    word ptr gs:858h, 200h
 * 00000001406B2917: jz      short loc_1406B291E
 * 00000001406B2919: verw    [rsp+arg_18]
 * 00000001406B291E: swapgs
 * 00000001406B2921: iretq
 * 00000001406B2923: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001406B2927: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001406B292B: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001406B292F: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001406B2933: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001406B2937: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001406B293B: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001406B293F: mov     r11, [rbp+0E8h+var_108]
 * 00000001406B2943: mov     r10, [rbp+0E8h+var_110]
 * 00000001406B2947: mov     r9, [rbp+0E8h+var_118]
 * 00000001406B294B: mov     r8, [rbp+0E8h+var_120]
 * 00000001406B294F: mov     rdx, [rbp+0E8h+var_128]
 * 00000001406B2953: mov     rcx, [rbp+0E8h+var_130]
 * 00000001406B2957: mov     rax, [rbp+0E8h+var_138]
 * 00000001406B295B: mov     rsp, rbp
 * 00000001406B295E: mov     rbp, [rbp+0E8h+var_10]
 * 00000001406B2965: add     rsp, 0E8h
 * 00000001406B296C: iretq
 */
