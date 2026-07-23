/*
 * XREFs of KiDpcInterrupt @ 0x1406B2A80
 * Callers:
 *     KiDpcInterruptShadow @ 0x140BBDF40 (KiDpcInterruptShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14028FBE0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiDispatchInterrupt @ 0x1402A32B0 (KiDispatchInterrupt.c)
 *     KiUpdateStibpPairing @ 0x1403DFC10 (KiUpdateStibpPairing.c)
 *     HalPerformEndOfInterrupt @ 0x140408120 (HalPerformEndOfInterrupt.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14040ED30 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x1404F94D0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1404F9550 (KiSaveDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405B4DD0 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405BC880 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x1406ABF60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406B0800 (KiInitiateUserApc.c)
 *     KiDpcInterrupt @ 0x1406B2A80 (KiDpcInterrupt.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406C0640 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiDpcInterrupt @ 0x1406B2A80
 * Reason: Hex-Rays returned no pseudocode for 0x1406B2A80
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B2A80: sub     rsp, 8
 * 00000001406B2A84: push    rbp
 * 00000001406B2A85: push    rsi
 * 00000001406B2A86: sub     rsp, 150h
 * 00000001406B2A8D: lea     rbp, [rsp+80h]
 * 00000001406B2A95: mov     byte ptr [rbp+0E8h+var_13F+2], 0
 * 00000001406B2A99: mov     [rbp+0E8h+var_13F+7], rax
 * 00000001406B2A9D: mov     [rbp+0E8h+var_130], rcx
 * 00000001406B2AA1: mov     [rbp+0E8h+var_128], rdx
 * 00000001406B2AA5: mov     [rbp+0E8h+var_120], r8
 * 00000001406B2AA9: mov     [rbp+0E8h+var_118], r9
 * 00000001406B2AAD: mov     [rbp+0E8h+var_110], r10
 * 00000001406B2AB1: mov     [rbp+0E8h+var_108], r11
 * 00000001406B2AB5: test    [rbp+0E8h+arg_0], 1
 * 00000001406B2ABC: jnz     short loc_1406B2AF6
 * 00000001406B2ABE: xor     edx, edx
 * 00000001406B2AC0: rdsspq  rdx
 * 00000001406B2AC5: mov     [rbp+0E8h+var_90], rdx
 * 00000001406B2AC9: lfence
 * 00000001406B2ACC: test    byte ptr gs:858h, 1
 * 00000001406B2AD5: jnz     short loc_1406B2ADF
 * 00000001406B2AD7: lfence
 * 00000001406B2ADA: jmp     loc_1406B2D67
 * 00000001406B2ADF: movzx   eax, word ptr gs:866h
 * 00000001406B2AE8: mov     ecx, 48h ; 'H'
 * 00000001406B2AED: xor     edx, edx
 * 00000001406B2AEF: wrmsr
 * 00000001406B2AF1: jmp     loc_1406B2D67
 * 00000001406B2AF6: test    cs:KiKvaShadow, 1
 * 00000001406B2AFD: jnz     short loc_1406B2B02
 * 00000001406B2AFF: swapgs
 * 00000001406B2B02: lfence
 * 00000001406B2B05: mov     rcx, gs:9D28h
 * 00000001406B2B0E: test    rcx, rcx
 * 00000001406B2B11: jz      short loc_1406B2B32
 * 00000001406B2B13: rdsspq  rdx
 * 00000001406B2B18: mov     r10, gs:9D20h
 * 00000001406B2B21: add     r10, 8
 * 00000001406B2B25: cmp     rdx, r10
 * 00000001406B2B28: jnz     short loc_1406B2B32
 * 00000001406B2B2A: rstorssp qword ptr [rcx]
 * 00000001406B2B2E: saveprevssp
 * 00000001406B2B32: mov     r10, gs:188h
 * 00000001406B2B3B: mov     rcx, gs:188h
 * 00000001406B2B44: mov     rcx, [rcx+220h]
 * 00000001406B2B4B: mov     rcx, [rcx+760h]
 * 00000001406B2B52: mov     gs:850h, rcx
 * 00000001406B2B5B: mov     cx, gs:862h
 * 00000001406B2B64: mov     gs:864h, cx
 * 00000001406B2B6D: mov     cl, gs:858h
 * 00000001406B2B75: mov     gs:85Ah, cl
 * 00000001406B2B7D: movzx   eax, word ptr gs:868h
 * 00000001406B2B86: cmp     gs:866h, ax
 * 00000001406B2B8F: jz      short loc_1406B2BA3
 * 00000001406B2B91: mov     gs:866h, ax
 * 00000001406B2B9A: mov     ecx, 48h ; 'H'
 * 00000001406B2B9F: xor     edx, edx
 * 00000001406B2BA1: wrmsr
 * 00000001406B2BA3: movzx   edx, byte ptr gs:858h
 * 00000001406B2BAC: test    edx, 8
 * 00000001406B2BB2: jz      short loc_1406B2BCB
 * 00000001406B2BB4: mov     eax, 1
 * 00000001406B2BB9: xor     edx, edx
 * 00000001406B2BBB: mov     ecx, 49h ; 'I'
 * 00000001406B2BC0: wrmsr
 * 00000001406B2BC2: movzx   edx, byte ptr gs:858h
 * 00000001406B2BCB: test    edx, 2
 * 00000001406B2BD1: jz      loc_1406B2D0E
 * 00000001406B2BD7: call    loc_1406B2CEA
 * 00000001406B2BDC: add     rsp, 8
 * 00000001406B2BE0: call    loc_1406B2CF3
 * 00000001406B2BE5: add     rsp, 8
 * 00000001406B2BE9: call    loc_1406B2BDC
 * 00000001406B2BEE: add     rsp, 8
 * 00000001406B2BF2: call    loc_1406B2BE5
 * 00000001406B2BF7: add     rsp, 8
 * 00000001406B2BFB: call    loc_1406B2BEE
 * 00000001406B2C00: add     rsp, 8
 * 00000001406B2C04: call    loc_1406B2BF7
 * 00000001406B2C09: add     rsp, 8
 * 00000001406B2C0D: call    loc_1406B2C00
 * 00000001406B2C12: add     rsp, 8
 * 00000001406B2C16: call    loc_1406B2C09
 * 00000001406B2C1B: add     rsp, 8
 * 00000001406B2C1F: call    loc_1406B2C12
 * 00000001406B2C24: add     rsp, 8
 * 00000001406B2C28: call    loc_1406B2C1B
 * 00000001406B2C2D: add     rsp, 8
 * 00000001406B2C31: call    loc_1406B2C24
 * 00000001406B2C36: add     rsp, 8
 * 00000001406B2C3A: call    loc_1406B2C2D
 * 00000001406B2C3F: add     rsp, 8
 * 00000001406B2C43: call    loc_1406B2C36
 * 00000001406B2C48: add     rsp, 8
 * 00000001406B2C4C: call    loc_1406B2C3F
 * 00000001406B2C51: add     rsp, 8
 * 00000001406B2C55: call    loc_1406B2C48
 * 00000001406B2C5A: add     rsp, 8
 * 00000001406B2C5E: call    loc_1406B2C51
 * 00000001406B2C63: add     rsp, 8
 * 00000001406B2C67: call    loc_1406B2C5A
 * 00000001406B2C6C: add     rsp, 8
 * 00000001406B2C70: call    loc_1406B2C63
 * 00000001406B2C75: add     rsp, 8
 * 00000001406B2C79: call    loc_1406B2C6C
 * 00000001406B2C7E: add     rsp, 8
 * 00000001406B2C82: call    loc_1406B2C75
 * 00000001406B2C87: add     rsp, 8
 * 00000001406B2C8B: call    loc_1406B2C7E
 * 00000001406B2C90: add     rsp, 8
 * 00000001406B2C94: call    loc_1406B2C87
 * 00000001406B2C99: add     rsp, 8
 * 00000001406B2C9D: call    loc_1406B2C90
 * 00000001406B2CA2: add     rsp, 8
 * 00000001406B2CA6: call    loc_1406B2C99
 * 00000001406B2CAB: add     rsp, 8
 * 00000001406B2CAF: call    loc_1406B2CA2
 * 00000001406B2CB4: add     rsp, 8
 * 00000001406B2CB8: call    loc_1406B2CAB
 * 00000001406B2CBD: add     rsp, 8
 * 00000001406B2CC1: call    loc_1406B2CB4
 * 00000001406B2CC6: add     rsp, 8
 * 00000001406B2CCA: call    loc_1406B2CBD
 * 00000001406B2CCF: add     rsp, 8
 * 00000001406B2CD3: call    loc_1406B2CC6
 * 00000001406B2CD8: add     rsp, 8
 * 00000001406B2CDC: call    loc_1406B2CCF
 * 00000001406B2CE1: add     rsp, 8
 * 00000001406B2CE5: call    loc_1406B2CD8
 * 00000001406B2CEA: add     rsp, 8
 * 00000001406B2CEE: call    loc_1406B2CE1
 * 00000001406B2CF3: add     rsp, 8
 * 00000001406B2CF7: mov     eax, 0DADAh
 * 00000001406B2CFC: test    byte ptr gs:85Ch, 8
 * 00000001406B2D05: jz      short loc_1406B2D0E
 * 00000001406B2D07: mov     al, 20h ; ' '
 * 00000001406B2D09: incsspq rax
 * 00000001406B2D0E: test    edx, 80h
 * 00000001406B2D14: jz      short loc_1406B2D1E
 * 00000001406B2D16: lfence
 * 00000001406B2D19: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406B2D1E: lfence
 * 00000001406B2D21: mov     byte ptr gs:85Eh, 0
 * 00000001406B2D2A: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406B2D31: jz      short loc_1406B2D52
 * 00000001406B2D33: mov     ecx, 6A7h
 * 00000001406B2D38: rdmsr
 * 00000001406B2D3A: cmp     edx, 0
 * 00000001406B2D3D: jz      short loc_1406B2D52
 * 00000001406B2D3F: mov     ecx, edx
 * 00000001406B2D41: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406B2D47: cmp     edx, ecx
 * 00000001406B2D49: jz      short loc_1406B2D52
 * 00000001406B2D4B: mov     ecx, 6A7h
 * 00000001406B2D50: wrmsr
 * 00000001406B2D52: test    byte ptr [r10+3], 3
 * 00000001406B2D57: mov     [rbp+0E8h+var_68], 0
 * 00000001406B2D60: jz      short loc_1406B2D67
 * 00000001406B2D62: call    KiSaveDebugRegisterState
 * 00000001406B2D67: cld
 * 00000001406B2D68: stmxcsr dword ptr [rbp+0E8h+var_13F+3]
 * 00000001406B2D6C: ldmxcsr dword ptr gs:180h
 * 00000001406B2D75: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001406B2D79: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001406B2D7D: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001406B2D81: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001406B2D85: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001406B2D89: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001406B2D8D: test    [rbp+0E8h+arg_0], 1
 * 00000001406B2D94: jz      short loc_1406B2D9B
 * 00000001406B2D96: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406B2D9B: xor     esi, esi
 * 00000001406B2D9D: inc     dword ptr gs:87C0h
 * 00000001406B2DA5: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B2DAC: jz      short loc_1406B2DB1
 * 00000001406B2DAE: clac
 * 00000001406B2DB1: test    cs:KiAmdTprLowerInterruptDelayDynamicWorkaround, 1
 * 00000001406B2DB8: jz      short loc_1406B2DDE
 * 00000001406B2DBA: btr     dword ptr gs:228h, 2
 * 00000001406B2DC4: cmp     dword ptr gs:228h, 0
 * 00000001406B2DCD: jnz     short loc_1406B2DDE
 * 00000001406B2DCF: mov     ecx, 0C0010015h
 * 00000001406B2DD4: rdmsr
 * 00000001406B2DD6: btr     edx, 0
 * 00000001406B2DDA: jnb     short loc_1406B2DDE
 * 00000001406B2DDC: wrmsr
 * 00000001406B2DDE: mov     ecx, 2
 * 00000001406B2DE3: cmp     cs:KiIrqlFlags, 0
 * 00000001406B2DEA: jz      short loc_1406B2DF3
 * 00000001406B2DEC: call    KzSetIrqlUnsafe
 * 00000001406B2DF1: jmp     short loc_1406B2DFB
 * 00000001406B2DF3: mov     rax, cr8
 * 00000001406B2DF7: mov     cr8, rcx
 * 00000001406B2DFB: mov     byte ptr [rbp+0E8h+var_13F], al
 * 00000001406B2DFE: mov     rcx, rsi
 * 00000001406B2E01: call    HalPerformEndOfInterrupt
 * 00000001406B2E06: sti
 * 00000001406B2E07: cmp     byte ptr gs:187h, 0
 * 00000001406B2E10: jnz     short loc_1406B2E1F
 * 00000001406B2E12: mov     rcx, [rbp+0E8h+var_13F]
 * 00000001406B2E16: lea     rdx, [rbp+0E8h+var_168]
 * 00000001406B2E1A: call    KiDispatchInterrupt
 * 00000001406B2E1F: cli
 * 00000001406B2E20: movzx   ecx, byte ptr [rbp+0E8h+var_13F]
 * 00000001406B2E24: cmp     cs:KiIrqlFlags, 0
 * 00000001406B2E2B: jz      short loc_1406B2E34
 * 00000001406B2E2D: call    KzSetIrqlUnsafe
 * 00000001406B2E32: jmp     short loc_1406B2E38
 * 00000001406B2E34: mov     cr8, rcx
 * 00000001406B2E38: mov     rsi, [rbp+0E8h+var_18]
 * 00000001406B2E3F: cli
 * 00000001406B2E40: test    [rbp+0E8h+arg_0], 1
 * 00000001406B2E47: jz      loc_1406B3142
 * 00000001406B2E4D: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B2E54: jz      short loc_1406B2E59
 * 00000001406B2E56: stac
 * 00000001406B2E59: mov     rcx, gs:188h
 * 00000001406B2E62: test    byte ptr [rcx+0C2h], 3
 * 00000001406B2E69: jz      short loc_1406B2E86
 * 00000001406B2E6B: mov     ecx, 1
 * 00000001406B2E70: mov     cr8, rcx
 * 00000001406B2E74: sti
 * 00000001406B2E75: call    KiInitiateUserApc
 * 00000001406B2E7A: cli
 * 00000001406B2E7B: mov     ecx, 0
 * 00000001406B2E80: mov     cr8, rcx
 * 00000001406B2E84: jmp     short loc_1406B2E59
 * 00000001406B2E86: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406B2E8B: test    eax, eax
 * 00000001406B2E8D: mov     rax, [rbp+0E8h+var_13F+7]
 * 00000001406B2E91: jnz     short loc_1406B2E59
 * 00000001406B2E93: test    byte ptr gs:860h, 2
 * 00000001406B2E9C: jz      short loc_1406B2EA5
 * 00000001406B2E9E: xor     ecx, ecx
 * 00000001406B2EA0: call    KiUpdateStibpPairing
 * 00000001406B2EA5: mov     rcx, gs:188h
 * 00000001406B2EAE: test    dword ptr [rcx], 8000000h
 * 00000001406B2EB4: jz      short loc_1406B2EBB
 * 00000001406B2EB6: call    KiRestoreSetContextState
 * 00000001406B2EBB: mov     rcx, gs:188h
 * 00000001406B2EC4: test    dword ptr [rcx], 10000h
 * 00000001406B2ECA: jz      short loc_1406B2EE0
 * 00000001406B2ECC: test    byte ptr [rcx+2], 1
 * 00000001406B2ED0: jz      short loc_1406B2EE0
 * 00000001406B2ED2: call    KiCopyCounters
 * 00000001406B2ED7: mov     rcx, gs:188h
 * 00000001406B2EE0: ldmxcsr dword ptr [rbp+0E8h+var_13F+3]
 * 00000001406B2EE4: cmp     [rbp+0E8h+var_68], 0
 * 00000001406B2EEC: jz      short loc_1406B2EF3
 * 00000001406B2EEE: call    KiRestoreDebugRegisterState
 * 00000001406B2EF3: mov     rcx, gs:188h
 * 00000001406B2EFC: bt      dword ptr [rcx+74h], 16h
 * 00000001406B2F01: jnb     short loc_1406B2F2D
 * 00000001406B2F03: xor     ecx, ecx
 * 00000001406B2F05: rdsspq  rcx
 * 00000001406B2F0A: mov     r8, gs:9D28h
 * 00000001406B2F13: add     r8, 8
 * 00000001406B2F17: cmp     rcx, r8
 * 00000001406B2F1A: jnz     short loc_1406B2F2D
 * 00000001406B2F1C: mov     rcx, gs:9D20h
 * 00000001406B2F25: rstorssp qword ptr [rcx]
 * 00000001406B2F29: saveprevssp
 * 00000001406B2F2D: mov     byte ptr gs:85Eh, 0
 * 00000001406B2F36: movzx   eax, word ptr gs:86Ch
 * 00000001406B2F3F: cmp     gs:866h, ax
 * 00000001406B2F48: jz      short loc_1406B2F5C
 * 00000001406B2F4A: mov     gs:866h, ax
 * 00000001406B2F53: mov     ecx, 48h ; 'H'
 * 00000001406B2F58: xor     edx, edx
 * 00000001406B2F5A: wrmsr
 * 00000001406B2F5C: btr     word ptr gs:858h, 2
 * 00000001406B2F67: jnb     short loc_1406B2F77
 * 00000001406B2F69: mov     eax, 1
 * 00000001406B2F6E: xor     edx, edx
 * 00000001406B2F70: mov     ecx, 49h ; 'I'
 * 00000001406B2F75: wrmsr
 * 00000001406B2F77: btr     word ptr gs:858h, 5
 * 00000001406B2F82: jnb     loc_1406B30BF
 * 00000001406B2F88: call    loc_1406B309B
 * 00000001406B2F8D: add     rsp, 8
 * 00000001406B2F91: call    loc_1406B30A4
 * 00000001406B2F96: add     rsp, 8
 * 00000001406B2F9A: call    loc_1406B2F8D
 * 00000001406B2F9F: add     rsp, 8
 * 00000001406B2FA3: call    loc_1406B2F96
 * 00000001406B2FA8: add     rsp, 8
 * 00000001406B2FAC: call    loc_1406B2F9F
 * 00000001406B2FB1: add     rsp, 8
 * 00000001406B2FB5: call    loc_1406B2FA8
 * 00000001406B2FBA: add     rsp, 8
 * 00000001406B2FBE: call    loc_1406B2FB1
 * 00000001406B2FC3: add     rsp, 8
 * 00000001406B2FC7: call    loc_1406B2FBA
 * 00000001406B2FCC: add     rsp, 8
 * 00000001406B2FD0: call    loc_1406B2FC3
 * 00000001406B2FD5: add     rsp, 8
 * 00000001406B2FD9: call    loc_1406B2FCC
 * 00000001406B2FDE: add     rsp, 8
 * 00000001406B2FE2: call    loc_1406B2FD5
 * 00000001406B2FE7: add     rsp, 8
 * 00000001406B2FEB: call    loc_1406B2FDE
 * 00000001406B2FF0: add     rsp, 8
 * 00000001406B2FF4: call    loc_1406B2FE7
 * 00000001406B2FF9: add     rsp, 8
 * 00000001406B2FFD: call    loc_1406B2FF0
 * 00000001406B3002: add     rsp, 8
 * 00000001406B3006: call    loc_1406B2FF9
 * 00000001406B300B: add     rsp, 8
 * 00000001406B300F: call    loc_1406B3002
 * 00000001406B3014: add     rsp, 8
 * 00000001406B3018: call    loc_1406B300B
 * 00000001406B301D: add     rsp, 8
 * 00000001406B3021: call    loc_1406B3014
 * 00000001406B3026: add     rsp, 8
 * 00000001406B302A: call    loc_1406B301D
 * 00000001406B302F: add     rsp, 8
 * 00000001406B3033: call    loc_1406B3026
 * 00000001406B3038: add     rsp, 8
 * 00000001406B303C: call    loc_1406B302F
 * 00000001406B3041: add     rsp, 8
 * 00000001406B3045: call    loc_1406B3038
 * 00000001406B304A: add     rsp, 8
 * 00000001406B304E: call    loc_1406B3041
 * 00000001406B3053: add     rsp, 8
 * 00000001406B3057: call    loc_1406B304A
 * 00000001406B305C: add     rsp, 8
 * 00000001406B3060: call    loc_1406B3053
 * 00000001406B3065: add     rsp, 8
 * 00000001406B3069: call    loc_1406B305C
 * 00000001406B306E: add     rsp, 8
 * 00000001406B3072: call    loc_1406B3065
 * 00000001406B3077: add     rsp, 8
 * 00000001406B307B: call    loc_1406B306E
 * 00000001406B3080: add     rsp, 8
 * 00000001406B3084: call    loc_1406B3077
 * 00000001406B3089: add     rsp, 8
 * 00000001406B308D: call    loc_1406B3080
 * 00000001406B3092: add     rsp, 8
 * 00000001406B3096: call    loc_1406B3089
 * 00000001406B309B: add     rsp, 8
 * 00000001406B309F: call    loc_1406B3092
 * 00000001406B30A4: add     rsp, 8
 * 00000001406B30A8: mov     eax, 0DADAh
 * 00000001406B30AD: test    byte ptr gs:85Ch, 8
 * 00000001406B30B6: jz      short loc_1406B30BF
 * 00000001406B30B8: mov     al, 20h ; ' '
 * 00000001406B30BA: incsspq rax
 * 00000001406B30BF: test    word ptr gs:858h, 100h
 * 00000001406B30CA: jz      short loc_1406B30D8
 * 00000001406B30CC: xor     eax, eax
 * 00000001406B30CE: xor     edx, edx
 * 00000001406B30D0: mov     ecx, 1
 * 00000001406B30D5: div     rcx
 * 00000001406B30D8: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001406B30DC: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001406B30E0: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001406B30E4: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001406B30E8: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001406B30EC: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001406B30F0: mov     r11, [rbp+0E8h+var_108]
 * 00000001406B30F4: mov     r10, [rbp+0E8h+var_110]
 * 00000001406B30F8: mov     r9, [rbp+0E8h+var_118]
 * 00000001406B30FC: mov     r8, [rbp+0E8h+var_120]
 * 00000001406B3100: mov     rdx, [rbp+0E8h+var_128]
 * 00000001406B3104: mov     rcx, [rbp+0E8h+var_130]
 * 00000001406B3108: mov     rax, [rbp+0E8h+var_13F+7]
 * 00000001406B310C: mov     rsp, rbp
 * 00000001406B310F: mov     rbp, [rbp+0E8h+var_10]
 * 00000001406B3116: add     rsp, 0E8h
 * 00000001406B311D: test    cs:KiKvaShadow, 1
 * 00000001406B3124: jz      short loc_1406B312B
 * 00000001406B3126: jmp     KiKernelExit
 * 00000001406B312B: test    word ptr gs:858h, 200h
 * 00000001406B3136: jz      short loc_1406B313D
 * 00000001406B3138: verw    [rsp+arg_18]
 * 00000001406B313D: swapgs
 * 00000001406B3140: iretq
 * 00000001406B3142: ldmxcsr dword ptr [rbp+0E8h+var_13F+3]
 * 00000001406B3146: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001406B314A: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001406B314E: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001406B3152: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001406B3156: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001406B315A: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001406B315E: mov     r11, [rbp+0E8h+var_108]
 * 00000001406B3162: mov     r10, [rbp+0E8h+var_110]
 * 00000001406B3166: mov     r9, [rbp+0E8h+var_118]
 * 00000001406B316A: mov     r8, [rbp+0E8h+var_120]
 * 00000001406B316E: mov     rdx, [rbp+0E8h+var_128]
 * 00000001406B3172: mov     rcx, [rbp+0E8h+var_130]
 * 00000001406B3176: mov     rax, [rbp+0E8h+var_13F+7]
 * 00000001406B317A: mov     rsp, rbp
 * 00000001406B317D: mov     rbp, [rbp+0E8h+var_10]
 * 00000001406B3184: add     rsp, 0E8h
 * 00000001406B318B: iretq
 */
