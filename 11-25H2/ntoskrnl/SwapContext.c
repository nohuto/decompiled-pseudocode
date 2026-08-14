// see https://github.com/nohuto/windbg-notes/blob/main/assets/SwapContext.c for a decompilation attempt

/*
 * XREFs of SwapContext @ 0x1406A7870
 * Callers:
 *     KiIdleLoop @ 0x1406A0960 (KiIdleLoop.c)
 *     KiSwapContext @ 0x1406A7790 (KiSwapContext.c)
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x14028F270 (HalRequestSoftwareInterrupt.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiStartThreadCycleAccumulationContextSwap @ 0x140350FB0 (KiStartThreadCycleAccumulationContextSwap.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1403C4700 (HvlSwitchVirtualAddressSpace.c)
 *     KiUpdateSpeculationControl @ 0x1403E3170 (KiUpdateSpeculationControl.c)
 *     KeCheckAndApplyBamQos @ 0x1403E8B80 (KeCheckAndApplyBamQos.c)
 *     KiClearLastBranchRecordStack @ 0x14041F030 (KiClearLastBranchRecordStack.c)
 *     EtwTraceContextSwap @ 0x140429F10 (EtwTraceContextSwap.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     KiResetProcessorTraceBuffer @ 0x1405AD7D0 (KiResetProcessorTraceBuffer.c)
 *     KiRestoreThreadIptState @ 0x1405B4EE0 (KiRestoreThreadIptState.c)
 *     KiSaveThreadIptState @ 0x1405B4F10 (KiSaveThreadIptState.c)
 *     KiCheckAndApplyCacheIsolation @ 0x1405BEA70 (KiCheckAndApplyCacheIsolation.c)
 *     SwapContext @ 0x1406A7870 (SwapContext.c)
 */

