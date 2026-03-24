/*
 * XREFs of SwapContext @ 0x1406B2B40
 * Callers:
 *     KiIdleLoop @ 0x1406ABC30 (KiIdleLoop.c)
 *     KiSwapContext @ 0x1406B2A60 (KiSwapContext.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeCheckAndApplyBamQos @ 0x14029DF30 (KeCheckAndApplyBamQos.c)
 *     KiStartThreadCycleAccumulationContextSwap @ 0x14030BC30 (KiStartThreadCycleAccumulationContextSwap.c)
 *     HalRequestSoftwareInterrupt @ 0x14034AB60 (HalRequestSoftwareInterrupt.c)
 *     KiUpdateSpeculationControl @ 0x1403EA960 (KiUpdateSpeculationControl.c)
 *     KiClearLastBranchRecordStack @ 0x14041C500 (KiClearLastBranchRecordStack.c)
 *     EtwTraceContextSwap @ 0x140421D90 (EtwTraceContextSwap.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1404D48A0 (HvlSwitchVirtualAddressSpace.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     KiResetProcessorTraceBuffer @ 0x1405B1160 (KiResetProcessorTraceBuffer.c)
 *     KiRestoreThreadIptState @ 0x1405B8CA0 (KiRestoreThreadIptState.c)
 *     KiSaveThreadIptState @ 0x1405B8CD0 (KiSaveThreadIptState.c)
 *     KiCheckAndApplyCacheIsolation @ 0x1405C2B50 (KiCheckAndApplyCacheIsolation.c)
 *     SwapContext @ 0x1406B2B40 (SwapContext.c)
 */

