/*
 * XREFs of KiRestoreSetContextState @ 0x14069FCF0
 * Callers:
 *     NtContinueEx @ 0x14069F120 (NtContinueEx.c)
 *     NtRaiseException @ 0x14069F5B0 (NtRaiseException.c)
 *     KxStartUserThread @ 0x1406A0EA0 (KxStartUserThread.c)
 *     KiChainedDispatch @ 0x1406A14D0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1406A1B80 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1406A1F60 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1406A2340 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1406A2720 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1406A2AF0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1406A36D0 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1406A3E70 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x1406A57A0 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1406A5B90 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1406A60C0 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1406A6810 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1406A6F70 (KiIpiInterrupt.c)
 *     NtCallEnclave @ 0x1406A8BF0 (NtCallEnclave.c)
 *     KiBoundFault @ 0x1406AC140 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1406AC840 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x1406AE840 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x1406AFF00 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x1406B0A00 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x1406B1140 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x1406B2B40 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x1406B3A00 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1406B3F40 (KiFastFailDispatch.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1403E3F50 (KiUpdateStibpPairing.c)
 *     KeContextToKframes @ 0x1404F93B0 (KeContextToKframes.c)
 *     KiRestoreDebugRegisterState @ 0x1404F9500 (KiRestoreDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405BB410 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x14069FCF0 (KiRestoreSetContextState.c)
 */

