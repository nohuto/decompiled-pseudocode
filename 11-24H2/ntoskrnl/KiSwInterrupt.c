/*
 * XREFs of KiSwInterrupt @ 0x1406B2330
 * Callers:
 *     KiSwInterruptShadow @ 0x140BBDCC0 (KiSwInterruptShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14028FBE0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiEndInterruptCycleAccumulation @ 0x140368D80 (KiEndInterruptCycleAccumulation.c)
 *     KiStartInterruptCycleAccumulation @ 0x14036A630 (KiStartInterruptCycleAccumulation.c)
 *     KiUpdateStibpPairing @ 0x1403DFC10 (KiUpdateStibpPairing.c)
 *     KiCheckForSListAddress @ 0x1403FE680 (KiCheckForSListAddress.c)
 *     HalPerformEndOfInterrupt @ 0x140408120 (HalPerformEndOfInterrupt.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14040ED30 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x1404F94D0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1404F9550 (KiSaveDebugRegisterState.c)
 *     KiSwInterruptDispatch @ 0x1405061B0 (KiSwInterruptDispatch.c)
 *     KzSetIrqlUnsafe @ 0x1405B4DD0 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x1405BA300 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1405BC880 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x1406ABF60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406B0800 (KiInitiateUserApc.c)
 *     KiSwInterrupt @ 0x1406B2330 (KiSwInterrupt.c)
 *     KiDpcInterruptBypass @ 0x1406B31A0 (KiDpcInterruptBypass.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406C0640 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiSwInterrupt @ 0x1406B2330
 * Reason: Hex-Rays returned no pseudocode for 0x1406B2330
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B2330: sub     rsp, 8
 * 00000001406B2334: push    rbp
 * 00000001406B2335: push    rsi
 * 00000001406B2336: sub     rsp, 150h
 * 00000001406B233D: lea     rbp, [rsp+80h]
 * 00000001406B2345: mov     [rbp+0E8h+var_13D], 0
 * 00000001406B2349: mov     [rbp+0E8h+var_138], rax
 * 00000001406B234D: mov     [rbp+0E8h+var_130], rcx
 * 00000001406B2351: mov     [rbp+0E8h+var_128], rdx
 * 00000001406B2355: mov     [rbp+0E8h+var_120], r8
 * 00000001406B2359: mov     [rbp+0E8h+var_118], r9
 * 00000001406B235D: mov     [rbp+0E8h+var_110], r10
 * 00000001406B2361: mov     [rbp+0E8h+var_108], r11
 * 00000001406B2365: test    [rbp+0E8h+arg_0], 1
 * 00000001406B236C: jnz     short loc_1406B23A6
 * 00000001406B236E: xor     edx, edx
 * 00000001406B2370: rdsspq  rdx
 * 00000001406B2375: mov     [rbp+0E8h+var_90], rdx
 * 00000001406B2379: lfence
 * 00000001406B237C: test    byte ptr gs:858h, 1
 * 00000001406B2385: jnz     short loc_1406B238F
 * 00000001406B2387: lfence
 * 00000001406B238A: jmp     loc_1406B2617
 * 00000001406B238F: movzx   eax, word ptr gs:866h
 * 00000001406B2398: mov     ecx, 48h ; 'H'
 * 00000001406B239D: xor     edx, edx
 * 00000001406B239F: wrmsr
 * 00000001406B23A1: jmp     loc_1406B2617
 * 00000001406B23A6: test    cs:KiKvaShadow, 1
 * 00000001406B23AD: jnz     short loc_1406B23B2
 * 00000001406B23AF: swapgs
 * 00000001406B23B2: lfence
 * 00000001406B23B5: mov     rcx, gs:9D28h
 * 00000001406B23BE: test    rcx, rcx
 * 00000001406B23C1: jz      short loc_1406B23E2
 * 00000001406B23C3: rdsspq  rdx
 * 00000001406B23C8: mov     r10, gs:9D20h
 * 00000001406B23D1: add     r10, 8
 * 00000001406B23D5: cmp     rdx, r10
 * 00000001406B23D8: jnz     short loc_1406B23E2
 * 00000001406B23DA: rstorssp qword ptr [rcx]
 * 00000001406B23DE: saveprevssp
 * 00000001406B23E2: mov     r10, gs:188h
 * 00000001406B23EB: mov     rcx, gs:188h
 * 00000001406B23F4: mov     rcx, [rcx+220h]
 * 00000001406B23FB: mov     rcx, [rcx+760h]
 * 00000001406B2402: mov     gs:850h, rcx
 * 00000001406B240B: mov     cx, gs:862h
 * 00000001406B2414: mov     gs:864h, cx
 * 00000001406B241D: mov     cl, gs:858h
 * 00000001406B2425: mov     gs:85Ah, cl
 * 00000001406B242D: movzx   eax, word ptr gs:868h
 * 00000001406B2436: cmp     gs:866h, ax
 * 00000001406B243F: jz      short loc_1406B2453
 * 00000001406B2441: mov     gs:866h, ax
 * 00000001406B244A: mov     ecx, 48h ; 'H'
 * 00000001406B244F: xor     edx, edx
 * 00000001406B2451: wrmsr
 * 00000001406B2453: movzx   edx, byte ptr gs:858h
 * 00000001406B245C: test    edx, 8
 * 00000001406B2462: jz      short loc_1406B247B
 * 00000001406B2464: mov     eax, 1
 * 00000001406B2469: xor     edx, edx
 * 00000001406B246B: mov     ecx, 49h ; 'I'
 * 00000001406B2470: wrmsr
 * 00000001406B2472: movzx   edx, byte ptr gs:858h
 * 00000001406B247B: test    edx, 2
 * 00000001406B2481: jz      loc_1406B25BE
 * 00000001406B2487: call    loc_1406B259A
 * 00000001406B248C: add     rsp, 8
 * 00000001406B2490: call    loc_1406B25A3
 * 00000001406B2495: add     rsp, 8
 * 00000001406B2499: call    loc_1406B248C
 * 00000001406B249E: add     rsp, 8
 * 00000001406B24A2: call    loc_1406B2495
 * 00000001406B24A7: add     rsp, 8
 * 00000001406B24AB: call    loc_1406B249E
 * 00000001406B24B0: add     rsp, 8
 * 00000001406B24B4: call    loc_1406B24A7
 * 00000001406B24B9: add     rsp, 8
 * 00000001406B24BD: call    loc_1406B24B0
 * 00000001406B24C2: add     rsp, 8
 * 00000001406B24C6: call    loc_1406B24B9
 * 00000001406B24CB: add     rsp, 8
 * 00000001406B24CF: call    loc_1406B24C2
 * 00000001406B24D4: add     rsp, 8
 * 00000001406B24D8: call    loc_1406B24CB
 * 00000001406B24DD: add     rsp, 8
 * 00000001406B24E1: call    loc_1406B24D4
 * 00000001406B24E6: add     rsp, 8
 * 00000001406B24EA: call    loc_1406B24DD
 * 00000001406B24EF: add     rsp, 8
 * 00000001406B24F3: call    loc_1406B24E6
 * 00000001406B24F8: add     rsp, 8
 * 00000001406B24FC: call    loc_1406B24EF
 * 00000001406B2501: add     rsp, 8
 * 00000001406B2505: call    loc_1406B24F8
 * 00000001406B250A: add     rsp, 8
 * 00000001406B250E: call    loc_1406B2501
 * 00000001406B2513: add     rsp, 8
 * 00000001406B2517: call    loc_1406B250A
 * 00000001406B251C: add     rsp, 8
 * 00000001406B2520: call    loc_1406B2513
 * 00000001406B2525: add     rsp, 8
 * 00000001406B2529: call    loc_1406B251C
 * 00000001406B252E: add     rsp, 8
 * 00000001406B2532: call    loc_1406B2525
 * 00000001406B2537: add     rsp, 8
 * 00000001406B253B: call    loc_1406B252E
 * 00000001406B2540: add     rsp, 8
 * 00000001406B2544: call    loc_1406B2537
 * 00000001406B2549: add     rsp, 8
 * 00000001406B254D: call    loc_1406B2540
 * 00000001406B2552: add     rsp, 8
 * 00000001406B2556: call    loc_1406B2549
 * 00000001406B255B: add     rsp, 8
 * 00000001406B255F: call    loc_1406B2552
 * 00000001406B2564: add     rsp, 8
 * 00000001406B2568: call    loc_1406B255B
 * 00000001406B256D: add     rsp, 8
 * 00000001406B2571: call    loc_1406B2564
 * 00000001406B2576: add     rsp, 8
 * 00000001406B257A: call    loc_1406B256D
 * 00000001406B257F: add     rsp, 8
 * 00000001406B2583: call    loc_1406B2576
 * 00000001406B2588: add     rsp, 8
 * 00000001406B258C: call    loc_1406B257F
 * 00000001406B2591: add     rsp, 8
 * 00000001406B2595: call    loc_1406B2588
 * 00000001406B259A: add     rsp, 8
 * 00000001406B259E: call    loc_1406B2591
 * 00000001406B25A3: add     rsp, 8
 * 00000001406B25A7: mov     eax, 0DADAh
 * 00000001406B25AC: test    byte ptr gs:85Ch, 8
 * 00000001406B25B5: jz      short loc_1406B25BE
 * 00000001406B25B7: mov     al, 20h ; ' '
 * 00000001406B25B9: incsspq rax
 * 00000001406B25BE: test    edx, 80h
 * 00000001406B25C4: jz      short loc_1406B25CE
 * 00000001406B25C6: lfence
 * 00000001406B25C9: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406B25CE: lfence
 * 00000001406B25D1: mov     byte ptr gs:85Eh, 0
 * 00000001406B25DA: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406B25E1: jz      short loc_1406B2602
 * 00000001406B25E3: mov     ecx, 6A7h
 * 00000001406B25E8: rdmsr
 * 00000001406B25EA: cmp     edx, 0
 * 00000001406B25ED: jz      short loc_1406B2602
 * 00000001406B25EF: mov     ecx, edx
 * 00000001406B25F1: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406B25F7: cmp     edx, ecx
 * 00000001406B25F9: jz      short loc_1406B2602
 * 00000001406B25FB: mov     ecx, 6A7h
 * 00000001406B2600: wrmsr
 * 00000001406B2602: test    byte ptr [r10+3], 3
 * 00000001406B2607: mov     [rbp+0E8h+var_68], 0
 * 00000001406B2610: jz      short loc_1406B2617
 * 00000001406B2612: call    KiSaveDebugRegisterState
 * 00000001406B2617: cld
 * 00000001406B2618: stmxcsr [rbp+0E8h+var_13C]
 * 00000001406B261C: ldmxcsr dword ptr gs:180h
 * 00000001406B2625: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001406B2629: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001406B262D: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001406B2631: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001406B2635: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001406B2639: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001406B263D: test    [rbp+0E8h+arg_0], 1
 * 00000001406B2644: jz      short loc_1406B264B
 * 00000001406B2646: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406B264B: cmp     byte ptr gs:87DAh, 0
 * 00000001406B2654: jz      short loc_1406B265B
 * 00000001406B2656: call    KeWakeProcessor
 * 00000001406B265B: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001406B2662: cmp     rax, [rbp+0E8h]
 * 00000001406B2669: jnb     short loc_1406B2684
 * 00000001406B266B: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001406B2672: cmp     rax, [rbp+0E8h]
 * 00000001406B2679: jb      short loc_1406B2684
 * 00000001406B267B: lea     rcx, [rbp+0E8h+var_168]
 * 00000001406B267F: call    KiCheckForSListAddress
 * 00000001406B2684: xor     esi, esi
 * 00000001406B2686: inc     dword ptr gs:87C0h
 * 00000001406B268E: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B2695: jz      short loc_1406B269A
 * 00000001406B2697: clac
 * 00000001406B269A: mov     ecx, 2
 * 00000001406B269F: cmp     cs:KiIrqlFlags, 0
 * 00000001406B26A6: jz      short loc_1406B26AF
 * 00000001406B26A8: call    KzSetIrqlUnsafe
 * 00000001406B26AD: jmp     short loc_1406B26B7
 * 00000001406B26AF: mov     rax, cr8
 * 00000001406B26B3: mov     cr8, rcx
 * 00000001406B26B7: mov     [rbp+0E8h+var_13F], al
 * 00000001406B26BA: mov     rcx, gs:20h
 * 00000001406B26C3: xor     edx, edx
 * 00000001406B26C5: call    KiStartInterruptCycleAccumulation
 * 00000001406B26CA: sti
 * 00000001406B26CB: lea     rcx, [rbp+0E8h+var_168]
 * 00000001406B26CF: call    KiSwInterruptDispatch
 * 00000001406B26D4: cli
 * 00000001406B26D5: mov     rcx, rsi
 * 00000001406B26D8: call    HalPerformEndOfInterrupt
 * 00000001406B26DD: mov     rcx, gs:20h
 * 00000001406B26E6: movzx   edx, [rbp+0E8h+var_13F]
 * 00000001406B26EA: call    KiEndInterruptCycleAccumulation
 * 00000001406B26EF: test    al, al
 * 00000001406B26F1: jz      short loc_1406B26F8
 * 00000001406B26F3: call    KiDpcInterruptBypass
 * 00000001406B26F8: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001406B26FC: cmp     cs:KiIrqlFlags, 0
 * 00000001406B2703: jz      short loc_1406B270C
 * 00000001406B2705: call    KzSetIrqlUnsafe
 * 00000001406B270A: jmp     short loc_1406B2710
 * 00000001406B270C: mov     cr8, rcx
 * 00000001406B2710: mov     rsi, [rbp+0E8h+var_18]
 * 00000001406B2717: cli
 * 00000001406B2718: test    [rbp+0E8h+arg_0], 1
 * 00000001406B271F: jz      loc_1406B2A1A
 * 00000001406B2725: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B272C: jz      short loc_1406B2731
 * 00000001406B272E: stac
 * 00000001406B2731: mov     rcx, gs:188h
 * 00000001406B273A: test    byte ptr [rcx+0C2h], 3
 * 00000001406B2741: jz      short loc_1406B275E
 * 00000001406B2743: mov     ecx, 1
 * 00000001406B2748: mov     cr8, rcx
 * 00000001406B274C: sti
 * 00000001406B274D: call    KiInitiateUserApc
 * 00000001406B2752: cli
 * 00000001406B2753: mov     ecx, 0
 * 00000001406B2758: mov     cr8, rcx
 * 00000001406B275C: jmp     short loc_1406B2731
 * 00000001406B275E: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406B2763: test    eax, eax
 * 00000001406B2765: mov     rax, [rbp+0E8h+var_138]
 * 00000001406B2769: jnz     short loc_1406B2731
 * 00000001406B276B: test    byte ptr gs:860h, 2
 * 00000001406B2774: jz      short loc_1406B277D
 * 00000001406B2776: xor     ecx, ecx
 * 00000001406B2778: call    KiUpdateStibpPairing
 * 00000001406B277D: mov     rcx, gs:188h
 * 00000001406B2786: test    dword ptr [rcx], 8000000h
 * 00000001406B278C: jz      short loc_1406B2793
 * 00000001406B278E: call    KiRestoreSetContextState
 * 00000001406B2793: mov     rcx, gs:188h
 * 00000001406B279C: test    dword ptr [rcx], 10000h
 * 00000001406B27A2: jz      short loc_1406B27B8
 * 00000001406B27A4: test    byte ptr [rcx+2], 1
 * 00000001406B27A8: jz      short loc_1406B27B8
 * 00000001406B27AA: call    KiCopyCounters
 * 00000001406B27AF: mov     rcx, gs:188h
 * 00000001406B27B8: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001406B27BC: cmp     [rbp+0E8h+var_68], 0
 * 00000001406B27C4: jz      short loc_1406B27CB
 * 00000001406B27C6: call    KiRestoreDebugRegisterState
 * 00000001406B27CB: mov     rcx, gs:188h
 * 00000001406B27D4: bt      dword ptr [rcx+74h], 16h
 * 00000001406B27D9: jnb     short loc_1406B2805
 * 00000001406B27DB: xor     ecx, ecx
 * 00000001406B27DD: rdsspq  rcx
 * 00000001406B27E2: mov     r8, gs:9D28h
 * 00000001406B27EB: add     r8, 8
 * 00000001406B27EF: cmp     rcx, r8
 * 00000001406B27F2: jnz     short loc_1406B2805
 * 00000001406B27F4: mov     rcx, gs:9D20h
 * 00000001406B27FD: rstorssp qword ptr [rcx]
 * 00000001406B2801: saveprevssp
 * 00000001406B2805: mov     byte ptr gs:85Eh, 0
 * 00000001406B280E: movzx   eax, word ptr gs:86Ch
 * 00000001406B2817: cmp     gs:866h, ax
 * 00000001406B2820: jz      short loc_1406B2834
 * 00000001406B2822: mov     gs:866h, ax
 * 00000001406B282B: mov     ecx, 48h ; 'H'
 * 00000001406B2830: xor     edx, edx
 * 00000001406B2832: wrmsr
 * 00000001406B2834: btr     word ptr gs:858h, 2
 * 00000001406B283F: jnb     short loc_1406B284F
 * 00000001406B2841: mov     eax, 1
 * 00000001406B2846: xor     edx, edx
 * 00000001406B2848: mov     ecx, 49h ; 'I'
 * 00000001406B284D: wrmsr
 * 00000001406B284F: btr     word ptr gs:858h, 5
 * 00000001406B285A: jnb     loc_1406B2997
 * 00000001406B2860: call    loc_1406B2973
 * 00000001406B2865: add     rsp, 8
 * 00000001406B2869: call    loc_1406B297C
 * 00000001406B286E: add     rsp, 8
 * 00000001406B2872: call    loc_1406B2865
 * 00000001406B2877: add     rsp, 8
 * 00000001406B287B: call    loc_1406B286E
 * 00000001406B2880: add     rsp, 8
 * 00000001406B2884: call    loc_1406B2877
 * 00000001406B2889: add     rsp, 8
 * 00000001406B288D: call    loc_1406B2880
 * 00000001406B2892: add     rsp, 8
 * 00000001406B2896: call    loc_1406B2889
 * 00000001406B289B: add     rsp, 8
 * 00000001406B289F: call    loc_1406B2892
 * 00000001406B28A4: add     rsp, 8
 * 00000001406B28A8: call    loc_1406B289B
 * 00000001406B28AD: add     rsp, 8
 * 00000001406B28B1: call    loc_1406B28A4
 * 00000001406B28B6: add     rsp, 8
 * 00000001406B28BA: call    loc_1406B28AD
 * 00000001406B28BF: add     rsp, 8
 * 00000001406B28C3: call    loc_1406B28B6
 * 00000001406B28C8: add     rsp, 8
 * 00000001406B28CC: call    loc_1406B28BF
 * 00000001406B28D1: add     rsp, 8
 * 00000001406B28D5: call    loc_1406B28C8
 * 00000001406B28DA: add     rsp, 8
 * 00000001406B28DE: call    loc_1406B28D1
 * 00000001406B28E3: add     rsp, 8
 * 00000001406B28E7: call    loc_1406B28DA
 * 00000001406B28EC: add     rsp, 8
 * 00000001406B28F0: call    loc_1406B28E3
 * 00000001406B28F5: add     rsp, 8
 * 00000001406B28F9: call    loc_1406B28EC
 * 00000001406B28FE: add     rsp, 8
 * 00000001406B2902: call    loc_1406B28F5
 * 00000001406B2907: add     rsp, 8
 * 00000001406B290B: call    loc_1406B28FE
 * 00000001406B2910: add     rsp, 8
 * 00000001406B2914: call    loc_1406B2907
 * 00000001406B2919: add     rsp, 8
 * 00000001406B291D: call    loc_1406B2910
 * 00000001406B2922: add     rsp, 8
 * 00000001406B2926: call    loc_1406B2919
 * 00000001406B292B: add     rsp, 8
 * 00000001406B292F: call    loc_1406B2922
 * 00000001406B2934: add     rsp, 8
 * 00000001406B2938: call    loc_1406B292B
 * 00000001406B293D: add     rsp, 8
 * 00000001406B2941: call    loc_1406B2934
 * 00000001406B2946: add     rsp, 8
 * 00000001406B294A: call    loc_1406B293D
 * 00000001406B294F: add     rsp, 8
 * 00000001406B2953: call    loc_1406B2946
 * 00000001406B2958: add     rsp, 8
 * 00000001406B295C: call    loc_1406B294F
 * 00000001406B2961: add     rsp, 8
 * 00000001406B2965: call    loc_1406B2958
 * 00000001406B296A: add     rsp, 8
 * 00000001406B296E: call    loc_1406B2961
 * 00000001406B2973: add     rsp, 8
 * 00000001406B2977: call    loc_1406B296A
 * 00000001406B297C: add     rsp, 8
 * 00000001406B2980: mov     eax, 0DADAh
 * 00000001406B2985: test    byte ptr gs:85Ch, 8
 * 00000001406B298E: jz      short loc_1406B2997
 * 00000001406B2990: mov     al, 20h ; ' '
 * 00000001406B2992: incsspq rax
 * 00000001406B2997: test    word ptr gs:858h, 100h
 * 00000001406B29A2: jz      short loc_1406B29B0
 * 00000001406B29A4: xor     eax, eax
 * 00000001406B29A6: xor     edx, edx
 * 00000001406B29A8: mov     ecx, 1
 * 00000001406B29AD: div     rcx
 * 00000001406B29B0: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001406B29B4: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001406B29B8: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001406B29BC: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001406B29C0: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001406B29C4: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001406B29C8: mov     r11, [rbp+0E8h+var_108]
 * 00000001406B29CC: mov     r10, [rbp+0E8h+var_110]
 * 00000001406B29D0: mov     r9, [rbp+0E8h+var_118]
 * 00000001406B29D4: mov     r8, [rbp+0E8h+var_120]
 * 00000001406B29D8: mov     rdx, [rbp+0E8h+var_128]
 * 00000001406B29DC: mov     rcx, [rbp+0E8h+var_130]
 * 00000001406B29E0: mov     rax, [rbp+0E8h+var_138]
 * 00000001406B29E4: mov     rsp, rbp
 * 00000001406B29E7: mov     rbp, [rbp+0E8h+var_10]
 * 00000001406B29EE: add     rsp, 0E8h
 * 00000001406B29F5: test    cs:KiKvaShadow, 1
 * 00000001406B29FC: jz      short loc_1406B2A03
 * 00000001406B29FE: jmp     KiKernelExit
 * 00000001406B2A03: test    word ptr gs:858h, 200h
 * 00000001406B2A0E: jz      short loc_1406B2A15
 * 00000001406B2A10: verw    [rsp+arg_18]
 * 00000001406B2A15: swapgs
 * 00000001406B2A18: iretq
 * 00000001406B2A1A: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001406B2A1E: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001406B2A22: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001406B2A26: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001406B2A2A: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001406B2A2E: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001406B2A32: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001406B2A36: mov     r11, [rbp+0E8h+var_108]
 * 00000001406B2A3A: mov     r10, [rbp+0E8h+var_110]
 * 00000001406B2A3E: mov     r9, [rbp+0E8h+var_118]
 * 00000001406B2A42: mov     r8, [rbp+0E8h+var_120]
 * 00000001406B2A46: mov     rdx, [rbp+0E8h+var_128]
 * 00000001406B2A4A: mov     rcx, [rbp+0E8h+var_130]
 * 00000001406B2A4E: mov     rax, [rbp+0E8h+var_138]
 * 00000001406B2A52: mov     rsp, rbp
 * 00000001406B2A55: mov     rbp, [rbp+0E8h+var_10]
 * 00000001406B2A5C: add     rsp, 0E8h
 * 00000001406B2A63: iretq
 */
