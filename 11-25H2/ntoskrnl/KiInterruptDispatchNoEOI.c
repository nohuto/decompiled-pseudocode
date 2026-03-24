/*
 * XREFs of KiInterruptDispatchNoEOI @ 0x1406A2720
 * Callers:
 *     <none>
 * Callees:
 *     KiEndInterruptCycleAccumulation @ 0x14028EFB0 (KiEndInterruptCycleAccumulation.c)
 *     KiUpdateStibpPairing @ 0x1403E3F50 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403EF6C0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiRestoreDebugRegisterState @ 0x1404F9500 (KiRestoreDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405B3940 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405BB410 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x14069FCF0 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLock @ 0x1406A1A80 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptDispatchNoEOI @ 0x1406A2720 (KiInterruptDispatchNoEOI.c)
 *     KiInitiateUserApc @ 0x1406A4590 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1406A6F30 (KiDpcInterruptBypass.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoEOI @ 0x1406A2720
 * Reason: Hex-Rays returned no pseudocode for 0x1406A2720
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406A2720: mov     rcx, gs:9158h
 * 00000001406A2729: mov     rax, rcx
 * 00000001406A272C: mov     edx, cs:KeIsrStackSize
 * 00000001406A2732: sub     rax, rdx
 * 00000001406A2735: mov     rdx, rsp
 * 00000001406A2738: cmp     rax, rsp
 * 00000001406A273B: ja      short loc_1406A2742
 * 00000001406A273D: cmp     rsp, rcx
 * 00000001406A2740: jb      short loc_1406A274E
 * 00000001406A2742: cmp     cs:KiBugCheckActive, 0
 * 00000001406A2749: jnz     short loc_1406A274E
 * 00000001406A274B: mov     rsp, rcx
 * 00000001406A274E: sub     rsp, 20h
 * 00000001406A2752: mov     [rsp+20h+var_10], rdx
 * 00000001406A2757: call    KiInterruptSubDispatchNoLock
 * 00000001406A275C: mov     rsp, [rsp+20h+var_10]
 * 00000001406A2761: mov     rcx, gs:20h
 * 00000001406A276A: movzx   edx, byte ptr [rbp-57h]
 * 00000001406A276E: call    KiEndInterruptCycleAccumulation
 * 00000001406A2773: test    al, al
 * 00000001406A2775: jz      short loc_1406A277C
 * 00000001406A2777: call    KiDpcInterruptBypass
 * 00000001406A277C: movzx   ecx, byte ptr [rbp-57h]
 * 00000001406A2780: cmp     cs:KiIrqlFlags, 0
 * 00000001406A2787: jz      short loc_1406A2790
 * 00000001406A2789: call    KzSetIrqlUnsafe
 * 00000001406A278E: jmp     short loc_1406A2794
 * 00000001406A2790: mov     cr8, rcx
 * 00000001406A2794: mov     rsi, [rbp+0D0h]
 * 00000001406A279B: test    byte ptr [rbp+0F0h], 1
 * 00000001406A27A2: jz      loc_1406A2A9D
 * 00000001406A27A8: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406A27AF: jz      short loc_1406A27B4
 * 00000001406A27B1: stac
 * 00000001406A27B4: mov     rcx, gs:188h
 * 00000001406A27BD: test    byte ptr [rcx+0C2h], 3
 * 00000001406A27C4: jz      short loc_1406A27E1
 * 00000001406A27C6: mov     ecx, 1
 * 00000001406A27CB: mov     cr8, rcx
 * 00000001406A27CF: sti
 * 00000001406A27D0: call    KiInitiateUserApc
 * 00000001406A27D5: cli
 * 00000001406A27D6: mov     ecx, 0
 * 00000001406A27DB: mov     cr8, rcx
 * 00000001406A27DF: jmp     short loc_1406A27B4
 * 00000001406A27E1: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406A27E6: test    eax, eax
 * 00000001406A27E8: mov     rax, [rbp-50h]
 * 00000001406A27EC: jnz     short loc_1406A27B4
 * 00000001406A27EE: test    byte ptr gs:860h, 2
 * 00000001406A27F7: jz      short loc_1406A2800
 * 00000001406A27F9: xor     ecx, ecx
 * 00000001406A27FB: call    KiUpdateStibpPairing
 * 00000001406A2800: mov     rcx, gs:188h
 * 00000001406A2809: test    dword ptr [rcx], 8000000h
 * 00000001406A280F: jz      short loc_1406A2816
 * 00000001406A2811: call    KiRestoreSetContextState
 * 00000001406A2816: mov     rcx, gs:188h
 * 00000001406A281F: test    dword ptr [rcx], 10000h
 * 00000001406A2825: jz      short loc_1406A283B
 * 00000001406A2827: test    byte ptr [rcx+2], 1
 * 00000001406A282B: jz      short loc_1406A283B
 * 00000001406A282D: call    KiCopyCounters
 * 00000001406A2832: mov     rcx, gs:188h
 * 00000001406A283B: ldmxcsr dword ptr [rbp-54h]
 * 00000001406A283F: cmp     word ptr [rbp+80h], 0
 * 00000001406A2847: jz      short loc_1406A284E
 * 00000001406A2849: call    KiRestoreDebugRegisterState
 * 00000001406A284E: mov     rcx, gs:188h
 * 00000001406A2857: bt      dword ptr [rcx+74h], 16h
 * 00000001406A285C: jnb     short loc_1406A2888
 * 00000001406A285E: xor     ecx, ecx
 * 00000001406A2860: rdsspq  rcx
 * 00000001406A2865: mov     r8, gs:9D28h
 * 00000001406A286E: add     r8, 8
 * 00000001406A2872: cmp     rcx, r8
 * 00000001406A2875: jnz     short loc_1406A2888
 * 00000001406A2877: mov     rcx, gs:9D20h
 * 00000001406A2880: rstorssp qword ptr [rcx]
 * 00000001406A2884: saveprevssp
 * 00000001406A2888: mov     byte ptr gs:85Eh, 0
 * 00000001406A2891: movzx   eax, word ptr gs:86Ch
 * 00000001406A289A: cmp     gs:866h, ax
 * 00000001406A28A3: jz      short loc_1406A28B7
 * 00000001406A28A5: mov     gs:866h, ax
 * 00000001406A28AE: mov     ecx, 48h ; 'H'
 * 00000001406A28B3: xor     edx, edx
 * 00000001406A28B5: wrmsr
 * 00000001406A28B7: btr     word ptr gs:858h, 2
 * 00000001406A28C2: jnb     short loc_1406A28D2
 * 00000001406A28C4: mov     eax, 1
 * 00000001406A28C9: xor     edx, edx
 * 00000001406A28CB: mov     ecx, 49h ; 'I'
 * 00000001406A28D0: wrmsr
 * 00000001406A28D2: btr     word ptr gs:858h, 5
 * 00000001406A28DD: jnb     loc_1406A2A1A
 * 00000001406A28E3: call    loc_1406A29F6
 * 00000001406A28E8: add     rsp, 8
 * 00000001406A28EC: call    loc_1406A29FF
 * 00000001406A28F1: add     rsp, 8
 * 00000001406A28F5: call    loc_1406A28E8
 * 00000001406A28FA: add     rsp, 8
 * 00000001406A28FE: call    loc_1406A28F1
 * 00000001406A2903: add     rsp, 8
 * 00000001406A2907: call    loc_1406A28FA
 * 00000001406A290C: add     rsp, 8
 * 00000001406A2910: call    loc_1406A2903
 * 00000001406A2915: add     rsp, 8
 * 00000001406A2919: call    loc_1406A290C
 * 00000001406A291E: add     rsp, 8
 * 00000001406A2922: call    loc_1406A2915
 * 00000001406A2927: add     rsp, 8
 * 00000001406A292B: call    loc_1406A291E
 * 00000001406A2930: add     rsp, 8
 * 00000001406A2934: call    loc_1406A2927
 * 00000001406A2939: add     rsp, 8
 * 00000001406A293D: call    loc_1406A2930
 * 00000001406A2942: add     rsp, 8
 * 00000001406A2946: call    loc_1406A2939
 * 00000001406A294B: add     rsp, 8
 * 00000001406A294F: call    loc_1406A2942
 * 00000001406A2954: add     rsp, 8
 * 00000001406A2958: call    loc_1406A294B
 * 00000001406A295D: add     rsp, 8
 * 00000001406A2961: call    loc_1406A2954
 * 00000001406A2966: add     rsp, 8
 * 00000001406A296A: call    loc_1406A295D
 * 00000001406A296F: add     rsp, 8
 * 00000001406A2973: call    loc_1406A2966
 * 00000001406A2978: add     rsp, 8
 * 00000001406A297C: call    loc_1406A296F
 * 00000001406A2981: add     rsp, 8
 * 00000001406A2985: call    loc_1406A2978
 * 00000001406A298A: add     rsp, 8
 * 00000001406A298E: call    loc_1406A2981
 * 00000001406A2993: add     rsp, 8
 * 00000001406A2997: call    loc_1406A298A
 * 00000001406A299C: add     rsp, 8
 * 00000001406A29A0: call    loc_1406A2993
 * 00000001406A29A5: add     rsp, 8
 * 00000001406A29A9: call    loc_1406A299C
 * 00000001406A29AE: add     rsp, 8
 * 00000001406A29B2: call    loc_1406A29A5
 * 00000001406A29B7: add     rsp, 8
 * 00000001406A29BB: call    loc_1406A29AE
 * 00000001406A29C0: add     rsp, 8
 * 00000001406A29C4: call    loc_1406A29B7
 * 00000001406A29C9: add     rsp, 8
 * 00000001406A29CD: call    loc_1406A29C0
 * 00000001406A29D2: add     rsp, 8
 * 00000001406A29D6: call    loc_1406A29C9
 * 00000001406A29DB: add     rsp, 8
 * 00000001406A29DF: call    loc_1406A29D2
 * 00000001406A29E4: add     rsp, 8
 * 00000001406A29E8: call    loc_1406A29DB
 * 00000001406A29ED: add     rsp, 8
 * 00000001406A29F1: call    loc_1406A29E4
 * 00000001406A29F6: add     rsp, 8
 * 00000001406A29FA: call    loc_1406A29ED
 * 00000001406A29FF: add     rsp, 8
 * 00000001406A2A03: mov     eax, 0DADAh
 * 00000001406A2A08: test    byte ptr gs:85Ch, 8
 * 00000001406A2A11: jz      short loc_1406A2A1A
 * 00000001406A2A13: mov     al, 20h ; ' '
 * 00000001406A2A15: incsspq rax
 * 00000001406A2A1A: test    word ptr gs:858h, 100h
 * 00000001406A2A25: jz      short loc_1406A2A33
 * 00000001406A2A27: xor     eax, eax
 * 00000001406A2A29: xor     edx, edx
 * 00000001406A2A2B: mov     ecx, 1
 * 00000001406A2A30: div     rcx
 * 00000001406A2A33: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406A2A37: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406A2A3B: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406A2A3F: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406A2A43: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406A2A47: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406A2A4B: mov     r11, [rbp-20h]
 * 00000001406A2A4F: mov     r10, [rbp-28h]
 * 00000001406A2A53: mov     r9, [rbp-30h]
 * 00000001406A2A57: mov     r8, [rbp-38h]
 * 00000001406A2A5B: mov     rdx, [rbp-40h]
 * 00000001406A2A5F: mov     rcx, [rbp-48h]
 * 00000001406A2A63: mov     rax, [rbp-50h]
 * 00000001406A2A67: mov     rsp, rbp
 * 00000001406A2A6A: mov     rbp, [rbp+0D8h]
 * 00000001406A2A71: add     rsp, 0E8h
 * 00000001406A2A78: test    cs:KiKvaShadow, 1
 * 00000001406A2A7F: jz      short loc_1406A2A86
 * 00000001406A2A81: jmp     KiKernelExit
 * 00000001406A2A86: test    word ptr gs:858h, 200h
 * 00000001406A2A91: jz      short loc_1406A2A98
 * 00000001406A2A93: verw    [rsp-1C8h+arg_1E0]
 * 00000001406A2A98: swapgs
 * 00000001406A2A9B: iretq
 * 00000001406A2A9D: ldmxcsr dword ptr [rbp-54h]
 * 00000001406A2AA1: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406A2AA5: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406A2AA9: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406A2AAD: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406A2AB1: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406A2AB5: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406A2AB9: mov     r11, [rbp-20h]
 * 00000001406A2ABD: mov     r10, [rbp-28h]
 * 00000001406A2AC1: mov     r9, [rbp-30h]
 * 00000001406A2AC5: mov     r8, [rbp-38h]
 * 00000001406A2AC9: mov     rdx, [rbp-40h]
 * 00000001406A2ACD: mov     rcx, [rbp-48h]
 * 00000001406A2AD1: mov     rax, [rbp-50h]
 * 00000001406A2AD5: mov     rsp, rbp
 * 00000001406A2AD8: mov     rbp, [rbp+0D8h]
 * 00000001406A2ADF: add     rsp, 0E8h
 * 00000001406A2AE6: iretq
 */
