/*
 * XREFs of KiSpuriousDispatchNoEOI @ 0x1406A2AF0
 * Callers:
 *     <none>
 * Callees:
 *     KiStartInterruptCycleAccumulation @ 0x14028E700 (KiStartInterruptCycleAccumulation.c)
 *     KiEndInterruptCycleAccumulation @ 0x14028EFB0 (KiEndInterruptCycleAccumulation.c)
 *     KiUpdateStibpPairing @ 0x1403E3F50 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403EF6C0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiRestoreDebugRegisterState @ 0x1404F9500 (KiRestoreDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405B3940 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405BB410 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x14069FCF0 (KiRestoreSetContextState.c)
 *     KiSpuriousDispatchNoEOI @ 0x1406A2AF0 (KiSpuriousDispatchNoEOI.c)
 *     KiInitiateUserApc @ 0x1406A4590 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1406A6F30 (KiDpcInterruptBypass.c)
 */

/*
 * Hex-Rays decompilation failed for KiSpuriousDispatchNoEOI @ 0x1406A2AF0
 * Reason: Hex-Rays returned no pseudocode for 0x1406A2AF0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406A2AF0: mov     ecx, 0Fh
 * 00000001406A2AF5: cmp     cs:KiIrqlFlags, 0
 * 00000001406A2AFC: jz      short loc_1406A2B05
 * 00000001406A2AFE: call    KzSetIrqlUnsafe
 * 00000001406A2B03: jmp     short loc_1406A2B0D
 * 00000001406A2B05: mov     rax, cr8
 * 00000001406A2B09: mov     cr8, rcx
 * 00000001406A2B0D: mov     [rbp-57h], al
 * 00000001406A2B10: mov     rcx, gs:20h
 * 00000001406A2B19: xor     edx, edx
 * 00000001406A2B1B: call    KiStartInterruptCycleAccumulation
 * 00000001406A2B20: sti
 * 00000001406A2B21: inc     dword ptr [rsi+74h]
 * 00000001406A2B24: cli
 * 00000001406A2B25: mov     rcx, gs:20h
 * 00000001406A2B2E: movzx   edx, byte ptr [rbp-57h]
 * 00000001406A2B32: call    KiEndInterruptCycleAccumulation
 * 00000001406A2B37: test    al, al
 * 00000001406A2B39: jz      short loc_1406A2B40
 * 00000001406A2B3B: call    KiDpcInterruptBypass
 * 00000001406A2B40: movzx   ecx, byte ptr [rbp-57h]
 * 00000001406A2B44: cmp     cs:KiIrqlFlags, 0
 * 00000001406A2B4B: jz      short loc_1406A2B54
 * 00000001406A2B4D: call    KzSetIrqlUnsafe
 * 00000001406A2B52: jmp     short loc_1406A2B58
 * 00000001406A2B54: mov     cr8, rcx
 * 00000001406A2B58: mov     rsi, [rbp+0D0h]
 * 00000001406A2B5F: cli
 * 00000001406A2B60: test    byte ptr [rbp+0F0h], 1
 * 00000001406A2B67: jz      loc_1406A2E62
 * 00000001406A2B6D: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406A2B74: jz      short loc_1406A2B79
 * 00000001406A2B76: stac
 * 00000001406A2B79: mov     rcx, gs:188h
 * 00000001406A2B82: test    byte ptr [rcx+0C2h], 3
 * 00000001406A2B89: jz      short loc_1406A2BA6
 * 00000001406A2B8B: mov     ecx, 1
 * 00000001406A2B90: mov     cr8, rcx
 * 00000001406A2B94: sti
 * 00000001406A2B95: call    KiInitiateUserApc
 * 00000001406A2B9A: cli
 * 00000001406A2B9B: mov     ecx, 0
 * 00000001406A2BA0: mov     cr8, rcx
 * 00000001406A2BA4: jmp     short loc_1406A2B79
 * 00000001406A2BA6: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406A2BAB: test    eax, eax
 * 00000001406A2BAD: mov     rax, [rbp-50h]
 * 00000001406A2BB1: jnz     short loc_1406A2B79
 * 00000001406A2BB3: test    byte ptr gs:860h, 2
 * 00000001406A2BBC: jz      short loc_1406A2BC5
 * 00000001406A2BBE: xor     ecx, ecx
 * 00000001406A2BC0: call    KiUpdateStibpPairing
 * 00000001406A2BC5: mov     rcx, gs:188h
 * 00000001406A2BCE: test    dword ptr [rcx], 8000000h
 * 00000001406A2BD4: jz      short loc_1406A2BDB
 * 00000001406A2BD6: call    KiRestoreSetContextState
 * 00000001406A2BDB: mov     rcx, gs:188h
 * 00000001406A2BE4: test    dword ptr [rcx], 10000h
 * 00000001406A2BEA: jz      short loc_1406A2C00
 * 00000001406A2BEC: test    byte ptr [rcx+2], 1
 * 00000001406A2BF0: jz      short loc_1406A2C00
 * 00000001406A2BF2: call    KiCopyCounters
 * 00000001406A2BF7: mov     rcx, gs:188h
 * 00000001406A2C00: ldmxcsr dword ptr [rbp-54h]
 * 00000001406A2C04: cmp     word ptr [rbp+80h], 0
 * 00000001406A2C0C: jz      short loc_1406A2C13
 * 00000001406A2C0E: call    KiRestoreDebugRegisterState
 * 00000001406A2C13: mov     rcx, gs:188h
 * 00000001406A2C1C: bt      dword ptr [rcx+74h], 16h
 * 00000001406A2C21: jnb     short loc_1406A2C4D
 * 00000001406A2C23: xor     ecx, ecx
 * 00000001406A2C25: rdsspq  rcx
 * 00000001406A2C2A: mov     r8, gs:9D28h
 * 00000001406A2C33: add     r8, 8
 * 00000001406A2C37: cmp     rcx, r8
 * 00000001406A2C3A: jnz     short loc_1406A2C4D
 * 00000001406A2C3C: mov     rcx, gs:9D20h
 * 00000001406A2C45: rstorssp qword ptr [rcx]
 * 00000001406A2C49: saveprevssp
 * 00000001406A2C4D: mov     byte ptr gs:85Eh, 0
 * 00000001406A2C56: movzx   eax, word ptr gs:86Ch
 * 00000001406A2C5F: cmp     gs:866h, ax
 * 00000001406A2C68: jz      short loc_1406A2C7C
 * 00000001406A2C6A: mov     gs:866h, ax
 * 00000001406A2C73: mov     ecx, 48h ; 'H'
 * 00000001406A2C78: xor     edx, edx
 * 00000001406A2C7A: wrmsr
 * 00000001406A2C7C: btr     word ptr gs:858h, 2
 * 00000001406A2C87: jnb     short loc_1406A2C97
 * 00000001406A2C89: mov     eax, 1
 * 00000001406A2C8E: xor     edx, edx
 * 00000001406A2C90: mov     ecx, 49h ; 'I'
 * 00000001406A2C95: wrmsr
 * 00000001406A2C97: btr     word ptr gs:858h, 5
 * 00000001406A2CA2: jnb     loc_1406A2DDF
 * 00000001406A2CA8: call    loc_1406A2DBB
 * 00000001406A2CAD: add     rsp, 8
 * 00000001406A2CB1: call    loc_1406A2DC4
 * 00000001406A2CB6: add     rsp, 8
 * 00000001406A2CBA: call    loc_1406A2CAD
 * 00000001406A2CBF: add     rsp, 8
 * 00000001406A2CC3: call    loc_1406A2CB6
 * 00000001406A2CC8: add     rsp, 8
 * 00000001406A2CCC: call    loc_1406A2CBF
 * 00000001406A2CD1: add     rsp, 8
 * 00000001406A2CD5: call    loc_1406A2CC8
 * 00000001406A2CDA: add     rsp, 8
 * 00000001406A2CDE: call    loc_1406A2CD1
 * 00000001406A2CE3: add     rsp, 8
 * 00000001406A2CE7: call    loc_1406A2CDA
 * 00000001406A2CEC: add     rsp, 8
 * 00000001406A2CF0: call    loc_1406A2CE3
 * 00000001406A2CF5: add     rsp, 8
 * 00000001406A2CF9: call    loc_1406A2CEC
 * 00000001406A2CFE: add     rsp, 8
 * 00000001406A2D02: call    loc_1406A2CF5
 * 00000001406A2D07: add     rsp, 8
 * 00000001406A2D0B: call    loc_1406A2CFE
 * 00000001406A2D10: add     rsp, 8
 * 00000001406A2D14: call    loc_1406A2D07
 * 00000001406A2D19: add     rsp, 8
 * 00000001406A2D1D: call    loc_1406A2D10
 * 00000001406A2D22: add     rsp, 8
 * 00000001406A2D26: call    loc_1406A2D19
 * 00000001406A2D2B: add     rsp, 8
 * 00000001406A2D2F: call    loc_1406A2D22
 * 00000001406A2D34: add     rsp, 8
 * 00000001406A2D38: call    loc_1406A2D2B
 * 00000001406A2D3D: add     rsp, 8
 * 00000001406A2D41: call    loc_1406A2D34
 * 00000001406A2D46: add     rsp, 8
 * 00000001406A2D4A: call    loc_1406A2D3D
 * 00000001406A2D4F: add     rsp, 8
 * 00000001406A2D53: call    loc_1406A2D46
 * 00000001406A2D58: add     rsp, 8
 * 00000001406A2D5C: call    loc_1406A2D4F
 * 00000001406A2D61: add     rsp, 8
 * 00000001406A2D65: call    loc_1406A2D58
 * 00000001406A2D6A: add     rsp, 8
 * 00000001406A2D6E: call    loc_1406A2D61
 * 00000001406A2D73: add     rsp, 8
 * 00000001406A2D77: call    loc_1406A2D6A
 * 00000001406A2D7C: add     rsp, 8
 * 00000001406A2D80: call    loc_1406A2D73
 * 00000001406A2D85: add     rsp, 8
 * 00000001406A2D89: call    loc_1406A2D7C
 * 00000001406A2D8E: add     rsp, 8
 * 00000001406A2D92: call    loc_1406A2D85
 * 00000001406A2D97: add     rsp, 8
 * 00000001406A2D9B: call    loc_1406A2D8E
 * 00000001406A2DA0: add     rsp, 8
 * 00000001406A2DA4: call    loc_1406A2D97
 * 00000001406A2DA9: add     rsp, 8
 * 00000001406A2DAD: call    loc_1406A2DA0
 * 00000001406A2DB2: add     rsp, 8
 * 00000001406A2DB6: call    loc_1406A2DA9
 * 00000001406A2DBB: add     rsp, 8
 * 00000001406A2DBF: call    loc_1406A2DB2
 * 00000001406A2DC4: add     rsp, 8
 * 00000001406A2DC8: mov     eax, 0DADAh
 * 00000001406A2DCD: test    byte ptr gs:85Ch, 8
 * 00000001406A2DD6: jz      short loc_1406A2DDF
 * 00000001406A2DD8: mov     al, 20h ; ' '
 * 00000001406A2DDA: incsspq rax
 * 00000001406A2DDF: test    word ptr gs:858h, 100h
 * 00000001406A2DEA: jz      short loc_1406A2DF8
 * 00000001406A2DEC: xor     eax, eax
 * 00000001406A2DEE: xor     edx, edx
 * 00000001406A2DF0: mov     ecx, 1
 * 00000001406A2DF5: div     rcx
 * 00000001406A2DF8: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406A2DFC: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406A2E00: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406A2E04: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406A2E08: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406A2E0C: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406A2E10: mov     r11, [rbp-20h]
 * 00000001406A2E14: mov     r10, [rbp-28h]
 * 00000001406A2E18: mov     r9, [rbp-30h]
 * 00000001406A2E1C: mov     r8, [rbp-38h]
 * 00000001406A2E20: mov     rdx, [rbp-40h]
 * 00000001406A2E24: mov     rcx, [rbp-48h]
 * 00000001406A2E28: mov     rax, [rbp-50h]
 * 00000001406A2E2C: mov     rsp, rbp
 * 00000001406A2E2F: mov     rbp, [rbp+0D8h]
 * 00000001406A2E36: add     rsp, 0E8h
 * 00000001406A2E3D: test    cs:KiKvaShadow, 1
 * 00000001406A2E44: jz      short loc_1406A2E4B
 * 00000001406A2E46: jmp     KiKernelExit
 * 00000001406A2E4B: test    word ptr gs:858h, 200h
 * 00000001406A2E56: jz      short loc_1406A2E5D
 * 00000001406A2E58: verw    [rsp-1E8h+arg_200]
 * 00000001406A2E5D: swapgs
 * 00000001406A2E60: iretq
 * 00000001406A2E62: ldmxcsr dword ptr [rbp-54h]
 * 00000001406A2E66: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406A2E6A: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406A2E6E: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406A2E72: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406A2E76: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406A2E7A: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406A2E7E: mov     r11, [rbp-20h]
 * 00000001406A2E82: mov     r10, [rbp-28h]
 * 00000001406A2E86: mov     r9, [rbp-30h]
 * 00000001406A2E8A: mov     r8, [rbp-38h]
 * 00000001406A2E8E: mov     rdx, [rbp-40h]
 * 00000001406A2E92: mov     rcx, [rbp-48h]
 * 00000001406A2E96: mov     rax, [rbp-50h]
 * 00000001406A2E9A: mov     rsp, rbp
 * 00000001406A2E9D: mov     rbp, [rbp+0D8h]
 * 00000001406A2EA4: add     rsp, 0E8h
 * 00000001406A2EAB: iretq
 */
