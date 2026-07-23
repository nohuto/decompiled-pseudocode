/*
 * XREFs of KxDebugTrapOrFault @ 0x1406B7240
 * Callers:
 *     KiDebugTrapOrFault @ 0x1406B7080 (KiDebugTrapOrFault.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x14040ED30 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404F9550 (KiSaveDebugRegisterState.c)
 *     KxDebugTrapOrFault @ 0x1406B7240 (KxDebugTrapOrFault.c)
 *     KiExceptionDispatch @ 0x1406BFC00 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406C0640 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KxDebugTrapOrFault @ 0x1406B7240
 * Reason: Hex-Rays returned no pseudocode for 0x1406B7240
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B7240: sub     rsp, 8
 * 00000001406B7244: push    rbp
 * 00000001406B7245: sub     rsp, 158h
 * 00000001406B724C: lea     rbp, [rsp+80h]
 * 00000001406B7254: mov     [rbp+0E8h+var_13D], 1
 * 00000001406B7258: mov     [rbp+0E8h+var_138], rax
 * 00000001406B725C: mov     [rbp+0E8h+var_130], rcx
 * 00000001406B7260: mov     [rbp+0E8h+var_128], rdx
 * 00000001406B7264: mov     [rbp+0E8h+var_120], r8
 * 00000001406B7268: mov     [rbp+0E8h+var_118], r9
 * 00000001406B726C: mov     [rbp+0E8h+var_110], r10
 * 00000001406B7270: mov     [rbp+0E8h+var_108], r11
 * 00000001406B7274: test    [rbp+0E8h+arg_0], 1
 * 00000001406B727B: jnz     short loc_1406B72B5
 * 00000001406B727D: xor     edx, edx
 * 00000001406B727F: rdsspq  rdx
 * 00000001406B7284: mov     [rbp+0E8h+var_90], rdx
 * 00000001406B7288: lfence
 * 00000001406B728B: test    byte ptr gs:858h, 1
 * 00000001406B7294: jnz     short loc_1406B729E
 * 00000001406B7296: lfence
 * 00000001406B7299: jmp     loc_1406B7526
 * 00000001406B729E: movzx   eax, word ptr gs:866h
 * 00000001406B72A7: mov     ecx, 48h ; 'H'
 * 00000001406B72AC: xor     edx, edx
 * 00000001406B72AE: wrmsr
 * 00000001406B72B0: jmp     loc_1406B7526
 * 00000001406B72B5: test    cs:KiKvaShadow, 1
 * 00000001406B72BC: jnz     short loc_1406B72C1
 * 00000001406B72BE: swapgs
 * 00000001406B72C1: lfence
 * 00000001406B72C4: mov     rcx, gs:9D28h
 * 00000001406B72CD: test    rcx, rcx
 * 00000001406B72D0: jz      short loc_1406B72F1
 * 00000001406B72D2: rdsspq  rdx
 * 00000001406B72D7: mov     r10, gs:9D20h
 * 00000001406B72E0: add     r10, 8
 * 00000001406B72E4: cmp     rdx, r10
 * 00000001406B72E7: jnz     short loc_1406B72F1
 * 00000001406B72E9: rstorssp qword ptr [rcx]
 * 00000001406B72ED: saveprevssp
 * 00000001406B72F1: mov     r10, gs:188h
 * 00000001406B72FA: mov     rcx, gs:188h
 * 00000001406B7303: mov     rcx, [rcx+220h]
 * 00000001406B730A: mov     rcx, [rcx+760h]
 * 00000001406B7311: mov     gs:850h, rcx
 * 00000001406B731A: mov     cx, gs:862h
 * 00000001406B7323: mov     gs:864h, cx
 * 00000001406B732C: mov     cl, gs:858h
 * 00000001406B7334: mov     gs:85Ah, cl
 * 00000001406B733C: movzx   eax, word ptr gs:868h
 * 00000001406B7345: cmp     gs:866h, ax
 * 00000001406B734E: jz      short loc_1406B7362
 * 00000001406B7350: mov     gs:866h, ax
 * 00000001406B7359: mov     ecx, 48h ; 'H'
 * 00000001406B735E: xor     edx, edx
 * 00000001406B7360: wrmsr
 * 00000001406B7362: movzx   edx, byte ptr gs:858h
 * 00000001406B736B: test    edx, 8
 * 00000001406B7371: jz      short loc_1406B738A
 * 00000001406B7373: mov     eax, 1
 * 00000001406B7378: xor     edx, edx
 * 00000001406B737A: mov     ecx, 49h ; 'I'
 * 00000001406B737F: wrmsr
 * 00000001406B7381: movzx   edx, byte ptr gs:858h
 * 00000001406B738A: test    edx, 2
 * 00000001406B7390: jz      loc_1406B74CD
 * 00000001406B7396: call    loc_1406B74A9
 * 00000001406B739B: add     rsp, 8
 * 00000001406B739F: call    loc_1406B74B2
 * 00000001406B73A4: add     rsp, 8
 * 00000001406B73A8: call    loc_1406B739B
 * 00000001406B73AD: add     rsp, 8
 * 00000001406B73B1: call    loc_1406B73A4
 * 00000001406B73B6: add     rsp, 8
 * 00000001406B73BA: call    loc_1406B73AD
 * 00000001406B73BF: add     rsp, 8
 * 00000001406B73C3: call    loc_1406B73B6
 * 00000001406B73C8: add     rsp, 8
 * 00000001406B73CC: call    loc_1406B73BF
 * 00000001406B73D1: add     rsp, 8
 * 00000001406B73D5: call    loc_1406B73C8
 * 00000001406B73DA: add     rsp, 8
 * 00000001406B73DE: call    loc_1406B73D1
 * 00000001406B73E3: add     rsp, 8
 * 00000001406B73E7: call    loc_1406B73DA
 * 00000001406B73EC: add     rsp, 8
 * 00000001406B73F0: call    loc_1406B73E3
 * 00000001406B73F5: add     rsp, 8
 * 00000001406B73F9: call    loc_1406B73EC
 * 00000001406B73FE: add     rsp, 8
 * 00000001406B7402: call    loc_1406B73F5
 * 00000001406B7407: add     rsp, 8
 * 00000001406B740B: call    loc_1406B73FE
 * 00000001406B7410: add     rsp, 8
 * 00000001406B7414: call    loc_1406B7407
 * 00000001406B7419: add     rsp, 8
 * 00000001406B741D: call    loc_1406B7410
 * 00000001406B7422: add     rsp, 8
 * 00000001406B7426: call    loc_1406B7419
 * 00000001406B742B: add     rsp, 8
 * 00000001406B742F: call    loc_1406B7422
 * 00000001406B7434: add     rsp, 8
 * 00000001406B7438: call    loc_1406B742B
 * 00000001406B743D: add     rsp, 8
 * 00000001406B7441: call    loc_1406B7434
 * 00000001406B7446: add     rsp, 8
 * 00000001406B744A: call    loc_1406B743D
 * 00000001406B744F: add     rsp, 8
 * 00000001406B7453: call    loc_1406B7446
 * 00000001406B7458: add     rsp, 8
 * 00000001406B745C: call    loc_1406B744F
 * 00000001406B7461: add     rsp, 8
 * 00000001406B7465: call    loc_1406B7458
 * 00000001406B746A: add     rsp, 8
 * 00000001406B746E: call    loc_1406B7461
 * 00000001406B7473: add     rsp, 8
 * 00000001406B7477: call    loc_1406B746A
 * 00000001406B747C: add     rsp, 8
 * 00000001406B7480: call    loc_1406B7473
 * 00000001406B7485: add     rsp, 8
 * 00000001406B7489: call    loc_1406B747C
 * 00000001406B748E: add     rsp, 8
 * 00000001406B7492: call    loc_1406B7485
 * 00000001406B7497: add     rsp, 8
 * 00000001406B749B: call    loc_1406B748E
 * 00000001406B74A0: add     rsp, 8
 * 00000001406B74A4: call    loc_1406B7497
 * 00000001406B74A9: add     rsp, 8
 * 00000001406B74AD: call    loc_1406B74A0
 * 00000001406B74B2: add     rsp, 8
 * 00000001406B74B6: mov     eax, 0DADAh
 * 00000001406B74BB: test    byte ptr gs:85Ch, 8
 * 00000001406B74C4: jz      short loc_1406B74CD
 * 00000001406B74C6: mov     al, 20h ; ' '
 * 00000001406B74C8: incsspq rax
 * 00000001406B74CD: test    edx, 80h
 * 00000001406B74D3: jz      short loc_1406B74DD
 * 00000001406B74D5: lfence
 * 00000001406B74D8: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406B74DD: lfence
 * 00000001406B74E0: mov     byte ptr gs:85Eh, 0
 * 00000001406B74E9: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406B74F0: jz      short loc_1406B7511
 * 00000001406B74F2: mov     ecx, 6A7h
 * 00000001406B74F7: rdmsr
 * 00000001406B74F9: cmp     edx, 0
 * 00000001406B74FC: jz      short loc_1406B7511
 * 00000001406B74FE: mov     ecx, edx
 * 00000001406B7500: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406B7506: cmp     edx, ecx
 * 00000001406B7508: jz      short loc_1406B7511
 * 00000001406B750A: mov     ecx, 6A7h
 * 00000001406B750F: wrmsr
 * 00000001406B7511: test    byte ptr [r10+3], 3
 * 00000001406B7516: mov     [rbp+0E8h+var_68], 0
 * 00000001406B751F: jz      short loc_1406B7526
 * 00000001406B7521: call    KiSaveDebugRegisterState
 * 00000001406B7526: cld
 * 00000001406B7527: stmxcsr [rbp+0E8h+var_13C]
 * 00000001406B752B: ldmxcsr dword ptr gs:180h
 * 00000001406B7534: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001406B7538: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001406B753C: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001406B7540: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001406B7544: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001406B7548: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001406B754C: test    [rbp+0E8h+arg_0], 1
 * 00000001406B7553: jz      short loc_1406B755A
 * 00000001406B7555: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406B755A: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B7561: jz      short loc_1406B756F
 * 00000001406B7563: test    [rbp+0E8h+arg_0], 1
 * 00000001406B756A: jz      short loc_1406B756F
 * 00000001406B756C: stac
 * 00000001406B756F: test    [rbp+0E8h+arg_8], 200h
 * 00000001406B7579: jz      short loc_1406B757C
 * 00000001406B757B: sti
 * 00000001406B757C: test    cs:KiCpuTracingFlags, 2
 * 00000001406B7586: jz      short loc_1406B759B
 * 00000001406B7588: mov     ecx, 1D9h
 * 00000001406B758D: rdmsr
 * 00000001406B758F: or      eax, 1
 * 00000001406B7592: wrmsr
 * 00000001406B7594: xor     edx, edx
 * 00000001406B7596: jmp     loc_1406B766A
 * 00000001406B759B: xor     edx, edx
 * 00000001406B759D: test    [rbp+0E8h+arg_8], 100h
 * 00000001406B75A7: jz      loc_1406B766A
 * 00000001406B75AD: test    byte ptr gs:9122h, 2
 * 00000001406B75B6: jz      loc_1406B766A
 * 00000001406B75BC: test    [rbp+0E8h+arg_0], 1
 * 00000001406B75C3: jnz     short loc_1406B761C
 * 00000001406B75C5: mov     rax, dr7
 * 00000001406B75C8: test    ax, 200h
 * 00000001406B75CC: jz      loc_1406B766A
 * 00000001406B75D2: test    ax, 100h
 * 00000001406B75D6: jz      loc_1406B766A
 * 00000001406B75DC: mov     r8d, cs:KiLastBranchTOSMSR
 * 00000001406B75E3: or      r8d, r8d
 * 00000001406B75E6: jz      short loc_1406B75F0
 * 00000001406B75E8: mov     ecx, r8d
 * 00000001406B75EB: rdmsr
 * 00000001406B75ED: mov     r8d, eax
 * 00000001406B75F0: mov     ecx, cs:KiLastBranchFromBaseMSR
 * 00000001406B75F6: add     ecx, r8d
 * 00000001406B75F9: rdmsr
 * 00000001406B75FB: mov     r9d, eax
 * 00000001406B75FE: shl     rdx, 20h
 * 00000001406B7602: mov     ecx, cs:KiLastBranchToBaseMSR
 * 00000001406B7608: or      r9, rdx
 * 00000001406B760B: add     ecx, r8d
 * 00000001406B760E: rdmsr
 * 00000001406B7610: mov     r10d, eax
 * 00000001406B7613: shl     rdx, 20h
 * 00000001406B7617: or      r10, rdx
 * 00000001406B761A: jmp     short loc_1406B7665
 * 00000001406B761C: test    [rbp+0E8h+var_68], 200h
 * 00000001406B7625: jz      short loc_1406B766A
 * 00000001406B7627: test    [rbp+0E8h+var_68], 100h
 * 00000001406B7630: jz      short loc_1406B766A
 * 00000001406B7632: and     [rbp+0E8h+var_40], 0
 * 00000001406B763A: and     [rbp+0E8h+var_48], 0
 * 00000001406B7642: mov     rcx, cs:MmUserProbeAddress
 * 00000001406B7649: mov     r9, [rbp+0E8h+var_50]
 * 00000001406B7650: cmp     r9, rcx
 * 00000001406B7653: cmovnb  r9, rcx
 * 00000001406B7657: mov     r10, [rbp+0E8h+var_58]
 * 00000001406B765E: cmp     r10, rcx
 * 00000001406B7661: cmovnb  r10, rcx
 * 00000001406B7665: mov     edx, 2
 * 00000001406B766A: mov     ecx, 80000004h
 * 00000001406B766F: and     [rbp+0E8h+arg_8], 0FFFFFEFFh
 * 00000001406B7679: mov     r8, [rbp+0E8h]
 * 00000001406B7680: call    KiExceptionDispatch
 * 00000001406B7685: nop
 * 00000001406B7686: retn
 */
