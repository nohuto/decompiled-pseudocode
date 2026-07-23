/*
 * XREFs of SwapContext @ 0x1406B3AE0
 * Callers:
 *     KiIdleLoop @ 0x1406ACBD0 (KiIdleLoop.c)
 *     KiSwapContext @ 0x1406B3A00 (KiSwapContext.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeCheckAndApplyBamQos @ 0x1402ACA20 (KeCheckAndApplyBamQos.c)
 *     KiStartThreadCycleAccumulationContextSwap @ 0x1402DAC90 (KiStartThreadCycleAccumulationContextSwap.c)
 *     HalRequestSoftwareInterrupt @ 0x140369040 (HalRequestSoftwareInterrupt.c)
 *     KiUpdateSpeculationControl @ 0x1403DEE10 (KiUpdateSpeculationControl.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1403E20F0 (HvlSwitchVirtualAddressSpace.c)
 *     KiClearLastBranchRecordStack @ 0x140410340 (KiClearLastBranchRecordStack.c)
 *     EtwTraceContextSwap @ 0x140415C40 (EtwTraceContextSwap.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     KiResetProcessorTraceBuffer @ 0x1405AE0D0 (KiResetProcessorTraceBuffer.c)
 *     KiRestoreThreadIptState @ 0x1405B62E0 (KiRestoreThreadIptState.c)
 *     KiSaveThreadIptState @ 0x1405B6310 (KiSaveThreadIptState.c)
 *     KiCheckAndApplyCacheIsolation @ 0x1405C0120 (KiCheckAndApplyCacheIsolation.c)
 *     SwapContext @ 0x1406B3AE0 (SwapContext.c)
 */

