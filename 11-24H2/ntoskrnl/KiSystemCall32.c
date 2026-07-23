/*
 * XREFs of KiSystemCall32 @ 0x1406BE800
 * Callers:
 *     <none>
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x14040ED30 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404F9550 (KiSaveDebugRegisterState.c)
 *     KiSystemCall32 @ 0x1406BE800 (KiSystemCall32.c)
 *     KiExceptionDispatch @ 0x1406BFC00 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406C0640 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall32 @ 0x1406BE800
 * Reason: Hex-Rays returned no pseudocode for 0x1406BE800
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406BE800: swapgs
 * 00000001406BE803: mov     gs:10h, rsp
 * 00000001406BE80C: mov     rsp, gs:1A8h
 * 00000001406BE815: push    2Bh ; '+'
 * 00000001406BE817: push    qword ptr gs:10h
 * 00000001406BE81F: push    r11
 * 00000001406BE821: push    23h ; '#'
 * 00000001406BE823: push    rcx
 * 00000001406BE824: cmp     qword ptr gs:9D28h, 0
 * 00000001406BE82E: jz      short loc_1406BE834
 * 00000001406BE830: setssbsy
 * 00000001406BE834: swapgs
 * 00000001406BE837: lfence
 * 00000001406BE83A: sub     rsp, 8
 * 00000001406BE83E: push    rbp
 * 00000001406BE83F: sub     rsp, 158h
 * 00000001406BE846: lea     rbp, [rsp+190h+var_110]
 * 00000001406BE84E: mov     byte ptr [rbp-55h], 1
 * 00000001406BE852: mov     [rbp-50h], rax
 * 00000001406BE856: mov     [rbp-48h], rcx
 * 00000001406BE85A: mov     [rbp-40h], rdx
 * 00000001406BE85E: mov     [rbp-38h], r8
 * 00000001406BE862: mov     [rbp-30h], r9
 * 00000001406BE866: mov     [rbp-28h], r10
 * 00000001406BE86A: mov     [rbp-20h], r11
 * 00000001406BE86E: test    byte ptr [rbp+0F0h], 1
 * 00000001406BE875: jnz     short loc_1406BE8AF
 * 00000001406BE877: xor     edx, edx
 * 00000001406BE879: rdsspq  rdx
 * 00000001406BE87E: mov     [rbp+58h], rdx
 * 00000001406BE882: lfence
 * 00000001406BE885: test    byte ptr gs:858h, 1
 * 00000001406BE88E: jnz     short loc_1406BE898
 * 00000001406BE890: lfence
 * 00000001406BE893: jmp     loc_1406BEB20
 * 00000001406BE898: movzx   eax, word ptr gs:866h
 * 00000001406BE8A1: mov     ecx, 48h ; 'H'
 * 00000001406BE8A6: xor     edx, edx
 * 00000001406BE8A8: wrmsr
 * 00000001406BE8AA: jmp     loc_1406BEB20
 * 00000001406BE8AF: test    cs:KiKvaShadow, 1
 * 00000001406BE8B6: jnz     short loc_1406BE8BB
 * 00000001406BE8B8: swapgs
 * 00000001406BE8BB: lfence
 * 00000001406BE8BE: mov     rcx, gs:9D28h
 * 00000001406BE8C7: test    rcx, rcx
 * 00000001406BE8CA: jz      short loc_1406BE8EB
 * 00000001406BE8CC: rdsspq  rdx
 * 00000001406BE8D1: mov     r10, gs:9D20h
 * 00000001406BE8DA: add     r10, 8
 * 00000001406BE8DE: cmp     rdx, r10
 * 00000001406BE8E1: jnz     short loc_1406BE8EB
 * 00000001406BE8E3: rstorssp qword ptr [rcx]
 * 00000001406BE8E7: saveprevssp
 * 00000001406BE8EB: mov     r10, gs:188h
 * 00000001406BE8F4: mov     rcx, gs:188h
 * 00000001406BE8FD: mov     rcx, [rcx+220h]
 * 00000001406BE904: mov     rcx, [rcx+760h]
 * 00000001406BE90B: mov     gs:850h, rcx
 * 00000001406BE914: mov     cx, gs:862h
 * 00000001406BE91D: mov     gs:864h, cx
 * 00000001406BE926: mov     cl, gs:858h
 * 00000001406BE92E: mov     gs:85Ah, cl
 * 00000001406BE936: movzx   eax, word ptr gs:868h
 * 00000001406BE93F: cmp     gs:866h, ax
 * 00000001406BE948: jz      short loc_1406BE95C
 * 00000001406BE94A: mov     gs:866h, ax
 * 00000001406BE953: mov     ecx, 48h ; 'H'
 * 00000001406BE958: xor     edx, edx
 * 00000001406BE95A: wrmsr
 * 00000001406BE95C: movzx   edx, byte ptr gs:858h
 * 00000001406BE965: test    edx, 8
 * 00000001406BE96B: jz      short loc_1406BE984
 * 00000001406BE96D: mov     eax, 1
 * 00000001406BE972: xor     edx, edx
 * 00000001406BE974: mov     ecx, 49h ; 'I'
 * 00000001406BE979: wrmsr
 * 00000001406BE97B: movzx   edx, byte ptr gs:858h
 * 00000001406BE984: test    edx, 2
 * 00000001406BE98A: jz      loc_1406BEAC7
 * 00000001406BE990: call    loc_1406BEAA3
 * 00000001406BE995: add     rsp, 8
 * 00000001406BE999: call    loc_1406BEAAC
 * 00000001406BE99E: add     rsp, 8
 * 00000001406BE9A2: call    loc_1406BE995
 * 00000001406BE9A7: add     rsp, 8
 * 00000001406BE9AB: call    loc_1406BE99E
 * 00000001406BE9B0: add     rsp, 8
 * 00000001406BE9B4: call    loc_1406BE9A7
 * 00000001406BE9B9: add     rsp, 8
 * 00000001406BE9BD: call    loc_1406BE9B0
 * 00000001406BE9C2: add     rsp, 8
 * 00000001406BE9C6: call    loc_1406BE9B9
 * 00000001406BE9CB: add     rsp, 8
 * 00000001406BE9CF: call    loc_1406BE9C2
 * 00000001406BE9D4: add     rsp, 8
 * 00000001406BE9D8: call    loc_1406BE9CB
 * 00000001406BE9DD: add     rsp, 8
 * 00000001406BE9E1: call    loc_1406BE9D4
 * 00000001406BE9E6: add     rsp, 8
 * 00000001406BE9EA: call    loc_1406BE9DD
 * 00000001406BE9EF: add     rsp, 8
 * 00000001406BE9F3: call    loc_1406BE9E6
 * 00000001406BE9F8: add     rsp, 8
 * 00000001406BE9FC: call    loc_1406BE9EF
 * 00000001406BEA01: add     rsp, 8
 * 00000001406BEA05: call    loc_1406BE9F8
 * 00000001406BEA0A: add     rsp, 8
 * 00000001406BEA0E: call    loc_1406BEA01
 * 00000001406BEA13: add     rsp, 8
 * 00000001406BEA17: call    loc_1406BEA0A
 * 00000001406BEA1C: add     rsp, 8
 * 00000001406BEA20: call    loc_1406BEA13
 * 00000001406BEA25: add     rsp, 8
 * 00000001406BEA29: call    loc_1406BEA1C
 * 00000001406BEA2E: add     rsp, 8
 * 00000001406BEA32: call    loc_1406BEA25
 * 00000001406BEA37: add     rsp, 8
 * 00000001406BEA3B: call    loc_1406BEA2E
 * 00000001406BEA40: add     rsp, 8
 * 00000001406BEA44: call    loc_1406BEA37
 * 00000001406BEA49: add     rsp, 8
 * 00000001406BEA4D: call    loc_1406BEA40
 * 00000001406BEA52: add     rsp, 8
 * 00000001406BEA56: call    loc_1406BEA49
 * 00000001406BEA5B: add     rsp, 8
 * 00000001406BEA5F: call    loc_1406BEA52
 * 00000001406BEA64: add     rsp, 8
 * 00000001406BEA68: call    loc_1406BEA5B
 * 00000001406BEA6D: add     rsp, 8
 * 00000001406BEA71: call    loc_1406BEA64
 * 00000001406BEA76: add     rsp, 8
 * 00000001406BEA7A: call    loc_1406BEA6D
 * 00000001406BEA7F: add     rsp, 8
 * 00000001406BEA83: call    loc_1406BEA76
 * 00000001406BEA88: add     rsp, 8
 * 00000001406BEA8C: call    loc_1406BEA7F
 * 00000001406BEA91: add     rsp, 8
 * 00000001406BEA95: call    loc_1406BEA88
 * 00000001406BEA9A: add     rsp, 8
 * 00000001406BEA9E: call    loc_1406BEA91
 * 00000001406BEAA3: add     rsp, 8
 * 00000001406BEAA7: call    loc_1406BEA9A
 * 00000001406BEAAC: add     rsp, 8
 * 00000001406BEAB0: mov     eax, 0DADAh
 * 00000001406BEAB5: test    byte ptr gs:85Ch, 8
 * 00000001406BEABE: jz      short loc_1406BEAC7
 * 00000001406BEAC0: mov     al, 20h ; ' '
 * 00000001406BEAC2: incsspq rax
 * 00000001406BEAC7: test    edx, 80h
 * 00000001406BEACD: jz      short loc_1406BEAD7
 * 00000001406BEACF: lfence
 * 00000001406BEAD2: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406BEAD7: lfence
 * 00000001406BEADA: mov     byte ptr gs:85Eh, 0
 * 00000001406BEAE3: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406BEAEA: jz      short loc_1406BEB0B
 * 00000001406BEAEC: mov     ecx, 6A7h
 * 00000001406BEAF1: rdmsr
 * 00000001406BEAF3: cmp     edx, 0
 * 00000001406BEAF6: jz      short loc_1406BEB0B
 * 00000001406BEAF8: mov     ecx, edx
 * 00000001406BEAFA: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406BEB00: cmp     edx, ecx
 * 00000001406BEB02: jz      short loc_1406BEB0B
 * 00000001406BEB04: mov     ecx, 6A7h
 * 00000001406BEB09: wrmsr
 * 00000001406BEB0B: test    byte ptr [r10+3], 3
 * 00000001406BEB10: mov     word ptr [rbp+80h], 0
 * 00000001406BEB19: jz      short loc_1406BEB20
 * 00000001406BEB1B: call    KiSaveDebugRegisterState
 * 00000001406BEB20: cld
 * 00000001406BEB21: stmxcsr dword ptr [rbp-54h]
 * 00000001406BEB25: ldmxcsr dword ptr gs:180h
 * 00000001406BEB2E: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001406BEB32: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001406BEB36: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001406BEB3A: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001406BEB3E: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001406BEB42: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001406BEB46: test    byte ptr [rbp+0F0h], 1
 * 00000001406BEB4D: jz      short loc_1406BEB54
 * 00000001406BEB4F: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406BEB54: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406BEB5B: jz      short loc_1406BEB69
 * 00000001406BEB5D: test    byte ptr [rbp+0F0h], 1
 * 00000001406BEB64: jz      short loc_1406BEB69
 * 00000001406BEB66: stac
 * 00000001406BEB69: sub     qword ptr [rbp+0E8h], 2
 * 00000001406BEB71: and     dword ptr [rbp+0ECh], 0
 * 00000001406BEB78: sti
 * 00000001406BEB79: mov     ecx, 0C000001Dh
 * 00000001406BEB7E: xor     edx, edx
 * 00000001406BEB80: mov     r8, [rbp+0E8h]
 * 00000001406BEB87: call    KiExceptionDispatch
 * 00000001406BEB8C: nop
 * 00000001406BEB8D: retn
 */
