/*
 * XREFs of KiExceptionDispatch @ 0x1406BFC00
 * Callers:
 *     KiDivideErrorFault @ 0x1406B6D00 (KiDivideErrorFault.c)
 *     KxDebugTrapOrFault @ 0x1406B7240 (KxDebugTrapOrFault.c)
 *     KiBreakpointTrap @ 0x1406B7C40 (KiBreakpointTrap.c)
 *     KiOverflowTrap @ 0x1406B7FC0 (KiOverflowTrap.c)
 *     KiBoundFault @ 0x1406B8340 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1406B8A40 (KiInvalidOpcodeFault.c)
 *     KiNpxNotAvailableFault @ 0x1406B9100 (KiNpxNotAvailableFault.c)
 *     KiSegmentNotPresentFault @ 0x1406B9F40 (KiSegmentNotPresentFault.c)
 *     KiStackFault @ 0x1406BA340 (KiStackFault.c)
 *     KiGeneralProtectionFault @ 0x1406BA6C0 (KiGeneralProtectionFault.c)
 *     KiPageFault @ 0x1406BAA40 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x1406BB240 (KiFloatingErrorFault.c)
 *     KiAlignmentFault @ 0x1406BB640 (KiAlignmentFault.c)
 *     KiXmmException @ 0x1406BC800 (KiXmmException.c)
 *     KiControlProtectionFault @ 0x1406BD340 (KiControlProtectionFault.c)
 *     KiRaiseAssertion @ 0x1406BDE40 (KiRaiseAssertion.c)
 *     KiDebugServiceTrap @ 0x1406BE1C0 (KiDebugServiceTrap.c)
 *     KiSystemCall32 @ 0x1406BE800 (KiSystemCall32.c)
 *     KiSystemCall64 @ 0x1406BED40 (KiSystemCall64.c)
 *     KiSystemCall32Shadow @ 0x140BBEE40 (KiSystemCall32Shadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14028FBE0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiDispatchException @ 0x1403D5EB0 (KiDispatchException.c)
 *     KiUpdateStibpPairing @ 0x1403DFC10 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1404F94D0 (KiRestoreDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405BC880 (KiCopyCounters.c)
 *     KiExceptionDispatchOnExceptionStack @ 0x1406ABE40 (KiExceptionDispatchOnExceptionStack.c)
 *     KiRestoreSetContextState @ 0x1406ABF60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406B0800 (KiInitiateUserApc.c)
 *     KiExceptionDispatch @ 0x1406BFC00 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiExceptionDispatch @ 0x1406BFC00
 * Reason: Hex-Rays returned no pseudocode for 0x1406BFC00
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406BFC00: sub     rsp, 1D8h
 * 00000001406BFC07: lea     rax, [rsp+1D8h+var_D8]
 * 00000001406BFC0F: movaps  [rsp+1D8h+var_1A8], xmm6
 * 00000001406BFC14: movaps  [rsp+1D8h+var_198], xmm7
 * 00000001406BFC19: movaps  [rsp+1D8h+var_188], xmm8
 * 00000001406BFC1F: movaps  [rsp+1D8h+var_178], xmm9
 * 00000001406BFC25: movaps  [rsp+1D8h+var_168], xmm10
 * 00000001406BFC2B: movaps  xmmword ptr [rax-80h], xmm11
 * 00000001406BFC30: movaps  xmmword ptr [rax-70h], xmm12
 * 00000001406BFC35: movaps  xmmword ptr [rax-60h], xmm13
 * 00000001406BFC3A: movaps  xmmword ptr [rax-50h], xmm14
 * 00000001406BFC3F: movaps  xmmword ptr [rax-40h], xmm15
 * 00000001406BFC44: mov     [rax], rbx
 * 00000001406BFC47: mov     [rax+8], rdi
 * 00000001406BFC4B: mov     [rax+10h], rsi
 * 00000001406BFC4F: mov     [rax+18h], r12
 * 00000001406BFC53: mov     [rax+20h], r13
 * 00000001406BFC57: mov     [rax+28h], r14
 * 00000001406BFC5B: mov     [rax+30h], r15
 * 00000001406BFC5F: lea     rax, [rsp+1D8h+ExceptionRecord]
 * 00000001406BFC67: mov     [rax], ecx
 * 00000001406BFC69: xor     ecx, ecx
 * 00000001406BFC6B: mov     [rax+4], ecx
 * 00000001406BFC6E: mov     [rax+8], rcx
 * 00000001406BFC72: mov     [rax+10h], r8
 * 00000001406BFC76: mov     [rax+18h], edx
 * 00000001406BFC79: mov     [rax+20h], r9
 * 00000001406BFC7D: mov     [rax+28h], r10
 * 00000001406BFC81: mov     [rax+30h], r11
 * 00000001406BFC85: mov     r9b, [rbp+0F0h]
 * 00000001406BFC8C: and     r9b, 1
 * 00000001406BFC90: mov     [rsp+1D8h+var_1B8], 1; char
 * 00000001406BFC95: lea     r8, [rbp-80h]
 * 00000001406BFC99: mov     rdx, rsp
 * 00000001406BFC9C: mov     rcx, rax; ExceptionRecord
 * 00000001406BFC9F: jnz     loc_1406BFD40
 * 00000001406BFCA5: mov     r10, cr8
 * 00000001406BFCA9: mov     r11, 2
 * 00000001406BFCB0: test    dword ptr [rbp+0F8h], 200h
 * 00000001406BFCBA: cmovz   r10, r11
 * 00000001406BFCBE: cmp     r10, r11
 * 00000001406BFCC1: jb      short loc_1406BFD40
 * 00000001406BFCC3: cmp     byte ptr gs:88E6h, 0
 * 00000001406BFCCC: jnz     short loc_1406BFD40
 * 00000001406BFCCE: mov     r10, gs:88E8h
 * 00000001406BFCD7: add     r10, 50h ; 'P'
 * 00000001406BFCDB: cmp     rsp, r10
 * 00000001406BFCDE: ja      short loc_1406BFCEF
 * 00000001406BFCE0: mov     r11d, cs:KeExceptionStackSize
 * 00000001406BFCE7: sub     r10, r11
 * 00000001406BFCEA: cmp     rsp, r10
 * 00000001406BFCED: jnb     short loc_1406BFD40
 * 00000001406BFCEF: mov     r10, gs:9158h
 * 00000001406BFCF8: cmp     rsp, r10
 * 00000001406BFCFB: ja      short loc_1406BFD0C
 * 00000001406BFCFD: mov     r11d, cs:KeIsrStackSize
 * 00000001406BFD04: sub     r10, r11
 * 00000001406BFD07: cmp     rsp, r10
 * 00000001406BFD0A: jnb     short loc_1406BFD40
 * 00000001406BFD0C: mov     r10, gs:8
 * 00000001406BFD15: mov     r10, [r10+24h]
 * 00000001406BFD19: cmp     rsp, r10
 * 00000001406BFD1C: ja      short loc_1406BFD2D
 * 00000001406BFD1E: mov     r11d, cs:KeIstStackSize
 * 00000001406BFD25: sub     r10, r11
 * 00000001406BFD28: cmp     rsp, r10
 * 00000001406BFD2B: jnb     short loc_1406BFD40
 * 00000001406BFD2D: cmp     word ptr gs:8526h, 0
 * 00000001406BFD37: jnz     short loc_1406BFD40
 * 00000001406BFD39: call    KiExceptionDispatchOnExceptionStack
 * 00000001406BFD3E: jmp     short loc_1406BFD45
 * 00000001406BFD40: call    KiDispatchException
 * 00000001406BFD45: lea     rcx, [rsp+1D8h+var_D8]
 * 00000001406BFD4D: movaps  xmm6, [rsp+1D8h+var_1A8]
 * 00000001406BFD52: movaps  xmm7, [rsp+1D8h+var_198]
 * 00000001406BFD57: movaps  xmm8, [rsp+1D8h+var_188]
 * 00000001406BFD5D: movaps  xmm9, [rsp+1D8h+var_178]
 * 00000001406BFD63: movaps  xmm10, [rsp+1D8h+var_168]
 * 00000001406BFD69: movaps  xmm11, xmmword ptr [rcx-80h]
 * 00000001406BFD6E: movaps  xmm12, xmmword ptr [rcx-70h]
 * 00000001406BFD73: movaps  xmm13, xmmword ptr [rcx-60h]
 * 00000001406BFD78: movaps  xmm14, xmmword ptr [rcx-50h]
 * 00000001406BFD7D: movaps  xmm15, xmmword ptr [rcx-40h]
 * 00000001406BFD82: mov     rbx, [rcx]
 * 00000001406BFD85: mov     rdi, [rcx+8]
 * 00000001406BFD89: mov     rsi, [rcx+10h]
 * 00000001406BFD8D: mov     r12, [rcx+18h]
 * 00000001406BFD91: mov     r13, [rcx+20h]
 * 00000001406BFD95: mov     r14, [rcx+28h]
 * 00000001406BFD99: mov     r15, [rcx+30h]
 * 00000001406BFD9D: cli
 * 00000001406BFD9E: xor     ecx, ecx
 * 00000001406BFDA0: rdsspq  rcx
 * 00000001406BFDA5: test    rcx, rcx
 * 00000001406BFDA8: jz      short loc_1406BFDB4
 * 00000001406BFDAA: mov     ecx, 1
 * 00000001406BFDAF: incsspq rcx
 * 00000001406BFDB4: test    byte ptr [rbp+0F0h], 1
 * 00000001406BFDBB: jz      loc_1406C00B6
 * 00000001406BFDC1: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406BFDC8: jz      short loc_1406BFDCD
 * 00000001406BFDCA: stac
 * 00000001406BFDCD: mov     rcx, gs:188h
 * 00000001406BFDD6: test    byte ptr [rcx+0C2h], 3
 * 00000001406BFDDD: jz      short loc_1406BFDFA
 * 00000001406BFDDF: mov     ecx, 1
 * 00000001406BFDE4: mov     cr8, rcx
 * 00000001406BFDE8: sti
 * 00000001406BFDE9: call    KiInitiateUserApc
 * 00000001406BFDEE: cli
 * 00000001406BFDEF: mov     ecx, 0
 * 00000001406BFDF4: mov     cr8, rcx
 * 00000001406BFDF8: jmp     short loc_1406BFDCD
 * 00000001406BFDFA: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406BFDFF: test    eax, eax
 * 00000001406BFE01: mov     rax, [rbp-50h]
 * 00000001406BFE05: jnz     short loc_1406BFDCD
 * 00000001406BFE07: test    byte ptr gs:860h, 2
 * 00000001406BFE10: jz      short loc_1406BFE19
 * 00000001406BFE12: xor     ecx, ecx
 * 00000001406BFE14: call    KiUpdateStibpPairing
 * 00000001406BFE19: mov     rcx, gs:188h
 * 00000001406BFE22: test    dword ptr [rcx], 8000000h
 * 00000001406BFE28: jz      short loc_1406BFE2F
 * 00000001406BFE2A: call    KiRestoreSetContextState
 * 00000001406BFE2F: mov     rcx, gs:188h
 * 00000001406BFE38: test    dword ptr [rcx], 10000h
 * 00000001406BFE3E: jz      short loc_1406BFE54
 * 00000001406BFE40: test    byte ptr [rcx+2], 1
 * 00000001406BFE44: jz      short loc_1406BFE54
 * 00000001406BFE46: call    KiCopyCounters
 * 00000001406BFE4B: mov     rcx, gs:188h
 * 00000001406BFE54: ldmxcsr dword ptr [rbp-54h]
 * 00000001406BFE58: cmp     word ptr [rbp+80h], 0
 * 00000001406BFE60: jz      short loc_1406BFE67
 * 00000001406BFE62: call    KiRestoreDebugRegisterState
 * 00000001406BFE67: mov     rcx, gs:188h
 * 00000001406BFE70: bt      dword ptr [rcx+74h], 16h
 * 00000001406BFE75: jnb     short loc_1406BFEA1
 * 00000001406BFE77: xor     ecx, ecx
 * 00000001406BFE79: rdsspq  rcx
 * 00000001406BFE7E: mov     r8, gs:9D28h
 * 00000001406BFE87: add     r8, 8
 * 00000001406BFE8B: cmp     rcx, r8
 * 00000001406BFE8E: jnz     short loc_1406BFEA1
 * 00000001406BFE90: mov     rcx, gs:9D20h
 * 00000001406BFE99: rstorssp qword ptr [rcx]
 * 00000001406BFE9D: saveprevssp
 * 00000001406BFEA1: mov     byte ptr gs:85Eh, 0
 * 00000001406BFEAA: movzx   eax, word ptr gs:86Ch
 * 00000001406BFEB3: cmp     gs:866h, ax
 * 00000001406BFEBC: jz      short loc_1406BFED0
 * 00000001406BFEBE: mov     gs:866h, ax
 * 00000001406BFEC7: mov     ecx, 48h ; 'H'
 * 00000001406BFECC: xor     edx, edx
 * 00000001406BFECE: wrmsr
 * 00000001406BFED0: btr     word ptr gs:858h, 2
 * 00000001406BFEDB: jnb     short loc_1406BFEEB
 * 00000001406BFEDD: mov     eax, 1
 * 00000001406BFEE2: xor     edx, edx
 * 00000001406BFEE4: mov     ecx, 49h ; 'I'
 * 00000001406BFEE9: wrmsr
 * 00000001406BFEEB: btr     word ptr gs:858h, 5
 * 00000001406BFEF6: jnb     loc_1406C0033
 * 00000001406BFEFC: call    loc_1406C000F
 * 00000001406BFF01: add     rsp, 8
 * 00000001406BFF05: call    loc_1406C0018
 * 00000001406BFF0A: add     rsp, 8
 * 00000001406BFF0E: call    loc_1406BFF01
 * 00000001406BFF13: add     rsp, 8
 * 00000001406BFF17: call    loc_1406BFF0A
 * 00000001406BFF1C: add     rsp, 8
 * 00000001406BFF20: call    loc_1406BFF13
 * 00000001406BFF25: add     rsp, 8
 * 00000001406BFF29: call    loc_1406BFF1C
 * 00000001406BFF2E: add     rsp, 8
 * 00000001406BFF32: call    loc_1406BFF25
 * 00000001406BFF37: add     rsp, 8
 * 00000001406BFF3B: call    loc_1406BFF2E
 * 00000001406BFF40: add     rsp, 8
 * 00000001406BFF44: call    loc_1406BFF37
 * 00000001406BFF49: add     rsp, 8
 * 00000001406BFF4D: call    loc_1406BFF40
 * 00000001406BFF52: add     rsp, 8
 * 00000001406BFF56: call    loc_1406BFF49
 * 00000001406BFF5B: add     rsp, 8
 * 00000001406BFF5F: call    loc_1406BFF52
 * 00000001406BFF64: add     rsp, 8
 * 00000001406BFF68: call    loc_1406BFF5B
 * 00000001406BFF6D: add     rsp, 8
 * 00000001406BFF71: call    loc_1406BFF64
 * 00000001406BFF76: add     rsp, 8
 * 00000001406BFF7A: call    loc_1406BFF6D
 * 00000001406BFF7F: add     rsp, 8
 * 00000001406BFF83: call    loc_1406BFF76
 * 00000001406BFF88: add     rsp, 8
 * 00000001406BFF8C: call    loc_1406BFF7F
 * 00000001406BFF91: add     rsp, 8
 * 00000001406BFF95: call    loc_1406BFF88
 * 00000001406BFF9A: add     rsp, 8
 * 00000001406BFF9E: call    loc_1406BFF91
 * 00000001406BFFA3: add     rsp, 8
 * 00000001406BFFA7: call    loc_1406BFF9A
 * 00000001406BFFAC: add     rsp, 8
 * 00000001406BFFB0: call    loc_1406BFFA3
 * 00000001406BFFB5: add     rsp, 8
 * 00000001406BFFB9: call    loc_1406BFFAC
 * 00000001406BFFBE: add     rsp, 8
 * 00000001406BFFC2: call    loc_1406BFFB5
 * 00000001406BFFC7: add     rsp, 8
 * 00000001406BFFCB: call    loc_1406BFFBE
 * 00000001406BFFD0: add     rsp, 8
 * 00000001406BFFD4: call    loc_1406BFFC7
 * 00000001406BFFD9: add     rsp, 8
 * 00000001406BFFDD: call    loc_1406BFFD0
 * 00000001406BFFE2: add     rsp, 8
 * 00000001406BFFE6: call    loc_1406BFFD9
 * 00000001406BFFEB: add     rsp, 8
 * 00000001406BFFEF: call    loc_1406BFFE2
 * 00000001406BFFF4: add     rsp, 8
 * 00000001406BFFF8: call    loc_1406BFFEB
 * 00000001406BFFFD: add     rsp, 8
 * 00000001406C0001: call    loc_1406BFFF4
 * 00000001406C0006: add     rsp, 8
 * 00000001406C000A: call    loc_1406BFFFD
 * 00000001406C000F: add     rsp, 8
 * 00000001406C0013: call    loc_1406C0006
 * 00000001406C0018: add     rsp, 8
 * 00000001406C001C: mov     eax, 0DADAh
 * 00000001406C0021: test    byte ptr gs:85Ch, 8
 * 00000001406C002A: jz      short loc_1406C0033
 * 00000001406C002C: mov     al, 20h ; ' '
 * 00000001406C002E: incsspq rax
 * 00000001406C0033: test    word ptr gs:858h, 100h
 * 00000001406C003E: jz      short loc_1406C004C
 * 00000001406C0040: xor     eax, eax
 * 00000001406C0042: xor     edx, edx
 * 00000001406C0044: mov     ecx, 1
 * 00000001406C0049: div     rcx
 * 00000001406C004C: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406C0050: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406C0054: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406C0058: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406C005C: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406C0060: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406C0064: mov     r11, [rbp-20h]
 * 00000001406C0068: mov     r10, [rbp-28h]
 * 00000001406C006C: mov     r9, [rbp-30h]
 * 00000001406C0070: mov     r8, [rbp-38h]
 * 00000001406C0074: mov     rdx, [rbp-40h]
 * 00000001406C0078: mov     rcx, [rbp-48h]
 * 00000001406C007C: mov     rax, [rbp-50h]
 * 00000001406C0080: mov     rsp, rbp
 * 00000001406C0083: mov     rbp, [rbp+0D8h]
 * 00000001406C008A: add     rsp, 0E8h
 * 00000001406C0091: test    cs:KiKvaShadow, 1
 * 00000001406C0098: jz      short loc_1406C009F
 * 00000001406C009A: jmp     KiKernelExit
 * 00000001406C009F: test    word ptr gs:858h, 200h
 * 00000001406C00AA: jz      short loc_1406C00B1
 * 00000001406C00AC: verw    [rsp-1E8h+arg_200]
 * 00000001406C00B1: swapgs
 * 00000001406C00B4: iretq
 * 00000001406C00B6: ldmxcsr dword ptr [rbp-54h]
 * 00000001406C00BA: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406C00BE: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406C00C2: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406C00C6: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406C00CA: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406C00CE: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406C00D2: mov     r11, [rbp-20h]
 * 00000001406C00D6: mov     r10, [rbp-28h]
 * 00000001406C00DA: mov     r9, [rbp-30h]
 * 00000001406C00DE: mov     r8, [rbp-38h]
 * 00000001406C00E2: mov     rdx, [rbp-40h]
 * 00000001406C00E6: mov     rcx, [rbp-48h]
 * 00000001406C00EA: mov     rax, [rbp-50h]
 * 00000001406C00EE: mov     rsp, rbp
 * 00000001406C00F1: mov     rbp, [rbp+0D8h]
 * 00000001406C00F8: add     rsp, 0E8h
 * 00000001406C00FF: iretq
 */
