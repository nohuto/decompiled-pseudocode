/*
 * XREFs of KiDivideErrorFault @ 0x1406AAB00
 * Callers:
 *     KiDivideErrorFaultShadow @ 0x140BAA100 (KiDivideErrorFaultShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x140429DB0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404F9580 (KiSaveDebugRegisterState.c)
 *     KiDivideErrorFault @ 0x1406AAB00 (KiDivideErrorFault.c)
 *     KiExceptionDispatch @ 0x1406B3A00 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406B4440 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiDivideErrorFault @ 0x1406AAB00
 * Reason: Hex-Rays returned no pseudocode for 0x1406AAB00
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406AAB00: sub     rsp, 8
 * 00000001406AAB04: push    rbp
 * 00000001406AAB05: sub     rsp, 158h
 * 00000001406AAB0C: lea     rbp, [rsp+80h]
 * 00000001406AAB14: mov     [rbp+0E8h+var_13D], 1
 * 00000001406AAB18: mov     [rbp+0E8h+var_138], rax
 * 00000001406AAB1C: mov     [rbp+0E8h+var_130], rcx
 * 00000001406AAB20: mov     [rbp+0E8h+var_128], rdx
 * 00000001406AAB24: mov     [rbp+0E8h+var_120], r8
 * 00000001406AAB28: mov     [rbp+0E8h+var_118], r9
 * 00000001406AAB2C: mov     [rbp+0E8h+var_110], r10
 * 00000001406AAB30: mov     [rbp+0E8h+var_108], r11
 * 00000001406AAB34: test    [rbp+0E8h+arg_0], 1
 * 00000001406AAB3B: jnz     short loc_1406AAB75
 * 00000001406AAB3D: xor     edx, edx
 * 00000001406AAB3F: rdsspq  rdx
 * 00000001406AAB44: mov     [rbp+0E8h+var_90], rdx
 * 00000001406AAB48: lfence
 * 00000001406AAB4B: test    byte ptr gs:858h, 1
 * 00000001406AAB54: jnz     short loc_1406AAB5E
 * 00000001406AAB56: lfence
 * 00000001406AAB59: jmp     loc_1406AADE6
 * 00000001406AAB5E: movzx   eax, word ptr gs:866h
 * 00000001406AAB67: mov     ecx, 48h ; 'H'
 * 00000001406AAB6C: xor     edx, edx
 * 00000001406AAB6E: wrmsr
 * 00000001406AAB70: jmp     loc_1406AADE6
 * 00000001406AAB75: test    cs:KiKvaShadow, 1
 * 00000001406AAB7C: jnz     short loc_1406AAB81
 * 00000001406AAB7E: swapgs
 * 00000001406AAB81: lfence
 * 00000001406AAB84: mov     rcx, gs:9D28h
 * 00000001406AAB8D: test    rcx, rcx
 * 00000001406AAB90: jz      short loc_1406AABB1
 * 00000001406AAB92: rdsspq  rdx
 * 00000001406AAB97: mov     r10, gs:9D20h
 * 00000001406AABA0: add     r10, 8
 * 00000001406AABA4: cmp     rdx, r10
 * 00000001406AABA7: jnz     short loc_1406AABB1
 * 00000001406AABA9: rstorssp qword ptr [rcx]
 * 00000001406AABAD: saveprevssp
 * 00000001406AABB1: mov     r10, gs:188h
 * 00000001406AABBA: mov     rcx, gs:188h
 * 00000001406AABC3: mov     rcx, [rcx+220h]
 * 00000001406AABCA: mov     rcx, [rcx+760h]
 * 00000001406AABD1: mov     gs:850h, rcx
 * 00000001406AABDA: mov     cx, gs:862h
 * 00000001406AABE3: mov     gs:864h, cx
 * 00000001406AABEC: mov     cl, gs:858h
 * 00000001406AABF4: mov     gs:85Ah, cl
 * 00000001406AABFC: movzx   eax, word ptr gs:868h
 * 00000001406AAC05: cmp     gs:866h, ax
 * 00000001406AAC0E: jz      short loc_1406AAC22
 * 00000001406AAC10: mov     gs:866h, ax
 * 00000001406AAC19: mov     ecx, 48h ; 'H'
 * 00000001406AAC1E: xor     edx, edx
 * 00000001406AAC20: wrmsr
 * 00000001406AAC22: movzx   edx, byte ptr gs:858h
 * 00000001406AAC2B: test    edx, 8
 * 00000001406AAC31: jz      short loc_1406AAC4A
 * 00000001406AAC33: mov     eax, 1
 * 00000001406AAC38: xor     edx, edx
 * 00000001406AAC3A: mov     ecx, 49h ; 'I'
 * 00000001406AAC3F: wrmsr
 * 00000001406AAC41: movzx   edx, byte ptr gs:858h
 * 00000001406AAC4A: test    edx, 2
 * 00000001406AAC50: jz      loc_1406AAD8D
 * 00000001406AAC56: call    loc_1406AAD69
 * 00000001406AAC5B: add     rsp, 8
 * 00000001406AAC5F: call    loc_1406AAD72
 * 00000001406AAC64: add     rsp, 8
 * 00000001406AAC68: call    loc_1406AAC5B
 * 00000001406AAC6D: add     rsp, 8
 * 00000001406AAC71: call    loc_1406AAC64
 * 00000001406AAC76: add     rsp, 8
 * 00000001406AAC7A: call    loc_1406AAC6D
 * 00000001406AAC7F: add     rsp, 8
 * 00000001406AAC83: call    loc_1406AAC76
 * 00000001406AAC88: add     rsp, 8
 * 00000001406AAC8C: call    loc_1406AAC7F
 * 00000001406AAC91: add     rsp, 8
 * 00000001406AAC95: call    loc_1406AAC88
 * 00000001406AAC9A: add     rsp, 8
 * 00000001406AAC9E: call    loc_1406AAC91
 * 00000001406AACA3: add     rsp, 8
 * 00000001406AACA7: call    loc_1406AAC9A
 * 00000001406AACAC: add     rsp, 8
 * 00000001406AACB0: call    loc_1406AACA3
 * 00000001406AACB5: add     rsp, 8
 * 00000001406AACB9: call    loc_1406AACAC
 * 00000001406AACBE: add     rsp, 8
 * 00000001406AACC2: call    loc_1406AACB5
 * 00000001406AACC7: add     rsp, 8
 * 00000001406AACCB: call    loc_1406AACBE
 * 00000001406AACD0: add     rsp, 8
 * 00000001406AACD4: call    loc_1406AACC7
 * 00000001406AACD9: add     rsp, 8
 * 00000001406AACDD: call    loc_1406AACD0
 * 00000001406AACE2: add     rsp, 8
 * 00000001406AACE6: call    loc_1406AACD9
 * 00000001406AACEB: add     rsp, 8
 * 00000001406AACEF: call    loc_1406AACE2
 * 00000001406AACF4: add     rsp, 8
 * 00000001406AACF8: call    loc_1406AACEB
 * 00000001406AACFD: add     rsp, 8
 * 00000001406AAD01: call    loc_1406AACF4
 * 00000001406AAD06: add     rsp, 8
 * 00000001406AAD0A: call    loc_1406AACFD
 * 00000001406AAD0F: add     rsp, 8
 * 00000001406AAD13: call    loc_1406AAD06
 * 00000001406AAD18: add     rsp, 8
 * 00000001406AAD1C: call    loc_1406AAD0F
 * 00000001406AAD21: add     rsp, 8
 * 00000001406AAD25: call    loc_1406AAD18
 * 00000001406AAD2A: add     rsp, 8
 * 00000001406AAD2E: call    loc_1406AAD21
 * 00000001406AAD33: add     rsp, 8
 * 00000001406AAD37: call    loc_1406AAD2A
 * 00000001406AAD3C: add     rsp, 8
 * 00000001406AAD40: call    loc_1406AAD33
 * 00000001406AAD45: add     rsp, 8
 * 00000001406AAD49: call    loc_1406AAD3C
 * 00000001406AAD4E: add     rsp, 8
 * 00000001406AAD52: call    loc_1406AAD45
 * 00000001406AAD57: add     rsp, 8
 * 00000001406AAD5B: call    loc_1406AAD4E
 * 00000001406AAD60: add     rsp, 8
 * 00000001406AAD64: call    loc_1406AAD57
 * 00000001406AAD69: add     rsp, 8
 * 00000001406AAD6D: call    loc_1406AAD60
 * 00000001406AAD72: add     rsp, 8
 * 00000001406AAD76: mov     eax, 0DADAh
 * 00000001406AAD7B: test    byte ptr gs:85Ch, 8
 * 00000001406AAD84: jz      short loc_1406AAD8D
 * 00000001406AAD86: mov     al, 20h ; ' '
 * 00000001406AAD88: incsspq rax
 * 00000001406AAD8D: test    edx, 80h
 * 00000001406AAD93: jz      short loc_1406AAD9D
 * 00000001406AAD95: lfence
 * 00000001406AAD98: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406AAD9D: lfence
 * 00000001406AADA0: mov     byte ptr gs:85Eh, 0
 * 00000001406AADA9: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406AADB0: jz      short loc_1406AADD1
 * 00000001406AADB2: mov     ecx, 6A7h
 * 00000001406AADB7: rdmsr
 * 00000001406AADB9: cmp     edx, 0
 * 00000001406AADBC: jz      short loc_1406AADD1
 * 00000001406AADBE: mov     ecx, edx
 * 00000001406AADC0: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406AADC6: cmp     edx, ecx
 * 00000001406AADC8: jz      short loc_1406AADD1
 * 00000001406AADCA: mov     ecx, 6A7h
 * 00000001406AADCF: wrmsr
 * 00000001406AADD1: test    byte ptr [r10+3], 3
 * 00000001406AADD6: mov     [rbp+0E8h+var_68], 0
 * 00000001406AADDF: jz      short loc_1406AADE6
 * 00000001406AADE1: call    KiSaveDebugRegisterState
 * 00000001406AADE6: cld
 * 00000001406AADE7: stmxcsr [rbp+0E8h+var_13C]
 * 00000001406AADEB: ldmxcsr dword ptr gs:180h
 * 00000001406AADF4: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001406AADF8: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001406AADFC: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001406AAE00: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001406AAE04: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001406AAE08: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001406AAE0C: test    [rbp+0E8h+arg_0], 1
 * 00000001406AAE13: jz      short loc_1406AAE1A
 * 00000001406AAE15: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406AAE1A: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406AAE21: jz      short loc_1406AAE2F
 * 00000001406AAE23: test    [rbp+0E8h+arg_0], 1
 * 00000001406AAE2A: jz      short loc_1406AAE2F
 * 00000001406AAE2C: stac
 * 00000001406AAE2F: test    [rbp+0E8h+arg_8], 200h
 * 00000001406AAE39: jz      short loc_1406AAE3C
 * 00000001406AAE3B: sti
 * 00000001406AAE3C: mov     ecx, 10000003h
 * 00000001406AAE41: xor     edx, edx
 * 00000001406AAE43: mov     r8, [rbp+0E8h]
 * 00000001406AAE4A: call    KiExceptionDispatch
 * 00000001406AAE4F: nop
 * 00000001406AAE50: retn
 */