/*
 * Hex-Rays decompilation failed for SwapContext @ 0x1406A7870
 * Reason: Hex-Rays returned no pseudocode for 0x1406A7870
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406A7870: push    rbp
 * 00000001406A7872: sub     rsp, 30h
 * 00000001406A7876: prefetchw byte ptr [rsi+71h]
 * 00000001406A787A: mov     [rsp+38h+var_10], cl
 * 00000001406A787E: cmp     byte ptr [rsi+71h], 0
 * 00000001406A7882: jnz     loc_1406A7ECE
 * 00000001406A7888: mov     byte ptr [rsi+71h], 1
 * 00000001406A788C: mov     eax, cs:KiHresetMask
 * 00000001406A7892: test    eax, eax
 * 00000001406A7894: jz      short loc_1406A789C
 * 00000001406A7896: hreset  0
 * 00000001406A789C: mov     eax, cs:KiHwFeedbackResetMask
 * 00000001406A78A2: test    eax, eax
 * 00000001406A78A4: jz      short loc_1406A78AF
 * 00000001406A78A6: xor     edx, edx
 * 00000001406A78A8: mov     ecx, 0C0000502h
 * 00000001406A78AD: wrmsr
 * 00000001406A78AF: cli
 * 00000001406A78B0: mov     rcx, rbx
 * 00000001406A78B3: mov     rdx, rsi
 * 00000001406A78B6: call    KiStartThreadCycleAccumulationContextSwap
 * 00000001406A78BB: inc     dword ptr [rbx+2D3Ch]
 * 00000001406A78C1: mov     rbp, cs:KeFeatureBits
 * 00000001406A78C8: cmp     cs:KiCacheIsoBitmap, 0
 * 00000001406A78CF: jz      short loc_1406A78E3
 * 00000001406A78D1: bt      rbp, 2Ch ; ','
 * 00000001406A78D6: jnb     short loc_1406A78E3
 * 00000001406A78D8: mov     rcx, rbx
 * 00000001406A78DB: mov     rdx, rsi
 * 00000001406A78DE: call    KiCheckAndApplyCacheIsolation
 * 00000001406A78E3: cmp     [rbx+18h], rsi
 * 00000001406A78E7: jz      short loc_1406A790A
 * 00000001406A78E9: movzx   ecx, byte ptr [rsi+204h]
 * 00000001406A78F0: mov     eax, [rbx+0ECh]
 * 00000001406A78F6: xor     eax, ecx
 * 00000001406A78F8: test    eax, 0Fh
 * 00000001406A78FD: jz      short loc_1406A790A
 * 00000001406A78FF: mov     rcx, rbx
 * 00000001406A7902: mov     rdx, rsi
 * 00000001406A7905: call    KeCheckAndApplyBamQos
 * 00000001406A790A: mov     rdx, [rdi+250h]
 * 00000001406A7911: mov     rcx, [rdi+60h]
 * 00000001406A7915: and     rdx, 0FFFFFFFFFFFFFFFDh
 * 00000001406A7919: mov     eax, edx
 * 00000001406A791B: jz      short loc_1406A7947
 * 00000001406A791D: shr     rdx, 20h
 * 00000001406A7921: bt      rbp, 26h ; '&'
 * 00000001406A7926: jb      short loc_1406A793F
 * 00000001406A7928: bt      rbp, 0Fh
 * 00000001406A792D: jb      short loc_1406A7944
 * 00000001406A792F: bt      ebp, 17h
 * 00000001406A7933: jnb     short loc_1406A793A
 * 00000001406A7935: xsave   byte ptr [rcx]
 * 00000001406A7938: jmp     short loc_1406A7947
 * 00000001406A793A: fxsave  dword ptr [rcx]
 * 00000001406A793D: jmp     short loc_1406A7947
 * 00000001406A793F: xsaves  byte ptr [rcx]
 * 00000001406A7942: jmp     short loc_1406A7947
 * 00000001406A7944: xsaveopt byte ptr [rcx]
 * 00000001406A7947: stmxcsr dword ptr [rcx+18h]
 * 00000001406A794B: test    eax, 100h
 * 00000001406A7950: jz      short loc_1406A7963
 * 00000001406A7952: cmp     cs:KiIptMsrMask, 0
 * 00000001406A7959: jz      short loc_1406A7963
 * 00000001406A795B: mov     rcx, rdi
 * 00000001406A795E: call    KiSaveThreadIptState
 * 00000001406A7963: mov     [rdi+58h], rsp
 * 00000001406A7967: mov     rsp, [rsi+58h]
 * 00000001406A796B: test    cs:KiKernelCetEnabled, 1
 * 00000001406A7972: jz      short loc_1406A79A1
 * 00000001406A7974: mov     rcx, [rsi+410h]
 * 00000001406A797B: mov     [rbx+9BA8h], rcx
 * 00000001406A7982: rdsspq  rdx
 * 00000001406A7987: mov     rcx, [rsi+408h]
 * 00000001406A798E: rstorssp qword ptr [rcx]
 * 00000001406A7992: saveprevssp
 * 00000001406A7996: sub     rdx, 8
 * 00000001406A799A: mov     [rdi+408h], rdx
 * 00000001406A79A1: mov     rax, [rdi+220h]
 * 00000001406A79A8: cmp     qword ptr [rax+310h], 0
 * 00000001406A79B0: jz      short loc_1406A79C5
 * 00000001406A79B2: mov     ecx, 0C0000100h
 * 00000001406A79B7: rdmsr
 * 00000001406A79B9: mov     [rdi+678h], eax
 * 00000001406A79BF: mov     [rdi+67Ch], edx
 * 00000001406A79C5: btr     word ptr gs:85Eh, 0
 * 00000001406A79D0: jnb     short loc_1406A79D6
 * 00000001406A79D2: or      byte ptr [rdi+7Eh], 1
 * 00000001406A79D6: bt      word ptr [rsi+7Eh], 0
 * 00000001406A79DC: jnb     short loc_1406A79E7
 * 00000001406A79DE: or      byte ptr gs:85Eh, 1
 * 00000001406A79E7: and     byte ptr [rsi+7Eh], 0FEh
 * 00000001406A79EB: mov     rcx, [rsi+220h]
 * 00000001406A79F2: or      cl, [rbx+6E0h]
 * 00000001406A79F8: and     cl, 0C2h
 * 00000001406A79FB: cmp     rcx, [rdi+220h]
 * 00000001406A7A02: jz      short loc_1406A7A11
 * 00000001406A7A04: and     cl, 0C0h
 * 00000001406A7A07: call    KiUpdateSpeculationControl
 * 00000001406A7A0C: jmp     loc_1406A7BC7
 * 00000001406A7A11: movzx   ecx, byte ptr gs:85Eh
 * 00000001406A7A1A: and     cx, 3
 * 00000001406A7A1E: cmp     cx, 1
 * 00000001406A7A22: jnz     loc_1406A7BC7
 * 00000001406A7A28: cli
 * 00000001406A7A29: movzx   eax, word ptr gs:864h
 * 00000001406A7A32: cmp     gs:866h, ax
 * 00000001406A7A3B: jz      short loc_1406A7A4F
 * 00000001406A7A3D: mov     gs:866h, ax
 * 00000001406A7A46: mov     ecx, 48h ; 'H'
 * 00000001406A7A4B: xor     edx, edx
 * 00000001406A7A4D: wrmsr
 * 00000001406A7A4F: movzx   edx, byte ptr gs:85Ah
 * 00000001406A7A58: test    edx, 10h
 * 00000001406A7A5E: jz      short loc_1406A7A77
 * 00000001406A7A60: mov     eax, 1
 * 00000001406A7A65: xor     edx, edx
 * 00000001406A7A67: mov     ecx, 49h ; 'I'
 * 00000001406A7A6C: wrmsr
 * 00000001406A7A6E: movzx   edx, byte ptr gs:85Ah
 * 00000001406A7A77: test    edx, 40h
 * 00000001406A7A7D: jz      loc_1406A7BBA
 * 00000001406A7A83: call    loc_1406A7B96
 * 00000001406A7A88: add     rsp, 8
 * 00000001406A7A8C: call    loc_1406A7B9F
 * 00000001406A7A91: add     rsp, 8
 * 00000001406A7A95: call    loc_1406A7A88
 * 00000001406A7A9A: add     rsp, 8
 * 00000001406A7A9E: call    loc_1406A7A91
 * 00000001406A7AA3: add     rsp, 8
 * 00000001406A7AA7: call    loc_1406A7A9A
 * 00000001406A7AAC: add     rsp, 8
 * 00000001406A7AB0: call    loc_1406A7AA3
 * 00000001406A7AB5: add     rsp, 8
 * 00000001406A7AB9: call    loc_1406A7AAC
 * 00000001406A7ABE: add     rsp, 8
 * 00000001406A7AC2: call    loc_1406A7AB5
 * 00000001406A7AC7: add     rsp, 8
 * 00000001406A7ACB: call    loc_1406A7ABE
 * 00000001406A7AD0: add     rsp, 8
 * 00000001406A7AD4: call    loc_1406A7AC7
 * 00000001406A7AD9: add     rsp, 8
 * 00000001406A7ADD: call    loc_1406A7AD0
 * 00000001406A7AE2: add     rsp, 8
 * 00000001406A7AE6: call    loc_1406A7AD9
 * 00000001406A7AEB: add     rsp, 8
 * 00000001406A7AEF: call    loc_1406A7AE2
 * 00000001406A7AF4: add     rsp, 8
 * 00000001406A7AF8: call    loc_1406A7AEB
 * 00000001406A7AFD: add     rsp, 8
 * 00000001406A7B01: call    loc_1406A7AF4
 * 00000001406A7B06: add     rsp, 8
 * 00000001406A7B0A: call    loc_1406A7AFD
 * 00000001406A7B0F: add     rsp, 8
 * 00000001406A7B13: call    loc_1406A7B06
 * 00000001406A7B18: add     rsp, 8
 * 00000001406A7B1C: call    loc_1406A7B0F
 * 00000001406A7B21: add     rsp, 8
 * 00000001406A7B25: call    loc_1406A7B18
 * 00000001406A7B2A: add     rsp, 8
 * 00000001406A7B2E: call    loc_1406A7B21
 * 00000001406A7B33: add     rsp, 8
 * 00000001406A7B37: call    loc_1406A7B2A
 * 00000001406A7B3C: add     rsp, 8
 * 00000001406A7B40: call    loc_1406A7B33
 * 00000001406A7B45: add     rsp, 8
 * 00000001406A7B49: call    loc_1406A7B3C
 * 00000001406A7B4E: add     rsp, 8
 * 00000001406A7B52: call    loc_1406A7B45
 * 00000001406A7B57: add     rsp, 8
 * 00000001406A7B5B: call    loc_1406A7B4E
 * 00000001406A7B60: add     rsp, 8
 * 00000001406A7B64: call    loc_1406A7B57
 * 00000001406A7B69: add     rsp, 8
 * 00000001406A7B6D: call    loc_1406A7B60
 * 00000001406A7B72: add     rsp, 8
 * 00000001406A7B76: call    loc_1406A7B69
 * 00000001406A7B7B: add     rsp, 8
 * 00000001406A7B7F: call    loc_1406A7B72
 * 00000001406A7B84: add     rsp, 8
 * 00000001406A7B88: call    loc_1406A7B7B
 * 00000001406A7B8D: add     rsp, 8
 * 00000001406A7B91: call    loc_1406A7B84
 * 00000001406A7B96: add     rsp, 8
 * 00000001406A7B9A: call    loc_1406A7B8D
 * 00000001406A7B9F: add     rsp, 8
 * 00000001406A7BA3: mov     eax, 0DADAh
 * 00000001406A7BA8: test    byte ptr gs:85Ch, 8
 * 00000001406A7BB1: jz      short loc_1406A7BBA
 * 00000001406A7BB3: mov     al, 20h ; ' '
 * 00000001406A7BB5: incsspq rax
 * 00000001406A7BBA: lfence
 * 00000001406A7BBD: or      byte ptr gs:85Eh, 2
 * 00000001406A7BC6: sti
 * 00000001406A7BC7: mov     r14, [rsi+0B8h]
 * 00000001406A7BCE: cmp     r14, [rdi+0B8h]
 * 00000001406A7BD5: jz      loc_1406A7C9A
 * 00000001406A7BDB: movzx   ecx, byte ptr [rbx+0D1h]
 * 00000001406A7BE2: movzx   eax, byte ptr [rbx+0D0h]
 * 00000001406A7BE9: mov     rdx, [r14+80h]
 * 00000001406A7BF0: lock bts [rdx+rax*8+8], rcx
 * 00000001406A7BF7: mov     rcx, [r14+28h]
 * 00000001406A7BFB: test    cs:KiKvaShadow, 1
 * 00000001406A7C02: jz      short loc_1406A7C3D
 * 00000001406A7C04: cli
 * 00000001406A7C05: bt      ecx, 1
 * 00000001406A7C09: jnb     short loc_1406A7C17
 * 00000001406A7C0B: bts     rcx, 3Fh ; '?'
 * 00000001406A7C10: or      dword ptr [rbx+0AE98h], 1
 * 00000001406A7C17: mov     [rbx+0AE80h], rcx
 * 00000001406A7C1E: btr     rcx, 3Fh ; '?'
 * 00000001406A7C23: and     dword ptr [rbx+0AE98h], 0FFFFFFFDh
 * 00000001406A7C2A: bt      dword ptr [r14+160h], 0
 * 00000001406A7C33: jnb     short loc_1406A7C3C
 * 00000001406A7C35: xor     dword ptr [rbx+0AE98h], 3
 * 00000001406A7C3C: sti
 * 00000001406A7C3D: test    cs:HvlEnlightenments, 1
 * 00000001406A7C47: jz      short loc_1406A7C50
 * 00000001406A7C49: call    HvlSwitchVirtualAddressSpace
 * 00000001406A7C4E: jmp     short loc_1406A7C77
 * 00000001406A7C50: mov     cr3, rcx
 * 00000001406A7C53: test    cs:KiKvaShadow, 1
 * 00000001406A7C5A: jz      short loc_1406A7C77
 * 00000001406A7C5C: bt      ecx, 1
 * 00000001406A7C60: jb      short loc_1406A7C77
 * 00000001406A7C62: mov     rax, cr4
 * 00000001406A7C65: xor     rax, 80h
 * 00000001406A7C6B: mov     cr4, rax
 * 00000001406A7C6E: xor     rax, 80h
 * 00000001406A7C74: mov     cr4, rax
 * 00000001406A7C77: movzx   ecx, byte ptr [rbx+0D1h]
 * 00000001406A7C7E: movzx   eax, byte ptr [rbx+0D0h]
 * 00000001406A7C85: mov     rdx, [rdi+0B8h]
 * 00000001406A7C8C: mov     rdx, [rdx+80h]
 * 00000001406A7C93: lock btr [rdx+rax*8+8], rcx
 * 00000001406A7C9A: mov     rax, [rsi+28h]
 * 00000001406A7C9E: test    cs:KiKvaShadow, 1
 * 00000001406A7CA5: jnz     short loc_1406A7CB4
 * 00000001406A7CA7: mov     r15, [rbx-178h]
 * 00000001406A7CAE: mov     [r15+4], rax
 * 00000001406A7CB2: jmp     short loc_1406A7CBB
 * 00000001406A7CB4: mov     [rbx+0AE88h], rax
 * 00000001406A7CBB: mov     [rbx+28h], rax
 * 00000001406A7CBF: test    rax, rax
 * 00000001406A7CC2: jge     loc_1406A7EB6
 * 00000001406A7CC8: cmp     cs:KiCpuTracingFlags, 0
 * 00000001406A7CCF: jnz     loc_1406A7E5F
 * 00000001406A7CD5: bt      rbp, 37h ; '7'
 * 00000001406A7CDA: jnb     short loc_1406A7CFC
 * 00000001406A7CDC: mov     ecx, 1C4h
 * 00000001406A7CE1: mov     rax, [rdi+428h]
 * 00000001406A7CE8: mov     rdx, [rsi+428h]
 * 00000001406A7CEF: cmp     rax, rdx
 * 00000001406A7CF2: jz      short loc_1406A7CFC
 * 00000001406A7CF4: mov     eax, edx
 * 00000001406A7CF6: shr     rdx, 20h
 * 00000001406A7CFA: wrmsr
 * 00000001406A7CFC: mov     rdx, [rdi+250h]
 * 00000001406A7D03: mov     rax, rdx
 * 00000001406A7D06: and     rax, 40000h
 * 00000001406A7D0C: and     rdx, cs:KeEnabledSupervisorXStateFeatures
 * 00000001406A7D13: or      rdx, rax
 * 00000001406A7D16: or      rdx, [rsi+250h]
 * 00000001406A7D1D: mov     byte ptr [rdi+71h], 0
 * 00000001406A7D21: mov     rcx, [rsi+60h]
 * 00000001406A7D25: and     rdx, 0FFFFFFFFFFFFFFFDh
 * 00000001406A7D29: mov     eax, edx
 * 00000001406A7D2B: jz      short loc_1406A7D58
 * 00000001406A7D2D: shr     rdx, 20h
 * 00000001406A7D31: bt      rbp, 29h ; ')'
 * 00000001406A7D36: jnb     short loc_1406A7D3E
 * 00000001406A7D38: test    al, 1
 * 00000001406A7D3A: jz      short loc_1406A7D3E
 * 00000001406A7D3C: fninit
 * 00000001406A7D3E: bt      rbp, 26h ; '&'
 * 00000001406A7D43: jb      short loc_1406A7D50
 * 00000001406A7D45: bt      ebp, 17h
 * 00000001406A7D49: jb      short loc_1406A7D55
 * 00000001406A7D4B: fxrstor dword ptr [rcx]
 * 00000001406A7D4E: jmp     short loc_1406A7D58
 * 00000001406A7D50: xrstors byte ptr [rcx]
 * 00000001406A7D53: jmp     short loc_1406A7D58
 * 00000001406A7D55: xrstor  byte ptr [rcx]
 * 00000001406A7D58: ldmxcsr dword ptr [rcx+18h]
 * 00000001406A7D5C: test    eax, 100h
 * 00000001406A7D61: jz      short loc_1406A7D74
 * 00000001406A7D63: cmp     cs:KiIptMsrMask, 0
 * 00000001406A7D6A: jz      short loc_1406A7D74
 * 00000001406A7D6C: mov     rcx, rsi
 * 00000001406A7D6F: call    KiRestoreThreadIptState
 * 00000001406A7D74: bt      dword ptr [rsi+74h], 0Ah
 * 00000001406A7D79: jb      loc_1406A7E1F
 * 00000001406A7D7F: mov     rax, [rsi+220h]
 * 00000001406A7D86: cmp     qword ptr [rax+310h], 0
 * 00000001406A7D8E: mov     eax, [rsi+678h]
 * 00000001406A7D94: jz      short loc_1406A7DA1
 * 00000001406A7D96: mov     eax, [rsi+0F0h]
 * 00000001406A7D9C: add     eax, 2000h
 * 00000001406A7DA1: mov     rcx, [rbx-180h]
 * 00000001406A7DA8: mov     [rcx+52h], ax
 * 00000001406A7DAC: shr     eax, 10h
 * 00000001406A7DAF: mov     [rcx+54h], al
 * 00000001406A7DB2: mov     [rcx+57h], ah
 * 00000001406A7DB5: mov     eax, 53h ; 'S'
 * 00000001406A7DBA: mov     fs, eax
 * 00000001406A7DBC: mov     eax, [rsi+678h]
 * 00000001406A7DC2: mov     edx, [rsi+67Ch]
 * 00000001406A7DC8: mov     ecx, 0C0000100h
 * 00000001406A7DCD: wrmsr
 * 00000001406A7DCF: mov     eax, ds
 * 00000001406A7DD1: mov     edx, es
 * 00000001406A7DD3: and     eax, edx
 * 00000001406A7DD5: mov     edx, gs
 * 00000001406A7DD7: and     eax, edx
 * 00000001406A7DD9: cmp     ax, 2Bh ; '+'
 * 00000001406A7DDD: jz      short loc_1406A7DF2
 * 00000001406A7DDF: mov     edx, 2Bh ; '+'
 * 00000001406A7DE4: mov     ds, edx
 * 00000001406A7DE6: mov     es, edx
 * 00000001406A7DE8: cli
 * 00000001406A7DE9: swapgs
 * 00000001406A7DEC: mov     gs, edx
 * 00000001406A7DEE: swapgs
 * 00000001406A7DF1: sti
 * 00000001406A7DF2: mov     rax, [rsi+0F0h]
 * 00000001406A7DF9: mov     edx, [rsi+0F4h]
 * 00000001406A7DFF: mov     [rbx-150h], rax
 * 00000001406A7E06: test    byte ptr [rsi+3], 4
 * 00000001406A7E0A: jz      short loc_1406A7E18
 * 00000001406A7E0C: mov     eax, [rsi+680h]
 * 00000001406A7E12: mov     edx, [rsi+684h]
 * 00000001406A7E18: mov     ecx, 0C0000102h
 * 00000001406A7E1D: wrmsr
 * 00000001406A7E1F: test    dword ptr [rbx+38BCh], 10001h
 * 00000001406A7E29: jnz     short loc_1406A7E9D
 * 00000001406A7E2B: inc     dword ptr [rsi+154h]
 * 00000001406A7E31: cmp     byte ptr [rsi+0C1h], 1
 * 00000001406A7E38: jnz     short loc_1406A7E56
 * 00000001406A7E3A: movzx   ax, [rsp+38h+var_10]
 * 00000001406A7E40: or      ax, [rsi+1E6h]
 * 00000001406A7E47: jz      short loc_1406A7E56
 * 00000001406A7E49: mov     ecx, 1
 * 00000001406A7E4E: call    HalRequestSoftwareInterrupt
 * 00000001406A7E53: or      rcx, rsp
 * 00000001406A7E56: setz    al
 * 00000001406A7E59: add     rsp, 30h
 * 00000001406A7E5D: pop     rbp
 * 00000001406A7E5E: retn
 * 00000001406A7E5F: test    dword ptr cs:PerfGlobalGroupMask+4, 4
 * 00000001406A7E69: jz      short loc_1406A7E76
 * 00000001406A7E6B: mov     rcx, rdi
 * 00000001406A7E6E: mov     rdx, rsi
 * 00000001406A7E71: call    EtwTraceContextSwap
 * 00000001406A7E76: test    cs:KiCpuTracingFlags, 2
 * 00000001406A7E80: jz      short loc_1406A7E87
 * 00000001406A7E82: call    KiClearLastBranchRecordStack
 * 00000001406A7E87: test    cs:KiCpuTracingFlags, 4
 * 00000001406A7E91: jz      short loc_1406A7E98
 * 00000001406A7E93: call    KiResetProcessorTraceBuffer
 * 00000001406A7E98: jmp     loc_1406A7CD5
 * 00000001406A7E9D: xor     r9, r9; BugCheckParameter3
 * 00000001406A7EA0: mov     [rsp+38h+BugCheckParameter4], r9; BugCheckParameter4
 * 00000001406A7EA5: mov     r8, rsi; BugCheckParameter2
 * 00000001406A7EA8: mov     rdx, rdi; BugCheckParameter1
 * 00000001406A7EAB: mov     ecx, 0B8h; BugCheckCode
 * 00000001406A7EB0: call    KeBugCheckEx
 * 00000001406A7EB6: xor     r9, r9; BugCheckParameter3
 * 00000001406A7EB9: mov     [rsp+38h+BugCheckParameter4], r9; BugCheckParameter4
 * 00000001406A7EBE: mov     r8, rsi; BugCheckParameter2
 * 00000001406A7EC1: mov     rdx, rdi; BugCheckParameter1
 * 00000001406A7EC4: mov     ecx, 1CEh; BugCheckCode
 * 00000001406A7EC9: call    KeBugCheckEx
 * 00000001406A7ECE: xor     ebp, ebp
 * 00000001406A7ED0: inc     ebp
 * 00000001406A7ED2: test    cs:HvlLongSpinCountMask, ebp
 * 00000001406A7ED8: jnz     short loc_1406A7EF6
 * 00000001406A7EDA: test    cs:HvlEnlightenments, 40h
 * 00000001406A7EE4: jz      short loc_1406A7EF6
 * 00000001406A7EE6: call    KiCheckVpBackingLongSpinWaitHypercall
 * 00000001406A7EEB: test    al, al
 * 00000001406A7EED: jz      short loc_1406A7EF6
 * 00000001406A7EEF: mov     ecx, ebp
 * 00000001406A7EF1: call    HvlNotifyLongSpinWait
 * 00000001406A7EF6: pause
 * 00000001406A7EF8: cmp     byte ptr [rsi+71h], 0
 * 00000001406A7EFC: jz      loc_1406A7888
 * 00000001406A7F02: jmp     short loc_1406A7ED0
 */
