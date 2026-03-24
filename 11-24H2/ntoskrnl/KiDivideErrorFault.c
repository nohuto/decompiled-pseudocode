/*
 * XREFs of KiDivideErrorFault @ 0x1406B5E00
 * Callers:
 *     KiDivideErrorFaultShadow @ 0x140BBB100 (KiDivideErrorFaultShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x14041B1F0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404FBC90 (KiSaveDebugRegisterState.c)
 *     KiDivideErrorFault @ 0x1406B5E00 (KiDivideErrorFault.c)
 *     KiExceptionDispatch @ 0x1406BED00 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406BF740 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiDivideErrorFault @ 0x1406B5E00
 * Reason: Hex-Rays returned no pseudocode for 0x1406B5E00
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B5E00: sub     rsp, 8
 * 00000001406B5E04: push    rbp
 * 00000001406B5E05: sub     rsp, 158h
 * 00000001406B5E0C: lea     rbp, [rsp+80h]
 * 00000001406B5E14: mov     [rbp+0E8h+var_13D], 1
 * 00000001406B5E18: mov     [rbp+0E8h+var_138], rax
 * 00000001406B5E1C: mov     [rbp+0E8h+var_130], rcx
 * 00000001406B5E20: mov     [rbp+0E8h+var_128], rdx
 * 00000001406B5E24: mov     [rbp+0E8h+var_120], r8
 * 00000001406B5E28: mov     [rbp+0E8h+var_118], r9
 * 00000001406B5E2C: mov     [rbp+0E8h+var_110], r10
 * 00000001406B5E30: mov     [rbp+0E8h+var_108], r11
 * 00000001406B5E34: test    [rbp+0E8h+arg_0], 1
 * 00000001406B5E3B: jnz     short loc_1406B5E75
 * 00000001406B5E3D: xor     edx, edx
 * 00000001406B5E3F: rdsspq  rdx
 * 00000001406B5E44: mov     [rbp+0E8h+var_90], rdx
 * 00000001406B5E48: lfence
 * 00000001406B5E4B: test    byte ptr gs:858h, 1
 * 00000001406B5E54: jnz     short loc_1406B5E5E
 * 00000001406B5E56: lfence
 * 00000001406B5E59: jmp     loc_1406B60E6
 * 00000001406B5E5E: movzx   eax, word ptr gs:866h
 * 00000001406B5E67: mov     ecx, 48h ; 'H'
 * 00000001406B5E6C: xor     edx, edx
 * 00000001406B5E6E: wrmsr
 * 00000001406B5E70: jmp     loc_1406B60E6
 * 00000001406B5E75: test    cs:KiKvaShadow, 1
 * 00000001406B5E7C: jnz     short loc_1406B5E81
 * 00000001406B5E7E: swapgs
 * 00000001406B5E81: lfence
 * 00000001406B5E84: mov     rcx, gs:9D28h
 * 00000001406B5E8D: test    rcx, rcx
 * 00000001406B5E90: jz      short loc_1406B5EB1
 * 00000001406B5E92: rdsspq  rdx
 * 00000001406B5E97: mov     r10, gs:9D20h
 * 00000001406B5EA0: add     r10, 8
 * 00000001406B5EA4: cmp     rdx, r10
 * 00000001406B5EA7: jnz     short loc_1406B5EB1
 * 00000001406B5EA9: rstorssp qword ptr [rcx]
 * 00000001406B5EAD: saveprevssp
 * 00000001406B5EB1: mov     r10, gs:188h
 * 00000001406B5EBA: mov     rcx, gs:188h
 * 00000001406B5EC3: mov     rcx, [rcx+220h]
 * 00000001406B5ECA: mov     rcx, [rcx+760h]
 * 00000001406B5ED1: mov     gs:850h, rcx
 * 00000001406B5EDA: mov     cx, gs:862h
 * 00000001406B5EE3: mov     gs:864h, cx
 * 00000001406B5EEC: mov     cl, gs:858h
 * 00000001406B5EF4: mov     gs:85Ah, cl
 * 00000001406B5EFC: movzx   eax, word ptr gs:868h
 * 00000001406B5F05: cmp     gs:866h, ax
 * 00000001406B5F0E: jz      short loc_1406B5F22
 * 00000001406B5F10: mov     gs:866h, ax
 * 00000001406B5F19: mov     ecx, 48h ; 'H'
 * 00000001406B5F1E: xor     edx, edx
 * 00000001406B5F20: wrmsr
 * 00000001406B5F22: movzx   edx, byte ptr gs:858h
 * 00000001406B5F2B: test    edx, 8
 * 00000001406B5F31: jz      short loc_1406B5F4A
 * 00000001406B5F33: mov     eax, 1
 * 00000001406B5F38: xor     edx, edx
 * 00000001406B5F3A: mov     ecx, 49h ; 'I'
 * 00000001406B5F3F: wrmsr
 * 00000001406B5F41: movzx   edx, byte ptr gs:858h
 * 00000001406B5F4A: test    edx, 2
 * 00000001406B5F50: jz      loc_1406B608D
 * 00000001406B5F56: call    loc_1406B6069
 * 00000001406B5F5B: add     rsp, 8
 * 00000001406B5F5F: call    loc_1406B6072
 * 00000001406B5F64: add     rsp, 8
 * 00000001406B5F68: call    loc_1406B5F5B
 * 00000001406B5F6D: add     rsp, 8
 * 00000001406B5F71: call    loc_1406B5F64
 * 00000001406B5F76: add     rsp, 8
 * 00000001406B5F7A: call    loc_1406B5F6D
 * 00000001406B5F7F: add     rsp, 8
 * 00000001406B5F83: call    loc_1406B5F76
 * 00000001406B5F88: add     rsp, 8
 * 00000001406B5F8C: call    loc_1406B5F7F
 * 00000001406B5F91: add     rsp, 8
 * 00000001406B5F95: call    loc_1406B5F88
 * 00000001406B5F9A: add     rsp, 8
 * 00000001406B5F9E: call    loc_1406B5F91
 * 00000001406B5FA3: add     rsp, 8
 * 00000001406B5FA7: call    loc_1406B5F9A
 * 00000001406B5FAC: add     rsp, 8
 * 00000001406B5FB0: call    loc_1406B5FA3
 * 00000001406B5FB5: add     rsp, 8
 * 00000001406B5FB9: call    loc_1406B5FAC
 * 00000001406B5FBE: add     rsp, 8
 * 00000001406B5FC2: call    loc_1406B5FB5
 * 00000001406B5FC7: add     rsp, 8
 * 00000001406B5FCB: call    loc_1406B5FBE
 * 00000001406B5FD0: add     rsp, 8
 * 00000001406B5FD4: call    loc_1406B5FC7
 * 00000001406B5FD9: add     rsp, 8
 * 00000001406B5FDD: call    loc_1406B5FD0
 * 00000001406B5FE2: add     rsp, 8
 * 00000001406B5FE6: call    loc_1406B5FD9
 * 00000001406B5FEB: add     rsp, 8
 * 00000001406B5FEF: call    loc_1406B5FE2
 * 00000001406B5FF4: add     rsp, 8
 * 00000001406B5FF8: call    loc_1406B5FEB
 * 00000001406B5FFD: add     rsp, 8
 * 00000001406B6001: call    loc_1406B5FF4
 * 00000001406B6006: add     rsp, 8
 * 00000001406B600A: call    loc_1406B5FFD
 * 00000001406B600F: add     rsp, 8
 * 00000001406B6013: call    loc_1406B6006
 * 00000001406B6018: add     rsp, 8
 * 00000001406B601C: call    loc_1406B600F
 * 00000001406B6021: add     rsp, 8
 * 00000001406B6025: call    loc_1406B6018
 * 00000001406B602A: add     rsp, 8
 * 00000001406B602E: call    loc_1406B6021
 * 00000001406B6033: add     rsp, 8
 * 00000001406B6037: call    loc_1406B602A
 * 00000001406B603C: add     rsp, 8
 * 00000001406B6040: call    loc_1406B6033
 * 00000001406B6045: add     rsp, 8
 * 00000001406B6049: call    loc_1406B603C
 * 00000001406B604E: add     rsp, 8
 * 00000001406B6052: call    loc_1406B6045
 * 00000001406B6057: add     rsp, 8
 * 00000001406B605B: call    loc_1406B604E
 * 00000001406B6060: add     rsp, 8
 * 00000001406B6064: call    loc_1406B6057
 * 00000001406B6069: add     rsp, 8
 * 00000001406B606D: call    loc_1406B6060
 * 00000001406B6072: add     rsp, 8
 * 00000001406B6076: mov     eax, 0DADAh
 * 00000001406B607B: test    byte ptr gs:85Ch, 8
 * 00000001406B6084: jz      short loc_1406B608D
 * 00000001406B6086: mov     al, 20h ; ' '
 * 00000001406B6088: incsspq rax
 * 00000001406B608D: test    edx, 80h
 * 00000001406B6093: jz      short loc_1406B609D
 * 00000001406B6095: lfence
 * 00000001406B6098: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406B609D: lfence
 * 00000001406B60A0: mov     byte ptr gs:85Eh, 0
 * 00000001406B60A9: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406B60B0: jz      short loc_1406B60D1
 * 00000001406B60B2: mov     ecx, 6A7h
 * 00000001406B60B7: rdmsr
 * 00000001406B60B9: cmp     edx, 0
 * 00000001406B60BC: jz      short loc_1406B60D1
 * 00000001406B60BE: mov     ecx, edx
 * 00000001406B60C0: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406B60C6: cmp     edx, ecx
 * 00000001406B60C8: jz      short loc_1406B60D1
 * 00000001406B60CA: mov     ecx, 6A7h
 * 00000001406B60CF: wrmsr
 * 00000001406B60D1: test    byte ptr [r10+3], 3
 * 00000001406B60D6: mov     [rbp+0E8h+var_68], 0
 * 00000001406B60DF: jz      short loc_1406B60E6
 * 00000001406B60E1: call    KiSaveDebugRegisterState
 * 00000001406B60E6: cld
 * 00000001406B60E7: stmxcsr [rbp+0E8h+var_13C]
 * 00000001406B60EB: ldmxcsr dword ptr gs:180h
 * 00000001406B60F4: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001406B60F8: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001406B60FC: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001406B6100: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001406B6104: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001406B6108: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001406B610C: test    [rbp+0E8h+arg_0], 1
 * 00000001406B6113: jz      short loc_1406B611A
 * 00000001406B6115: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406B611A: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B6121: jz      short loc_1406B612F
 * 00000001406B6123: test    [rbp+0E8h+arg_0], 1
 * 00000001406B612A: jz      short loc_1406B612F
 * 00000001406B612C: stac
 * 00000001406B612F: test    [rbp+0E8h+arg_8], 200h
 * 00000001406B6139: jz      short loc_1406B613C
 * 00000001406B613B: sti
 * 00000001406B613C: mov     ecx, 10000003h
 * 00000001406B6141: xor     edx, edx
 * 00000001406B6143: mov     r8, [rbp+0E8h]
 * 00000001406B614A: call    KiExceptionDispatch
 * 00000001406B614F: nop
 * 00000001406B6150: retn
 */
