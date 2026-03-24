/*
 * XREFs of KiIpiInterrupt @ 0x1406A6F70
 * Callers:
 *     KiIpiInterruptShadow @ 0x140BAB240 (KiIpiInterruptShadow.c)
 * Callees:
 *     KiEndInterruptCycleAccumulation @ 0x14028EFB0 (KiEndInterruptCycleAccumulation.c)
 *     KiUpdateStibpPairing @ 0x1403E3F50 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403EF6C0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiCheckForSListAddress @ 0x140400C70 (KiCheckForSListAddress.c)
 *     HalPerformEndOfInterrupt @ 0x14041A4A0 (HalPerformEndOfInterrupt.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x140429DB0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x1404F9500 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1404F9580 (KiSaveDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405B3940 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x1405B8E30 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1405BB410 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x14069FCF0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406A4590 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1406A6F30 (KiDpcInterruptBypass.c)
 *     KiIpiInterrupt @ 0x1406A6F70 (KiIpiInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x1406A76B0 (KiIpiInterruptSubDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406B4440 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiIpiInterrupt @ 0x1406A6F70
 * Reason: Hex-Rays returned no pseudocode for 0x1406A6F70
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406A6F70: sub     rsp, 8
 * 00000001406A6F74: push    rbp
 * 00000001406A6F75: push    rsi
 * 00000001406A6F76: sub     rsp, 150h
 * 00000001406A6F7D: lea     rbp, [rsp+80h]
 * 00000001406A6F85: mov     [rbp+0E8h+var_13D], 0
 * 00000001406A6F89: mov     [rbp+0E8h+var_138], rax
 * 00000001406A6F8D: mov     [rbp+0E8h+var_130], rcx
 * 00000001406A6F91: mov     [rbp+0E8h+var_128], rdx
 * 00000001406A6F95: mov     [rbp+0E8h+var_120], r8
 * 00000001406A6F99: mov     [rbp+0E8h+var_118], r9
 * 00000001406A6F9D: mov     [rbp+0E8h+var_110], r10
 * 00000001406A6FA1: mov     [rbp+0E8h+var_108], r11
 * 00000001406A6FA5: test    [rbp+0E8h+arg_0], 1
 * 00000001406A6FAC: jnz     short loc_1406A6FE6
 * 00000001406A6FAE: xor     edx, edx
 * 00000001406A6FB0: rdsspq  rdx
 * 00000001406A6FB5: mov     [rbp+0E8h+var_90], rdx
 * 00000001406A6FB9: lfence
 * 00000001406A6FBC: test    byte ptr gs:858h, 1
 * 00000001406A6FC5: jnz     short loc_1406A6FCF
 * 00000001406A6FC7: lfence
 * 00000001406A6FCA: jmp     loc_1406A7257
 * 00000001406A6FCF: movzx   eax, word ptr gs:866h
 * 00000001406A6FD8: mov     ecx, 48h ; 'H'
 * 00000001406A6FDD: xor     edx, edx
 * 00000001406A6FDF: wrmsr
 * 00000001406A6FE1: jmp     loc_1406A7257
 * 00000001406A6FE6: test    cs:KiKvaShadow, 1
 * 00000001406A6FED: jnz     short loc_1406A6FF2
 * 00000001406A6FEF: swapgs
 * 00000001406A6FF2: lfence
 * 00000001406A6FF5: mov     rcx, gs:9D28h
 * 00000001406A6FFE: test    rcx, rcx
 * 00000001406A7001: jz      short loc_1406A7022
 * 00000001406A7003: rdsspq  rdx
 * 00000001406A7008: mov     r10, gs:9D20h
 * 00000001406A7011: add     r10, 8
 * 00000001406A7015: cmp     rdx, r10
 * 00000001406A7018: jnz     short loc_1406A7022
 * 00000001406A701A: rstorssp qword ptr [rcx]
 * 00000001406A701E: saveprevssp
 * 00000001406A7022: mov     r10, gs:188h
 * 00000001406A702B: mov     rcx, gs:188h
 * 00000001406A7034: mov     rcx, [rcx+220h]
 * 00000001406A703B: mov     rcx, [rcx+760h]
 * 00000001406A7042: mov     gs:850h, rcx
 * 00000001406A704B: mov     cx, gs:862h
 * 00000001406A7054: mov     gs:864h, cx
 * 00000001406A705D: mov     cl, gs:858h
 * 00000001406A7065: mov     gs:85Ah, cl
 * 00000001406A706D: movzx   eax, word ptr gs:868h
 * 00000001406A7076: cmp     gs:866h, ax
 * 00000001406A707F: jz      short loc_1406A7093
 * 00000001406A7081: mov     gs:866h, ax
 * 00000001406A708A: mov     ecx, 48h ; 'H'
 * 00000001406A708F: xor     edx, edx
 * 00000001406A7091: wrmsr
 * 00000001406A7093: movzx   edx, byte ptr gs:858h
 * 00000001406A709C: test    edx, 8
 * 00000001406A70A2: jz      short loc_1406A70BB
 * 00000001406A70A4: mov     eax, 1
 * 00000001406A70A9: xor     edx, edx
 * 00000001406A70AB: mov     ecx, 49h ; 'I'
 * 00000001406A70B0: wrmsr
 * 00000001406A70B2: movzx   edx, byte ptr gs:858h
 * 00000001406A70BB: test    edx, 2
 * 00000001406A70C1: jz      loc_1406A71FE
 * 00000001406A70C7: call    loc_1406A71DA
 * 00000001406A70CC: add     rsp, 8
 * 00000001406A70D0: call    loc_1406A71E3
 * 00000001406A70D5: add     rsp, 8
 * 00000001406A70D9: call    loc_1406A70CC
 * 00000001406A70DE: add     rsp, 8
 * 00000001406A70E2: call    loc_1406A70D5
 * 00000001406A70E7: add     rsp, 8
 * 00000001406A70EB: call    loc_1406A70DE
 * 00000001406A70F0: add     rsp, 8
 * 00000001406A70F4: call    loc_1406A70E7
 * 00000001406A70F9: add     rsp, 8
 * 00000001406A70FD: call    loc_1406A70F0
 * 00000001406A7102: add     rsp, 8
 * 00000001406A7106: call    loc_1406A70F9
 * 00000001406A710B: add     rsp, 8
 * 00000001406A710F: call    loc_1406A7102
 * 00000001406A7114: add     rsp, 8
 * 00000001406A7118: call    loc_1406A710B
 * 00000001406A711D: add     rsp, 8
 * 00000001406A7121: call    loc_1406A7114
 * 00000001406A7126: add     rsp, 8
 * 00000001406A712A: call    loc_1406A711D
 * 00000001406A712F: add     rsp, 8
 * 00000001406A7133: call    loc_1406A7126
 * 00000001406A7138: add     rsp, 8
 * 00000001406A713C: call    loc_1406A712F
 * 00000001406A7141: add     rsp, 8
 * 00000001406A7145: call    loc_1406A7138
 * 00000001406A714A: add     rsp, 8
 * 00000001406A714E: call    loc_1406A7141
 * 00000001406A7153: add     rsp, 8
 * 00000001406A7157: call    loc_1406A714A
 * 00000001406A715C: add     rsp, 8
 * 00000001406A7160: call    loc_1406A7153
 * 00000001406A7165: add     rsp, 8
 * 00000001406A7169: call    loc_1406A715C
 * 00000001406A716E: add     rsp, 8
 * 00000001406A7172: call    loc_1406A7165
 * 00000001406A7177: add     rsp, 8
 * 00000001406A717B: call    loc_1406A716E
 * 00000001406A7180: add     rsp, 8
 * 00000001406A7184: call    loc_1406A7177
 * 00000001406A7189: add     rsp, 8
 * 00000001406A718D: call    loc_1406A7180
 * 00000001406A7192: add     rsp, 8
 * 00000001406A7196: call    loc_1406A7189
 * 00000001406A719B: add     rsp, 8
 * 00000001406A719F: call    loc_1406A7192
 * 00000001406A71A4: add     rsp, 8
 * 00000001406A71A8: call    loc_1406A719B
 * 00000001406A71AD: add     rsp, 8
 * 00000001406A71B1: call    loc_1406A71A4
 * 00000001406A71B6: add     rsp, 8
 * 00000001406A71BA: call    loc_1406A71AD
 * 00000001406A71BF: add     rsp, 8
 * 00000001406A71C3: call    loc_1406A71B6
 * 00000001406A71C8: add     rsp, 8
 * 00000001406A71CC: call    loc_1406A71BF
 * 00000001406A71D1: add     rsp, 8
 * 00000001406A71D5: call    loc_1406A71C8
 * 00000001406A71DA: add     rsp, 8
 * 00000001406A71DE: call    loc_1406A71D1
 * 00000001406A71E3: add     rsp, 8
 * 00000001406A71E7: mov     eax, 0DADAh
 * 00000001406A71EC: test    byte ptr gs:85Ch, 8
 * 00000001406A71F5: jz      short loc_1406A71FE
 * 00000001406A71F7: mov     al, 20h ; ' '
 * 00000001406A71F9: incsspq rax
 * 00000001406A71FE: test    edx, 80h
 * 00000001406A7204: jz      short loc_1406A720E
 * 00000001406A7206: lfence
 * 00000001406A7209: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406A720E: lfence
 * 00000001406A7211: mov     byte ptr gs:85Eh, 0
 * 00000001406A721A: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406A7221: jz      short loc_1406A7242
 * 00000001406A7223: mov     ecx, 6A7h
 * 00000001406A7228: rdmsr
 * 00000001406A722A: cmp     edx, 0
 * 00000001406A722D: jz      short loc_1406A7242
 * 00000001406A722F: mov     ecx, edx
 * 00000001406A7231: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406A7237: cmp     edx, ecx
 * 00000001406A7239: jz      short loc_1406A7242
 * 00000001406A723B: mov     ecx, 6A7h
 * 00000001406A7240: wrmsr
 * 00000001406A7242: test    byte ptr [r10+3], 3
 * 00000001406A7247: mov     [rbp+0E8h+var_68], 0
 * 00000001406A7250: jz      short loc_1406A7257
 * 00000001406A7252: call    KiSaveDebugRegisterState
 * 00000001406A7257: cld
 * 00000001406A7258: stmxcsr [rbp+0E8h+var_13C]
 * 00000001406A725C: ldmxcsr dword ptr gs:180h
 * 00000001406A7265: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001406A7269: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001406A726D: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001406A7271: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001406A7275: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001406A7279: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001406A727D: test    [rbp+0E8h+arg_0], 1
 * 00000001406A7284: jz      short loc_1406A728B
 * 00000001406A7286: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406A728B: cmp     byte ptr gs:87DAh, 0
 * 00000001406A7294: jz      short loc_1406A729B
 * 00000001406A7296: call    KeWakeProcessor
 * 00000001406A729B: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001406A72A2: cmp     rax, [rbp+0E8h]
 * 00000001406A72A9: jnb     short loc_1406A72C4
 * 00000001406A72AB: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001406A72B2: cmp     rax, [rbp+0E8h]
 * 00000001406A72B9: jb      short loc_1406A72C4
 * 00000001406A72BB: lea     rcx, [rbp+0E8h+var_168]
 * 00000001406A72BF: call    KiCheckForSListAddress
 * 00000001406A72C4: xor     esi, esi
 * 00000001406A72C6: inc     dword ptr gs:87C0h
 * 00000001406A72CE: mov     rcx, gs:9158h
 * 00000001406A72D7: mov     rax, rcx
 * 00000001406A72DA: mov     edx, cs:KeIsrStackSize
 * 00000001406A72E0: sub     rax, rdx
 * 00000001406A72E3: mov     rdx, rsp
 * 00000001406A72E6: cmp     rax, rsp
 * 00000001406A72E9: ja      short loc_1406A72F0
 * 00000001406A72EB: cmp     rsp, rcx
 * 00000001406A72EE: jb      short loc_1406A72FC
 * 00000001406A72F0: cmp     cs:KiBugCheckActive, 0
 * 00000001406A72F7: jnz     short loc_1406A72FC
 * 00000001406A72F9: mov     rsp, rcx
 * 00000001406A72FC: sub     rsp, 20h
 * 00000001406A7300: mov     qword ptr [rsp+108h+var_F8], rdx
 * 00000001406A7305: call    KiIpiInterruptSubDispatch
 * 00000001406A730A: mov     rsp, qword ptr [rsp+108h+var_F8]
 * 00000001406A730F: mov     rcx, rsi
 * 00000001406A7312: call    HalPerformEndOfInterrupt
 * 00000001406A7317: mov     rcx, gs:20h
 * 00000001406A7320: movzx   edx, [rbp+0E8h+var_13F]
 * 00000001406A7324: call    KiEndInterruptCycleAccumulation
 * 00000001406A7329: test    al, al
 * 00000001406A732B: jz      short loc_1406A7332
 * 00000001406A732D: call    KiDpcInterruptBypass
 * 00000001406A7332: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001406A7336: cmp     cs:KiIrqlFlags, 0
 * 00000001406A733D: jz      short loc_1406A7346
 * 00000001406A733F: call    KzSetIrqlUnsafe
 * 00000001406A7344: jmp     short loc_1406A734A
 * 00000001406A7346: mov     cr8, rcx
 * 00000001406A734A: mov     rsi, [rbp+0E8h+var_18]
 * 00000001406A7351: test    [rbp+0E8h+arg_0], 1
 * 00000001406A7358: jz      loc_1406A7653
 * 00000001406A735E: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406A7365: jz      short loc_1406A736A
 * 00000001406A7367: stac
 * 00000001406A736A: mov     rcx, gs:188h
 * 00000001406A7373: test    byte ptr [rcx+0C2h], 3
 * 00000001406A737A: jz      short loc_1406A7397
 * 00000001406A737C: mov     ecx, 1
 * 00000001406A7381: mov     cr8, rcx
 * 00000001406A7385: sti
 * 00000001406A7386: call    KiInitiateUserApc
 * 00000001406A738B: cli
 * 00000001406A738C: mov     ecx, 0
 * 00000001406A7391: mov     cr8, rcx
 * 00000001406A7395: jmp     short loc_1406A736A
 * 00000001406A7397: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406A739C: test    eax, eax
 * 00000001406A739E: mov     rax, [rbp+0E8h+var_138]
 * 00000001406A73A2: jnz     short loc_1406A736A
 * 00000001406A73A4: test    byte ptr gs:860h, 2
 * 00000001406A73AD: jz      short loc_1406A73B6
 * 00000001406A73AF: xor     ecx, ecx
 * 00000001406A73B1: call    KiUpdateStibpPairing
 * 00000001406A73B6: mov     rcx, gs:188h
 * 00000001406A73BF: test    dword ptr [rcx], 8000000h
 * 00000001406A73C5: jz      short loc_1406A73CC
 * 00000001406A73C7: call    KiRestoreSetContextState
 * 00000001406A73CC: mov     rcx, gs:188h
 * 00000001406A73D5: test    dword ptr [rcx], 10000h
 * 00000001406A73DB: jz      short loc_1406A73F1
 * 00000001406A73DD: test    byte ptr [rcx+2], 1
 * 00000001406A73E1: jz      short loc_1406A73F1
 * 00000001406A73E3: call    KiCopyCounters
 * 00000001406A73E8: mov     rcx, gs:188h
 * 00000001406A73F1: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001406A73F5: cmp     [rbp+0E8h+var_68], 0
 * 00000001406A73FD: jz      short loc_1406A7404
 * 00000001406A73FF: call    KiRestoreDebugRegisterState
 * 00000001406A7404: mov     rcx, gs:188h
 * 00000001406A740D: bt      dword ptr [rcx+74h], 16h
 * 00000001406A7412: jnb     short loc_1406A743E
 * 00000001406A7414: xor     ecx, ecx
 * 00000001406A7416: rdsspq  rcx
 * 00000001406A741B: mov     r8, gs:9D28h
 * 00000001406A7424: add     r8, 8
 * 00000001406A7428: cmp     rcx, r8
 * 00000001406A742B: jnz     short loc_1406A743E
 * 00000001406A742D: mov     rcx, gs:9D20h
 * 00000001406A7436: rstorssp qword ptr [rcx]
 * 00000001406A743A: saveprevssp
 * 00000001406A743E: mov     byte ptr gs:85Eh, 0
 * 00000001406A7447: movzx   eax, word ptr gs:86Ch
 * 00000001406A7450: cmp     gs:866h, ax
 * 00000001406A7459: jz      short loc_1406A746D
 * 00000001406A745B: mov     gs:866h, ax
 * 00000001406A7464: mov     ecx, 48h ; 'H'
 * 00000001406A7469: xor     edx, edx
 * 00000001406A746B: wrmsr
 * 00000001406A746D: btr     word ptr gs:858h, 2
 * 00000001406A7478: jnb     short loc_1406A7488
 * 00000001406A747A: mov     eax, 1
 * 00000001406A747F: xor     edx, edx
 * 00000001406A7481: mov     ecx, 49h ; 'I'
 * 00000001406A7486: wrmsr
 * 00000001406A7488: btr     word ptr gs:858h, 5
 * 00000001406A7493: jnb     loc_1406A75D0
 * 00000001406A7499: call    loc_1406A75AC
 * 00000001406A749E: add     rsp, 8
 * 00000001406A74A2: call    loc_1406A75B5
 * 00000001406A74A7: add     rsp, 8
 * 00000001406A74AB: call    loc_1406A749E
 * 00000001406A74B0: add     rsp, 8
 * 00000001406A74B4: call    loc_1406A74A7
 * 00000001406A74B9: add     rsp, 8
 * 00000001406A74BD: call    loc_1406A74B0
 * 00000001406A74C2: add     rsp, 8
 * 00000001406A74C6: call    loc_1406A74B9
 * 00000001406A74CB: add     rsp, 8
 * 00000001406A74CF: call    loc_1406A74C2
 * 00000001406A74D4: add     rsp, 8
 * 00000001406A74D8: call    loc_1406A74CB
 * 00000001406A74DD: add     rsp, 8
 * 00000001406A74E1: call    loc_1406A74D4
 * 00000001406A74E6: add     rsp, 8
 * 00000001406A74EA: call    loc_1406A74DD
 * 00000001406A74EF: add     rsp, 8
 * 00000001406A74F3: call    loc_1406A74E6
 * 00000001406A74F8: add     rsp, 8
 * 00000001406A74FC: call    loc_1406A74EF
 * 00000001406A7501: add     rsp, 8
 * 00000001406A7505: call    loc_1406A74F8
 * 00000001406A750A: add     rsp, 8
 * 00000001406A750E: call    loc_1406A7501
 * 00000001406A7513: add     rsp, 8
 * 00000001406A7517: call    loc_1406A750A
 * 00000001406A751C: add     rsp, 8
 * 00000001406A7520: call    loc_1406A7513
 * 00000001406A7525: add     rsp, 8
 * 00000001406A7529: call    loc_1406A751C
 * 00000001406A752E: add     rsp, 8
 * 00000001406A7532: call    loc_1406A7525
 * 00000001406A7537: add     rsp, 8
 * 00000001406A753B: call    loc_1406A752E
 * 00000001406A7540: add     rsp, 8
 * 00000001406A7544: call    loc_1406A7537
 * 00000001406A7549: add     rsp, 8
 * 00000001406A754D: call    loc_1406A7540
 * 00000001406A7552: add     rsp, 8
 * 00000001406A7556: call    loc_1406A7549
 * 00000001406A755B: add     rsp, 8
 * 00000001406A755F: call    loc_1406A7552
 * 00000001406A7564: add     rsp, 8
 * 00000001406A7568: call    loc_1406A755B
 * 00000001406A756D: add     rsp, 8
 * 00000001406A7571: call    loc_1406A7564
 * 00000001406A7576: add     rsp, 8
 * 00000001406A757A: call    loc_1406A756D
 * 00000001406A757F: add     rsp, 8
 * 00000001406A7583: call    loc_1406A7576
 * 00000001406A7588: add     rsp, 8
 * 00000001406A758C: call    loc_1406A757F
 * 00000001406A7591: add     rsp, 8
 * 00000001406A7595: call    loc_1406A7588
 * 00000001406A759A: add     rsp, 8
 * 00000001406A759E: call    loc_1406A7591
 * 00000001406A75A3: add     rsp, 8
 * 00000001406A75A7: call    loc_1406A759A
 * 00000001406A75AC: add     rsp, 8
 * 00000001406A75B0: call    loc_1406A75A3
 * 00000001406A75B5: add     rsp, 8
 * 00000001406A75B9: mov     eax, 0DADAh
 * 00000001406A75BE: test    byte ptr gs:85Ch, 8
 * 00000001406A75C7: jz      short loc_1406A75D0
 * 00000001406A75C9: mov     al, 20h ; ' '
 * 00000001406A75CB: incsspq rax
 * 00000001406A75D0: test    word ptr gs:858h, 100h
 * 00000001406A75DB: jz      short loc_1406A75E9
 * 00000001406A75DD: xor     eax, eax
 * 00000001406A75DF: xor     edx, edx
 * 00000001406A75E1: mov     ecx, 1
 * 00000001406A75E6: div     rcx
 * 00000001406A75E9: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001406A75ED: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001406A75F1: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001406A75F5: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001406A75F9: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001406A75FD: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001406A7601: mov     r11, [rbp+0E8h+var_108]
 * 00000001406A7605: mov     r10, [rbp+0E8h+var_110]
 * 00000001406A7609: mov     r9, [rbp+0E8h+var_118]
 * 00000001406A760D: mov     r8, [rbp+0E8h+var_120]
 * 00000001406A7611: mov     rdx, [rbp+0E8h+var_128]
 * 00000001406A7615: mov     rcx, [rbp+0E8h+var_130]
 * 00000001406A7619: mov     rax, [rbp+0E8h+var_138]
 * 00000001406A761D: mov     rsp, rbp
 * 00000001406A7620: mov     rbp, [rbp+0E8h+var_10]
 * 00000001406A7627: add     rsp, 0E8h
 * 00000001406A762E: test    cs:KiKvaShadow, 1
 * 00000001406A7635: jz      short loc_1406A763C
 * 00000001406A7637: jmp     KiKernelExit
 * 00000001406A763C: test    word ptr gs:858h, 200h
 * 00000001406A7647: jz      short loc_1406A764E
 * 00000001406A7649: verw    [rsp+arg_18]
 * 00000001406A764E: swapgs
 * 00000001406A7651: iretq
 * 00000001406A7653: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001406A7657: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001406A765B: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001406A765F: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001406A7663: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001406A7667: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001406A766B: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001406A766F: mov     r11, [rbp+0E8h+var_108]
 * 00000001406A7673: mov     r10, [rbp+0E8h+var_110]
 * 00000001406A7677: mov     r9, [rbp+0E8h+var_118]
 * 00000001406A767B: mov     r8, [rbp+0E8h+var_120]
 * 00000001406A767F: mov     rdx, [rbp+0E8h+var_128]
 * 00000001406A7683: mov     rcx, [rbp+0E8h+var_130]
 * 00000001406A7687: mov     rax, [rbp+0E8h+var_138]
 * 00000001406A768B: mov     rsp, rbp
 * 00000001406A768E: mov     rbp, [rbp+0E8h+var_10]
 * 00000001406A7695: add     rsp, 0E8h
 * 00000001406A769C: iretq
 */
