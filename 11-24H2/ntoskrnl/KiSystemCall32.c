/*
 * XREFs of KiSystemCall32 @ 0x1406BD900
 * Callers:
 *     <none>
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x14041B1F0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404FBC90 (KiSaveDebugRegisterState.c)
 *     KiSystemCall32 @ 0x1406BD900 (KiSystemCall32.c)
 *     KiExceptionDispatch @ 0x1406BED00 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406BF740 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall32 @ 0x1406BD900
 * Reason: Hex-Rays returned no pseudocode for 0x1406BD900
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406BD900: swapgs
 * 00000001406BD903: mov     gs:10h, rsp
 * 00000001406BD90C: mov     rsp, gs:1A8h
 * 00000001406BD915: push    2Bh ; '+'
 * 00000001406BD917: push    qword ptr gs:10h
 * 00000001406BD91F: push    r11
 * 00000001406BD921: push    23h ; '#'
 * 00000001406BD923: push    rcx
 * 00000001406BD924: cmp     qword ptr gs:9D28h, 0
 * 00000001406BD92E: jz      short loc_1406BD934
 * 00000001406BD930: setssbsy
 * 00000001406BD934: swapgs
 * 00000001406BD937: lfence
 * 00000001406BD93A: sub     rsp, 8
 * 00000001406BD93E: push    rbp
 * 00000001406BD93F: sub     rsp, 158h
 * 00000001406BD946: lea     rbp, [rsp+190h+var_110]
 * 00000001406BD94E: mov     byte ptr [rbp-55h], 1
 * 00000001406BD952: mov     [rbp-50h], rax
 * 00000001406BD956: mov     [rbp-48h], rcx
 * 00000001406BD95A: mov     [rbp-40h], rdx
 * 00000001406BD95E: mov     [rbp-38h], r8
 * 00000001406BD962: mov     [rbp-30h], r9
 * 00000001406BD966: mov     [rbp-28h], r10
 * 00000001406BD96A: mov     [rbp-20h], r11
 * 00000001406BD96E: test    byte ptr [rbp+0F0h], 1
 * 00000001406BD975: jnz     short loc_1406BD9AF
 * 00000001406BD977: xor     edx, edx
 * 00000001406BD979: rdsspq  rdx
 * 00000001406BD97E: mov     [rbp+58h], rdx
 * 00000001406BD982: lfence
 * 00000001406BD985: test    byte ptr gs:858h, 1
 * 00000001406BD98E: jnz     short loc_1406BD998
 * 00000001406BD990: lfence
 * 00000001406BD993: jmp     loc_1406BDC20
 * 00000001406BD998: movzx   eax, word ptr gs:866h
 * 00000001406BD9A1: mov     ecx, 48h ; 'H'
 * 00000001406BD9A6: xor     edx, edx
 * 00000001406BD9A8: wrmsr
 * 00000001406BD9AA: jmp     loc_1406BDC20
 * 00000001406BD9AF: test    cs:KiKvaShadow, 1
 * 00000001406BD9B6: jnz     short loc_1406BD9BB
 * 00000001406BD9B8: swapgs
 * 00000001406BD9BB: lfence
 * 00000001406BD9BE: mov     rcx, gs:9D28h
 * 00000001406BD9C7: test    rcx, rcx
 * 00000001406BD9CA: jz      short loc_1406BD9EB
 * 00000001406BD9CC: rdsspq  rdx
 * 00000001406BD9D1: mov     r10, gs:9D20h
 * 00000001406BD9DA: add     r10, 8
 * 00000001406BD9DE: cmp     rdx, r10
 * 00000001406BD9E1: jnz     short loc_1406BD9EB
 * 00000001406BD9E3: rstorssp qword ptr [rcx]
 * 00000001406BD9E7: saveprevssp
 * 00000001406BD9EB: mov     r10, gs:188h
 * 00000001406BD9F4: mov     rcx, gs:188h
 * 00000001406BD9FD: mov     rcx, [rcx+220h]
 * 00000001406BDA04: mov     rcx, [rcx+760h]
 * 00000001406BDA0B: mov     gs:850h, rcx
 * 00000001406BDA14: mov     cx, gs:862h
 * 00000001406BDA1D: mov     gs:864h, cx
 * 00000001406BDA26: mov     cl, gs:858h
 * 00000001406BDA2E: mov     gs:85Ah, cl
 * 00000001406BDA36: movzx   eax, word ptr gs:868h
 * 00000001406BDA3F: cmp     gs:866h, ax
 * 00000001406BDA48: jz      short loc_1406BDA5C
 * 00000001406BDA4A: mov     gs:866h, ax
 * 00000001406BDA53: mov     ecx, 48h ; 'H'
 * 00000001406BDA58: xor     edx, edx
 * 00000001406BDA5A: wrmsr
 * 00000001406BDA5C: movzx   edx, byte ptr gs:858h
 * 00000001406BDA65: test    edx, 8
 * 00000001406BDA6B: jz      short loc_1406BDA84
 * 00000001406BDA6D: mov     eax, 1
 * 00000001406BDA72: xor     edx, edx
 * 00000001406BDA74: mov     ecx, 49h ; 'I'
 * 00000001406BDA79: wrmsr
 * 00000001406BDA7B: movzx   edx, byte ptr gs:858h
 * 00000001406BDA84: test    edx, 2
 * 00000001406BDA8A: jz      loc_1406BDBC7
 * 00000001406BDA90: call    loc_1406BDBA3
 * 00000001406BDA95: add     rsp, 8
 * 00000001406BDA99: call    loc_1406BDBAC
 * 00000001406BDA9E: add     rsp, 8
 * 00000001406BDAA2: call    loc_1406BDA95
 * 00000001406BDAA7: add     rsp, 8
 * 00000001406BDAAB: call    loc_1406BDA9E
 * 00000001406BDAB0: add     rsp, 8
 * 00000001406BDAB4: call    loc_1406BDAA7
 * 00000001406BDAB9: add     rsp, 8
 * 00000001406BDABD: call    loc_1406BDAB0
 * 00000001406BDAC2: add     rsp, 8
 * 00000001406BDAC6: call    loc_1406BDAB9
 * 00000001406BDACB: add     rsp, 8
 * 00000001406BDACF: call    loc_1406BDAC2
 * 00000001406BDAD4: add     rsp, 8
 * 00000001406BDAD8: call    loc_1406BDACB
 * 00000001406BDADD: add     rsp, 8
 * 00000001406BDAE1: call    loc_1406BDAD4
 * 00000001406BDAE6: add     rsp, 8
 * 00000001406BDAEA: call    loc_1406BDADD
 * 00000001406BDAEF: add     rsp, 8
 * 00000001406BDAF3: call    loc_1406BDAE6
 * 00000001406BDAF8: add     rsp, 8
 * 00000001406BDAFC: call    loc_1406BDAEF
 * 00000001406BDB01: add     rsp, 8
 * 00000001406BDB05: call    loc_1406BDAF8
 * 00000001406BDB0A: add     rsp, 8
 * 00000001406BDB0E: call    loc_1406BDB01
 * 00000001406BDB13: add     rsp, 8
 * 00000001406BDB17: call    loc_1406BDB0A
 * 00000001406BDB1C: add     rsp, 8
 * 00000001406BDB20: call    loc_1406BDB13
 * 00000001406BDB25: add     rsp, 8
 * 00000001406BDB29: call    loc_1406BDB1C
 * 00000001406BDB2E: add     rsp, 8
 * 00000001406BDB32: call    loc_1406BDB25
 * 00000001406BDB37: add     rsp, 8
 * 00000001406BDB3B: call    loc_1406BDB2E
 * 00000001406BDB40: add     rsp, 8
 * 00000001406BDB44: call    loc_1406BDB37
 * 00000001406BDB49: add     rsp, 8
 * 00000001406BDB4D: call    loc_1406BDB40
 * 00000001406BDB52: add     rsp, 8
 * 00000001406BDB56: call    loc_1406BDB49
 * 00000001406BDB5B: add     rsp, 8
 * 00000001406BDB5F: call    loc_1406BDB52
 * 00000001406BDB64: add     rsp, 8
 * 00000001406BDB68: call    loc_1406BDB5B
 * 00000001406BDB6D: add     rsp, 8
 * 00000001406BDB71: call    loc_1406BDB64
 * 00000001406BDB76: add     rsp, 8
 * 00000001406BDB7A: call    loc_1406BDB6D
 * 00000001406BDB7F: add     rsp, 8
 * 00000001406BDB83: call    loc_1406BDB76
 * 00000001406BDB88: add     rsp, 8
 * 00000001406BDB8C: call    loc_1406BDB7F
 * 00000001406BDB91: add     rsp, 8
 * 00000001406BDB95: call    loc_1406BDB88
 * 00000001406BDB9A: add     rsp, 8
 * 00000001406BDB9E: call    loc_1406BDB91
 * 00000001406BDBA3: add     rsp, 8
 * 00000001406BDBA7: call    loc_1406BDB9A
 * 00000001406BDBAC: add     rsp, 8
 * 00000001406BDBB0: mov     eax, 0DADAh
 * 00000001406BDBB5: test    byte ptr gs:85Ch, 8
 * 00000001406BDBBE: jz      short loc_1406BDBC7
 * 00000001406BDBC0: mov     al, 20h ; ' '
 * 00000001406BDBC2: incsspq rax
 * 00000001406BDBC7: test    edx, 80h
 * 00000001406BDBCD: jz      short loc_1406BDBD7
 * 00000001406BDBCF: lfence
 * 00000001406BDBD2: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406BDBD7: lfence
 * 00000001406BDBDA: mov     byte ptr gs:85Eh, 0
 * 00000001406BDBE3: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406BDBEA: jz      short loc_1406BDC0B
 * 00000001406BDBEC: mov     ecx, 6A7h
 * 00000001406BDBF1: rdmsr
 * 00000001406BDBF3: cmp     edx, 0
 * 00000001406BDBF6: jz      short loc_1406BDC0B
 * 00000001406BDBF8: mov     ecx, edx
 * 00000001406BDBFA: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406BDC00: cmp     edx, ecx
 * 00000001406BDC02: jz      short loc_1406BDC0B
 * 00000001406BDC04: mov     ecx, 6A7h
 * 00000001406BDC09: wrmsr
 * 00000001406BDC0B: test    byte ptr [r10+3], 3
 * 00000001406BDC10: mov     word ptr [rbp+80h], 0
 * 00000001406BDC19: jz      short loc_1406BDC20
 * 00000001406BDC1B: call    KiSaveDebugRegisterState
 * 00000001406BDC20: cld
 * 00000001406BDC21: stmxcsr dword ptr [rbp-54h]
 * 00000001406BDC25: ldmxcsr dword ptr gs:180h
 * 00000001406BDC2E: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001406BDC32: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001406BDC36: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001406BDC3A: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001406BDC3E: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001406BDC42: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001406BDC46: test    byte ptr [rbp+0F0h], 1
 * 00000001406BDC4D: jz      short loc_1406BDC54
 * 00000001406BDC4F: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406BDC54: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406BDC5B: jz      short loc_1406BDC69
 * 00000001406BDC5D: test    byte ptr [rbp+0F0h], 1
 * 00000001406BDC64: jz      short loc_1406BDC69
 * 00000001406BDC66: stac
 * 00000001406BDC69: sub     qword ptr [rbp+0E8h], 2
 * 00000001406BDC71: and     dword ptr [rbp+0ECh], 0
 * 00000001406BDC78: sti
 * 00000001406BDC79: mov     ecx, 0C000001Dh
 * 00000001406BDC7E: xor     edx, edx
 * 00000001406BDC80: mov     r8, [rbp+0E8h]
 * 00000001406BDC87: call    KiExceptionDispatch
 * 00000001406BDC8C: nop
 * 00000001406BDC8D: retn
 */
