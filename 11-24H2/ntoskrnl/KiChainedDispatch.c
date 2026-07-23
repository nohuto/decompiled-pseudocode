/*
 * XREFs of KiChainedDispatch @ 0x1406AD740
 * Callers:
 *     <none>
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14028FBE0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiEndInterruptCycleAccumulation @ 0x140368D80 (KiEndInterruptCycleAccumulation.c)
 *     KiUpdateStibpPairing @ 0x1403DFC10 (KiUpdateStibpPairing.c)
 *     HalPerformEndOfInterrupt @ 0x140408120 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1404F94D0 (KiRestoreDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405B4DD0 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405BC880 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x1406ABF60 (KiRestoreSetContextState.c)
 *     KiChainedDispatch @ 0x1406AD740 (KiChainedDispatch.c)
 *     KiScanInterruptObjectList @ 0x1406ADB20 (KiScanInterruptObjectList.c)
 *     KiInitiateUserApc @ 0x1406B0800 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1406B31A0 (KiDpcInterruptBypass.c)
 */

/*
 * Hex-Rays decompilation failed for KiChainedDispatch @ 0x1406AD740
 * Reason: Hex-Rays returned no pseudocode for 0x1406AD740
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406AD740: mov     rcx, gs:9158h
 * 00000001406AD749: mov     rax, rcx
 * 00000001406AD74C: mov     edx, cs:KeIsrStackSize
 * 00000001406AD752: sub     rax, rdx
 * 00000001406AD755: mov     rdx, rsp
 * 00000001406AD758: cmp     rax, rsp
 * 00000001406AD75B: ja      short loc_1406AD762
 * 00000001406AD75D: cmp     rsp, rcx
 * 00000001406AD760: jb      short loc_1406AD76E
 * 00000001406AD762: cmp     cs:KiBugCheckActive, 0
 * 00000001406AD769: jnz     short loc_1406AD76E
 * 00000001406AD76B: mov     rsp, rcx
 * 00000001406AD76E: sub     rsp, 20h
 * 00000001406AD772: mov     [rsp+20h+var_10], rdx
 * 00000001406AD777: call    KiScanInterruptObjectList
 * 00000001406AD77C: mov     rsp, [rsp+20h+var_10]
 * 00000001406AD781: mov     rcx, rsi
 * 00000001406AD784: call    HalPerformEndOfInterrupt
 * 00000001406AD789: mov     rcx, gs:20h
 * 00000001406AD792: movzx   edx, byte ptr [rbp-57h]
 * 00000001406AD796: call    KiEndInterruptCycleAccumulation
 * 00000001406AD79B: test    al, al
 * 00000001406AD79D: jz      short loc_1406AD7A4
 * 00000001406AD79F: call    KiDpcInterruptBypass
 * 00000001406AD7A4: movzx   ecx, byte ptr [rbp-57h]
 * 00000001406AD7A8: cmp     cs:KiIrqlFlags, 0
 * 00000001406AD7AF: jz      short loc_1406AD7B8
 * 00000001406AD7B1: call    KzSetIrqlUnsafe
 * 00000001406AD7B6: jmp     short loc_1406AD7BC
 * 00000001406AD7B8: mov     cr8, rcx
 * 00000001406AD7BC: mov     rsi, [rbp+0D0h]
 * 00000001406AD7C3: test    byte ptr [rbp+0F0h], 1
 * 00000001406AD7CA: jz      loc_1406ADAC5
 * 00000001406AD7D0: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406AD7D7: jz      short loc_1406AD7DC
 * 00000001406AD7D9: stac
 * 00000001406AD7DC: mov     rcx, gs:188h
 * 00000001406AD7E5: test    byte ptr [rcx+0C2h], 3
 * 00000001406AD7EC: jz      short loc_1406AD809
 * 00000001406AD7EE: mov     ecx, 1
 * 00000001406AD7F3: mov     cr8, rcx
 * 00000001406AD7F7: sti
 * 00000001406AD7F8: call    KiInitiateUserApc
 * 00000001406AD7FD: cli
 * 00000001406AD7FE: mov     ecx, 0
 * 00000001406AD803: mov     cr8, rcx
 * 00000001406AD807: jmp     short loc_1406AD7DC
 * 00000001406AD809: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406AD80E: test    eax, eax
 * 00000001406AD810: mov     rax, [rbp-50h]
 * 00000001406AD814: jnz     short loc_1406AD7DC
 * 00000001406AD816: test    byte ptr gs:860h, 2
 * 00000001406AD81F: jz      short loc_1406AD828
 * 00000001406AD821: xor     ecx, ecx
 * 00000001406AD823: call    KiUpdateStibpPairing
 * 00000001406AD828: mov     rcx, gs:188h
 * 00000001406AD831: test    dword ptr [rcx], 8000000h
 * 00000001406AD837: jz      short loc_1406AD83E
 * 00000001406AD839: call    KiRestoreSetContextState
 * 00000001406AD83E: mov     rcx, gs:188h
 * 00000001406AD847: test    dword ptr [rcx], 10000h
 * 00000001406AD84D: jz      short loc_1406AD863
 * 00000001406AD84F: test    byte ptr [rcx+2], 1
 * 00000001406AD853: jz      short loc_1406AD863
 * 00000001406AD855: call    KiCopyCounters
 * 00000001406AD85A: mov     rcx, gs:188h
 * 00000001406AD863: ldmxcsr dword ptr [rbp-54h]
 * 00000001406AD867: cmp     word ptr [rbp+80h], 0
 * 00000001406AD86F: jz      short loc_1406AD876
 * 00000001406AD871: call    KiRestoreDebugRegisterState
 * 00000001406AD876: mov     rcx, gs:188h
 * 00000001406AD87F: bt      dword ptr [rcx+74h], 16h
 * 00000001406AD884: jnb     short loc_1406AD8B0
 * 00000001406AD886: xor     ecx, ecx
 * 00000001406AD888: rdsspq  rcx
 * 00000001406AD88D: mov     r8, gs:9D28h
 * 00000001406AD896: add     r8, 8
 * 00000001406AD89A: cmp     rcx, r8
 * 00000001406AD89D: jnz     short loc_1406AD8B0
 * 00000001406AD89F: mov     rcx, gs:9D20h
 * 00000001406AD8A8: rstorssp qword ptr [rcx]
 * 00000001406AD8AC: saveprevssp
 * 00000001406AD8B0: mov     byte ptr gs:85Eh, 0
 * 00000001406AD8B9: movzx   eax, word ptr gs:86Ch
 * 00000001406AD8C2: cmp     gs:866h, ax
 * 00000001406AD8CB: jz      short loc_1406AD8DF
 * 00000001406AD8CD: mov     gs:866h, ax
 * 00000001406AD8D6: mov     ecx, 48h ; 'H'
 * 00000001406AD8DB: xor     edx, edx
 * 00000001406AD8DD: wrmsr
 * 00000001406AD8DF: btr     word ptr gs:858h, 2
 * 00000001406AD8EA: jnb     short loc_1406AD8FA
 * 00000001406AD8EC: mov     eax, 1
 * 00000001406AD8F1: xor     edx, edx
 * 00000001406AD8F3: mov     ecx, 49h ; 'I'
 * 00000001406AD8F8: wrmsr
 * 00000001406AD8FA: btr     word ptr gs:858h, 5
 * 00000001406AD905: jnb     loc_1406ADA42
 * 00000001406AD90B: call    loc_1406ADA1E
 * 00000001406AD910: add     rsp, 8
 * 00000001406AD914: call    loc_1406ADA27
 * 00000001406AD919: add     rsp, 8
 * 00000001406AD91D: call    loc_1406AD910
 * 00000001406AD922: add     rsp, 8
 * 00000001406AD926: call    loc_1406AD919
 * 00000001406AD92B: add     rsp, 8
 * 00000001406AD92F: call    loc_1406AD922
 * 00000001406AD934: add     rsp, 8
 * 00000001406AD938: call    loc_1406AD92B
 * 00000001406AD93D: add     rsp, 8
 * 00000001406AD941: call    loc_1406AD934
 * 00000001406AD946: add     rsp, 8
 * 00000001406AD94A: call    loc_1406AD93D
 * 00000001406AD94F: add     rsp, 8
 * 00000001406AD953: call    loc_1406AD946
 * 00000001406AD958: add     rsp, 8
 * 00000001406AD95C: call    loc_1406AD94F
 * 00000001406AD961: add     rsp, 8
 * 00000001406AD965: call    loc_1406AD958
 * 00000001406AD96A: add     rsp, 8
 * 00000001406AD96E: call    loc_1406AD961
 * 00000001406AD973: add     rsp, 8
 * 00000001406AD977: call    loc_1406AD96A
 * 00000001406AD97C: add     rsp, 8
 * 00000001406AD980: call    loc_1406AD973
 * 00000001406AD985: add     rsp, 8
 * 00000001406AD989: call    loc_1406AD97C
 * 00000001406AD98E: add     rsp, 8
 * 00000001406AD992: call    loc_1406AD985
 * 00000001406AD997: add     rsp, 8
 * 00000001406AD99B: call    loc_1406AD98E
 * 00000001406AD9A0: add     rsp, 8
 * 00000001406AD9A4: call    loc_1406AD997
 * 00000001406AD9A9: add     rsp, 8
 * 00000001406AD9AD: call    loc_1406AD9A0
 * 00000001406AD9B2: add     rsp, 8
 * 00000001406AD9B6: call    loc_1406AD9A9
 * 00000001406AD9BB: add     rsp, 8
 * 00000001406AD9BF: call    loc_1406AD9B2
 * 00000001406AD9C4: add     rsp, 8
 * 00000001406AD9C8: call    loc_1406AD9BB
 * 00000001406AD9CD: add     rsp, 8
 * 00000001406AD9D1: call    loc_1406AD9C4
 * 00000001406AD9D6: add     rsp, 8
 * 00000001406AD9DA: call    loc_1406AD9CD
 * 00000001406AD9DF: add     rsp, 8
 * 00000001406AD9E3: call    loc_1406AD9D6
 * 00000001406AD9E8: add     rsp, 8
 * 00000001406AD9EC: call    loc_1406AD9DF
 * 00000001406AD9F1: add     rsp, 8
 * 00000001406AD9F5: call    loc_1406AD9E8
 * 00000001406AD9FA: add     rsp, 8
 * 00000001406AD9FE: call    loc_1406AD9F1
 * 00000001406ADA03: add     rsp, 8
 * 00000001406ADA07: call    loc_1406AD9FA
 * 00000001406ADA0C: add     rsp, 8
 * 00000001406ADA10: call    loc_1406ADA03
 * 00000001406ADA15: add     rsp, 8
 * 00000001406ADA19: call    loc_1406ADA0C
 * 00000001406ADA1E: add     rsp, 8
 * 00000001406ADA22: call    loc_1406ADA15
 * 00000001406ADA27: add     rsp, 8
 * 00000001406ADA2B: mov     eax, 0DADAh
 * 00000001406ADA30: test    byte ptr gs:85Ch, 8
 * 00000001406ADA39: jz      short loc_1406ADA42
 * 00000001406ADA3B: mov     al, 20h ; ' '
 * 00000001406ADA3D: incsspq rax
 * 00000001406ADA42: test    word ptr gs:858h, 100h
 * 00000001406ADA4D: jz      short loc_1406ADA5B
 * 00000001406ADA4F: xor     eax, eax
 * 00000001406ADA51: xor     edx, edx
 * 00000001406ADA53: mov     ecx, 1
 * 00000001406ADA58: div     rcx
 * 00000001406ADA5B: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406ADA5F: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406ADA63: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406ADA67: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406ADA6B: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406ADA6F: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406ADA73: mov     r11, [rbp-20h]
 * 00000001406ADA77: mov     r10, [rbp-28h]
 * 00000001406ADA7B: mov     r9, [rbp-30h]
 * 00000001406ADA7F: mov     r8, [rbp-38h]
 * 00000001406ADA83: mov     rdx, [rbp-40h]
 * 00000001406ADA87: mov     rcx, [rbp-48h]
 * 00000001406ADA8B: mov     rax, [rbp-50h]
 * 00000001406ADA8F: mov     rsp, rbp
 * 00000001406ADA92: mov     rbp, [rbp+0D8h]
 * 00000001406ADA99: add     rsp, 0E8h
 * 00000001406ADAA0: test    cs:KiKvaShadow, 1
 * 00000001406ADAA7: jz      short loc_1406ADAAE
 * 00000001406ADAA9: jmp     KiKernelExit
 * 00000001406ADAAE: test    word ptr gs:858h, 200h
 * 00000001406ADAB9: jz      short loc_1406ADAC0
 * 00000001406ADABB: verw    [rsp-1C8h+arg_1E0]
 * 00000001406ADAC0: swapgs
 * 00000001406ADAC3: iretq
 * 00000001406ADAC5: ldmxcsr dword ptr [rbp-54h]
 * 00000001406ADAC9: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406ADACD: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406ADAD1: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406ADAD5: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406ADAD9: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406ADADD: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406ADAE1: mov     r11, [rbp-20h]
 * 00000001406ADAE5: mov     r10, [rbp-28h]
 * 00000001406ADAE9: mov     r9, [rbp-30h]
 * 00000001406ADAED: mov     r8, [rbp-38h]
 * 00000001406ADAF1: mov     rdx, [rbp-40h]
 * 00000001406ADAF5: mov     rcx, [rbp-48h]
 * 00000001406ADAF9: mov     rax, [rbp-50h]
 * 00000001406ADAFD: mov     rsp, rbp
 * 00000001406ADB00: mov     rbp, [rbp+0D8h]
 * 00000001406ADB07: add     rsp, 0E8h
 * 00000001406ADB0E: iretq
 */
