/*
 * XREFs of KiExceptionDispatch @ 0x1406B3A00
 * Callers:
 *     KiDivideErrorFault @ 0x1406AAB00 (KiDivideErrorFault.c)
 *     KxDebugTrapOrFault @ 0x1406AB040 (KxDebugTrapOrFault.c)
 *     KiBreakpointTrap @ 0x1406ABA40 (KiBreakpointTrap.c)
 *     KiOverflowTrap @ 0x1406ABDC0 (KiOverflowTrap.c)
 *     KiBoundFault @ 0x1406AC140 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1406AC840 (KiInvalidOpcodeFault.c)
 *     KiNpxNotAvailableFault @ 0x1406ACF00 (KiNpxNotAvailableFault.c)
 *     KiSegmentNotPresentFault @ 0x1406ADD40 (KiSegmentNotPresentFault.c)
 *     KiStackFault @ 0x1406AE140 (KiStackFault.c)
 *     KiGeneralProtectionFault @ 0x1406AE4C0 (KiGeneralProtectionFault.c)
 *     KiPageFault @ 0x1406AE840 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x1406AF040 (KiFloatingErrorFault.c)
 *     KiAlignmentFault @ 0x1406AF440 (KiAlignmentFault.c)
 *     KiXmmException @ 0x1406B0600 (KiXmmException.c)
 *     KiControlProtectionFault @ 0x1406B1140 (KiControlProtectionFault.c)
 *     KiRaiseAssertion @ 0x1406B1C40 (KiRaiseAssertion.c)
 *     KiDebugServiceTrap @ 0x1406B1FC0 (KiDebugServiceTrap.c)
 *     KiSystemCall32 @ 0x1406B2600 (KiSystemCall32.c)
 *     KiSystemCall64 @ 0x1406B2B40 (KiSystemCall64.c)
 *     KiSystemCall32Shadow @ 0x140BABE40 (KiSystemCall32Shadow.c)
 * Callees:
 *     KiDispatchException @ 0x14025DD90 (KiDispatchException.c)
 *     KiUpdateStibpPairing @ 0x1403E3F50 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403EF6C0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiRestoreDebugRegisterState @ 0x1404F9500 (KiRestoreDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405BB410 (KiCopyCounters.c)
 *     KiExceptionDispatchOnExceptionStack @ 0x14069FBD0 (KiExceptionDispatchOnExceptionStack.c)
 *     KiRestoreSetContextState @ 0x14069FCF0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406A4590 (KiInitiateUserApc.c)
 *     KiExceptionDispatch @ 0x1406B3A00 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiExceptionDispatch @ 0x1406B3A00
 * Reason: Hex-Rays returned no pseudocode for 0x1406B3A00
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B3A00: sub     rsp, 1D8h
 * 00000001406B3A07: lea     rax, [rsp+1D8h+var_D8]
 * 00000001406B3A0F: movaps  [rsp+1D8h+var_1A8], xmm6
 * 00000001406B3A14: movaps  [rsp+1D8h+var_198], xmm7
 * 00000001406B3A19: movaps  [rsp+1D8h+var_188], xmm8
 * 00000001406B3A1F: movaps  [rsp+1D8h+var_178], xmm9
 * 00000001406B3A25: movaps  [rsp+1D8h+var_168], xmm10
 * 00000001406B3A2B: movaps  xmmword ptr [rax-80h], xmm11
 * 00000001406B3A30: movaps  xmmword ptr [rax-70h], xmm12
 * 00000001406B3A35: movaps  xmmword ptr [rax-60h], xmm13
 * 00000001406B3A3A: movaps  xmmword ptr [rax-50h], xmm14
 * 00000001406B3A3F: movaps  xmmword ptr [rax-40h], xmm15
 * 00000001406B3A44: mov     [rax], rbx
 * 00000001406B3A47: mov     [rax+8], rdi
 * 00000001406B3A4B: mov     [rax+10h], rsi
 * 00000001406B3A4F: mov     [rax+18h], r12
 * 00000001406B3A53: mov     [rax+20h], r13
 * 00000001406B3A57: mov     [rax+28h], r14
 * 00000001406B3A5B: mov     [rax+30h], r15
 * 00000001406B3A5F: lea     rax, [rsp+1D8h+ExceptionRecord]
 * 00000001406B3A67: mov     [rax], ecx
 * 00000001406B3A69: xor     ecx, ecx
 * 00000001406B3A6B: mov     [rax+4], ecx
 * 00000001406B3A6E: mov     [rax+8], rcx
 * 00000001406B3A72: mov     [rax+10h], r8
 * 00000001406B3A76: mov     [rax+18h], edx
 * 00000001406B3A79: mov     [rax+20h], r9
 * 00000001406B3A7D: mov     [rax+28h], r10
 * 00000001406B3A81: mov     [rax+30h], r11
 * 00000001406B3A85: mov     r9b, [rbp+0F0h]
 * 00000001406B3A8C: and     r9b, 1
 * 00000001406B3A90: mov     [rsp+1D8h+var_1B8], 1; char
 * 00000001406B3A95: lea     r8, [rbp-80h]
 * 00000001406B3A99: mov     rdx, rsp
 * 00000001406B3A9C: mov     rcx, rax; ExceptionRecord
 * 00000001406B3A9F: jnz     loc_1406B3B40
 * 00000001406B3AA5: mov     r10, cr8
 * 00000001406B3AA9: mov     r11, 2
 * 00000001406B3AB0: test    dword ptr [rbp+0F8h], 200h
 * 00000001406B3ABA: cmovz   r10, r11
 * 00000001406B3ABE: cmp     r10, r11
 * 00000001406B3AC1: jb      short loc_1406B3B40
 * 00000001406B3AC3: cmp     byte ptr gs:88E6h, 0
 * 00000001406B3ACC: jnz     short loc_1406B3B40
 * 00000001406B3ACE: mov     r10, gs:88E8h
 * 00000001406B3AD7: add     r10, 50h ; 'P'
 * 00000001406B3ADB: cmp     rsp, r10
 * 00000001406B3ADE: ja      short loc_1406B3AEF
 * 00000001406B3AE0: mov     r11d, cs:KeExceptionStackSize
 * 00000001406B3AE7: sub     r10, r11
 * 00000001406B3AEA: cmp     rsp, r10
 * 00000001406B3AED: jnb     short loc_1406B3B40
 * 00000001406B3AEF: mov     r10, gs:9158h
 * 00000001406B3AF8: cmp     rsp, r10
 * 00000001406B3AFB: ja      short loc_1406B3B0C
 * 00000001406B3AFD: mov     r11d, cs:KeIsrStackSize
 * 00000001406B3B04: sub     r10, r11
 * 00000001406B3B07: cmp     rsp, r10
 * 00000001406B3B0A: jnb     short loc_1406B3B40
 * 00000001406B3B0C: mov     r10, gs:8
 * 00000001406B3B15: mov     r10, [r10+24h]
 * 00000001406B3B19: cmp     rsp, r10
 * 00000001406B3B1C: ja      short loc_1406B3B2D
 * 00000001406B3B1E: mov     r11d, cs:KeIstStackSize
 * 00000001406B3B25: sub     r10, r11
 * 00000001406B3B28: cmp     rsp, r10
 * 00000001406B3B2B: jnb     short loc_1406B3B40
 * 00000001406B3B2D: cmp     word ptr gs:8526h, 0
 * 00000001406B3B37: jnz     short loc_1406B3B40
 * 00000001406B3B39: call    KiExceptionDispatchOnExceptionStack
 * 00000001406B3B3E: jmp     short loc_1406B3B45
 * 00000001406B3B40: call    KiDispatchException
 * 00000001406B3B45: lea     rcx, [rsp+1D8h+var_D8]
 * 00000001406B3B4D: movaps  xmm6, [rsp+1D8h+var_1A8]
 * 00000001406B3B52: movaps  xmm7, [rsp+1D8h+var_198]
 * 00000001406B3B57: movaps  xmm8, [rsp+1D8h+var_188]
 * 00000001406B3B5D: movaps  xmm9, [rsp+1D8h+var_178]
 * 00000001406B3B63: movaps  xmm10, [rsp+1D8h+var_168]
 * 00000001406B3B69: movaps  xmm11, xmmword ptr [rcx-80h]
 * 00000001406B3B6E: movaps  xmm12, xmmword ptr [rcx-70h]
 * 00000001406B3B73: movaps  xmm13, xmmword ptr [rcx-60h]
 * 00000001406B3B78: movaps  xmm14, xmmword ptr [rcx-50h]
 * 00000001406B3B7D: movaps  xmm15, xmmword ptr [rcx-40h]
 * 00000001406B3B82: mov     rbx, [rcx]
 * 00000001406B3B85: mov     rdi, [rcx+8]
 * 00000001406B3B89: mov     rsi, [rcx+10h]
 * 00000001406B3B8D: mov     r12, [rcx+18h]
 * 00000001406B3B91: mov     r13, [rcx+20h]
 * 00000001406B3B95: mov     r14, [rcx+28h]
 * 00000001406B3B99: mov     r15, [rcx+30h]
 * 00000001406B3B9D: cli
 * 00000001406B3B9E: xor     ecx, ecx
 * 00000001406B3BA0: rdsspq  rcx
 * 00000001406B3BA5: test    rcx, rcx
 * 00000001406B3BA8: jz      short loc_1406B3BB4
 * 00000001406B3BAA: mov     ecx, 1
 * 00000001406B3BAF: incsspq rcx
 * 00000001406B3BB4: test    byte ptr [rbp+0F0h], 1
 * 00000001406B3BBB: jz      loc_1406B3EB6
 * 00000001406B3BC1: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B3BC8: jz      short loc_1406B3BCD
 * 00000001406B3BCA: stac
 * 00000001406B3BCD: mov     rcx, gs:188h
 * 00000001406B3BD6: test    byte ptr [rcx+0C2h], 3
 * 00000001406B3BDD: jz      short loc_1406B3BFA
 * 00000001406B3BDF: mov     ecx, 1
 * 00000001406B3BE4: mov     cr8, rcx
 * 00000001406B3BE8: sti
 * 00000001406B3BE9: call    KiInitiateUserApc
 * 00000001406B3BEE: cli
 * 00000001406B3BEF: mov     ecx, 0
 * 00000001406B3BF4: mov     cr8, rcx
 * 00000001406B3BF8: jmp     short loc_1406B3BCD
 * 00000001406B3BFA: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406B3BFF: test    eax, eax
 * 00000001406B3C01: mov     rax, [rbp-50h]
 * 00000001406B3C05: jnz     short loc_1406B3BCD
 * 00000001406B3C07: test    byte ptr gs:860h, 2
 * 00000001406B3C10: jz      short loc_1406B3C19
 * 00000001406B3C12: xor     ecx, ecx
 * 00000001406B3C14: call    KiUpdateStibpPairing
 * 00000001406B3C19: mov     rcx, gs:188h
 * 00000001406B3C22: test    dword ptr [rcx], 8000000h
 * 00000001406B3C28: jz      short loc_1406B3C2F
 * 00000001406B3C2A: call    KiRestoreSetContextState
 * 00000001406B3C2F: mov     rcx, gs:188h
 * 00000001406B3C38: test    dword ptr [rcx], 10000h
 * 00000001406B3C3E: jz      short loc_1406B3C54
 * 00000001406B3C40: test    byte ptr [rcx+2], 1
 * 00000001406B3C44: jz      short loc_1406B3C54
 * 00000001406B3C46: call    KiCopyCounters
 * 00000001406B3C4B: mov     rcx, gs:188h
 * 00000001406B3C54: ldmxcsr dword ptr [rbp-54h]
 * 00000001406B3C58: cmp     word ptr [rbp+80h], 0
 * 00000001406B3C60: jz      short loc_1406B3C67
 * 00000001406B3C62: call    KiRestoreDebugRegisterState
 * 00000001406B3C67: mov     rcx, gs:188h
 * 00000001406B3C70: bt      dword ptr [rcx+74h], 16h
 * 00000001406B3C75: jnb     short loc_1406B3CA1
 * 00000001406B3C77: xor     ecx, ecx
 * 00000001406B3C79: rdsspq  rcx
 * 00000001406B3C7E: mov     r8, gs:9D28h
 * 00000001406B3C87: add     r8, 8
 * 00000001406B3C8B: cmp     rcx, r8
 * 00000001406B3C8E: jnz     short loc_1406B3CA1
 * 00000001406B3C90: mov     rcx, gs:9D20h
 * 00000001406B3C99: rstorssp qword ptr [rcx]
 * 00000001406B3C9D: saveprevssp
 * 00000001406B3CA1: mov     byte ptr gs:85Eh, 0
 * 00000001406B3CAA: movzx   eax, word ptr gs:86Ch
 * 00000001406B3CB3: cmp     gs:866h, ax
 * 00000001406B3CBC: jz      short loc_1406B3CD0
 * 00000001406B3CBE: mov     gs:866h, ax
 * 00000001406B3CC7: mov     ecx, 48h ; 'H'
 * 00000001406B3CCC: xor     edx, edx
 * 00000001406B3CCE: wrmsr
 * 00000001406B3CD0: btr     word ptr gs:858h, 2
 * 00000001406B3CDB: jnb     short loc_1406B3CEB
 * 00000001406B3CDD: mov     eax, 1
 * 00000001406B3CE2: xor     edx, edx
 * 00000001406B3CE4: mov     ecx, 49h ; 'I'
 * 00000001406B3CE9: wrmsr
 * 00000001406B3CEB: btr     word ptr gs:858h, 5
 * 00000001406B3CF6: jnb     loc_1406B3E33
 * 00000001406B3CFC: call    loc_1406B3E0F
 * 00000001406B3D01: add     rsp, 8
 * 00000001406B3D05: call    loc_1406B3E18
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
 * 00000001406B3E13: call    loc_1406B3E06
 * 00000001406B3E18: add     rsp, 8
 * 00000001406B3E1C: mov     eax, 0DADAh
 * 00000001406B3E21: test    byte ptr gs:85Ch, 8
 * 00000001406B3E2A: jz      short loc_1406B3E33
 * 00000001406B3E2C: mov     al, 20h ; ' '
 * 00000001406B3E2E: incsspq rax
 * 00000001406B3E33: test    word ptr gs:858h, 100h
 * 00000001406B3E3E: jz      short loc_1406B3E4C
 * 00000001406B3E40: xor     eax, eax
 * 00000001406B3E42: xor     edx, edx
 * 00000001406B3E44: mov     ecx, 1
 * 00000001406B3E49: div     rcx
 * 00000001406B3E4C: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406B3E50: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406B3E54: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406B3E58: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406B3E5C: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406B3E60: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406B3E64: mov     r11, [rbp-20h]
 * 00000001406B3E68: mov     r10, [rbp-28h]
 * 00000001406B3E6C: mov     r9, [rbp-30h]
 * 00000001406B3E70: mov     r8, [rbp-38h]
 * 00000001406B3E74: mov     rdx, [rbp-40h]
 * 00000001406B3E78: mov     rcx, [rbp-48h]
 * 00000001406B3E7C: mov     rax, [rbp-50h]
 * 00000001406B3E80: mov     rsp, rbp
 * 00000001406B3E83: mov     rbp, [rbp+0D8h]
 * 00000001406B3E8A: add     rsp, 0E8h
 * 00000001406B3E91: test    cs:KiKvaShadow, 1
 * 00000001406B3E98: jz      short loc_1406B3E9F
 * 00000001406B3E9A: jmp     KiKernelExit
 * 00000001406B3E9F: test    word ptr gs:858h, 200h
 * 00000001406B3EAA: jz      short loc_1406B3EB1
 * 00000001406B3EAC: verw    [rsp-1E8h+arg_200]
 * 00000001406B3EB1: swapgs
 * 00000001406B3EB4: iretq
 * 00000001406B3EB6: ldmxcsr dword ptr [rbp-54h]
 * 00000001406B3EBA: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406B3EBE: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406B3EC2: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406B3EC6: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406B3ECA: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406B3ECE: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406B3ED2: mov     r11, [rbp-20h]
 * 00000001406B3ED6: mov     r10, [rbp-28h]
 * 00000001406B3EDA: mov     r9, [rbp-30h]
 * 00000001406B3EDE: mov     r8, [rbp-38h]
 * 00000001406B3EE2: mov     rdx, [rbp-40h]
 * 00000001406B3EE6: mov     rcx, [rbp-48h]
 * 00000001406B3EEA: mov     rax, [rbp-50h]
 * 00000001406B3EEE: mov     rsp, rbp
 * 00000001406B3EF1: mov     rbp, [rbp+0D8h]
 * 00000001406B3EF8: add     rsp, 0E8h
 * 00000001406B3EFF: iretq
 */
