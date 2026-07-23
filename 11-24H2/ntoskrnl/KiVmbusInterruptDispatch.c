/*
 * XREFs of KiVmbusInterruptDispatch @ 0x1406B1E00
 * Callers:
 *     KiVmbusInterrupt0 @ 0x1406B0C50 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1406B0FC0 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1406B1330 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1406B16A0 (KiVmbusInterrupt3.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14028FBE0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiEndInterruptCycleAccumulation @ 0x140368D80 (KiEndInterruptCycleAccumulation.c)
 *     KiUpdateStibpPairing @ 0x1403DFC10 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1404F94D0 (KiRestoreDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405B4DD0 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405BC880 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x1406ABF60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406B0800 (KiInitiateUserApc.c)
 *     KiVmbusInterruptDispatch @ 0x1406B1E00 (KiVmbusInterruptDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1406B2280 (KiVmbusInterruptSubDispatch.c)
 *     KiDpcInterruptBypass @ 0x1406B31A0 (KiDpcInterruptBypass.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterruptDispatch @ 0x1406B1E00
 * Reason: Hex-Rays returned no pseudocode for 0x1406B1E00
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B1E00: mov     rcx, gs:9158h
 * 00000001406B1E09: mov     rax, rcx
 * 00000001406B1E0C: mov     edx, cs:KeIsrStackSize
 * 00000001406B1E12: sub     rax, rdx
 * 00000001406B1E15: mov     rdx, rsp
 * 00000001406B1E18: cmp     rax, rsp
 * 00000001406B1E1B: ja      short loc_1406B1E22
 * 00000001406B1E1D: cmp     rsp, rcx
 * 00000001406B1E20: jb      short loc_1406B1E2E
 * 00000001406B1E22: cmp     cs:KiBugCheckActive, 0
 * 00000001406B1E29: jnz     short loc_1406B1E2E
 * 00000001406B1E2B: mov     rsp, rcx
 * 00000001406B1E2E: sub     rsp, 20h
 * 00000001406B1E32: mov     [rsp+20h+var_10], rdx
 * 00000001406B1E37: call    KiVmbusInterruptSubDispatch
 * 00000001406B1E3C: mov     rsp, [rsp+20h+var_10]
 * 00000001406B1E41: cli
 * 00000001406B1E42: mov     rcx, gs:20h
 * 00000001406B1E4B: movzx   edx, byte ptr [rbp-57h]
 * 00000001406B1E4F: call    KiEndInterruptCycleAccumulation
 * 00000001406B1E54: test    al, al
 * 00000001406B1E56: jz      short loc_1406B1E5D
 * 00000001406B1E58: call    KiDpcInterruptBypass
 * 00000001406B1E5D: movzx   ecx, byte ptr [rbp-57h]
 * 00000001406B1E61: cmp     cs:KiIrqlFlags, 0
 * 00000001406B1E68: jz      short loc_1406B1E71
 * 00000001406B1E6A: call    KzSetIrqlUnsafe
 * 00000001406B1E6F: jmp     short loc_1406B1E75
 * 00000001406B1E71: mov     cr8, rcx
 * 00000001406B1E75: mov     rsi, [rbp+0D0h]
 * 00000001406B1E7C: cli
 * 00000001406B1E7D: test    byte ptr [rbp+0F0h], 1
 * 00000001406B1E84: jz      loc_1406B217F
 * 00000001406B1E8A: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B1E91: jz      short loc_1406B1E96
 * 00000001406B1E93: stac
 * 00000001406B1E96: mov     rcx, gs:188h
 * 00000001406B1E9F: test    byte ptr [rcx+0C2h], 3
 * 00000001406B1EA6: jz      short loc_1406B1EC3
 * 00000001406B1EA8: mov     ecx, 1
 * 00000001406B1EAD: mov     cr8, rcx
 * 00000001406B1EB1: sti
 * 00000001406B1EB2: call    KiInitiateUserApc
 * 00000001406B1EB7: cli
 * 00000001406B1EB8: mov     ecx, 0
 * 00000001406B1EBD: mov     cr8, rcx
 * 00000001406B1EC1: jmp     short loc_1406B1E96
 * 00000001406B1EC3: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406B1EC8: test    eax, eax
 * 00000001406B1ECA: mov     rax, [rbp-50h]
 * 00000001406B1ECE: jnz     short loc_1406B1E96
 * 00000001406B1ED0: test    byte ptr gs:860h, 2
 * 00000001406B1ED9: jz      short loc_1406B1EE2
 * 00000001406B1EDB: xor     ecx, ecx
 * 00000001406B1EDD: call    KiUpdateStibpPairing
 * 00000001406B1EE2: mov     rcx, gs:188h
 * 00000001406B1EEB: test    dword ptr [rcx], 8000000h
 * 00000001406B1EF1: jz      short loc_1406B1EF8
 * 00000001406B1EF3: call    KiRestoreSetContextState
 * 00000001406B1EF8: mov     rcx, gs:188h
 * 00000001406B1F01: test    dword ptr [rcx], 10000h
 * 00000001406B1F07: jz      short loc_1406B1F1D
 * 00000001406B1F09: test    byte ptr [rcx+2], 1
 * 00000001406B1F0D: jz      short loc_1406B1F1D
 * 00000001406B1F0F: call    KiCopyCounters
 * 00000001406B1F14: mov     rcx, gs:188h
 * 00000001406B1F1D: ldmxcsr dword ptr [rbp-54h]
 * 00000001406B1F21: cmp     word ptr [rbp+80h], 0
 * 00000001406B1F29: jz      short loc_1406B1F30
 * 00000001406B1F2B: call    KiRestoreDebugRegisterState
 * 00000001406B1F30: mov     rcx, gs:188h
 * 00000001406B1F39: bt      dword ptr [rcx+74h], 16h
 * 00000001406B1F3E: jnb     short loc_1406B1F6A
 * 00000001406B1F40: xor     ecx, ecx
 * 00000001406B1F42: rdsspq  rcx
 * 00000001406B1F47: mov     r8, gs:9D28h
 * 00000001406B1F50: add     r8, 8
 * 00000001406B1F54: cmp     rcx, r8
 * 00000001406B1F57: jnz     short loc_1406B1F6A
 * 00000001406B1F59: mov     rcx, gs:9D20h
 * 00000001406B1F62: rstorssp qword ptr [rcx]
 * 00000001406B1F66: saveprevssp
 * 00000001406B1F6A: mov     byte ptr gs:85Eh, 0
 * 00000001406B1F73: movzx   eax, word ptr gs:86Ch
 * 00000001406B1F7C: cmp     gs:866h, ax
 * 00000001406B1F85: jz      short loc_1406B1F99
 * 00000001406B1F87: mov     gs:866h, ax
 * 00000001406B1F90: mov     ecx, 48h ; 'H'
 * 00000001406B1F95: xor     edx, edx
 * 00000001406B1F97: wrmsr
 * 00000001406B1F99: btr     word ptr gs:858h, 2
 * 00000001406B1FA4: jnb     short loc_1406B1FB4
 * 00000001406B1FA6: mov     eax, 1
 * 00000001406B1FAB: xor     edx, edx
 * 00000001406B1FAD: mov     ecx, 49h ; 'I'
 * 00000001406B1FB2: wrmsr
 * 00000001406B1FB4: btr     word ptr gs:858h, 5
 * 00000001406B1FBF: jnb     loc_1406B20FC
 * 00000001406B1FC5: call    loc_1406B20D8
 * 00000001406B1FCA: add     rsp, 8
 * 00000001406B1FCE: call    loc_1406B20E1
 * 00000001406B1FD3: add     rsp, 8
 * 00000001406B1FD7: call    loc_1406B1FCA
 * 00000001406B1FDC: add     rsp, 8
 * 00000001406B1FE0: call    loc_1406B1FD3
 * 00000001406B1FE5: add     rsp, 8
 * 00000001406B1FE9: call    loc_1406B1FDC
 * 00000001406B1FEE: add     rsp, 8
 * 00000001406B1FF2: call    loc_1406B1FE5
 * 00000001406B1FF7: add     rsp, 8
 * 00000001406B1FFB: call    loc_1406B1FEE
 * 00000001406B2000: add     rsp, 8
 * 00000001406B2004: call    loc_1406B1FF7
 * 00000001406B2009: add     rsp, 8
 * 00000001406B200D: call    loc_1406B2000
 * 00000001406B2012: add     rsp, 8
 * 00000001406B2016: call    loc_1406B2009
 * 00000001406B201B: add     rsp, 8
 * 00000001406B201F: call    loc_1406B2012
 * 00000001406B2024: add     rsp, 8
 * 00000001406B2028: call    loc_1406B201B
 * 00000001406B202D: add     rsp, 8
 * 00000001406B2031: call    loc_1406B2024
 * 00000001406B2036: add     rsp, 8
 * 00000001406B203A: call    loc_1406B202D
 * 00000001406B203F: add     rsp, 8
 * 00000001406B2043: call    loc_1406B2036
 * 00000001406B2048: add     rsp, 8
 * 00000001406B204C: call    loc_1406B203F
 * 00000001406B2051: add     rsp, 8
 * 00000001406B2055: call    loc_1406B2048
 * 00000001406B205A: add     rsp, 8
 * 00000001406B205E: call    loc_1406B2051
 * 00000001406B2063: add     rsp, 8
 * 00000001406B2067: call    loc_1406B205A
 * 00000001406B206C: add     rsp, 8
 * 00000001406B2070: call    loc_1406B2063
 * 00000001406B2075: add     rsp, 8
 * 00000001406B2079: call    loc_1406B206C
 * 00000001406B207E: add     rsp, 8
 * 00000001406B2082: call    loc_1406B2075
 * 00000001406B2087: add     rsp, 8
 * 00000001406B208B: call    loc_1406B207E
 * 00000001406B2090: add     rsp, 8
 * 00000001406B2094: call    loc_1406B2087
 * 00000001406B2099: add     rsp, 8
 * 00000001406B209D: call    loc_1406B2090
 * 00000001406B20A2: add     rsp, 8
 * 00000001406B20A6: call    loc_1406B2099
 * 00000001406B20AB: add     rsp, 8
 * 00000001406B20AF: call    loc_1406B20A2
 * 00000001406B20B4: add     rsp, 8
 * 00000001406B20B8: call    loc_1406B20AB
 * 00000001406B20BD: add     rsp, 8
 * 00000001406B20C1: call    loc_1406B20B4
 * 00000001406B20C6: add     rsp, 8
 * 00000001406B20CA: call    loc_1406B20BD
 * 00000001406B20CF: add     rsp, 8
 * 00000001406B20D3: call    loc_1406B20C6
 * 00000001406B20D8: add     rsp, 8
 * 00000001406B20DC: call    loc_1406B20CF
 * 00000001406B20E1: add     rsp, 8
 * 00000001406B20E5: mov     eax, 0DADAh
 * 00000001406B20EA: test    byte ptr gs:85Ch, 8
 * 00000001406B20F3: jz      short loc_1406B20FC
 * 00000001406B20F5: mov     al, 20h ; ' '
 * 00000001406B20F7: incsspq rax
 * 00000001406B20FC: test    word ptr gs:858h, 100h
 * 00000001406B2107: jz      short loc_1406B2115
 * 00000001406B2109: xor     eax, eax
 * 00000001406B210B: xor     edx, edx
 * 00000001406B210D: mov     ecx, 1
 * 00000001406B2112: div     rcx
 * 00000001406B2115: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406B2119: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406B211D: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406B2121: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406B2125: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406B2129: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406B212D: mov     r11, [rbp-20h]
 * 00000001406B2131: mov     r10, [rbp-28h]
 * 00000001406B2135: mov     r9, [rbp-30h]
 * 00000001406B2139: mov     r8, [rbp-38h]
 * 00000001406B213D: mov     rdx, [rbp-40h]
 * 00000001406B2141: mov     rcx, [rbp-48h]
 * 00000001406B2145: mov     rax, [rbp-50h]
 * 00000001406B2149: mov     rsp, rbp
 * 00000001406B214C: mov     rbp, [rbp+0D8h]
 * 00000001406B2153: add     rsp, 0E8h
 * 00000001406B215A: test    cs:KiKvaShadow, 1
 * 00000001406B2161: jz      short loc_1406B2168
 * 00000001406B2163: jmp     KiKernelExit
 * 00000001406B2168: test    word ptr gs:858h, 200h
 * 00000001406B2173: jz      short loc_1406B217A
 * 00000001406B2175: verw    [rsp-1C8h+arg_1E0]
 * 00000001406B217A: swapgs
 * 00000001406B217D: iretq
 * 00000001406B217F: ldmxcsr dword ptr [rbp-54h]
 * 00000001406B2183: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406B2187: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406B218B: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406B218F: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406B2193: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406B2197: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406B219B: mov     r11, [rbp-20h]
 * 00000001406B219F: mov     r10, [rbp-28h]
 * 00000001406B21A3: mov     r9, [rbp-30h]
 * 00000001406B21A7: mov     r8, [rbp-38h]
 * 00000001406B21AB: mov     rdx, [rbp-40h]
 * 00000001406B21AF: mov     rcx, [rbp-48h]
 * 00000001406B21B3: mov     rax, [rbp-50h]
 * 00000001406B21B7: mov     rsp, rbp
 * 00000001406B21BA: mov     rbp, [rbp+0D8h]
 * 00000001406B21C1: add     rsp, 0E8h
 * 00000001406B21C8: iretq
 */