/*
 * Hex-Rays decompilation failed for SwapContext @ 0x1406B3AE0
 * Reason: Hex-Rays returned no pseudocode for 0x1406B3AE0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B3AE0: push    rbp
 * 00000001406B3AE2: sub     rsp, 30h
 * 00000001406B3AE6: prefetchw byte ptr [rsi+71h]
 * 00000001406B3AEA: mov     [rsp+38h+var_10], cl
 * 00000001406B3AEE: cmp     byte ptr [rsi+71h], 0
 * 00000001406B3AF2: jnz     loc_1406B413E
 * 00000001406B3AF8: mov     byte ptr [rsi+71h], 1
 * 00000001406B3AFC: mov     eax, cs:KiHresetMask
 * 00000001406B3B02: test    eax, eax
 * 00000001406B3B04: jz      short loc_1406B3B0C
 * 00000001406B3B06: hreset  0
 * 00000001406B3B0C: mov     eax, cs:KiHwFeedbackResetMask
 * 00000001406B3B12: test    eax, eax
 * 00000001406B3B14: jz      short loc_1406B3B1F
 * 00000001406B3B16: xor     edx, edx
 * 00000001406B3B18: mov     ecx, 0C0000502h
 * 00000001406B3B1D: wrmsr
 * 00000001406B3B1F: cli
 * 00000001406B3B20: mov     rcx, rbx
 * 00000001406B3B23: mov     rdx, rsi
 * 00000001406B3B26: call    KiStartThreadCycleAccumulationContextSwap
 * 00000001406B3B2B: inc     dword ptr [rbx+2D3Ch]
 * 00000001406B3B31: mov     rbp, cs:KeFeatureBits
 * 00000001406B3B38: cmp     cs:KiCacheIsoBitmap, 0
 * 00000001406B3B3F: jz      short loc_1406B3B53
 * 00000001406B3B41: bt      rbp, 2Ch ; ','
 * 00000001406B3B46: jnb     short loc_1406B3B53
 * 00000001406B3B48: mov     rcx, rbx
 * 00000001406B3B4B: mov     rdx, rsi
 * 00000001406B3B4E: call    KiCheckAndApplyCacheIsolation
 * 00000001406B3B53: cmp     [rbx+18h], rsi
 * 00000001406B3B57: jz      short loc_1406B3B7A
 * 00000001406B3B59: movzx   ecx, byte ptr [rsi+204h]
 * 00000001406B3B60: mov     eax, [rbx+0ECh]
 * 00000001406B3B66: xor     eax, ecx
 * 00000001406B3B68: test    eax, 0Fh
 * 00000001406B3B6D: jz      short loc_1406B3B7A
 * 00000001406B3B6F: mov     rcx, rbx
 * 00000001406B3B72: mov     rdx, rsi
 * 00000001406B3B75: call    KeCheckAndApplyBamQos
 * 00000001406B3B7A: mov     rdx, [rdi+250h]
 * 00000001406B3B81: mov     rcx, [rdi+60h]
 * 00000001406B3B85: and     rdx, 0FFFFFFFFFFFFFFFDh
 * 00000001406B3B89: mov     eax, edx
 * 00000001406B3B8B: jz      short loc_1406B3BB7
 * 00000001406B3B8D: shr     rdx, 20h
 * 00000001406B3B91: bt      rbp, 26h ; '&'
 * 00000001406B3B96: jb      short loc_1406B3BAF
 * 00000001406B3B98: bt      rbp, 0Fh
 * 00000001406B3B9D: jb      short loc_1406B3BB4
 * 00000001406B3B9F: bt      ebp, 17h
 * 00000001406B3BA3: jnb     short loc_1406B3BAA
 * 00000001406B3BA5: xsave   byte ptr [rcx]
 * 00000001406B3BA8: jmp     short loc_1406B3BB7
 * 00000001406B3BAA: fxsave  dword ptr [rcx]
 * 00000001406B3BAD: jmp     short loc_1406B3BB7
 * 00000001406B3BAF: xsaves  byte ptr [rcx]
 * 00000001406B3BB2: jmp     short loc_1406B3BB7
 * 00000001406B3BB4: xsaveopt byte ptr [rcx]
 * 00000001406B3BB7: stmxcsr dword ptr [rcx+18h]
 * 00000001406B3BBB: test    eax, 100h
 * 00000001406B3BC0: jz      short loc_1406B3BD3
 * 00000001406B3BC2: cmp     cs:KiIptMsrMask, 0
 * 00000001406B3BC9: jz      short loc_1406B3BD3
 * 00000001406B3BCB: mov     rcx, rdi
 * 00000001406B3BCE: call    KiSaveThreadIptState
 * 00000001406B3BD3: mov     [rdi+58h], rsp
 * 00000001406B3BD7: mov     rsp, [rsi+58h]
 * 00000001406B3BDB: test    cs:KiKernelCetEnabled, 1
 * 00000001406B3BE2: jz      short loc_1406B3C11
 * 00000001406B3BE4: mov     rcx, [rsi+410h]
 * 00000001406B3BEB: mov     [rbx+9BA8h], rcx
 * 00000001406B3BF2: rdsspq  rdx
 * 00000001406B3BF7: mov     rcx, [rsi+408h]
 * 00000001406B3BFE: rstorssp qword ptr [rcx]
 * 00000001406B3C02: saveprevssp
 * 00000001406B3C06: sub     rdx, 8
 * 00000001406B3C0A: mov     [rdi+408h], rdx
 * 00000001406B3C11: mov     rax, [rdi+220h]
 * 00000001406B3C18: cmp     qword ptr [rax+310h], 0
 * 00000001406B3C20: jz      short loc_1406B3C35
 * 00000001406B3C22: mov     ecx, 0C0000100h
 * 00000001406B3C27: rdmsr
 * 00000001406B3C29: mov     [rdi+678h], eax
 * 00000001406B3C2F: mov     [rdi+67Ch], edx
 * 00000001406B3C35: btr     word ptr gs:85Eh, 0
 * 00000001406B3C40: jnb     short loc_1406B3C46
 * 00000001406B3C42: or      byte ptr [rdi+7Eh], 1
 * 00000001406B3C46: bt      word ptr [rsi+7Eh], 0
 * 00000001406B3C4C: jnb     short loc_1406B3C57
 * 00000001406B3C4E: or      byte ptr gs:85Eh, 1
 * 00000001406B3C57: and     byte ptr [rsi+7Eh], 0FEh
 * 00000001406B3C5B: mov     rcx, [rsi+220h]
 * 00000001406B3C62: or      cl, [rbx+6E0h]
 * 00000001406B3C68: and     cl, 0C2h
 * 00000001406B3C6B: cmp     rcx, [rdi+220h]
 * 00000001406B3C72: jz      short loc_1406B3C81
 * 00000001406B3C74: and     cl, 0C0h
 * 00000001406B3C77: call    KiUpdateSpeculationControl
 * 00000001406B3C7C: jmp     loc_1406B3E37
 * 00000001406B3C81: movzx   ecx, byte ptr gs:85Eh
 * 00000001406B3C8A: and     cx, 3
 * 00000001406B3C8E: cmp     cx, 1
 * 00000001406B3C92: jnz     loc_1406B3E37
 * 00000001406B3C98: cli
 * 00000001406B3C99: movzx   eax, word ptr gs:864h
 * 00000001406B3CA2: cmp     gs:866h, ax
 * 00000001406B3CAB: jz      short loc_1406B3CBF
 * 00000001406B3CAD: mov     gs:866h, ax
 * 00000001406B3CB6: mov     ecx, 48h ; 'H'
 * 00000001406B3CBB: xor     edx, edx
 * 00000001406B3CBD: wrmsr
 * 00000001406B3CBF: movzx   edx, byte ptr gs:85Ah
 * 00000001406B3CC8: test    edx, 10h
 * 00000001406B3CCE: jz      short loc_1406B3CE7
 * 00000001406B3CD0: mov     eax, 1
 * 00000001406B3CD5: xor     edx, edx
 * 00000001406B3CD7: mov     ecx, 49h ; 'I'
 * 00000001406B3CDC: wrmsr
 * 00000001406B3CDE: movzx   edx, byte ptr gs:85Ah
 * 00000001406B3CE7: test    edx, 40h
 * 00000001406B3CED: jz      loc_1406B3E2A
 * 00000001406B3CF3: call    loc_1406B3E06
 * 00000001406B3CF8: add     rsp, 8
 * 00000001406B3CFC: call    loc_1406B3E0F
 * 00000001406B3D01: add     rsp, 8
 * 00000001406B3D05: call    loc_1406B3CF8
 * 00000001406B3D0A: add     rsp, 8
 * 00000001406B3D0E: call    loc_1406B3D01
 * 00000001406B3D13: add     rsp, 8
 * 00000001406B3D17: call    loc_1406B3D0A
 * 00000001406B3D1C: add     rsp, 8
 * 00000001406B3D20: call    loc_1406B3D13
 * 00000001406B3D25: add     rsp, 8
 * 00000001406B3D29: call    loc_1406B3D1C
 * 00000001406B3D2E: add     rsp, 8
 * 00000001406B3D32: call    loc_1406B3D25
 * 00000001406B3D37: add     rsp, 8
 * 00000001406B3D3B: call    loc_1406B3D2E
 * 00000001406B3D40: add     rsp, 8
 * 00000001406B3D44: call    loc_1406B3D37
 * 00000001406B3D49: add     rsp, 8
 * 00000001406B3D4D: call    loc_1406B3D40
 * 00000001406B3D52: add     rsp, 8
 * 00000001406B3D56: call    loc_1406B3D49
 * 00000001406B3D5B: add     rsp, 8
 * 00000001406B3D5F: call    loc_1406B3D52
 * 00000001406B3D64: add     rsp, 8
 * 00000001406B3D68: call    loc_1406B3D5B
 * 00000001406B3D6D: add     rsp, 8
 * 00000001406B3D71: call    loc_1406B3D64
 * 00000001406B3D76: add     rsp, 8
 * 00000001406B3D7A: call    loc_1406B3D6D
 * 00000001406B3D7F: add     rsp, 8
 * 00000001406B3D83: call    loc_1406B3D76
 * 00000001406B3D88: add     rsp, 8
 * 00000001406B3D8C: call    loc_1406B3D7F
 * 00000001406B3D91: add     rsp, 8
 * 00000001406B3D95: call    loc_1406B3D88
 * 00000001406B3D9A: add     rsp, 8
 * 00000001406B3D9E: call    loc_1406B3D91
 * 00000001406B3DA3: add     rsp, 8
 * 00000001406B3DA7: call    loc_1406B3D9A
 * 00000001406B3DAC: add     rsp, 8
 * 00000001406B3DB0: call    loc_1406B3DA3
 * 00000001406B3DB5: add     rsp, 8
 * 00000001406B3DB9: call    loc_1406B3DAC
 * 00000001406B3DBE: add     rsp, 8
 * 00000001406B3DC2: call    loc_1406B3DB5
 * 00000001406B3DC7: add     rsp, 8
 * 00000001406B3DCB: call    loc_1406B3DBE
 * 00000001406B3DD0: add     rsp, 8
 * 00000001406B3DD4: call    loc_1406B3DC7
 * 00000001406B3DD9: add     rsp, 8
 * 00000001406B3DDD: call    loc_1406B3DD0
 * 00000001406B3DE2: add     rsp, 8
 * 00000001406B3DE6: call    loc_1406B3DD9
 * 00000001406B3DEB: add     rsp, 8
 * 00000001406B3DEF: call    loc_1406B3DE2
 * 00000001406B3DF4: add     rsp, 8
 * 00000001406B3DF8: call    loc_1406B3DEB
 * 00000001406B3DFD: add     rsp, 8
 * 00000001406B3E01: call    loc_1406B3DF4
 * 00000001406B3E06: add     rsp, 8
 * 00000001406B3E0A: call    loc_1406B3DFD
 * 00000001406B3E0F: add     rsp, 8
 * 00000001406B3E13: mov     eax, 0DADAh
 * 00000001406B3E18: test    byte ptr gs:85Ch, 8
 * 00000001406B3E21: jz      short loc_1406B3E2A
 * 00000001406B3E23: mov     al, 20h ; ' '
 * 00000001406B3E25: incsspq rax
 * 00000001406B3E2A: lfence
 * 00000001406B3E2D: or      byte ptr gs:85Eh, 2
 * 00000001406B3E36: sti
 * 00000001406B3E37: mov     r14, [rsi+0B8h]
 * 00000001406B3E3E: cmp     r14, [rdi+0B8h]
 * 00000001406B3E45: jz      loc_1406B3F0A
 * 00000001406B3E4B: movzx   ecx, byte ptr [rbx+0D1h]
 * 00000001406B3E52: movzx   eax, byte ptr [rbx+0D0h]
 * 00000001406B3E59: mov     rdx, [r14+80h]
 * 00000001406B3E60: lock bts [rdx+rax*8+8], rcx
 * 00000001406B3E67: mov     rcx, [r14+28h]
 * 00000001406B3E6B: test    cs:KiKvaShadow, 1
 * 00000001406B3E72: jz      short loc_1406B3EAD
 * 00000001406B3E74: cli
 * 00000001406B3E75: bt      ecx, 1
 * 00000001406B3E79: jnb     short loc_1406B3E87
 * 00000001406B3E7B: bts     rcx, 3Fh ; '?'
 * 00000001406B3E80: or      dword ptr [rbx+0AE98h], 1
 * 00000001406B3E87: mov     [rbx+0AE80h], rcx
 * 00000001406B3E8E: btr     rcx, 3Fh ; '?'
 * 00000001406B3E93: and     dword ptr [rbx+0AE98h], 0FFFFFFFDh
 * 00000001406B3E9A: bt      dword ptr [r14+160h], 0
 * 00000001406B3EA3: jnb     short loc_1406B3EAC
 * 00000001406B3EA5: xor     dword ptr [rbx+0AE98h], 3
 * 00000001406B3EAC: sti
 * 00000001406B3EAD: test    cs:HvlEnlightenments, 1
 * 00000001406B3EB7: jz      short loc_1406B3EC0
 * 00000001406B3EB9: call    HvlSwitchVirtualAddressSpace
 * 00000001406B3EBE: jmp     short loc_1406B3EE7
 * 00000001406B3EC0: mov     cr3, rcx
 * 00000001406B3EC3: test    cs:KiKvaShadow, 1
 * 00000001406B3ECA: jz      short loc_1406B3EE7
 * 00000001406B3ECC: bt      ecx, 1
 * 00000001406B3ED0: jb      short loc_1406B3EE7
 * 00000001406B3ED2: mov     rax, cr4
 * 00000001406B3ED5: xor     rax, 80h
 * 00000001406B3EDB: mov     cr4, rax
 * 00000001406B3EDE: xor     rax, 80h
 * 00000001406B3EE4: mov     cr4, rax
 * 00000001406B3EE7: movzx   ecx, byte ptr [rbx+0D1h]
 * 00000001406B3EEE: movzx   eax, byte ptr [rbx+0D0h]
 * 00000001406B3EF5: mov     rdx, [rdi+0B8h]
 * 00000001406B3EFC: mov     rdx, [rdx+80h]
 * 00000001406B3F03: lock btr [rdx+rax*8+8], rcx
 * 00000001406B3F0A: mov     rax, [rsi+28h]
 * 00000001406B3F0E: test    cs:KiKvaShadow, 1
 * 00000001406B3F15: jnz     short loc_1406B3F24
 * 00000001406B3F17: mov     r15, [rbx-178h]
 * 00000001406B3F1E: mov     [r15+4], rax
 * 00000001406B3F22: jmp     short loc_1406B3F2B
 * 00000001406B3F24: mov     [rbx+0AE88h], rax
 * 00000001406B3F2B: mov     [rbx+28h], rax
 * 00000001406B3F2F: test    rax, rax
 * 00000001406B3F32: jge     loc_1406B4126
 * 00000001406B3F38: cmp     cs:KiCpuTracingFlags, 0
 * 00000001406B3F3F: jnz     loc_1406B40CF
 * 00000001406B3F45: bt      rbp, 37h ; '7'
 * 00000001406B3F4A: jnb     short loc_1406B3F6C
 * 00000001406B3F4C: mov     ecx, 1C4h
 * 00000001406B3F51: mov     rax, [rdi+428h]
 * 00000001406B3F58: mov     rdx, [rsi+428h]
 * 00000001406B3F5F: cmp     rax, rdx
 * 00000001406B3F62: jz      short loc_1406B3F6C
 * 00000001406B3F64: mov     eax, edx
 * 00000001406B3F66: shr     rdx, 20h
 * 00000001406B3F6A: wrmsr
 * 00000001406B3F6C: mov     rdx, [rdi+250h]
 * 00000001406B3F73: mov     rax, rdx
 * 00000001406B3F76: and     rax, 40000h
 * 00000001406B3F7C: and     rdx, cs:KeEnabledSupervisorXStateFeatures
 * 00000001406B3F83: or      rdx, rax
 * 00000001406B3F86: or      rdx, [rsi+250h]
 * 00000001406B3F8D: mov     byte ptr [rdi+71h], 0
 * 00000001406B3F91: mov     rcx, [rsi+60h]
 * 00000001406B3F95: and     rdx, 0FFFFFFFFFFFFFFFDh
 * 00000001406B3F99: mov     eax, edx
 * 00000001406B3F9B: jz      short loc_1406B3FC8
 * 00000001406B3F9D: shr     rdx, 20h
 * 00000001406B3FA1: bt      rbp, 29h ; ')'
 * 00000001406B3FA6: jnb     short loc_1406B3FAE
 * 00000001406B3FA8: test    al, 1
 * 00000001406B3FAA: jz      short loc_1406B3FAE
 * 00000001406B3FAC: fninit
 * 00000001406B3FAE: bt      rbp, 26h ; '&'
 * 00000001406B3FB3: jb      short loc_1406B3FC0
 * 00000001406B3FB5: bt      ebp, 17h
 * 00000001406B3FB9: jb      short loc_1406B3FC5
 * 00000001406B3FBB: fxrstor dword ptr [rcx]
 * 00000001406B3FBE: jmp     short loc_1406B3FC8
 * 00000001406B3FC0: xrstors byte ptr [rcx]
 * 00000001406B3FC3: jmp     short loc_1406B3FC8
 * 00000001406B3FC5: xrstor  byte ptr [rcx]
 * 00000001406B3FC8: ldmxcsr dword ptr [rcx+18h]
 * 00000001406B3FCC: test    eax, 100h
 * 00000001406B3FD1: jz      short loc_1406B3FE4
 * 00000001406B3FD3: cmp     cs:KiIptMsrMask, 0
 * 00000001406B3FDA: jz      short loc_1406B3FE4
 * 00000001406B3FDC: mov     rcx, rsi
 * 00000001406B3FDF: call    KiRestoreThreadIptState
 * 00000001406B3FE4: bt      dword ptr [rsi+74h], 0Ah
 * 00000001406B3FE9: jb      loc_1406B408F
 * 00000001406B3FEF: mov     rax, [rsi+220h]
 * 00000001406B3FF6: cmp     qword ptr [rax+310h], 0
 * 00000001406B3FFE: mov     eax, [rsi+678h]
 * 00000001406B4004: jz      short loc_1406B4011
 * 00000001406B4006: mov     eax, [rsi+0F0h]
 * 00000001406B400C: add     eax, 2000h
 * 00000001406B4011: mov     rcx, [rbx-180h]
 * 00000001406B4018: mov     [rcx+52h], ax
 * 00000001406B401C: shr     eax, 10h
 * 00000001406B401F: mov     [rcx+54h], al
 * 00000001406B4022: mov     [rcx+57h], ah
 * 00000001406B4025: mov     eax, 53h ; 'S'
 * 00000001406B402A: mov     fs, eax
 * 00000001406B402C: mov     eax, [rsi+678h]
 * 00000001406B4032: mov     edx, [rsi+67Ch]
 * 00000001406B4038: mov     ecx, 0C0000100h
 * 00000001406B403D: wrmsr
 * 00000001406B403F: mov     eax, ds
 * 00000001406B4041: mov     edx, es
 * 00000001406B4043: and     eax, edx
 * 00000001406B4045: mov     edx, gs
 * 00000001406B4047: and     eax, edx
 * 00000001406B4049: cmp     ax, 2Bh ; '+'
 * 00000001406B404D: jz      short loc_1406B4062
 * 00000001406B404F: mov     edx, 2Bh ; '+'
 * 00000001406B4054: mov     ds, edx
 * 00000001406B4056: mov     es, edx
 * 00000001406B4058: cli
 * 00000001406B4059: swapgs
 * 00000001406B405C: mov     gs, edx
 * 00000001406B405E: swapgs
 * 00000001406B4061: sti
 * 00000001406B4062: mov     rax, [rsi+0F0h]
 * 00000001406B4069: mov     edx, [rsi+0F4h]
 * 00000001406B406F: mov     [rbx-150h], rax
 * 00000001406B4076: test    byte ptr [rsi+3], 4
 * 00000001406B407A: jz      short loc_1406B4088
 * 00000001406B407C: mov     eax, [rsi+680h]
 * 00000001406B4082: mov     edx, [rsi+684h]
 * 00000001406B4088: mov     ecx, 0C0000102h
 * 00000001406B408D: wrmsr
 * 00000001406B408F: test    dword ptr [rbx+38BCh], 10001h
 * 00000001406B4099: jnz     short loc_1406B410D
 * 00000001406B409B: inc     dword ptr [rsi+154h]
 * 00000001406B40A1: cmp     byte ptr [rsi+0C1h], 1
 * 00000001406B40A8: jnz     short loc_1406B40C6
 * 00000001406B40AA: movzx   ax, [rsp+38h+var_10]
 * 00000001406B40B0: or      ax, [rsi+1E6h]
 * 00000001406B40B7: jz      short loc_1406B40C6
 * 00000001406B40B9: mov     ecx, 1
 * 00000001406B40BE: call    HalRequestSoftwareInterrupt
 * 00000001406B40C3: or      rcx, rsp
 * 00000001406B40C6: setz    al
 * 00000001406B40C9: add     rsp, 30h
 * 00000001406B40CD: pop     rbp
 * 00000001406B40CE: retn
 * 00000001406B40CF: test    dword ptr cs:PerfGlobalGroupMask+4, 4
 * 00000001406B40D9: jz      short loc_1406B40E6
 * 00000001406B40DB: mov     rcx, rdi
 * 00000001406B40DE: mov     rdx, rsi
 * 00000001406B40E1: call    EtwTraceContextSwap
 * 00000001406B40E6: test    cs:KiCpuTracingFlags, 2
 * 00000001406B40F0: jz      short loc_1406B40F7
 * 00000001406B40F2: call    KiClearLastBranchRecordStack
 * 00000001406B40F7: test    cs:KiCpuTracingFlags, 4
 * 00000001406B4101: jz      short loc_1406B4108
 * 00000001406B4103: call    KiResetProcessorTraceBuffer
 * 00000001406B4108: jmp     loc_1406B3F45
 * 00000001406B410D: xor     r9, r9; BugCheckParameter3
 * 00000001406B4110: mov     [rsp+38h+BugCheckParameter4], r9; BugCheckParameter4
 * 00000001406B4115: mov     r8, rsi; BugCheckParameter2
 * 00000001406B4118: mov     rdx, rdi; BugCheckParameter1
 * 00000001406B411B: mov     ecx, 0B8h; BugCheckCode
 * 00000001406B4120: call    KeBugCheckEx
 * 00000001406B4126: xor     r9, r9; BugCheckParameter3
 * 00000001406B4129: mov     [rsp+38h+BugCheckParameter4], r9; BugCheckParameter4
 * 00000001406B412E: mov     r8, rsi; BugCheckParameter2
 * 00000001406B4131: mov     rdx, rdi; BugCheckParameter1
 * 00000001406B4134: mov     ecx, 1CEh; BugCheckCode
 * 00000001406B4139: call    KeBugCheckEx
 * 00000001406B413E: xor     ebp, ebp
 * 00000001406B4140: inc     ebp
 * 00000001406B4142: test    cs:HvlLongSpinCountMask, ebp
 * 00000001406B4148: jnz     short loc_1406B4166
 * 00000001406B414A: test    cs:HvlEnlightenments, 40h
 * 00000001406B4154: jz      short loc_1406B4166
 * 00000001406B4156: call    KiCheckVpBackingLongSpinWaitHypercall
 * 00000001406B415B: test    al, al
 * 00000001406B415D: jz      short loc_1406B4166
 * 00000001406B415F: mov     ecx, ebp
 * 00000001406B4161: call    HvlNotifyLongSpinWait
 * 00000001406B4166: pause
 * 00000001406B4168: cmp     byte ptr [rsi+71h], 0
 * 00000001406B416C: jz      loc_1406B3AF8
 * 00000001406B4172: jmp     short loc_1406B4140
 */
