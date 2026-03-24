/*
 * XREFs of KiRaiseSecurityCheckFailure @ 0x1406BCBC0
 * Callers:
 *     KiRaiseSecurityCheckFailureShadow @ 0x140BBBD40 (KiRaiseSecurityCheckFailureShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x14041B1F0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404FBC90 (KiSaveDebugRegisterState.c)
 *     KiRaiseSecurityCheckFailure @ 0x1406BCBC0 (KiRaiseSecurityCheckFailure.c)
 *     KiFastFailDispatch @ 0x1406BF240 (KiFastFailDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406BF740 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseSecurityCheckFailure @ 0x1406BCBC0
 * Reason: Hex-Rays returned no pseudocode for 0x1406BCBC0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406BCBC0: sub     qword ptr [rsp+0], 2
 * 00000001406BCBC5: cmp     [rsp+arg_0], 23h ; '#'
 * 00000001406BCBCB: jnz     short loc_1406BCBD2
 * 00000001406BCBCD: and     dword ptr [rsp+4], 0
 * 00000001406BCBD2: sub     rsp, 8
 * 00000001406BCBD6: push    rbp
 * 00000001406BCBD7: sub     rsp, 158h
 * 00000001406BCBDE: lea     rbp, [rsp+168h+var_E8]
 * 00000001406BCBE6: mov     byte ptr [rbp-55h], 1
 * 00000001406BCBEA: mov     [rbp-50h], rax
 * 00000001406BCBEE: mov     [rbp-48h], rcx
 * 00000001406BCBF2: mov     [rbp-40h], rdx
 * 00000001406BCBF6: mov     [rbp-38h], r8
 * 00000001406BCBFA: mov     [rbp-30h], r9
 * 00000001406BCBFE: mov     [rbp-28h], r10
 * 00000001406BCC02: mov     [rbp-20h], r11
 * 00000001406BCC06: test    byte ptr [rbp+0F0h], 1
 * 00000001406BCC0D: jnz     short loc_1406BCC47
 * 00000001406BCC0F: xor     edx, edx
 * 00000001406BCC11: rdsspq  rdx
 * 00000001406BCC16: mov     [rbp+58h], rdx
 * 00000001406BCC1A: lfence
 * 00000001406BCC1D: test    byte ptr gs:858h, 1
 * 00000001406BCC26: jnz     short loc_1406BCC30
 * 00000001406BCC28: lfence
 * 00000001406BCC2B: jmp     loc_1406BCEB8
 * 00000001406BCC30: movzx   eax, word ptr gs:866h
 * 00000001406BCC39: mov     ecx, 48h ; 'H'
 * 00000001406BCC3E: xor     edx, edx
 * 00000001406BCC40: wrmsr
 * 00000001406BCC42: jmp     loc_1406BCEB8
 * 00000001406BCC47: test    cs:KiKvaShadow, 1
 * 00000001406BCC4E: jnz     short loc_1406BCC53
 * 00000001406BCC50: swapgs
 * 00000001406BCC53: lfence
 * 00000001406BCC56: mov     rcx, gs:9D28h
 * 00000001406BCC5F: test    rcx, rcx
 * 00000001406BCC62: jz      short loc_1406BCC83
 * 00000001406BCC64: rdsspq  rdx
 * 00000001406BCC69: mov     r10, gs:9D20h
 * 00000001406BCC72: add     r10, 8
 * 00000001406BCC76: cmp     rdx, r10
 * 00000001406BCC79: jnz     short loc_1406BCC83
 * 00000001406BCC7B: rstorssp qword ptr [rcx]
 * 00000001406BCC7F: saveprevssp
 * 00000001406BCC83: mov     r10, gs:188h
 * 00000001406BCC8C: mov     rcx, gs:188h
 * 00000001406BCC95: mov     rcx, [rcx+220h]
 * 00000001406BCC9C: mov     rcx, [rcx+760h]
 * 00000001406BCCA3: mov     gs:850h, rcx
 * 00000001406BCCAC: mov     cx, gs:862h
 * 00000001406BCCB5: mov     gs:864h, cx
 * 00000001406BCCBE: mov     cl, gs:858h
 * 00000001406BCCC6: mov     gs:85Ah, cl
 * 00000001406BCCCE: movzx   eax, word ptr gs:868h
 * 00000001406BCCD7: cmp     gs:866h, ax
 * 00000001406BCCE0: jz      short loc_1406BCCF4
 * 00000001406BCCE2: mov     gs:866h, ax
 * 00000001406BCCEB: mov     ecx, 48h ; 'H'
 * 00000001406BCCF0: xor     edx, edx
 * 00000001406BCCF2: wrmsr
 * 00000001406BCCF4: movzx   edx, byte ptr gs:858h
 * 00000001406BCCFD: test    edx, 8
 * 00000001406BCD03: jz      short loc_1406BCD1C
 * 00000001406BCD05: mov     eax, 1
 * 00000001406BCD0A: xor     edx, edx
 * 00000001406BCD0C: mov     ecx, 49h ; 'I'
 * 00000001406BCD11: wrmsr
 * 00000001406BCD13: movzx   edx, byte ptr gs:858h
 * 00000001406BCD1C: test    edx, 2
 * 00000001406BCD22: jz      loc_1406BCE5F
 * 00000001406BCD28: call    loc_1406BCE3B
 * 00000001406BCD2D: add     rsp, 8
 * 00000001406BCD31: call    loc_1406BCE44
 * 00000001406BCD36: add     rsp, 8
 * 00000001406BCD3A: call    loc_1406BCD2D
 * 00000001406BCD3F: add     rsp, 8
 * 00000001406BCD43: call    loc_1406BCD36
 * 00000001406BCD48: add     rsp, 8
 * 00000001406BCD4C: call    loc_1406BCD3F
 * 00000001406BCD51: add     rsp, 8
 * 00000001406BCD55: call    loc_1406BCD48
 * 00000001406BCD5A: add     rsp, 8
 * 00000001406BCD5E: call    loc_1406BCD51
 * 00000001406BCD63: add     rsp, 8
 * 00000001406BCD67: call    loc_1406BCD5A
 * 00000001406BCD6C: add     rsp, 8
 * 00000001406BCD70: call    loc_1406BCD63
 * 00000001406BCD75: add     rsp, 8
 * 00000001406BCD79: call    loc_1406BCD6C
 * 00000001406BCD7E: add     rsp, 8
 * 00000001406BCD82: call    loc_1406BCD75
 * 00000001406BCD87: add     rsp, 8
 * 00000001406BCD8B: call    loc_1406BCD7E
 * 00000001406BCD90: add     rsp, 8
 * 00000001406BCD94: call    loc_1406BCD87
 * 00000001406BCD99: add     rsp, 8
 * 00000001406BCD9D: call    loc_1406BCD90
 * 00000001406BCDA2: add     rsp, 8
 * 00000001406BCDA6: call    loc_1406BCD99
 * 00000001406BCDAB: add     rsp, 8
 * 00000001406BCDAF: call    loc_1406BCDA2
 * 00000001406BCDB4: add     rsp, 8
 * 00000001406BCDB8: call    loc_1406BCDAB
 * 00000001406BCDBD: add     rsp, 8
 * 00000001406BCDC1: call    loc_1406BCDB4
 * 00000001406BCDC6: add     rsp, 8
 * 00000001406BCDCA: call    loc_1406BCDBD
 * 00000001406BCDCF: add     rsp, 8
 * 00000001406BCDD3: call    loc_1406BCDC6
 * 00000001406BCDD8: add     rsp, 8
 * 00000001406BCDDC: call    loc_1406BCDCF
 * 00000001406BCDE1: add     rsp, 8
 * 00000001406BCDE5: call    loc_1406BCDD8
 * 00000001406BCDEA: add     rsp, 8
 * 00000001406BCDEE: call    loc_1406BCDE1
 * 00000001406BCDF3: add     rsp, 8
 * 00000001406BCDF7: call    loc_1406BCDEA
 * 00000001406BCDFC: add     rsp, 8
 * 00000001406BCE00: call    loc_1406BCDF3
 * 00000001406BCE05: add     rsp, 8
 * 00000001406BCE09: call    loc_1406BCDFC
 * 00000001406BCE0E: add     rsp, 8
 * 00000001406BCE12: call    loc_1406BCE05
 * 00000001406BCE17: add     rsp, 8
 * 00000001406BCE1B: call    loc_1406BCE0E
 * 00000001406BCE20: add     rsp, 8
 * 00000001406BCE24: call    loc_1406BCE17
 * 00000001406BCE29: add     rsp, 8
 * 00000001406BCE2D: call    loc_1406BCE20
 * 00000001406BCE32: add     rsp, 8
 * 00000001406BCE36: call    loc_1406BCE29
 * 00000001406BCE3B: add     rsp, 8
 * 00000001406BCE3F: call    loc_1406BCE32
 * 00000001406BCE44: add     rsp, 8
 * 00000001406BCE48: mov     eax, 0DADAh
 * 00000001406BCE4D: test    byte ptr gs:85Ch, 8
 * 00000001406BCE56: jz      short loc_1406BCE5F
 * 00000001406BCE58: mov     al, 20h ; ' '
 * 00000001406BCE5A: incsspq rax
 * 00000001406BCE5F: test    edx, 80h
 * 00000001406BCE65: jz      short loc_1406BCE6F
 * 00000001406BCE67: lfence
 * 00000001406BCE6A: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406BCE6F: lfence
 * 00000001406BCE72: mov     byte ptr gs:85Eh, 0
 * 00000001406BCE7B: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406BCE82: jz      short loc_1406BCEA3
 * 00000001406BCE84: mov     ecx, 6A7h
 * 00000001406BCE89: rdmsr
 * 00000001406BCE8B: cmp     edx, 0
 * 00000001406BCE8E: jz      short loc_1406BCEA3
 * 00000001406BCE90: mov     ecx, edx
 * 00000001406BCE92: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406BCE98: cmp     edx, ecx
 * 00000001406BCE9A: jz      short loc_1406BCEA3
 * 00000001406BCE9C: mov     ecx, 6A7h
 * 00000001406BCEA1: wrmsr
 * 00000001406BCEA3: test    byte ptr [r10+3], 3
 * 00000001406BCEA8: mov     word ptr [rbp+80h], 0
 * 00000001406BCEB1: jz      short loc_1406BCEB8
 * 00000001406BCEB3: call    KiSaveDebugRegisterState
 * 00000001406BCEB8: cld
 * 00000001406BCEB9: stmxcsr dword ptr [rbp-54h]
 * 00000001406BCEBD: ldmxcsr dword ptr gs:180h
 * 00000001406BCEC6: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001406BCECA: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001406BCECE: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001406BCED2: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001406BCED6: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001406BCEDA: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001406BCEDE: test    byte ptr [rbp+0F0h], 1
 * 00000001406BCEE5: jz      short loc_1406BCEEC
 * 00000001406BCEE7: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406BCEEC: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406BCEF3: jz      short loc_1406BCF01
 * 00000001406BCEF5: test    byte ptr [rbp+0F0h], 1
 * 00000001406BCEFC: jz      short loc_1406BCF01
 * 00000001406BCEFE: stac
 * 00000001406BCF01: test    dword ptr [rbp+0F8h], 200h
 * 00000001406BCF0B: jz      short loc_1406BCF0E
 * 00000001406BCF0D: sti
 * 00000001406BCF0E: mov     r9, [rbp-48h]
 * 00000001406BCF12: mov     ecx, 0C0000409h
 * 00000001406BCF17: mov     edx, 1
 * 00000001406BCF1C: mov     r8, [rbp+0E8h]
 * 00000001406BCF23: call    KiFastFailDispatch
 * 00000001406BCF28: nop
 * 00000001406BCF29: retn
 */
