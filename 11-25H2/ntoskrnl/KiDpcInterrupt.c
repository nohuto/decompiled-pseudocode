/*
 * XREFs of KiDpcInterrupt @ 0x1406A6810
 * Callers:
 *     KiDpcInterruptShadow @ 0x140BAAF40 (KiDpcInterruptShadow.c)
 * Callees:
 *     KiDispatchInterrupt @ 0x14032E330 (KiDispatchInterrupt.c)
 *     KiUpdateStibpPairing @ 0x1403E3F50 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403EF6C0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     HalPerformEndOfInterrupt @ 0x14041A4A0 (HalPerformEndOfInterrupt.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x140429DB0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x1404F9500 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1404F9580 (KiSaveDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405B3940 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405BB410 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x14069FCF0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406A4590 (KiInitiateUserApc.c)
 *     KiDpcInterrupt @ 0x1406A6810 (KiDpcInterrupt.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406B4440 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiDpcInterrupt @ 0x1406A6810
 * Reason: Hex-Rays returned no pseudocode for 0x1406A6810
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406A6810: sub     rsp, 8
 * 00000001406A6814: push    rbp
 * 00000001406A6815: push    rsi
 * 00000001406A6816: sub     rsp, 150h
 * 00000001406A681D: lea     rbp, [rsp+80h]
 * 00000001406A6825: mov     byte ptr [rbp+0E8h+var_13F+2], 0
 * 00000001406A6829: mov     [rbp+0E8h+var_13F+7], rax
 * 00000001406A682D: mov     [rbp+0E8h+var_130], rcx
 * 00000001406A6831: mov     [rbp+0E8h+var_128], rdx
 * 00000001406A6835: mov     [rbp+0E8h+var_120], r8
 * 00000001406A6839: mov     [rbp+0E8h+var_118], r9
 * 00000001406A683D: mov     [rbp+0E8h+var_110], r10
 * 00000001406A6841: mov     [rbp+0E8h+var_108], r11
 * 00000001406A6845: test    [rbp+0E8h+arg_0], 1
 * 00000001406A684C: jnz     short loc_1406A6886
 * 00000001406A684E: xor     edx, edx
 * 00000001406A6850: rdsspq  rdx
 * 00000001406A6855: mov     [rbp+0E8h+var_90], rdx
 * 00000001406A6859: lfence
 * 00000001406A685C: test    byte ptr gs:858h, 1
 * 00000001406A6865: jnz     short loc_1406A686F
 * 00000001406A6867: lfence
 * 00000001406A686A: jmp     loc_1406A6AF7
 * 00000001406A686F: movzx   eax, word ptr gs:866h
 * 00000001406A6878: mov     ecx, 48h ; 'H'
 * 00000001406A687D: xor     edx, edx
 * 00000001406A687F: wrmsr
 * 00000001406A6881: jmp     loc_1406A6AF7
 * 00000001406A6886: test    cs:KiKvaShadow, 1
 * 00000001406A688D: jnz     short loc_1406A6892
 * 00000001406A688F: swapgs
 * 00000001406A6892: lfence
 * 00000001406A6895: mov     rcx, gs:9D28h
 * 00000001406A689E: test    rcx, rcx
 * 00000001406A68A1: jz      short loc_1406A68C2
 * 00000001406A68A3: rdsspq  rdx
 * 00000001406A68A8: mov     r10, gs:9D20h
 * 00000001406A68B1: add     r10, 8
 * 00000001406A68B5: cmp     rdx, r10
 * 00000001406A68B8: jnz     short loc_1406A68C2
 * 00000001406A68BA: rstorssp qword ptr [rcx]
 * 00000001406A68BE: saveprevssp
 * 00000001406A68C2: mov     r10, gs:188h
 * 00000001406A68CB: mov     rcx, gs:188h
 * 00000001406A68D4: mov     rcx, [rcx+220h]
 * 00000001406A68DB: mov     rcx, [rcx+760h]
 * 00000001406A68E2: mov     gs:850h, rcx
 * 00000001406A68EB: mov     cx, gs:862h
 * 00000001406A68F4: mov     gs:864h, cx
 * 00000001406A68FD: mov     cl, gs:858h
 * 00000001406A6905: mov     gs:85Ah, cl
 * 00000001406A690D: movzx   eax, word ptr gs:868h
 * 00000001406A6916: cmp     gs:866h, ax
 * 00000001406A691F: jz      short loc_1406A6933
 * 00000001406A6921: mov     gs:866h, ax
 * 00000001406A692A: mov     ecx, 48h ; 'H'
 * 00000001406A692F: xor     edx, edx
 * 00000001406A6931: wrmsr
 * 00000001406A6933: movzx   edx, byte ptr gs:858h
 * 00000001406A693C: test    edx, 8
 * 00000001406A6942: jz      short loc_1406A695B
 * 00000001406A6944: mov     eax, 1
 * 00000001406A6949: xor     edx, edx
 * 00000001406A694B: mov     ecx, 49h ; 'I'
 * 00000001406A6950: wrmsr
 * 00000001406A6952: movzx   edx, byte ptr gs:858h
 * 00000001406A695B: test    edx, 2
 * 00000001406A6961: jz      loc_1406A6A9E
 * 00000001406A6967: call    loc_1406A6A7A
 * 00000001406A696C: add     rsp, 8
 * 00000001406A6970: call    loc_1406A6A83
 * 00000001406A6975: add     rsp, 8
 * 00000001406A6979: call    loc_1406A696C
 * 00000001406A697E: add     rsp, 8
 * 00000001406A6982: call    loc_1406A6975
 * 00000001406A6987: add     rsp, 8
 * 00000001406A698B: call    loc_1406A697E
 * 00000001406A6990: add     rsp, 8
 * 00000001406A6994: call    loc_1406A6987
 * 00000001406A6999: add     rsp, 8
 * 00000001406A699D: call    loc_1406A6990
 * 00000001406A69A2: add     rsp, 8
 * 00000001406A69A6: call    loc_1406A6999
 * 00000001406A69AB: add     rsp, 8
 * 00000001406A69AF: call    loc_1406A69A2
 * 00000001406A69B4: add     rsp, 8
 * 00000001406A69B8: call    loc_1406A69AB
 * 00000001406A69BD: add     rsp, 8
 * 00000001406A69C1: call    loc_1406A69B4
 * 00000001406A69C6: add     rsp, 8
 * 00000001406A69CA: call    loc_1406A69BD
 * 00000001406A69CF: add     rsp, 8
 * 00000001406A69D3: call    loc_1406A69C6
 * 00000001406A69D8: add     rsp, 8
 * 00000001406A69DC: call    loc_1406A69CF
 * 00000001406A69E1: add     rsp, 8
 * 00000001406A69E5: call    loc_1406A69D8
 * 00000001406A69EA: add     rsp, 8
 * 00000001406A69EE: call    loc_1406A69E1
 * 00000001406A69F3: add     rsp, 8
 * 00000001406A69F7: call    loc_1406A69EA
 * 00000001406A69FC: add     rsp, 8
 * 00000001406A6A00: call    loc_1406A69F3
 * 00000001406A6A05: add     rsp, 8
 * 00000001406A6A09: call    loc_1406A69FC
 * 00000001406A6A0E: add     rsp, 8
 * 00000001406A6A12: call    loc_1406A6A05
 * 00000001406A6A17: add     rsp, 8
 * 00000001406A6A1B: call    loc_1406A6A0E
 * 00000001406A6A20: add     rsp, 8
 * 00000001406A6A24: call    loc_1406A6A17
 * 00000001406A6A29: add     rsp, 8
 * 00000001406A6A2D: call    loc_1406A6A20
 * 00000001406A6A32: add     rsp, 8
 * 00000001406A6A36: call    loc_1406A6A29
 * 00000001406A6A3B: add     rsp, 8
 * 00000001406A6A3F: call    loc_1406A6A32
 * 00000001406A6A44: add     rsp, 8
 * 00000001406A6A48: call    loc_1406A6A3B
 * 00000001406A6A4D: add     rsp, 8
 * 00000001406A6A51: call    loc_1406A6A44
 * 00000001406A6A56: add     rsp, 8
 * 00000001406A6A5A: call    loc_1406A6A4D
 * 00000001406A6A5F: add     rsp, 8
 * 00000001406A6A63: call    loc_1406A6A56
 * 00000001406A6A68: add     rsp, 8
 * 00000001406A6A6C: call    loc_1406A6A5F
 * 00000001406A6A71: add     rsp, 8
 * 00000001406A6A75: call    loc_1406A6A68
 * 00000001406A6A7A: add     rsp, 8
 * 00000001406A6A7E: call    loc_1406A6A71
 * 00000001406A6A83: add     rsp, 8
 * 00000001406A6A87: mov     eax, 0DADAh
 * 00000001406A6A8C: test    byte ptr gs:85Ch, 8
 * 00000001406A6A95: jz      short loc_1406A6A9E
 * 00000001406A6A97: mov     al, 20h ; ' '
 * 00000001406A6A99: incsspq rax
 * 00000001406A6A9E: test    edx, 80h
 * 00000001406A6AA4: jz      short loc_1406A6AAE
 * 00000001406A6AA6: lfence
 * 00000001406A6AA9: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406A6AAE: lfence
 * 00000001406A6AB1: mov     byte ptr gs:85Eh, 0
 * 00000001406A6ABA: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406A6AC1: jz      short loc_1406A6AE2
 * 00000001406A6AC3: mov     ecx, 6A7h
 * 00000001406A6AC8: rdmsr
 * 00000001406A6ACA: cmp     edx, 0
 * 00000001406A6ACD: jz      short loc_1406A6AE2
 * 00000001406A6ACF: mov     ecx, edx
 * 00000001406A6AD1: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406A6AD7: cmp     edx, ecx
 * 00000001406A6AD9: jz      short loc_1406A6AE2
 * 00000001406A6ADB: mov     ecx, 6A7h
 * 00000001406A6AE0: wrmsr
 * 00000001406A6AE2: test    byte ptr [r10+3], 3
 * 00000001406A6AE7: mov     [rbp+0E8h+var_68], 0
 * 00000001406A6AF0: jz      short loc_1406A6AF7
 * 00000001406A6AF2: call    KiSaveDebugRegisterState
 * 00000001406A6AF7: cld
 * 00000001406A6AF8: stmxcsr dword ptr [rbp+0E8h+var_13F+3]
 * 00000001406A6AFC: ldmxcsr dword ptr gs:180h
 * 00000001406A6B05: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001406A6B09: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001406A6B0D: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001406A6B11: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001406A6B15: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001406A6B19: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001406A6B1D: test    [rbp+0E8h+arg_0], 1
 * 00000001406A6B24: jz      short loc_1406A6B2B
 * 00000001406A6B26: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406A6B2B: xor     esi, esi
 * 00000001406A6B2D: inc     dword ptr gs:87C0h
 * 00000001406A6B35: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406A6B3C: jz      short loc_1406A6B41
 * 00000001406A6B3E: clac
 * 00000001406A6B41: test    cs:KiAmdTprLowerInterruptDelayDynamicWorkaround, 1
 * 00000001406A6B48: jz      short loc_1406A6B6E
 * 00000001406A6B4A: btr     dword ptr gs:228h, 2
 * 00000001406A6B54: cmp     dword ptr gs:228h, 0
 * 00000001406A6B5D: jnz     short loc_1406A6B6E
 * 00000001406A6B5F: mov     ecx, 0C0010015h
 * 00000001406A6B64: rdmsr
 * 00000001406A6B66: btr     edx, 0
 * 00000001406A6B6A: jnb     short loc_1406A6B6E
 * 00000001406A6B6C: wrmsr
 * 00000001406A6B6E: mov     ecx, 2
 * 00000001406A6B73: cmp     cs:KiIrqlFlags, 0
 * 00000001406A6B7A: jz      short loc_1406A6B83
 * 00000001406A6B7C: call    KzSetIrqlUnsafe
 * 00000001406A6B81: jmp     short loc_1406A6B8B
 * 00000001406A6B83: mov     rax, cr8
 * 00000001406A6B87: mov     cr8, rcx
 * 00000001406A6B8B: mov     byte ptr [rbp+0E8h+var_13F], al
 * 00000001406A6B8E: mov     rcx, rsi
 * 00000001406A6B91: call    HalPerformEndOfInterrupt
 * 00000001406A6B96: sti
 * 00000001406A6B97: cmp     byte ptr gs:187h, 0
 * 00000001406A6BA0: jnz     short loc_1406A6BAF
 * 00000001406A6BA2: mov     rcx, [rbp+0E8h+var_13F]
 * 00000001406A6BA6: lea     rdx, [rbp+0E8h+var_168]
 * 00000001406A6BAA: call    KiDispatchInterrupt
 * 00000001406A6BAF: cli
 * 00000001406A6BB0: movzx   ecx, byte ptr [rbp+0E8h+var_13F]
 * 00000001406A6BB4: cmp     cs:KiIrqlFlags, 0
 * 00000001406A6BBB: jz      short loc_1406A6BC4
 * 00000001406A6BBD: call    KzSetIrqlUnsafe
 * 00000001406A6BC2: jmp     short loc_1406A6BC8
 * 00000001406A6BC4: mov     cr8, rcx
 * 00000001406A6BC8: mov     rsi, [rbp+0E8h+var_18]
 * 00000001406A6BCF: cli
 * 00000001406A6BD0: test    [rbp+0E8h+arg_0], 1
 * 00000001406A6BD7: jz      loc_1406A6ED2
 * 00000001406A6BDD: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406A6BE4: jz      short loc_1406A6BE9
 * 00000001406A6BE6: stac
 * 00000001406A6BE9: mov     rcx, gs:188h
 * 00000001406A6BF2: test    byte ptr [rcx+0C2h], 3
 * 00000001406A6BF9: jz      short loc_1406A6C16
 * 00000001406A6BFB: mov     ecx, 1
 * 00000001406A6C00: mov     cr8, rcx
 * 00000001406A6C04: sti
 * 00000001406A6C05: call    KiInitiateUserApc
 * 00000001406A6C0A: cli
 * 00000001406A6C0B: mov     ecx, 0
 * 00000001406A6C10: mov     cr8, rcx
 * 00000001406A6C14: jmp     short loc_1406A6BE9
 * 00000001406A6C16: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406A6C1B: test    eax, eax
 * 00000001406A6C1D: mov     rax, [rbp+0E8h+var_13F+7]
 * 00000001406A6C21: jnz     short loc_1406A6BE9
 * 00000001406A6C23: test    byte ptr gs:860h, 2
 * 00000001406A6C2C: jz      short loc_1406A6C35
 * 00000001406A6C2E: xor     ecx, ecx
 * 00000001406A6C30: call    KiUpdateStibpPairing
 * 00000001406A6C35: mov     rcx, gs:188h
 * 00000001406A6C3E: test    dword ptr [rcx], 8000000h
 * 00000001406A6C44: jz      short loc_1406A6C4B
 * 00000001406A6C46: call    KiRestoreSetContextState
 * 00000001406A6C4B: mov     rcx, gs:188h
 * 00000001406A6C54: test    dword ptr [rcx], 10000h
 * 00000001406A6C5A: jz      short loc_1406A6C70
 * 00000001406A6C5C: test    byte ptr [rcx+2], 1
 * 00000001406A6C60: jz      short loc_1406A6C70
 * 00000001406A6C62: call    KiCopyCounters
 * 00000001406A6C67: mov     rcx, gs:188h
 * 00000001406A6C70: ldmxcsr dword ptr [rbp+0E8h+var_13F+3]
 * 00000001406A6C74: cmp     [rbp+0E8h+var_68], 0
 * 00000001406A6C7C: jz      short loc_1406A6C83
 * 00000001406A6C7E: call    KiRestoreDebugRegisterState
 * 00000001406A6C83: mov     rcx, gs:188h
 * 00000001406A6C8C: bt      dword ptr [rcx+74h], 16h
 * 00000001406A6C91: jnb     short loc_1406A6CBD
 * 00000001406A6C93: xor     ecx, ecx
 * 00000001406A6C95: rdsspq  rcx
 * 00000001406A6C9A: mov     r8, gs:9D28h
 * 00000001406A6CA3: add     r8, 8
 * 00000001406A6CA7: cmp     rcx, r8
 * 00000001406A6CAA: jnz     short loc_1406A6CBD
 * 00000001406A6CAC: mov     rcx, gs:9D20h
 * 00000001406A6CB5: rstorssp qword ptr [rcx]
 * 00000001406A6CB9: saveprevssp
 * 00000001406A6CBD: mov     byte ptr gs:85Eh, 0
 * 00000001406A6CC6: movzx   eax, word ptr gs:86Ch
 * 00000001406A6CCF: cmp     gs:866h, ax
 * 00000001406A6CD8: jz      short loc_1406A6CEC
 * 00000001406A6CDA: mov     gs:866h, ax
 * 00000001406A6CE3: mov     ecx, 48h ; 'H'
 * 00000001406A6CE8: xor     edx, edx
 * 00000001406A6CEA: wrmsr
 * 00000001406A6CEC: btr     word ptr gs:858h, 2
 * 00000001406A6CF7: jnb     short loc_1406A6D07
 * 00000001406A6CF9: mov     eax, 1
 * 00000001406A6CFE: xor     edx, edx
 * 00000001406A6D00: mov     ecx, 49h ; 'I'
 * 00000001406A6D05: wrmsr
 * 00000001406A6D07: btr     word ptr gs:858h, 5
 * 00000001406A6D12: jnb     loc_1406A6E4F
 * 00000001406A6D18: call    loc_1406A6E2B
 * 00000001406A6D1D: add     rsp, 8
 * 00000001406A6D21: call    loc_1406A6E34
 * 00000001406A6D26: add     rsp, 8
 * 00000001406A6D2A: call    loc_1406A6D1D
 * 00000001406A6D2F: add     rsp, 8
 * 00000001406A6D33: call    loc_1406A6D26
 * 00000001406A6D38: add     rsp, 8
 * 00000001406A6D3C: call    loc_1406A6D2F
 * 00000001406A6D41: add     rsp, 8
 * 00000001406A6D45: call    loc_1406A6D38
 * 00000001406A6D4A: add     rsp, 8
 * 00000001406A6D4E: call    loc_1406A6D41
 * 00000001406A6D53: add     rsp, 8
 * 00000001406A6D57: call    loc_1406A6D4A
 * 00000001406A6D5C: add     rsp, 8
 * 00000001406A6D60: call    loc_1406A6D53
 * 00000001406A6D65: add     rsp, 8
 * 00000001406A6D69: call    loc_1406A6D5C
 * 00000001406A6D6E: add     rsp, 8
 * 00000001406A6D72: call    loc_1406A6D65
 * 00000001406A6D77: add     rsp, 8
 * 00000001406A6D7B: call    loc_1406A6D6E
 * 00000001406A6D80: add     rsp, 8
 * 00000001406A6D84: call    loc_1406A6D77
 * 00000001406A6D89: add     rsp, 8
 * 00000001406A6D8D: call    loc_1406A6D80
 * 00000001406A6D92: add     rsp, 8
 * 00000001406A6D96: call    loc_1406A6D89
 * 00000001406A6D9B: add     rsp, 8
 * 00000001406A6D9F: call    loc_1406A6D92
 * 00000001406A6DA4: add     rsp, 8
 * 00000001406A6DA8: call    loc_1406A6D9B
 * 00000001406A6DAD: add     rsp, 8
 * 00000001406A6DB1: call    loc_1406A6DA4
 * 00000001406A6DB6: add     rsp, 8
 * 00000001406A6DBA: call    loc_1406A6DAD
 * 00000001406A6DBF: add     rsp, 8
 * 00000001406A6DC3: call    loc_1406A6DB6
 * 00000001406A6DC8: add     rsp, 8
 * 00000001406A6DCC: call    loc_1406A6DBF
 * 00000001406A6DD1: add     rsp, 8
 * 00000001406A6DD5: call    loc_1406A6DC8
 * 00000001406A6DDA: add     rsp, 8
 * 00000001406A6DDE: call    loc_1406A6DD1
 * 00000001406A6DE3: add     rsp, 8
 * 00000001406A6DE7: call    loc_1406A6DDA
 * 00000001406A6DEC: add     rsp, 8
 * 00000001406A6DF0: call    loc_1406A6DE3
 * 00000001406A6DF5: add     rsp, 8
 * 00000001406A6DF9: call    loc_1406A6DEC
 * 00000001406A6DFE: add     rsp, 8
 * 00000001406A6E02: call    loc_1406A6DF5
 * 00000001406A6E07: add     rsp, 8
 * 00000001406A6E0B: call    loc_1406A6DFE
 * 00000001406A6E10: add     rsp, 8
 * 00000001406A6E14: call    loc_1406A6E07
 * 00000001406A6E19: add     rsp, 8
 * 00000001406A6E1D: call    loc_1406A6E10
 * 00000001406A6E22: add     rsp, 8
 * 00000001406A6E26: call    loc_1406A6E19
 * 00000001406A6E2B: add     rsp, 8
 * 00000001406A6E2F: call    loc_1406A6E22
 * 00000001406A6E34: add     rsp, 8
 * 00000001406A6E38: mov     eax, 0DADAh
 * 00000001406A6E3D: test    byte ptr gs:85Ch, 8
 * 00000001406A6E46: jz      short loc_1406A6E4F
 * 00000001406A6E48: mov     al, 20h ; ' '
 * 00000001406A6E4A: incsspq rax
 * 00000001406A6E4F: test    word ptr gs:858h, 100h
 * 00000001406A6E5A: jz      short loc_1406A6E68
 * 00000001406A6E5C: xor     eax, eax
 * 00000001406A6E5E: xor     edx, edx
 * 00000001406A6E60: mov     ecx, 1
 * 00000001406A6E65: div     rcx
 * 00000001406A6E68: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001406A6E6C: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001406A6E70: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001406A6E74: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001406A6E78: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001406A6E7C: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001406A6E80: mov     r11, [rbp+0E8h+var_108]
 * 00000001406A6E84: mov     r10, [rbp+0E8h+var_110]
 * 00000001406A6E88: mov     r9, [rbp+0E8h+var_118]
 * 00000001406A6E8C: mov     r8, [rbp+0E8h+var_120]
 * 00000001406A6E90: mov     rdx, [rbp+0E8h+var_128]
 * 00000001406A6E94: mov     rcx, [rbp+0E8h+var_130]
 * 00000001406A6E98: mov     rax, [rbp+0E8h+var_13F+7]
 * 00000001406A6E9C: mov     rsp, rbp
 * 00000001406A6E9F: mov     rbp, [rbp+0E8h+var_10]
 * 00000001406A6EA6: add     rsp, 0E8h
 * 00000001406A6EAD: test    cs:KiKvaShadow, 1
 * 00000001406A6EB4: jz      short loc_1406A6EBB
 * 00000001406A6EB6: jmp     KiKernelExit
 * 00000001406A6EBB: test    word ptr gs:858h, 200h
 * 00000001406A6EC6: jz      short loc_1406A6ECD
 * 00000001406A6EC8: verw    [rsp+arg_18]
 * 00000001406A6ECD: swapgs
 * 00000001406A6ED0: iretq
 * 00000001406A6ED2: ldmxcsr dword ptr [rbp+0E8h+var_13F+3]
 * 00000001406A6ED6: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001406A6EDA: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001406A6EDE: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001406A6EE2: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001406A6EE6: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001406A6EEA: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001406A6EEE: mov     r11, [rbp+0E8h+var_108]
 * 00000001406A6EF2: mov     r10, [rbp+0E8h+var_110]
 * 00000001406A6EF6: mov     r9, [rbp+0E8h+var_118]
 * 00000001406A6EFA: mov     r8, [rbp+0E8h+var_120]
 * 00000001406A6EFE: mov     rdx, [rbp+0E8h+var_128]
 * 00000001406A6F02: mov     rcx, [rbp+0E8h+var_130]
 * 00000001406A6F06: mov     rax, [rbp+0E8h+var_13F+7]
 * 00000001406A6F0A: mov     rsp, rbp
 * 00000001406A6F0D: mov     rbp, [rbp+0E8h+var_10]
 * 00000001406A6F14: add     rsp, 0E8h
 * 00000001406A6F1B: iretq
 */
