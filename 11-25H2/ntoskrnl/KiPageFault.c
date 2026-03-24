/*
 * XREFs of KiPageFault @ 0x1406AE840
 * Callers:
 *     KiPageFaultShadow @ 0x140BAA840 (KiPageFaultShadow.c)
 * Callees:
 *     MmAccessFault @ 0x1402B5880 (MmAccessFault.c)
 *     KiUpdateStibpPairing @ 0x1403E3F50 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403EF6C0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiCheckForSListAddress @ 0x140400C70 (KiCheckForSListAddress.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x140429DB0 (KiSynchronizeUserIsolationDomainExit.c)
 *     PsWatchWorkingSet @ 0x14044C7A0 (PsWatchWorkingSet.c)
 *     KiRestoreDebugRegisterState @ 0x1404F9500 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1404F9580 (KiSaveDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405BB410 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x14069FCF0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406A4590 (KiInitiateUserApc.c)
 *     KiPageFault @ 0x1406AE840 (KiPageFault.c)
 *     KiBugCheckDispatch @ 0x1406B3980 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x1406B3A00 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406B4440 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiPageFault @ 0x1406AE840
 * Reason: Hex-Rays returned no pseudocode for 0x1406AE840
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406AE840: push    rbp
 * 00000001406AE841: sub     rsp, 158h
 * 00000001406AE848: lea     rbp, [rsp+80h]
 * 00000001406AE850: mov     [rbp+0D8h+var_12D], 1
 * 00000001406AE854: mov     [rbp+0D8h+var_128], rax
 * 00000001406AE858: mov     [rbp+0D8h+var_120], rcx
 * 00000001406AE85C: mov     [rbp+0D8h+var_118], rdx
 * 00000001406AE860: mov     [rbp+0D8h+var_110], r8
 * 00000001406AE864: mov     [rbp+0D8h+var_108], r9
 * 00000001406AE868: mov     [rbp+0D8h+var_100], r10
 * 00000001406AE86C: mov     [rbp+0D8h+var_F8], r11
 * 00000001406AE870: test    byte ptr [rbp+0D8h+arg_8], 1
 * 00000001406AE877: jnz     short loc_1406AE8B1
 * 00000001406AE879: xor     edx, edx
 * 00000001406AE87B: rdsspq  rdx
 * 00000001406AE880: mov     [rbp+0D8h+var_80], rdx
 * 00000001406AE884: lfence
 * 00000001406AE887: test    byte ptr gs:858h, 1
 * 00000001406AE890: jnz     short loc_1406AE89A
 * 00000001406AE892: lfence
 * 00000001406AE895: jmp     loc_1406AEB39
 * 00000001406AE89A: movzx   eax, word ptr gs:866h
 * 00000001406AE8A3: mov     ecx, 48h ; 'H'
 * 00000001406AE8A8: xor     edx, edx
 * 00000001406AE8AA: wrmsr
 * 00000001406AE8AC: jmp     loc_1406AEB39
 * 00000001406AE8B1: test    cs:KiKvaShadow, 1
 * 00000001406AE8B8: jnz     short loc_1406AE8BD
 * 00000001406AE8BA: swapgs
 * 00000001406AE8BD: lfence
 * 00000001406AE8C0: mov     rcx, gs:9D28h
 * 00000001406AE8C9: test    rcx, rcx
 * 00000001406AE8CC: jz      short loc_1406AE8ED
 * 00000001406AE8CE: rdsspq  rdx
 * 00000001406AE8D3: mov     r10, gs:9D20h
 * 00000001406AE8DC: add     r10, 8
 * 00000001406AE8E0: cmp     rdx, r10
 * 00000001406AE8E3: jnz     short loc_1406AE8ED
 * 00000001406AE8E5: rstorssp qword ptr [rcx]
 * 00000001406AE8E9: saveprevssp
 * 00000001406AE8ED: mov     r10, gs:188h
 * 00000001406AE8F6: mov     rcx, gs:188h
 * 00000001406AE8FF: mov     rcx, [rcx+220h]
 * 00000001406AE906: mov     rcx, [rcx+760h]
 * 00000001406AE90D: mov     gs:850h, rcx
 * 00000001406AE916: mov     cx, gs:862h
 * 00000001406AE91F: mov     gs:864h, cx
 * 00000001406AE928: mov     cl, gs:858h
 * 00000001406AE930: mov     gs:85Ah, cl
 * 00000001406AE938: movzx   eax, word ptr gs:868h
 * 00000001406AE941: cmp     gs:866h, ax
 * 00000001406AE94A: jz      short loc_1406AE95E
 * 00000001406AE94C: mov     gs:866h, ax
 * 00000001406AE955: mov     ecx, 48h ; 'H'
 * 00000001406AE95A: xor     edx, edx
 * 00000001406AE95C: wrmsr
 * 00000001406AE95E: movzx   edx, byte ptr gs:858h
 * 00000001406AE967: test    edx, 8
 * 00000001406AE96D: jz      short loc_1406AE986
 * 00000001406AE96F: mov     eax, 1
 * 00000001406AE974: xor     edx, edx
 * 00000001406AE976: mov     ecx, 49h ; 'I'
 * 00000001406AE97B: wrmsr
 * 00000001406AE97D: movzx   edx, byte ptr gs:858h
 * 00000001406AE986: test    edx, 2
 * 00000001406AE98C: jz      loc_1406AEAC9
 * 00000001406AE992: call    loc_1406AEAA5
 * 00000001406AE997: add     rsp, 8
 * 00000001406AE99B: call    loc_1406AEAAE
 * 00000001406AE9A0: add     rsp, 8
 * 00000001406AE9A4: call    loc_1406AE997
 * 00000001406AE9A9: add     rsp, 8
 * 00000001406AE9AD: call    loc_1406AE9A0
 * 00000001406AE9B2: add     rsp, 8
 * 00000001406AE9B6: call    loc_1406AE9A9
 * 00000001406AE9BB: add     rsp, 8
 * 00000001406AE9BF: call    loc_1406AE9B2
 * 00000001406AE9C4: add     rsp, 8
 * 00000001406AE9C8: call    loc_1406AE9BB
 * 00000001406AE9CD: add     rsp, 8
 * 00000001406AE9D1: call    loc_1406AE9C4
 * 00000001406AE9D6: add     rsp, 8
 * 00000001406AE9DA: call    loc_1406AE9CD
 * 00000001406AE9DF: add     rsp, 8
 * 00000001406AE9E3: call    loc_1406AE9D6
 * 00000001406AE9E8: add     rsp, 8
 * 00000001406AE9EC: call    loc_1406AE9DF
 * 00000001406AE9F1: add     rsp, 8
 * 00000001406AE9F5: call    loc_1406AE9E8
 * 00000001406AE9FA: add     rsp, 8
 * 00000001406AE9FE: call    loc_1406AE9F1
 * 00000001406AEA03: add     rsp, 8
 * 00000001406AEA07: call    loc_1406AE9FA
 * 00000001406AEA0C: add     rsp, 8
 * 00000001406AEA10: call    loc_1406AEA03
 * 00000001406AEA15: add     rsp, 8
 * 00000001406AEA19: call    loc_1406AEA0C
 * 00000001406AEA1E: add     rsp, 8
 * 00000001406AEA22: call    loc_1406AEA15
 * 00000001406AEA27: add     rsp, 8
 * 00000001406AEA2B: call    loc_1406AEA1E
 * 00000001406AEA30: add     rsp, 8
 * 00000001406AEA34: call    loc_1406AEA27
 * 00000001406AEA39: add     rsp, 8
 * 00000001406AEA3D: call    loc_1406AEA30
 * 00000001406AEA42: add     rsp, 8
 * 00000001406AEA46: call    loc_1406AEA39
 * 00000001406AEA4B: add     rsp, 8
 * 00000001406AEA4F: call    loc_1406AEA42
 * 00000001406AEA54: add     rsp, 8
 * 00000001406AEA58: call    loc_1406AEA4B
 * 00000001406AEA5D: add     rsp, 8
 * 00000001406AEA61: call    loc_1406AEA54
 * 00000001406AEA66: add     rsp, 8
 * 00000001406AEA6A: call    loc_1406AEA5D
 * 00000001406AEA6F: add     rsp, 8
 * 00000001406AEA73: call    loc_1406AEA66
 * 00000001406AEA78: add     rsp, 8
 * 00000001406AEA7C: call    loc_1406AEA6F
 * 00000001406AEA81: add     rsp, 8
 * 00000001406AEA85: call    loc_1406AEA78
 * 00000001406AEA8A: add     rsp, 8
 * 00000001406AEA8E: call    loc_1406AEA81
 * 00000001406AEA93: add     rsp, 8
 * 00000001406AEA97: call    loc_1406AEA8A
 * 00000001406AEA9C: add     rsp, 8
 * 00000001406AEAA0: call    loc_1406AEA93
 * 00000001406AEAA5: add     rsp, 8
 * 00000001406AEAA9: call    loc_1406AEA9C
 * 00000001406AEAAE: add     rsp, 8
 * 00000001406AEAB2: mov     eax, 0DADAh
 * 00000001406AEAB7: test    byte ptr gs:85Ch, 8
 * 00000001406AEAC0: jz      short loc_1406AEAC9
 * 00000001406AEAC2: mov     al, 20h ; ' '
 * 00000001406AEAC4: incsspq rax
 * 00000001406AEAC9: test    edx, 80h
 * 00000001406AEACF: jz      short loc_1406AEAD9
 * 00000001406AEAD1: lfence
 * 00000001406AEAD4: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406AEAD9: lfence
 * 00000001406AEADC: mov     byte ptr gs:85Eh, 0
 * 00000001406AEAE5: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406AEAEC: jz      short loc_1406AEB0D
 * 00000001406AEAEE: mov     ecx, 6A7h
 * 00000001406AEAF3: rdmsr
 * 00000001406AEAF5: cmp     edx, 0
 * 00000001406AEAF8: jz      short loc_1406AEB0D
 * 00000001406AEAFA: mov     ecx, edx
 * 00000001406AEAFC: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406AEB02: cmp     edx, ecx
 * 00000001406AEB04: jz      short loc_1406AEB0D
 * 00000001406AEB06: mov     ecx, 6A7h
 * 00000001406AEB0B: wrmsr
 * 00000001406AEB0D: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 00000001406AEB15: jnz     short loc_1406AEB24
 * 00000001406AEB17: mov     ecx, 0C0000102h
 * 00000001406AEB1C: rdmsr
 * 00000001406AEB1E: mov     dword ptr [rbp+0D8h+var_F0], eax
 * 00000001406AEB21: mov     dword ptr [rbp+0D8h+var_F0+4], edx
 * 00000001406AEB24: test    byte ptr [r10+3], 3
 * 00000001406AEB29: mov     [rbp+0D8h+var_58], 0
 * 00000001406AEB32: jz      short loc_1406AEB39
 * 00000001406AEB34: call    KiSaveDebugRegisterState
 * 00000001406AEB39: cld
 * 00000001406AEB3A: stmxcsr [rbp+0D8h+var_12C]
 * 00000001406AEB3E: ldmxcsr dword ptr gs:180h
 * 00000001406AEB47: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001406AEB4B: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001406AEB4F: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001406AEB53: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001406AEB57: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001406AEB5B: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001406AEB5F: test    byte ptr [rbp+0D8h+arg_8], 1
 * 00000001406AEB66: jz      short loc_1406AEB6D
 * 00000001406AEB68: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406AEB6D: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406AEB74: jz      short loc_1406AEB82
 * 00000001406AEB76: test    byte ptr [rbp+0D8h+arg_8], 1
 * 00000001406AEB7D: jz      short loc_1406AEB82
 * 00000001406AEB7F: stac
 * 00000001406AEB82: mov     eax, [rbp+0E0h]
 * 00000001406AEB88: mov     rcx, cr2
 * 00000001406AEB8B: test    [rbp+0D8h+arg_10], 200h
 * 00000001406AEB95: jz      short loc_1406AEB98
 * 00000001406AEB97: sti
 * 00000001406AEB98: mov     [rbp+0D8h+var_88], rcx
 * 00000001406AEB9C: bt      [rbp+0D8h+arg_10], 9
 * 00000001406AEBA4: jnb     loc_1406AECA8
 * 00000001406AEBAA: lea     r9, [rbp+0D8h+var_158]
 * 00000001406AEBAE: mov     r8b, byte ptr [rbp+0D8h+arg_8]
 * 00000001406AEBB5: and     r8b, 1
 * 00000001406AEBB9: mov     rdx, rcx; BugCheckParameter1
 * 00000001406AEBBC: mov     ecx, eax; BugCheckParameter2
 * 00000001406AEBBE: shr     eax, 1
 * 00000001406AEBC0: and     eax, 9
 * 00000001406AEBC3: mov     [rbp+0D8h+var_12E], al
 * 00000001406AEBC6: call    MmAccessFault
 * 00000001406AEBCB: test    eax, eax
 * 00000001406AEBCD: jge     loc_1406AECAE
 * 00000001406AEBD3: test    byte ptr [rbp+0D8h+arg_8], 1
 * 00000001406AEBDA: jz      short loc_1406AEC32
 * 00000001406AEBDC: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 00000001406AEBE4: jnz     short loc_1406AEC24
 * 00000001406AEBE6: mov     r9, gs:188h
 * 00000001406AEBEF: test    byte ptr [r9+3], 4
 * 00000001406AEBF4: jz      short loc_1406AEBFF
 * 00000001406AEBF6: mov     r8, [r9+680h]
 * 00000001406AEBFD: jmp     short loc_1406AEC08
 * 00000001406AEBFF: mov     r8, gs:30h
 * 00000001406AEC08: cmp     r8, [rbp+0D8h+var_F0]
 * 00000001406AEC0C: jz      short loc_1406AEC32
 * 00000001406AEC0E: mov     ecx, 0C0000102h
 * 00000001406AEC13: mov     eax, r8d
 * 00000001406AEC16: shr     r8, 20h
 * 00000001406AEC1A: mov     edx, r8d
 * 00000001406AEC1D: wrmsr
 * 00000001406AEC1F: jmp     loc_1406AECC9
 * 00000001406AEC24: mov     rcx, [rbp+0D8h+var_88]
 * 00000001406AEC28: shr     rcx, 20h
 * 00000001406AEC2C: jnz     loc_1406AECC9
 * 00000001406AEC32: mov     ecx, eax
 * 00000001406AEC34: mov     edx, 2
 * 00000001406AEC39: cmp     ecx, 0D0000006h
 * 00000001406AEC3F: jz      short loc_1406AEC82
 * 00000001406AEC41: cmp     ecx, 0C0000005h
 * 00000001406AEC47: jz      short loc_1406AEC68
 * 00000001406AEC49: cmp     ecx, 80000001h
 * 00000001406AEC4F: jz      short loc_1406AEC6D
 * 00000001406AEC51: cmp     ecx, 0C00000FDh
 * 00000001406AEC57: jz      short loc_1406AEC6D
 * 00000001406AEC59: mov     ecx, 0C0000006h
 * 00000001406AEC5E: mov     edx, 3
 * 00000001406AEC63: mov     r11d, eax
 * 00000001406AEC66: jmp     short loc_1406AEC6D
 * 00000001406AEC68: mov     ecx, 10000004h
 * 00000001406AEC6D: mov     r10, [rbp+0D8h+var_88]
 * 00000001406AEC71: movzx   r9, [rbp+0D8h+var_12E]
 * 00000001406AEC76: mov     r8, [rbp+0D8h+arg_0]
 * 00000001406AEC7D: call    KiExceptionDispatch
 * 00000001406AEC82: mov     rax, cr8
 * 00000001406AEC86: mov     r10, [rbp+0D8h+arg_0]
 * 00000001406AEC8D: movzx   r9, [rbp+0D8h+var_12E]
 * 00000001406AEC92: and     eax, 0FFh
 * 00000001406AEC97: mov     r8, rax
 * 00000001406AEC9A: mov     rdx, [rbp+0D8h+var_88]
 * 00000001406AEC9E: mov     ecx, 0Ah
 * 00000001406AECA3: call    KiBugCheckDispatch
 * 00000001406AECA8: xor     eax, eax
 * 00000001406AECAA: mov     al, 0FFh
 * 00000001406AECAC: jmp     short loc_1406AEC86
 * 00000001406AECAE: cmp     cs:PsWatchEnabled, 0
 * 00000001406AECB5: jz      short loc_1406AECC9
 * 00000001406AECB7: mov     r8, [rbp+0D8h+var_88]
 * 00000001406AECBB: mov     rdx, [rbp+0D8h+arg_0]
 * 00000001406AECC2: mov     ecx, eax
 * 00000001406AECC4: call    PsWatchWorkingSet
 * 00000001406AECC9: mov     rax, cr8
 * 00000001406AECCD: or      eax, eax
 * 00000001406AECCF: mov     [rbp+0D8h+var_138], eax
 * 00000001406AECD2: jnz     short loc_1406AECDD
 * 00000001406AECD4: mov     ecx, 1
 * 00000001406AECD9: mov     cr8, rcx
 * 00000001406AECDD: lea     rcx, [rbp+0D8h+var_158]
 * 00000001406AECE1: call    KiCheckForSListAddress
 * 00000001406AECE6: mov     ecx, [rbp+0D8h+var_138]
 * 00000001406AECE9: or      ecx, ecx
 * 00000001406AECEB: jnz     short loc_1406AECF1
 * 00000001406AECED: mov     cr8, rcx
 * 00000001406AECF1: cli
 * 00000001406AECF2: test    byte ptr [rbp+0D8h+arg_8], 1
 * 00000001406AECF9: jz      loc_1406AEFF4
 * 00000001406AECFF: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406AED06: jz      short loc_1406AED0B
 * 00000001406AED08: stac
 * 00000001406AED0B: mov     rcx, gs:188h
 * 00000001406AED14: test    byte ptr [rcx+0C2h], 3
 * 00000001406AED1B: jz      short loc_1406AED38
 * 00000001406AED1D: mov     ecx, 1
 * 00000001406AED22: mov     cr8, rcx
 * 00000001406AED26: sti
 * 00000001406AED27: call    KiInitiateUserApc
 * 00000001406AED2C: cli
 * 00000001406AED2D: mov     ecx, 0
 * 00000001406AED32: mov     cr8, rcx
 * 00000001406AED36: jmp     short loc_1406AED0B
 * 00000001406AED38: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406AED3D: test    eax, eax
 * 00000001406AED3F: mov     rax, [rbp+0D8h+var_128]
 * 00000001406AED43: jnz     short loc_1406AED0B
 * 00000001406AED45: test    byte ptr gs:860h, 2
 * 00000001406AED4E: jz      short loc_1406AED57
 * 00000001406AED50: xor     ecx, ecx
 * 00000001406AED52: call    KiUpdateStibpPairing
 * 00000001406AED57: mov     rcx, gs:188h
 * 00000001406AED60: test    dword ptr [rcx], 8000000h
 * 00000001406AED66: jz      short loc_1406AED6D
 * 00000001406AED68: call    KiRestoreSetContextState
 * 00000001406AED6D: mov     rcx, gs:188h
 * 00000001406AED76: test    dword ptr [rcx], 10000h
 * 00000001406AED7C: jz      short loc_1406AED92
 * 00000001406AED7E: test    byte ptr [rcx+2], 1
 * 00000001406AED82: jz      short loc_1406AED92
 * 00000001406AED84: call    KiCopyCounters
 * 00000001406AED89: mov     rcx, gs:188h
 * 00000001406AED92: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001406AED96: cmp     [rbp+0D8h+var_58], 0
 * 00000001406AED9E: jz      short loc_1406AEDA5
 * 00000001406AEDA0: call    KiRestoreDebugRegisterState
 * 00000001406AEDA5: mov     rcx, gs:188h
 * 00000001406AEDAE: bt      dword ptr [rcx+74h], 16h
 * 00000001406AEDB3: jnb     short loc_1406AEDDF
 * 00000001406AEDB5: xor     ecx, ecx
 * 00000001406AEDB7: rdsspq  rcx
 * 00000001406AEDBC: mov     r8, gs:9D28h
 * 00000001406AEDC5: add     r8, 8
 * 00000001406AEDC9: cmp     rcx, r8
 * 00000001406AEDCC: jnz     short loc_1406AEDDF
 * 00000001406AEDCE: mov     rcx, gs:9D20h
 * 00000001406AEDD7: rstorssp qword ptr [rcx]
 * 00000001406AEDDB: saveprevssp
 * 00000001406AEDDF: mov     byte ptr gs:85Eh, 0
 * 00000001406AEDE8: movzx   eax, word ptr gs:86Ch
 * 00000001406AEDF1: cmp     gs:866h, ax
 * 00000001406AEDFA: jz      short loc_1406AEE0E
 * 00000001406AEDFC: mov     gs:866h, ax
 * 00000001406AEE05: mov     ecx, 48h ; 'H'
 * 00000001406AEE0A: xor     edx, edx
 * 00000001406AEE0C: wrmsr
 * 00000001406AEE0E: btr     word ptr gs:858h, 2
 * 00000001406AEE19: jnb     short loc_1406AEE29
 * 00000001406AEE1B: mov     eax, 1
 * 00000001406AEE20: xor     edx, edx
 * 00000001406AEE22: mov     ecx, 49h ; 'I'
 * 00000001406AEE27: wrmsr
 * 00000001406AEE29: btr     word ptr gs:858h, 5
 * 00000001406AEE34: jnb     loc_1406AEF71
 * 00000001406AEE3A: call    loc_1406AEF4D
 * 00000001406AEE3F: add     rsp, 8
 * 00000001406AEE43: call    loc_1406AEF56
 * 00000001406AEE48: add     rsp, 8
 * 00000001406AEE4C: call    loc_1406AEE3F
 * 00000001406AEE51: add     rsp, 8
 * 00000001406AEE55: call    loc_1406AEE48
 * 00000001406AEE5A: add     rsp, 8
 * 00000001406AEE5E: call    loc_1406AEE51
 * 00000001406AEE63: add     rsp, 8
 * 00000001406AEE67: call    loc_1406AEE5A
 * 00000001406AEE6C: add     rsp, 8
 * 00000001406AEE70: call    loc_1406AEE63
 * 00000001406AEE75: add     rsp, 8
 * 00000001406AEE79: call    loc_1406AEE6C
 * 00000001406AEE7E: add     rsp, 8
 * 00000001406AEE82: call    loc_1406AEE75
 * 00000001406AEE87: add     rsp, 8
 * 00000001406AEE8B: call    loc_1406AEE7E
 * 00000001406AEE90: add     rsp, 8
 * 00000001406AEE94: call    loc_1406AEE87
 * 00000001406AEE99: add     rsp, 8
 * 00000001406AEE9D: call    loc_1406AEE90
 * 00000001406AEEA2: add     rsp, 8
 * 00000001406AEEA6: call    loc_1406AEE99
 * 00000001406AEEAB: add     rsp, 8
 * 00000001406AEEAF: call    loc_1406AEEA2
 * 00000001406AEEB4: add     rsp, 8
 * 00000001406AEEB8: call    loc_1406AEEAB
 * 00000001406AEEBD: add     rsp, 8
 * 00000001406AEEC1: call    loc_1406AEEB4
 * 00000001406AEEC6: add     rsp, 8
 * 00000001406AEECA: call    loc_1406AEEBD
 * 00000001406AEECF: add     rsp, 8
 * 00000001406AEED3: call    loc_1406AEEC6
 * 00000001406AEED8: add     rsp, 8
 * 00000001406AEEDC: call    loc_1406AEECF
 * 00000001406AEEE1: add     rsp, 8
 * 00000001406AEEE5: call    loc_1406AEED8
 * 00000001406AEEEA: add     rsp, 8
 * 00000001406AEEEE: call    loc_1406AEEE1
 * 00000001406AEEF3: add     rsp, 8
 * 00000001406AEEF7: call    loc_1406AEEEA
 * 00000001406AEEFC: add     rsp, 8
 * 00000001406AEF00: call    loc_1406AEEF3
 * 00000001406AEF05: add     rsp, 8
 * 00000001406AEF09: call    loc_1406AEEFC
 * 00000001406AEF0E: add     rsp, 8
 * 00000001406AEF12: call    loc_1406AEF05
 * 00000001406AEF17: add     rsp, 8
 * 00000001406AEF1B: call    loc_1406AEF0E
 * 00000001406AEF20: add     rsp, 8
 * 00000001406AEF24: call    loc_1406AEF17
 * 00000001406AEF29: add     rsp, 8
 * 00000001406AEF2D: call    loc_1406AEF20
 * 00000001406AEF32: add     rsp, 8
 * 00000001406AEF36: call    loc_1406AEF29
 * 00000001406AEF3B: add     rsp, 8
 * 00000001406AEF3F: call    loc_1406AEF32
 * 00000001406AEF44: add     rsp, 8
 * 00000001406AEF48: call    loc_1406AEF3B
 * 00000001406AEF4D: add     rsp, 8
 * 00000001406AEF51: call    loc_1406AEF44
 * 00000001406AEF56: add     rsp, 8
 * 00000001406AEF5A: mov     eax, 0DADAh
 * 00000001406AEF5F: test    byte ptr gs:85Ch, 8
 * 00000001406AEF68: jz      short loc_1406AEF71
 * 00000001406AEF6A: mov     al, 20h ; ' '
 * 00000001406AEF6C: incsspq rax
 * 00000001406AEF71: test    word ptr gs:858h, 100h
 * 00000001406AEF7C: jz      short loc_1406AEF8A
 * 00000001406AEF7E: xor     eax, eax
 * 00000001406AEF80: xor     edx, edx
 * 00000001406AEF82: mov     ecx, 1
 * 00000001406AEF87: div     rcx
 * 00000001406AEF8A: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001406AEF8E: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001406AEF92: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001406AEF96: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001406AEF9A: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001406AEF9E: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001406AEFA2: mov     r11, [rbp+0D8h+var_F8]
 * 00000001406AEFA6: mov     r10, [rbp+0D8h+var_100]
 * 00000001406AEFAA: mov     r9, [rbp+0D8h+var_108]
 * 00000001406AEFAE: mov     r8, [rbp+0D8h+var_110]
 * 00000001406AEFB2: mov     rdx, [rbp+0D8h+var_118]
 * 00000001406AEFB6: mov     rcx, [rbp+0D8h+var_120]
 * 00000001406AEFBA: mov     rax, [rbp+0D8h+var_128]
 * 00000001406AEFBE: mov     rsp, rbp
 * 00000001406AEFC1: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001406AEFC8: add     rsp, 0E8h
 * 00000001406AEFCF: test    cs:KiKvaShadow, 1
 * 00000001406AEFD6: jz      short loc_1406AEFDD
 * 00000001406AEFD8: jmp     KiKernelExit
 * 00000001406AEFDD: test    word ptr gs:858h, 200h
 * 00000001406AEFE8: jz      short loc_1406AEFEF
 * 00000001406AEFEA: verw    [rsp-10h+arg_20]
 * 00000001406AEFEF: swapgs
 * 00000001406AEFF2: iretq
 * 00000001406AEFF4: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001406AEFF8: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001406AEFFC: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001406AF000: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001406AF004: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001406AF008: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001406AF00C: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001406AF010: mov     r11, [rbp+0D8h+var_F8]
 * 00000001406AF014: mov     r10, [rbp+0D8h+var_100]
 * 00000001406AF018: mov     r9, [rbp+0D8h+var_108]
 * 00000001406AF01C: mov     r8, [rbp+0D8h+var_110]
 * 00000001406AF020: mov     rdx, [rbp+0D8h+var_118]
 * 00000001406AF024: mov     rcx, [rbp+0D8h+var_120]
 * 00000001406AF028: mov     rax, [rbp+0D8h+var_128]
 * 00000001406AF02C: mov     rsp, rbp
 * 00000001406AF02F: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001406AF036: add     rsp, 0E8h
 * 00000001406AF03D: iretq
 */
