/*
 * XREFs of KiPageFault @ 0x1406B9B40
 * Callers:
 *     KiPageFaultShadow @ 0x140BBB840 (KiPageFaultShadow.c)
 * Callees:
 *     MmAccessFault @ 0x140216750 (MmAccessFault.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14025F5D0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiUpdateStibpPairing @ 0x1403EB760 (KiUpdateStibpPairing.c)
 *     KiCheckForSListAddress @ 0x1404038C0 (KiCheckForSListAddress.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14041B1F0 (KiSynchronizeUserIsolationDomainExit.c)
 *     PsWatchWorkingSet @ 0x14044BCD0 (PsWatchWorkingSet.c)
 *     KiRestoreDebugRegisterState @ 0x1404FBC10 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1404FBC90 (KiSaveDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405BF250 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x1406AAFC0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406AF860 (KiInitiateUserApc.c)
 *     KiPageFault @ 0x1406B9B40 (KiPageFault.c)
 *     KiBugCheckDispatch @ 0x1406BEC80 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x1406BED00 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406BF740 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiPageFault @ 0x1406B9B40
 * Reason: Hex-Rays returned no pseudocode for 0x1406B9B40
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B9B40: push    rbp
 * 00000001406B9B41: sub     rsp, 158h
 * 00000001406B9B48: lea     rbp, [rsp+80h]
 * 00000001406B9B50: mov     [rbp+0D8h+var_12D], 1
 * 00000001406B9B54: mov     [rbp+0D8h+var_128], rax
 * 00000001406B9B58: mov     [rbp+0D8h+var_120], rcx
 * 00000001406B9B5C: mov     [rbp+0D8h+var_118], rdx
 * 00000001406B9B60: mov     [rbp+0D8h+var_110], r8
 * 00000001406B9B64: mov     [rbp+0D8h+var_108], r9
 * 00000001406B9B68: mov     [rbp+0D8h+var_100], r10
 * 00000001406B9B6C: mov     [rbp+0D8h+var_F8], r11
 * 00000001406B9B70: test    byte ptr [rbp+0D8h+arg_8], 1
 * 00000001406B9B77: jnz     short loc_1406B9BB1
 * 00000001406B9B79: xor     edx, edx
 * 00000001406B9B7B: rdsspq  rdx
 * 00000001406B9B80: mov     [rbp+0D8h+var_80], rdx
 * 00000001406B9B84: lfence
 * 00000001406B9B87: test    byte ptr gs:858h, 1
 * 00000001406B9B90: jnz     short loc_1406B9B9A
 * 00000001406B9B92: lfence
 * 00000001406B9B95: jmp     loc_1406B9E39
 * 00000001406B9B9A: movzx   eax, word ptr gs:866h
 * 00000001406B9BA3: mov     ecx, 48h ; 'H'
 * 00000001406B9BA8: xor     edx, edx
 * 00000001406B9BAA: wrmsr
 * 00000001406B9BAC: jmp     loc_1406B9E39
 * 00000001406B9BB1: test    cs:KiKvaShadow, 1
 * 00000001406B9BB8: jnz     short loc_1406B9BBD
 * 00000001406B9BBA: swapgs
 * 00000001406B9BBD: lfence
 * 00000001406B9BC0: mov     rcx, gs:9D28h
 * 00000001406B9BC9: test    rcx, rcx
 * 00000001406B9BCC: jz      short loc_1406B9BED
 * 00000001406B9BCE: rdsspq  rdx
 * 00000001406B9BD3: mov     r10, gs:9D20h
 * 00000001406B9BDC: add     r10, 8
 * 00000001406B9BE0: cmp     rdx, r10
 * 00000001406B9BE3: jnz     short loc_1406B9BED
 * 00000001406B9BE5: rstorssp qword ptr [rcx]
 * 00000001406B9BE9: saveprevssp
 * 00000001406B9BED: mov     r10, gs:188h
 * 00000001406B9BF6: mov     rcx, gs:188h
 * 00000001406B9BFF: mov     rcx, [rcx+220h]
 * 00000001406B9C06: mov     rcx, [rcx+760h]
 * 00000001406B9C0D: mov     gs:850h, rcx
 * 00000001406B9C16: mov     cx, gs:862h
 * 00000001406B9C1F: mov     gs:864h, cx
 * 00000001406B9C28: mov     cl, gs:858h
 * 00000001406B9C30: mov     gs:85Ah, cl
 * 00000001406B9C38: movzx   eax, word ptr gs:868h
 * 00000001406B9C41: cmp     gs:866h, ax
 * 00000001406B9C4A: jz      short loc_1406B9C5E
 * 00000001406B9C4C: mov     gs:866h, ax
 * 00000001406B9C55: mov     ecx, 48h ; 'H'
 * 00000001406B9C5A: xor     edx, edx
 * 00000001406B9C5C: wrmsr
 * 00000001406B9C5E: movzx   edx, byte ptr gs:858h
 * 00000001406B9C67: test    edx, 8
 * 00000001406B9C6D: jz      short loc_1406B9C86
 * 00000001406B9C6F: mov     eax, 1
 * 00000001406B9C74: xor     edx, edx
 * 00000001406B9C76: mov     ecx, 49h ; 'I'
 * 00000001406B9C7B: wrmsr
 * 00000001406B9C7D: movzx   edx, byte ptr gs:858h
 * 00000001406B9C86: test    edx, 2
 * 00000001406B9C8C: jz      loc_1406B9DC9
 * 00000001406B9C92: call    loc_1406B9DA5
 * 00000001406B9C97: add     rsp, 8
 * 00000001406B9C9B: call    loc_1406B9DAE
 * 00000001406B9CA0: add     rsp, 8
 * 00000001406B9CA4: call    loc_1406B9C97
 * 00000001406B9CA9: add     rsp, 8
 * 00000001406B9CAD: call    loc_1406B9CA0
 * 00000001406B9CB2: add     rsp, 8
 * 00000001406B9CB6: call    loc_1406B9CA9
 * 00000001406B9CBB: add     rsp, 8
 * 00000001406B9CBF: call    loc_1406B9CB2
 * 00000001406B9CC4: add     rsp, 8
 * 00000001406B9CC8: call    loc_1406B9CBB
 * 00000001406B9CCD: add     rsp, 8
 * 00000001406B9CD1: call    loc_1406B9CC4
 * 00000001406B9CD6: add     rsp, 8
 * 00000001406B9CDA: call    loc_1406B9CCD
 * 00000001406B9CDF: add     rsp, 8
 * 00000001406B9CE3: call    loc_1406B9CD6
 * 00000001406B9CE8: add     rsp, 8
 * 00000001406B9CEC: call    loc_1406B9CDF
 * 00000001406B9CF1: add     rsp, 8
 * 00000001406B9CF5: call    loc_1406B9CE8
 * 00000001406B9CFA: add     rsp, 8
 * 00000001406B9CFE: call    loc_1406B9CF1
 * 00000001406B9D03: add     rsp, 8
 * 00000001406B9D07: call    loc_1406B9CFA
 * 00000001406B9D0C: add     rsp, 8
 * 00000001406B9D10: call    loc_1406B9D03
 * 00000001406B9D15: add     rsp, 8
 * 00000001406B9D19: call    loc_1406B9D0C
 * 00000001406B9D1E: add     rsp, 8
 * 00000001406B9D22: call    loc_1406B9D15
 * 00000001406B9D27: add     rsp, 8
 * 00000001406B9D2B: call    loc_1406B9D1E
 * 00000001406B9D30: add     rsp, 8
 * 00000001406B9D34: call    loc_1406B9D27
 * 00000001406B9D39: add     rsp, 8
 * 00000001406B9D3D: call    loc_1406B9D30
 * 00000001406B9D42: add     rsp, 8
 * 00000001406B9D46: call    loc_1406B9D39
 * 00000001406B9D4B: add     rsp, 8
 * 00000001406B9D4F: call    loc_1406B9D42
 * 00000001406B9D54: add     rsp, 8
 * 00000001406B9D58: call    loc_1406B9D4B
 * 00000001406B9D5D: add     rsp, 8
 * 00000001406B9D61: call    loc_1406B9D54
 * 00000001406B9D66: add     rsp, 8
 * 00000001406B9D6A: call    loc_1406B9D5D
 * 00000001406B9D6F: add     rsp, 8
 * 00000001406B9D73: call    loc_1406B9D66
 * 00000001406B9D78: add     rsp, 8
 * 00000001406B9D7C: call    loc_1406B9D6F
 * 00000001406B9D81: add     rsp, 8
 * 00000001406B9D85: call    loc_1406B9D78
 * 00000001406B9D8A: add     rsp, 8
 * 00000001406B9D8E: call    loc_1406B9D81
 * 00000001406B9D93: add     rsp, 8
 * 00000001406B9D97: call    loc_1406B9D8A
 * 00000001406B9D9C: add     rsp, 8
 * 00000001406B9DA0: call    loc_1406B9D93
 * 00000001406B9DA5: add     rsp, 8
 * 00000001406B9DA9: call    loc_1406B9D9C
 * 00000001406B9DAE: add     rsp, 8
 * 00000001406B9DB2: mov     eax, 0DADAh
 * 00000001406B9DB7: test    byte ptr gs:85Ch, 8
 * 00000001406B9DC0: jz      short loc_1406B9DC9
 * 00000001406B9DC2: mov     al, 20h ; ' '
 * 00000001406B9DC4: incsspq rax
 * 00000001406B9DC9: test    edx, 80h
 * 00000001406B9DCF: jz      short loc_1406B9DD9
 * 00000001406B9DD1: lfence
 * 00000001406B9DD4: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406B9DD9: lfence
 * 00000001406B9DDC: mov     byte ptr gs:85Eh, 0
 * 00000001406B9DE5: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406B9DEC: jz      short loc_1406B9E0D
 * 00000001406B9DEE: mov     ecx, 6A7h
 * 00000001406B9DF3: rdmsr
 * 00000001406B9DF5: cmp     edx, 0
 * 00000001406B9DF8: jz      short loc_1406B9E0D
 * 00000001406B9DFA: mov     ecx, edx
 * 00000001406B9DFC: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406B9E02: cmp     edx, ecx
 * 00000001406B9E04: jz      short loc_1406B9E0D
 * 00000001406B9E06: mov     ecx, 6A7h
 * 00000001406B9E0B: wrmsr
 * 00000001406B9E0D: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 00000001406B9E15: jnz     short loc_1406B9E24
 * 00000001406B9E17: mov     ecx, 0C0000102h
 * 00000001406B9E1C: rdmsr
 * 00000001406B9E1E: mov     dword ptr [rbp+0D8h+var_F0], eax
 * 00000001406B9E21: mov     dword ptr [rbp+0D8h+var_F0+4], edx
 * 00000001406B9E24: test    byte ptr [r10+3], 3
 * 00000001406B9E29: mov     [rbp+0D8h+var_58], 0
 * 00000001406B9E32: jz      short loc_1406B9E39
 * 00000001406B9E34: call    KiSaveDebugRegisterState
 * 00000001406B9E39: cld
 * 00000001406B9E3A: stmxcsr [rbp+0D8h+var_12C]
 * 00000001406B9E3E: ldmxcsr dword ptr gs:180h
 * 00000001406B9E47: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001406B9E4B: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001406B9E4F: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001406B9E53: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001406B9E57: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001406B9E5B: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001406B9E5F: test    byte ptr [rbp+0D8h+arg_8], 1
 * 00000001406B9E66: jz      short loc_1406B9E6D
 * 00000001406B9E68: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406B9E6D: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B9E74: jz      short loc_1406B9E82
 * 00000001406B9E76: test    byte ptr [rbp+0D8h+arg_8], 1
 * 00000001406B9E7D: jz      short loc_1406B9E82
 * 00000001406B9E7F: stac
 * 00000001406B9E82: mov     eax, [rbp+0E0h]
 * 00000001406B9E88: mov     rcx, cr2
 * 00000001406B9E8B: test    [rbp+0D8h+arg_10], 200h
 * 00000001406B9E95: jz      short loc_1406B9E98
 * 00000001406B9E97: sti
 * 00000001406B9E98: mov     [rbp+0D8h+var_88], rcx
 * 00000001406B9E9C: bt      [rbp+0D8h+arg_10], 9
 * 00000001406B9EA4: jnb     loc_1406B9FA8
 * 00000001406B9EAA: lea     r9, [rbp+0D8h+var_158]
 * 00000001406B9EAE: mov     r8b, byte ptr [rbp+0D8h+arg_8]
 * 00000001406B9EB5: and     r8b, 1
 * 00000001406B9EB9: mov     rdx, rcx; BugCheckParameter1
 * 00000001406B9EBC: mov     ecx, eax; BugCheckParameter2
 * 00000001406B9EBE: shr     eax, 1
 * 00000001406B9EC0: and     eax, 9
 * 00000001406B9EC3: mov     [rbp+0D8h+var_12E], al
 * 00000001406B9EC6: call    MmAccessFault
 * 00000001406B9ECB: test    eax, eax
 * 00000001406B9ECD: jge     loc_1406B9FAE
 * 00000001406B9ED3: test    byte ptr [rbp+0D8h+arg_8], 1
 * 00000001406B9EDA: jz      short loc_1406B9F32
 * 00000001406B9EDC: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 00000001406B9EE4: jnz     short loc_1406B9F24
 * 00000001406B9EE6: mov     r9, gs:188h
 * 00000001406B9EEF: test    byte ptr [r9+3], 4
 * 00000001406B9EF4: jz      short loc_1406B9EFF
 * 00000001406B9EF6: mov     r8, [r9+680h]
 * 00000001406B9EFD: jmp     short loc_1406B9F08
 * 00000001406B9EFF: mov     r8, gs:30h
 * 00000001406B9F08: cmp     r8, [rbp+0D8h+var_F0]
 * 00000001406B9F0C: jz      short loc_1406B9F32
 * 00000001406B9F0E: mov     ecx, 0C0000102h
 * 00000001406B9F13: mov     eax, r8d
 * 00000001406B9F16: shr     r8, 20h
 * 00000001406B9F1A: mov     edx, r8d
 * 00000001406B9F1D: wrmsr
 * 00000001406B9F1F: jmp     loc_1406B9FC9
 * 00000001406B9F24: mov     rcx, [rbp+0D8h+var_88]
 * 00000001406B9F28: shr     rcx, 20h
 * 00000001406B9F2C: jnz     loc_1406B9FC9
 * 00000001406B9F32: mov     ecx, eax
 * 00000001406B9F34: mov     edx, 2
 * 00000001406B9F39: cmp     ecx, 0D0000006h
 * 00000001406B9F3F: jz      short loc_1406B9F82
 * 00000001406B9F41: cmp     ecx, 0C0000005h
 * 00000001406B9F47: jz      short loc_1406B9F68
 * 00000001406B9F49: cmp     ecx, 80000001h
 * 00000001406B9F4F: jz      short loc_1406B9F6D
 * 00000001406B9F51: cmp     ecx, 0C00000FDh
 * 00000001406B9F57: jz      short loc_1406B9F6D
 * 00000001406B9F59: mov     ecx, 0C0000006h
 * 00000001406B9F5E: mov     edx, 3
 * 00000001406B9F63: mov     r11d, eax
 * 00000001406B9F66: jmp     short loc_1406B9F6D
 * 00000001406B9F68: mov     ecx, 10000004h
 * 00000001406B9F6D: mov     r10, [rbp+0D8h+var_88]
 * 00000001406B9F71: movzx   r9, [rbp+0D8h+var_12E]
 * 00000001406B9F76: mov     r8, [rbp+0D8h+arg_0]
 * 00000001406B9F7D: call    KiExceptionDispatch
 * 00000001406B9F82: mov     rax, cr8
 * 00000001406B9F86: mov     r10, [rbp+0D8h+arg_0]
 * 00000001406B9F8D: movzx   r9, [rbp+0D8h+var_12E]
 * 00000001406B9F92: and     eax, 0FFh
 * 00000001406B9F97: mov     r8, rax
 * 00000001406B9F9A: mov     rdx, [rbp+0D8h+var_88]
 * 00000001406B9F9E: mov     ecx, 0Ah
 * 00000001406B9FA3: call    KiBugCheckDispatch
 * 00000001406B9FA8: xor     eax, eax
 * 00000001406B9FAA: mov     al, 0FFh
 * 00000001406B9FAC: jmp     short loc_1406B9F86
 * 00000001406B9FAE: cmp     cs:PsWatchEnabled, 0
 * 00000001406B9FB5: jz      short loc_1406B9FC9
 * 00000001406B9FB7: mov     r8, [rbp+0D8h+var_88]
 * 00000001406B9FBB: mov     rdx, [rbp+0D8h+arg_0]
 * 00000001406B9FC2: mov     ecx, eax
 * 00000001406B9FC4: call    PsWatchWorkingSet
 * 00000001406B9FC9: mov     rax, cr8
 * 00000001406B9FCD: or      eax, eax
 * 00000001406B9FCF: mov     [rbp+0D8h+var_138], eax
 * 00000001406B9FD2: jnz     short loc_1406B9FDD
 * 00000001406B9FD4: mov     ecx, 1
 * 00000001406B9FD9: mov     cr8, rcx
 * 00000001406B9FDD: lea     rcx, [rbp+0D8h+var_158]
 * 00000001406B9FE1: call    KiCheckForSListAddress
 * 00000001406B9FE6: mov     ecx, [rbp+0D8h+var_138]
 * 00000001406B9FE9: or      ecx, ecx
 * 00000001406B9FEB: jnz     short loc_1406B9FF1
 * 00000001406B9FED: mov     cr8, rcx
 * 00000001406B9FF1: cli
 * 00000001406B9FF2: test    byte ptr [rbp+0D8h+arg_8], 1
 * 00000001406B9FF9: jz      loc_1406BA2F4
 * 00000001406B9FFF: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406BA006: jz      short loc_1406BA00B
 * 00000001406BA008: stac
 * 00000001406BA00B: mov     rcx, gs:188h
 * 00000001406BA014: test    byte ptr [rcx+0C2h], 3
 * 00000001406BA01B: jz      short loc_1406BA038
 * 00000001406BA01D: mov     ecx, 1
 * 00000001406BA022: mov     cr8, rcx
 * 00000001406BA026: sti
 * 00000001406BA027: call    KiInitiateUserApc
 * 00000001406BA02C: cli
 * 00000001406BA02D: mov     ecx, 0
 * 00000001406BA032: mov     cr8, rcx
 * 00000001406BA036: jmp     short loc_1406BA00B
 * 00000001406BA038: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406BA03D: test    eax, eax
 * 00000001406BA03F: mov     rax, [rbp+0D8h+var_128]
 * 00000001406BA043: jnz     short loc_1406BA00B
 * 00000001406BA045: test    byte ptr gs:860h, 2
 * 00000001406BA04E: jz      short loc_1406BA057
 * 00000001406BA050: xor     ecx, ecx
 * 00000001406BA052: call    KiUpdateStibpPairing
 * 00000001406BA057: mov     rcx, gs:188h
 * 00000001406BA060: test    dword ptr [rcx], 8000000h
 * 00000001406BA066: jz      short loc_1406BA06D
 * 00000001406BA068: call    KiRestoreSetContextState
 * 00000001406BA06D: mov     rcx, gs:188h
 * 00000001406BA076: test    dword ptr [rcx], 10000h
 * 00000001406BA07C: jz      short loc_1406BA092
 * 00000001406BA07E: test    byte ptr [rcx+2], 1
 * 00000001406BA082: jz      short loc_1406BA092
 * 00000001406BA084: call    KiCopyCounters
 * 00000001406BA089: mov     rcx, gs:188h
 * 00000001406BA092: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001406BA096: cmp     [rbp+0D8h+var_58], 0
 * 00000001406BA09E: jz      short loc_1406BA0A5
 * 00000001406BA0A0: call    KiRestoreDebugRegisterState
 * 00000001406BA0A5: mov     rcx, gs:188h
 * 00000001406BA0AE: bt      dword ptr [rcx+74h], 16h
 * 00000001406BA0B3: jnb     short loc_1406BA0DF
 * 00000001406BA0B5: xor     ecx, ecx
 * 00000001406BA0B7: rdsspq  rcx
 * 00000001406BA0BC: mov     r8, gs:9D28h
 * 00000001406BA0C5: add     r8, 8
 * 00000001406BA0C9: cmp     rcx, r8
 * 00000001406BA0CC: jnz     short loc_1406BA0DF
 * 00000001406BA0CE: mov     rcx, gs:9D20h
 * 00000001406BA0D7: rstorssp qword ptr [rcx]
 * 00000001406BA0DB: saveprevssp
 * 00000001406BA0DF: mov     byte ptr gs:85Eh, 0
 * 00000001406BA0E8: movzx   eax, word ptr gs:86Ch
 * 00000001406BA0F1: cmp     gs:866h, ax
 * 00000001406BA0FA: jz      short loc_1406BA10E
 * 00000001406BA0FC: mov     gs:866h, ax
 * 00000001406BA105: mov     ecx, 48h ; 'H'
 * 00000001406BA10A: xor     edx, edx
 * 00000001406BA10C: wrmsr
 * 00000001406BA10E: btr     word ptr gs:858h, 2
 * 00000001406BA119: jnb     short loc_1406BA129
 * 00000001406BA11B: mov     eax, 1
 * 00000001406BA120: xor     edx, edx
 * 00000001406BA122: mov     ecx, 49h ; 'I'
 * 00000001406BA127: wrmsr
 * 00000001406BA129: btr     word ptr gs:858h, 5
 * 00000001406BA134: jnb     loc_1406BA271
 * 00000001406BA13A: call    loc_1406BA24D
 * 00000001406BA13F: add     rsp, 8
 * 00000001406BA143: call    loc_1406BA256
 * 00000001406BA148: add     rsp, 8
 * 00000001406BA14C: call    loc_1406BA13F
 * 00000001406BA151: add     rsp, 8
 * 00000001406BA155: call    loc_1406BA148
 * 00000001406BA15A: add     rsp, 8
 * 00000001406BA15E: call    loc_1406BA151
 * 00000001406BA163: add     rsp, 8
 * 00000001406BA167: call    loc_1406BA15A
 * 00000001406BA16C: add     rsp, 8
 * 00000001406BA170: call    loc_1406BA163
 * 00000001406BA175: add     rsp, 8
 * 00000001406BA179: call    loc_1406BA16C
 * 00000001406BA17E: add     rsp, 8
 * 00000001406BA182: call    loc_1406BA175
 * 00000001406BA187: add     rsp, 8
 * 00000001406BA18B: call    loc_1406BA17E
 * 00000001406BA190: add     rsp, 8
 * 00000001406BA194: call    loc_1406BA187
 * 00000001406BA199: add     rsp, 8
 * 00000001406BA19D: call    loc_1406BA190
 * 00000001406BA1A2: add     rsp, 8
 * 00000001406BA1A6: call    loc_1406BA199
 * 00000001406BA1AB: add     rsp, 8
 * 00000001406BA1AF: call    loc_1406BA1A2
 * 00000001406BA1B4: add     rsp, 8
 * 00000001406BA1B8: call    loc_1406BA1AB
 * 00000001406BA1BD: add     rsp, 8
 * 00000001406BA1C1: call    loc_1406BA1B4
 * 00000001406BA1C6: add     rsp, 8
 * 00000001406BA1CA: call    loc_1406BA1BD
 * 00000001406BA1CF: add     rsp, 8
 * 00000001406BA1D3: call    loc_1406BA1C6
 * 00000001406BA1D8: add     rsp, 8
 * 00000001406BA1DC: call    loc_1406BA1CF
 * 00000001406BA1E1: add     rsp, 8
 * 00000001406BA1E5: call    loc_1406BA1D8
 * 00000001406BA1EA: add     rsp, 8
 * 00000001406BA1EE: call    loc_1406BA1E1
 * 00000001406BA1F3: add     rsp, 8
 * 00000001406BA1F7: call    loc_1406BA1EA
 * 00000001406BA1FC: add     rsp, 8
 * 00000001406BA200: call    loc_1406BA1F3
 * 00000001406BA205: add     rsp, 8
 * 00000001406BA209: call    loc_1406BA1FC
 * 00000001406BA20E: add     rsp, 8
 * 00000001406BA212: call    loc_1406BA205
 * 00000001406BA217: add     rsp, 8
 * 00000001406BA21B: call    loc_1406BA20E
 * 00000001406BA220: add     rsp, 8
 * 00000001406BA224: call    loc_1406BA217
 * 00000001406BA229: add     rsp, 8
 * 00000001406BA22D: call    loc_1406BA220
 * 00000001406BA232: add     rsp, 8
 * 00000001406BA236: call    loc_1406BA229
 * 00000001406BA23B: add     rsp, 8
 * 00000001406BA23F: call    loc_1406BA232
 * 00000001406BA244: add     rsp, 8
 * 00000001406BA248: call    loc_1406BA23B
 * 00000001406BA24D: add     rsp, 8
 * 00000001406BA251: call    loc_1406BA244
 * 00000001406BA256: add     rsp, 8
 * 00000001406BA25A: mov     eax, 0DADAh
 * 00000001406BA25F: test    byte ptr gs:85Ch, 8
 * 00000001406BA268: jz      short loc_1406BA271
 * 00000001406BA26A: mov     al, 20h ; ' '
 * 00000001406BA26C: incsspq rax
 * 00000001406BA271: test    word ptr gs:858h, 100h
 * 00000001406BA27C: jz      short loc_1406BA28A
 * 00000001406BA27E: xor     eax, eax
 * 00000001406BA280: xor     edx, edx
 * 00000001406BA282: mov     ecx, 1
 * 00000001406BA287: div     rcx
 * 00000001406BA28A: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001406BA28E: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001406BA292: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001406BA296: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001406BA29A: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001406BA29E: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001406BA2A2: mov     r11, [rbp+0D8h+var_F8]
 * 00000001406BA2A6: mov     r10, [rbp+0D8h+var_100]
 * 00000001406BA2AA: mov     r9, [rbp+0D8h+var_108]
 * 00000001406BA2AE: mov     r8, [rbp+0D8h+var_110]
 * 00000001406BA2B2: mov     rdx, [rbp+0D8h+var_118]
 * 00000001406BA2B6: mov     rcx, [rbp+0D8h+var_120]
 * 00000001406BA2BA: mov     rax, [rbp+0D8h+var_128]
 * 00000001406BA2BE: mov     rsp, rbp
 * 00000001406BA2C1: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001406BA2C8: add     rsp, 0E8h
 * 00000001406BA2CF: test    cs:KiKvaShadow, 1
 * 00000001406BA2D6: jz      short loc_1406BA2DD
 * 00000001406BA2D8: jmp     KiKernelExit
 * 00000001406BA2DD: test    word ptr gs:858h, 200h
 * 00000001406BA2E8: jz      short loc_1406BA2EF
 * 00000001406BA2EA: verw    [rsp-10h+arg_20]
 * 00000001406BA2EF: swapgs
 * 00000001406BA2F2: iretq
 * 00000001406BA2F4: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001406BA2F8: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001406BA2FC: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001406BA300: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001406BA304: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001406BA308: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001406BA30C: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001406BA310: mov     r11, [rbp+0D8h+var_F8]
 * 00000001406BA314: mov     r10, [rbp+0D8h+var_100]
 * 00000001406BA318: mov     r9, [rbp+0D8h+var_108]
 * 00000001406BA31C: mov     r8, [rbp+0D8h+var_110]
 * 00000001406BA320: mov     rdx, [rbp+0D8h+var_118]
 * 00000001406BA324: mov     rcx, [rbp+0D8h+var_120]
 * 00000001406BA328: mov     rax, [rbp+0D8h+var_128]
 * 00000001406BA32C: mov     rsp, rbp
 * 00000001406BA32F: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001406BA336: add     rsp, 0E8h
 * 00000001406BA33D: iretq
 */