/*
 * Hex-Rays decompilation failed for SwapContext @ 0x1406B2B40
 * Reason: Hex-Rays returned no pseudocode for 0x1406B2B40
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B2B40: push    rbp
 * 00000001406B2B42: sub     rsp, 30h
 * 00000001406B2B46: prefetchw byte ptr [rsi+71h]
 * 00000001406B2B4A: mov     [rsp+38h+var_10], cl
 * 00000001406B2B4E: cmp     byte ptr [rsi+71h], 0
 * 00000001406B2B52: jnz     loc_1406B319E
 * 00000001406B2B58: mov     byte ptr [rsi+71h], 1
 * 00000001406B2B5C: mov     eax, cs:KiHresetMask
 * 00000001406B2B62: test    eax, eax
 * 00000001406B2B64: jz      short loc_1406B2B6C
 * 00000001406B2B66: hreset  0
 * 00000001406B2B6C: mov     eax, cs:KiHwFeedbackResetMask
 * 00000001406B2B72: test    eax, eax
 * 00000001406B2B74: jz      short loc_1406B2B7F
 * 00000001406B2B76: xor     edx, edx
 * 00000001406B2B78: mov     ecx, 0C0000502h
 * 00000001406B2B7D: wrmsr
 * 00000001406B2B7F: cli
 * 00000001406B2B80: mov     rcx, rbx
 * 00000001406B2B83: mov     rdx, rsi
 * 00000001406B2B86: call    KiStartThreadCycleAccumulationContextSwap
 * 00000001406B2B8B: inc     dword ptr [rbx+2D3Ch]
 * 00000001406B2B91: mov     rbp, cs:KeFeatureBits
 * 00000001406B2B98: cmp     cs:KiCacheIsoBitmap, 0
 * 00000001406B2B9F: jz      short loc_1406B2BB3
 * 00000001406B2BA1: bt      rbp, 2Ch ; ','
 * 00000001406B2BA6: jnb     short loc_1406B2BB3
 * 00000001406B2BA8: mov     rcx, rbx
 * 00000001406B2BAB: mov     rdx, rsi
 * 00000001406B2BAE: call    KiCheckAndApplyCacheIsolation
 * 00000001406B2BB3: cmp     [rbx+18h], rsi
 * 00000001406B2BB7: jz      short loc_1406B2BDA
 * 00000001406B2BB9: movzx   ecx, byte ptr [rsi+204h]
 * 00000001406B2BC0: mov     eax, [rbx+0ECh]
 * 00000001406B2BC6: xor     eax, ecx
 * 00000001406B2BC8: test    eax, 0Fh
 * 00000001406B2BCD: jz      short loc_1406B2BDA
 * 00000001406B2BCF: mov     rcx, rbx
 * 00000001406B2BD2: mov     rdx, rsi
 * 00000001406B2BD5: call    KeCheckAndApplyBamQos
 * 00000001406B2BDA: mov     rdx, [rdi+250h]
 * 00000001406B2BE1: mov     rcx, [rdi+60h]
 * 00000001406B2BE5: and     rdx, 0FFFFFFFFFFFFFFFDh
 * 00000001406B2BE9: mov     eax, edx
 * 00000001406B2BEB: jz      short loc_1406B2C17
 * 00000001406B2BED: shr     rdx, 20h
 * 00000001406B2BF1: bt      rbp, 26h ; '&'
 * 00000001406B2BF6: jb      short loc_1406B2C0F
 * 00000001406B2BF8: bt      rbp, 0Fh
 * 00000001406B2BFD: jb      short loc_1406B2C14
 * 00000001406B2BFF: bt      ebp, 17h
 * 00000001406B2C03: jnb     short loc_1406B2C0A
 * 00000001406B2C05: xsave   byte ptr [rcx]
 * 00000001406B2C08: jmp     short loc_1406B2C17
 * 00000001406B2C0A: fxsave  dword ptr [rcx]
 * 00000001406B2C0D: jmp     short loc_1406B2C17
 * 00000001406B2C0F: xsaves  byte ptr [rcx]
 * 00000001406B2C12: jmp     short loc_1406B2C17
 * 00000001406B2C14: xsaveopt byte ptr [rcx]
 * 00000001406B2C17: stmxcsr dword ptr [rcx+18h]
 * 00000001406B2C1B: test    eax, 100h
 * 00000001406B2C20: jz      short loc_1406B2C33
 * 00000001406B2C22: cmp     cs:KiIptMsrMask, 0
 * 00000001406B2C29: jz      short loc_1406B2C33
 * 00000001406B2C2B: mov     rcx, rdi
 * 00000001406B2C2E: call    KiSaveThreadIptState
 * 00000001406B2C33: mov     [rdi+58h], rsp
 * 00000001406B2C37: mov     rsp, [rsi+58h]
 * 00000001406B2C3B: test    cs:KiKernelCetEnabled, 1
 * 00000001406B2C42: jz      short loc_1406B2C71
 * 00000001406B2C44: mov     rcx, [rsi+410h]
 * 00000001406B2C4B: mov     [rbx+9BA8h], rcx
 * 00000001406B2C52: rdsspq  rdx
 * 00000001406B2C57: mov     rcx, [rsi+408h]
 * 00000001406B2C5E: rstorssp qword ptr [rcx]
 * 00000001406B2C62: saveprevssp
 * 00000001406B2C66: sub     rdx, 8
 * 00000001406B2C6A: mov     [rdi+408h], rdx
 * 00000001406B2C71: mov     rax, [rdi+220h]
 * 00000001406B2C78: cmp     qword ptr [rax+310h], 0
 * 00000001406B2C80: jz      short loc_1406B2C95
 * 00000001406B2C82: mov     ecx, 0C0000100h
 * 00000001406B2C87: rdmsr
 * 00000001406B2C89: mov     [rdi+678h], eax
 * 00000001406B2C8F: mov     [rdi+67Ch], edx
 * 00000001406B2C95: btr     word ptr gs:85Eh, 0
 * 00000001406B2CA0: jnb     short loc_1406B2CA6
 * 00000001406B2CA2: or      byte ptr [rdi+7Eh], 1
 * 00000001406B2CA6: bt      word ptr [rsi+7Eh], 0
 * 00000001406B2CAC: jnb     short loc_1406B2CB7
 * 00000001406B2CAE: or      byte ptr gs:85Eh, 1
 * 00000001406B2CB7: and     byte ptr [rsi+7Eh], 0FEh
 * 00000001406B2CBB: mov     rcx, [rsi+220h]
 * 00000001406B2CC2: or      cl, [rbx+6E0h]
 * 00000001406B2CC8: and     cl, 0C2h
 * 00000001406B2CCB: cmp     rcx, [rdi+220h]
 * 00000001406B2CD2: jz      short loc_1406B2CE1
 * 00000001406B2CD4: and     cl, 0C0h
 * 00000001406B2CD7: call    KiUpdateSpeculationControl
 * 00000001406B2CDC: jmp     loc_1406B2E97
 * 00000001406B2CE1: movzx   ecx, byte ptr gs:85Eh
 * 00000001406B2CEA: and     cx, 3
 * 00000001406B2CEE: cmp     cx, 1
 * 00000001406B2CF2: jnz     loc_1406B2E97
 * 00000001406B2CF8: cli
 * 00000001406B2CF9: movzx   eax, word ptr gs:864h
 * 00000001406B2D02: cmp     gs:866h, ax
 * 00000001406B2D0B: jz      short loc_1406B2D1F
 * 00000001406B2D0D: mov     gs:866h, ax
 * 00000001406B2D16: mov     ecx, 48h ; 'H'
 * 00000001406B2D1B: xor     edx, edx
 * 00000001406B2D1D: wrmsr
 * 00000001406B2D1F: movzx   edx, byte ptr gs:85Ah
 * 00000001406B2D28: test    edx, 10h
 * 00000001406B2D2E: jz      short loc_1406B2D47
 * 00000001406B2D30: mov     eax, 1
 * 00000001406B2D35: xor     edx, edx
 * 00000001406B2D37: mov     ecx, 49h ; 'I'
 * 00000001406B2D3C: wrmsr
 * 00000001406B2D3E: movzx   edx, byte ptr gs:85Ah
 * 00000001406B2D47: test    edx, 40h
 * 00000001406B2D4D: jz      loc_1406B2E8A
 * 00000001406B2D53: call    loc_1406B2E66
 * 00000001406B2D58: add     rsp, 8
 * 00000001406B2D5C: call    loc_1406B2E6F
 * 00000001406B2D61: add     rsp, 8
 * 00000001406B2D65: call    loc_1406B2D58
 * 00000001406B2D6A: add     rsp, 8
 * 00000001406B2D6E: call    loc_1406B2D61
 * 00000001406B2D73: add     rsp, 8
 * 00000001406B2D77: call    loc_1406B2D6A
 * 00000001406B2D7C: add     rsp, 8
 * 00000001406B2D80: call    loc_1406B2D73
 * 00000001406B2D85: add     rsp, 8
 * 00000001406B2D89: call    loc_1406B2D7C
 * 00000001406B2D8E: add     rsp, 8
 * 00000001406B2D92: call    loc_1406B2D85
 * 00000001406B2D97: add     rsp, 8
 * 00000001406B2D9B: call    loc_1406B2D8E
 * 00000001406B2DA0: add     rsp, 8
 * 00000001406B2DA4: call    loc_1406B2D97
 * 00000001406B2DA9: add     rsp, 8
 * 00000001406B2DAD: call    loc_1406B2DA0
 * 00000001406B2DB2: add     rsp, 8
 * 00000001406B2DB6: call    loc_1406B2DA9
 * 00000001406B2DBB: add     rsp, 8
 * 00000001406B2DBF: call    loc_1406B2DB2
 * 00000001406B2DC4: add     rsp, 8
 * 00000001406B2DC8: call    loc_1406B2DBB
 * 00000001406B2DCD: add     rsp, 8
 * 00000001406B2DD1: call    loc_1406B2DC4
 * 00000001406B2DD6: add     rsp, 8
 * 00000001406B2DDA: call    loc_1406B2DCD
 * 00000001406B2DDF: add     rsp, 8
 * 00000001406B2DE3: call    loc_1406B2DD6
 * 00000001406B2DE8: add     rsp, 8
 * 00000001406B2DEC: call    loc_1406B2DDF
 * 00000001406B2DF1: add     rsp, 8
 * 00000001406B2DF5: call    loc_1406B2DE8
 * 00000001406B2DFA: add     rsp, 8
 * 00000001406B2DFE: call    loc_1406B2DF1
 * 00000001406B2E03: add     rsp, 8
 * 00000001406B2E07: call    loc_1406B2DFA
 * 00000001406B2E0C: add     rsp, 8
 * 00000001406B2E10: call    loc_1406B2E03
 * 00000001406B2E15: add     rsp, 8
 * 00000001406B2E19: call    loc_1406B2E0C
 * 00000001406B2E1E: add     rsp, 8
 * 00000001406B2E22: call    loc_1406B2E15
 * 00000001406B2E27: add     rsp, 8
 * 00000001406B2E2B: call    loc_1406B2E1E
 * 00000001406B2E30: add     rsp, 8
 * 00000001406B2E34: call    loc_1406B2E27
 * 00000001406B2E39: add     rsp, 8
 * 00000001406B2E3D: call    loc_1406B2E30
 * 00000001406B2E42: add     rsp, 8
 * 00000001406B2E46: call    loc_1406B2E39
 * 00000001406B2E4B: add     rsp, 8
 * 00000001406B2E4F: call    loc_1406B2E42
 * 00000001406B2E54: add     rsp, 8
 * 00000001406B2E58: call    loc_1406B2E4B
 * 00000001406B2E5D: add     rsp, 8
 * 00000001406B2E61: call    loc_1406B2E54
 * 00000001406B2E66: add     rsp, 8
 * 00000001406B2E6A: call    loc_1406B2E5D
 * 00000001406B2E6F: add     rsp, 8
 * 00000001406B2E73: mov     eax, 0DADAh
 * 00000001406B2E78: test    byte ptr gs:85Ch, 8
 * 00000001406B2E81: jz      short loc_1406B2E8A
 * 00000001406B2E83: mov     al, 20h ; ' '
 * 00000001406B2E85: incsspq rax
 * 00000001406B2E8A: lfence
 * 00000001406B2E8D: or      byte ptr gs:85Eh, 2
 * 00000001406B2E96: sti
 * 00000001406B2E97: mov     r14, [rsi+0B8h]
 * 00000001406B2E9E: cmp     r14, [rdi+0B8h]
 * 00000001406B2EA5: jz      loc_1406B2F6A
 * 00000001406B2EAB: movzx   ecx, byte ptr [rbx+0D1h]
 * 00000001406B2EB2: movzx   eax, byte ptr [rbx+0D0h]
 * 00000001406B2EB9: mov     rdx, [r14+80h]
 * 00000001406B2EC0: lock bts [rdx+rax*8+8], rcx
 * 00000001406B2EC7: mov     rcx, [r14+28h]
 * 00000001406B2ECB: test    cs:KiKvaShadow, 1
 * 00000001406B2ED2: jz      short loc_1406B2F0D
 * 00000001406B2ED4: cli
 * 00000001406B2ED5: bt      ecx, 1
 * 00000001406B2ED9: jnb     short loc_1406B2EE7
 * 00000001406B2EDB: bts     rcx, 3Fh ; '?'
 * 00000001406B2EE0: or      dword ptr [rbx+0AE98h], 1
 * 00000001406B2EE7: mov     [rbx+0AE80h], rcx
 * 00000001406B2EEE: btr     rcx, 3Fh ; '?'
 * 00000001406B2EF3: and     dword ptr [rbx+0AE98h], 0FFFFFFFDh
 * 00000001406B2EFA: bt      dword ptr [r14+160h], 0
 * 00000001406B2F03: jnb     short loc_1406B2F0C
 * 00000001406B2F05: xor     dword ptr [rbx+0AE98h], 3
 * 00000001406B2F0C: sti
 * 00000001406B2F0D: test    cs:HvlEnlightenments, 1
 * 00000001406B2F17: jz      short loc_1406B2F20
 * 00000001406B2F19: call    HvlSwitchVirtualAddressSpace
 * 00000001406B2F1E: jmp     short loc_1406B2F47
 * 00000001406B2F20: mov     cr3, rcx
 * 00000001406B2F23: test    cs:KiKvaShadow, 1
 * 00000001406B2F2A: jz      short loc_1406B2F47
 * 00000001406B2F2C: bt      ecx, 1
 * 00000001406B2F30: jb      short loc_1406B2F47
 * 00000001406B2F32: mov     rax, cr4
 * 00000001406B2F35: xor     rax, 80h
 * 00000001406B2F3B: mov     cr4, rax
 * 00000001406B2F3E: xor     rax, 80h
 * 00000001406B2F44: mov     cr4, rax
 * 00000001406B2F47: movzx   ecx, byte ptr [rbx+0D1h]
 * 00000001406B2F4E: movzx   eax, byte ptr [rbx+0D0h]
 * 00000001406B2F55: mov     rdx, [rdi+0B8h]
 * 00000001406B2F5C: mov     rdx, [rdx+80h]
 * 00000001406B2F63: lock btr [rdx+rax*8+8], rcx
 * 00000001406B2F6A: mov     rax, [rsi+28h]
 * 00000001406B2F6E: test    cs:KiKvaShadow, 1
 * 00000001406B2F75: jnz     short loc_1406B2F84
 * 00000001406B2F77: mov     r15, [rbx-178h]
 * 00000001406B2F7E: mov     [r15+4], rax
 * 00000001406B2F82: jmp     short loc_1406B2F8B
 * 00000001406B2F84: mov     [rbx+0AE88h], rax
 * 00000001406B2F8B: mov     [rbx+28h], rax
 * 00000001406B2F8F: test    rax, rax
 * 00000001406B2F92: jge     loc_1406B3186
 * 00000001406B2F98: cmp     cs:KiCpuTracingFlags, 0
 * 00000001406B2F9F: jnz     loc_1406B312F
 * 00000001406B2FA5: bt      rbp, 37h ; '7'
 * 00000001406B2FAA: jnb     short loc_1406B2FCC
 * 00000001406B2FAC: mov     ecx, 1C4h
 * 00000001406B2FB1: mov     rax, [rdi+428h]
 * 00000001406B2FB8: mov     rdx, [rsi+428h]
 * 00000001406B2FBF: cmp     rax, rdx
 * 00000001406B2FC2: jz      short loc_1406B2FCC
 * 00000001406B2FC4: mov     eax, edx
 * 00000001406B2FC6: shr     rdx, 20h
 * 00000001406B2FCA: wrmsr
 * 00000001406B2FCC: mov     rdx, [rdi+250h]
 * 00000001406B2FD3: mov     rax, rdx
 * 00000001406B2FD6: and     rax, 40000h
 * 00000001406B2FDC: and     rdx, cs:KeEnabledSupervisorXStateFeatures
 * 00000001406B2FE3: or      rdx, rax
 * 00000001406B2FE6: or      rdx, [rsi+250h]
 * 00000001406B2FED: mov     byte ptr [rdi+71h], 0
 * 00000001406B2FF1: mov     rcx, [rsi+60h]
 * 00000001406B2FF5: and     rdx, 0FFFFFFFFFFFFFFFDh
 * 00000001406B2FF9: mov     eax, edx
 * 00000001406B2FFB: jz      short loc_1406B3028
 * 00000001406B2FFD: shr     rdx, 20h
 * 00000001406B3001: bt      rbp, 29h ; ')'
 * 00000001406B3006: jnb     short loc_1406B300E
 * 00000001406B3008: test    al, 1
 * 00000001406B300A: jz      short loc_1406B300E
 * 00000001406B300C: fninit
 * 00000001406B300E: bt      rbp, 26h ; '&'
 * 00000001406B3013: jb      short loc_1406B3020
 * 00000001406B3015: bt      ebp, 17h
 * 00000001406B3019: jb      short loc_1406B3025
 * 00000001406B301B: fxrstor dword ptr [rcx]
 * 00000001406B301E: jmp     short loc_1406B3028
 * 00000001406B3020: xrstors byte ptr [rcx]
 * 00000001406B3023: jmp     short loc_1406B3028
 * 00000001406B3025: xrstor  byte ptr [rcx]
 * 00000001406B3028: ldmxcsr dword ptr [rcx+18h]
 * 00000001406B302C: test    eax, 100h
 * 00000001406B3031: jz      short loc_1406B3044
 * 00000001406B3033: cmp     cs:KiIptMsrMask, 0
 * 00000001406B303A: jz      short loc_1406B3044
 * 00000001406B303C: mov     rcx, rsi
 * 00000001406B303F: call    KiRestoreThreadIptState
 * 00000001406B3044: bt      dword ptr [rsi+74h], 0Ah
 * 00000001406B3049: jb      loc_1406B30EF
 * 00000001406B304F: mov     rax, [rsi+220h]
 * 00000001406B3056: cmp     qword ptr [rax+310h], 0
 * 00000001406B305E: mov     eax, [rsi+678h]
 * 00000001406B3064: jz      short loc_1406B3071
 * 00000001406B3066: mov     eax, [rsi+0F0h]
 * 00000001406B306C: add     eax, 2000h
 * 00000001406B3071: mov     rcx, [rbx-180h]
 * 00000001406B3078: mov     [rcx+52h], ax
 * 00000001406B307C: shr     eax, 10h
 * 00000001406B307F: mov     [rcx+54h], al
 * 00000001406B3082: mov     [rcx+57h], ah
 * 00000001406B3085: mov     eax, 53h ; 'S'
 * 00000001406B308A: mov     fs, eax
 * 00000001406B308C: mov     eax, [rsi+678h]
 * 00000001406B3092: mov     edx, [rsi+67Ch]
 * 00000001406B3098: mov     ecx, 0C0000100h
 * 00000001406B309D: wrmsr
 * 00000001406B309F: mov     eax, ds
 * 00000001406B30A1: mov     edx, es
 * 00000001406B30A3: and     eax, edx
 * 00000001406B30A5: mov     edx, gs
 * 00000001406B30A7: and     eax, edx
 * 00000001406B30A9: cmp     ax, 2Bh ; '+'
 * 00000001406B30AD: jz      short loc_1406B30C2
 * 00000001406B30AF: mov     edx, 2Bh ; '+'
 * 00000001406B30B4: mov     ds, edx
 * 00000001406B30B6: mov     es, edx
 * 00000001406B30B8: cli
 * 00000001406B30B9: swapgs
 * 00000001406B30BC: mov     gs, edx
 * 00000001406B30BE: swapgs
 * 00000001406B30C1: sti
 * 00000001406B30C2: mov     rax, [rsi+0F0h]
 * 00000001406B30C9: mov     edx, [rsi+0F4h]
 * 00000001406B30CF: mov     [rbx-150h], rax
 * 00000001406B30D6: test    byte ptr [rsi+3], 4
 * 00000001406B30DA: jz      short loc_1406B30E8
 * 00000001406B30DC: mov     eax, [rsi+680h]
 * 00000001406B30E2: mov     edx, [rsi+684h]
 * 00000001406B30E8: mov     ecx, 0C0000102h
 * 00000001406B30ED: wrmsr
 * 00000001406B30EF: test    dword ptr [rbx+38BCh], 10001h
 * 00000001406B30F9: jnz     short loc_1406B316D
 * 00000001406B30FB: inc     dword ptr [rsi+154h]
 * 00000001406B3101: cmp     byte ptr [rsi+0C1h], 1
 * 00000001406B3108: jnz     short loc_1406B3126
 * 00000001406B310A: movzx   ax, [rsp+38h+var_10]
 * 00000001406B3110: or      ax, [rsi+1E6h]
 * 00000001406B3117: jz      short loc_1406B3126
 * 00000001406B3119: mov     ecx, 1
 * 00000001406B311E: call    HalRequestSoftwareInterrupt
 * 00000001406B3123: or      rcx, rsp
 * 00000001406B3126: setz    al
 * 00000001406B3129: add     rsp, 30h
 * 00000001406B312D: pop     rbp
 * 00000001406B312E: retn
 * 00000001406B312F: test    dword ptr cs:PerfGlobalGroupMask+4, 4
 * 00000001406B3139: jz      short loc_1406B3146
 * 00000001406B313B: mov     rcx, rdi
 * 00000001406B313E: mov     rdx, rsi
 * 00000001406B3141: call    EtwTraceContextSwap
 * 00000001406B3146: test    cs:KiCpuTracingFlags, 2
 * 00000001406B3150: jz      short loc_1406B3157
 * 00000001406B3152: call    KiClearLastBranchRecordStack
 * 00000001406B3157: test    cs:KiCpuTracingFlags, 4
 * 00000001406B3161: jz      short loc_1406B3168
 * 00000001406B3163: call    KiResetProcessorTraceBuffer
 * 00000001406B3168: jmp     loc_1406B2FA5
 * 00000001406B316D: xor     r9, r9; BugCheckParameter3
 * 00000001406B3170: mov     [rsp+38h+BugCheckParameter4], r9; BugCheckParameter4
 * 00000001406B3175: mov     r8, rsi; BugCheckParameter2
 * 00000001406B3178: mov     rdx, rdi; BugCheckParameter1
 * 00000001406B317B: mov     ecx, 0B8h; BugCheckCode
 * 00000001406B3180: call    KeBugCheckEx
 * 00000001406B3186: xor     r9, r9; BugCheckParameter3
 * 00000001406B3189: mov     [rsp+38h+BugCheckParameter4], r9; BugCheckParameter4
 * 00000001406B318E: mov     r8, rsi; BugCheckParameter2
 * 00000001406B3191: mov     rdx, rdi; BugCheckParameter1
 * 00000001406B3194: mov     ecx, 1CEh; BugCheckCode
 * 00000001406B3199: call    KeBugCheckEx
 * 00000001406B319E: xor     ebp, ebp
 * 00000001406B31A0: inc     ebp
 * 00000001406B31A2: test    cs:HvlLongSpinCountMask, ebp
 * 00000001406B31A8: jnz     short loc_1406B31C6
 * 00000001406B31AA: test    cs:HvlEnlightenments, 40h
 * 00000001406B31B4: jz      short loc_1406B31C6
 * 00000001406B31B6: call    KiCheckVpBackingLongSpinWaitHypercall
 * 00000001406B31BB: test    al, al
 * 00000001406B31BD: jz      short loc_1406B31C6
 * 00000001406B31BF: mov     ecx, ebp
 * 00000001406B31C1: call    HvlNotifyLongSpinWait
 * 00000001406B31C6: pause
 * 00000001406B31C8: cmp     byte ptr [rsi+71h], 0
 * 00000001406B31CC: jz      loc_1406B2B58
 * 00000001406B31D2: jmp     short loc_1406B31A0
 */
