/*
 * XREFs of KiChainedDispatch @ 0x1406AC7A0
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
 *     KiChainedDispatch @ 0x1406AC7A0 (KiChainedDispatch.c)
 *     KiScanInterruptObjectList @ 0x1406ACB80 (KiScanInterruptObjectList.c)
 *     KiInitiateUserApc @ 0x1406AF860 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1406B2200 (KiDpcInterruptBypass.c)
 */

/*
 * Hex-Rays decompilation failed for KiChainedDispatch @ 0x1406AC7A0
 * Reason: Hex-Rays returned no pseudocode for 0x1406AC7A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406AC7A0: mov     rcx, gs:9158h
 * 00000001406AC7A9: mov     rax, rcx
 * 00000001406AC7AC: mov     edx, cs:KeIsrStackSize
 * 00000001406AC7B2: sub     rax, rdx
 * 00000001406AC7B5: mov     rdx, rsp
 * 00000001406AC7B8: cmp     rax, rsp
 * 00000001406AC7BB: ja      short loc_1406AC7C2
 * 00000001406AC7BD: cmp     rsp, rcx
 * 00000001406AC7C0: jb      short loc_1406AC7CE
 * 00000001406AC7C2: cmp     cs:KiBugCheckActive, 0
 * 00000001406AC7C9: jnz     short loc_1406AC7CE
 * 00000001406AC7CB: mov     rsp, rcx
 * 00000001406AC7CE: sub     rsp, 20h
 * 00000001406AC7D2: mov     [rsp+20h+var_10], rdx
 * 00000001406AC7D7: call    KiScanInterruptObjectList
 * 00000001406AC7DC: mov     rsp, [rsp+20h+var_10]
 * 00000001406AC7E1: mov     rcx, rsi
 * 00000001406AC7E4: call    HalPerformEndOfInterrupt
 * 00000001406AC7E9: mov     rcx, gs:20h
 * 00000001406AC7F2: movzx   edx, byte ptr [rbp-57h]
 * 00000001406AC7F6: call    KiEndInterruptCycleAccumulation
 * 00000001406AC7FB: test    al, al
 * 00000001406AC7FD: jz      short loc_1406AC804
 * 00000001406AC7FF: call    KiDpcInterruptBypass
 * 00000001406AC804: movzx   ecx, byte ptr [rbp-57h]
 * 00000001406AC808: cmp     cs:KiIrqlFlags, 0
 * 00000001406AC80F: jz      short loc_1406AC818
 * 00000001406AC811: call    KzSetIrqlUnsafe
 * 00000001406AC816: jmp     short loc_1406AC81C
 * 00000001406AC818: mov     cr8, rcx
 * 00000001406AC81C: mov     rsi, [rbp+0D0h]
 * 00000001406AC823: test    byte ptr [rbp+0F0h], 1
 * 00000001406AC82A: jz      loc_1406ACB25
 * 00000001406AC830: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406AC837: jz      short loc_1406AC83C
 * 00000001406AC839: stac
 * 00000001406AC83C: mov     rcx, gs:188h
 * 00000001406AC845: test    byte ptr [rcx+0C2h], 3
 * 00000001406AC84C: jz      short loc_1406AC869
 * 00000001406AC84E: mov     ecx, 1
 * 00000001406AC853: mov     cr8, rcx
 * 00000001406AC857: sti
 * 00000001406AC858: call    KiInitiateUserApc
 * 00000001406AC85D: cli
 * 00000001406AC85E: mov     ecx, 0
 * 00000001406AC863: mov     cr8, rcx
 * 00000001406AC867: jmp     short loc_1406AC83C
 * 00000001406AC869: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406AC86E: test    eax, eax
 * 00000001406AC870: mov     rax, [rbp-50h]
 * 00000001406AC874: jnz     short loc_1406AC83C
 * 00000001406AC876: test    byte ptr gs:860h, 2
 * 00000001406AC87F: jz      short loc_1406AC888
 * 00000001406AC881: xor     ecx, ecx
 * 00000001406AC883: call    KiUpdateStibpPairing
 * 00000001406AC888: mov     rcx, gs:188h
 * 00000001406AC891: test    dword ptr [rcx], 8000000h
 * 00000001406AC897: jz      short loc_1406AC89E
 * 00000001406AC899: call    KiRestoreSetContextState
 * 00000001406AC89E: mov     rcx, gs:188h
 * 00000001406AC8A7: test    dword ptr [rcx], 10000h
 * 00000001406AC8AD: jz      short loc_1406AC8C3
 * 00000001406AC8AF: test    byte ptr [rcx+2], 1
 * 00000001406AC8B3: jz      short loc_1406AC8C3
 * 00000001406AC8B5: call    KiCopyCounters
 * 00000001406AC8BA: mov     rcx, gs:188h
 * 00000001406AC8C3: ldmxcsr dword ptr [rbp-54h]
 * 00000001406AC8C7: cmp     word ptr [rbp+80h], 0
 * 00000001406AC8CF: jz      short loc_1406AC8D6
 * 00000001406AC8D1: call    KiRestoreDebugRegisterState
 * 00000001406AC8D6: mov     rcx, gs:188h
 * 00000001406AC8DF: bt      dword ptr [rcx+74h], 16h
 * 00000001406AC8E4: jnb     short loc_1406AC910
 * 00000001406AC8E6: xor     ecx, ecx
 * 00000001406AC8E8: rdsspq  rcx
 * 00000001406AC8ED: mov     r8, gs:9D28h
 * 00000001406AC8F6: add     r8, 8
 * 00000001406AC8FA: cmp     rcx, r8
 * 00000001406AC8FD: jnz     short loc_1406AC910
 * 00000001406AC8FF: mov     rcx, gs:9D20h
 * 00000001406AC908: rstorssp qword ptr [rcx]
 * 00000001406AC90C: saveprevssp
 * 00000001406AC910: mov     byte ptr gs:85Eh, 0
 * 00000001406AC919: movzx   eax, word ptr gs:86Ch
 * 00000001406AC922: cmp     gs:866h, ax
 * 00000001406AC92B: jz      short loc_1406AC93F
 * 00000001406AC92D: mov     gs:866h, ax
 * 00000001406AC936: mov     ecx, 48h ; 'H'
 * 00000001406AC93B: xor     edx, edx
 * 00000001406AC93D: wrmsr
 * 00000001406AC93F: btr     word ptr gs:858h, 2
 * 00000001406AC94A: jnb     short loc_1406AC95A
 * 00000001406AC94C: mov     eax, 1
 * 00000001406AC951: xor     edx, edx
 * 00000001406AC953: mov     ecx, 49h ; 'I'
 * 00000001406AC958: wrmsr
 * 00000001406AC95A: btr     word ptr gs:858h, 5
 * 00000001406AC965: jnb     loc_1406ACAA2
 * 00000001406AC96B: call    loc_1406ACA7E
 * 00000001406AC970: add     rsp, 8
 * 00000001406AC974: call    loc_1406ACA87
 * 00000001406AC979: add     rsp, 8
 * 00000001406AC97D: call    loc_1406AC970
 * 00000001406AC982: add     rsp, 8
 * 00000001406AC986: call    loc_1406AC979
 * 00000001406AC98B: add     rsp, 8
 * 00000001406AC98F: call    loc_1406AC982
 * 00000001406AC994: add     rsp, 8
 * 00000001406AC998: call    loc_1406AC98B
 * 00000001406AC99D: add     rsp, 8
 * 00000001406AC9A1: call    loc_1406AC994
 * 00000001406AC9A6: add     rsp, 8
 * 00000001406AC9AA: call    loc_1406AC99D
 * 00000001406AC9AF: add     rsp, 8
 * 00000001406AC9B3: call    loc_1406AC9A6
 * 00000001406AC9B8: add     rsp, 8
 * 00000001406AC9BC: call    loc_1406AC9AF
 * 00000001406AC9C1: add     rsp, 8
 * 00000001406AC9C5: call    loc_1406AC9B8
 * 00000001406AC9CA: add     rsp, 8
 * 00000001406AC9CE: call    loc_1406AC9C1
 * 00000001406AC9D3: add     rsp, 8
 * 00000001406AC9D7: call    loc_1406AC9CA
 * 00000001406AC9DC: add     rsp, 8
 * 00000001406AC9E0: call    loc_1406AC9D3
 * 00000001406AC9E5: add     rsp, 8
 * 00000001406AC9E9: call    loc_1406AC9DC
 * 00000001406AC9EE: add     rsp, 8
 * 00000001406AC9F2: call    loc_1406AC9E5
 * 00000001406AC9F7: add     rsp, 8
 * 00000001406AC9FB: call    loc_1406AC9EE
 * 00000001406ACA00: add     rsp, 8
 * 00000001406ACA04: call    loc_1406AC9F7
 * 00000001406ACA09: add     rsp, 8
 * 00000001406ACA0D: call    loc_1406ACA00
 * 00000001406ACA12: add     rsp, 8
 * 00000001406ACA16: call    loc_1406ACA09
 * 00000001406ACA1B: add     rsp, 8
 * 00000001406ACA1F: call    loc_1406ACA12
 * 00000001406ACA24: add     rsp, 8
 * 00000001406ACA28: call    loc_1406ACA1B
 * 00000001406ACA2D: add     rsp, 8
 * 00000001406ACA31: call    loc_1406ACA24
 * 00000001406ACA36: add     rsp, 8
 * 00000001406ACA3A: call    loc_1406ACA2D
 * 00000001406ACA3F: add     rsp, 8
 * 00000001406ACA43: call    loc_1406ACA36
 * 00000001406ACA48: add     rsp, 8
 * 00000001406ACA4C: call    loc_1406ACA3F
 * 00000001406ACA51: add     rsp, 8
 * 00000001406ACA55: call    loc_1406ACA48
 * 00000001406ACA5A: add     rsp, 8
 * 00000001406ACA5E: call    loc_1406ACA51
 * 00000001406ACA63: add     rsp, 8
 * 00000001406ACA67: call    loc_1406ACA5A
 * 00000001406ACA6C: add     rsp, 8
 * 00000001406ACA70: call    loc_1406ACA63
 * 00000001406ACA75: add     rsp, 8
 * 00000001406ACA79: call    loc_1406ACA6C
 * 00000001406ACA7E: add     rsp, 8
 * 00000001406ACA82: call    loc_1406ACA75
 * 00000001406ACA87: add     rsp, 8
 * 00000001406ACA8B: mov     eax, 0DADAh
 * 00000001406ACA90: test    byte ptr gs:85Ch, 8
 * 00000001406ACA99: jz      short loc_1406ACAA2
 * 00000001406ACA9B: mov     al, 20h ; ' '
 * 00000001406ACA9D: incsspq rax
 * 00000001406ACAA2: test    word ptr gs:858h, 100h
 * 00000001406ACAAD: jz      short loc_1406ACABB
 * 00000001406ACAAF: xor     eax, eax
 * 00000001406ACAB1: xor     edx, edx
 * 00000001406ACAB3: mov     ecx, 1
 * 00000001406ACAB8: div     rcx
 * 00000001406ACABB: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406ACABF: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406ACAC3: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406ACAC7: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406ACACB: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406ACACF: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406ACAD3: mov     r11, [rbp-20h]
 * 00000001406ACAD7: mov     r10, [rbp-28h]
 * 00000001406ACADB: mov     r9, [rbp-30h]
 * 00000001406ACADF: mov     r8, [rbp-38h]
 * 00000001406ACAE3: mov     rdx, [rbp-40h]
 * 00000001406ACAE7: mov     rcx, [rbp-48h]
 * 00000001406ACAEB: mov     rax, [rbp-50h]
 * 00000001406ACAEF: mov     rsp, rbp
 * 00000001406ACAF2: mov     rbp, [rbp+0D8h]
 * 00000001406ACAF9: add     rsp, 0E8h
 * 00000001406ACB00: test    cs:KiKvaShadow, 1
 * 00000001406ACB07: jz      short loc_1406ACB0E
 * 00000001406ACB09: jmp     KiKernelExit
 * 00000001406ACB0E: test    word ptr gs:858h, 200h
 * 00000001406ACB19: jz      short loc_1406ACB20
 * 00000001406ACB1B: verw    [rsp-1C8h+arg_1E0]
 * 00000001406ACB20: swapgs
 * 00000001406ACB23: iretq
 * 00000001406ACB25: ldmxcsr dword ptr [rbp-54h]
 * 00000001406ACB29: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406ACB2D: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406ACB31: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406ACB35: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406ACB39: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406ACB3D: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406ACB41: mov     r11, [rbp-20h]
 * 00000001406ACB45: mov     r10, [rbp-28h]
 * 00000001406ACB49: mov     r9, [rbp-30h]
 * 00000001406ACB4D: mov     r8, [rbp-38h]
 * 00000001406ACB51: mov     rdx, [rbp-40h]
 * 00000001406ACB55: mov     rcx, [rbp-48h]
 * 00000001406ACB59: mov     rax, [rbp-50h]
 * 00000001406ACB5D: mov     rsp, rbp
 * 00000001406ACB60: mov     rbp, [rbp+0D8h]
 * 00000001406ACB67: add     rsp, 0E8h
 * 00000001406ACB6E: iretq
 */
