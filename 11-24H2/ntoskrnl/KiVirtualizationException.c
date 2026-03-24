/*
 * XREFs of KiVirtualizationException @ 0x1406BBD00
 * Callers:
 *     KiVirtualizationExceptionShadow @ 0x140BBBB40 (KiVirtualizationExceptionShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14025F5D0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiUpdateStibpPairing @ 0x1403EB760 (KiUpdateStibpPairing.c)
 *     KzLowerIrql @ 0x1403FE9F0 (KzLowerIrql.c)
 *     KzRaiseIrql @ 0x140401780 (KzRaiseIrql.c)
 *     KiCheckForSListAddress @ 0x1404038C0 (KiCheckForSListAddress.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14041B1F0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x1404FBC10 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1404FBC90 (KiSaveDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405BF250 (KiCopyCounters.c)
 *     KiEpfHandleNotification @ 0x1405C3550 (KiEpfHandleNotification.c)
 *     KiRestoreSetContextState @ 0x1406AAFC0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406AF860 (KiInitiateUserApc.c)
 *     KiVirtualizationException @ 0x1406BBD00 (KiVirtualizationException.c)
 *     KiBugCheckDispatch @ 0x1406BEC80 (KiBugCheckDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406BF740 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiVirtualizationException @ 0x1406BBD00
 * Reason: Hex-Rays returned no pseudocode for 0x1406BBD00
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406BBD00: sub     rsp, 8
 * 00000001406BBD04: push    rbp
 * 00000001406BBD05: sub     rsp, 158h
 * 00000001406BBD0C: lea     rbp, [rsp+80h]
 * 00000001406BBD14: mov     [rbp+0E8h+var_13D], 1
 * 00000001406BBD18: mov     [rbp+0E8h+var_138], rax
 * 00000001406BBD1C: mov     [rbp+0E8h+var_130], rcx
 * 00000001406BBD20: mov     [rbp+0E8h+var_128], rdx
 * 00000001406BBD24: mov     [rbp+0E8h+var_120], r8
 * 00000001406BBD28: mov     [rbp+0E8h+var_118], r9
 * 00000001406BBD2C: mov     [rbp+0E8h+var_110], r10
 * 00000001406BBD30: mov     [rbp+0E8h+var_108], r11
 * 00000001406BBD34: test    [rbp+0E8h+arg_0], 1
 * 00000001406BBD3B: jnz     short loc_1406BBD75
 * 00000001406BBD3D: xor     edx, edx
 * 00000001406BBD3F: rdsspq  rdx
 * 00000001406BBD44: mov     [rbp+0E8h+var_90], rdx
 * 00000001406BBD48: lfence
 * 00000001406BBD4B: test    byte ptr gs:858h, 1
 * 00000001406BBD54: jnz     short loc_1406BBD5E
 * 00000001406BBD56: lfence
 * 00000001406BBD59: jmp     loc_1406BBFE6
 * 00000001406BBD5E: movzx   eax, word ptr gs:866h
 * 00000001406BBD67: mov     ecx, 48h ; 'H'
 * 00000001406BBD6C: xor     edx, edx
 * 00000001406BBD6E: wrmsr
 * 00000001406BBD70: jmp     loc_1406BBFE6
 * 00000001406BBD75: test    cs:KiKvaShadow, 1
 * 00000001406BBD7C: jnz     short loc_1406BBD81
 * 00000001406BBD7E: swapgs
 * 00000001406BBD81: lfence
 * 00000001406BBD84: mov     rcx, gs:9D28h
 * 00000001406BBD8D: test    rcx, rcx
 * 00000001406BBD90: jz      short loc_1406BBDB1
 * 00000001406BBD92: rdsspq  rdx
 * 00000001406BBD97: mov     r10, gs:9D20h
 * 00000001406BBDA0: add     r10, 8
 * 00000001406BBDA4: cmp     rdx, r10
 * 00000001406BBDA7: jnz     short loc_1406BBDB1
 * 00000001406BBDA9: rstorssp qword ptr [rcx]
 * 00000001406BBDAD: saveprevssp
 * 00000001406BBDB1: mov     r10, gs:188h
 * 00000001406BBDBA: mov     rcx, gs:188h
 * 00000001406BBDC3: mov     rcx, [rcx+220h]
 * 00000001406BBDCA: mov     rcx, [rcx+760h]
 * 00000001406BBDD1: mov     gs:850h, rcx
 * 00000001406BBDDA: mov     cx, gs:862h
 * 00000001406BBDE3: mov     gs:864h, cx
 * 00000001406BBDEC: mov     cl, gs:858h
 * 00000001406BBDF4: mov     gs:85Ah, cl
 * 00000001406BBDFC: movzx   eax, word ptr gs:868h
 * 00000001406BBE05: cmp     gs:866h, ax
 * 00000001406BBE0E: jz      short loc_1406BBE22
 * 00000001406BBE10: mov     gs:866h, ax
 * 00000001406BBE19: mov     ecx, 48h ; 'H'
 * 00000001406BBE1E: xor     edx, edx
 * 00000001406BBE20: wrmsr
 * 00000001406BBE22: movzx   edx, byte ptr gs:858h
 * 00000001406BBE2B: test    edx, 8
 * 00000001406BBE31: jz      short loc_1406BBE4A
 * 00000001406BBE33: mov     eax, 1
 * 00000001406BBE38: xor     edx, edx
 * 00000001406BBE3A: mov     ecx, 49h ; 'I'
 * 00000001406BBE3F: wrmsr
 * 00000001406BBE41: movzx   edx, byte ptr gs:858h
 * 00000001406BBE4A: test    edx, 2
 * 00000001406BBE50: jz      loc_1406BBF8D
 * 00000001406BBE56: call    loc_1406BBF69
 * 00000001406BBE5B: add     rsp, 8
 * 00000001406BBE5F: call    loc_1406BBF72
 * 00000001406BBE64: add     rsp, 8
 * 00000001406BBE68: call    loc_1406BBE5B
 * 00000001406BBE6D: add     rsp, 8
 * 00000001406BBE71: call    loc_1406BBE64
 * 00000001406BBE76: add     rsp, 8
 * 00000001406BBE7A: call    loc_1406BBE6D
 * 00000001406BBE7F: add     rsp, 8
 * 00000001406BBE83: call    loc_1406BBE76
 * 00000001406BBE88: add     rsp, 8
 * 00000001406BBE8C: call    loc_1406BBE7F
 * 00000001406BBE91: add     rsp, 8
 * 00000001406BBE95: call    loc_1406BBE88
 * 00000001406BBE9A: add     rsp, 8
 * 00000001406BBE9E: call    loc_1406BBE91
 * 00000001406BBEA3: add     rsp, 8
 * 00000001406BBEA7: call    loc_1406BBE9A
 * 00000001406BBEAC: add     rsp, 8
 * 00000001406BBEB0: call    loc_1406BBEA3
 * 00000001406BBEB5: add     rsp, 8
 * 00000001406BBEB9: call    loc_1406BBEAC
 * 00000001406BBEBE: add     rsp, 8
 * 00000001406BBEC2: call    loc_1406BBEB5
 * 00000001406BBEC7: add     rsp, 8
 * 00000001406BBECB: call    loc_1406BBEBE
 * 00000001406BBED0: add     rsp, 8
 * 00000001406BBED4: call    loc_1406BBEC7
 * 00000001406BBED9: add     rsp, 8
 * 00000001406BBEDD: call    loc_1406BBED0
 * 00000001406BBEE2: add     rsp, 8
 * 00000001406BBEE6: call    loc_1406BBED9
 * 00000001406BBEEB: add     rsp, 8
 * 00000001406BBEEF: call    loc_1406BBEE2
 * 00000001406BBEF4: add     rsp, 8
 * 00000001406BBEF8: call    loc_1406BBEEB
 * 00000001406BBEFD: add     rsp, 8
 * 00000001406BBF01: call    loc_1406BBEF4
 * 00000001406BBF06: add     rsp, 8
 * 00000001406BBF0A: call    loc_1406BBEFD
 * 00000001406BBF0F: add     rsp, 8
 * 00000001406BBF13: call    loc_1406BBF06
 * 00000001406BBF18: add     rsp, 8
 * 00000001406BBF1C: call    loc_1406BBF0F
 * 00000001406BBF21: add     rsp, 8
 * 00000001406BBF25: call    loc_1406BBF18
 * 00000001406BBF2A: add     rsp, 8
 * 00000001406BBF2E: call    loc_1406BBF21
 * 00000001406BBF33: add     rsp, 8
 * 00000001406BBF37: call    loc_1406BBF2A
 * 00000001406BBF3C: add     rsp, 8
 * 00000001406BBF40: call    loc_1406BBF33
 * 00000001406BBF45: add     rsp, 8
 * 00000001406BBF49: call    loc_1406BBF3C
 * 00000001406BBF4E: add     rsp, 8
 * 00000001406BBF52: call    loc_1406BBF45
 * 00000001406BBF57: add     rsp, 8
 * 00000001406BBF5B: call    loc_1406BBF4E
 * 00000001406BBF60: add     rsp, 8
 * 00000001406BBF64: call    loc_1406BBF57
 * 00000001406BBF69: add     rsp, 8
 * 00000001406BBF6D: call    loc_1406BBF60
 * 00000001406BBF72: add     rsp, 8
 * 00000001406BBF76: mov     eax, 0DADAh
 * 00000001406BBF7B: test    byte ptr gs:85Ch, 8
 * 00000001406BBF84: jz      short loc_1406BBF8D
 * 00000001406BBF86: mov     al, 20h ; ' '
 * 00000001406BBF88: incsspq rax
 * 00000001406BBF8D: test    edx, 80h
 * 00000001406BBF93: jz      short loc_1406BBF9D
 * 00000001406BBF95: lfence
 * 00000001406BBF98: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406BBF9D: lfence
 * 00000001406BBFA0: mov     byte ptr gs:85Eh, 0
 * 00000001406BBFA9: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406BBFB0: jz      short loc_1406BBFD1
 * 00000001406BBFB2: mov     ecx, 6A7h
 * 00000001406BBFB7: rdmsr
 * 00000001406BBFB9: cmp     edx, 0
 * 00000001406BBFBC: jz      short loc_1406BBFD1
 * 00000001406BBFBE: mov     ecx, edx
 * 00000001406BBFC0: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406BBFC6: cmp     edx, ecx
 * 00000001406BBFC8: jz      short loc_1406BBFD1
 * 00000001406BBFCA: mov     ecx, 6A7h
 * 00000001406BBFCF: wrmsr
 * 00000001406BBFD1: test    byte ptr [r10+3], 3
 * 00000001406BBFD6: mov     [rbp+0E8h+var_68], 0
 * 00000001406BBFDF: jz      short loc_1406BBFE6
 * 00000001406BBFE1: call    KiSaveDebugRegisterState
 * 00000001406BBFE6: cld
 * 00000001406BBFE7: stmxcsr [rbp+0E8h+var_13C]
 * 00000001406BBFEB: ldmxcsr dword ptr gs:180h
 * 00000001406BBFF4: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001406BBFF8: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001406BBFFC: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001406BC000: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001406BC004: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001406BC008: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001406BC00C: test    [rbp+0E8h+arg_0], 1
 * 00000001406BC013: jz      short loc_1406BC01A
 * 00000001406BC015: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406BC01A: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406BC021: jz      short loc_1406BC02F
 * 00000001406BC023: test    [rbp+0E8h+arg_0], 1
 * 00000001406BC02A: jz      short loc_1406BC02F
 * 00000001406BC02C: stac
 * 00000001406BC02F: mov     r9, gs:8D88h
 * 00000001406BC038: test    r9, r9
 * 00000001406BC03B: jz      loc_1406BC3EF
 * 00000001406BC041: cmp     dword ptr [r9+44h], 1
 * 00000001406BC046: jnz     loc_1406BC3EF
 * 00000001406BC04C: test    [rbp+0E8h+arg_8], 200h
 * 00000001406BC056: jz      loc_1406BC3EF
 * 00000001406BC05C: mov     rax, cr8
 * 00000001406BC060: mov     dword ptr [rbp+0E8h+NewIrql], eax
 * 00000001406BC063: cmp     al, 2
 * 00000001406BC065: jge     loc_1406BC3EF
 * 00000001406BC06B: mov     ecx, 2; NewIrql
 * 00000001406BC070: call    KzRaiseIrql
 * 00000001406BC075: sti
 * 00000001406BC076: mov     r9, gs:8D88h
 * 00000001406BC07F: mov     rcx, [r9+48h]
 * 00000001406BC083: mov     dword ptr [r9+44h], 0
 * 00000001406BC08B: call    KiEpfHandleNotification
 * 00000001406BC090: cli
 * 00000001406BC091: lea     rcx, [rbp+0E8h+var_168]
 * 00000001406BC095: call    KiCheckForSListAddress
 * 00000001406BC09A: mov     ecx, dword ptr [rbp+0E8h+NewIrql]; NewIrql
 * 00000001406BC09D: call    KzLowerIrql
 * 00000001406BC0A2: test    [rbp+0E8h+arg_0], 1
 * 00000001406BC0A9: jz      loc_1406BC3A4
 * 00000001406BC0AF: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406BC0B6: jz      short loc_1406BC0BB
 * 00000001406BC0B8: stac
 * 00000001406BC0BB: mov     rcx, gs:188h
 * 00000001406BC0C4: test    byte ptr [rcx+0C2h], 3
 * 00000001406BC0CB: jz      short loc_1406BC0E8
 * 00000001406BC0CD: mov     ecx, 1
 * 00000001406BC0D2: mov     cr8, rcx
 * 00000001406BC0D6: sti
 * 00000001406BC0D7: call    KiInitiateUserApc
 * 00000001406BC0DC: cli
 * 00000001406BC0DD: mov     ecx, 0
 * 00000001406BC0E2: mov     cr8, rcx
 * 00000001406BC0E6: jmp     short loc_1406BC0BB
 * 00000001406BC0E8: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406BC0ED: test    eax, eax
 * 00000001406BC0EF: mov     rax, [rbp+0E8h+var_138]
 * 00000001406BC0F3: jnz     short loc_1406BC0BB
 * 00000001406BC0F5: test    byte ptr gs:860h, 2
 * 00000001406BC0FE: jz      short loc_1406BC107
 * 00000001406BC100: xor     ecx, ecx
 * 00000001406BC102: call    KiUpdateStibpPairing
 * 00000001406BC107: mov     rcx, gs:188h
 * 00000001406BC110: test    dword ptr [rcx], 8000000h
 * 00000001406BC116: jz      short loc_1406BC11D
 * 00000001406BC118: call    KiRestoreSetContextState
 * 00000001406BC11D: mov     rcx, gs:188h
 * 00000001406BC126: test    dword ptr [rcx], 10000h
 * 00000001406BC12C: jz      short loc_1406BC142
 * 00000001406BC12E: test    byte ptr [rcx+2], 1
 * 00000001406BC132: jz      short loc_1406BC142
 * 00000001406BC134: call    KiCopyCounters
 * 00000001406BC139: mov     rcx, gs:188h
 * 00000001406BC142: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001406BC146: cmp     [rbp+0E8h+var_68], 0
 * 00000001406BC14E: jz      short loc_1406BC155
 * 00000001406BC150: call    KiRestoreDebugRegisterState
 * 00000001406BC155: mov     rcx, gs:188h
 * 00000001406BC15E: bt      dword ptr [rcx+74h], 16h
 * 00000001406BC163: jnb     short loc_1406BC18F
 * 00000001406BC165: xor     ecx, ecx
 * 00000001406BC167: rdsspq  rcx
 * 00000001406BC16C: mov     r8, gs:9D28h
 * 00000001406BC175: add     r8, 8
 * 00000001406BC179: cmp     rcx, r8
 * 00000001406BC17C: jnz     short loc_1406BC18F
 * 00000001406BC17E: mov     rcx, gs:9D20h
 * 00000001406BC187: rstorssp qword ptr [rcx]
 * 00000001406BC18B: saveprevssp
 * 00000001406BC18F: mov     byte ptr gs:85Eh, 0
 * 00000001406BC198: movzx   eax, word ptr gs:86Ch
 * 00000001406BC1A1: cmp     gs:866h, ax
 * 00000001406BC1AA: jz      short loc_1406BC1BE
 * 00000001406BC1AC: mov     gs:866h, ax
 * 00000001406BC1B5: mov     ecx, 48h ; 'H'
 * 00000001406BC1BA: xor     edx, edx
 * 00000001406BC1BC: wrmsr
 * 00000001406BC1BE: btr     word ptr gs:858h, 2
 * 00000001406BC1C9: jnb     short loc_1406BC1D9
 * 00000001406BC1CB: mov     eax, 1
 * 00000001406BC1D0: xor     edx, edx
 * 00000001406BC1D2: mov     ecx, 49h ; 'I'
 * 00000001406BC1D7: wrmsr
 * 00000001406BC1D9: btr     word ptr gs:858h, 5
 * 00000001406BC1E4: jnb     loc_1406BC321
 * 00000001406BC1EA: call    loc_1406BC2FD
 * 00000001406BC1EF: add     rsp, 8
 * 00000001406BC1F3: call    loc_1406BC306
 * 00000001406BC1F8: add     rsp, 8
 * 00000001406BC1FC: call    loc_1406BC1EF
 * 00000001406BC201: add     rsp, 8
 * 00000001406BC205: call    loc_1406BC1F8
 * 00000001406BC20A: add     rsp, 8
 * 00000001406BC20E: call    loc_1406BC201
 * 00000001406BC213: add     rsp, 8
 * 00000001406BC217: call    loc_1406BC20A
 * 00000001406BC21C: add     rsp, 8
 * 00000001406BC220: call    loc_1406BC213
 * 00000001406BC225: add     rsp, 8
 * 00000001406BC229: call    loc_1406BC21C
 * 00000001406BC22E: add     rsp, 8
 * 00000001406BC232: call    loc_1406BC225
 * 00000001406BC237: add     rsp, 8
 * 00000001406BC23B: call    loc_1406BC22E
 * 00000001406BC240: add     rsp, 8
 * 00000001406BC244: call    loc_1406BC237
 * 00000001406BC249: add     rsp, 8
 * 00000001406BC24D: call    loc_1406BC240
 * 00000001406BC252: add     rsp, 8
 * 00000001406BC256: call    loc_1406BC249
 * 00000001406BC25B: add     rsp, 8
 * 00000001406BC25F: call    loc_1406BC252
 * 00000001406BC264: add     rsp, 8
 * 00000001406BC268: call    loc_1406BC25B
 * 00000001406BC26D: add     rsp, 8
 * 00000001406BC271: call    loc_1406BC264
 * 00000001406BC276: add     rsp, 8
 * 00000001406BC27A: call    loc_1406BC26D
 * 00000001406BC27F: add     rsp, 8
 * 00000001406BC283: call    loc_1406BC276
 * 00000001406BC288: add     rsp, 8
 * 00000001406BC28C: call    loc_1406BC27F
 * 00000001406BC291: add     rsp, 8
 * 00000001406BC295: call    loc_1406BC288
 * 00000001406BC29A: add     rsp, 8
 * 00000001406BC29E: call    loc_1406BC291
 * 00000001406BC2A3: add     rsp, 8
 * 00000001406BC2A7: call    loc_1406BC29A
 * 00000001406BC2AC: add     rsp, 8
 * 00000001406BC2B0: call    loc_1406BC2A3
 * 00000001406BC2B5: add     rsp, 8
 * 00000001406BC2B9: call    loc_1406BC2AC
 * 00000001406BC2BE: add     rsp, 8
 * 00000001406BC2C2: call    loc_1406BC2B5
 * 00000001406BC2C7: add     rsp, 8
 * 00000001406BC2CB: call    loc_1406BC2BE
 * 00000001406BC2D0: add     rsp, 8
 * 00000001406BC2D4: call    loc_1406BC2C7
 * 00000001406BC2D9: add     rsp, 8
 * 00000001406BC2DD: call    loc_1406BC2D0
 * 00000001406BC2E2: add     rsp, 8
 * 00000001406BC2E6: call    loc_1406BC2D9
 * 00000001406BC2EB: add     rsp, 8
 * 00000001406BC2EF: call    loc_1406BC2E2
 * 00000001406BC2F4: add     rsp, 8
 * 00000001406BC2F8: call    loc_1406BC2EB
 * 00000001406BC2FD: add     rsp, 8
 * 00000001406BC301: call    loc_1406BC2F4
 * 00000001406BC306: add     rsp, 8
 * 00000001406BC30A: mov     eax, 0DADAh
 * 00000001406BC30F: test    byte ptr gs:85Ch, 8
 * 00000001406BC318: jz      short loc_1406BC321
 * 00000001406BC31A: mov     al, 20h ; ' '
 * 00000001406BC31C: incsspq rax
 * 00000001406BC321: test    word ptr gs:858h, 100h
 * 00000001406BC32C: jz      short loc_1406BC33A
 * 00000001406BC32E: xor     eax, eax
 * 00000001406BC330: xor     edx, edx
 * 00000001406BC332: mov     ecx, 1
 * 00000001406BC337: div     rcx
 * 00000001406BC33A: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001406BC33E: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001406BC342: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001406BC346: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001406BC34A: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001406BC34E: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001406BC352: mov     r11, [rbp+0E8h+var_108]
 * 00000001406BC356: mov     r10, [rbp+0E8h+var_110]
 * 00000001406BC35A: mov     r9, [rbp+0E8h+var_118]
 * 00000001406BC35E: mov     r8, [rbp+0E8h+var_120]
 * 00000001406BC362: mov     rdx, [rbp+0E8h+var_128]
 * 00000001406BC366: mov     rcx, [rbp+0E8h+var_130]
 * 00000001406BC36A: mov     rax, [rbp+0E8h+var_138]
 * 00000001406BC36E: mov     rsp, rbp
 * 00000001406BC371: mov     rbp, [rbp+0E8h+var_10]
 * 00000001406BC378: add     rsp, 0E8h
 * 00000001406BC37F: test    cs:KiKvaShadow, 1
 * 00000001406BC386: jz      short loc_1406BC38D
 * 00000001406BC388: jmp     KiKernelExit
 * 00000001406BC38D: test    word ptr gs:858h, 200h
 * 00000001406BC398: jz      short loc_1406BC39F
 * 00000001406BC39A: verw    [rsp+arg_18]
 * 00000001406BC39F: swapgs
 * 00000001406BC3A2: iretq
 * 00000001406BC3A4: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001406BC3A8: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001406BC3AC: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001406BC3B0: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001406BC3B4: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001406BC3B8: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001406BC3BC: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001406BC3C0: mov     r11, [rbp+0E8h+var_108]
 * 00000001406BC3C4: mov     r10, [rbp+0E8h+var_110]
 * 00000001406BC3C8: mov     r9, [rbp+0E8h+var_118]
 * 00000001406BC3CC: mov     r8, [rbp+0E8h+var_120]
 * 00000001406BC3D0: mov     rdx, [rbp+0E8h+var_128]
 * 00000001406BC3D4: mov     rcx, [rbp+0E8h+var_130]
 * 00000001406BC3D8: mov     rax, [rbp+0E8h+var_138]
 * 00000001406BC3DC: mov     rsp, rbp
 * 00000001406BC3DF: mov     rbp, [rbp+0E8h+var_10]
 * 00000001406BC3E6: add     rsp, 0E8h
 * 00000001406BC3ED: iretq
 * 00000001406BC3EF: mov     r10, [rbp+0E8h]
 * 00000001406BC3F6: mov     r9, gs:8D88h
 * 00000001406BC3FF: movzx   r8, [rbp+0E8h+NewIrql]
 * 00000001406BC404: mov     ecx, 7Fh
 * 00000001406BC409: mov     edx, 20h ; ' '
 * 00000001406BC40E: call    KiBugCheckDispatch
 */
