/*
 * XREFs of KiPageFault @ 0x1406BAA40
 * Callers:
 *     KiPageFaultShadow @ 0x140BBD840 (KiPageFaultShadow.c)
 * Callees:
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14028FBE0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiUpdateStibpPairing @ 0x1403DFC10 (KiUpdateStibpPairing.c)
 *     KiCheckForSListAddress @ 0x1403FE680 (KiCheckForSListAddress.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14040ED30 (KiSynchronizeUserIsolationDomainExit.c)
 *     PsWatchWorkingSet @ 0x140442E10 (PsWatchWorkingSet.c)
 *     KiRestoreDebugRegisterState @ 0x1404F94D0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1404F9550 (KiSaveDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405BC880 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x1406ABF60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406B0800 (KiInitiateUserApc.c)
 *     KiPageFault @ 0x1406BAA40 (KiPageFault.c)
 *     KiBugCheckDispatch @ 0x1406BFB80 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x1406BFC00 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406C0640 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiPageFault @ 0x1406BAA40
 * Reason: Hex-Rays returned no pseudocode for 0x1406BAA40
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406BAA40: push    rbp
 * 00000001406BAA41: sub     rsp, 158h
 * 00000001406BAA48: lea     rbp, [rsp+80h]
 * 00000001406BAA50: mov     [rbp+0D8h+var_12D], 1
 * 00000001406BAA54: mov     [rbp+0D8h+var_128], rax
 * 00000001406BAA58: mov     [rbp+0D8h+var_120], rcx
 * 00000001406BAA5C: mov     [rbp+0D8h+var_118], rdx
 * 00000001406BAA60: mov     [rbp+0D8h+var_110], r8
 * 00000001406BAA64: mov     [rbp+0D8h+var_108], r9
 * 00000001406BAA68: mov     [rbp+0D8h+var_100], r10
 * 00000001406BAA6C: mov     [rbp+0D8h+var_F8], r11
 * 00000001406BAA70: test    byte ptr [rbp+0D8h+arg_8], 1
 * 00000001406BAA77: jnz     short loc_1406BAAB1
 * 00000001406BAA79: xor     edx, edx
 * 00000001406BAA7B: rdsspq  rdx
 * 00000001406BAA80: mov     [rbp+0D8h+var_80], rdx
 * 00000001406BAA84: lfence
 * 00000001406BAA87: test    byte ptr gs:858h, 1
 * 00000001406BAA90: jnz     short loc_1406BAA9A
 * 00000001406BAA92: lfence
 * 00000001406BAA95: jmp     loc_1406BAD39
 * 00000001406BAA9A: movzx   eax, word ptr gs:866h
 * 00000001406BAAA3: mov     ecx, 48h ; 'H'
 * 00000001406BAAA8: xor     edx, edx
 * 00000001406BAAAA: wrmsr
 * 00000001406BAAAC: jmp     loc_1406BAD39
 * 00000001406BAAB1: test    cs:KiKvaShadow, 1
 * 00000001406BAAB8: jnz     short loc_1406BAABD
 * 00000001406BAABA: swapgs
 * 00000001406BAABD: lfence
 * 00000001406BAAC0: mov     rcx, gs:9D28h
 * 00000001406BAAC9: test    rcx, rcx
 * 00000001406BAACC: jz      short loc_1406BAAED
 * 00000001406BAACE: rdsspq  rdx
 * 00000001406BAAD3: mov     r10, gs:9D20h
 * 00000001406BAADC: add     r10, 8
 * 00000001406BAAE0: cmp     rdx, r10
 * 00000001406BAAE3: jnz     short loc_1406BAAED
 * 00000001406BAAE5: rstorssp qword ptr [rcx]
 * 00000001406BAAE9: saveprevssp
 * 00000001406BAAED: mov     r10, gs:188h
 * 00000001406BAAF6: mov     rcx, gs:188h
 * 00000001406BAAFF: mov     rcx, [rcx+220h]
 * 00000001406BAB06: mov     rcx, [rcx+760h]
 * 00000001406BAB0D: mov     gs:850h, rcx
 * 00000001406BAB16: mov     cx, gs:862h
 * 00000001406BAB1F: mov     gs:864h, cx
 * 00000001406BAB28: mov     cl, gs:858h
 * 00000001406BAB30: mov     gs:85Ah, cl
 * 00000001406BAB38: movzx   eax, word ptr gs:868h
 * 00000001406BAB41: cmp     gs:866h, ax
 * 00000001406BAB4A: jz      short loc_1406BAB5E
 * 00000001406BAB4C: mov     gs:866h, ax
 * 00000001406BAB55: mov     ecx, 48h ; 'H'
 * 00000001406BAB5A: xor     edx, edx
 * 00000001406BAB5C: wrmsr
 * 00000001406BAB5E: movzx   edx, byte ptr gs:858h
 * 00000001406BAB67: test    edx, 8
 * 00000001406BAB6D: jz      short loc_1406BAB86
 * 00000001406BAB6F: mov     eax, 1
 * 00000001406BAB74: xor     edx, edx
 * 00000001406BAB76: mov     ecx, 49h ; 'I'
 * 00000001406BAB7B: wrmsr
 * 00000001406BAB7D: movzx   edx, byte ptr gs:858h
 * 00000001406BAB86: test    edx, 2
 * 00000001406BAB8C: jz      loc_1406BACC9
 * 00000001406BAB92: call    loc_1406BACA5
 * 00000001406BAB97: add     rsp, 8
 * 00000001406BAB9B: call    loc_1406BACAE
 * 00000001406BABA0: add     rsp, 8
 * 00000001406BABA4: call    loc_1406BAB97
 * 00000001406BABA9: add     rsp, 8
 * 00000001406BABAD: call    loc_1406BABA0
 * 00000001406BABB2: add     rsp, 8
 * 00000001406BABB6: call    loc_1406BABA9
 * 00000001406BABBB: add     rsp, 8
 * 00000001406BABBF: call    loc_1406BABB2
 * 00000001406BABC4: add     rsp, 8
 * 00000001406BABC8: call    loc_1406BABBB
 * 00000001406BABCD: add     rsp, 8
 * 00000001406BABD1: call    loc_1406BABC4
 * 00000001406BABD6: add     rsp, 8
 * 00000001406BABDA: call    loc_1406BABCD
 * 00000001406BABDF: add     rsp, 8
 * 00000001406BABE3: call    loc_1406BABD6
 * 00000001406BABE8: add     rsp, 8
 * 00000001406BABEC: call    loc_1406BABDF
 * 00000001406BABF1: add     rsp, 8
 * 00000001406BABF5: call    loc_1406BABE8
 * 00000001406BABFA: add     rsp, 8
 * 00000001406BABFE: call    loc_1406BABF1
 * 00000001406BAC03: add     rsp, 8
 * 00000001406BAC07: call    loc_1406BABFA
 * 00000001406BAC0C: add     rsp, 8
 * 00000001406BAC10: call    loc_1406BAC03
 * 00000001406BAC15: add     rsp, 8
 * 00000001406BAC19: call    loc_1406BAC0C
 * 00000001406BAC1E: add     rsp, 8
 * 00000001406BAC22: call    loc_1406BAC15
 * 00000001406BAC27: add     rsp, 8
 * 00000001406BAC2B: call    loc_1406BAC1E
 * 00000001406BAC30: add     rsp, 8
 * 00000001406BAC34: call    loc_1406BAC27
 * 00000001406BAC39: add     rsp, 8
 * 00000001406BAC3D: call    loc_1406BAC30
 * 00000001406BAC42: add     rsp, 8
 * 00000001406BAC46: call    loc_1406BAC39
 * 00000001406BAC4B: add     rsp, 8
 * 00000001406BAC4F: call    loc_1406BAC42
 * 00000001406BAC54: add     rsp, 8
 * 00000001406BAC58: call    loc_1406BAC4B
 * 00000001406BAC5D: add     rsp, 8
 * 00000001406BAC61: call    loc_1406BAC54
 * 00000001406BAC66: add     rsp, 8
 * 00000001406BAC6A: call    loc_1406BAC5D
 * 00000001406BAC6F: add     rsp, 8
 * 00000001406BAC73: call    loc_1406BAC66
 * 00000001406BAC78: add     rsp, 8
 * 00000001406BAC7C: call    loc_1406BAC6F
 * 00000001406BAC81: add     rsp, 8
 * 00000001406BAC85: call    loc_1406BAC78
 * 00000001406BAC8A: add     rsp, 8
 * 00000001406BAC8E: call    loc_1406BAC81
 * 00000001406BAC93: add     rsp, 8
 * 00000001406BAC97: call    loc_1406BAC8A
 * 00000001406BAC9C: add     rsp, 8
 * 00000001406BACA0: call    loc_1406BAC93
 * 00000001406BACA5: add     rsp, 8
 * 00000001406BACA9: call    loc_1406BAC9C
 * 00000001406BACAE: add     rsp, 8
 * 00000001406BACB2: mov     eax, 0DADAh
 * 00000001406BACB7: test    byte ptr gs:85Ch, 8
 * 00000001406BACC0: jz      short loc_1406BACC9
 * 00000001406BACC2: mov     al, 20h ; ' '
 * 00000001406BACC4: incsspq rax
 * 00000001406BACC9: test    edx, 80h
 * 00000001406BACCF: jz      short loc_1406BACD9
 * 00000001406BACD1: lfence
 * 00000001406BACD4: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406BACD9: lfence
 * 00000001406BACDC: mov     byte ptr gs:85Eh, 0
 * 00000001406BACE5: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406BACEC: jz      short loc_1406BAD0D
 * 00000001406BACEE: mov     ecx, 6A7h
 * 00000001406BACF3: rdmsr
 * 00000001406BACF5: cmp     edx, 0
 * 00000001406BACF8: jz      short loc_1406BAD0D
 * 00000001406BACFA: mov     ecx, edx
 * 00000001406BACFC: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406BAD02: cmp     edx, ecx
 * 00000001406BAD04: jz      short loc_1406BAD0D
 * 00000001406BAD06: mov     ecx, 6A7h
 * 00000001406BAD0B: wrmsr
 * 00000001406BAD0D: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 00000001406BAD15: jnz     short loc_1406BAD24
 * 00000001406BAD17: mov     ecx, 0C0000102h
 * 00000001406BAD1C: rdmsr
 * 00000001406BAD1E: mov     dword ptr [rbp+0D8h+var_F0], eax
 * 00000001406BAD21: mov     dword ptr [rbp+0D8h+var_F0+4], edx
 * 00000001406BAD24: test    byte ptr [r10+3], 3
 * 00000001406BAD29: mov     [rbp+0D8h+var_58], 0
 * 00000001406BAD32: jz      short loc_1406BAD39
 * 00000001406BAD34: call    KiSaveDebugRegisterState
 * 00000001406BAD39: cld
 * 00000001406BAD3A: stmxcsr [rbp+0D8h+var_12C]
 * 00000001406BAD3E: ldmxcsr dword ptr gs:180h
 * 00000001406BAD47: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001406BAD4B: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001406BAD4F: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001406BAD53: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001406BAD57: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001406BAD5B: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001406BAD5F: test    byte ptr [rbp+0D8h+arg_8], 1
 * 00000001406BAD66: jz      short loc_1406BAD6D
 * 00000001406BAD68: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406BAD6D: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406BAD74: jz      short loc_1406BAD82
 * 00000001406BAD76: test    byte ptr [rbp+0D8h+arg_8], 1
 * 00000001406BAD7D: jz      short loc_1406BAD82
 * 00000001406BAD7F: stac
 * 00000001406BAD82: mov     eax, [rbp+0E0h]
 * 00000001406BAD88: mov     rcx, cr2
 * 00000001406BAD8B: test    [rbp+0D8h+arg_10], 200h
 * 00000001406BAD95: jz      short loc_1406BAD98
 * 00000001406BAD97: sti
 * 00000001406BAD98: mov     [rbp+0D8h+var_88], rcx
 * 00000001406BAD9C: bt      [rbp+0D8h+arg_10], 9
 * 00000001406BADA4: jnb     loc_1406BAEA8
 * 00000001406BADAA: lea     r9, [rbp+0D8h+var_158]
 * 00000001406BADAE: mov     r8b, byte ptr [rbp+0D8h+arg_8]
 * 00000001406BADB5: and     r8b, 1
 * 00000001406BADB9: mov     rdx, rcx; BugCheckParameter1
 * 00000001406BADBC: mov     ecx, eax; BugCheckParameter2
 * 00000001406BADBE: shr     eax, 1
 * 00000001406BADC0: and     eax, 9
 * 00000001406BADC3: mov     [rbp+0D8h+var_12E], al
 * 00000001406BADC6: call    MmAccessFault
 * 00000001406BADCB: test    eax, eax
 * 00000001406BADCD: jge     loc_1406BAEAE
 * 00000001406BADD3: test    byte ptr [rbp+0D8h+arg_8], 1
 * 00000001406BADDA: jz      short loc_1406BAE32
 * 00000001406BADDC: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 00000001406BADE4: jnz     short loc_1406BAE24
 * 00000001406BADE6: mov     r9, gs:188h
 * 00000001406BADEF: test    byte ptr [r9+3], 4
 * 00000001406BADF4: jz      short loc_1406BADFF
 * 00000001406BADF6: mov     r8, [r9+680h]
 * 00000001406BADFD: jmp     short loc_1406BAE08
 * 00000001406BADFF: mov     r8, gs:30h
 * 00000001406BAE08: cmp     r8, [rbp+0D8h+var_F0]
 * 00000001406BAE0C: jz      short loc_1406BAE32
 * 00000001406BAE0E: mov     ecx, 0C0000102h
 * 00000001406BAE13: mov     eax, r8d
 * 00000001406BAE16: shr     r8, 20h
 * 00000001406BAE1A: mov     edx, r8d
 * 00000001406BAE1D: wrmsr
 * 00000001406BAE1F: jmp     loc_1406BAEC9
 * 00000001406BAE24: mov     rcx, [rbp+0D8h+var_88]
 * 00000001406BAE28: shr     rcx, 20h
 * 00000001406BAE2C: jnz     loc_1406BAEC9
 * 00000001406BAE32: mov     ecx, eax
 * 00000001406BAE34: mov     edx, 2
 * 00000001406BAE39: cmp     ecx, 0D0000006h
 * 00000001406BAE3F: jz      short loc_1406BAE82
 * 00000001406BAE41: cmp     ecx, 0C0000005h
 * 00000001406BAE47: jz      short loc_1406BAE68
 * 00000001406BAE49: cmp     ecx, 80000001h
 * 00000001406BAE4F: jz      short loc_1406BAE6D
 * 00000001406BAE51: cmp     ecx, 0C00000FDh
 * 00000001406BAE57: jz      short loc_1406BAE6D
 * 00000001406BAE59: mov     ecx, 0C0000006h
 * 00000001406BAE5E: mov     edx, 3
 * 00000001406BAE63: mov     r11d, eax
 * 00000001406BAE66: jmp     short loc_1406BAE6D
 * 00000001406BAE68: mov     ecx, 10000004h
 * 00000001406BAE6D: mov     r10, [rbp+0D8h+var_88]
 * 00000001406BAE71: movzx   r9, [rbp+0D8h+var_12E]
 * 00000001406BAE76: mov     r8, [rbp+0D8h+arg_0]
 * 00000001406BAE7D: call    KiExceptionDispatch
 * 00000001406BAE82: mov     rax, cr8
 * 00000001406BAE86: mov     r10, [rbp+0D8h+arg_0]
 * 00000001406BAE8D: movzx   r9, [rbp+0D8h+var_12E]
 * 00000001406BAE92: and     eax, 0FFh
 * 00000001406BAE97: mov     r8, rax
 * 00000001406BAE9A: mov     rdx, [rbp+0D8h+var_88]
 * 00000001406BAE9E: mov     ecx, 0Ah
 * 00000001406BAEA3: call    KiBugCheckDispatch
 * 00000001406BAEA8: xor     eax, eax
 * 00000001406BAEAA: mov     al, 0FFh
 * 00000001406BAEAC: jmp     short loc_1406BAE86
 * 00000001406BAEAE: cmp     cs:PsWatchEnabled, 0
 * 00000001406BAEB5: jz      short loc_1406BAEC9
 * 00000001406BAEB7: mov     r8, [rbp+0D8h+var_88]
 * 00000001406BAEBB: mov     rdx, [rbp+0D8h+arg_0]
 * 00000001406BAEC2: mov     ecx, eax
 * 00000001406BAEC4: call    PsWatchWorkingSet
 * 00000001406BAEC9: mov     rax, cr8
 * 00000001406BAECD: or      eax, eax
 * 00000001406BAECF: mov     [rbp+0D8h+var_138], eax
 * 00000001406BAED2: jnz     short loc_1406BAEDD
 * 00000001406BAED4: mov     ecx, 1
 * 00000001406BAED9: mov     cr8, rcx
 * 00000001406BAEDD: lea     rcx, [rbp+0D8h+var_158]
 * 00000001406BAEE1: call    KiCheckForSListAddress
 * 00000001406BAEE6: mov     ecx, [rbp+0D8h+var_138]
 * 00000001406BAEE9: or      ecx, ecx
 * 00000001406BAEEB: jnz     short loc_1406BAEF1
 * 00000001406BAEED: mov     cr8, rcx
 * 00000001406BAEF1: cli
 * 00000001406BAEF2: test    byte ptr [rbp+0D8h+arg_8], 1
 * 00000001406BAEF9: jz      loc_1406BB1F4
 * 00000001406BAEFF: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406BAF06: jz      short loc_1406BAF0B
 * 00000001406BAF08: stac
 * 00000001406BAF0B: mov     rcx, gs:188h
 * 00000001406BAF14: test    byte ptr [rcx+0C2h], 3
 * 00000001406BAF1B: jz      short loc_1406BAF38
 * 00000001406BAF1D: mov     ecx, 1
 * 00000001406BAF22: mov     cr8, rcx
 * 00000001406BAF26: sti
 * 00000001406BAF27: call    KiInitiateUserApc
 * 00000001406BAF2C: cli
 * 00000001406BAF2D: mov     ecx, 0
 * 00000001406BAF32: mov     cr8, rcx
 * 00000001406BAF36: jmp     short loc_1406BAF0B
 * 00000001406BAF38: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406BAF3D: test    eax, eax
 * 00000001406BAF3F: mov     rax, [rbp+0D8h+var_128]
 * 00000001406BAF43: jnz     short loc_1406BAF0B
 * 00000001406BAF45: test    byte ptr gs:860h, 2
 * 00000001406BAF4E: jz      short loc_1406BAF57
 * 00000001406BAF50: xor     ecx, ecx
 * 00000001406BAF52: call    KiUpdateStibpPairing
 * 00000001406BAF57: mov     rcx, gs:188h
 * 00000001406BAF60: test    dword ptr [rcx], 8000000h
 * 00000001406BAF66: jz      short loc_1406BAF6D
 * 00000001406BAF68: call    KiRestoreSetContextState
 * 00000001406BAF6D: mov     rcx, gs:188h
 * 00000001406BAF76: test    dword ptr [rcx], 10000h
 * 00000001406BAF7C: jz      short loc_1406BAF92
 * 00000001406BAF7E: test    byte ptr [rcx+2], 1
 * 00000001406BAF82: jz      short loc_1406BAF92
 * 00000001406BAF84: call    KiCopyCounters
 * 00000001406BAF89: mov     rcx, gs:188h
 * 00000001406BAF92: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001406BAF96: cmp     [rbp+0D8h+var_58], 0
 * 00000001406BAF9E: jz      short loc_1406BAFA5
 * 00000001406BAFA0: call    KiRestoreDebugRegisterState
 * 00000001406BAFA5: mov     rcx, gs:188h
 * 00000001406BAFAE: bt      dword ptr [rcx+74h], 16h
 * 00000001406BAFB3: jnb     short loc_1406BAFDF
 * 00000001406BAFB5: xor     ecx, ecx
 * 00000001406BAFB7: rdsspq  rcx
 * 00000001406BAFBC: mov     r8, gs:9D28h
 * 00000001406BAFC5: add     r8, 8
 * 00000001406BAFC9: cmp     rcx, r8
 * 00000001406BAFCC: jnz     short loc_1406BAFDF
 * 00000001406BAFCE: mov     rcx, gs:9D20h
 * 00000001406BAFD7: rstorssp qword ptr [rcx]
 * 00000001406BAFDB: saveprevssp
 * 00000001406BAFDF: mov     byte ptr gs:85Eh, 0
 * 00000001406BAFE8: movzx   eax, word ptr gs:86Ch
 * 00000001406BAFF1: cmp     gs:866h, ax
 * 00000001406BAFFA: jz      short loc_1406BB00E
 * 00000001406BAFFC: mov     gs:866h, ax
 * 00000001406BB005: mov     ecx, 48h ; 'H'
 * 00000001406BB00A: xor     edx, edx
 * 00000001406BB00C: wrmsr
 * 00000001406BB00E: btr     word ptr gs:858h, 2
 * 00000001406BB019: jnb     short loc_1406BB029
 * 00000001406BB01B: mov     eax, 1
 * 00000001406BB020: xor     edx, edx
 * 00000001406BB022: mov     ecx, 49h ; 'I'
 * 00000001406BB027: wrmsr
 * 00000001406BB029: btr     word ptr gs:858h, 5
 * 00000001406BB034: jnb     loc_1406BB171
 * 00000001406BB03A: call    loc_1406BB14D
 * 00000001406BB03F: add     rsp, 8
 * 00000001406BB043: call    loc_1406BB156
 * 00000001406BB048: add     rsp, 8
 * 00000001406BB04C: call    loc_1406BB03F
 * 00000001406BB051: add     rsp, 8
 * 00000001406BB055: call    loc_1406BB048
 * 00000001406BB05A: add     rsp, 8
 * 00000001406BB05E: call    loc_1406BB051
 * 00000001406BB063: add     rsp, 8
 * 00000001406BB067: call    loc_1406BB05A
 * 00000001406BB06C: add     rsp, 8
 * 00000001406BB070: call    loc_1406BB063
 * 00000001406BB075: add     rsp, 8
 * 00000001406BB079: call    loc_1406BB06C
 * 00000001406BB07E: add     rsp, 8
 * 00000001406BB082: call    loc_1406BB075
 * 00000001406BB087: add     rsp, 8
 * 00000001406BB08B: call    loc_1406BB07E
 * 00000001406BB090: add     rsp, 8
 * 00000001406BB094: call    loc_1406BB087
 * 00000001406BB099: add     rsp, 8
 * 00000001406BB09D: call    loc_1406BB090
 * 00000001406BB0A2: add     rsp, 8
 * 00000001406BB0A6: call    loc_1406BB099
 * 00000001406BB0AB: add     rsp, 8
 * 00000001406BB0AF: call    loc_1406BB0A2
 * 00000001406BB0B4: add     rsp, 8
 * 00000001406BB0B8: call    loc_1406BB0AB
 * 00000001406BB0BD: add     rsp, 8
 * 00000001406BB0C1: call    loc_1406BB0B4
 * 00000001406BB0C6: add     rsp, 8
 * 00000001406BB0CA: call    loc_1406BB0BD
 * 00000001406BB0CF: add     rsp, 8
 * 00000001406BB0D3: call    loc_1406BB0C6
 * 00000001406BB0D8: add     rsp, 8
 * 00000001406BB0DC: call    loc_1406BB0CF
 * 00000001406BB0E1: add     rsp, 8
 * 00000001406BB0E5: call    loc_1406BB0D8
 * 00000001406BB0EA: add     rsp, 8
 * 00000001406BB0EE: call    loc_1406BB0E1
 * 00000001406BB0F3: add     rsp, 8
 * 00000001406BB0F7: call    loc_1406BB0EA
 * 00000001406BB0FC: add     rsp, 8
 * 00000001406BB100: call    loc_1406BB0F3
 * 00000001406BB105: add     rsp, 8
 * 00000001406BB109: call    loc_1406BB0FC
 * 00000001406BB10E: add     rsp, 8
 * 00000001406BB112: call    loc_1406BB105
 * 00000001406BB117: add     rsp, 8
 * 00000001406BB11B: call    loc_1406BB10E
 * 00000001406BB120: add     rsp, 8
 * 00000001406BB124: call    loc_1406BB117
 * 00000001406BB129: add     rsp, 8
 * 00000001406BB12D: call    loc_1406BB120
 * 00000001406BB132: add     rsp, 8
 * 00000001406BB136: call    loc_1406BB129
 * 00000001406BB13B: add     rsp, 8
 * 00000001406BB13F: call    loc_1406BB132
 * 00000001406BB144: add     rsp, 8
 * 00000001406BB148: call    loc_1406BB13B
 * 00000001406BB14D: add     rsp, 8
 * 00000001406BB151: call    loc_1406BB144
 * 00000001406BB156: add     rsp, 8
 * 00000001406BB15A: mov     eax, 0DADAh
 * 00000001406BB15F: test    byte ptr gs:85Ch, 8
 * 00000001406BB168: jz      short loc_1406BB171
 * 00000001406BB16A: mov     al, 20h ; ' '
 * 00000001406BB16C: incsspq rax
 * 00000001406BB171: test    word ptr gs:858h, 100h
 * 00000001406BB17C: jz      short loc_1406BB18A
 * 00000001406BB17E: xor     eax, eax
 * 00000001406BB180: xor     edx, edx
 * 00000001406BB182: mov     ecx, 1
 * 00000001406BB187: div     rcx
 * 00000001406BB18A: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001406BB18E: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001406BB192: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001406BB196: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001406BB19A: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001406BB19E: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001406BB1A2: mov     r11, [rbp+0D8h+var_F8]
 * 00000001406BB1A6: mov     r10, [rbp+0D8h+var_100]
 * 00000001406BB1AA: mov     r9, [rbp+0D8h+var_108]
 * 00000001406BB1AE: mov     r8, [rbp+0D8h+var_110]
 * 00000001406BB1B2: mov     rdx, [rbp+0D8h+var_118]
 * 00000001406BB1B6: mov     rcx, [rbp+0D8h+var_120]
 * 00000001406BB1BA: mov     rax, [rbp+0D8h+var_128]
 * 00000001406BB1BE: mov     rsp, rbp
 * 00000001406BB1C1: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001406BB1C8: add     rsp, 0E8h
 * 00000001406BB1CF: test    cs:KiKvaShadow, 1
 * 00000001406BB1D6: jz      short loc_1406BB1DD
 * 00000001406BB1D8: jmp     KiKernelExit
 * 00000001406BB1DD: test    word ptr gs:858h, 200h
 * 00000001406BB1E8: jz      short loc_1406BB1EF
 * 00000001406BB1EA: verw    [rsp-10h+arg_20]
 * 00000001406BB1EF: swapgs
 * 00000001406BB1F2: iretq
 * 00000001406BB1F4: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001406BB1F8: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001406BB1FC: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001406BB200: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001406BB204: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001406BB208: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001406BB20C: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001406BB210: mov     r11, [rbp+0D8h+var_F8]
 * 00000001406BB214: mov     r10, [rbp+0D8h+var_100]
 * 00000001406BB218: mov     r9, [rbp+0D8h+var_108]
 * 00000001406BB21C: mov     r8, [rbp+0D8h+var_110]
 * 00000001406BB220: mov     rdx, [rbp+0D8h+var_118]
 * 00000001406BB224: mov     rcx, [rbp+0D8h+var_120]
 * 00000001406BB228: mov     rax, [rbp+0D8h+var_128]
 * 00000001406BB22C: mov     rsp, rbp
 * 00000001406BB22F: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001406BB236: add     rsp, 0E8h
 * 00000001406BB23D: iretq
 */
