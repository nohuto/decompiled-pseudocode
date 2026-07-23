/*
 * XREFs of KiHvInterruptDispatch @ 0x1406B1A10
 * Callers:
 *     KiHvInterrupt @ 0x1406B08E0 (KiHvInterrupt.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14028FBE0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiEndInterruptCycleAccumulation @ 0x140368D80 (KiEndInterruptCycleAccumulation.c)
 *     KiUpdateStibpPairing @ 0x1403DFC10 (KiUpdateStibpPairing.c)
 *     HalPerformEndOfInterrupt @ 0x140408120 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1404F94D0 (KiRestoreDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405B4DD0 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405BC880 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x1406ABF60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406B0800 (KiInitiateUserApc.c)
 *     KiHvInterruptDispatch @ 0x1406B1A10 (KiHvInterruptDispatch.c)
 *     KiHvInterruptSubDispatch @ 0x1406B21D0 (KiHvInterruptSubDispatch.c)
 *     KiDpcInterruptBypass @ 0x1406B31A0 (KiDpcInterruptBypass.c)
 */

/*
 * Hex-Rays decompilation failed for KiHvInterruptDispatch @ 0x1406B1A10
 * Reason: Hex-Rays returned no pseudocode for 0x1406B1A10
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B1A10: mov     rcx, gs:9158h
 * 00000001406B1A19: mov     rax, rcx
 * 00000001406B1A1C: mov     edx, cs:KeIsrStackSize
 * 00000001406B1A22: sub     rax, rdx
 * 00000001406B1A25: mov     rdx, rsp
 * 00000001406B1A28: cmp     rax, rsp
 * 00000001406B1A2B: ja      short loc_1406B1A32
 * 00000001406B1A2D: cmp     rsp, rcx
 * 00000001406B1A30: jb      short loc_1406B1A3E
 * 00000001406B1A32: cmp     cs:KiBugCheckActive, 0
 * 00000001406B1A39: jnz     short loc_1406B1A3E
 * 00000001406B1A3B: mov     rsp, rcx
 * 00000001406B1A3E: sub     rsp, 20h
 * 00000001406B1A42: mov     [rsp+20h+var_10], rdx
 * 00000001406B1A47: call    KiHvInterruptSubDispatch
 * 00000001406B1A4C: mov     rsp, [rsp+20h+var_10]
 * 00000001406B1A51: test    cs:HvlEnlightenments, 1000h
 * 00000001406B1A5B: jz      short loc_1406B1A65
 * 00000001406B1A5D: mov     rcx, rsi
 * 00000001406B1A60: call    HalPerformEndOfInterrupt
 * 00000001406B1A65: cli
 * 00000001406B1A66: mov     rcx, gs:20h
 * 00000001406B1A6F: movzx   edx, byte ptr [rbp-57h]
 * 00000001406B1A73: call    KiEndInterruptCycleAccumulation
 * 00000001406B1A78: test    al, al
 * 00000001406B1A7A: jz      short loc_1406B1A81
 * 00000001406B1A7C: call    KiDpcInterruptBypass
 * 00000001406B1A81: movzx   ecx, byte ptr [rbp-57h]
 * 00000001406B1A85: cmp     cs:KiIrqlFlags, 0
 * 00000001406B1A8C: jz      short loc_1406B1A95
 * 00000001406B1A8E: call    KzSetIrqlUnsafe
 * 00000001406B1A93: jmp     short loc_1406B1A99
 * 00000001406B1A95: mov     cr8, rcx
 * 00000001406B1A99: mov     rsi, [rbp+0D0h]
 * 00000001406B1AA0: cli
 * 00000001406B1AA1: test    byte ptr [rbp+0F0h], 1
 * 00000001406B1AA8: jz      loc_1406B1DA3
 * 00000001406B1AAE: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B1AB5: jz      short loc_1406B1ABA
 * 00000001406B1AB7: stac
 * 00000001406B1ABA: mov     rcx, gs:188h
 * 00000001406B1AC3: test    byte ptr [rcx+0C2h], 3
 * 00000001406B1ACA: jz      short loc_1406B1AE7
 * 00000001406B1ACC: mov     ecx, 1
 * 00000001406B1AD1: mov     cr8, rcx
 * 00000001406B1AD5: sti
 * 00000001406B1AD6: call    KiInitiateUserApc
 * 00000001406B1ADB: cli
 * 00000001406B1ADC: mov     ecx, 0
 * 00000001406B1AE1: mov     cr8, rcx
 * 00000001406B1AE5: jmp     short loc_1406B1ABA
 * 00000001406B1AE7: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406B1AEC: test    eax, eax
 * 00000001406B1AEE: mov     rax, [rbp-50h]
 * 00000001406B1AF2: jnz     short loc_1406B1ABA
 * 00000001406B1AF4: test    byte ptr gs:860h, 2
 * 00000001406B1AFD: jz      short loc_1406B1B06
 * 00000001406B1AFF: xor     ecx, ecx
 * 00000001406B1B01: call    KiUpdateStibpPairing
 * 00000001406B1B06: mov     rcx, gs:188h
 * 00000001406B1B0F: test    dword ptr [rcx], 8000000h
 * 00000001406B1B15: jz      short loc_1406B1B1C
 * 00000001406B1B17: call    KiRestoreSetContextState
 * 00000001406B1B1C: mov     rcx, gs:188h
 * 00000001406B1B25: test    dword ptr [rcx], 10000h
 * 00000001406B1B2B: jz      short loc_1406B1B41
 * 00000001406B1B2D: test    byte ptr [rcx+2], 1
 * 00000001406B1B31: jz      short loc_1406B1B41
 * 00000001406B1B33: call    KiCopyCounters
 * 00000001406B1B38: mov     rcx, gs:188h
 * 00000001406B1B41: ldmxcsr dword ptr [rbp-54h]
 * 00000001406B1B45: cmp     word ptr [rbp+80h], 0
 * 00000001406B1B4D: jz      short loc_1406B1B54
 * 00000001406B1B4F: call    KiRestoreDebugRegisterState
 * 00000001406B1B54: mov     rcx, gs:188h
 * 00000001406B1B5D: bt      dword ptr [rcx+74h], 16h
 * 00000001406B1B62: jnb     short loc_1406B1B8E
 * 00000001406B1B64: xor     ecx, ecx
 * 00000001406B1B66: rdsspq  rcx
 * 00000001406B1B6B: mov     r8, gs:9D28h
 * 00000001406B1B74: add     r8, 8
 * 00000001406B1B78: cmp     rcx, r8
 * 00000001406B1B7B: jnz     short loc_1406B1B8E
 * 00000001406B1B7D: mov     rcx, gs:9D20h
 * 00000001406B1B86: rstorssp qword ptr [rcx]
 * 00000001406B1B8A: saveprevssp
 * 00000001406B1B8E: mov     byte ptr gs:85Eh, 0
 * 00000001406B1B97: movzx   eax, word ptr gs:86Ch
 * 00000001406B1BA0: cmp     gs:866h, ax
 * 00000001406B1BA9: jz      short loc_1406B1BBD
 * 00000001406B1BAB: mov     gs:866h, ax
 * 00000001406B1BB4: mov     ecx, 48h ; 'H'
 * 00000001406B1BB9: xor     edx, edx
 * 00000001406B1BBB: wrmsr
 * 00000001406B1BBD: btr     word ptr gs:858h, 2
 * 00000001406B1BC8: jnb     short loc_1406B1BD8
 * 00000001406B1BCA: mov     eax, 1
 * 00000001406B1BCF: xor     edx, edx
 * 00000001406B1BD1: mov     ecx, 49h ; 'I'
 * 00000001406B1BD6: wrmsr
 * 00000001406B1BD8: btr     word ptr gs:858h, 5
 * 00000001406B1BE3: jnb     loc_1406B1D20
 * 00000001406B1BE9: call    loc_1406B1CFC
 * 00000001406B1BEE: add     rsp, 8
 * 00000001406B1BF2: call    loc_1406B1D05
 * 00000001406B1BF7: add     rsp, 8
 * 00000001406B1BFB: call    loc_1406B1BEE
 * 00000001406B1C00: add     rsp, 8
 * 00000001406B1C04: call    loc_1406B1BF7
 * 00000001406B1C09: add     rsp, 8
 * 00000001406B1C0D: call    loc_1406B1C00
 * 00000001406B1C12: add     rsp, 8
 * 00000001406B1C16: call    loc_1406B1C09
 * 00000001406B1C1B: add     rsp, 8
 * 00000001406B1C1F: call    loc_1406B1C12
 * 00000001406B1C24: add     rsp, 8
 * 00000001406B1C28: call    loc_1406B1C1B
 * 00000001406B1C2D: add     rsp, 8
 * 00000001406B1C31: call    loc_1406B1C24
 * 00000001406B1C36: add     rsp, 8
 * 00000001406B1C3A: call    loc_1406B1C2D
 * 00000001406B1C3F: add     rsp, 8
 * 00000001406B1C43: call    loc_1406B1C36
 * 00000001406B1C48: add     rsp, 8
 * 00000001406B1C4C: call    loc_1406B1C3F
 * 00000001406B1C51: add     rsp, 8
 * 00000001406B1C55: call    loc_1406B1C48
 * 00000001406B1C5A: add     rsp, 8
 * 00000001406B1C5E: call    loc_1406B1C51
 * 00000001406B1C63: add     rsp, 8
 * 00000001406B1C67: call    loc_1406B1C5A
 * 00000001406B1C6C: add     rsp, 8
 * 00000001406B1C70: call    loc_1406B1C63
 * 00000001406B1C75: add     rsp, 8
 * 00000001406B1C79: call    loc_1406B1C6C
 * 00000001406B1C7E: add     rsp, 8
 * 00000001406B1C82: call    loc_1406B1C75
 * 00000001406B1C87: add     rsp, 8
 * 00000001406B1C8B: call    loc_1406B1C7E
 * 00000001406B1C90: add     rsp, 8
 * 00000001406B1C94: call    loc_1406B1C87
 * 00000001406B1C99: add     rsp, 8
 * 00000001406B1C9D: call    loc_1406B1C90
 * 00000001406B1CA2: add     rsp, 8
 * 00000001406B1CA6: call    loc_1406B1C99
 * 00000001406B1CAB: add     rsp, 8
 * 00000001406B1CAF: call    loc_1406B1CA2
 * 00000001406B1CB4: add     rsp, 8
 * 00000001406B1CB8: call    loc_1406B1CAB
 * 00000001406B1CBD: add     rsp, 8
 * 00000001406B1CC1: call    loc_1406B1CB4
 * 00000001406B1CC6: add     rsp, 8
 * 00000001406B1CCA: call    loc_1406B1CBD
 * 00000001406B1CCF: add     rsp, 8
 * 00000001406B1CD3: call    loc_1406B1CC6
 * 00000001406B1CD8: add     rsp, 8
 * 00000001406B1CDC: call    loc_1406B1CCF
 * 00000001406B1CE1: add     rsp, 8
 * 00000001406B1CE5: call    loc_1406B1CD8
 * 00000001406B1CEA: add     rsp, 8
 * 00000001406B1CEE: call    loc_1406B1CE1
 * 00000001406B1CF3: add     rsp, 8
 * 00000001406B1CF7: call    loc_1406B1CEA
 * 00000001406B1CFC: add     rsp, 8
 * 00000001406B1D00: call    loc_1406B1CF3
 * 00000001406B1D05: add     rsp, 8
 * 00000001406B1D09: mov     eax, 0DADAh
 * 00000001406B1D0E: test    byte ptr gs:85Ch, 8
 * 00000001406B1D17: jz      short loc_1406B1D20
 * 00000001406B1D19: mov     al, 20h ; ' '
 * 00000001406B1D1B: incsspq rax
 * 00000001406B1D20: test    word ptr gs:858h, 100h
 * 00000001406B1D2B: jz      short loc_1406B1D39
 * 00000001406B1D2D: xor     eax, eax
 * 00000001406B1D2F: xor     edx, edx
 * 00000001406B1D31: mov     ecx, 1
 * 00000001406B1D36: div     rcx
 * 00000001406B1D39: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406B1D3D: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406B1D41: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406B1D45: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406B1D49: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406B1D4D: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406B1D51: mov     r11, [rbp-20h]
 * 00000001406B1D55: mov     r10, [rbp-28h]
 * 00000001406B1D59: mov     r9, [rbp-30h]
 * 00000001406B1D5D: mov     r8, [rbp-38h]
 * 00000001406B1D61: mov     rdx, [rbp-40h]
 * 00000001406B1D65: mov     rcx, [rbp-48h]
 * 00000001406B1D69: mov     rax, [rbp-50h]
 * 00000001406B1D6D: mov     rsp, rbp
 * 00000001406B1D70: mov     rbp, [rbp+0D8h]
 * 00000001406B1D77: add     rsp, 0E8h
 * 00000001406B1D7E: test    cs:KiKvaShadow, 1
 * 00000001406B1D85: jz      short loc_1406B1D8C
 * 00000001406B1D87: jmp     KiKernelExit
 * 00000001406B1D8C: test    word ptr gs:858h, 200h
 * 00000001406B1D97: jz      short loc_1406B1D9E
 * 00000001406B1D99: verw    [rsp-1C8h+arg_1E0]
 * 00000001406B1D9E: swapgs
 * 00000001406B1DA1: iretq
 * 00000001406B1DA3: ldmxcsr dword ptr [rbp-54h]
 * 00000001406B1DA7: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406B1DAB: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406B1DAF: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406B1DB3: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406B1DB7: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406B1DBB: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406B1DBF: mov     r11, [rbp-20h]
 * 00000001406B1DC3: mov     r10, [rbp-28h]
 * 00000001406B1DC7: mov     r9, [rbp-30h]
 * 00000001406B1DCB: mov     r8, [rbp-38h]
 * 00000001406B1DCF: mov     rdx, [rbp-40h]
 * 00000001406B1DD3: mov     rcx, [rbp-48h]
 * 00000001406B1DD7: mov     rax, [rbp-50h]
 * 00000001406B1DDB: mov     rsp, rbp
 * 00000001406B1DDE: mov     rbp, [rbp+0D8h]
 * 00000001406B1DE5: add     rsp, 0E8h
 * 00000001406B1DEC: iretq
 */
