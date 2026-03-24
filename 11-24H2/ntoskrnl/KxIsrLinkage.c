/*
 * XREFs of KxIsrLinkage @ 0x1406AE9A0
 * Callers:
 *     KxIsrLinkageShadow @ 0x140BBCB00 (KxIsrLinkageShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14025F5D0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiEndInterruptCycleAccumulation @ 0x14034A8A0 (KiEndInterruptCycleAccumulation.c)
 *     KiStartInterruptCycleAccumulation @ 0x14034C150 (KiStartInterruptCycleAccumulation.c)
 *     KiUpdateStibpPairing @ 0x1403EB760 (KiUpdateStibpPairing.c)
 *     KiCheckForSListAddress @ 0x1404038C0 (KiCheckForSListAddress.c)
 *     HalPerformEndOfInterrupt @ 0x140418370 (HalPerformEndOfInterrupt.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14041B1F0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x1404FBC10 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1404FBC90 (KiSaveDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405B7800 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x1405BCCD0 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1405BF250 (KiCopyCounters.c)
 *     PerfInfoLogUnexpectedInterrupt @ 0x14064EF30 (PerfInfoLogUnexpectedInterrupt.c)
 *     KiRestoreSetContextState @ 0x1406AAFC0 (KiRestoreSetContextState.c)
 *     KxIsrLinkage @ 0x1406AE9A0 (KxIsrLinkage.c)
 *     KiInitiateUserApc @ 0x1406AF860 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1406B2200 (KiDpcInterruptBypass.c)
 *     KiBugCheckDispatch @ 0x1406BEC80 (KiBugCheckDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406BF740 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KxIsrLinkage @ 0x1406AE9A0
 * Reason: Hex-Rays returned no pseudocode for 0x1406AE9A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406AE9A0: push    rbp
 * 00000001406AE9A1: push    rsi
 * 00000001406AE9A2: sub     rsp, 150h
 * 00000001406AE9A9: lea     rbp, [rsp+80h]
 * 00000001406AE9B1: mov     [rbp+0D8h+var_12D], 0
 * 00000001406AE9B5: mov     [rbp+0D8h+var_128], rax
 * 00000001406AE9B9: mov     [rbp+0D8h+var_120], rcx
 * 00000001406AE9BD: mov     [rbp+0D8h+var_118], rdx
 * 00000001406AE9C1: mov     [rbp+0D8h+var_110], r8
 * 00000001406AE9C5: mov     [rbp+0D8h+var_108], r9
 * 00000001406AE9C9: mov     [rbp+0D8h+var_100], r10
 * 00000001406AE9CD: mov     [rbp+0D8h+var_F8], r11
 * 00000001406AE9D1: test    [rbp+0D8h+arg_8], 1
 * 00000001406AE9D8: jnz     short loc_1406AEA12
 * 00000001406AE9DA: xor     edx, edx
 * 00000001406AE9DC: rdsspq  rdx
 * 00000001406AE9E1: mov     [rbp+0D8h+var_80], rdx
 * 00000001406AE9E5: lfence
 * 00000001406AE9E8: test    byte ptr gs:858h, 1
 * 00000001406AE9F1: jnz     short loc_1406AE9FB
 * 00000001406AE9F3: lfence
 * 00000001406AE9F6: jmp     loc_1406AEC83
 * 00000001406AE9FB: movzx   eax, word ptr gs:866h
 * 00000001406AEA04: mov     ecx, 48h ; 'H'
 * 00000001406AEA09: xor     edx, edx
 * 00000001406AEA0B: wrmsr
 * 00000001406AEA0D: jmp     loc_1406AEC83
 * 00000001406AEA12: test    cs:KiKvaShadow, 1
 * 00000001406AEA19: jnz     short loc_1406AEA1E
 * 00000001406AEA1B: swapgs
 * 00000001406AEA1E: lfence
 * 00000001406AEA21: mov     rcx, gs:9D28h
 * 00000001406AEA2A: test    rcx, rcx
 * 00000001406AEA2D: jz      short loc_1406AEA4E
 * 00000001406AEA2F: rdsspq  rdx
 * 00000001406AEA34: mov     r10, gs:9D20h
 * 00000001406AEA3D: add     r10, 8
 * 00000001406AEA41: cmp     rdx, r10
 * 00000001406AEA44: jnz     short loc_1406AEA4E
 * 00000001406AEA46: rstorssp qword ptr [rcx]
 * 00000001406AEA4A: saveprevssp
 * 00000001406AEA4E: mov     r10, gs:188h
 * 00000001406AEA57: mov     rcx, gs:188h
 * 00000001406AEA60: mov     rcx, [rcx+220h]
 * 00000001406AEA67: mov     rcx, [rcx+760h]
 * 00000001406AEA6E: mov     gs:850h, rcx
 * 00000001406AEA77: mov     cx, gs:862h
 * 00000001406AEA80: mov     gs:864h, cx
 * 00000001406AEA89: mov     cl, gs:858h
 * 00000001406AEA91: mov     gs:85Ah, cl
 * 00000001406AEA99: movzx   eax, word ptr gs:868h
 * 00000001406AEAA2: cmp     gs:866h, ax
 * 00000001406AEAAB: jz      short loc_1406AEABF
 * 00000001406AEAAD: mov     gs:866h, ax
 * 00000001406AEAB6: mov     ecx, 48h ; 'H'
 * 00000001406AEABB: xor     edx, edx
 * 00000001406AEABD: wrmsr
 * 00000001406AEABF: movzx   edx, byte ptr gs:858h
 * 00000001406AEAC8: test    edx, 8
 * 00000001406AEACE: jz      short loc_1406AEAE7
 * 00000001406AEAD0: mov     eax, 1
 * 00000001406AEAD5: xor     edx, edx
 * 00000001406AEAD7: mov     ecx, 49h ; 'I'
 * 00000001406AEADC: wrmsr
 * 00000001406AEADE: movzx   edx, byte ptr gs:858h
 * 00000001406AEAE7: test    edx, 2
 * 00000001406AEAED: jz      loc_1406AEC2A
 * 00000001406AEAF3: call    loc_1406AEC06
 * 00000001406AEAF8: add     rsp, 8
 * 00000001406AEAFC: call    loc_1406AEC0F
 * 00000001406AEB01: add     rsp, 8
 * 00000001406AEB05: call    loc_1406AEAF8
 * 00000001406AEB0A: add     rsp, 8
 * 00000001406AEB0E: call    loc_1406AEB01
 * 00000001406AEB13: add     rsp, 8
 * 00000001406AEB17: call    loc_1406AEB0A
 * 00000001406AEB1C: add     rsp, 8
 * 00000001406AEB20: call    loc_1406AEB13
 * 00000001406AEB25: add     rsp, 8
 * 00000001406AEB29: call    loc_1406AEB1C
 * 00000001406AEB2E: add     rsp, 8
 * 00000001406AEB32: call    loc_1406AEB25
 * 00000001406AEB37: add     rsp, 8
 * 00000001406AEB3B: call    loc_1406AEB2E
 * 00000001406AEB40: add     rsp, 8
 * 00000001406AEB44: call    loc_1406AEB37
 * 00000001406AEB49: add     rsp, 8
 * 00000001406AEB4D: call    loc_1406AEB40
 * 00000001406AEB52: add     rsp, 8
 * 00000001406AEB56: call    loc_1406AEB49
 * 00000001406AEB5B: add     rsp, 8
 * 00000001406AEB5F: call    loc_1406AEB52
 * 00000001406AEB64: add     rsp, 8
 * 00000001406AEB68: call    loc_1406AEB5B
 * 00000001406AEB6D: add     rsp, 8
 * 00000001406AEB71: call    loc_1406AEB64
 * 00000001406AEB76: add     rsp, 8
 * 00000001406AEB7A: call    loc_1406AEB6D
 * 00000001406AEB7F: add     rsp, 8
 * 00000001406AEB83: call    loc_1406AEB76
 * 00000001406AEB88: add     rsp, 8
 * 00000001406AEB8C: call    loc_1406AEB7F
 * 00000001406AEB91: add     rsp, 8
 * 00000001406AEB95: call    loc_1406AEB88
 * 00000001406AEB9A: add     rsp, 8
 * 00000001406AEB9E: call    loc_1406AEB91
 * 00000001406AEBA3: add     rsp, 8
 * 00000001406AEBA7: call    loc_1406AEB9A
 * 00000001406AEBAC: add     rsp, 8
 * 00000001406AEBB0: call    loc_1406AEBA3
 * 00000001406AEBB5: add     rsp, 8
 * 00000001406AEBB9: call    loc_1406AEBAC
 * 00000001406AEBBE: add     rsp, 8
 * 00000001406AEBC2: call    loc_1406AEBB5
 * 00000001406AEBC7: add     rsp, 8
 * 00000001406AEBCB: call    loc_1406AEBBE
 * 00000001406AEBD0: add     rsp, 8
 * 00000001406AEBD4: call    loc_1406AEBC7
 * 00000001406AEBD9: add     rsp, 8
 * 00000001406AEBDD: call    loc_1406AEBD0
 * 00000001406AEBE2: add     rsp, 8
 * 00000001406AEBE6: call    loc_1406AEBD9
 * 00000001406AEBEB: add     rsp, 8
 * 00000001406AEBEF: call    loc_1406AEBE2
 * 00000001406AEBF4: add     rsp, 8
 * 00000001406AEBF8: call    loc_1406AEBEB
 * 00000001406AEBFD: add     rsp, 8
 * 00000001406AEC01: call    loc_1406AEBF4
 * 00000001406AEC06: add     rsp, 8
 * 00000001406AEC0A: call    loc_1406AEBFD
 * 00000001406AEC0F: add     rsp, 8
 * 00000001406AEC13: mov     eax, 0DADAh
 * 00000001406AEC18: test    byte ptr gs:85Ch, 8
 * 00000001406AEC21: jz      short loc_1406AEC2A
 * 00000001406AEC23: mov     al, 20h ; ' '
 * 00000001406AEC25: incsspq rax
 * 00000001406AEC2A: test    edx, 80h
 * 00000001406AEC30: jz      short loc_1406AEC3A
 * 00000001406AEC32: lfence
 * 00000001406AEC35: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406AEC3A: lfence
 * 00000001406AEC3D: mov     byte ptr gs:85Eh, 0
 * 00000001406AEC46: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406AEC4D: jz      short loc_1406AEC6E
 * 00000001406AEC4F: mov     ecx, 6A7h
 * 00000001406AEC54: rdmsr
 * 00000001406AEC56: cmp     edx, 0
 * 00000001406AEC59: jz      short loc_1406AEC6E
 * 00000001406AEC5B: mov     ecx, edx
 * 00000001406AEC5D: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406AEC63: cmp     edx, ecx
 * 00000001406AEC65: jz      short loc_1406AEC6E
 * 00000001406AEC67: mov     ecx, 6A7h
 * 00000001406AEC6C: wrmsr
 * 00000001406AEC6E: test    byte ptr [r10+3], 3
 * 00000001406AEC73: mov     [rbp+0D8h+var_58], 0
 * 00000001406AEC7C: jz      short loc_1406AEC83
 * 00000001406AEC7E: call    KiSaveDebugRegisterState
 * 00000001406AEC83: cld
 * 00000001406AEC84: stmxcsr [rbp+0D8h+var_12C]
 * 00000001406AEC88: ldmxcsr dword ptr gs:180h
 * 00000001406AEC91: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001406AEC95: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001406AEC99: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001406AEC9D: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001406AECA1: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001406AECA5: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001406AECA9: test    [rbp+0D8h+arg_8], 1
 * 00000001406AECB0: jz      short loc_1406AECB7
 * 00000001406AECB2: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406AECB7: cmp     byte ptr gs:87DAh, 0
 * 00000001406AECC0: jz      short loc_1406AECC7
 * 00000001406AECC2: call    KeWakeProcessor
 * 00000001406AECC7: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001406AECCE: cmp     rax, [rbp+0D8h+arg_0]
 * 00000001406AECD5: jnb     short loc_1406AECF0
 * 00000001406AECD7: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001406AECDE: cmp     rax, [rbp+0D8h+arg_0]
 * 00000001406AECE5: jb      short loc_1406AECF0
 * 00000001406AECE7: lea     rcx, [rbp+0D8h+var_158]
 * 00000001406AECEB: call    KiCheckForSListAddress
 * 00000001406AECF0: movzx   eax, byte ptr [rbp+0E0h]
 * 00000001406AECF7: mov     rsi, gs:20h
 * 00000001406AED00: mov     rsi, [rsi+rax*8+3900h]
 * 00000001406AED08: inc     dword ptr gs:87C0h
 * 00000001406AED10: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406AED17: jz      short loc_1406AED1C
 * 00000001406AED19: clac
 * 00000001406AED1C: test    rsi, rsi
 * 00000001406AED1F: jz      short loc_1406AED2A
 * 00000001406AED21: mov     rax, [rsi+50h]
 * 00000001406AED25: jmp     _guard_dispatch_icall_no_overrides
 * 00000001406AED2A: mov     ecx, eax
 * 00000001406AED2C: shr     ecx, 4
 * 00000001406AED2F: cmp     cs:KiIrqlFlags, 0
 * 00000001406AED36: jz      short loc_1406AED3F
 * 00000001406AED38: call    KzSetIrqlUnsafe
 * 00000001406AED3D: jmp     short loc_1406AED47
 * 00000001406AED3F: mov     rax, cr8
 * 00000001406AED43: mov     cr8, rcx
 * 00000001406AED47: mov     [rbp+0D8h+var_12F], al
 * 00000001406AED4A: mov     rcx, gs:20h
 * 00000001406AED53: xor     edx, edx
 * 00000001406AED55: call    KiStartInterruptCycleAccumulation
 * 00000001406AED5A: sti
 * 00000001406AED5B: test    dword ptr cs:PerfGlobalGroupMask+4, 4000h
 * 00000001406AED65: jz      short loc_1406AED73
 * 00000001406AED67: movzx   ecx, byte ptr [rbp+0E0h]
 * 00000001406AED6E: call    PerfInfoLogUnexpectedInterrupt
 * 00000001406AED73: cmp     cs:KiBugCheckUnexpectedInterrupts, 0
 * 00000001406AED7A: jz      short loc_1406AED9B
 * 00000001406AED7C: and     [rbp+0D8h+var_138], 0
 * 00000001406AED81: xor     r9, r9
 * 00000001406AED84: movzx   r8d, byte ptr [rbp+0E0h]
 * 00000001406AED8C: mov     edx, 1
 * 00000001406AED91: mov     ecx, 12h
 * 00000001406AED96: call    KiBugCheckDispatch
 * 00000001406AED9B: cli
 * 00000001406AED9C: mov     rcx, rsi
 * 00000001406AED9F: call    HalPerformEndOfInterrupt
 * 00000001406AEDA4: mov     rcx, gs:20h
 * 00000001406AEDAD: movzx   edx, [rbp+0D8h+var_12F]
 * 00000001406AEDB1: call    KiEndInterruptCycleAccumulation
 * 00000001406AEDB6: test    al, al
 * 00000001406AEDB8: jz      short loc_1406AEDBF
 * 00000001406AEDBA: call    KiDpcInterruptBypass
 * 00000001406AEDBF: movzx   ecx, [rbp+0D8h+var_12F]
 * 00000001406AEDC3: cmp     cs:KiIrqlFlags, 0
 * 00000001406AEDCA: jz      short loc_1406AEDD3
 * 00000001406AEDCC: call    KzSetIrqlUnsafe
 * 00000001406AEDD1: jmp     short loc_1406AEDD7
 * 00000001406AEDD3: mov     cr8, rcx
 * 00000001406AEDD7: mov     rsi, [rbp+0D8h+var_8]
 * 00000001406AEDDE: cli
 * 00000001406AEDDF: test    [rbp+0D8h+arg_8], 1
 * 00000001406AEDE6: jz      loc_1406AF0E1
 * 00000001406AEDEC: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406AEDF3: jz      short loc_1406AEDF8
 * 00000001406AEDF5: stac
 * 00000001406AEDF8: mov     rcx, gs:188h
 * 00000001406AEE01: test    byte ptr [rcx+0C2h], 3
 * 00000001406AEE08: jz      short loc_1406AEE25
 * 00000001406AEE0A: mov     ecx, 1
 * 00000001406AEE0F: mov     cr8, rcx
 * 00000001406AEE13: sti
 * 00000001406AEE14: call    KiInitiateUserApc
 * 00000001406AEE19: cli
 * 00000001406AEE1A: mov     ecx, 0
 * 00000001406AEE1F: mov     cr8, rcx
 * 00000001406AEE23: jmp     short loc_1406AEDF8
 * 00000001406AEE25: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406AEE2A: test    eax, eax
 * 00000001406AEE2C: mov     rax, [rbp+0D8h+var_128]
 * 00000001406AEE30: jnz     short loc_1406AEDF8
 * 00000001406AEE32: test    byte ptr gs:860h, 2
 * 00000001406AEE3B: jz      short loc_1406AEE44
 * 00000001406AEE3D: xor     ecx, ecx
 * 00000001406AEE3F: call    KiUpdateStibpPairing
 * 00000001406AEE44: mov     rcx, gs:188h
 * 00000001406AEE4D: test    dword ptr [rcx], 8000000h
 * 00000001406AEE53: jz      short loc_1406AEE5A
 * 00000001406AEE55: call    KiRestoreSetContextState
 * 00000001406AEE5A: mov     rcx, gs:188h
 * 00000001406AEE63: test    dword ptr [rcx], 10000h
 * 00000001406AEE69: jz      short loc_1406AEE7F
 * 00000001406AEE6B: test    byte ptr [rcx+2], 1
 * 00000001406AEE6F: jz      short loc_1406AEE7F
 * 00000001406AEE71: call    KiCopyCounters
 * 00000001406AEE76: mov     rcx, gs:188h
 * 00000001406AEE7F: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001406AEE83: cmp     [rbp+0D8h+var_58], 0
 * 00000001406AEE8B: jz      short loc_1406AEE92
 * 00000001406AEE8D: call    KiRestoreDebugRegisterState
 * 00000001406AEE92: mov     rcx, gs:188h
 * 00000001406AEE9B: bt      dword ptr [rcx+74h], 16h
 * 00000001406AEEA0: jnb     short loc_1406AEECC
 * 00000001406AEEA2: xor     ecx, ecx
 * 00000001406AEEA4: rdsspq  rcx
 * 00000001406AEEA9: mov     r8, gs:9D28h
 * 00000001406AEEB2: add     r8, 8
 * 00000001406AEEB6: cmp     rcx, r8
 * 00000001406AEEB9: jnz     short loc_1406AEECC
 * 00000001406AEEBB: mov     rcx, gs:9D20h
 * 00000001406AEEC4: rstorssp qword ptr [rcx]
 * 00000001406AEEC8: saveprevssp
 * 00000001406AEECC: mov     byte ptr gs:85Eh, 0
 * 00000001406AEED5: movzx   eax, word ptr gs:86Ch
 * 00000001406AEEDE: cmp     gs:866h, ax
 * 00000001406AEEE7: jz      short loc_1406AEEFB
 * 00000001406AEEE9: mov     gs:866h, ax
 * 00000001406AEEF2: mov     ecx, 48h ; 'H'
 * 00000001406AEEF7: xor     edx, edx
 * 00000001406AEEF9: wrmsr
 * 00000001406AEEFB: btr     word ptr gs:858h, 2
 * 00000001406AEF06: jnb     short loc_1406AEF16
 * 00000001406AEF08: mov     eax, 1
 * 00000001406AEF0D: xor     edx, edx
 * 00000001406AEF0F: mov     ecx, 49h ; 'I'
 * 00000001406AEF14: wrmsr
 * 00000001406AEF16: btr     word ptr gs:858h, 5
 * 00000001406AEF21: jnb     loc_1406AF05E
 * 00000001406AEF27: call    loc_1406AF03A
 * 00000001406AEF2C: add     rsp, 8
 * 00000001406AEF30: call    loc_1406AF043
 * 00000001406AEF35: add     rsp, 8
 * 00000001406AEF39: call    loc_1406AEF2C
 * 00000001406AEF3E: add     rsp, 8
 * 00000001406AEF42: call    loc_1406AEF35
 * 00000001406AEF47: add     rsp, 8
 * 00000001406AEF4B: call    loc_1406AEF3E
 * 00000001406AEF50: add     rsp, 8
 * 00000001406AEF54: call    loc_1406AEF47
 * 00000001406AEF59: add     rsp, 8
 * 00000001406AEF5D: call    loc_1406AEF50
 * 00000001406AEF62: add     rsp, 8
 * 00000001406AEF66: call    loc_1406AEF59
 * 00000001406AEF6B: add     rsp, 8
 * 00000001406AEF6F: call    loc_1406AEF62
 * 00000001406AEF74: add     rsp, 8
 * 00000001406AEF78: call    loc_1406AEF6B
 * 00000001406AEF7D: add     rsp, 8
 * 00000001406AEF81: call    loc_1406AEF74
 * 00000001406AEF86: add     rsp, 8
 * 00000001406AEF8A: call    loc_1406AEF7D
 * 00000001406AEF8F: add     rsp, 8
 * 00000001406AEF93: call    loc_1406AEF86
 * 00000001406AEF98: add     rsp, 8
 * 00000001406AEF9C: call    loc_1406AEF8F
 * 00000001406AEFA1: add     rsp, 8
 * 00000001406AEFA5: call    loc_1406AEF98
 * 00000001406AEFAA: add     rsp, 8
 * 00000001406AEFAE: call    loc_1406AEFA1
 * 00000001406AEFB3: add     rsp, 8
 * 00000001406AEFB7: call    loc_1406AEFAA
 * 00000001406AEFBC: add     rsp, 8
 * 00000001406AEFC0: call    loc_1406AEFB3
 * 00000001406AEFC5: add     rsp, 8
 * 00000001406AEFC9: call    loc_1406AEFBC
 * 00000001406AEFCE: add     rsp, 8
 * 00000001406AEFD2: call    loc_1406AEFC5
 * 00000001406AEFD7: add     rsp, 8
 * 00000001406AEFDB: call    loc_1406AEFCE
 * 00000001406AEFE0: add     rsp, 8
 * 00000001406AEFE4: call    loc_1406AEFD7
 * 00000001406AEFE9: add     rsp, 8
 * 00000001406AEFED: call    loc_1406AEFE0
 * 00000001406AEFF2: add     rsp, 8
 * 00000001406AEFF6: call    loc_1406AEFE9
 * 00000001406AEFFB: add     rsp, 8
 * 00000001406AEFFF: call    loc_1406AEFF2
 * 00000001406AF004: add     rsp, 8
 * 00000001406AF008: call    loc_1406AEFFB
 * 00000001406AF00D: add     rsp, 8
 * 00000001406AF011: call    loc_1406AF004
 * 00000001406AF016: add     rsp, 8
 * 00000001406AF01A: call    loc_1406AF00D
 * 00000001406AF01F: add     rsp, 8
 * 00000001406AF023: call    loc_1406AF016
 * 00000001406AF028: add     rsp, 8
 * 00000001406AF02C: call    loc_1406AF01F
 * 00000001406AF031: add     rsp, 8
 * 00000001406AF035: call    loc_1406AF028
 * 00000001406AF03A: add     rsp, 8
 * 00000001406AF03E: call    loc_1406AF031
 * 00000001406AF043: add     rsp, 8
 * 00000001406AF047: mov     eax, 0DADAh
 * 00000001406AF04C: test    byte ptr gs:85Ch, 8
 * 00000001406AF055: jz      short loc_1406AF05E
 * 00000001406AF057: mov     al, 20h ; ' '
 * 00000001406AF059: incsspq rax
 * 00000001406AF05E: test    word ptr gs:858h, 100h
 * 00000001406AF069: jz      short loc_1406AF077
 * 00000001406AF06B: xor     eax, eax
 * 00000001406AF06D: xor     edx, edx
 * 00000001406AF06F: mov     ecx, 1
 * 00000001406AF074: div     rcx
 * 00000001406AF077: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001406AF07B: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001406AF07F: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001406AF083: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001406AF087: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001406AF08B: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001406AF08F: mov     r11, [rbp+0D8h+var_F8]
 * 00000001406AF093: mov     r10, [rbp+0D8h+var_100]
 * 00000001406AF097: mov     r9, [rbp+0D8h+var_108]
 * 00000001406AF09B: mov     r8, [rbp+0D8h+var_110]
 * 00000001406AF09F: mov     rdx, [rbp+0D8h+var_118]
 * 00000001406AF0A3: mov     rcx, [rbp+0D8h+var_120]
 * 00000001406AF0A7: mov     rax, [rbp+0D8h+var_128]
 * 00000001406AF0AB: mov     rsp, rbp
 * 00000001406AF0AE: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001406AF0B5: add     rsp, 0E8h
 * 00000001406AF0BC: test    cs:KiKvaShadow, 1
 * 00000001406AF0C3: jz      short loc_1406AF0CA
 * 00000001406AF0C5: jmp     KiKernelExit
 * 00000001406AF0CA: test    word ptr gs:858h, 200h
 * 00000001406AF0D5: jz      short loc_1406AF0DC
 * 00000001406AF0D7: verw    [rsp-10h+arg_20]
 * 00000001406AF0DC: swapgs
 * 00000001406AF0DF: iretq
 * 00000001406AF0E1: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001406AF0E5: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001406AF0E9: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001406AF0ED: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001406AF0F1: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001406AF0F5: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001406AF0F9: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001406AF0FD: mov     r11, [rbp+0D8h+var_F8]
 * 00000001406AF101: mov     r10, [rbp+0D8h+var_100]
 * 00000001406AF105: mov     r9, [rbp+0D8h+var_108]
 * 00000001406AF109: mov     r8, [rbp+0D8h+var_110]
 * 00000001406AF10D: mov     rdx, [rbp+0D8h+var_118]
 * 00000001406AF111: mov     rcx, [rbp+0D8h+var_120]
 * 00000001406AF115: mov     rax, [rbp+0D8h+var_128]
 * 00000001406AF119: mov     rsp, rbp
 * 00000001406AF11C: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001406AF123: add     rsp, 0E8h
 * 00000001406AF12A: iretq
 */