/*
 * Hex-Rays decompilation failed for KiRestoreSetContextState @ 0x14069FCF0
 * Reason: Hex-Rays returned no pseudocode for 0x14069FCF0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014069FCF0: sub     rsp, 138h
 * 000000014069FCF7: lea     rax, [rsp+138h+var_38]
 * 000000014069FCFF: movaps  [rsp+138h+var_108], xmm6
 * 000000014069FD04: movaps  [rsp+138h+var_F8], xmm7
 * 000000014069FD09: movaps  [rsp+138h+var_E8], xmm8
 * 000000014069FD0F: movaps  [rsp+138h+var_D8], xmm9
 * 000000014069FD15: movaps  [rsp+138h+var_C8], xmm10
 * 000000014069FD1B: movaps  xmmword ptr [rax-80h], xmm11
 * 000000014069FD20: movaps  xmmword ptr [rax-70h], xmm12
 * 000000014069FD25: movaps  xmmword ptr [rax-60h], xmm13
 * 000000014069FD2A: movaps  xmmword ptr [rax-50h], xmm14
 * 000000014069FD2F: movaps  xmmword ptr [rax-40h], xmm15
 * 000000014069FD34: mov     [rax], rbx
 * 000000014069FD37: mov     [rax+8], rdi
 * 000000014069FD3B: mov     [rax+10h], rsi
 * 000000014069FD3F: mov     [rax+18h], r12
 * 000000014069FD43: mov     [rax+20h], r13
 * 000000014069FD47: mov     [rax+28h], r14
 * 000000014069FD4B: mov     [rax+30h], r15
 * 000000014069FD4F: mov     ecx, 1
 * 000000014069FD54: mov     cr8, rcx
 * 000000014069FD58: sti
 * 000000014069FD59: mov     rcx, gs:188h
 * 000000014069FD62: mov     rcx, [rcx+6A8h]
 * 000000014069FD69: mov     [rsp+138h+var_118], 1
 * 000000014069FD72: mov     r9d, [rcx+30h]
 * 000000014069FD76: mov     r8, rcx
 * 000000014069FD79: mov     rdx, rsp
 * 000000014069FD7C: lea     rcx, [rbp-80h]
 * 000000014069FD80: call    KeContextToKframes
 * 000000014069FD85: cli
 * 000000014069FD86: mov     ecx, 0
 * 000000014069FD8B: mov     cr8, rcx
 * 000000014069FD8F: mov     rcx, gs:188h
 * 000000014069FD98: lock btr dword ptr [rcx], 1Bh
 * 000000014069FD9D: lea     rcx, [rsp+138h+var_38]
 * 000000014069FDA5: movaps  xmm6, [rsp+138h+var_108]
 * 000000014069FDAA: movaps  xmm7, [rsp+138h+var_F8]
 * 000000014069FDAF: movaps  xmm8, [rsp+138h+var_E8]
 * 000000014069FDB5: movaps  xmm9, [rsp+138h+var_D8]
 * 000000014069FDBB: movaps  xmm10, [rsp+138h+var_C8]
 * 000000014069FDC1: movaps  xmm11, xmmword ptr [rcx-80h]
 * 000000014069FDC6: movaps  xmm12, xmmword ptr [rcx-70h]
 * 000000014069FDCB: movaps  xmm13, xmmword ptr [rcx-60h]
 * 000000014069FDD0: movaps  xmm14, xmmword ptr [rcx-50h]
 * 000000014069FDD5: movaps  xmm15, xmmword ptr [rcx-40h]
 * 000000014069FDDA: mov     rbx, [rcx]
 * 000000014069FDDD: mov     rdi, [rcx+8]
 * 000000014069FDE1: mov     rsi, [rcx+10h]
 * 000000014069FDE5: mov     r12, [rcx+18h]
 * 000000014069FDE9: mov     r13, [rcx+20h]
 * 000000014069FDED: mov     r14, [rcx+28h]
 * 000000014069FDF1: mov     r15, [rcx+30h]
 * 000000014069FDF5: test    byte ptr gs:860h, 2
 * 000000014069FDFE: jz      short loc_14069FE07
 * 000000014069FE00: xor     ecx, ecx
 * 000000014069FE02: call    KiUpdateStibpPairing
 * 000000014069FE07: xor     ecx, ecx
 * 000000014069FE09: rdsspq  rcx
 * 000000014069FE0E: test    rcx, rcx
 * 000000014069FE11: jz      short loc_14069FE1D
 * 000000014069FE13: mov     ecx, 1
 * 000000014069FE18: incsspq rcx
 * 000000014069FE1D: test    byte ptr [rbp+0F0h], 1
 * 000000014069FE24: jz      loc_1406A00BD
 * 000000014069FE2A: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014069FE31: jz      short loc_14069FE36
 * 000000014069FE33: stac
 * 000000014069FE36: mov     rcx, gs:188h
 * 000000014069FE3F: test    dword ptr [rcx], 10000h
 * 000000014069FE45: jz      short loc_14069FE5B
 * 000000014069FE47: test    byte ptr [rcx+2], 1
 * 000000014069FE4B: jz      short loc_14069FE5B
 * 000000014069FE4D: call    KiCopyCounters
 * 000000014069FE52: mov     rcx, gs:188h
 * 000000014069FE5B: ldmxcsr dword ptr [rbp-54h]
 * 000000014069FE5F: cmp     word ptr [rbp+80h], 0
 * 000000014069FE67: jz      short loc_14069FE6E
 * 000000014069FE69: call    KiRestoreDebugRegisterState
 * 000000014069FE6E: mov     rcx, gs:188h
 * 000000014069FE77: bt      dword ptr [rcx+74h], 16h
 * 000000014069FE7C: jnb     short loc_14069FEA8
 * 000000014069FE7E: xor     ecx, ecx
 * 000000014069FE80: rdsspq  rcx
 * 000000014069FE85: mov     r8, gs:9D28h
 * 000000014069FE8E: add     r8, 8
 * 000000014069FE92: cmp     rcx, r8
 * 000000014069FE95: jnz     short loc_14069FEA8
 * 000000014069FE97: mov     rcx, gs:9D20h
 * 000000014069FEA0: rstorssp qword ptr [rcx]
 * 000000014069FEA4: saveprevssp
 * 000000014069FEA8: mov     byte ptr gs:85Eh, 0
 * 000000014069FEB1: movzx   eax, word ptr gs:86Ch
 * 000000014069FEBA: cmp     gs:866h, ax
 * 000000014069FEC3: jz      short loc_14069FED7
 * 000000014069FEC5: mov     gs:866h, ax
 * 000000014069FECE: mov     ecx, 48h ; 'H'
 * 000000014069FED3: xor     edx, edx
 * 000000014069FED5: wrmsr
 * 000000014069FED7: btr     word ptr gs:858h, 2
 * 000000014069FEE2: jnb     short loc_14069FEF2
 * 000000014069FEE4: mov     eax, 1
 * 000000014069FEE9: xor     edx, edx
 * 000000014069FEEB: mov     ecx, 49h ; 'I'
 * 000000014069FEF0: wrmsr
 * 000000014069FEF2: btr     word ptr gs:858h, 5
 * 000000014069FEFD: jnb     loc_1406A003A
 * 000000014069FF03: call    loc_1406A0016
 * 000000014069FF08: add     rsp, 8
 * 000000014069FF0C: call    loc_1406A001F
 * 000000014069FF11: add     rsp, 8
 * 000000014069FF15: call    loc_14069FF08
 * 000000014069FF1A: add     rsp, 8
 * 000000014069FF1E: call    loc_14069FF11
 * 000000014069FF23: add     rsp, 8
 * 000000014069FF27: call    loc_14069FF1A
 * 000000014069FF2C: add     rsp, 8
 * 000000014069FF30: call    loc_14069FF23
 * 000000014069FF35: add     rsp, 8
 * 000000014069FF39: call    loc_14069FF2C
 * 000000014069FF3E: add     rsp, 8
 * 000000014069FF42: call    loc_14069FF35
 * 000000014069FF47: add     rsp, 8
 * 000000014069FF4B: call    loc_14069FF3E
 * 000000014069FF50: add     rsp, 8
 * 000000014069FF54: call    loc_14069FF47
 * 000000014069FF59: add     rsp, 8
 * 000000014069FF5D: call    loc_14069FF50
 * 000000014069FF62: add     rsp, 8
 * 000000014069FF66: call    loc_14069FF59
 * 000000014069FF6B: add     rsp, 8
 * 000000014069FF6F: call    loc_14069FF62
 * 000000014069FF74: add     rsp, 8
 * 000000014069FF78: call    loc_14069FF6B
 * 000000014069FF7D: add     rsp, 8
 * 000000014069FF81: call    loc_14069FF74
 * 000000014069FF86: add     rsp, 8
 * 000000014069FF8A: call    loc_14069FF7D
 * 000000014069FF8F: add     rsp, 8
 * 000000014069FF93: call    loc_14069FF86
 * 000000014069FF98: add     rsp, 8
 * 000000014069FF9C: call    loc_14069FF8F
 * 000000014069FFA1: add     rsp, 8
 * 000000014069FFA5: call    loc_14069FF98
 * 000000014069FFAA: add     rsp, 8
 * 000000014069FFAE: call    loc_14069FFA1
 * 000000014069FFB3: add     rsp, 8
 * 000000014069FFB7: call    loc_14069FFAA
 * 000000014069FFBC: add     rsp, 8
 * 000000014069FFC0: call    loc_14069FFB3
 * 000000014069FFC5: add     rsp, 8
 * 000000014069FFC9: call    loc_14069FFBC
 * 000000014069FFCE: add     rsp, 8
 * 000000014069FFD2: call    loc_14069FFC5
 * 000000014069FFD7: add     rsp, 8
 * 000000014069FFDB: call    loc_14069FFCE
 * 000000014069FFE0: add     rsp, 8
 * 000000014069FFE4: call    loc_14069FFD7
 * 000000014069FFE9: add     rsp, 8
 * 000000014069FFED: call    loc_14069FFE0
 * 000000014069FFF2: add     rsp, 8
 * 000000014069FFF6: call    loc_14069FFE9
 * 000000014069FFFB: add     rsp, 8
 * 000000014069FFFF: call    loc_14069FFF2
 * 00000001406A0004: add     rsp, 8
 * 00000001406A0008: call    loc_14069FFFB
 * 00000001406A000D: add     rsp, 8
 * 00000001406A0011: call    loc_1406A0004
 * 00000001406A0016: add     rsp, 8
 * 00000001406A001A: call    loc_1406A000D
 * 00000001406A001F: add     rsp, 8
 * 00000001406A0023: mov     eax, 0DADAh
 * 00000001406A0028: test    byte ptr gs:85Ch, 8
 * 00000001406A0031: jz      short loc_1406A003A
 * 00000001406A0033: mov     al, 20h ; ' '
 * 00000001406A0035: incsspq rax
 * 00000001406A003A: test    word ptr gs:858h, 100h
 * 00000001406A0045: jz      short loc_1406A0053
 * 00000001406A0047: xor     eax, eax
 * 00000001406A0049: xor     edx, edx
 * 00000001406A004B: mov     ecx, 1
 * 00000001406A0050: div     rcx
 * 00000001406A0053: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406A0057: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406A005B: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406A005F: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406A0063: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406A0067: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406A006B: mov     r11, [rbp-20h]
 * 00000001406A006F: mov     r10, [rbp-28h]
 * 00000001406A0073: mov     r9, [rbp-30h]
 * 00000001406A0077: mov     r8, [rbp-38h]
 * 00000001406A007B: mov     rdx, [rbp-40h]
 * 00000001406A007F: mov     rcx, [rbp-48h]
 * 00000001406A0083: mov     rax, [rbp-50h]
 * 00000001406A0087: mov     rsp, rbp
 * 00000001406A008A: mov     rbp, [rbp+0D8h]
 * 00000001406A0091: add     rsp, 0E8h
 * 00000001406A0098: test    cs:KiKvaShadow, 1
 * 00000001406A009F: jz      short loc_1406A00A6
 * 00000001406A00A1: jmp     KiKernelExit
 * 00000001406A00A6: test    word ptr gs:858h, 200h
 * 00000001406A00B1: jz      short loc_1406A00B8
 * 00000001406A00B3: verw    [rsp-1E8h+arg_200]
 * 00000001406A00B8: swapgs
 * 00000001406A00BB: iretq
 * 00000001406A00BD: ldmxcsr dword ptr [rbp-54h]
 * 00000001406A00C1: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406A00C5: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406A00C9: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406A00CD: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406A00D1: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406A00D5: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406A00D9: mov     r11, [rbp-20h]
 * 00000001406A00DD: mov     r10, [rbp-28h]
 * 00000001406A00E1: mov     r9, [rbp-30h]
 * 00000001406A00E5: mov     r8, [rbp-38h]
 * 00000001406A00E9: mov     rdx, [rbp-40h]
 * 00000001406A00ED: mov     rcx, [rbp-48h]
 * 00000001406A00F1: mov     rax, [rbp-50h]
 * 00000001406A00F5: mov     rsp, rbp
 * 00000001406A00F8: mov     rbp, [rbp+0D8h]
 * 00000001406A00FF: add     rsp, 0E8h
 * 00000001406A0106: iretq
 * 00000001406A0108: retn
 */
