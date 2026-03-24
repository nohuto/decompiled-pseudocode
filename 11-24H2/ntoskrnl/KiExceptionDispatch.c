/*
 * XREFs of KiExceptionDispatch @ 0x1406BED00
 * Callers:
 *     KiDivideErrorFault @ 0x1406B5E00 (KiDivideErrorFault.c)
 *     KxDebugTrapOrFault @ 0x1406B6340 (KxDebugTrapOrFault.c)
 *     KiBreakpointTrap @ 0x1406B6D40 (KiBreakpointTrap.c)
 *     KiOverflowTrap @ 0x1406B70C0 (KiOverflowTrap.c)
 *     KiBoundFault @ 0x1406B7440 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1406B7B40 (KiInvalidOpcodeFault.c)
 *     KiNpxNotAvailableFault @ 0x1406B8200 (KiNpxNotAvailableFault.c)
 *     KiSegmentNotPresentFault @ 0x1406B9040 (KiSegmentNotPresentFault.c)
 *     KiStackFault @ 0x1406B9440 (KiStackFault.c)
 *     KiGeneralProtectionFault @ 0x1406B97C0 (KiGeneralProtectionFault.c)
 *     KiPageFault @ 0x1406B9B40 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x1406BA340 (KiFloatingErrorFault.c)
 *     KiAlignmentFault @ 0x1406BA740 (KiAlignmentFault.c)
 *     KiXmmException @ 0x1406BB900 (KiXmmException.c)
 *     KiControlProtectionFault @ 0x1406BC440 (KiControlProtectionFault.c)
 *     KiRaiseAssertion @ 0x1406BCF40 (KiRaiseAssertion.c)
 *     KiDebugServiceTrap @ 0x1406BD2C0 (KiDebugServiceTrap.c)
 *     KiSystemCall32 @ 0x1406BD900 (KiSystemCall32.c)
 *     KiSystemCall64 @ 0x1406BDE40 (KiSystemCall64.c)
 *     KiSystemCall32Shadow @ 0x140BBCE40 (KiSystemCall32Shadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14025F5D0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiDispatchException @ 0x1403E8310 (KiDispatchException.c)
 *     KiUpdateStibpPairing @ 0x1403EB760 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1404FBC10 (KiRestoreDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405BF250 (KiCopyCounters.c)
 *     KiExceptionDispatchOnExceptionStack @ 0x1406AAEA0 (KiExceptionDispatchOnExceptionStack.c)
 *     KiRestoreSetContextState @ 0x1406AAFC0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406AF860 (KiInitiateUserApc.c)
 *     KiExceptionDispatch @ 0x1406BED00 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiExceptionDispatch @ 0x1406BED00
 * Reason: Hex-Rays returned no pseudocode for 0x1406BED00
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406BED00: sub     rsp, 1D8h
 * 00000001406BED07: lea     rax, [rsp+1D8h+var_D8]
 * 00000001406BED0F: movaps  [rsp+1D8h+var_1A8], xmm6
 * 00000001406BED14: movaps  [rsp+1D8h+var_198], xmm7
 * 00000001406BED19: movaps  [rsp+1D8h+var_188], xmm8
 * 00000001406BED1F: movaps  [rsp+1D8h+var_178], xmm9
 * 00000001406BED25: movaps  [rsp+1D8h+var_168], xmm10
 * 00000001406BED2B: movaps  xmmword ptr [rax-80h], xmm11
 * 00000001406BED30: movaps  xmmword ptr [rax-70h], xmm12
 * 00000001406BED35: movaps  xmmword ptr [rax-60h], xmm13
 * 00000001406BED3A: movaps  xmmword ptr [rax-50h], xmm14
 * 00000001406BED3F: movaps  xmmword ptr [rax-40h], xmm15
 * 00000001406BED44: mov     [rax], rbx
 * 00000001406BED47: mov     [rax+8], rdi
 * 00000001406BED4B: mov     [rax+10h], rsi
 * 00000001406BED4F: mov     [rax+18h], r12
 * 00000001406BED53: mov     [rax+20h], r13
 * 00000001406BED57: mov     [rax+28h], r14
 * 00000001406BED5B: mov     [rax+30h], r15
 * 00000001406BED5F: lea     rax, [rsp+1D8h+var_A0]
 * 00000001406BED67: mov     [rax], ecx
 * 00000001406BED69: xor     ecx, ecx
 * 00000001406BED6B: mov     [rax+4], ecx
 * 00000001406BED6E: mov     [rax+8], rcx
 * 00000001406BED72: mov     [rax+10h], r8
 * 00000001406BED76: mov     [rax+18h], edx
 * 00000001406BED79: mov     [rax+20h], r9
 * 00000001406BED7D: mov     [rax+28h], r10
 * 00000001406BED81: mov     [rax+30h], r11
 * 00000001406BED85: mov     r9b, [rbp+0F0h]
 * 00000001406BED8C: and     r9b, 1
 * 00000001406BED90: mov     [rsp+1D8h+var_1B8], 1; char
 * 00000001406BED95: lea     r8, [rbp-80h]
 * 00000001406BED99: mov     rdx, rsp
 * 00000001406BED9C: mov     rcx, rax; ULONG_PTR
 * 00000001406BED9F: jnz     loc_1406BEE40
 * 00000001406BEDA5: mov     r10, cr8
 * 00000001406BEDA9: mov     r11, 2
 * 00000001406BEDB0: test    dword ptr [rbp+0F8h], 200h
 * 00000001406BEDBA: cmovz   r10, r11
 * 00000001406BEDBE: cmp     r10, r11
 * 00000001406BEDC1: jb      short loc_1406BEE40
 * 00000001406BEDC3: cmp     byte ptr gs:88E6h, 0
 * 00000001406BEDCC: jnz     short loc_1406BEE40
 * 00000001406BEDCE: mov     r10, gs:88E8h
 * 00000001406BEDD7: add     r10, 50h ; 'P'
 * 00000001406BEDDB: cmp     rsp, r10
 * 00000001406BEDDE: ja      short loc_1406BEDEF
 * 00000001406BEDE0: mov     r11d, cs:KeExceptionStackSize
 * 00000001406BEDE7: sub     r10, r11
 * 00000001406BEDEA: cmp     rsp, r10
 * 00000001406BEDED: jnb     short loc_1406BEE40
 * 00000001406BEDEF: mov     r10, gs:9158h
 * 00000001406BEDF8: cmp     rsp, r10
 * 00000001406BEDFB: ja      short loc_1406BEE0C
 * 00000001406BEDFD: mov     r11d, cs:KeIsrStackSize
 * 00000001406BEE04: sub     r10, r11
 * 00000001406BEE07: cmp     rsp, r10
 * 00000001406BEE0A: jnb     short loc_1406BEE40
 * 00000001406BEE0C: mov     r10, gs:8
 * 00000001406BEE15: mov     r10, [r10+24h]
 * 00000001406BEE19: cmp     rsp, r10
 * 00000001406BEE1C: ja      short loc_1406BEE2D
 * 00000001406BEE1E: mov     r11d, cs:KeIstStackSize
 * 00000001406BEE25: sub     r10, r11
 * 00000001406BEE28: cmp     rsp, r10
 * 00000001406BEE2B: jnb     short loc_1406BEE40
 * 00000001406BEE2D: cmp     word ptr gs:8526h, 0
 * 00000001406BEE37: jnz     short loc_1406BEE40
 * 00000001406BEE39: call    KiExceptionDispatchOnExceptionStack
 * 00000001406BEE3E: jmp     short loc_1406BEE45
 * 00000001406BEE40: call    KiDispatchException
 * 00000001406BEE45: lea     rcx, [rsp+1D8h+var_D8]
 * 00000001406BEE4D: movaps  xmm6, [rsp+1D8h+var_1A8]
 * 00000001406BEE52: movaps  xmm7, [rsp+1D8h+var_198]
 * 00000001406BEE57: movaps  xmm8, [rsp+1D8h+var_188]
 * 00000001406BEE5D: movaps  xmm9, [rsp+1D8h+var_178]
 * 00000001406BEE63: movaps  xmm10, [rsp+1D8h+var_168]
 * 00000001406BEE69: movaps  xmm11, xmmword ptr [rcx-80h]
 * 00000001406BEE6E: movaps  xmm12, xmmword ptr [rcx-70h]
 * 00000001406BEE73: movaps  xmm13, xmmword ptr [rcx-60h]
 * 00000001406BEE78: movaps  xmm14, xmmword ptr [rcx-50h]
 * 00000001406BEE7D: movaps  xmm15, xmmword ptr [rcx-40h]
 * 00000001406BEE82: mov     rbx, [rcx]
 * 00000001406BEE85: mov     rdi, [rcx+8]
 * 00000001406BEE89: mov     rsi, [rcx+10h]
 * 00000001406BEE8D: mov     r12, [rcx+18h]
 * 00000001406BEE91: mov     r13, [rcx+20h]
 * 00000001406BEE95: mov     r14, [rcx+28h]
 * 00000001406BEE99: mov     r15, [rcx+30h]
 * 00000001406BEE9D: cli
 * 00000001406BEE9E: xor     ecx, ecx
 * 00000001406BEEA0: rdsspq  rcx
 * 00000001406BEEA5: test    rcx, rcx
 * 00000001406BEEA8: jz      short loc_1406BEEB4
 * 00000001406BEEAA: mov     ecx, 1
 * 00000001406BEEAF: incsspq rcx
 * 00000001406BEEB4: test    byte ptr [rbp+0F0h], 1
 * 00000001406BEEBB: jz      loc_1406BF1B6
 * 00000001406BEEC1: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406BEEC8: jz      short loc_1406BEECD
 * 00000001406BEECA: stac
 * 00000001406BEECD: mov     rcx, gs:188h
 * 00000001406BEED6: test    byte ptr [rcx+0C2h], 3
 * 00000001406BEEDD: jz      short loc_1406BEEFA
 * 00000001406BEEDF: mov     ecx, 1
 * 00000001406BEEE4: mov     cr8, rcx
 * 00000001406BEEE8: sti
 * 00000001406BEEE9: call    KiInitiateUserApc
 * 00000001406BEEEE: cli
 * 00000001406BEEEF: mov     ecx, 0
 * 00000001406BEEF4: mov     cr8, rcx
 * 00000001406BEEF8: jmp     short loc_1406BEECD
 * 00000001406BEEFA: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406BEEFF: test    eax, eax
 * 00000001406BEF01: mov     rax, [rbp-50h]
 * 00000001406BEF05: jnz     short loc_1406BEECD
 * 00000001406BEF07: test    byte ptr gs:860h, 2
 * 00000001406BEF10: jz      short loc_1406BEF19
 * 00000001406BEF12: xor     ecx, ecx
 * 00000001406BEF14: call    KiUpdateStibpPairing
 * 00000001406BEF19: mov     rcx, gs:188h
 * 00000001406BEF22: test    dword ptr [rcx], 8000000h
 * 00000001406BEF28: jz      short loc_1406BEF2F
 * 00000001406BEF2A: call    KiRestoreSetContextState
 * 00000001406BEF2F: mov     rcx, gs:188h
 * 00000001406BEF38: test    dword ptr [rcx], 10000h
 * 00000001406BEF3E: jz      short loc_1406BEF54
 * 00000001406BEF40: test    byte ptr [rcx+2], 1
 * 00000001406BEF44: jz      short loc_1406BEF54
 * 00000001406BEF46: call    KiCopyCounters
 * 00000001406BEF4B: mov     rcx, gs:188h
 * 00000001406BEF54: ldmxcsr dword ptr [rbp-54h]
 * 00000001406BEF58: cmp     word ptr [rbp+80h], 0
 * 00000001406BEF60: jz      short loc_1406BEF67
 * 00000001406BEF62: call    KiRestoreDebugRegisterState
 * 00000001406BEF67: mov     rcx, gs:188h
 * 00000001406BEF70: bt      dword ptr [rcx+74h], 16h
 * 00000001406BEF75: jnb     short loc_1406BEFA1
 * 00000001406BEF77: xor     ecx, ecx
 * 00000001406BEF79: rdsspq  rcx
 * 00000001406BEF7E: mov     r8, gs:9D28h
 * 00000001406BEF87: add     r8, 8
 * 00000001406BEF8B: cmp     rcx, r8
 * 00000001406BEF8E: jnz     short loc_1406BEFA1
 * 00000001406BEF90: mov     rcx, gs:9D20h
 * 00000001406BEF99: rstorssp qword ptr [rcx]
 * 00000001406BEF9D: saveprevssp
 * 00000001406BEFA1: mov     byte ptr gs:85Eh, 0
 * 00000001406BEFAA: movzx   eax, word ptr gs:86Ch
 * 00000001406BEFB3: cmp     gs:866h, ax
 * 00000001406BEFBC: jz      short loc_1406BEFD0
 * 00000001406BEFBE: mov     gs:866h, ax
 * 00000001406BEFC7: mov     ecx, 48h ; 'H'
 * 00000001406BEFCC: xor     edx, edx
 * 00000001406BEFCE: wrmsr
 * 00000001406BEFD0: btr     word ptr gs:858h, 2
 * 00000001406BEFDB: jnb     short loc_1406BEFEB
 * 00000001406BEFDD: mov     eax, 1
 * 00000001406BEFE2: xor     edx, edx
 * 00000001406BEFE4: mov     ecx, 49h ; 'I'
 * 00000001406BEFE9: wrmsr
 * 00000001406BEFEB: btr     word ptr gs:858h, 5
 * 00000001406BEFF6: jnb     loc_1406BF133
 * 00000001406BEFFC: call    loc_1406BF10F
 * 00000001406BF001: add     rsp, 8
 * 00000001406BF005: call    loc_1406BF118
 * 00000001406BF00A: add     rsp, 8
 * 00000001406BF00E: call    loc_1406BF001
 * 00000001406BF013: add     rsp, 8
 * 00000001406BF017: call    loc_1406BF00A
 * 00000001406BF01C: add     rsp, 8
 * 00000001406BF020: call    loc_1406BF013
 * 00000001406BF025: add     rsp, 8
 * 00000001406BF029: call    loc_1406BF01C
 * 00000001406BF02E: add     rsp, 8
 * 00000001406BF032: call    loc_1406BF025
 * 00000001406BF037: add     rsp, 8
 * 00000001406BF03B: call    loc_1406BF02E
 * 00000001406BF040: add     rsp, 8
 * 00000001406BF044: call    loc_1406BF037
 * 00000001406BF049: add     rsp, 8
 * 00000001406BF04D: call    loc_1406BF040
 * 00000001406BF052: add     rsp, 8
 * 00000001406BF056: call    loc_1406BF049
 * 00000001406BF05B: add     rsp, 8
 * 00000001406BF05F: call    loc_1406BF052
 * 00000001406BF064: add     rsp, 8
 * 00000001406BF068: call    loc_1406BF05B
 * 00000001406BF06D: add     rsp, 8
 * 00000001406BF071: call    loc_1406BF064
 * 00000001406BF076: add     rsp, 8
 * 00000001406BF07A: call    loc_1406BF06D
 * 00000001406BF07F: add     rsp, 8
 * 00000001406BF083: call    loc_1406BF076
 * 00000001406BF088: add     rsp, 8
 * 00000001406BF08C: call    loc_1406BF07F
 * 00000001406BF091: add     rsp, 8
 * 00000001406BF095: call    loc_1406BF088
 * 00000001406BF09A: add     rsp, 8
 * 00000001406BF09E: call    loc_1406BF091
 * 00000001406BF0A3: add     rsp, 8
 * 00000001406BF0A7: call    loc_1406BF09A
 * 00000001406BF0AC: add     rsp, 8
 * 00000001406BF0B0: call    loc_1406BF0A3
 * 00000001406BF0B5: add     rsp, 8
 * 00000001406BF0B9: call    loc_1406BF0AC
 * 00000001406BF0BE: add     rsp, 8
 * 00000001406BF0C2: call    loc_1406BF0B5
 * 00000001406BF0C7: add     rsp, 8
 * 00000001406BF0CB: call    loc_1406BF0BE
 * 00000001406BF0D0: add     rsp, 8
 * 00000001406BF0D4: call    loc_1406BF0C7
 * 00000001406BF0D9: add     rsp, 8
 * 00000001406BF0DD: call    loc_1406BF0D0
 * 00000001406BF0E2: add     rsp, 8
 * 00000001406BF0E6: call    loc_1406BF0D9
 * 00000001406BF0EB: add     rsp, 8
 * 00000001406BF0EF: call    loc_1406BF0E2
 * 00000001406BF0F4: add     rsp, 8
 * 00000001406BF0F8: call    loc_1406BF0EB
 * 00000001406BF0FD: add     rsp, 8
 * 00000001406BF101: call    loc_1406BF0F4
 * 00000001406BF106: add     rsp, 8
 * 00000001406BF10A: call    loc_1406BF0FD
 * 00000001406BF10F: add     rsp, 8
 * 00000001406BF113: call    loc_1406BF106
 * 00000001406BF118: add     rsp, 8
 * 00000001406BF11C: mov     eax, 0DADAh
 * 00000001406BF121: test    byte ptr gs:85Ch, 8
 * 00000001406BF12A: jz      short loc_1406BF133
 * 00000001406BF12C: mov     al, 20h ; ' '
 * 00000001406BF12E: incsspq rax
 * 00000001406BF133: test    word ptr gs:858h, 100h
 * 00000001406BF13E: jz      short loc_1406BF14C
 * 00000001406BF140: xor     eax, eax
 * 00000001406BF142: xor     edx, edx
 * 00000001406BF144: mov     ecx, 1
 * 00000001406BF149: div     rcx
 * 00000001406BF14C: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406BF150: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406BF154: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406BF158: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406BF15C: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406BF160: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406BF164: mov     r11, [rbp-20h]
 * 00000001406BF168: mov     r10, [rbp-28h]
 * 00000001406BF16C: mov     r9, [rbp-30h]
 * 00000001406BF170: mov     r8, [rbp-38h]
 * 00000001406BF174: mov     rdx, [rbp-40h]
 * 00000001406BF178: mov     rcx, [rbp-48h]
 * 00000001406BF17C: mov     rax, [rbp-50h]
 * 00000001406BF180: mov     rsp, rbp
 * 00000001406BF183: mov     rbp, [rbp+0D8h]
 * 00000001406BF18A: add     rsp, 0E8h
 * 00000001406BF191: test    cs:KiKvaShadow, 1
 * 00000001406BF198: jz      short loc_1406BF19F
 * 00000001406BF19A: jmp     KiKernelExit
 * 00000001406BF19F: test    word ptr gs:858h, 200h
 * 00000001406BF1AA: jz      short loc_1406BF1B1
 * 00000001406BF1AC: verw    [rsp-1E8h+arg_200]
 * 00000001406BF1B1: swapgs
 * 00000001406BF1B4: iretq
 * 00000001406BF1B6: ldmxcsr dword ptr [rbp-54h]
 * 00000001406BF1BA: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406BF1BE: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406BF1C2: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406BF1C6: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406BF1CA: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406BF1CE: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406BF1D2: mov     r11, [rbp-20h]
 * 00000001406BF1D6: mov     r10, [rbp-28h]
 * 00000001406BF1DA: mov     r9, [rbp-30h]
 * 00000001406BF1DE: mov     r8, [rbp-38h]
 * 00000001406BF1E2: mov     rdx, [rbp-40h]
 * 00000001406BF1E6: mov     rcx, [rbp-48h]
 * 00000001406BF1EA: mov     rax, [rbp-50h]
 * 00000001406BF1EE: mov     rsp, rbp
 * 00000001406BF1F1: mov     rbp, [rbp+0D8h]
 * 00000001406BF1F8: add     rsp, 0E8h
 * 00000001406BF1FF: iretq
 */
