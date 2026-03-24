/*
 * XREFs of KiSystemCall32Shadow @ 0x140BABE40
 * Callers:
 *     <none>
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x140429DB0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404F9580 (KiSaveDebugRegisterState.c)
 *     KiExceptionDispatch @ 0x1406B3A00 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406B4440 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiSystemCall32Shadow @ 0x140BABE40 (KiSystemCall32Shadow.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall32Shadow @ 0x140BABE40
 * Reason: Hex-Rays returned no pseudocode for 0x140BABE40
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140BABE40: swapgs
 * 0000000140BABE43: mov     gs:0B010h, rsp
 * 0000000140BABE4C: mov     rsp, gs:0B000h
 * 0000000140BABE55: mov     cr3, rsp
 * 0000000140BABE58: mov     rsp, gs:0B008h
 * 0000000140BABE61: push    2Bh ; '+'
 * 0000000140BABE63: push    qword ptr gs:0B010h
 * 0000000140BABE6B: push    r11
 * 0000000140BABE6D: push    23h ; '#'
 * 0000000140BABE6F: push    rcx
 * 0000000140BABE70: sub     rsp, 8
 * 0000000140BABE74: push    rbp
 * 0000000140BABE75: sub     rsp, 158h
 * 0000000140BABE7C: lea     rbp, [rsp+190h+var_110]
 * 0000000140BABE84: mov     byte ptr [rbp-55h], 1
 * 0000000140BABE88: mov     [rbp-50h], rax
 * 0000000140BABE8C: mov     [rbp-48h], rcx
 * 0000000140BABE90: mov     [rbp-40h], rdx
 * 0000000140BABE94: mov     [rbp-38h], r8
 * 0000000140BABE98: mov     [rbp-30h], r9
 * 0000000140BABE9C: mov     [rbp-28h], r10
 * 0000000140BABEA0: mov     [rbp-20h], r11
 * 0000000140BABEA4: test    byte ptr [rbp+0F0h], 1
 * 0000000140BABEAB: jnz     short loc_140BABEE5
 * 0000000140BABEAD: xor     edx, edx
 * 0000000140BABEAF: rdsspq  rdx
 * 0000000140BABEB4: mov     [rbp+58h], rdx
 * 0000000140BABEB8: lfence
 * 0000000140BABEBB: test    byte ptr gs:858h, 1
 * 0000000140BABEC4: jnz     short loc_140BABECE
 * 0000000140BABEC6: lfence
 * 0000000140BABEC9: jmp     loc_140BAC156
 * 0000000140BABECE: movzx   eax, word ptr gs:866h
 * 0000000140BABED7: mov     ecx, 48h ; 'H'
 * 0000000140BABEDC: xor     edx, edx
 * 0000000140BABEDE: wrmsr
 * 0000000140BABEE0: jmp     loc_140BAC156
 * 0000000140BABEE5: test    cs:KiKvaShadow, 1
 * 0000000140BABEEC: jnz     short loc_140BABEF1
 * 0000000140BABEEE: swapgs
 * 0000000140BABEF1: lfence
 * 0000000140BABEF4: mov     rcx, gs:9D28h
 * 0000000140BABEFD: test    rcx, rcx
 * 0000000140BABF00: jz      short loc_140BABF21
 * 0000000140BABF02: rdsspq  rdx
 * 0000000140BABF07: mov     r10, gs:9D20h
 * 0000000140BABF10: add     r10, 8
 * 0000000140BABF14: cmp     rdx, r10
 * 0000000140BABF17: jnz     short loc_140BABF21
 * 0000000140BABF19: rstorssp qword ptr [rcx]
 * 0000000140BABF1D: saveprevssp
 * 0000000140BABF21: mov     r10, gs:188h
 * 0000000140BABF2A: mov     rcx, gs:188h
 * 0000000140BABF33: mov     rcx, [rcx+220h]
 * 0000000140BABF3A: mov     rcx, [rcx+760h]
 * 0000000140BABF41: mov     gs:850h, rcx
 * 0000000140BABF4A: mov     cx, gs:862h
 * 0000000140BABF53: mov     gs:864h, cx
 * 0000000140BABF5C: mov     cl, gs:858h
 * 0000000140BABF64: mov     gs:85Ah, cl
 * 0000000140BABF6C: movzx   eax, word ptr gs:868h
 * 0000000140BABF75: cmp     gs:866h, ax
 * 0000000140BABF7E: jz      short loc_140BABF92
 * 0000000140BABF80: mov     gs:866h, ax
 * 0000000140BABF89: mov     ecx, 48h ; 'H'
 * 0000000140BABF8E: xor     edx, edx
 * 0000000140BABF90: wrmsr
 * 0000000140BABF92: movzx   edx, byte ptr gs:858h
 * 0000000140BABF9B: test    edx, 8
 * 0000000140BABFA1: jz      short loc_140BABFBA
 * 0000000140BABFA3: mov     eax, 1
 * 0000000140BABFA8: xor     edx, edx
 * 0000000140BABFAA: mov     ecx, 49h ; 'I'
 * 0000000140BABFAF: wrmsr
 * 0000000140BABFB1: movzx   edx, byte ptr gs:858h
 * 0000000140BABFBA: test    edx, 2
 * 0000000140BABFC0: jz      loc_140BAC0FD
 * 0000000140BABFC6: call    loc_140BAC0D9
 * 0000000140BABFCB: add     rsp, 8
 * 0000000140BABFCF: call    loc_140BAC0E2
 * 0000000140BABFD4: add     rsp, 8
 * 0000000140BABFD8: call    loc_140BABFCB
 * 0000000140BABFDD: add     rsp, 8
 * 0000000140BABFE1: call    loc_140BABFD4
 * 0000000140BABFE6: add     rsp, 8
 * 0000000140BABFEA: call    loc_140BABFDD
 * 0000000140BABFEF: add     rsp, 8
 * 0000000140BABFF3: call    loc_140BABFE6
 * 0000000140BABFF8: add     rsp, 8
 * 0000000140BABFFC: call    loc_140BABFEF
 * 0000000140BAC001: add     rsp, 8
 * 0000000140BAC005: call    loc_140BABFF8
 * 0000000140BAC00A: add     rsp, 8
 * 0000000140BAC00E: call    loc_140BAC001
 * 0000000140BAC013: add     rsp, 8
 * 0000000140BAC017: call    loc_140BAC00A
 * 0000000140BAC01C: add     rsp, 8
 * 0000000140BAC020: call    loc_140BAC013
 * 0000000140BAC025: add     rsp, 8
 * 0000000140BAC029: call    loc_140BAC01C
 * 0000000140BAC02E: add     rsp, 8
 * 0000000140BAC032: call    loc_140BAC025
 * 0000000140BAC037: add     rsp, 8
 * 0000000140BAC03B: call    loc_140BAC02E
 * 0000000140BAC040: add     rsp, 8
 * 0000000140BAC044: call    loc_140BAC037
 * 0000000140BAC049: add     rsp, 8
 * 0000000140BAC04D: call    loc_140BAC040
 * 0000000140BAC052: add     rsp, 8
 * 0000000140BAC056: call    loc_140BAC049
 * 0000000140BAC05B: add     rsp, 8
 * 0000000140BAC05F: call    loc_140BAC052
 * 0000000140BAC064: add     rsp, 8
 * 0000000140BAC068: call    loc_140BAC05B
 * 0000000140BAC06D: add     rsp, 8
 * 0000000140BAC071: call    loc_140BAC064
 * 0000000140BAC076: add     rsp, 8
 * 0000000140BAC07A: call    loc_140BAC06D
 * 0000000140BAC07F: add     rsp, 8
 * 0000000140BAC083: call    loc_140BAC076
 * 0000000140BAC088: add     rsp, 8
 * 0000000140BAC08C: call    loc_140BAC07F
 * 0000000140BAC091: add     rsp, 8
 * 0000000140BAC095: call    loc_140BAC088
 * 0000000140BAC09A: add     rsp, 8
 * 0000000140BAC09E: call    loc_140BAC091
 * 0000000140BAC0A3: add     rsp, 8
 * 0000000140BAC0A7: call    loc_140BAC09A
 * 0000000140BAC0AC: add     rsp, 8
 * 0000000140BAC0B0: call    loc_140BAC0A3
 * 0000000140BAC0B5: add     rsp, 8
 * 0000000140BAC0B9: call    loc_140BAC0AC
 * 0000000140BAC0BE: add     rsp, 8
 * 0000000140BAC0C2: call    loc_140BAC0B5
 * 0000000140BAC0C7: add     rsp, 8
 * 0000000140BAC0CB: call    loc_140BAC0BE
 * 0000000140BAC0D0: add     rsp, 8
 * 0000000140BAC0D4: call    loc_140BAC0C7
 * 0000000140BAC0D9: add     rsp, 8
 * 0000000140BAC0DD: call    loc_140BAC0D0
 * 0000000140BAC0E2: add     rsp, 8
 * 0000000140BAC0E6: mov     eax, 0DADAh
 * 0000000140BAC0EB: test    byte ptr gs:85Ch, 8
 * 0000000140BAC0F4: jz      short loc_140BAC0FD
 * 0000000140BAC0F6: mov     al, 20h ; ' '
 * 0000000140BAC0F8: incsspq rax
 * 0000000140BAC0FD: test    edx, 80h
 * 0000000140BAC103: jz      short loc_140BAC10D
 * 0000000140BAC105: lfence
 * 0000000140BAC108: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140BAC10D: lfence
 * 0000000140BAC110: mov     byte ptr gs:85Eh, 0
 * 0000000140BAC119: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140BAC120: jz      short loc_140BAC141
 * 0000000140BAC122: mov     ecx, 6A7h
 * 0000000140BAC127: rdmsr
 * 0000000140BAC129: cmp     edx, 0
 * 0000000140BAC12C: jz      short loc_140BAC141
 * 0000000140BAC12E: mov     ecx, edx
 * 0000000140BAC130: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140BAC136: cmp     edx, ecx
 * 0000000140BAC138: jz      short loc_140BAC141
 * 0000000140BAC13A: mov     ecx, 6A7h
 * 0000000140BAC13F: wrmsr
 * 0000000140BAC141: test    byte ptr [r10+3], 3
 * 0000000140BAC146: mov     word ptr [rbp+80h], 0
 * 0000000140BAC14F: jz      short loc_140BAC156
 * 0000000140BAC151: call    KiSaveDebugRegisterState
 * 0000000140BAC156: cld
 * 0000000140BAC157: stmxcsr dword ptr [rbp-54h]
 * 0000000140BAC15B: ldmxcsr dword ptr gs:180h
 * 0000000140BAC164: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140BAC168: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140BAC16C: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140BAC170: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140BAC174: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140BAC178: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140BAC17C: test    byte ptr [rbp+0F0h], 1
 * 0000000140BAC183: jz      short loc_140BAC18A
 * 0000000140BAC185: call    KiSynchronizeUserIsolationDomainExit
 * 0000000140BAC18A: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140BAC191: jz      short loc_140BAC19F
 * 0000000140BAC193: test    byte ptr [rbp+0F0h], 1
 * 0000000140BAC19A: jz      short loc_140BAC19F
 * 0000000140BAC19C: stac
 * 0000000140BAC19F: sub     qword ptr [rbp+0E8h], 2
 * 0000000140BAC1A7: and     dword ptr [rbp+0ECh], 0
 * 0000000140BAC1AE: sti
 * 0000000140BAC1AF: mov     ecx, 0C000001Dh
 * 0000000140BAC1B4: xor     edx, edx
 * 0000000140BAC1B6: mov     r8, [rbp+0E8h]
 * 0000000140BAC1BD: call    KiExceptionDispatch
 * 0000000140BAC1C2: nop
 * 0000000140BAC1C3: retn
 */
