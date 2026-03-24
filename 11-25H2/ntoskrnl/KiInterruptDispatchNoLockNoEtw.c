/*
 * XREFs of KiInterruptDispatchNoLockNoEtw @ 0x1406A2340
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
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1406A1B20 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1406A2340 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInitiateUserApc @ 0x1406A4590 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1406A6F30 (KiDpcInterruptBypass.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLockNoEtw @ 0x1406A2340
 * Reason: Hex-Rays returned no pseudocode for 0x1406A2340
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406A2340: mov     rcx, gs:9158h
 * 00000001406A2349: mov     rax, rcx
 * 00000001406A234C: mov     edx, cs:KeIsrStackSize
 * 00000001406A2352: sub     rax, rdx
 * 00000001406A2355: mov     rdx, rsp
 * 00000001406A2358: cmp     rax, rsp
 * 00000001406A235B: ja      short loc_1406A2362
 * 00000001406A235D: cmp     rsp, rcx
 * 00000001406A2360: jb      short loc_1406A236E
 * 00000001406A2362: cmp     cs:KiBugCheckActive, 0
 * 00000001406A2369: jnz     short loc_1406A236E
 * 00000001406A236B: mov     rsp, rcx
 * 00000001406A236E: sub     rsp, 20h
 * 00000001406A2372: mov     [rsp+20h+var_10], rdx
 * 00000001406A2377: call    KiInterruptSubDispatchNoLockNoEtw
 * 00000001406A237C: mov     rsp, [rsp+20h+var_10]
 * 00000001406A2381: mov     rcx, rsi
 * 00000001406A2384: call    HalPerformEndOfInterrupt
 * 00000001406A2389: mov     rcx, gs:20h
 * 00000001406A2392: movzx   edx, byte ptr [rbp-57h]
 * 00000001406A2396: call    KiEndInterruptCycleAccumulation
 * 00000001406A239B: test    al, al
 * 00000001406A239D: jz      short loc_1406A23A4
 * 00000001406A239F: call    KiDpcInterruptBypass
 * 00000001406A23A4: movzx   ecx, byte ptr [rbp-57h]
 * 00000001406A23A8: cmp     cs:KiIrqlFlags, 0
 * 00000001406A23AF: jz      short loc_1406A23B8
 * 00000001406A23B1: call    KzSetIrqlUnsafe
 * 00000001406A23B6: jmp     short loc_1406A23BC
 * 00000001406A23B8: mov     cr8, rcx
 * 00000001406A23BC: mov     rsi, [rbp+0D0h]
 * 00000001406A23C3: test    byte ptr [rbp+0F0h], 1
 * 00000001406A23CA: jz      loc_1406A26C5
 * 00000001406A23D0: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406A23D7: jz      short loc_1406A23DC
 * 00000001406A23D9: stac
 * 00000001406A23DC: mov     rcx, gs:188h
 * 00000001406A23E5: test    byte ptr [rcx+0C2h], 3
 * 00000001406A23EC: jz      short loc_1406A2409
 * 00000001406A23EE: mov     ecx, 1
 * 00000001406A23F3: mov     cr8, rcx
 * 00000001406A23F7: sti
 * 00000001406A23F8: call    KiInitiateUserApc
 * 00000001406A23FD: cli
 * 00000001406A23FE: mov     ecx, 0
 * 00000001406A2403: mov     cr8, rcx
 * 00000001406A2407: jmp     short loc_1406A23DC
 * 00000001406A2409: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406A240E: test    eax, eax
 * 00000001406A2410: mov     rax, [rbp-50h]
 * 00000001406A2414: jnz     short loc_1406A23DC
 * 00000001406A2416: test    byte ptr gs:860h, 2
 * 00000001406A241F: jz      short loc_1406A2428
 * 00000001406A2421: xor     ecx, ecx
 * 00000001406A2423: call    KiUpdateStibpPairing
 * 00000001406A2428: mov     rcx, gs:188h
 * 00000001406A2431: test    dword ptr [rcx], 8000000h
 * 00000001406A2437: jz      short loc_1406A243E
 * 00000001406A2439: call    KiRestoreSetContextState
 * 00000001406A243E: mov     rcx, gs:188h
 * 00000001406A2447: test    dword ptr [rcx], 10000h
 * 00000001406A244D: jz      short loc_1406A2463
 * 00000001406A244F: test    byte ptr [rcx+2], 1
 * 00000001406A2453: jz      short loc_1406A2463
 * 00000001406A2455: call    KiCopyCounters
 * 00000001406A245A: mov     rcx, gs:188h
 * 00000001406A2463: ldmxcsr dword ptr [rbp-54h]
 * 00000001406A2467: cmp     word ptr [rbp+80h], 0
 * 00000001406A246F: jz      short loc_1406A2476
 * 00000001406A2471: call    KiRestoreDebugRegisterState
 * 00000001406A2476: mov     rcx, gs:188h
 * 00000001406A247F: bt      dword ptr [rcx+74h], 16h
 * 00000001406A2484: jnb     short loc_1406A24B0
 * 00000001406A2486: xor     ecx, ecx
 * 00000001406A2488: rdsspq  rcx
 * 00000001406A248D: mov     r8, gs:9D28h
 * 00000001406A2496: add     r8, 8
 * 00000001406A249A: cmp     rcx, r8
 * 00000001406A249D: jnz     short loc_1406A24B0
 * 00000001406A249F: mov     rcx, gs:9D20h
 * 00000001406A24A8: rstorssp qword ptr [rcx]
 * 00000001406A24AC: saveprevssp
 * 00000001406A24B0: mov     byte ptr gs:85Eh, 0
 * 00000001406A24B9: movzx   eax, word ptr gs:86Ch
 * 00000001406A24C2: cmp     gs:866h, ax
 * 00000001406A24CB: jz      short loc_1406A24DF
 * 00000001406A24CD: mov     gs:866h, ax
 * 00000001406A24D6: mov     ecx, 48h ; 'H'
 * 00000001406A24DB: xor     edx, edx
 * 00000001406A24DD: wrmsr
 * 00000001406A24DF: btr     word ptr gs:858h, 2
 * 00000001406A24EA: jnb     short loc_1406A24FA
 * 00000001406A24EC: mov     eax, 1
 * 00000001406A24F1: xor     edx, edx
 * 00000001406A24F3: mov     ecx, 49h ; 'I'
 * 00000001406A24F8: wrmsr
 * 00000001406A24FA: btr     word ptr gs:858h, 5
 * 00000001406A2505: jnb     loc_1406A2642
 * 00000001406A250B: call    loc_1406A261E
 * 00000001406A2510: add     rsp, 8
 * 00000001406A2514: call    loc_1406A2627
 * 00000001406A2519: add     rsp, 8
 * 00000001406A251D: call    loc_1406A2510
 * 00000001406A2522: add     rsp, 8
 * 00000001406A2526: call    loc_1406A2519
 * 00000001406A252B: add     rsp, 8
 * 00000001406A252F: call    loc_1406A2522
 * 00000001406A2534: add     rsp, 8
 * 00000001406A2538: call    loc_1406A252B
 * 00000001406A253D: add     rsp, 8
 * 00000001406A2541: call    loc_1406A2534
 * 00000001406A2546: add     rsp, 8
 * 00000001406A254A: call    loc_1406A253D
 * 00000001406A254F: add     rsp, 8
 * 00000001406A2553: call    loc_1406A2546
 * 00000001406A2558: add     rsp, 8
 * 00000001406A255C: call    loc_1406A254F
 * 00000001406A2561: add     rsp, 8
 * 00000001406A2565: call    loc_1406A2558
 * 00000001406A256A: add     rsp, 8
 * 00000001406A256E: call    loc_1406A2561
 * 00000001406A2573: add     rsp, 8
 * 00000001406A2577: call    loc_1406A256A
 * 00000001406A257C: add     rsp, 8
 * 00000001406A2580: call    loc_1406A2573
 * 00000001406A2585: add     rsp, 8
 * 00000001406A2589: call    loc_1406A257C
 * 00000001406A258E: add     rsp, 8
 * 00000001406A2592: call    loc_1406A2585
 * 00000001406A2597: add     rsp, 8
 * 00000001406A259B: call    loc_1406A258E
 * 00000001406A25A0: add     rsp, 8
 * 00000001406A25A4: call    loc_1406A2597
 * 00000001406A25A9: add     rsp, 8
 * 00000001406A25AD: call    loc_1406A25A0
 * 00000001406A25B2: add     rsp, 8
 * 00000001406A25B6: call    loc_1406A25A9
 * 00000001406A25BB: add     rsp, 8
 * 00000001406A25BF: call    loc_1406A25B2
 * 00000001406A25C4: add     rsp, 8
 * 00000001406A25C8: call    loc_1406A25BB
 * 00000001406A25CD: add     rsp, 8
 * 00000001406A25D1: call    loc_1406A25C4
 * 00000001406A25D6: add     rsp, 8
 * 00000001406A25DA: call    loc_1406A25CD
 * 00000001406A25DF: add     rsp, 8
 * 00000001406A25E3: call    loc_1406A25D6
 * 00000001406A25E8: add     rsp, 8
 * 00000001406A25EC: call    loc_1406A25DF
 * 00000001406A25F1: add     rsp, 8
 * 00000001406A25F5: call    loc_1406A25E8
 * 00000001406A25FA: add     rsp, 8
 * 00000001406A25FE: call    loc_1406A25F1
 * 00000001406A2603: add     rsp, 8
 * 00000001406A2607: call    loc_1406A25FA
 * 00000001406A260C: add     rsp, 8
 * 00000001406A2610: call    loc_1406A2603
 * 00000001406A2615: add     rsp, 8
 * 00000001406A2619: call    loc_1406A260C
 * 00000001406A261E: add     rsp, 8
 * 00000001406A2622: call    loc_1406A2615
 * 00000001406A2627: add     rsp, 8
 * 00000001406A262B: mov     eax, 0DADAh
 * 00000001406A2630: test    byte ptr gs:85Ch, 8
 * 00000001406A2639: jz      short loc_1406A2642
 * 00000001406A263B: mov     al, 20h ; ' '
 * 00000001406A263D: incsspq rax
 * 00000001406A2642: test    word ptr gs:858h, 100h
 * 00000001406A264D: jz      short loc_1406A265B
 * 00000001406A264F: xor     eax, eax
 * 00000001406A2651: xor     edx, edx
 * 00000001406A2653: mov     ecx, 1
 * 00000001406A2658: div     rcx
 * 00000001406A265B: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406A265F: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406A2663: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406A2667: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406A266B: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406A266F: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406A2673: mov     r11, [rbp-20h]
 * 00000001406A2677: mov     r10, [rbp-28h]
 * 00000001406A267B: mov     r9, [rbp-30h]
 * 00000001406A267F: mov     r8, [rbp-38h]
 * 00000001406A2683: mov     rdx, [rbp-40h]
 * 00000001406A2687: mov     rcx, [rbp-48h]
 * 00000001406A268B: mov     rax, [rbp-50h]
 * 00000001406A268F: mov     rsp, rbp
 * 00000001406A2692: mov     rbp, [rbp+0D8h]
 * 00000001406A2699: add     rsp, 0E8h
 * 00000001406A26A0: test    cs:KiKvaShadow, 1
 * 00000001406A26A7: jz      short loc_1406A26AE
 * 00000001406A26A9: jmp     KiKernelExit
 * 00000001406A26AE: test    word ptr gs:858h, 200h
 * 00000001406A26B9: jz      short loc_1406A26C0
 * 00000001406A26BB: verw    [rsp-1C8h+arg_1E0]
 * 00000001406A26C0: swapgs
 * 00000001406A26C3: iretq
 * 00000001406A26C5: ldmxcsr dword ptr [rbp-54h]
 * 00000001406A26C9: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406A26CD: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406A26D1: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406A26D5: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406A26D9: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406A26DD: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406A26E1: mov     r11, [rbp-20h]
 * 00000001406A26E5: mov     r10, [rbp-28h]
 * 00000001406A26E9: mov     r9, [rbp-30h]
 * 00000001406A26ED: mov     r8, [rbp-38h]
 * 00000001406A26F1: mov     rdx, [rbp-40h]
 * 00000001406A26F5: mov     rcx, [rbp-48h]
 * 00000001406A26F9: mov     rax, [rbp-50h]
 * 00000001406A26FD: mov     rsp, rbp
 * 00000001406A2700: mov     rbp, [rbp+0D8h]
 * 00000001406A2707: add     rsp, 0E8h
 * 00000001406A270E: iretq
 */
