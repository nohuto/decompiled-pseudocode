/*
 * XREFs of KiInterruptDispatchNoLockNoEtw @ 0x1406AD610
 * Callers:
 *     <none>
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14025F5D0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiEndInterruptCycleAccumulation @ 0x14034A8A0 (KiEndInterruptCycleAccumulation.c)
 *     KiUpdateStibpPairing @ 0x1403EB760 (KiUpdateStibpPairing.c)
 *     HalPerformEndOfInterrupt @ 0x140418370 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1404FBC10 (KiRestoreDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405B7800 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405BF250 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x1406AAFC0 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1406ACDF0 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1406AD610 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInitiateUserApc @ 0x1406AF860 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1406B2200 (KiDpcInterruptBypass.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLockNoEtw @ 0x1406AD610
 * Reason: Hex-Rays returned no pseudocode for 0x1406AD610
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406AD610: mov     rcx, gs:9158h
 * 00000001406AD619: mov     rax, rcx
 * 00000001406AD61C: mov     edx, cs:KeIsrStackSize
 * 00000001406AD622: sub     rax, rdx
 * 00000001406AD625: mov     rdx, rsp
 * 00000001406AD628: cmp     rax, rsp
 * 00000001406AD62B: ja      short loc_1406AD632
 * 00000001406AD62D: cmp     rsp, rcx
 * 00000001406AD630: jb      short loc_1406AD63E
 * 00000001406AD632: cmp     cs:KiBugCheckActive, 0
 * 00000001406AD639: jnz     short loc_1406AD63E
 * 00000001406AD63B: mov     rsp, rcx
 * 00000001406AD63E: sub     rsp, 20h
 * 00000001406AD642: mov     [rsp+20h+var_10], rdx
 * 00000001406AD647: call    KiInterruptSubDispatchNoLockNoEtw
 * 00000001406AD64C: mov     rsp, [rsp+20h+var_10]
 * 00000001406AD651: mov     rcx, rsi
 * 00000001406AD654: call    HalPerformEndOfInterrupt
 * 00000001406AD659: mov     rcx, gs:20h
 * 00000001406AD662: movzx   edx, byte ptr [rbp-57h]
 * 00000001406AD666: call    KiEndInterruptCycleAccumulation
 * 00000001406AD66B: test    al, al
 * 00000001406AD66D: jz      short loc_1406AD674
 * 00000001406AD66F: call    KiDpcInterruptBypass
 * 00000001406AD674: movzx   ecx, byte ptr [rbp-57h]
 * 00000001406AD678: cmp     cs:KiIrqlFlags, 0
 * 00000001406AD67F: jz      short loc_1406AD688
 * 00000001406AD681: call    KzSetIrqlUnsafe
 * 00000001406AD686: jmp     short loc_1406AD68C
 * 00000001406AD688: mov     cr8, rcx
 * 00000001406AD68C: mov     rsi, [rbp+0D0h]
 * 00000001406AD693: test    byte ptr [rbp+0F0h], 1
 * 00000001406AD69A: jz      loc_1406AD995
 * 00000001406AD6A0: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406AD6A7: jz      short loc_1406AD6AC
 * 00000001406AD6A9: stac
 * 00000001406AD6AC: mov     rcx, gs:188h
 * 00000001406AD6B5: test    byte ptr [rcx+0C2h], 3
 * 00000001406AD6BC: jz      short loc_1406AD6D9
 * 00000001406AD6BE: mov     ecx, 1
 * 00000001406AD6C3: mov     cr8, rcx
 * 00000001406AD6C7: sti
 * 00000001406AD6C8: call    KiInitiateUserApc
 * 00000001406AD6CD: cli
 * 00000001406AD6CE: mov     ecx, 0
 * 00000001406AD6D3: mov     cr8, rcx
 * 00000001406AD6D7: jmp     short loc_1406AD6AC
 * 00000001406AD6D9: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406AD6DE: test    eax, eax
 * 00000001406AD6E0: mov     rax, [rbp-50h]
 * 00000001406AD6E4: jnz     short loc_1406AD6AC
 * 00000001406AD6E6: test    byte ptr gs:860h, 2
 * 00000001406AD6EF: jz      short loc_1406AD6F8
 * 00000001406AD6F1: xor     ecx, ecx
 * 00000001406AD6F3: call    KiUpdateStibpPairing
 * 00000001406AD6F8: mov     rcx, gs:188h
 * 00000001406AD701: test    dword ptr [rcx], 8000000h
 * 00000001406AD707: jz      short loc_1406AD70E
 * 00000001406AD709: call    KiRestoreSetContextState
 * 00000001406AD70E: mov     rcx, gs:188h
 * 00000001406AD717: test    dword ptr [rcx], 10000h
 * 00000001406AD71D: jz      short loc_1406AD733
 * 00000001406AD71F: test    byte ptr [rcx+2], 1
 * 00000001406AD723: jz      short loc_1406AD733
 * 00000001406AD725: call    KiCopyCounters
 * 00000001406AD72A: mov     rcx, gs:188h
 * 00000001406AD733: ldmxcsr dword ptr [rbp-54h]
 * 00000001406AD737: cmp     word ptr [rbp+80h], 0
 * 00000001406AD73F: jz      short loc_1406AD746
 * 00000001406AD741: call    KiRestoreDebugRegisterState
 * 00000001406AD746: mov     rcx, gs:188h
 * 00000001406AD74F: bt      dword ptr [rcx+74h], 16h
 * 00000001406AD754: jnb     short loc_1406AD780
 * 00000001406AD756: xor     ecx, ecx
 * 00000001406AD758: rdsspq  rcx
 * 00000001406AD75D: mov     r8, gs:9D28h
 * 00000001406AD766: add     r8, 8
 * 00000001406AD76A: cmp     rcx, r8
 * 00000001406AD76D: jnz     short loc_1406AD780
 * 00000001406AD76F: mov     rcx, gs:9D20h
 * 00000001406AD778: rstorssp qword ptr [rcx]
 * 00000001406AD77C: saveprevssp
 * 00000001406AD780: mov     byte ptr gs:85Eh, 0
 * 00000001406AD789: movzx   eax, word ptr gs:86Ch
 * 00000001406AD792: cmp     gs:866h, ax
 * 00000001406AD79B: jz      short loc_1406AD7AF
 * 00000001406AD79D: mov     gs:866h, ax
 * 00000001406AD7A6: mov     ecx, 48h ; 'H'
 * 00000001406AD7AB: xor     edx, edx
 * 00000001406AD7AD: wrmsr
 * 00000001406AD7AF: btr     word ptr gs:858h, 2
 * 00000001406AD7BA: jnb     short loc_1406AD7CA
 * 00000001406AD7BC: mov     eax, 1
 * 00000001406AD7C1: xor     edx, edx
 * 00000001406AD7C3: mov     ecx, 49h ; 'I'
 * 00000001406AD7C8: wrmsr
 * 00000001406AD7CA: btr     word ptr gs:858h, 5
 * 00000001406AD7D5: jnb     loc_1406AD912
 * 00000001406AD7DB: call    loc_1406AD8EE
 * 00000001406AD7E0: add     rsp, 8
 * 00000001406AD7E4: call    loc_1406AD8F7
 * 00000001406AD7E9: add     rsp, 8
 * 00000001406AD7ED: call    loc_1406AD7E0
 * 00000001406AD7F2: add     rsp, 8
 * 00000001406AD7F6: call    loc_1406AD7E9
 * 00000001406AD7FB: add     rsp, 8
 * 00000001406AD7FF: call    loc_1406AD7F2
 * 00000001406AD804: add     rsp, 8
 * 00000001406AD808: call    loc_1406AD7FB
 * 00000001406AD80D: add     rsp, 8
 * 00000001406AD811: call    loc_1406AD804
 * 00000001406AD816: add     rsp, 8
 * 00000001406AD81A: call    loc_1406AD80D
 * 00000001406AD81F: add     rsp, 8
 * 00000001406AD823: call    loc_1406AD816
 * 00000001406AD828: add     rsp, 8
 * 00000001406AD82C: call    loc_1406AD81F
 * 00000001406AD831: add     rsp, 8
 * 00000001406AD835: call    loc_1406AD828
 * 00000001406AD83A: add     rsp, 8
 * 00000001406AD83E: call    loc_1406AD831
 * 00000001406AD843: add     rsp, 8
 * 00000001406AD847: call    loc_1406AD83A
 * 00000001406AD84C: add     rsp, 8
 * 00000001406AD850: call    loc_1406AD843
 * 00000001406AD855: add     rsp, 8
 * 00000001406AD859: call    loc_1406AD84C
 * 00000001406AD85E: add     rsp, 8
 * 00000001406AD862: call    loc_1406AD855
 * 00000001406AD867: add     rsp, 8
 * 00000001406AD86B: call    loc_1406AD85E
 * 00000001406AD870: add     rsp, 8
 * 00000001406AD874: call    loc_1406AD867
 * 00000001406AD879: add     rsp, 8
 * 00000001406AD87D: call    loc_1406AD870
 * 00000001406AD882: add     rsp, 8
 * 00000001406AD886: call    loc_1406AD879
 * 00000001406AD88B: add     rsp, 8
 * 00000001406AD88F: call    loc_1406AD882
 * 00000001406AD894: add     rsp, 8
 * 00000001406AD898: call    loc_1406AD88B
 * 00000001406AD89D: add     rsp, 8
 * 00000001406AD8A1: call    loc_1406AD894
 * 00000001406AD8A6: add     rsp, 8
 * 00000001406AD8AA: call    loc_1406AD89D
 * 00000001406AD8AF: add     rsp, 8
 * 00000001406AD8B3: call    loc_1406AD8A6
 * 00000001406AD8B8: add     rsp, 8
 * 00000001406AD8BC: call    loc_1406AD8AF
 * 00000001406AD8C1: add     rsp, 8
 * 00000001406AD8C5: call    loc_1406AD8B8
 * 00000001406AD8CA: add     rsp, 8
 * 00000001406AD8CE: call    loc_1406AD8C1
 * 00000001406AD8D3: add     rsp, 8
 * 00000001406AD8D7: call    loc_1406AD8CA
 * 00000001406AD8DC: add     rsp, 8
 * 00000001406AD8E0: call    loc_1406AD8D3
 * 00000001406AD8E5: add     rsp, 8
 * 00000001406AD8E9: call    loc_1406AD8DC
 * 00000001406AD8EE: add     rsp, 8
 * 00000001406AD8F2: call    loc_1406AD8E5
 * 00000001406AD8F7: add     rsp, 8
 * 00000001406AD8FB: mov     eax, 0DADAh
 * 00000001406AD900: test    byte ptr gs:85Ch, 8
 * 00000001406AD909: jz      short loc_1406AD912
 * 00000001406AD90B: mov     al, 20h ; ' '
 * 00000001406AD90D: incsspq rax
 * 00000001406AD912: test    word ptr gs:858h, 100h
 * 00000001406AD91D: jz      short loc_1406AD92B
 * 00000001406AD91F: xor     eax, eax
 * 00000001406AD921: xor     edx, edx
 * 00000001406AD923: mov     ecx, 1
 * 00000001406AD928: div     rcx
 * 00000001406AD92B: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406AD92F: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406AD933: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406AD937: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406AD93B: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406AD93F: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406AD943: mov     r11, [rbp-20h]
 * 00000001406AD947: mov     r10, [rbp-28h]
 * 00000001406AD94B: mov     r9, [rbp-30h]
 * 00000001406AD94F: mov     r8, [rbp-38h]
 * 00000001406AD953: mov     rdx, [rbp-40h]
 * 00000001406AD957: mov     rcx, [rbp-48h]
 * 00000001406AD95B: mov     rax, [rbp-50h]
 * 00000001406AD95F: mov     rsp, rbp
 * 00000001406AD962: mov     rbp, [rbp+0D8h]
 * 00000001406AD969: add     rsp, 0E8h
 * 00000001406AD970: test    cs:KiKvaShadow, 1
 * 00000001406AD977: jz      short loc_1406AD97E
 * 00000001406AD979: jmp     KiKernelExit
 * 00000001406AD97E: test    word ptr gs:858h, 200h
 * 00000001406AD989: jz      short loc_1406AD990
 * 00000001406AD98B: verw    [rsp-1C8h+arg_1E0]
 * 00000001406AD990: swapgs
 * 00000001406AD993: iretq
 * 00000001406AD995: ldmxcsr dword ptr [rbp-54h]
 * 00000001406AD999: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406AD99D: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406AD9A1: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406AD9A5: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406AD9A9: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406AD9AD: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406AD9B1: mov     r11, [rbp-20h]
 * 00000001406AD9B5: mov     r10, [rbp-28h]
 * 00000001406AD9B9: mov     r9, [rbp-30h]
 * 00000001406AD9BD: mov     r8, [rbp-38h]
 * 00000001406AD9C1: mov     rdx, [rbp-40h]
 * 00000001406AD9C5: mov     rcx, [rbp-48h]
 * 00000001406AD9C9: mov     rax, [rbp-50h]
 * 00000001406AD9CD: mov     rsp, rbp
 * 00000001406AD9D0: mov     rbp, [rbp+0D8h]
 * 00000001406AD9D7: add     rsp, 0E8h
 * 00000001406AD9DE: iretq
 */
