/*
 * XREFs of KiDebugServiceTrap @ 0x1406B1FC0
 * Callers:
 *     KiDebugServiceTrapShadow @ 0x140BAAE40 (KiDebugServiceTrapShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x140429DB0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404F9580 (KiSaveDebugRegisterState.c)
 *     KiDebugServiceTrap @ 0x1406B1FC0 (KiDebugServiceTrap.c)
 *     KiExceptionDispatch @ 0x1406B3A00 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406B4440 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiDebugServiceTrap @ 0x1406B1FC0
 * Reason: Hex-Rays returned no pseudocode for 0x1406B1FC0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B1FC0: inc     qword ptr [rsp+0]
 * 00000001406B1FC4: cmp     [rsp+arg_0], 23h ; '#'
 * 00000001406B1FCA: jnz     short loc_1406B1FD1
 * 00000001406B1FCC: and     dword ptr [rsp+4], 0
 * 00000001406B1FD1: sub     rsp, 8
 * 00000001406B1FD5: push    rbp
 * 00000001406B1FD6: sub     rsp, 158h
 * 00000001406B1FDD: lea     rbp, [rsp+168h+var_E8]
 * 00000001406B1FE5: mov     byte ptr [rbp-55h], 1
 * 00000001406B1FE9: mov     [rbp-50h], rax
 * 00000001406B1FED: mov     [rbp-48h], rcx
 * 00000001406B1FF1: mov     [rbp-40h], rdx
 * 00000001406B1FF5: mov     [rbp-38h], r8
 * 00000001406B1FF9: mov     [rbp-30h], r9
 * 00000001406B1FFD: mov     [rbp-28h], r10
 * 00000001406B2001: mov     [rbp-20h], r11
 * 00000001406B2005: test    byte ptr [rbp+0F0h], 1
 * 00000001406B200C: jnz     short loc_1406B2046
 * 00000001406B200E: xor     edx, edx
 * 00000001406B2010: rdsspq  rdx
 * 00000001406B2015: mov     [rbp+58h], rdx
 * 00000001406B2019: lfence
 * 00000001406B201C: test    byte ptr gs:858h, 1
 * 00000001406B2025: jnz     short loc_1406B202F
 * 00000001406B2027: lfence
 * 00000001406B202A: jmp     loc_1406B22B7
 * 00000001406B202F: movzx   eax, word ptr gs:866h
 * 00000001406B2038: mov     ecx, 48h ; 'H'
 * 00000001406B203D: xor     edx, edx
 * 00000001406B203F: wrmsr
 * 00000001406B2041: jmp     loc_1406B22B7
 * 00000001406B2046: test    cs:KiKvaShadow, 1
 * 00000001406B204D: jnz     short loc_1406B2052
 * 00000001406B204F: swapgs
 * 00000001406B2052: lfence
 * 00000001406B2055: mov     rcx, gs:9D28h
 * 00000001406B205E: test    rcx, rcx
 * 00000001406B2061: jz      short loc_1406B2082
 * 00000001406B2063: rdsspq  rdx
 * 00000001406B2068: mov     r10, gs:9D20h
 * 00000001406B2071: add     r10, 8
 * 00000001406B2075: cmp     rdx, r10
 * 00000001406B2078: jnz     short loc_1406B2082
 * 00000001406B207A: rstorssp qword ptr [rcx]
 * 00000001406B207E: saveprevssp
 * 00000001406B2082: mov     r10, gs:188h
 * 00000001406B208B: mov     rcx, gs:188h
 * 00000001406B2094: mov     rcx, [rcx+220h]
 * 00000001406B209B: mov     rcx, [rcx+760h]
 * 00000001406B20A2: mov     gs:850h, rcx
 * 00000001406B20AB: mov     cx, gs:862h
 * 00000001406B20B4: mov     gs:864h, cx
 * 00000001406B20BD: mov     cl, gs:858h
 * 00000001406B20C5: mov     gs:85Ah, cl
 * 00000001406B20CD: movzx   eax, word ptr gs:868h
 * 00000001406B20D6: cmp     gs:866h, ax
 * 00000001406B20DF: jz      short loc_1406B20F3
 * 00000001406B20E1: mov     gs:866h, ax
 * 00000001406B20EA: mov     ecx, 48h ; 'H'
 * 00000001406B20EF: xor     edx, edx
 * 00000001406B20F1: wrmsr
 * 00000001406B20F3: movzx   edx, byte ptr gs:858h
 * 00000001406B20FC: test    edx, 8
 * 00000001406B2102: jz      short loc_1406B211B
 * 00000001406B2104: mov     eax, 1
 * 00000001406B2109: xor     edx, edx
 * 00000001406B210B: mov     ecx, 49h ; 'I'
 * 00000001406B2110: wrmsr
 * 00000001406B2112: movzx   edx, byte ptr gs:858h
 * 00000001406B211B: test    edx, 2
 * 00000001406B2121: jz      loc_1406B225E
 * 00000001406B2127: call    loc_1406B223A
 * 00000001406B212C: add     rsp, 8
 * 00000001406B2130: call    loc_1406B2243
 * 00000001406B2135: add     rsp, 8
 * 00000001406B2139: call    loc_1406B212C
 * 00000001406B213E: add     rsp, 8
 * 00000001406B2142: call    loc_1406B2135
 * 00000001406B2147: add     rsp, 8
 * 00000001406B214B: call    loc_1406B213E
 * 00000001406B2150: add     rsp, 8
 * 00000001406B2154: call    loc_1406B2147
 * 00000001406B2159: add     rsp, 8
 * 00000001406B215D: call    loc_1406B2150
 * 00000001406B2162: add     rsp, 8
 * 00000001406B2166: call    loc_1406B2159
 * 00000001406B216B: add     rsp, 8
 * 00000001406B216F: call    loc_1406B2162
 * 00000001406B2174: add     rsp, 8
 * 00000001406B2178: call    loc_1406B216B
 * 00000001406B217D: add     rsp, 8
 * 00000001406B2181: call    loc_1406B2174
 * 00000001406B2186: add     rsp, 8
 * 00000001406B218A: call    loc_1406B217D
 * 00000001406B218F: add     rsp, 8
 * 00000001406B2193: call    loc_1406B2186
 * 00000001406B2198: add     rsp, 8
 * 00000001406B219C: call    loc_1406B218F
 * 00000001406B21A1: add     rsp, 8
 * 00000001406B21A5: call    loc_1406B2198
 * 00000001406B21AA: add     rsp, 8
 * 00000001406B21AE: call    loc_1406B21A1
 * 00000001406B21B3: add     rsp, 8
 * 00000001406B21B7: call    loc_1406B21AA
 * 00000001406B21BC: add     rsp, 8
 * 00000001406B21C0: call    loc_1406B21B3
 * 00000001406B21C5: add     rsp, 8
 * 00000001406B21C9: call    loc_1406B21BC
 * 00000001406B21CE: add     rsp, 8
 * 00000001406B21D2: call    loc_1406B21C5
 * 00000001406B21D7: add     rsp, 8
 * 00000001406B21DB: call    loc_1406B21CE
 * 00000001406B21E0: add     rsp, 8
 * 00000001406B21E4: call    loc_1406B21D7
 * 00000001406B21E9: add     rsp, 8
 * 00000001406B21ED: call    loc_1406B21E0
 * 00000001406B21F2: add     rsp, 8
 * 00000001406B21F6: call    loc_1406B21E9
 * 00000001406B21FB: add     rsp, 8
 * 00000001406B21FF: call    loc_1406B21F2
 * 00000001406B2204: add     rsp, 8
 * 00000001406B2208: call    loc_1406B21FB
 * 00000001406B220D: add     rsp, 8
 * 00000001406B2211: call    loc_1406B2204
 * 00000001406B2216: add     rsp, 8
 * 00000001406B221A: call    loc_1406B220D
 * 00000001406B221F: add     rsp, 8
 * 00000001406B2223: call    loc_1406B2216
 * 00000001406B2228: add     rsp, 8
 * 00000001406B222C: call    loc_1406B221F
 * 00000001406B2231: add     rsp, 8
 * 00000001406B2235: call    loc_1406B2228
 * 00000001406B223A: add     rsp, 8
 * 00000001406B223E: call    loc_1406B2231
 * 00000001406B2243: add     rsp, 8
 * 00000001406B2247: mov     eax, 0DADAh
 * 00000001406B224C: test    byte ptr gs:85Ch, 8
 * 00000001406B2255: jz      short loc_1406B225E
 * 00000001406B2257: mov     al, 20h ; ' '
 * 00000001406B2259: incsspq rax
 * 00000001406B225E: test    edx, 80h
 * 00000001406B2264: jz      short loc_1406B226E
 * 00000001406B2266: lfence
 * 00000001406B2269: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406B226E: lfence
 * 00000001406B2271: mov     byte ptr gs:85Eh, 0
 * 00000001406B227A: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406B2281: jz      short loc_1406B22A2
 * 00000001406B2283: mov     ecx, 6A7h
 * 00000001406B2288: rdmsr
 * 00000001406B228A: cmp     edx, 0
 * 00000001406B228D: jz      short loc_1406B22A2
 * 00000001406B228F: mov     ecx, edx
 * 00000001406B2291: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406B2297: cmp     edx, ecx
 * 00000001406B2299: jz      short loc_1406B22A2
 * 00000001406B229B: mov     ecx, 6A7h
 * 00000001406B22A0: wrmsr
 * 00000001406B22A2: test    byte ptr [r10+3], 3
 * 00000001406B22A7: mov     word ptr [rbp+80h], 0
 * 00000001406B22B0: jz      short loc_1406B22B7
 * 00000001406B22B2: call    KiSaveDebugRegisterState
 * 00000001406B22B7: cld
 * 00000001406B22B8: stmxcsr dword ptr [rbp-54h]
 * 00000001406B22BC: ldmxcsr dword ptr gs:180h
 * 00000001406B22C5: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001406B22C9: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001406B22CD: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001406B22D1: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001406B22D5: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001406B22D9: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001406B22DD: test    byte ptr [rbp+0F0h], 1
 * 00000001406B22E4: jz      short loc_1406B22EB
 * 00000001406B22E6: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406B22EB: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B22F2: jz      short loc_1406B2300
 * 00000001406B22F4: test    byte ptr [rbp+0F0h], 1
 * 00000001406B22FB: jz      short loc_1406B2300
 * 00000001406B22FD: stac
 * 00000001406B2300: test    dword ptr [rbp+0F8h], 200h
 * 00000001406B230A: jz      short loc_1406B230D
 * 00000001406B230C: sti
 * 00000001406B230D: mov     ecx, 80000003h
 * 00000001406B2312: mov     edx, 1
 * 00000001406B2317: mov     r9, [rbp-50h]
 * 00000001406B231B: mov     r8, [rbp+0E8h]
 * 00000001406B2322: call    KiExceptionDispatch
 * 00000001406B2327: nop
 * 00000001406B2328: retn
 */
