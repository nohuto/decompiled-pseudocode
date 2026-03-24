/*
 * XREFs of KiHvInterruptDispatch @ 0x1406B0A70
 * Callers:
 *     KiHvInterrupt @ 0x1406AF940 (KiHvInterrupt.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14025F5D0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiEndInterruptCycleAccumulation @ 0x14034A8A0 (KiEndInterruptCycleAccumulation.c)
 *     KiUpdateStibpPairing @ 0x1403EB760 (KiUpdateStibpPairing.c)
 *     HalPerformEndOfInterrupt @ 0x140418370 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1404FBC10 (KiRestoreDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405B7800 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405BF250 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x1406AAFC0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406AF860 (KiInitiateUserApc.c)
 *     KiHvInterruptDispatch @ 0x1406B0A70 (KiHvInterruptDispatch.c)
 *     KiHvInterruptSubDispatch @ 0x1406B1230 (KiHvInterruptSubDispatch.c)
 *     KiDpcInterruptBypass @ 0x1406B2200 (KiDpcInterruptBypass.c)
 */

/*
 * Hex-Rays decompilation failed for KiHvInterruptDispatch @ 0x1406B0A70
 * Reason: Hex-Rays returned no pseudocode for 0x1406B0A70
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B0A70: mov     rcx, gs:9158h
 * 00000001406B0A79: mov     rax, rcx
 * 00000001406B0A7C: mov     edx, cs:KeIsrStackSize
 * 00000001406B0A82: sub     rax, rdx
 * 00000001406B0A85: mov     rdx, rsp
 * 00000001406B0A88: cmp     rax, rsp
 * 00000001406B0A8B: ja      short loc_1406B0A92
 * 00000001406B0A8D: cmp     rsp, rcx
 * 00000001406B0A90: jb      short loc_1406B0A9E
 * 00000001406B0A92: cmp     cs:KiBugCheckActive, 0
 * 00000001406B0A99: jnz     short loc_1406B0A9E
 * 00000001406B0A9B: mov     rsp, rcx
 * 00000001406B0A9E: sub     rsp, 20h
 * 00000001406B0AA2: mov     [rsp+20h+var_10], rdx
 * 00000001406B0AA7: call    KiHvInterruptSubDispatch
 * 00000001406B0AAC: mov     rsp, [rsp+20h+var_10]
 * 00000001406B0AB1: test    cs:HvlEnlightenments, 1000h
 * 00000001406B0ABB: jz      short loc_1406B0AC5
 * 00000001406B0ABD: mov     rcx, rsi
 * 00000001406B0AC0: call    HalPerformEndOfInterrupt
 * 00000001406B0AC5: cli
 * 00000001406B0AC6: mov     rcx, gs:20h
 * 00000001406B0ACF: movzx   edx, byte ptr [rbp-57h]
 * 00000001406B0AD3: call    KiEndInterruptCycleAccumulation
 * 00000001406B0AD8: test    al, al
 * 00000001406B0ADA: jz      short loc_1406B0AE1
 * 00000001406B0ADC: call    KiDpcInterruptBypass
 * 00000001406B0AE1: movzx   ecx, byte ptr [rbp-57h]
 * 00000001406B0AE5: cmp     cs:KiIrqlFlags, 0
 * 00000001406B0AEC: jz      short loc_1406B0AF5
 * 00000001406B0AEE: call    KzSetIrqlUnsafe
 * 00000001406B0AF3: jmp     short loc_1406B0AF9
 * 00000001406B0AF5: mov     cr8, rcx
 * 00000001406B0AF9: mov     rsi, [rbp+0D0h]
 * 00000001406B0B00: cli
 * 00000001406B0B01: test    byte ptr [rbp+0F0h], 1
 * 00000001406B0B08: jz      loc_1406B0E03
 * 00000001406B0B0E: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B0B15: jz      short loc_1406B0B1A
 * 00000001406B0B17: stac
 * 00000001406B0B1A: mov     rcx, gs:188h
 * 00000001406B0B23: test    byte ptr [rcx+0C2h], 3
 * 00000001406B0B2A: jz      short loc_1406B0B47
 * 00000001406B0B2C: mov     ecx, 1
 * 00000001406B0B31: mov     cr8, rcx
 * 00000001406B0B35: sti
 * 00000001406B0B36: call    KiInitiateUserApc
 * 00000001406B0B3B: cli
 * 00000001406B0B3C: mov     ecx, 0
 * 00000001406B0B41: mov     cr8, rcx
 * 00000001406B0B45: jmp     short loc_1406B0B1A
 * 00000001406B0B47: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406B0B4C: test    eax, eax
 * 00000001406B0B4E: mov     rax, [rbp-50h]
 * 00000001406B0B52: jnz     short loc_1406B0B1A
 * 00000001406B0B54: test    byte ptr gs:860h, 2
 * 00000001406B0B5D: jz      short loc_1406B0B66
 * 00000001406B0B5F: xor     ecx, ecx
 * 00000001406B0B61: call    KiUpdateStibpPairing
 * 00000001406B0B66: mov     rcx, gs:188h
 * 00000001406B0B6F: test    dword ptr [rcx], 8000000h
 * 00000001406B0B75: jz      short loc_1406B0B7C
 * 00000001406B0B77: call    KiRestoreSetContextState
 * 00000001406B0B7C: mov     rcx, gs:188h
 * 00000001406B0B85: test    dword ptr [rcx], 10000h
 * 00000001406B0B8B: jz      short loc_1406B0BA1
 * 00000001406B0B8D: test    byte ptr [rcx+2], 1
 * 00000001406B0B91: jz      short loc_1406B0BA1
 * 00000001406B0B93: call    KiCopyCounters
 * 00000001406B0B98: mov     rcx, gs:188h
 * 00000001406B0BA1: ldmxcsr dword ptr [rbp-54h]
 * 00000001406B0BA5: cmp     word ptr [rbp+80h], 0
 * 00000001406B0BAD: jz      short loc_1406B0BB4
 * 00000001406B0BAF: call    KiRestoreDebugRegisterState
 * 00000001406B0BB4: mov     rcx, gs:188h
 * 00000001406B0BBD: bt      dword ptr [rcx+74h], 16h
 * 00000001406B0BC2: jnb     short loc_1406B0BEE
 * 00000001406B0BC4: xor     ecx, ecx
 * 00000001406B0BC6: rdsspq  rcx
 * 00000001406B0BCB: mov     r8, gs:9D28h
 * 00000001406B0BD4: add     r8, 8
 * 00000001406B0BD8: cmp     rcx, r8
 * 00000001406B0BDB: jnz     short loc_1406B0BEE
 * 00000001406B0BDD: mov     rcx, gs:9D20h
 * 00000001406B0BE6: rstorssp qword ptr [rcx]
 * 00000001406B0BEA: saveprevssp
 * 00000001406B0BEE: mov     byte ptr gs:85Eh, 0
 * 00000001406B0BF7: movzx   eax, word ptr gs:86Ch
 * 00000001406B0C00: cmp     gs:866h, ax
 * 00000001406B0C09: jz      short loc_1406B0C1D
 * 00000001406B0C0B: mov     gs:866h, ax
 * 00000001406B0C14: mov     ecx, 48h ; 'H'
 * 00000001406B0C19: xor     edx, edx
 * 00000001406B0C1B: wrmsr
 * 00000001406B0C1D: btr     word ptr gs:858h, 2
 * 00000001406B0C28: jnb     short loc_1406B0C38
 * 00000001406B0C2A: mov     eax, 1
 * 00000001406B0C2F: xor     edx, edx
 * 00000001406B0C31: mov     ecx, 49h ; 'I'
 * 00000001406B0C36: wrmsr
 * 00000001406B0C38: btr     word ptr gs:858h, 5
 * 00000001406B0C43: jnb     loc_1406B0D80
 * 00000001406B0C49: call    loc_1406B0D5C
 * 00000001406B0C4E: add     rsp, 8
 * 00000001406B0C52: call    loc_1406B0D65
 * 00000001406B0C57: add     rsp, 8
 * 00000001406B0C5B: call    loc_1406B0C4E
 * 00000001406B0C60: add     rsp, 8
 * 00000001406B0C64: call    loc_1406B0C57
 * 00000001406B0C69: add     rsp, 8
 * 00000001406B0C6D: call    loc_1406B0C60
 * 00000001406B0C72: add     rsp, 8
 * 00000001406B0C76: call    loc_1406B0C69
 * 00000001406B0C7B: add     rsp, 8
 * 00000001406B0C7F: call    loc_1406B0C72
 * 00000001406B0C84: add     rsp, 8
 * 00000001406B0C88: call    loc_1406B0C7B
 * 00000001406B0C8D: add     rsp, 8
 * 00000001406B0C91: call    loc_1406B0C84
 * 00000001406B0C96: add     rsp, 8
 * 00000001406B0C9A: call    loc_1406B0C8D
 * 00000001406B0C9F: add     rsp, 8
 * 00000001406B0CA3: call    loc_1406B0C96
 * 00000001406B0CA8: add     rsp, 8
 * 00000001406B0CAC: call    loc_1406B0C9F
 * 00000001406B0CB1: add     rsp, 8
 * 00000001406B0CB5: call    loc_1406B0CA8
 * 00000001406B0CBA: add     rsp, 8
 * 00000001406B0CBE: call    loc_1406B0CB1
 * 00000001406B0CC3: add     rsp, 8
 * 00000001406B0CC7: call    loc_1406B0CBA
 * 00000001406B0CCC: add     rsp, 8
 * 00000001406B0CD0: call    loc_1406B0CC3
 * 00000001406B0CD5: add     rsp, 8
 * 00000001406B0CD9: call    loc_1406B0CCC
 * 00000001406B0CDE: add     rsp, 8
 * 00000001406B0CE2: call    loc_1406B0CD5
 * 00000001406B0CE7: add     rsp, 8
 * 00000001406B0CEB: call    loc_1406B0CDE
 * 00000001406B0CF0: add     rsp, 8
 * 00000001406B0CF4: call    loc_1406B0CE7
 * 00000001406B0CF9: add     rsp, 8
 * 00000001406B0CFD: call    loc_1406B0CF0
 * 00000001406B0D02: add     rsp, 8
 * 00000001406B0D06: call    loc_1406B0CF9
 * 00000001406B0D0B: add     rsp, 8
 * 00000001406B0D0F: call    loc_1406B0D02
 * 00000001406B0D14: add     rsp, 8
 * 00000001406B0D18: call    loc_1406B0D0B
 * 00000001406B0D1D: add     rsp, 8
 * 00000001406B0D21: call    loc_1406B0D14
 * 00000001406B0D26: add     rsp, 8
 * 00000001406B0D2A: call    loc_1406B0D1D
 * 00000001406B0D2F: add     rsp, 8
 * 00000001406B0D33: call    loc_1406B0D26
 * 00000001406B0D38: add     rsp, 8
 * 00000001406B0D3C: call    loc_1406B0D2F
 * 00000001406B0D41: add     rsp, 8
 * 00000001406B0D45: call    loc_1406B0D38
 * 00000001406B0D4A: add     rsp, 8
 * 00000001406B0D4E: call    loc_1406B0D41
 * 00000001406B0D53: add     rsp, 8
 * 00000001406B0D57: call    loc_1406B0D4A
 * 00000001406B0D5C: add     rsp, 8
 * 00000001406B0D60: call    loc_1406B0D53
 * 00000001406B0D65: add     rsp, 8
 * 00000001406B0D69: mov     eax, 0DADAh
 * 00000001406B0D6E: test    byte ptr gs:85Ch, 8
 * 00000001406B0D77: jz      short loc_1406B0D80
 * 00000001406B0D79: mov     al, 20h ; ' '
 * 00000001406B0D7B: incsspq rax
 * 00000001406B0D80: test    word ptr gs:858h, 100h
 * 00000001406B0D8B: jz      short loc_1406B0D99
 * 00000001406B0D8D: xor     eax, eax
 * 00000001406B0D8F: xor     edx, edx
 * 00000001406B0D91: mov     ecx, 1
 * 00000001406B0D96: div     rcx
 * 00000001406B0D99: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406B0D9D: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406B0DA1: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406B0DA5: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406B0DA9: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406B0DAD: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406B0DB1: mov     r11, [rbp-20h]
 * 00000001406B0DB5: mov     r10, [rbp-28h]
 * 00000001406B0DB9: mov     r9, [rbp-30h]
 * 00000001406B0DBD: mov     r8, [rbp-38h]
 * 00000001406B0DC1: mov     rdx, [rbp-40h]
 * 00000001406B0DC5: mov     rcx, [rbp-48h]
 * 00000001406B0DC9: mov     rax, [rbp-50h]
 * 00000001406B0DCD: mov     rsp, rbp
 * 00000001406B0DD0: mov     rbp, [rbp+0D8h]
 * 00000001406B0DD7: add     rsp, 0E8h
 * 00000001406B0DDE: test    cs:KiKvaShadow, 1
 * 00000001406B0DE5: jz      short loc_1406B0DEC
 * 00000001406B0DE7: jmp     KiKernelExit
 * 00000001406B0DEC: test    word ptr gs:858h, 200h
 * 00000001406B0DF7: jz      short loc_1406B0DFE
 * 00000001406B0DF9: verw    [rsp-1C8h+arg_1E0]
 * 00000001406B0DFE: swapgs
 * 00000001406B0E01: iretq
 * 00000001406B0E03: ldmxcsr dword ptr [rbp-54h]
 * 00000001406B0E07: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406B0E0B: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406B0E0F: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406B0E13: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406B0E17: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406B0E1B: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406B0E1F: mov     r11, [rbp-20h]
 * 00000001406B0E23: mov     r10, [rbp-28h]
 * 00000001406B0E27: mov     r9, [rbp-30h]
 * 00000001406B0E2B: mov     r8, [rbp-38h]
 * 00000001406B0E2F: mov     rdx, [rbp-40h]
 * 00000001406B0E33: mov     rcx, [rbp-48h]
 * 00000001406B0E37: mov     rax, [rbp-50h]
 * 00000001406B0E3B: mov     rsp, rbp
 * 00000001406B0E3E: mov     rbp, [rbp+0D8h]
 * 00000001406B0E45: add     rsp, 0E8h
 * 00000001406B0E4C: iretq
 */
