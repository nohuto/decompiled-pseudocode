/*
 * XREFs of KiSystemCall32Shadow @ 0x140BBEE40
 * Callers:
 *     <none>
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x14040ED30 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404F9550 (KiSaveDebugRegisterState.c)
 *     KiExceptionDispatch @ 0x1406BFC00 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406C0640 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiSystemCall32Shadow @ 0x140BBEE40 (KiSystemCall32Shadow.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall32Shadow @ 0x140BBEE40
 * Reason: Hex-Rays returned no pseudocode for 0x140BBEE40
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140BBEE40: swapgs
 * 0000000140BBEE43: mov     gs:0B010h, rsp
 * 0000000140BBEE4C: mov     rsp, gs:0B000h
 * 0000000140BBEE55: mov     cr3, rsp
 * 0000000140BBEE58: mov     rsp, gs:0B008h
 * 0000000140BBEE61: push    2Bh ; '+'
 * 0000000140BBEE63: push    qword ptr gs:0B010h
 * 0000000140BBEE6B: push    r11
 * 0000000140BBEE6D: push    23h ; '#'
 * 0000000140BBEE6F: push    rcx
 * 0000000140BBEE70: sub     rsp, 8
 * 0000000140BBEE74: push    rbp
 * 0000000140BBEE75: sub     rsp, 158h
 * 0000000140BBEE7C: lea     rbp, [rsp+190h+var_110]
 * 0000000140BBEE84: mov     byte ptr [rbp-55h], 1
 * 0000000140BBEE88: mov     [rbp-50h], rax
 * 0000000140BBEE8C: mov     [rbp-48h], rcx
 * 0000000140BBEE90: mov     [rbp-40h], rdx
 * 0000000140BBEE94: mov     [rbp-38h], r8
 * 0000000140BBEE98: mov     [rbp-30h], r9
 * 0000000140BBEE9C: mov     [rbp-28h], r10
 * 0000000140BBEEA0: mov     [rbp-20h], r11
 * 0000000140BBEEA4: test    byte ptr [rbp+0F0h], 1
 * 0000000140BBEEAB: jnz     short loc_140BBEEE5
 * 0000000140BBEEAD: xor     edx, edx
 * 0000000140BBEEAF: rdsspq  rdx
 * 0000000140BBEEB4: mov     [rbp+58h], rdx
 * 0000000140BBEEB8: lfence
 * 0000000140BBEEBB: test    byte ptr gs:858h, 1
 * 0000000140BBEEC4: jnz     short loc_140BBEECE
 * 0000000140BBEEC6: lfence
 * 0000000140BBEEC9: jmp     loc_140BBF156
 * 0000000140BBEECE: movzx   eax, word ptr gs:866h
 * 0000000140BBEED7: mov     ecx, 48h ; 'H'
 * 0000000140BBEEDC: xor     edx, edx
 * 0000000140BBEEDE: wrmsr
 * 0000000140BBEEE0: jmp     loc_140BBF156
 * 0000000140BBEEE5: test    cs:KiKvaShadow, 1
 * 0000000140BBEEEC: jnz     short loc_140BBEEF1
 * 0000000140BBEEEE: swapgs
 * 0000000140BBEEF1: lfence
 * 0000000140BBEEF4: mov     rcx, gs:9D28h
 * 0000000140BBEEFD: test    rcx, rcx
 * 0000000140BBEF00: jz      short loc_140BBEF21
 * 0000000140BBEF02: rdsspq  rdx
 * 0000000140BBEF07: mov     r10, gs:9D20h
 * 0000000140BBEF10: add     r10, 8
 * 0000000140BBEF14: cmp     rdx, r10
 * 0000000140BBEF17: jnz     short loc_140BBEF21
 * 0000000140BBEF19: rstorssp qword ptr [rcx]
 * 0000000140BBEF1D: saveprevssp
 * 0000000140BBEF21: mov     r10, gs:188h
 * 0000000140BBEF2A: mov     rcx, gs:188h
 * 0000000140BBEF33: mov     rcx, [rcx+220h]
 * 0000000140BBEF3A: mov     rcx, [rcx+760h]
 * 0000000140BBEF41: mov     gs:850h, rcx
 * 0000000140BBEF4A: mov     cx, gs:862h
 * 0000000140BBEF53: mov     gs:864h, cx
 * 0000000140BBEF5C: mov     cl, gs:858h
 * 0000000140BBEF64: mov     gs:85Ah, cl
 * 0000000140BBEF6C: movzx   eax, word ptr gs:868h
 * 0000000140BBEF75: cmp     gs:866h, ax
 * 0000000140BBEF7E: jz      short loc_140BBEF92
 * 0000000140BBEF80: mov     gs:866h, ax
 * 0000000140BBEF89: mov     ecx, 48h ; 'H'
 * 0000000140BBEF8E: xor     edx, edx
 * 0000000140BBEF90: wrmsr
 * 0000000140BBEF92: movzx   edx, byte ptr gs:858h
 * 0000000140BBEF9B: test    edx, 8
 * 0000000140BBEFA1: jz      short loc_140BBEFBA
 * 0000000140BBEFA3: mov     eax, 1
 * 0000000140BBEFA8: xor     edx, edx
 * 0000000140BBEFAA: mov     ecx, 49h ; 'I'
 * 0000000140BBEFAF: wrmsr
 * 0000000140BBEFB1: movzx   edx, byte ptr gs:858h
 * 0000000140BBEFBA: test    edx, 2
 * 0000000140BBEFC0: jz      loc_140BBF0FD
 * 0000000140BBEFC6: call    loc_140BBF0D9
 * 0000000140BBEFCB: add     rsp, 8
 * 0000000140BBEFCF: call    loc_140BBF0E2
 * 0000000140BBEFD4: add     rsp, 8
 * 0000000140BBEFD8: call    loc_140BBEFCB
 * 0000000140BBEFDD: add     rsp, 8
 * 0000000140BBEFE1: call    loc_140BBEFD4
 * 0000000140BBEFE6: add     rsp, 8
 * 0000000140BBEFEA: call    loc_140BBEFDD
 * 0000000140BBEFEF: add     rsp, 8
 * 0000000140BBEFF3: call    loc_140BBEFE6
 * 0000000140BBEFF8: add     rsp, 8
 * 0000000140BBEFFC: call    loc_140BBEFEF
 * 0000000140BBF001: add     rsp, 8
 * 0000000140BBF005: call    loc_140BBEFF8
 * 0000000140BBF00A: add     rsp, 8
 * 0000000140BBF00E: call    loc_140BBF001
 * 0000000140BBF013: add     rsp, 8
 * 0000000140BBF017: call    loc_140BBF00A
 * 0000000140BBF01C: add     rsp, 8
 * 0000000140BBF020: call    loc_140BBF013
 * 0000000140BBF025: add     rsp, 8
 * 0000000140BBF029: call    loc_140BBF01C
 * 0000000140BBF02E: add     rsp, 8
 * 0000000140BBF032: call    loc_140BBF025
 * 0000000140BBF037: add     rsp, 8
 * 0000000140BBF03B: call    loc_140BBF02E
 * 0000000140BBF040: add     rsp, 8
 * 0000000140BBF044: call    loc_140BBF037
 * 0000000140BBF049: add     rsp, 8
 * 0000000140BBF04D: call    loc_140BBF040
 * 0000000140BBF052: add     rsp, 8
 * 0000000140BBF056: call    loc_140BBF049
 * 0000000140BBF05B: add     rsp, 8
 * 0000000140BBF05F: call    loc_140BBF052
 * 0000000140BBF064: add     rsp, 8
 * 0000000140BBF068: call    loc_140BBF05B
 * 0000000140BBF06D: add     rsp, 8
 * 0000000140BBF071: call    loc_140BBF064
 * 0000000140BBF076: add     rsp, 8
 * 0000000140BBF07A: call    loc_140BBF06D
 * 0000000140BBF07F: add     rsp, 8
 * 0000000140BBF083: call    loc_140BBF076
 * 0000000140BBF088: add     rsp, 8
 * 0000000140BBF08C: call    loc_140BBF07F
 * 0000000140BBF091: add     rsp, 8
 * 0000000140BBF095: call    loc_140BBF088
 * 0000000140BBF09A: add     rsp, 8
 * 0000000140BBF09E: call    loc_140BBF091
 * 0000000140BBF0A3: add     rsp, 8
 * 0000000140BBF0A7: call    loc_140BBF09A
 * 0000000140BBF0AC: add     rsp, 8
 * 0000000140BBF0B0: call    loc_140BBF0A3
 * 0000000140BBF0B5: add     rsp, 8
 * 0000000140BBF0B9: call    loc_140BBF0AC
 * 0000000140BBF0BE: add     rsp, 8
 * 0000000140BBF0C2: call    loc_140BBF0B5
 * 0000000140BBF0C7: add     rsp, 8
 * 0000000140BBF0CB: call    loc_140BBF0BE
 * 0000000140BBF0D0: add     rsp, 8
 * 0000000140BBF0D4: call    loc_140BBF0C7
 * 0000000140BBF0D9: add     rsp, 8
 * 0000000140BBF0DD: call    loc_140BBF0D0
 * 0000000140BBF0E2: add     rsp, 8
 * 0000000140BBF0E6: mov     eax, 0DADAh
 * 0000000140BBF0EB: test    byte ptr gs:85Ch, 8
 * 0000000140BBF0F4: jz      short loc_140BBF0FD
 * 0000000140BBF0F6: mov     al, 20h ; ' '
 * 0000000140BBF0F8: incsspq rax
 * 0000000140BBF0FD: test    edx, 80h
 * 0000000140BBF103: jz      short loc_140BBF10D
 * 0000000140BBF105: lfence
 * 0000000140BBF108: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140BBF10D: lfence
 * 0000000140BBF110: mov     byte ptr gs:85Eh, 0
 * 0000000140BBF119: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140BBF120: jz      short loc_140BBF141
 * 0000000140BBF122: mov     ecx, 6A7h
 * 0000000140BBF127: rdmsr
 * 0000000140BBF129: cmp     edx, 0
 * 0000000140BBF12C: jz      short loc_140BBF141
 * 0000000140BBF12E: mov     ecx, edx
 * 0000000140BBF130: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140BBF136: cmp     edx, ecx
 * 0000000140BBF138: jz      short loc_140BBF141
 * 0000000140BBF13A: mov     ecx, 6A7h
 * 0000000140BBF13F: wrmsr
 * 0000000140BBF141: test    byte ptr [r10+3], 3
 * 0000000140BBF146: mov     word ptr [rbp+80h], 0
 * 0000000140BBF14F: jz      short loc_140BBF156
 * 0000000140BBF151: call    KiSaveDebugRegisterState
 * 0000000140BBF156: cld
 * 0000000140BBF157: stmxcsr dword ptr [rbp-54h]
 * 0000000140BBF15B: ldmxcsr dword ptr gs:180h
 * 0000000140BBF164: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140BBF168: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140BBF16C: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140BBF170: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140BBF174: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140BBF178: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140BBF17C: test    byte ptr [rbp+0F0h], 1
 * 0000000140BBF183: jz      short loc_140BBF18A
 * 0000000140BBF185: call    KiSynchronizeUserIsolationDomainExit
 * 0000000140BBF18A: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140BBF191: jz      short loc_140BBF19F
 * 0000000140BBF193: test    byte ptr [rbp+0F0h], 1
 * 0000000140BBF19A: jz      short loc_140BBF19F
 * 0000000140BBF19C: stac
 * 0000000140BBF19F: sub     qword ptr [rbp+0E8h], 2
 * 0000000140BBF1A7: and     dword ptr [rbp+0ECh], 0
 * 0000000140BBF1AE: sti
 * 0000000140BBF1AF: mov     ecx, 0C000001Dh
 * 0000000140BBF1B4: xor     edx, edx
 * 0000000140BBF1B6: mov     r8, [rbp+0E8h]
 * 0000000140BBF1BD: call    KiExceptionDispatch
 * 0000000140BBF1C2: nop
 * 0000000140BBF1C3: retn
 */
