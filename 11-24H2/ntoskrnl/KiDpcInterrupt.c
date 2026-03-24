/*
 * XREFs of KiDpcInterrupt @ 0x1406B1AE0
 * Callers:
 *     KiDpcInterruptShadow @ 0x140BBBF40 (KiDpcInterruptShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14025F5D0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiDispatchInterrupt @ 0x1402936B0 (KiDispatchInterrupt.c)
 *     KiUpdateStibpPairing @ 0x1403EB760 (KiUpdateStibpPairing.c)
 *     HalPerformEndOfInterrupt @ 0x140418370 (HalPerformEndOfInterrupt.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14041B1F0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x1404FBC10 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1404FBC90 (KiSaveDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405B7800 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405BF250 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x1406AAFC0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406AF860 (KiInitiateUserApc.c)
 *     KiDpcInterrupt @ 0x1406B1AE0 (KiDpcInterrupt.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406BF740 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiDpcInterrupt @ 0x1406B1AE0
 * Reason: Hex-Rays returned no pseudocode for 0x1406B1AE0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B1AE0: sub     rsp, 8
 * 00000001406B1AE4: push    rbp
 * 00000001406B1AE5: push    rsi
 * 00000001406B1AE6: sub     rsp, 150h
 * 00000001406B1AED: lea     rbp, [rsp+80h]
 * 00000001406B1AF5: mov     byte ptr [rbp+0E8h+var_13F+2], 0
 * 00000001406B1AF9: mov     [rbp+0E8h+var_13F+7], rax
 * 00000001406B1AFD: mov     [rbp+0E8h+var_130], rcx
 * 00000001406B1B01: mov     [rbp+0E8h+var_128], rdx
 * 00000001406B1B05: mov     [rbp+0E8h+var_120], r8
 * 00000001406B1B09: mov     [rbp+0E8h+var_118], r9
 * 00000001406B1B0D: mov     [rbp+0E8h+var_110], r10
 * 00000001406B1B11: mov     [rbp+0E8h+var_108], r11
 * 00000001406B1B15: test    [rbp+0E8h+arg_0], 1
 * 00000001406B1B1C: jnz     short loc_1406B1B56
 * 00000001406B1B1E: xor     edx, edx
 * 00000001406B1B20: rdsspq  rdx
 * 00000001406B1B25: mov     [rbp+0E8h+var_90], rdx
 * 00000001406B1B29: lfence
 * 00000001406B1B2C: test    byte ptr gs:858h, 1
 * 00000001406B1B35: jnz     short loc_1406B1B3F
 * 00000001406B1B37: lfence
 * 00000001406B1B3A: jmp     loc_1406B1DC7
 * 00000001406B1B3F: movzx   eax, word ptr gs:866h
 * 00000001406B1B48: mov     ecx, 48h ; 'H'
 * 00000001406B1B4D: xor     edx, edx
 * 00000001406B1B4F: wrmsr
 * 00000001406B1B51: jmp     loc_1406B1DC7
 * 00000001406B1B56: test    cs:KiKvaShadow, 1
 * 00000001406B1B5D: jnz     short loc_1406B1B62
 * 00000001406B1B5F: swapgs
 * 00000001406B1B62: lfence
 * 00000001406B1B65: mov     rcx, gs:9D28h
 * 00000001406B1B6E: test    rcx, rcx
 * 00000001406B1B71: jz      short loc_1406B1B92
 * 00000001406B1B73: rdsspq  rdx
 * 00000001406B1B78: mov     r10, gs:9D20h
 * 00000001406B1B81: add     r10, 8
 * 00000001406B1B85: cmp     rdx, r10
 * 00000001406B1B88: jnz     short loc_1406B1B92
 * 00000001406B1B8A: rstorssp qword ptr [rcx]
 * 00000001406B1B8E: saveprevssp
 * 00000001406B1B92: mov     r10, gs:188h
 * 00000001406B1B9B: mov     rcx, gs:188h
 * 00000001406B1BA4: mov     rcx, [rcx+220h]
 * 00000001406B1BAB: mov     rcx, [rcx+760h]
 * 00000001406B1BB2: mov     gs:850h, rcx
 * 00000001406B1BBB: mov     cx, gs:862h
 * 00000001406B1BC4: mov     gs:864h, cx
 * 00000001406B1BCD: mov     cl, gs:858h
 * 00000001406B1BD5: mov     gs:85Ah, cl
 * 00000001406B1BDD: movzx   eax, word ptr gs:868h
 * 00000001406B1BE6: cmp     gs:866h, ax
 * 00000001406B1BEF: jz      short loc_1406B1C03
 * 00000001406B1BF1: mov     gs:866h, ax
 * 00000001406B1BFA: mov     ecx, 48h ; 'H'
 * 00000001406B1BFF: xor     edx, edx
 * 00000001406B1C01: wrmsr
 * 00000001406B1C03: movzx   edx, byte ptr gs:858h
 * 00000001406B1C0C: test    edx, 8
 * 00000001406B1C12: jz      short loc_1406B1C2B
 * 00000001406B1C14: mov     eax, 1
 * 00000001406B1C19: xor     edx, edx
 * 00000001406B1C1B: mov     ecx, 49h ; 'I'
 * 00000001406B1C20: wrmsr
 * 00000001406B1C22: movzx   edx, byte ptr gs:858h
 * 00000001406B1C2B: test    edx, 2
 * 00000001406B1C31: jz      loc_1406B1D6E
 * 00000001406B1C37: call    loc_1406B1D4A
 * 00000001406B1C3C: add     rsp, 8
 * 00000001406B1C40: call    loc_1406B1D53
 * 00000001406B1C45: add     rsp, 8
 * 00000001406B1C49: call    loc_1406B1C3C
 * 00000001406B1C4E: add     rsp, 8
 * 00000001406B1C52: call    loc_1406B1C45
 * 00000001406B1C57: add     rsp, 8
 * 00000001406B1C5B: call    loc_1406B1C4E
 * 00000001406B1C60: add     rsp, 8
 * 00000001406B1C64: call    loc_1406B1C57
 * 00000001406B1C69: add     rsp, 8
 * 00000001406B1C6D: call    loc_1406B1C60
 * 00000001406B1C72: add     rsp, 8
 * 00000001406B1C76: call    loc_1406B1C69
 * 00000001406B1C7B: add     rsp, 8
 * 00000001406B1C7F: call    loc_1406B1C72
 * 00000001406B1C84: add     rsp, 8
 * 00000001406B1C88: call    loc_1406B1C7B
 * 00000001406B1C8D: add     rsp, 8
 * 00000001406B1C91: call    loc_1406B1C84
 * 00000001406B1C96: add     rsp, 8
 * 00000001406B1C9A: call    loc_1406B1C8D
 * 00000001406B1C9F: add     rsp, 8
 * 00000001406B1CA3: call    loc_1406B1C96
 * 00000001406B1CA8: add     rsp, 8
 * 00000001406B1CAC: call    loc_1406B1C9F
 * 00000001406B1CB1: add     rsp, 8
 * 00000001406B1CB5: call    loc_1406B1CA8
 * 00000001406B1CBA: add     rsp, 8
 * 00000001406B1CBE: call    loc_1406B1CB1
 * 00000001406B1CC3: add     rsp, 8
 * 00000001406B1CC7: call    loc_1406B1CBA
 * 00000001406B1CCC: add     rsp, 8
 * 00000001406B1CD0: call    loc_1406B1CC3
 * 00000001406B1CD5: add     rsp, 8
 * 00000001406B1CD9: call    loc_1406B1CCC
 * 00000001406B1CDE: add     rsp, 8
 * 00000001406B1CE2: call    loc_1406B1CD5
 * 00000001406B1CE7: add     rsp, 8
 * 00000001406B1CEB: call    loc_1406B1CDE
 * 00000001406B1CF0: add     rsp, 8
 * 00000001406B1CF4: call    loc_1406B1CE7
 * 00000001406B1CF9: add     rsp, 8
 * 00000001406B1CFD: call    loc_1406B1CF0
 * 00000001406B1D02: add     rsp, 8
 * 00000001406B1D06: call    loc_1406B1CF9
 * 00000001406B1D0B: add     rsp, 8
 * 00000001406B1D0F: call    loc_1406B1D02
 * 00000001406B1D14: add     rsp, 8
 * 00000001406B1D18: call    loc_1406B1D0B
 * 00000001406B1D1D: add     rsp, 8
 * 00000001406B1D21: call    loc_1406B1D14
 * 00000001406B1D26: add     rsp, 8
 * 00000001406B1D2A: call    loc_1406B1D1D
 * 00000001406B1D2F: add     rsp, 8
 * 00000001406B1D33: call    loc_1406B1D26
 * 00000001406B1D38: add     rsp, 8
 * 00000001406B1D3C: call    loc_1406B1D2F
 * 00000001406B1D41: add     rsp, 8
 * 00000001406B1D45: call    loc_1406B1D38
 * 00000001406B1D4A: add     rsp, 8
 * 00000001406B1D4E: call    loc_1406B1D41
 * 00000001406B1D53: add     rsp, 8
 * 00000001406B1D57: mov     eax, 0DADAh
 * 00000001406B1D5C: test    byte ptr gs:85Ch, 8
 * 00000001406B1D65: jz      short loc_1406B1D6E
 * 00000001406B1D67: mov     al, 20h ; ' '
 * 00000001406B1D69: incsspq rax
 * 00000001406B1D6E: test    edx, 80h
 * 00000001406B1D74: jz      short loc_1406B1D7E
 * 00000001406B1D76: lfence
 * 00000001406B1D79: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406B1D7E: lfence
 * 00000001406B1D81: mov     byte ptr gs:85Eh, 0
 * 00000001406B1D8A: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406B1D91: jz      short loc_1406B1DB2
 * 00000001406B1D93: mov     ecx, 6A7h
 * 00000001406B1D98: rdmsr
 * 00000001406B1D9A: cmp     edx, 0
 * 00000001406B1D9D: jz      short loc_1406B1DB2
 * 00000001406B1D9F: mov     ecx, edx
 * 00000001406B1DA1: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406B1DA7: cmp     edx, ecx
 * 00000001406B1DA9: jz      short loc_1406B1DB2
 * 00000001406B1DAB: mov     ecx, 6A7h
 * 00000001406B1DB0: wrmsr
 * 00000001406B1DB2: test    byte ptr [r10+3], 3
 * 00000001406B1DB7: mov     [rbp+0E8h+var_68], 0
 * 00000001406B1DC0: jz      short loc_1406B1DC7
 * 00000001406B1DC2: call    KiSaveDebugRegisterState
 * 00000001406B1DC7: cld
 * 00000001406B1DC8: stmxcsr dword ptr [rbp+0E8h+var_13F+3]
 * 00000001406B1DCC: ldmxcsr dword ptr gs:180h
 * 00000001406B1DD5: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001406B1DD9: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001406B1DDD: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001406B1DE1: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001406B1DE5: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001406B1DE9: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001406B1DED: test    [rbp+0E8h+arg_0], 1
 * 00000001406B1DF4: jz      short loc_1406B1DFB
 * 00000001406B1DF6: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406B1DFB: xor     esi, esi
 * 00000001406B1DFD: inc     dword ptr gs:87C0h
 * 00000001406B1E05: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B1E0C: jz      short loc_1406B1E11
 * 00000001406B1E0E: clac
 * 00000001406B1E11: test    cs:KiAmdTprLowerInterruptDelayDynamicWorkaround, 1
 * 00000001406B1E18: jz      short loc_1406B1E3E
 * 00000001406B1E1A: btr     dword ptr gs:228h, 2
 * 00000001406B1E24: cmp     dword ptr gs:228h, 0
 * 00000001406B1E2D: jnz     short loc_1406B1E3E
 * 00000001406B1E2F: mov     ecx, 0C0010015h
 * 00000001406B1E34: rdmsr
 * 00000001406B1E36: btr     edx, 0
 * 00000001406B1E3A: jnb     short loc_1406B1E3E
 * 00000001406B1E3C: wrmsr
 * 00000001406B1E3E: mov     ecx, 2
 * 00000001406B1E43: cmp     cs:KiIrqlFlags, 0
 * 00000001406B1E4A: jz      short loc_1406B1E53
 * 00000001406B1E4C: call    KzSetIrqlUnsafe
 * 00000001406B1E51: jmp     short loc_1406B1E5B
 * 00000001406B1E53: mov     rax, cr8
 * 00000001406B1E57: mov     cr8, rcx
 * 00000001406B1E5B: mov     byte ptr [rbp+0E8h+var_13F], al
 * 00000001406B1E5E: mov     rcx, rsi
 * 00000001406B1E61: call    HalPerformEndOfInterrupt
 * 00000001406B1E66: sti
 * 00000001406B1E67: cmp     byte ptr gs:187h, 0
 * 00000001406B1E70: jnz     short loc_1406B1E7F
 * 00000001406B1E72: mov     rcx, [rbp+0E8h+var_13F]
 * 00000001406B1E76: lea     rdx, [rbp+0E8h+var_168]
 * 00000001406B1E7A: call    KiDispatchInterrupt
 * 00000001406B1E7F: cli
 * 00000001406B1E80: movzx   ecx, byte ptr [rbp+0E8h+var_13F]
 * 00000001406B1E84: cmp     cs:KiIrqlFlags, 0
 * 00000001406B1E8B: jz      short loc_1406B1E94
 * 00000001406B1E8D: call    KzSetIrqlUnsafe
 * 00000001406B1E92: jmp     short loc_1406B1E98
 * 00000001406B1E94: mov     cr8, rcx
 * 00000001406B1E98: mov     rsi, [rbp+0E8h+var_18]
 * 00000001406B1E9F: cli
 * 00000001406B1EA0: test    [rbp+0E8h+arg_0], 1
 * 00000001406B1EA7: jz      loc_1406B21A2
 * 00000001406B1EAD: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B1EB4: jz      short loc_1406B1EB9
 * 00000001406B1EB6: stac
 * 00000001406B1EB9: mov     rcx, gs:188h
 * 00000001406B1EC2: test    byte ptr [rcx+0C2h], 3
 * 00000001406B1EC9: jz      short loc_1406B1EE6
 * 00000001406B1ECB: mov     ecx, 1
 * 00000001406B1ED0: mov     cr8, rcx
 * 00000001406B1ED4: sti
 * 00000001406B1ED5: call    KiInitiateUserApc
 * 00000001406B1EDA: cli
 * 00000001406B1EDB: mov     ecx, 0
 * 00000001406B1EE0: mov     cr8, rcx
 * 00000001406B1EE4: jmp     short loc_1406B1EB9
 * 00000001406B1EE6: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406B1EEB: test    eax, eax
 * 00000001406B1EED: mov     rax, [rbp+0E8h+var_13F+7]
 * 00000001406B1EF1: jnz     short loc_1406B1EB9
 * 00000001406B1EF3: test    byte ptr gs:860h, 2
 * 00000001406B1EFC: jz      short loc_1406B1F05
 * 00000001406B1EFE: xor     ecx, ecx
 * 00000001406B1F00: call    KiUpdateStibpPairing
 * 00000001406B1F05: mov     rcx, gs:188h
 * 00000001406B1F0E: test    dword ptr [rcx], 8000000h
 * 00000001406B1F14: jz      short loc_1406B1F1B
 * 00000001406B1F16: call    KiRestoreSetContextState
 * 00000001406B1F1B: mov     rcx, gs:188h
 * 00000001406B1F24: test    dword ptr [rcx], 10000h
 * 00000001406B1F2A: jz      short loc_1406B1F40
 * 00000001406B1F2C: test    byte ptr [rcx+2], 1
 * 00000001406B1F30: jz      short loc_1406B1F40
 * 00000001406B1F32: call    KiCopyCounters
 * 00000001406B1F37: mov     rcx, gs:188h
 * 00000001406B1F40: ldmxcsr dword ptr [rbp+0E8h+var_13F+3]
 * 00000001406B1F44: cmp     [rbp+0E8h+var_68], 0
 * 00000001406B1F4C: jz      short loc_1406B1F53
 * 00000001406B1F4E: call    KiRestoreDebugRegisterState
 * 00000001406B1F53: mov     rcx, gs:188h
 * 00000001406B1F5C: bt      dword ptr [rcx+74h], 16h
 * 00000001406B1F61: jnb     short loc_1406B1F8D
 * 00000001406B1F63: xor     ecx, ecx
 * 00000001406B1F65: rdsspq  rcx
 * 00000001406B1F6A: mov     r8, gs:9D28h
 * 00000001406B1F73: add     r8, 8
 * 00000001406B1F77: cmp     rcx, r8
 * 00000001406B1F7A: jnz     short loc_1406B1F8D
 * 00000001406B1F7C: mov     rcx, gs:9D20h
 * 00000001406B1F85: rstorssp qword ptr [rcx]
 * 00000001406B1F89: saveprevssp
 * 00000001406B1F8D: mov     byte ptr gs:85Eh, 0
 * 00000001406B1F96: movzx   eax, word ptr gs:86Ch
 * 00000001406B1F9F: cmp     gs:866h, ax
 * 00000001406B1FA8: jz      short loc_1406B1FBC
 * 00000001406B1FAA: mov     gs:866h, ax
 * 00000001406B1FB3: mov     ecx, 48h ; 'H'
 * 00000001406B1FB8: xor     edx, edx
 * 00000001406B1FBA: wrmsr
 * 00000001406B1FBC: btr     word ptr gs:858h, 2
 * 00000001406B1FC7: jnb     short loc_1406B1FD7
 * 00000001406B1FC9: mov     eax, 1
 * 00000001406B1FCE: xor     edx, edx
 * 00000001406B1FD0: mov     ecx, 49h ; 'I'
 * 00000001406B1FD5: wrmsr
 * 00000001406B1FD7: btr     word ptr gs:858h, 5
 * 00000001406B1FE2: jnb     loc_1406B211F
 * 00000001406B1FE8: call    loc_1406B20FB
 * 00000001406B1FED: add     rsp, 8
 * 00000001406B1FF1: call    loc_1406B2104
 * 00000001406B1FF6: add     rsp, 8
 * 00000001406B1FFA: call    loc_1406B1FED
 * 00000001406B1FFF: add     rsp, 8
 * 00000001406B2003: call    loc_1406B1FF6
 * 00000001406B2008: add     rsp, 8
 * 00000001406B200C: call    loc_1406B1FFF
 * 00000001406B2011: add     rsp, 8
 * 00000001406B2015: call    loc_1406B2008
 * 00000001406B201A: add     rsp, 8
 * 00000001406B201E: call    loc_1406B2011
 * 00000001406B2023: add     rsp, 8
 * 00000001406B2027: call    loc_1406B201A
 * 00000001406B202C: add     rsp, 8
 * 00000001406B2030: call    loc_1406B2023
 * 00000001406B2035: add     rsp, 8
 * 00000001406B2039: call    loc_1406B202C
 * 00000001406B203E: add     rsp, 8
 * 00000001406B2042: call    loc_1406B2035
 * 00000001406B2047: add     rsp, 8
 * 00000001406B204B: call    loc_1406B203E
 * 00000001406B2050: add     rsp, 8
 * 00000001406B2054: call    loc_1406B2047
 * 00000001406B2059: add     rsp, 8
 * 00000001406B205D: call    loc_1406B2050
 * 00000001406B2062: add     rsp, 8
 * 00000001406B2066: call    loc_1406B2059
 * 00000001406B206B: add     rsp, 8
 * 00000001406B206F: call    loc_1406B2062
 * 00000001406B2074: add     rsp, 8
 * 00000001406B2078: call    loc_1406B206B
 * 00000001406B207D: add     rsp, 8
 * 00000001406B2081: call    loc_1406B2074
 * 00000001406B2086: add     rsp, 8
 * 00000001406B208A: call    loc_1406B207D
 * 00000001406B208F: add     rsp, 8
 * 00000001406B2093: call    loc_1406B2086
 * 00000001406B2098: add     rsp, 8
 * 00000001406B209C: call    loc_1406B208F
 * 00000001406B20A1: add     rsp, 8
 * 00000001406B20A5: call    loc_1406B2098
 * 00000001406B20AA: add     rsp, 8
 * 00000001406B20AE: call    loc_1406B20A1
 * 00000001406B20B3: add     rsp, 8
 * 00000001406B20B7: call    loc_1406B20AA
 * 00000001406B20BC: add     rsp, 8
 * 00000001406B20C0: call    loc_1406B20B3
 * 00000001406B20C5: add     rsp, 8
 * 00000001406B20C9: call    loc_1406B20BC
 * 00000001406B20CE: add     rsp, 8
 * 00000001406B20D2: call    loc_1406B20C5
 * 00000001406B20D7: add     rsp, 8
 * 00000001406B20DB: call    loc_1406B20CE
 * 00000001406B20E0: add     rsp, 8
 * 00000001406B20E4: call    loc_1406B20D7
 * 00000001406B20E9: add     rsp, 8
 * 00000001406B20ED: call    loc_1406B20E0
 * 00000001406B20F2: add     rsp, 8
 * 00000001406B20F6: call    loc_1406B20E9
 * 00000001406B20FB: add     rsp, 8
 * 00000001406B20FF: call    loc_1406B20F2
 * 00000001406B2104: add     rsp, 8
 * 00000001406B2108: mov     eax, 0DADAh
 * 00000001406B210D: test    byte ptr gs:85Ch, 8
 * 00000001406B2116: jz      short loc_1406B211F
 * 00000001406B2118: mov     al, 20h ; ' '
 * 00000001406B211A: incsspq rax
 * 00000001406B211F: test    word ptr gs:858h, 100h
 * 00000001406B212A: jz      short loc_1406B2138
 * 00000001406B212C: xor     eax, eax
 * 00000001406B212E: xor     edx, edx
 * 00000001406B2130: mov     ecx, 1
 * 00000001406B2135: div     rcx
 * 00000001406B2138: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001406B213C: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001406B2140: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001406B2144: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001406B2148: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001406B214C: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001406B2150: mov     r11, [rbp+0E8h+var_108]
 * 00000001406B2154: mov     r10, [rbp+0E8h+var_110]
 * 00000001406B2158: mov     r9, [rbp+0E8h+var_118]
 * 00000001406B215C: mov     r8, [rbp+0E8h+var_120]
 * 00000001406B2160: mov     rdx, [rbp+0E8h+var_128]
 * 00000001406B2164: mov     rcx, [rbp+0E8h+var_130]
 * 00000001406B2168: mov     rax, [rbp+0E8h+var_13F+7]
 * 00000001406B216C: mov     rsp, rbp
 * 00000001406B216F: mov     rbp, [rbp+0E8h+var_10]
 * 00000001406B2176: add     rsp, 0E8h
 * 00000001406B217D: test    cs:KiKvaShadow, 1
 * 00000001406B2184: jz      short loc_1406B218B
 * 00000001406B2186: jmp     KiKernelExit
 * 00000001406B218B: test    word ptr gs:858h, 200h
 * 00000001406B2196: jz      short loc_1406B219D
 * 00000001406B2198: verw    [rsp+arg_18]
 * 00000001406B219D: swapgs
 * 00000001406B21A0: iretq
 * 00000001406B21A2: ldmxcsr dword ptr [rbp+0E8h+var_13F+3]
 * 00000001406B21A6: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001406B21AA: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001406B21AE: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001406B21B2: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001406B21B6: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001406B21BA: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001406B21BE: mov     r11, [rbp+0E8h+var_108]
 * 00000001406B21C2: mov     r10, [rbp+0E8h+var_110]
 * 00000001406B21C6: mov     r9, [rbp+0E8h+var_118]
 * 00000001406B21CA: mov     r8, [rbp+0E8h+var_120]
 * 00000001406B21CE: mov     rdx, [rbp+0E8h+var_128]
 * 00000001406B21D2: mov     rcx, [rbp+0E8h+var_130]
 * 00000001406B21D6: mov     rax, [rbp+0E8h+var_13F+7]
 * 00000001406B21DA: mov     rsp, rbp
 * 00000001406B21DD: mov     rbp, [rbp+0E8h+var_10]
 * 00000001406B21E4: add     rsp, 0E8h
 * 00000001406B21EB: iretq
 */
