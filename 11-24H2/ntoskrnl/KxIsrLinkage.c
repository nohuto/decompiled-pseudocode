/*
 * XREFs of KxIsrLinkage @ 0x1406AF940
 * Callers:
 *     KxIsrLinkageShadow @ 0x140BBEB00 (KxIsrLinkageShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14028FBE0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiEndInterruptCycleAccumulation @ 0x140368D80 (KiEndInterruptCycleAccumulation.c)
 *     KiStartInterruptCycleAccumulation @ 0x14036A630 (KiStartInterruptCycleAccumulation.c)
 *     KiUpdateStibpPairing @ 0x1403DFC10 (KiUpdateStibpPairing.c)
 *     KiCheckForSListAddress @ 0x1403FE680 (KiCheckForSListAddress.c)
 *     HalPerformEndOfInterrupt @ 0x140408120 (HalPerformEndOfInterrupt.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14040ED30 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x1404F94D0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1404F9550 (KiSaveDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405B4DD0 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x1405BA300 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1405BC880 (KiCopyCounters.c)
 *     PerfInfoLogUnexpectedInterrupt @ 0x14064D590 (PerfInfoLogUnexpectedInterrupt.c)
 *     KiRestoreSetContextState @ 0x1406ABF60 (KiRestoreSetContextState.c)
 *     KxIsrLinkage @ 0x1406AF940 (KxIsrLinkage.c)
 *     KiInitiateUserApc @ 0x1406B0800 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1406B31A0 (KiDpcInterruptBypass.c)
 *     KiBugCheckDispatch @ 0x1406BFB80 (KiBugCheckDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406C0640 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KxIsrLinkage @ 0x1406AF940
 * Reason: Hex-Rays returned no pseudocode for 0x1406AF940
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406AF940: push    rbp
 * 00000001406AF941: push    rsi
 * 00000001406AF942: sub     rsp, 150h
 * 00000001406AF949: lea     rbp, [rsp+80h]
 * 00000001406AF951: mov     [rbp+0D8h+var_12D], 0
 * 00000001406AF955: mov     [rbp+0D8h+var_128], rax
 * 00000001406AF959: mov     [rbp+0D8h+var_120], rcx
 * 00000001406AF95D: mov     [rbp+0D8h+var_118], rdx
 * 00000001406AF961: mov     [rbp+0D8h+var_110], r8
 * 00000001406AF965: mov     [rbp+0D8h+var_108], r9
 * 00000001406AF969: mov     [rbp+0D8h+var_100], r10
 * 00000001406AF96D: mov     [rbp+0D8h+var_F8], r11
 * 00000001406AF971: test    [rbp+0D8h+arg_8], 1
 * 00000001406AF978: jnz     short loc_1406AF9B2
 * 00000001406AF97A: xor     edx, edx
 * 00000001406AF97C: rdsspq  rdx
 * 00000001406AF981: mov     [rbp+0D8h+var_80], rdx
 * 00000001406AF985: lfence
 * 00000001406AF988: test    byte ptr gs:858h, 1
 * 00000001406AF991: jnz     short loc_1406AF99B
 * 00000001406AF993: lfence
 * 00000001406AF996: jmp     loc_1406AFC23
 * 00000001406AF99B: movzx   eax, word ptr gs:866h
 * 00000001406AF9A4: mov     ecx, 48h ; 'H'
 * 00000001406AF9A9: xor     edx, edx
 * 00000001406AF9AB: wrmsr
 * 00000001406AF9AD: jmp     loc_1406AFC23
 * 00000001406AF9B2: test    cs:KiKvaShadow, 1
 * 00000001406AF9B9: jnz     short loc_1406AF9BE
 * 00000001406AF9BB: swapgs
 * 00000001406AF9BE: lfence
 * 00000001406AF9C1: mov     rcx, gs:9D28h
 * 00000001406AF9CA: test    rcx, rcx
 * 00000001406AF9CD: jz      short loc_1406AF9EE
 * 00000001406AF9CF: rdsspq  rdx
 * 00000001406AF9D4: mov     r10, gs:9D20h
 * 00000001406AF9DD: add     r10, 8
 * 00000001406AF9E1: cmp     rdx, r10
 * 00000001406AF9E4: jnz     short loc_1406AF9EE
 * 00000001406AF9E6: rstorssp qword ptr [rcx]
 * 00000001406AF9EA: saveprevssp
 * 00000001406AF9EE: mov     r10, gs:188h
 * 00000001406AF9F7: mov     rcx, gs:188h
 * 00000001406AFA00: mov     rcx, [rcx+220h]
 * 00000001406AFA07: mov     rcx, [rcx+760h]
 * 00000001406AFA0E: mov     gs:850h, rcx
 * 00000001406AFA17: mov     cx, gs:862h
 * 00000001406AFA20: mov     gs:864h, cx
 * 00000001406AFA29: mov     cl, gs:858h
 * 00000001406AFA31: mov     gs:85Ah, cl
 * 00000001406AFA39: movzx   eax, word ptr gs:868h
 * 00000001406AFA42: cmp     gs:866h, ax
 * 00000001406AFA4B: jz      short loc_1406AFA5F
 * 00000001406AFA4D: mov     gs:866h, ax
 * 00000001406AFA56: mov     ecx, 48h ; 'H'
 * 00000001406AFA5B: xor     edx, edx
 * 00000001406AFA5D: wrmsr
 * 00000001406AFA5F: movzx   edx, byte ptr gs:858h
 * 00000001406AFA68: test    edx, 8
 * 00000001406AFA6E: jz      short loc_1406AFA87
 * 00000001406AFA70: mov     eax, 1
 * 00000001406AFA75: xor     edx, edx
 * 00000001406AFA77: mov     ecx, 49h ; 'I'
 * 00000001406AFA7C: wrmsr
 * 00000001406AFA7E: movzx   edx, byte ptr gs:858h
 * 00000001406AFA87: test    edx, 2
 * 00000001406AFA8D: jz      loc_1406AFBCA
 * 00000001406AFA93: call    loc_1406AFBA6
 * 00000001406AFA98: add     rsp, 8
 * 00000001406AFA9C: call    loc_1406AFBAF
 * 00000001406AFAA1: add     rsp, 8
 * 00000001406AFAA5: call    loc_1406AFA98
 * 00000001406AFAAA: add     rsp, 8
 * 00000001406AFAAE: call    loc_1406AFAA1
 * 00000001406AFAB3: add     rsp, 8
 * 00000001406AFAB7: call    loc_1406AFAAA
 * 00000001406AFABC: add     rsp, 8
 * 00000001406AFAC0: call    loc_1406AFAB3
 * 00000001406AFAC5: add     rsp, 8
 * 00000001406AFAC9: call    loc_1406AFABC
 * 00000001406AFACE: add     rsp, 8
 * 00000001406AFAD2: call    loc_1406AFAC5
 * 00000001406AFAD7: add     rsp, 8
 * 00000001406AFADB: call    loc_1406AFACE
 * 00000001406AFAE0: add     rsp, 8
 * 00000001406AFAE4: call    loc_1406AFAD7
 * 00000001406AFAE9: add     rsp, 8
 * 00000001406AFAED: call    loc_1406AFAE0
 * 00000001406AFAF2: add     rsp, 8
 * 00000001406AFAF6: call    loc_1406AFAE9
 * 00000001406AFAFB: add     rsp, 8
 * 00000001406AFAFF: call    loc_1406AFAF2
 * 00000001406AFB04: add     rsp, 8
 * 00000001406AFB08: call    loc_1406AFAFB
 * 00000001406AFB0D: add     rsp, 8
 * 00000001406AFB11: call    loc_1406AFB04
 * 00000001406AFB16: add     rsp, 8
 * 00000001406AFB1A: call    loc_1406AFB0D
 * 00000001406AFB1F: add     rsp, 8
 * 00000001406AFB23: call    loc_1406AFB16
 * 00000001406AFB28: add     rsp, 8
 * 00000001406AFB2C: call    loc_1406AFB1F
 * 00000001406AFB31: add     rsp, 8
 * 00000001406AFB35: call    loc_1406AFB28
 * 00000001406AFB3A: add     rsp, 8
 * 00000001406AFB3E: call    loc_1406AFB31
 * 00000001406AFB43: add     rsp, 8
 * 00000001406AFB47: call    loc_1406AFB3A
 * 00000001406AFB4C: add     rsp, 8
 * 00000001406AFB50: call    loc_1406AFB43
 * 00000001406AFB55: add     rsp, 8
 * 00000001406AFB59: call    loc_1406AFB4C
 * 00000001406AFB5E: add     rsp, 8
 * 00000001406AFB62: call    loc_1406AFB55
 * 00000001406AFB67: add     rsp, 8
 * 00000001406AFB6B: call    loc_1406AFB5E
 * 00000001406AFB70: add     rsp, 8
 * 00000001406AFB74: call    loc_1406AFB67
 * 00000001406AFB79: add     rsp, 8
 * 00000001406AFB7D: call    loc_1406AFB70
 * 00000001406AFB82: add     rsp, 8
 * 00000001406AFB86: call    loc_1406AFB79
 * 00000001406AFB8B: add     rsp, 8
 * 00000001406AFB8F: call    loc_1406AFB82
 * 00000001406AFB94: add     rsp, 8
 * 00000001406AFB98: call    loc_1406AFB8B
 * 00000001406AFB9D: add     rsp, 8
 * 00000001406AFBA1: call    loc_1406AFB94
 * 00000001406AFBA6: add     rsp, 8
 * 00000001406AFBAA: call    loc_1406AFB9D
 * 00000001406AFBAF: add     rsp, 8
 * 00000001406AFBB3: mov     eax, 0DADAh
 * 00000001406AFBB8: test    byte ptr gs:85Ch, 8
 * 00000001406AFBC1: jz      short loc_1406AFBCA
 * 00000001406AFBC3: mov     al, 20h ; ' '
 * 00000001406AFBC5: incsspq rax
 * 00000001406AFBCA: test    edx, 80h
 * 00000001406AFBD0: jz      short loc_1406AFBDA
 * 00000001406AFBD2: lfence
 * 00000001406AFBD5: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406AFBDA: lfence
 * 00000001406AFBDD: mov     byte ptr gs:85Eh, 0
 * 00000001406AFBE6: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406AFBED: jz      short loc_1406AFC0E
 * 00000001406AFBEF: mov     ecx, 6A7h
 * 00000001406AFBF4: rdmsr
 * 00000001406AFBF6: cmp     edx, 0
 * 00000001406AFBF9: jz      short loc_1406AFC0E
 * 00000001406AFBFB: mov     ecx, edx
 * 00000001406AFBFD: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406AFC03: cmp     edx, ecx
 * 00000001406AFC05: jz      short loc_1406AFC0E
 * 00000001406AFC07: mov     ecx, 6A7h
 * 00000001406AFC0C: wrmsr
 * 00000001406AFC0E: test    byte ptr [r10+3], 3
 * 00000001406AFC13: mov     [rbp+0D8h+var_58], 0
 * 00000001406AFC1C: jz      short loc_1406AFC23
 * 00000001406AFC1E: call    KiSaveDebugRegisterState
 * 00000001406AFC23: cld
 * 00000001406AFC24: stmxcsr [rbp+0D8h+var_12C]
 * 00000001406AFC28: ldmxcsr dword ptr gs:180h
 * 00000001406AFC31: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001406AFC35: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001406AFC39: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001406AFC3D: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001406AFC41: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001406AFC45: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001406AFC49: test    [rbp+0D8h+arg_8], 1
 * 00000001406AFC50: jz      short loc_1406AFC57
 * 00000001406AFC52: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406AFC57: cmp     byte ptr gs:87DAh, 0
 * 00000001406AFC60: jz      short loc_1406AFC67
 * 00000001406AFC62: call    KeWakeProcessor
 * 00000001406AFC67: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001406AFC6E: cmp     rax, [rbp+0D8h+arg_0]
 * 00000001406AFC75: jnb     short loc_1406AFC90
 * 00000001406AFC77: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001406AFC7E: cmp     rax, [rbp+0D8h+arg_0]
 * 00000001406AFC85: jb      short loc_1406AFC90
 * 00000001406AFC87: lea     rcx, [rbp+0D8h+var_158]
 * 00000001406AFC8B: call    KiCheckForSListAddress
 * 00000001406AFC90: movzx   eax, byte ptr [rbp+0E0h]
 * 00000001406AFC97: mov     rsi, gs:20h
 * 00000001406AFCA0: mov     rsi, [rsi+rax*8+3900h]
 * 00000001406AFCA8: inc     dword ptr gs:87C0h
 * 00000001406AFCB0: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406AFCB7: jz      short loc_1406AFCBC
 * 00000001406AFCB9: clac
 * 00000001406AFCBC: test    rsi, rsi
 * 00000001406AFCBF: jz      short loc_1406AFCCA
 * 00000001406AFCC1: mov     rax, [rsi+50h]
 * 00000001406AFCC5: jmp     _guard_dispatch_icall_no_overrides
 * 00000001406AFCCA: mov     ecx, eax
 * 00000001406AFCCC: shr     ecx, 4
 * 00000001406AFCCF: cmp     cs:KiIrqlFlags, 0
 * 00000001406AFCD6: jz      short loc_1406AFCDF
 * 00000001406AFCD8: call    KzSetIrqlUnsafe
 * 00000001406AFCDD: jmp     short loc_1406AFCE7
 * 00000001406AFCDF: mov     rax, cr8
 * 00000001406AFCE3: mov     cr8, rcx
 * 00000001406AFCE7: mov     [rbp+0D8h+var_12F], al
 * 00000001406AFCEA: mov     rcx, gs:20h
 * 00000001406AFCF3: xor     edx, edx
 * 00000001406AFCF5: call    KiStartInterruptCycleAccumulation
 * 00000001406AFCFA: sti
 * 00000001406AFCFB: test    dword ptr cs:PerfGlobalGroupMask+4, 4000h
 * 00000001406AFD05: jz      short loc_1406AFD13
 * 00000001406AFD07: movzx   ecx, byte ptr [rbp+0E0h]
 * 00000001406AFD0E: call    PerfInfoLogUnexpectedInterrupt
 * 00000001406AFD13: cmp     cs:KiBugCheckUnexpectedInterrupts, 0
 * 00000001406AFD1A: jz      short loc_1406AFD3B
 * 00000001406AFD1C: and     [rbp+0D8h+var_138], 0
 * 00000001406AFD21: xor     r9, r9
 * 00000001406AFD24: movzx   r8d, byte ptr [rbp+0E0h]
 * 00000001406AFD2C: mov     edx, 1
 * 00000001406AFD31: mov     ecx, 12h
 * 00000001406AFD36: call    KiBugCheckDispatch
 * 00000001406AFD3B: cli
 * 00000001406AFD3C: mov     rcx, rsi
 * 00000001406AFD3F: call    HalPerformEndOfInterrupt
 * 00000001406AFD44: mov     rcx, gs:20h
 * 00000001406AFD4D: movzx   edx, [rbp+0D8h+var_12F]
 * 00000001406AFD51: call    KiEndInterruptCycleAccumulation
 * 00000001406AFD56: test    al, al
 * 00000001406AFD58: jz      short loc_1406AFD5F
 * 00000001406AFD5A: call    KiDpcInterruptBypass
 * 00000001406AFD5F: movzx   ecx, [rbp+0D8h+var_12F]
 * 00000001406AFD63: cmp     cs:KiIrqlFlags, 0
 * 00000001406AFD6A: jz      short loc_1406AFD73
 * 00000001406AFD6C: call    KzSetIrqlUnsafe
 * 00000001406AFD71: jmp     short loc_1406AFD77
 * 00000001406AFD73: mov     cr8, rcx
 * 00000001406AFD77: mov     rsi, [rbp+0D8h+var_8]
 * 00000001406AFD7E: cli
 * 00000001406AFD7F: test    [rbp+0D8h+arg_8], 1
 * 00000001406AFD86: jz      loc_1406B0081
 * 00000001406AFD8C: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406AFD93: jz      short loc_1406AFD98
 * 00000001406AFD95: stac
 * 00000001406AFD98: mov     rcx, gs:188h
 * 00000001406AFDA1: test    byte ptr [rcx+0C2h], 3
 * 00000001406AFDA8: jz      short loc_1406AFDC5
 * 00000001406AFDAA: mov     ecx, 1
 * 00000001406AFDAF: mov     cr8, rcx
 * 00000001406AFDB3: sti
 * 00000001406AFDB4: call    KiInitiateUserApc
 * 00000001406AFDB9: cli
 * 00000001406AFDBA: mov     ecx, 0
 * 00000001406AFDBF: mov     cr8, rcx
 * 00000001406AFDC3: jmp     short loc_1406AFD98
 * 00000001406AFDC5: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406AFDCA: test    eax, eax
 * 00000001406AFDCC: mov     rax, [rbp+0D8h+var_128]
 * 00000001406AFDD0: jnz     short loc_1406AFD98
 * 00000001406AFDD2: test    byte ptr gs:860h, 2
 * 00000001406AFDDB: jz      short loc_1406AFDE4
 * 00000001406AFDDD: xor     ecx, ecx
 * 00000001406AFDDF: call    KiUpdateStibpPairing
 * 00000001406AFDE4: mov     rcx, gs:188h
 * 00000001406AFDED: test    dword ptr [rcx], 8000000h
 * 00000001406AFDF3: jz      short loc_1406AFDFA
 * 00000001406AFDF5: call    KiRestoreSetContextState
 * 00000001406AFDFA: mov     rcx, gs:188h
 * 00000001406AFE03: test    dword ptr [rcx], 10000h
 * 00000001406AFE09: jz      short loc_1406AFE1F
 * 00000001406AFE0B: test    byte ptr [rcx+2], 1
 * 00000001406AFE0F: jz      short loc_1406AFE1F
 * 00000001406AFE11: call    KiCopyCounters
 * 00000001406AFE16: mov     rcx, gs:188h
 * 00000001406AFE1F: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001406AFE23: cmp     [rbp+0D8h+var_58], 0
 * 00000001406AFE2B: jz      short loc_1406AFE32
 * 00000001406AFE2D: call    KiRestoreDebugRegisterState
 * 00000001406AFE32: mov     rcx, gs:188h
 * 00000001406AFE3B: bt      dword ptr [rcx+74h], 16h
 * 00000001406AFE40: jnb     short loc_1406AFE6C
 * 00000001406AFE42: xor     ecx, ecx
 * 00000001406AFE44: rdsspq  rcx
 * 00000001406AFE49: mov     r8, gs:9D28h
 * 00000001406AFE52: add     r8, 8
 * 00000001406AFE56: cmp     rcx, r8
 * 00000001406AFE59: jnz     short loc_1406AFE6C
 * 00000001406AFE5B: mov     rcx, gs:9D20h
 * 00000001406AFE64: rstorssp qword ptr [rcx]
 * 00000001406AFE68: saveprevssp
 * 00000001406AFE6C: mov     byte ptr gs:85Eh, 0
 * 00000001406AFE75: movzx   eax, word ptr gs:86Ch
 * 00000001406AFE7E: cmp     gs:866h, ax
 * 00000001406AFE87: jz      short loc_1406AFE9B
 * 00000001406AFE89: mov     gs:866h, ax
 * 00000001406AFE92: mov     ecx, 48h ; 'H'
 * 00000001406AFE97: xor     edx, edx
 * 00000001406AFE99: wrmsr
 * 00000001406AFE9B: btr     word ptr gs:858h, 2
 * 00000001406AFEA6: jnb     short loc_1406AFEB6
 * 00000001406AFEA8: mov     eax, 1
 * 00000001406AFEAD: xor     edx, edx
 * 00000001406AFEAF: mov     ecx, 49h ; 'I'
 * 00000001406AFEB4: wrmsr
 * 00000001406AFEB6: btr     word ptr gs:858h, 5
 * 00000001406AFEC1: jnb     loc_1406AFFFE
 * 00000001406AFEC7: call    loc_1406AFFDA
 * 00000001406AFECC: add     rsp, 8
 * 00000001406AFED0: call    loc_1406AFFE3
 * 00000001406AFED5: add     rsp, 8
 * 00000001406AFED9: call    loc_1406AFECC
 * 00000001406AFEDE: add     rsp, 8
 * 00000001406AFEE2: call    loc_1406AFED5
 * 00000001406AFEE7: add     rsp, 8
 * 00000001406AFEEB: call    loc_1406AFEDE
 * 00000001406AFEF0: add     rsp, 8
 * 00000001406AFEF4: call    loc_1406AFEE7
 * 00000001406AFEF9: add     rsp, 8
 * 00000001406AFEFD: call    loc_1406AFEF0
 * 00000001406AFF02: add     rsp, 8
 * 00000001406AFF06: call    loc_1406AFEF9
 * 00000001406AFF0B: add     rsp, 8
 * 00000001406AFF0F: call    loc_1406AFF02
 * 00000001406AFF14: add     rsp, 8
 * 00000001406AFF18: call    loc_1406AFF0B
 * 00000001406AFF1D: add     rsp, 8
 * 00000001406AFF21: call    loc_1406AFF14
 * 00000001406AFF26: add     rsp, 8
 * 00000001406AFF2A: call    loc_1406AFF1D
 * 00000001406AFF2F: add     rsp, 8
 * 00000001406AFF33: call    loc_1406AFF26
 * 00000001406AFF38: add     rsp, 8
 * 00000001406AFF3C: call    loc_1406AFF2F
 * 00000001406AFF41: add     rsp, 8
 * 00000001406AFF45: call    loc_1406AFF38
 * 00000001406AFF4A: add     rsp, 8
 * 00000001406AFF4E: call    loc_1406AFF41
 * 00000001406AFF53: add     rsp, 8
 * 00000001406AFF57: call    loc_1406AFF4A
 * 00000001406AFF5C: add     rsp, 8
 * 00000001406AFF60: call    loc_1406AFF53
 * 00000001406AFF65: add     rsp, 8
 * 00000001406AFF69: call    loc_1406AFF5C
 * 00000001406AFF6E: add     rsp, 8
 * 00000001406AFF72: call    loc_1406AFF65
 * 00000001406AFF77: add     rsp, 8
 * 00000001406AFF7B: call    loc_1406AFF6E
 * 00000001406AFF80: add     rsp, 8
 * 00000001406AFF84: call    loc_1406AFF77
 * 00000001406AFF89: add     rsp, 8
 * 00000001406AFF8D: call    loc_1406AFF80
 * 00000001406AFF92: add     rsp, 8
 * 00000001406AFF96: call    loc_1406AFF89
 * 00000001406AFF9B: add     rsp, 8
 * 00000001406AFF9F: call    loc_1406AFF92
 * 00000001406AFFA4: add     rsp, 8
 * 00000001406AFFA8: call    loc_1406AFF9B
 * 00000001406AFFAD: add     rsp, 8
 * 00000001406AFFB1: call    loc_1406AFFA4
 * 00000001406AFFB6: add     rsp, 8
 * 00000001406AFFBA: call    loc_1406AFFAD
 * 00000001406AFFBF: add     rsp, 8
 * 00000001406AFFC3: call    loc_1406AFFB6
 * 00000001406AFFC8: add     rsp, 8
 * 00000001406AFFCC: call    loc_1406AFFBF
 * 00000001406AFFD1: add     rsp, 8
 * 00000001406AFFD5: call    loc_1406AFFC8
 * 00000001406AFFDA: add     rsp, 8
 * 00000001406AFFDE: call    loc_1406AFFD1
 * 00000001406AFFE3: add     rsp, 8
 * 00000001406AFFE7: mov     eax, 0DADAh
 * 00000001406AFFEC: test    byte ptr gs:85Ch, 8
 * 00000001406AFFF5: jz      short loc_1406AFFFE
 * 00000001406AFFF7: mov     al, 20h ; ' '
 * 00000001406AFFF9: incsspq rax
 * 00000001406AFFFE: test    word ptr gs:858h, 100h
 * 00000001406B0009: jz      short loc_1406B0017
 * 00000001406B000B: xor     eax, eax
 * 00000001406B000D: xor     edx, edx
 * 00000001406B000F: mov     ecx, 1
 * 00000001406B0014: div     rcx
 * 00000001406B0017: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001406B001B: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001406B001F: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001406B0023: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001406B0027: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001406B002B: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001406B002F: mov     r11, [rbp+0D8h+var_F8]
 * 00000001406B0033: mov     r10, [rbp+0D8h+var_100]
 * 00000001406B0037: mov     r9, [rbp+0D8h+var_108]
 * 00000001406B003B: mov     r8, [rbp+0D8h+var_110]
 * 00000001406B003F: mov     rdx, [rbp+0D8h+var_118]
 * 00000001406B0043: mov     rcx, [rbp+0D8h+var_120]
 * 00000001406B0047: mov     rax, [rbp+0D8h+var_128]
 * 00000001406B004B: mov     rsp, rbp
 * 00000001406B004E: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001406B0055: add     rsp, 0E8h
 * 00000001406B005C: test    cs:KiKvaShadow, 1
 * 00000001406B0063: jz      short loc_1406B006A
 * 00000001406B0065: jmp     KiKernelExit
 * 00000001406B006A: test    word ptr gs:858h, 200h
 * 00000001406B0075: jz      short loc_1406B007C
 * 00000001406B0077: verw    [rsp-10h+arg_20]
 * 00000001406B007C: swapgs
 * 00000001406B007F: iretq
 * 00000001406B0081: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001406B0085: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001406B0089: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001406B008D: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001406B0091: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001406B0095: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001406B0099: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001406B009D: mov     r11, [rbp+0D8h+var_F8]
 * 00000001406B00A1: mov     r10, [rbp+0D8h+var_100]
 * 00000001406B00A5: mov     r9, [rbp+0D8h+var_108]
 * 00000001406B00A9: mov     r8, [rbp+0D8h+var_110]
 * 00000001406B00AD: mov     rdx, [rbp+0D8h+var_118]
 * 00000001406B00B1: mov     rcx, [rbp+0D8h+var_120]
 * 00000001406B00B5: mov     rax, [rbp+0D8h+var_128]
 * 00000001406B00B9: mov     rsp, rbp
 * 00000001406B00BC: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001406B00C3: add     rsp, 0E8h
 * 00000001406B00CA: iretq
 */
