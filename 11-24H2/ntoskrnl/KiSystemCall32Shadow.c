/*
 * XREFs of KiSystemCall32Shadow @ 0x140BBCE40
 * Callers:
 *     <none>
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x14041B1F0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404FBC90 (KiSaveDebugRegisterState.c)
 *     KiExceptionDispatch @ 0x1406BED00 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406BF740 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiSystemCall32Shadow @ 0x140BBCE40 (KiSystemCall32Shadow.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall32Shadow @ 0x140BBCE40
 * Reason: Hex-Rays returned no pseudocode for 0x140BBCE40
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140BBCE40: swapgs
 * 0000000140BBCE43: mov     gs:0B010h, rsp
 * 0000000140BBCE4C: mov     rsp, gs:0B000h
 * 0000000140BBCE55: mov     cr3, rsp
 * 0000000140BBCE58: mov     rsp, gs:0B008h
 * 0000000140BBCE61: push    2Bh ; '+'
 * 0000000140BBCE63: push    qword ptr gs:0B010h
 * 0000000140BBCE6B: push    r11
 * 0000000140BBCE6D: push    23h ; '#'
 * 0000000140BBCE6F: push    rcx
 * 0000000140BBCE70: sub     rsp, 8
 * 0000000140BBCE74: push    rbp
 * 0000000140BBCE75: sub     rsp, 158h
 * 0000000140BBCE7C: lea     rbp, [rsp+190h+var_110]
 * 0000000140BBCE84: mov     byte ptr [rbp-55h], 1
 * 0000000140BBCE88: mov     [rbp-50h], rax
 * 0000000140BBCE8C: mov     [rbp-48h], rcx
 * 0000000140BBCE90: mov     [rbp-40h], rdx
 * 0000000140BBCE94: mov     [rbp-38h], r8
 * 0000000140BBCE98: mov     [rbp-30h], r9
 * 0000000140BBCE9C: mov     [rbp-28h], r10
 * 0000000140BBCEA0: mov     [rbp-20h], r11
 * 0000000140BBCEA4: test    byte ptr [rbp+0F0h], 1
 * 0000000140BBCEAB: jnz     short loc_140BBCEE5
 * 0000000140BBCEAD: xor     edx, edx
 * 0000000140BBCEAF: rdsspq  rdx
 * 0000000140BBCEB4: mov     [rbp+58h], rdx
 * 0000000140BBCEB8: lfence
 * 0000000140BBCEBB: test    byte ptr gs:858h, 1
 * 0000000140BBCEC4: jnz     short loc_140BBCECE
 * 0000000140BBCEC6: lfence
 * 0000000140BBCEC9: jmp     loc_140BBD156
 * 0000000140BBCECE: movzx   eax, word ptr gs:866h
 * 0000000140BBCED7: mov     ecx, 48h ; 'H'
 * 0000000140BBCEDC: xor     edx, edx
 * 0000000140BBCEDE: wrmsr
 * 0000000140BBCEE0: jmp     loc_140BBD156
 * 0000000140BBCEE5: test    cs:KiKvaShadow, 1
 * 0000000140BBCEEC: jnz     short loc_140BBCEF1
 * 0000000140BBCEEE: swapgs
 * 0000000140BBCEF1: lfence
 * 0000000140BBCEF4: mov     rcx, gs:9D28h
 * 0000000140BBCEFD: test    rcx, rcx
 * 0000000140BBCF00: jz      short loc_140BBCF21
 * 0000000140BBCF02: rdsspq  rdx
 * 0000000140BBCF07: mov     r10, gs:9D20h
 * 0000000140BBCF10: add     r10, 8
 * 0000000140BBCF14: cmp     rdx, r10
 * 0000000140BBCF17: jnz     short loc_140BBCF21
 * 0000000140BBCF19: rstorssp qword ptr [rcx]
 * 0000000140BBCF1D: saveprevssp
 * 0000000140BBCF21: mov     r10, gs:188h
 * 0000000140BBCF2A: mov     rcx, gs:188h
 * 0000000140BBCF33: mov     rcx, [rcx+220h]
 * 0000000140BBCF3A: mov     rcx, [rcx+760h]
 * 0000000140BBCF41: mov     gs:850h, rcx
 * 0000000140BBCF4A: mov     cx, gs:862h
 * 0000000140BBCF53: mov     gs:864h, cx
 * 0000000140BBCF5C: mov     cl, gs:858h
 * 0000000140BBCF64: mov     gs:85Ah, cl
 * 0000000140BBCF6C: movzx   eax, word ptr gs:868h
 * 0000000140BBCF75: cmp     gs:866h, ax
 * 0000000140BBCF7E: jz      short loc_140BBCF92
 * 0000000140BBCF80: mov     gs:866h, ax
 * 0000000140BBCF89: mov     ecx, 48h ; 'H'
 * 0000000140BBCF8E: xor     edx, edx
 * 0000000140BBCF90: wrmsr
 * 0000000140BBCF92: movzx   edx, byte ptr gs:858h
 * 0000000140BBCF9B: test    edx, 8
 * 0000000140BBCFA1: jz      short loc_140BBCFBA
 * 0000000140BBCFA3: mov     eax, 1
 * 0000000140BBCFA8: xor     edx, edx
 * 0000000140BBCFAA: mov     ecx, 49h ; 'I'
 * 0000000140BBCFAF: wrmsr
 * 0000000140BBCFB1: movzx   edx, byte ptr gs:858h
 * 0000000140BBCFBA: test    edx, 2
 * 0000000140BBCFC0: jz      loc_140BBD0FD
 * 0000000140BBCFC6: call    loc_140BBD0D9
 * 0000000140BBCFCB: add     rsp, 8
 * 0000000140BBCFCF: call    loc_140BBD0E2
 * 0000000140BBCFD4: add     rsp, 8
 * 0000000140BBCFD8: call    loc_140BBCFCB
 * 0000000140BBCFDD: add     rsp, 8
 * 0000000140BBCFE1: call    loc_140BBCFD4
 * 0000000140BBCFE6: add     rsp, 8
 * 0000000140BBCFEA: call    loc_140BBCFDD
 * 0000000140BBCFEF: add     rsp, 8
 * 0000000140BBCFF3: call    loc_140BBCFE6
 * 0000000140BBCFF8: add     rsp, 8
 * 0000000140BBCFFC: call    loc_140BBCFEF
 * 0000000140BBD001: add     rsp, 8
 * 0000000140BBD005: call    loc_140BBCFF8
 * 0000000140BBD00A: add     rsp, 8
 * 0000000140BBD00E: call    loc_140BBD001
 * 0000000140BBD013: add     rsp, 8
 * 0000000140BBD017: call    loc_140BBD00A
 * 0000000140BBD01C: add     rsp, 8
 * 0000000140BBD020: call    loc_140BBD013
 * 0000000140BBD025: add     rsp, 8
 * 0000000140BBD029: call    loc_140BBD01C
 * 0000000140BBD02E: add     rsp, 8
 * 0000000140BBD032: call    loc_140BBD025
 * 0000000140BBD037: add     rsp, 8
 * 0000000140BBD03B: call    loc_140BBD02E
 * 0000000140BBD040: add     rsp, 8
 * 0000000140BBD044: call    loc_140BBD037
 * 0000000140BBD049: add     rsp, 8
 * 0000000140BBD04D: call    loc_140BBD040
 * 0000000140BBD052: add     rsp, 8
 * 0000000140BBD056: call    loc_140BBD049
 * 0000000140BBD05B: add     rsp, 8
 * 0000000140BBD05F: call    loc_140BBD052
 * 0000000140BBD064: add     rsp, 8
 * 0000000140BBD068: call    loc_140BBD05B
 * 0000000140BBD06D: add     rsp, 8
 * 0000000140BBD071: call    loc_140BBD064
 * 0000000140BBD076: add     rsp, 8
 * 0000000140BBD07A: call    loc_140BBD06D
 * 0000000140BBD07F: add     rsp, 8
 * 0000000140BBD083: call    loc_140BBD076
 * 0000000140BBD088: add     rsp, 8
 * 0000000140BBD08C: call    loc_140BBD07F
 * 0000000140BBD091: add     rsp, 8
 * 0000000140BBD095: call    loc_140BBD088
 * 0000000140BBD09A: add     rsp, 8
 * 0000000140BBD09E: call    loc_140BBD091
 * 0000000140BBD0A3: add     rsp, 8
 * 0000000140BBD0A7: call    loc_140BBD09A
 * 0000000140BBD0AC: add     rsp, 8
 * 0000000140BBD0B0: call    loc_140BBD0A3
 * 0000000140BBD0B5: add     rsp, 8
 * 0000000140BBD0B9: call    loc_140BBD0AC
 * 0000000140BBD0BE: add     rsp, 8
 * 0000000140BBD0C2: call    loc_140BBD0B5
 * 0000000140BBD0C7: add     rsp, 8
 * 0000000140BBD0CB: call    loc_140BBD0BE
 * 0000000140BBD0D0: add     rsp, 8
 * 0000000140BBD0D4: call    loc_140BBD0C7
 * 0000000140BBD0D9: add     rsp, 8
 * 0000000140BBD0DD: call    loc_140BBD0D0
 * 0000000140BBD0E2: add     rsp, 8
 * 0000000140BBD0E6: mov     eax, 0DADAh
 * 0000000140BBD0EB: test    byte ptr gs:85Ch, 8
 * 0000000140BBD0F4: jz      short loc_140BBD0FD
 * 0000000140BBD0F6: mov     al, 20h ; ' '
 * 0000000140BBD0F8: incsspq rax
 * 0000000140BBD0FD: test    edx, 80h
 * 0000000140BBD103: jz      short loc_140BBD10D
 * 0000000140BBD105: lfence
 * 0000000140BBD108: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140BBD10D: lfence
 * 0000000140BBD110: mov     byte ptr gs:85Eh, 0
 * 0000000140BBD119: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140BBD120: jz      short loc_140BBD141
 * 0000000140BBD122: mov     ecx, 6A7h
 * 0000000140BBD127: rdmsr
 * 0000000140BBD129: cmp     edx, 0
 * 0000000140BBD12C: jz      short loc_140BBD141
 * 0000000140BBD12E: mov     ecx, edx
 * 0000000140BBD130: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140BBD136: cmp     edx, ecx
 * 0000000140BBD138: jz      short loc_140BBD141
 * 0000000140BBD13A: mov     ecx, 6A7h
 * 0000000140BBD13F: wrmsr
 * 0000000140BBD141: test    byte ptr [r10+3], 3
 * 0000000140BBD146: mov     word ptr [rbp+80h], 0
 * 0000000140BBD14F: jz      short loc_140BBD156
 * 0000000140BBD151: call    KiSaveDebugRegisterState
 * 0000000140BBD156: cld
 * 0000000140BBD157: stmxcsr dword ptr [rbp-54h]
 * 0000000140BBD15B: ldmxcsr dword ptr gs:180h
 * 0000000140BBD164: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140BBD168: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140BBD16C: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140BBD170: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140BBD174: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140BBD178: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140BBD17C: test    byte ptr [rbp+0F0h], 1
 * 0000000140BBD183: jz      short loc_140BBD18A
 * 0000000140BBD185: call    KiSynchronizeUserIsolationDomainExit
 * 0000000140BBD18A: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140BBD191: jz      short loc_140BBD19F
 * 0000000140BBD193: test    byte ptr [rbp+0F0h], 1
 * 0000000140BBD19A: jz      short loc_140BBD19F
 * 0000000140BBD19C: stac
 * 0000000140BBD19F: sub     qword ptr [rbp+0E8h], 2
 * 0000000140BBD1A7: and     dword ptr [rbp+0ECh], 0
 * 0000000140BBD1AE: sti
 * 0000000140BBD1AF: mov     ecx, 0C000001Dh
 * 0000000140BBD1B4: xor     edx, edx
 * 0000000140BBD1B6: mov     r8, [rbp+0E8h]
 * 0000000140BBD1BD: call    KiExceptionDispatch
 * 0000000140BBD1C2: nop
 * 0000000140BBD1C3: retn
 */
