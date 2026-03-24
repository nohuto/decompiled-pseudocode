/*
 * XREFs of KiInterruptDispatch @ 0x1406A1B80
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
 *     KiInterruptSubDispatch @ 0x1406A19E0 (KiInterruptSubDispatch.c)
 *     KiInterruptDispatch @ 0x1406A1B80 (KiInterruptDispatch.c)
 *     KiInitiateUserApc @ 0x1406A4590 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1406A6F30 (KiDpcInterruptBypass.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatch @ 0x1406A1B80
 * Reason: Hex-Rays returned no pseudocode for 0x1406A1B80
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406A1B80: mov     rcx, gs:9158h
 * 00000001406A1B89: mov     rax, rcx
 * 00000001406A1B8C: mov     edx, cs:KeIsrStackSize
 * 00000001406A1B92: sub     rax, rdx
 * 00000001406A1B95: mov     rdx, rsp
 * 00000001406A1B98: cmp     rax, rsp
 * 00000001406A1B9B: ja      short loc_1406A1BA2
 * 00000001406A1B9D: cmp     rsp, rcx
 * 00000001406A1BA0: jb      short loc_1406A1BAE
 * 00000001406A1BA2: cmp     cs:KiBugCheckActive, 0
 * 00000001406A1BA9: jnz     short loc_1406A1BAE
 * 00000001406A1BAB: mov     rsp, rcx
 * 00000001406A1BAE: sub     rsp, 20h
 * 00000001406A1BB2: mov     [rsp+20h+var_10], rdx
 * 00000001406A1BB7: call    KiInterruptSubDispatch
 * 00000001406A1BBC: mov     rsp, [rsp+20h+var_10]
 * 00000001406A1BC1: mov     rcx, rsi
 * 00000001406A1BC4: call    HalPerformEndOfInterrupt
 * 00000001406A1BC9: mov     rcx, gs:20h
 * 00000001406A1BD2: movzx   edx, byte ptr [rbp-57h]
 * 00000001406A1BD6: call    KiEndInterruptCycleAccumulation
 * 00000001406A1BDB: test    al, al
 * 00000001406A1BDD: jz      short loc_1406A1BE4
 * 00000001406A1BDF: call    KiDpcInterruptBypass
 * 00000001406A1BE4: movzx   ecx, byte ptr [rbp-57h]
 * 00000001406A1BE8: cmp     cs:KiIrqlFlags, 0
 * 00000001406A1BEF: jz      short loc_1406A1BF8
 * 00000001406A1BF1: call    KzSetIrqlUnsafe
 * 00000001406A1BF6: jmp     short loc_1406A1BFC
 * 00000001406A1BF8: mov     cr8, rcx
 * 00000001406A1BFC: mov     rsi, [rbp+0D0h]
 * 00000001406A1C03: test    byte ptr [rbp+0F0h], 1
 * 00000001406A1C0A: jz      loc_1406A1F05
 * 00000001406A1C10: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406A1C17: jz      short loc_1406A1C1C
 * 00000001406A1C19: stac
 * 00000001406A1C1C: mov     rcx, gs:188h
 * 00000001406A1C25: test    byte ptr [rcx+0C2h], 3
 * 00000001406A1C2C: jz      short loc_1406A1C49
 * 00000001406A1C2E: mov     ecx, 1
 * 00000001406A1C33: mov     cr8, rcx
 * 00000001406A1C37: sti
 * 00000001406A1C38: call    KiInitiateUserApc
 * 00000001406A1C3D: cli
 * 00000001406A1C3E: mov     ecx, 0
 * 00000001406A1C43: mov     cr8, rcx
 * 00000001406A1C47: jmp     short loc_1406A1C1C
 * 00000001406A1C49: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406A1C4E: test    eax, eax
 * 00000001406A1C50: mov     rax, [rbp-50h]
 * 00000001406A1C54: jnz     short loc_1406A1C1C
 * 00000001406A1C56: test    byte ptr gs:860h, 2
 * 00000001406A1C5F: jz      short loc_1406A1C68
 * 00000001406A1C61: xor     ecx, ecx
 * 00000001406A1C63: call    KiUpdateStibpPairing
 * 00000001406A1C68: mov     rcx, gs:188h
 * 00000001406A1C71: test    dword ptr [rcx], 8000000h
 * 00000001406A1C77: jz      short loc_1406A1C7E
 * 00000001406A1C79: call    KiRestoreSetContextState
 * 00000001406A1C7E: mov     rcx, gs:188h
 * 00000001406A1C87: test    dword ptr [rcx], 10000h
 * 00000001406A1C8D: jz      short loc_1406A1CA3
 * 00000001406A1C8F: test    byte ptr [rcx+2], 1
 * 00000001406A1C93: jz      short loc_1406A1CA3
 * 00000001406A1C95: call    KiCopyCounters
 * 00000001406A1C9A: mov     rcx, gs:188h
 * 00000001406A1CA3: ldmxcsr dword ptr [rbp-54h]
 * 00000001406A1CA7: cmp     word ptr [rbp+80h], 0
 * 00000001406A1CAF: jz      short loc_1406A1CB6
 * 00000001406A1CB1: call    KiRestoreDebugRegisterState
 * 00000001406A1CB6: mov     rcx, gs:188h
 * 00000001406A1CBF: bt      dword ptr [rcx+74h], 16h
 * 00000001406A1CC4: jnb     short loc_1406A1CF0
 * 00000001406A1CC6: xor     ecx, ecx
 * 00000001406A1CC8: rdsspq  rcx
 * 00000001406A1CCD: mov     r8, gs:9D28h
 * 00000001406A1CD6: add     r8, 8
 * 00000001406A1CDA: cmp     rcx, r8
 * 00000001406A1CDD: jnz     short loc_1406A1CF0
 * 00000001406A1CDF: mov     rcx, gs:9D20h
 * 00000001406A1CE8: rstorssp qword ptr [rcx]
 * 00000001406A1CEC: saveprevssp
 * 00000001406A1CF0: mov     byte ptr gs:85Eh, 0
 * 00000001406A1CF9: movzx   eax, word ptr gs:86Ch
 * 00000001406A1D02: cmp     gs:866h, ax
 * 00000001406A1D0B: jz      short loc_1406A1D1F
 * 00000001406A1D0D: mov     gs:866h, ax
 * 00000001406A1D16: mov     ecx, 48h ; 'H'
 * 00000001406A1D1B: xor     edx, edx
 * 00000001406A1D1D: wrmsr
 * 00000001406A1D1F: btr     word ptr gs:858h, 2
 * 00000001406A1D2A: jnb     short loc_1406A1D3A
 * 00000001406A1D2C: mov     eax, 1
 * 00000001406A1D31: xor     edx, edx
 * 00000001406A1D33: mov     ecx, 49h ; 'I'
 * 00000001406A1D38: wrmsr
 * 00000001406A1D3A: btr     word ptr gs:858h, 5
 * 00000001406A1D45: jnb     loc_1406A1E82
 * 00000001406A1D4B: call    loc_1406A1E5E
 * 00000001406A1D50: add     rsp, 8
 * 00000001406A1D54: call    loc_1406A1E67
 * 00000001406A1D59: add     rsp, 8
 * 00000001406A1D5D: call    loc_1406A1D50
 * 00000001406A1D62: add     rsp, 8
 * 00000001406A1D66: call    loc_1406A1D59
 * 00000001406A1D6B: add     rsp, 8
 * 00000001406A1D6F: call    loc_1406A1D62
 * 00000001406A1D74: add     rsp, 8
 * 00000001406A1D78: call    loc_1406A1D6B
 * 00000001406A1D7D: add     rsp, 8
 * 00000001406A1D81: call    loc_1406A1D74
 * 00000001406A1D86: add     rsp, 8
 * 00000001406A1D8A: call    loc_1406A1D7D
 * 00000001406A1D8F: add     rsp, 8
 * 00000001406A1D93: call    loc_1406A1D86
 * 00000001406A1D98: add     rsp, 8
 * 00000001406A1D9C: call    loc_1406A1D8F
 * 00000001406A1DA1: add     rsp, 8
 * 00000001406A1DA5: call    loc_1406A1D98
 * 00000001406A1DAA: add     rsp, 8
 * 00000001406A1DAE: call    loc_1406A1DA1
 * 00000001406A1DB3: add     rsp, 8
 * 00000001406A1DB7: call    loc_1406A1DAA
 * 00000001406A1DBC: add     rsp, 8
 * 00000001406A1DC0: call    loc_1406A1DB3
 * 00000001406A1DC5: add     rsp, 8
 * 00000001406A1DC9: call    loc_1406A1DBC
 * 00000001406A1DCE: add     rsp, 8
 * 00000001406A1DD2: call    loc_1406A1DC5
 * 00000001406A1DD7: add     rsp, 8
 * 00000001406A1DDB: call    loc_1406A1DCE
 * 00000001406A1DE0: add     rsp, 8
 * 00000001406A1DE4: call    loc_1406A1DD7
 * 00000001406A1DE9: add     rsp, 8
 * 00000001406A1DED: call    loc_1406A1DE0
 * 00000001406A1DF2: add     rsp, 8
 * 00000001406A1DF6: call    loc_1406A1DE9
 * 00000001406A1DFB: add     rsp, 8
 * 00000001406A1DFF: call    loc_1406A1DF2
 * 00000001406A1E04: add     rsp, 8
 * 00000001406A1E08: call    loc_1406A1DFB
 * 00000001406A1E0D: add     rsp, 8
 * 00000001406A1E11: call    loc_1406A1E04
 * 00000001406A1E16: add     rsp, 8
 * 00000001406A1E1A: call    loc_1406A1E0D
 * 00000001406A1E1F: add     rsp, 8
 * 00000001406A1E23: call    loc_1406A1E16
 * 00000001406A1E28: add     rsp, 8
 * 00000001406A1E2C: call    loc_1406A1E1F
 * 00000001406A1E31: add     rsp, 8
 * 00000001406A1E35: call    loc_1406A1E28
 * 00000001406A1E3A: add     rsp, 8
 * 00000001406A1E3E: call    loc_1406A1E31
 * 00000001406A1E43: add     rsp, 8
 * 00000001406A1E47: call    loc_1406A1E3A
 * 00000001406A1E4C: add     rsp, 8
 * 00000001406A1E50: call    loc_1406A1E43
 * 00000001406A1E55: add     rsp, 8
 * 00000001406A1E59: call    loc_1406A1E4C
 * 00000001406A1E5E: add     rsp, 8
 * 00000001406A1E62: call    loc_1406A1E55
 * 00000001406A1E67: add     rsp, 8
 * 00000001406A1E6B: mov     eax, 0DADAh
 * 00000001406A1E70: test    byte ptr gs:85Ch, 8
 * 00000001406A1E79: jz      short loc_1406A1E82
 * 00000001406A1E7B: mov     al, 20h ; ' '
 * 00000001406A1E7D: incsspq rax
 * 00000001406A1E82: test    word ptr gs:858h, 100h
 * 00000001406A1E8D: jz      short loc_1406A1E9B
 * 00000001406A1E8F: xor     eax, eax
 * 00000001406A1E91: xor     edx, edx
 * 00000001406A1E93: mov     ecx, 1
 * 00000001406A1E98: div     rcx
 * 00000001406A1E9B: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406A1E9F: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406A1EA3: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406A1EA7: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406A1EAB: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406A1EAF: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406A1EB3: mov     r11, [rbp-20h]
 * 00000001406A1EB7: mov     r10, [rbp-28h]
 * 00000001406A1EBB: mov     r9, [rbp-30h]
 * 00000001406A1EBF: mov     r8, [rbp-38h]
 * 00000001406A1EC3: mov     rdx, [rbp-40h]
 * 00000001406A1EC7: mov     rcx, [rbp-48h]
 * 00000001406A1ECB: mov     rax, [rbp-50h]
 * 00000001406A1ECF: mov     rsp, rbp
 * 00000001406A1ED2: mov     rbp, [rbp+0D8h]
 * 00000001406A1ED9: add     rsp, 0E8h
 * 00000001406A1EE0: test    cs:KiKvaShadow, 1
 * 00000001406A1EE7: jz      short loc_1406A1EEE
 * 00000001406A1EE9: jmp     KiKernelExit
 * 00000001406A1EEE: test    word ptr gs:858h, 200h
 * 00000001406A1EF9: jz      short loc_1406A1F00
 * 00000001406A1EFB: verw    [rsp-1C8h+arg_1E0]
 * 00000001406A1F00: swapgs
 * 00000001406A1F03: iretq
 * 00000001406A1F05: ldmxcsr dword ptr [rbp-54h]
 * 00000001406A1F09: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406A1F0D: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406A1F11: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406A1F15: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406A1F19: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406A1F1D: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406A1F21: mov     r11, [rbp-20h]
 * 00000001406A1F25: mov     r10, [rbp-28h]
 * 00000001406A1F29: mov     r9, [rbp-30h]
 * 00000001406A1F2D: mov     r8, [rbp-38h]
 * 00000001406A1F31: mov     rdx, [rbp-40h]
 * 00000001406A1F35: mov     rcx, [rbp-48h]
 * 00000001406A1F39: mov     rax, [rbp-50h]
 * 00000001406A1F3D: mov     rsp, rbp
 * 00000001406A1F40: mov     rbp, [rbp+0D8h]
 * 00000001406A1F47: add     rsp, 0E8h
 * 00000001406A1F4E: iretq
 */
