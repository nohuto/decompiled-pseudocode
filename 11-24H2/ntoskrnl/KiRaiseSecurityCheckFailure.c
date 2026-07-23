/*
 * XREFs of KiRaiseSecurityCheckFailure @ 0x1406BDAC0
 * Callers:
 *     KiRaiseSecurityCheckFailureShadow @ 0x140BBDD40 (KiRaiseSecurityCheckFailureShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x14040ED30 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404F9550 (KiSaveDebugRegisterState.c)
 *     KiRaiseSecurityCheckFailure @ 0x1406BDAC0 (KiRaiseSecurityCheckFailure.c)
 *     KiFastFailDispatch @ 0x1406C0140 (KiFastFailDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406C0640 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseSecurityCheckFailure @ 0x1406BDAC0
 * Reason: Hex-Rays returned no pseudocode for 0x1406BDAC0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406BDAC0: sub     qword ptr [rsp+0], 2
 * 00000001406BDAC5: cmp     [rsp+arg_0], 23h ; '#'
 * 00000001406BDACB: jnz     short loc_1406BDAD2
 * 00000001406BDACD: and     dword ptr [rsp+4], 0
 * 00000001406BDAD2: sub     rsp, 8
 * 00000001406BDAD6: push    rbp
 * 00000001406BDAD7: sub     rsp, 158h
 * 00000001406BDADE: lea     rbp, [rsp+168h+var_E8]
 * 00000001406BDAE6: mov     byte ptr [rbp-55h], 1
 * 00000001406BDAEA: mov     [rbp-50h], rax
 * 00000001406BDAEE: mov     [rbp-48h], rcx
 * 00000001406BDAF2: mov     [rbp-40h], rdx
 * 00000001406BDAF6: mov     [rbp-38h], r8
 * 00000001406BDAFA: mov     [rbp-30h], r9
 * 00000001406BDAFE: mov     [rbp-28h], r10
 * 00000001406BDB02: mov     [rbp-20h], r11
 * 00000001406BDB06: test    byte ptr [rbp+0F0h], 1
 * 00000001406BDB0D: jnz     short loc_1406BDB47
 * 00000001406BDB0F: xor     edx, edx
 * 00000001406BDB11: rdsspq  rdx
 * 00000001406BDB16: mov     [rbp+58h], rdx
 * 00000001406BDB1A: lfence
 * 00000001406BDB1D: test    byte ptr gs:858h, 1
 * 00000001406BDB26: jnz     short loc_1406BDB30
 * 00000001406BDB28: lfence
 * 00000001406BDB2B: jmp     loc_1406BDDB8
 * 00000001406BDB30: movzx   eax, word ptr gs:866h
 * 00000001406BDB39: mov     ecx, 48h ; 'H'
 * 00000001406BDB3E: xor     edx, edx
 * 00000001406BDB40: wrmsr
 * 00000001406BDB42: jmp     loc_1406BDDB8
 * 00000001406BDB47: test    cs:KiKvaShadow, 1
 * 00000001406BDB4E: jnz     short loc_1406BDB53
 * 00000001406BDB50: swapgs
 * 00000001406BDB53: lfence
 * 00000001406BDB56: mov     rcx, gs:9D28h
 * 00000001406BDB5F: test    rcx, rcx
 * 00000001406BDB62: jz      short loc_1406BDB83
 * 00000001406BDB64: rdsspq  rdx
 * 00000001406BDB69: mov     r10, gs:9D20h
 * 00000001406BDB72: add     r10, 8
 * 00000001406BDB76: cmp     rdx, r10
 * 00000001406BDB79: jnz     short loc_1406BDB83
 * 00000001406BDB7B: rstorssp qword ptr [rcx]
 * 00000001406BDB7F: saveprevssp
 * 00000001406BDB83: mov     r10, gs:188h
 * 00000001406BDB8C: mov     rcx, gs:188h
 * 00000001406BDB95: mov     rcx, [rcx+220h]
 * 00000001406BDB9C: mov     rcx, [rcx+760h]
 * 00000001406BDBA3: mov     gs:850h, rcx
 * 00000001406BDBAC: mov     cx, gs:862h
 * 00000001406BDBB5: mov     gs:864h, cx
 * 00000001406BDBBE: mov     cl, gs:858h
 * 00000001406BDBC6: mov     gs:85Ah, cl
 * 00000001406BDBCE: movzx   eax, word ptr gs:868h
 * 00000001406BDBD7: cmp     gs:866h, ax
 * 00000001406BDBE0: jz      short loc_1406BDBF4
 * 00000001406BDBE2: mov     gs:866h, ax
 * 00000001406BDBEB: mov     ecx, 48h ; 'H'
 * 00000001406BDBF0: xor     edx, edx
 * 00000001406BDBF2: wrmsr
 * 00000001406BDBF4: movzx   edx, byte ptr gs:858h
 * 00000001406BDBFD: test    edx, 8
 * 00000001406BDC03: jz      short loc_1406BDC1C
 * 00000001406BDC05: mov     eax, 1
 * 00000001406BDC0A: xor     edx, edx
 * 00000001406BDC0C: mov     ecx, 49h ; 'I'
 * 00000001406BDC11: wrmsr
 * 00000001406BDC13: movzx   edx, byte ptr gs:858h
 * 00000001406BDC1C: test    edx, 2
 * 00000001406BDC22: jz      loc_1406BDD5F
 * 00000001406BDC28: call    loc_1406BDD3B
 * 00000001406BDC2D: add     rsp, 8
 * 00000001406BDC31: call    loc_1406BDD44
 * 00000001406BDC36: add     rsp, 8
 * 00000001406BDC3A: call    loc_1406BDC2D
 * 00000001406BDC3F: add     rsp, 8
 * 00000001406BDC43: call    loc_1406BDC36
 * 00000001406BDC48: add     rsp, 8
 * 00000001406BDC4C: call    loc_1406BDC3F
 * 00000001406BDC51: add     rsp, 8
 * 00000001406BDC55: call    loc_1406BDC48
 * 00000001406BDC5A: add     rsp, 8
 * 00000001406BDC5E: call    loc_1406BDC51
 * 00000001406BDC63: add     rsp, 8
 * 00000001406BDC67: call    loc_1406BDC5A
 * 00000001406BDC6C: add     rsp, 8
 * 00000001406BDC70: call    loc_1406BDC63
 * 00000001406BDC75: add     rsp, 8
 * 00000001406BDC79: call    loc_1406BDC6C
 * 00000001406BDC7E: add     rsp, 8
 * 00000001406BDC82: call    loc_1406BDC75
 * 00000001406BDC87: add     rsp, 8
 * 00000001406BDC8B: call    loc_1406BDC7E
 * 00000001406BDC90: add     rsp, 8
 * 00000001406BDC94: call    loc_1406BDC87
 * 00000001406BDC99: add     rsp, 8
 * 00000001406BDC9D: call    loc_1406BDC90
 * 00000001406BDCA2: add     rsp, 8
 * 00000001406BDCA6: call    loc_1406BDC99
 * 00000001406BDCAB: add     rsp, 8
 * 00000001406BDCAF: call    loc_1406BDCA2
 * 00000001406BDCB4: add     rsp, 8
 * 00000001406BDCB8: call    loc_1406BDCAB
 * 00000001406BDCBD: add     rsp, 8
 * 00000001406BDCC1: call    loc_1406BDCB4
 * 00000001406BDCC6: add     rsp, 8
 * 00000001406BDCCA: call    loc_1406BDCBD
 * 00000001406BDCCF: add     rsp, 8
 * 00000001406BDCD3: call    loc_1406BDCC6
 * 00000001406BDCD8: add     rsp, 8
 * 00000001406BDCDC: call    loc_1406BDCCF
 * 00000001406BDCE1: add     rsp, 8
 * 00000001406BDCE5: call    loc_1406BDCD8
 * 00000001406BDCEA: add     rsp, 8
 * 00000001406BDCEE: call    loc_1406BDCE1
 * 00000001406BDCF3: add     rsp, 8
 * 00000001406BDCF7: call    loc_1406BDCEA
 * 00000001406BDCFC: add     rsp, 8
 * 00000001406BDD00: call    loc_1406BDCF3
 * 00000001406BDD05: add     rsp, 8
 * 00000001406BDD09: call    loc_1406BDCFC
 * 00000001406BDD0E: add     rsp, 8
 * 00000001406BDD12: call    loc_1406BDD05
 * 00000001406BDD17: add     rsp, 8
 * 00000001406BDD1B: call    loc_1406BDD0E
 * 00000001406BDD20: add     rsp, 8
 * 00000001406BDD24: call    loc_1406BDD17
 * 00000001406BDD29: add     rsp, 8
 * 00000001406BDD2D: call    loc_1406BDD20
 * 00000001406BDD32: add     rsp, 8
 * 00000001406BDD36: call    loc_1406BDD29
 * 00000001406BDD3B: add     rsp, 8
 * 00000001406BDD3F: call    loc_1406BDD32
 * 00000001406BDD44: add     rsp, 8
 * 00000001406BDD48: mov     eax, 0DADAh
 * 00000001406BDD4D: test    byte ptr gs:85Ch, 8
 * 00000001406BDD56: jz      short loc_1406BDD5F
 * 00000001406BDD58: mov     al, 20h ; ' '
 * 00000001406BDD5A: incsspq rax
 * 00000001406BDD5F: test    edx, 80h
 * 00000001406BDD65: jz      short loc_1406BDD6F
 * 00000001406BDD67: lfence
 * 00000001406BDD6A: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406BDD6F: lfence
 * 00000001406BDD72: mov     byte ptr gs:85Eh, 0
 * 00000001406BDD7B: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406BDD82: jz      short loc_1406BDDA3
 * 00000001406BDD84: mov     ecx, 6A7h
 * 00000001406BDD89: rdmsr
 * 00000001406BDD8B: cmp     edx, 0
 * 00000001406BDD8E: jz      short loc_1406BDDA3
 * 00000001406BDD90: mov     ecx, edx
 * 00000001406BDD92: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406BDD98: cmp     edx, ecx
 * 00000001406BDD9A: jz      short loc_1406BDDA3
 * 00000001406BDD9C: mov     ecx, 6A7h
 * 00000001406BDDA1: wrmsr
 * 00000001406BDDA3: test    byte ptr [r10+3], 3
 * 00000001406BDDA8: mov     word ptr [rbp+80h], 0
 * 00000001406BDDB1: jz      short loc_1406BDDB8
 * 00000001406BDDB3: call    KiSaveDebugRegisterState
 * 00000001406BDDB8: cld
 * 00000001406BDDB9: stmxcsr dword ptr [rbp-54h]
 * 00000001406BDDBD: ldmxcsr dword ptr gs:180h
 * 00000001406BDDC6: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001406BDDCA: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001406BDDCE: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001406BDDD2: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001406BDDD6: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001406BDDDA: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001406BDDDE: test    byte ptr [rbp+0F0h], 1
 * 00000001406BDDE5: jz      short loc_1406BDDEC
 * 00000001406BDDE7: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406BDDEC: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406BDDF3: jz      short loc_1406BDE01
 * 00000001406BDDF5: test    byte ptr [rbp+0F0h], 1
 * 00000001406BDDFC: jz      short loc_1406BDE01
 * 00000001406BDDFE: stac
 * 00000001406BDE01: test    dword ptr [rbp+0F8h], 200h
 * 00000001406BDE0B: jz      short loc_1406BDE0E
 * 00000001406BDE0D: sti
 * 00000001406BDE0E: mov     r9, [rbp-48h]
 * 00000001406BDE12: mov     ecx, 0C0000409h
 * 00000001406BDE17: mov     edx, 1
 * 00000001406BDE1C: mov     r8, [rbp+0E8h]
 * 00000001406BDE23: call    KiFastFailDispatch
 * 00000001406BDE28: nop
 * 00000001406BDE29: retn
 */
