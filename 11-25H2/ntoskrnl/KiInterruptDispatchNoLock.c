/*
 * XREFs of KiInterruptDispatchNoLock @ 0x1406A1F60
 * Callers:
 *     <none>
 * Callees:
 *     KiEndInterruptCycleAccumulation @ 0x14028EFB0 (KiEndInterruptCycleAccumulation.c)
 *     KiUpdateStibpPairing @ 0x1403E3F50 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403EF6C0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     HalPerformEndOfInterrupt @ 0x14041A4A0 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1404F9500 (KiRestoreDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405B3940 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405BB410 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x14069FCF0 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLock @ 0x1406A1A80 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptDispatchNoLock @ 0x1406A1F60 (KiInterruptDispatchNoLock.c)
 *     KiInitiateUserApc @ 0x1406A4590 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1406A6F30 (KiDpcInterruptBypass.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLock @ 0x1406A1F60
 * Reason: Hex-Rays returned no pseudocode for 0x1406A1F60
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406A1F60: mov     rcx, gs:9158h
 * 00000001406A1F69: mov     rax, rcx
 * 00000001406A1F6C: mov     edx, cs:KeIsrStackSize
 * 00000001406A1F72: sub     rax, rdx
 * 00000001406A1F75: mov     rdx, rsp
 * 00000001406A1F78: cmp     rax, rsp
 * 00000001406A1F7B: ja      short loc_1406A1F82
 * 00000001406A1F7D: cmp     rsp, rcx
 * 00000001406A1F80: jb      short loc_1406A1F8E
 * 00000001406A1F82: cmp     cs:KiBugCheckActive, 0
 * 00000001406A1F89: jnz     short loc_1406A1F8E
 * 00000001406A1F8B: mov     rsp, rcx
 * 00000001406A1F8E: sub     rsp, 20h
 * 00000001406A1F92: mov     [rsp+20h+var_10], rdx
 * 00000001406A1F97: call    KiInterruptSubDispatchNoLock
 * 00000001406A1F9C: mov     rsp, [rsp+20h+var_10]
 * 00000001406A1FA1: mov     rcx, rsi
 * 00000001406A1FA4: call    HalPerformEndOfInterrupt
 * 00000001406A1FA9: mov     rcx, gs:20h
 * 00000001406A1FB2: movzx   edx, byte ptr [rbp-57h]
 * 00000001406A1FB6: call    KiEndInterruptCycleAccumulation
 * 00000001406A1FBB: test    al, al
 * 00000001406A1FBD: jz      short loc_1406A1FC4
 * 00000001406A1FBF: call    KiDpcInterruptBypass
 * 00000001406A1FC4: movzx   ecx, byte ptr [rbp-57h]
 * 00000001406A1FC8: cmp     cs:KiIrqlFlags, 0
 * 00000001406A1FCF: jz      short loc_1406A1FD8
 * 00000001406A1FD1: call    KzSetIrqlUnsafe
 * 00000001406A1FD6: jmp     short loc_1406A1FDC
 * 00000001406A1FD8: mov     cr8, rcx
 * 00000001406A1FDC: mov     rsi, [rbp+0D0h]
 * 00000001406A1FE3: test    byte ptr [rbp+0F0h], 1
 * 00000001406A1FEA: jz      loc_1406A22E5
 * 00000001406A1FF0: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406A1FF7: jz      short loc_1406A1FFC
 * 00000001406A1FF9: stac
 * 00000001406A1FFC: mov     rcx, gs:188h
 * 00000001406A2005: test    byte ptr [rcx+0C2h], 3
 * 00000001406A200C: jz      short loc_1406A2029
 * 00000001406A200E: mov     ecx, 1
 * 00000001406A2013: mov     cr8, rcx
 * 00000001406A2017: sti
 * 00000001406A2018: call    KiInitiateUserApc
 * 00000001406A201D: cli
 * 00000001406A201E: mov     ecx, 0
 * 00000001406A2023: mov     cr8, rcx
 * 00000001406A2027: jmp     short loc_1406A1FFC
 * 00000001406A2029: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406A202E: test    eax, eax
 * 00000001406A2030: mov     rax, [rbp-50h]
 * 00000001406A2034: jnz     short loc_1406A1FFC
 * 00000001406A2036: test    byte ptr gs:860h, 2
 * 00000001406A203F: jz      short loc_1406A2048
 * 00000001406A2041: xor     ecx, ecx
 * 00000001406A2043: call    KiUpdateStibpPairing
 * 00000001406A2048: mov     rcx, gs:188h
 * 00000001406A2051: test    dword ptr [rcx], 8000000h
 * 00000001406A2057: jz      short loc_1406A205E
 * 00000001406A2059: call    KiRestoreSetContextState
 * 00000001406A205E: mov     rcx, gs:188h
 * 00000001406A2067: test    dword ptr [rcx], 10000h
 * 00000001406A206D: jz      short loc_1406A2083
 * 00000001406A206F: test    byte ptr [rcx+2], 1
 * 00000001406A2073: jz      short loc_1406A2083
 * 00000001406A2075: call    KiCopyCounters
 * 00000001406A207A: mov     rcx, gs:188h
 * 00000001406A2083: ldmxcsr dword ptr [rbp-54h]
 * 00000001406A2087: cmp     word ptr [rbp+80h], 0
 * 00000001406A208F: jz      short loc_1406A2096
 * 00000001406A2091: call    KiRestoreDebugRegisterState
 * 00000001406A2096: mov     rcx, gs:188h
 * 00000001406A209F: bt      dword ptr [rcx+74h], 16h
 * 00000001406A20A4: jnb     short loc_1406A20D0
 * 00000001406A20A6: xor     ecx, ecx
 * 00000001406A20A8: rdsspq  rcx
 * 00000001406A20AD: mov     r8, gs:9D28h
 * 00000001406A20B6: add     r8, 8
 * 00000001406A20BA: cmp     rcx, r8
 * 00000001406A20BD: jnz     short loc_1406A20D0
 * 00000001406A20BF: mov     rcx, gs:9D20h
 * 00000001406A20C8: rstorssp qword ptr [rcx]
 * 00000001406A20CC: saveprevssp
 * 00000001406A20D0: mov     byte ptr gs:85Eh, 0
 * 00000001406A20D9: movzx   eax, word ptr gs:86Ch
 * 00000001406A20E2: cmp     gs:866h, ax
 * 00000001406A20EB: jz      short loc_1406A20FF
 * 00000001406A20ED: mov     gs:866h, ax
 * 00000001406A20F6: mov     ecx, 48h ; 'H'
 * 00000001406A20FB: xor     edx, edx
 * 00000001406A20FD: wrmsr
 * 00000001406A20FF: btr     word ptr gs:858h, 2
 * 00000001406A210A: jnb     short loc_1406A211A
 * 00000001406A210C: mov     eax, 1
 * 00000001406A2111: xor     edx, edx
 * 00000001406A2113: mov     ecx, 49h ; 'I'
 * 00000001406A2118: wrmsr
 * 00000001406A211A: btr     word ptr gs:858h, 5
 * 00000001406A2125: jnb     loc_1406A2262
 * 00000001406A212B: call    loc_1406A223E
 * 00000001406A2130: add     rsp, 8
 * 00000001406A2134: call    loc_1406A2247
 * 00000001406A2139: add     rsp, 8
 * 00000001406A213D: call    loc_1406A2130
 * 00000001406A2142: add     rsp, 8
 * 00000001406A2146: call    loc_1406A2139
 * 00000001406A214B: add     rsp, 8
 * 00000001406A214F: call    loc_1406A2142
 * 00000001406A2154: add     rsp, 8
 * 00000001406A2158: call    loc_1406A214B
 * 00000001406A215D: add     rsp, 8
 * 00000001406A2161: call    loc_1406A2154
 * 00000001406A2166: add     rsp, 8
 * 00000001406A216A: call    loc_1406A215D
 * 00000001406A216F: add     rsp, 8
 * 00000001406A2173: call    loc_1406A2166
 * 00000001406A2178: add     rsp, 8
 * 00000001406A217C: call    loc_1406A216F
 * 00000001406A2181: add     rsp, 8
 * 00000001406A2185: call    loc_1406A2178
 * 00000001406A218A: add     rsp, 8
 * 00000001406A218E: call    loc_1406A2181
 * 00000001406A2193: add     rsp, 8
 * 00000001406A2197: call    loc_1406A218A
 * 00000001406A219C: add     rsp, 8
 * 00000001406A21A0: call    loc_1406A2193
 * 00000001406A21A5: add     rsp, 8
 * 00000001406A21A9: call    loc_1406A219C
 * 00000001406A21AE: add     rsp, 8
 * 00000001406A21B2: call    loc_1406A21A5
 * 00000001406A21B7: add     rsp, 8
 * 00000001406A21BB: call    loc_1406A21AE
 * 00000001406A21C0: add     rsp, 8
 * 00000001406A21C4: call    loc_1406A21B7
 * 00000001406A21C9: add     rsp, 8
 * 00000001406A21CD: call    loc_1406A21C0
 * 00000001406A21D2: add     rsp, 8
 * 00000001406A21D6: call    loc_1406A21C9
 * 00000001406A21DB: add     rsp, 8
 * 00000001406A21DF: call    loc_1406A21D2
 * 00000001406A21E4: add     rsp, 8
 * 00000001406A21E8: call    loc_1406A21DB
 * 00000001406A21ED: add     rsp, 8
 * 00000001406A21F1: call    loc_1406A21E4
 * 00000001406A21F6: add     rsp, 8
 * 00000001406A21FA: call    loc_1406A21ED
 * 00000001406A21FF: add     rsp, 8
 * 00000001406A2203: call    loc_1406A21F6
 * 00000001406A2208: add     rsp, 8
 * 00000001406A220C: call    loc_1406A21FF
 * 00000001406A2211: add     rsp, 8
 * 00000001406A2215: call    loc_1406A2208
 * 00000001406A221A: add     rsp, 8
 * 00000001406A221E: call    loc_1406A2211
 * 00000001406A2223: add     rsp, 8
 * 00000001406A2227: call    loc_1406A221A
 * 00000001406A222C: add     rsp, 8
 * 00000001406A2230: call    loc_1406A2223
 * 00000001406A2235: add     rsp, 8
 * 00000001406A2239: call    loc_1406A222C
 * 00000001406A223E: add     rsp, 8
 * 00000001406A2242: call    loc_1406A2235
 * 00000001406A2247: add     rsp, 8
 * 00000001406A224B: mov     eax, 0DADAh
 * 00000001406A2250: test    byte ptr gs:85Ch, 8
 * 00000001406A2259: jz      short loc_1406A2262
 * 00000001406A225B: mov     al, 20h ; ' '
 * 00000001406A225D: incsspq rax
 * 00000001406A2262: test    word ptr gs:858h, 100h
 * 00000001406A226D: jz      short loc_1406A227B
 * 00000001406A226F: xor     eax, eax
 * 00000001406A2271: xor     edx, edx
 * 00000001406A2273: mov     ecx, 1
 * 00000001406A2278: div     rcx
 * 00000001406A227B: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406A227F: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406A2283: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406A2287: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406A228B: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406A228F: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406A2293: mov     r11, [rbp-20h]
 * 00000001406A2297: mov     r10, [rbp-28h]
 * 00000001406A229B: mov     r9, [rbp-30h]
 * 00000001406A229F: mov     r8, [rbp-38h]
 * 00000001406A22A3: mov     rdx, [rbp-40h]
 * 00000001406A22A7: mov     rcx, [rbp-48h]
 * 00000001406A22AB: mov     rax, [rbp-50h]
 * 00000001406A22AF: mov     rsp, rbp
 * 00000001406A22B2: mov     rbp, [rbp+0D8h]
 * 00000001406A22B9: add     rsp, 0E8h
 * 00000001406A22C0: test    cs:KiKvaShadow, 1
 * 00000001406A22C7: jz      short loc_1406A22CE
 * 00000001406A22C9: jmp     KiKernelExit
 * 00000001406A22CE: test    word ptr gs:858h, 200h
 * 00000001406A22D9: jz      short loc_1406A22E0
 * 00000001406A22DB: verw    [rsp-1C8h+arg_1E0]
 * 00000001406A22E0: swapgs
 * 00000001406A22E3: iretq
 * 00000001406A22E5: ldmxcsr dword ptr [rbp-54h]
 * 00000001406A22E9: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406A22ED: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406A22F1: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406A22F5: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406A22F9: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406A22FD: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406A2301: mov     r11, [rbp-20h]
 * 00000001406A2305: mov     r10, [rbp-28h]
 * 00000001406A2309: mov     r9, [rbp-30h]
 * 00000001406A230D: mov     r8, [rbp-38h]
 * 00000001406A2311: mov     rdx, [rbp-40h]
 * 00000001406A2315: mov     rcx, [rbp-48h]
 * 00000001406A2319: mov     rax, [rbp-50h]
 * 00000001406A231D: mov     rsp, rbp
 * 00000001406A2320: mov     rbp, [rbp+0D8h]
 * 00000001406A2327: add     rsp, 0E8h
 * 00000001406A232E: iretq
 */
