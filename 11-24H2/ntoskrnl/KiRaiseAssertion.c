/*
 * XREFs of KiRaiseAssertion @ 0x1406BDE40
 * Callers:
 *     KiRaiseAssertionShadow @ 0x140BBDDC0 (KiRaiseAssertionShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x14040ED30 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404F9550 (KiSaveDebugRegisterState.c)
 *     KiRaiseAssertion @ 0x1406BDE40 (KiRaiseAssertion.c)
 *     KiExceptionDispatch @ 0x1406BFC00 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406C0640 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseAssertion @ 0x1406BDE40
 * Reason: Hex-Rays returned no pseudocode for 0x1406BDE40
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406BDE40: sub     qword ptr [rsp+0], 2
 * 00000001406BDE45: cmp     [rsp+arg_0], 23h ; '#'
 * 00000001406BDE4B: jnz     short loc_1406BDE52
 * 00000001406BDE4D: and     dword ptr [rsp+4], 0
 * 00000001406BDE52: sub     rsp, 8
 * 00000001406BDE56: push    rbp
 * 00000001406BDE57: sub     rsp, 158h
 * 00000001406BDE5E: lea     rbp, [rsp+168h+var_E8]
 * 00000001406BDE66: mov     byte ptr [rbp-55h], 1
 * 00000001406BDE6A: mov     [rbp-50h], rax
 * 00000001406BDE6E: mov     [rbp-48h], rcx
 * 00000001406BDE72: mov     [rbp-40h], rdx
 * 00000001406BDE76: mov     [rbp-38h], r8
 * 00000001406BDE7A: mov     [rbp-30h], r9
 * 00000001406BDE7E: mov     [rbp-28h], r10
 * 00000001406BDE82: mov     [rbp-20h], r11
 * 00000001406BDE86: test    byte ptr [rbp+0F0h], 1
 * 00000001406BDE8D: jnz     short loc_1406BDEC7
 * 00000001406BDE8F: xor     edx, edx
 * 00000001406BDE91: rdsspq  rdx
 * 00000001406BDE96: mov     [rbp+58h], rdx
 * 00000001406BDE9A: lfence
 * 00000001406BDE9D: test    byte ptr gs:858h, 1
 * 00000001406BDEA6: jnz     short loc_1406BDEB0
 * 00000001406BDEA8: lfence
 * 00000001406BDEAB: jmp     loc_1406BE138
 * 00000001406BDEB0: movzx   eax, word ptr gs:866h
 * 00000001406BDEB9: mov     ecx, 48h ; 'H'
 * 00000001406BDEBE: xor     edx, edx
 * 00000001406BDEC0: wrmsr
 * 00000001406BDEC2: jmp     loc_1406BE138
 * 00000001406BDEC7: test    cs:KiKvaShadow, 1
 * 00000001406BDECE: jnz     short loc_1406BDED3
 * 00000001406BDED0: swapgs
 * 00000001406BDED3: lfence
 * 00000001406BDED6: mov     rcx, gs:9D28h
 * 00000001406BDEDF: test    rcx, rcx
 * 00000001406BDEE2: jz      short loc_1406BDF03
 * 00000001406BDEE4: rdsspq  rdx
 * 00000001406BDEE9: mov     r10, gs:9D20h
 * 00000001406BDEF2: add     r10, 8
 * 00000001406BDEF6: cmp     rdx, r10
 * 00000001406BDEF9: jnz     short loc_1406BDF03
 * 00000001406BDEFB: rstorssp qword ptr [rcx]
 * 00000001406BDEFF: saveprevssp
 * 00000001406BDF03: mov     r10, gs:188h
 * 00000001406BDF0C: mov     rcx, gs:188h
 * 00000001406BDF15: mov     rcx, [rcx+220h]
 * 00000001406BDF1C: mov     rcx, [rcx+760h]
 * 00000001406BDF23: mov     gs:850h, rcx
 * 00000001406BDF2C: mov     cx, gs:862h
 * 00000001406BDF35: mov     gs:864h, cx
 * 00000001406BDF3E: mov     cl, gs:858h
 * 00000001406BDF46: mov     gs:85Ah, cl
 * 00000001406BDF4E: movzx   eax, word ptr gs:868h
 * 00000001406BDF57: cmp     gs:866h, ax
 * 00000001406BDF60: jz      short loc_1406BDF74
 * 00000001406BDF62: mov     gs:866h, ax
 * 00000001406BDF6B: mov     ecx, 48h ; 'H'
 * 00000001406BDF70: xor     edx, edx
 * 00000001406BDF72: wrmsr
 * 00000001406BDF74: movzx   edx, byte ptr gs:858h
 * 00000001406BDF7D: test    edx, 8
 * 00000001406BDF83: jz      short loc_1406BDF9C
 * 00000001406BDF85: mov     eax, 1
 * 00000001406BDF8A: xor     edx, edx
 * 00000001406BDF8C: mov     ecx, 49h ; 'I'
 * 00000001406BDF91: wrmsr
 * 00000001406BDF93: movzx   edx, byte ptr gs:858h
 * 00000001406BDF9C: test    edx, 2
 * 00000001406BDFA2: jz      loc_1406BE0DF
 * 00000001406BDFA8: call    loc_1406BE0BB
 * 00000001406BDFAD: add     rsp, 8
 * 00000001406BDFB1: call    loc_1406BE0C4
 * 00000001406BDFB6: add     rsp, 8
 * 00000001406BDFBA: call    loc_1406BDFAD
 * 00000001406BDFBF: add     rsp, 8
 * 00000001406BDFC3: call    loc_1406BDFB6
 * 00000001406BDFC8: add     rsp, 8
 * 00000001406BDFCC: call    loc_1406BDFBF
 * 00000001406BDFD1: add     rsp, 8
 * 00000001406BDFD5: call    loc_1406BDFC8
 * 00000001406BDFDA: add     rsp, 8
 * 00000001406BDFDE: call    loc_1406BDFD1
 * 00000001406BDFE3: add     rsp, 8
 * 00000001406BDFE7: call    loc_1406BDFDA
 * 00000001406BDFEC: add     rsp, 8
 * 00000001406BDFF0: call    loc_1406BDFE3
 * 00000001406BDFF5: add     rsp, 8
 * 00000001406BDFF9: call    loc_1406BDFEC
 * 00000001406BDFFE: add     rsp, 8
 * 00000001406BE002: call    loc_1406BDFF5
 * 00000001406BE007: add     rsp, 8
 * 00000001406BE00B: call    loc_1406BDFFE
 * 00000001406BE010: add     rsp, 8
 * 00000001406BE014: call    loc_1406BE007
 * 00000001406BE019: add     rsp, 8
 * 00000001406BE01D: call    loc_1406BE010
 * 00000001406BE022: add     rsp, 8
 * 00000001406BE026: call    loc_1406BE019
 * 00000001406BE02B: add     rsp, 8
 * 00000001406BE02F: call    loc_1406BE022
 * 00000001406BE034: add     rsp, 8
 * 00000001406BE038: call    loc_1406BE02B
 * 00000001406BE03D: add     rsp, 8
 * 00000001406BE041: call    loc_1406BE034
 * 00000001406BE046: add     rsp, 8
 * 00000001406BE04A: call    loc_1406BE03D
 * 00000001406BE04F: add     rsp, 8
 * 00000001406BE053: call    loc_1406BE046
 * 00000001406BE058: add     rsp, 8
 * 00000001406BE05C: call    loc_1406BE04F
 * 00000001406BE061: add     rsp, 8
 * 00000001406BE065: call    loc_1406BE058
 * 00000001406BE06A: add     rsp, 8
 * 00000001406BE06E: call    loc_1406BE061
 * 00000001406BE073: add     rsp, 8
 * 00000001406BE077: call    loc_1406BE06A
 * 00000001406BE07C: add     rsp, 8
 * 00000001406BE080: call    loc_1406BE073
 * 00000001406BE085: add     rsp, 8
 * 00000001406BE089: call    loc_1406BE07C
 * 00000001406BE08E: add     rsp, 8
 * 00000001406BE092: call    loc_1406BE085
 * 00000001406BE097: add     rsp, 8
 * 00000001406BE09B: call    loc_1406BE08E
 * 00000001406BE0A0: add     rsp, 8
 * 00000001406BE0A4: call    loc_1406BE097
 * 00000001406BE0A9: add     rsp, 8
 * 00000001406BE0AD: call    loc_1406BE0A0
 * 00000001406BE0B2: add     rsp, 8
 * 00000001406BE0B6: call    loc_1406BE0A9
 * 00000001406BE0BB: add     rsp, 8
 * 00000001406BE0BF: call    loc_1406BE0B2
 * 00000001406BE0C4: add     rsp, 8
 * 00000001406BE0C8: mov     eax, 0DADAh
 * 00000001406BE0CD: test    byte ptr gs:85Ch, 8
 * 00000001406BE0D6: jz      short loc_1406BE0DF
 * 00000001406BE0D8: mov     al, 20h ; ' '
 * 00000001406BE0DA: incsspq rax
 * 00000001406BE0DF: test    edx, 80h
 * 00000001406BE0E5: jz      short loc_1406BE0EF
 * 00000001406BE0E7: lfence
 * 00000001406BE0EA: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406BE0EF: lfence
 * 00000001406BE0F2: mov     byte ptr gs:85Eh, 0
 * 00000001406BE0FB: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406BE102: jz      short loc_1406BE123
 * 00000001406BE104: mov     ecx, 6A7h
 * 00000001406BE109: rdmsr
 * 00000001406BE10B: cmp     edx, 0
 * 00000001406BE10E: jz      short loc_1406BE123
 * 00000001406BE110: mov     ecx, edx
 * 00000001406BE112: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406BE118: cmp     edx, ecx
 * 00000001406BE11A: jz      short loc_1406BE123
 * 00000001406BE11C: mov     ecx, 6A7h
 * 00000001406BE121: wrmsr
 * 00000001406BE123: test    byte ptr [r10+3], 3
 * 00000001406BE128: mov     word ptr [rbp+80h], 0
 * 00000001406BE131: jz      short loc_1406BE138
 * 00000001406BE133: call    KiSaveDebugRegisterState
 * 00000001406BE138: cld
 * 00000001406BE139: stmxcsr dword ptr [rbp-54h]
 * 00000001406BE13D: ldmxcsr dword ptr gs:180h
 * 00000001406BE146: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001406BE14A: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001406BE14E: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001406BE152: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001406BE156: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001406BE15A: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001406BE15E: test    byte ptr [rbp+0F0h], 1
 * 00000001406BE165: jz      short loc_1406BE16C
 * 00000001406BE167: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406BE16C: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406BE173: jz      short loc_1406BE181
 * 00000001406BE175: test    byte ptr [rbp+0F0h], 1
 * 00000001406BE17C: jz      short loc_1406BE181
 * 00000001406BE17E: stac
 * 00000001406BE181: test    dword ptr [rbp+0F8h], 200h
 * 00000001406BE18B: jz      short loc_1406BE18E
 * 00000001406BE18D: sti
 * 00000001406BE18E: mov     ecx, 0C0000420h
 * 00000001406BE193: xor     edx, edx
 * 00000001406BE195: mov     r8, [rbp+0E8h]
 * 00000001406BE19C: call    KiExceptionDispatch
 * 00000001406BE1A1: nop
 * 00000001406BE1A2: retn
 */
