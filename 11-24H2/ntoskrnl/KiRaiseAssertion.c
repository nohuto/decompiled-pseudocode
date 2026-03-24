/*
 * XREFs of KiRaiseAssertion @ 0x1406BCF40
 * Callers:
 *     KiRaiseAssertionShadow @ 0x140BBBDC0 (KiRaiseAssertionShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x14041B1F0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404FBC90 (KiSaveDebugRegisterState.c)
 *     KiRaiseAssertion @ 0x1406BCF40 (KiRaiseAssertion.c)
 *     KiExceptionDispatch @ 0x1406BED00 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406BF740 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseAssertion @ 0x1406BCF40
 * Reason: Hex-Rays returned no pseudocode for 0x1406BCF40
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406BCF40: sub     qword ptr [rsp+0], 2
 * 00000001406BCF45: cmp     [rsp+arg_0], 23h ; '#'
 * 00000001406BCF4B: jnz     short loc_1406BCF52
 * 00000001406BCF4D: and     dword ptr [rsp+4], 0
 * 00000001406BCF52: sub     rsp, 8
 * 00000001406BCF56: push    rbp
 * 00000001406BCF57: sub     rsp, 158h
 * 00000001406BCF5E: lea     rbp, [rsp+168h+var_E8]
 * 00000001406BCF66: mov     byte ptr [rbp-55h], 1
 * 00000001406BCF6A: mov     [rbp-50h], rax
 * 00000001406BCF6E: mov     [rbp-48h], rcx
 * 00000001406BCF72: mov     [rbp-40h], rdx
 * 00000001406BCF76: mov     [rbp-38h], r8
 * 00000001406BCF7A: mov     [rbp-30h], r9
 * 00000001406BCF7E: mov     [rbp-28h], r10
 * 00000001406BCF82: mov     [rbp-20h], r11
 * 00000001406BCF86: test    byte ptr [rbp+0F0h], 1
 * 00000001406BCF8D: jnz     short loc_1406BCFC7
 * 00000001406BCF8F: xor     edx, edx
 * 00000001406BCF91: rdsspq  rdx
 * 00000001406BCF96: mov     [rbp+58h], rdx
 * 00000001406BCF9A: lfence
 * 00000001406BCF9D: test    byte ptr gs:858h, 1
 * 00000001406BCFA6: jnz     short loc_1406BCFB0
 * 00000001406BCFA8: lfence
 * 00000001406BCFAB: jmp     loc_1406BD238
 * 00000001406BCFB0: movzx   eax, word ptr gs:866h
 * 00000001406BCFB9: mov     ecx, 48h ; 'H'
 * 00000001406BCFBE: xor     edx, edx
 * 00000001406BCFC0: wrmsr
 * 00000001406BCFC2: jmp     loc_1406BD238
 * 00000001406BCFC7: test    cs:KiKvaShadow, 1
 * 00000001406BCFCE: jnz     short loc_1406BCFD3
 * 00000001406BCFD0: swapgs
 * 00000001406BCFD3: lfence
 * 00000001406BCFD6: mov     rcx, gs:9D28h
 * 00000001406BCFDF: test    rcx, rcx
 * 00000001406BCFE2: jz      short loc_1406BD003
 * 00000001406BCFE4: rdsspq  rdx
 * 00000001406BCFE9: mov     r10, gs:9D20h
 * 00000001406BCFF2: add     r10, 8
 * 00000001406BCFF6: cmp     rdx, r10
 * 00000001406BCFF9: jnz     short loc_1406BD003
 * 00000001406BCFFB: rstorssp qword ptr [rcx]
 * 00000001406BCFFF: saveprevssp
 * 00000001406BD003: mov     r10, gs:188h
 * 00000001406BD00C: mov     rcx, gs:188h
 * 00000001406BD015: mov     rcx, [rcx+220h]
 * 00000001406BD01C: mov     rcx, [rcx+760h]
 * 00000001406BD023: mov     gs:850h, rcx
 * 00000001406BD02C: mov     cx, gs:862h
 * 00000001406BD035: mov     gs:864h, cx
 * 00000001406BD03E: mov     cl, gs:858h
 * 00000001406BD046: mov     gs:85Ah, cl
 * 00000001406BD04E: movzx   eax, word ptr gs:868h
 * 00000001406BD057: cmp     gs:866h, ax
 * 00000001406BD060: jz      short loc_1406BD074
 * 00000001406BD062: mov     gs:866h, ax
 * 00000001406BD06B: mov     ecx, 48h ; 'H'
 * 00000001406BD070: xor     edx, edx
 * 00000001406BD072: wrmsr
 * 00000001406BD074: movzx   edx, byte ptr gs:858h
 * 00000001406BD07D: test    edx, 8
 * 00000001406BD083: jz      short loc_1406BD09C
 * 00000001406BD085: mov     eax, 1
 * 00000001406BD08A: xor     edx, edx
 * 00000001406BD08C: mov     ecx, 49h ; 'I'
 * 00000001406BD091: wrmsr
 * 00000001406BD093: movzx   edx, byte ptr gs:858h
 * 00000001406BD09C: test    edx, 2
 * 00000001406BD0A2: jz      loc_1406BD1DF
 * 00000001406BD0A8: call    loc_1406BD1BB
 * 00000001406BD0AD: add     rsp, 8
 * 00000001406BD0B1: call    loc_1406BD1C4
 * 00000001406BD0B6: add     rsp, 8
 * 00000001406BD0BA: call    loc_1406BD0AD
 * 00000001406BD0BF: add     rsp, 8
 * 00000001406BD0C3: call    loc_1406BD0B6
 * 00000001406BD0C8: add     rsp, 8
 * 00000001406BD0CC: call    loc_1406BD0BF
 * 00000001406BD0D1: add     rsp, 8
 * 00000001406BD0D5: call    loc_1406BD0C8
 * 00000001406BD0DA: add     rsp, 8
 * 00000001406BD0DE: call    loc_1406BD0D1
 * 00000001406BD0E3: add     rsp, 8
 * 00000001406BD0E7: call    loc_1406BD0DA
 * 00000001406BD0EC: add     rsp, 8
 * 00000001406BD0F0: call    loc_1406BD0E3
 * 00000001406BD0F5: add     rsp, 8
 * 00000001406BD0F9: call    loc_1406BD0EC
 * 00000001406BD0FE: add     rsp, 8
 * 00000001406BD102: call    loc_1406BD0F5
 * 00000001406BD107: add     rsp, 8
 * 00000001406BD10B: call    loc_1406BD0FE
 * 00000001406BD110: add     rsp, 8
 * 00000001406BD114: call    loc_1406BD107
 * 00000001406BD119: add     rsp, 8
 * 00000001406BD11D: call    loc_1406BD110
 * 00000001406BD122: add     rsp, 8
 * 00000001406BD126: call    loc_1406BD119
 * 00000001406BD12B: add     rsp, 8
 * 00000001406BD12F: call    loc_1406BD122
 * 00000001406BD134: add     rsp, 8
 * 00000001406BD138: call    loc_1406BD12B
 * 00000001406BD13D: add     rsp, 8
 * 00000001406BD141: call    loc_1406BD134
 * 00000001406BD146: add     rsp, 8
 * 00000001406BD14A: call    loc_1406BD13D
 * 00000001406BD14F: add     rsp, 8
 * 00000001406BD153: call    loc_1406BD146
 * 00000001406BD158: add     rsp, 8
 * 00000001406BD15C: call    loc_1406BD14F
 * 00000001406BD161: add     rsp, 8
 * 00000001406BD165: call    loc_1406BD158
 * 00000001406BD16A: add     rsp, 8
 * 00000001406BD16E: call    loc_1406BD161
 * 00000001406BD173: add     rsp, 8
 * 00000001406BD177: call    loc_1406BD16A
 * 00000001406BD17C: add     rsp, 8
 * 00000001406BD180: call    loc_1406BD173
 * 00000001406BD185: add     rsp, 8
 * 00000001406BD189: call    loc_1406BD17C
 * 00000001406BD18E: add     rsp, 8
 * 00000001406BD192: call    loc_1406BD185
 * 00000001406BD197: add     rsp, 8
 * 00000001406BD19B: call    loc_1406BD18E
 * 00000001406BD1A0: add     rsp, 8
 * 00000001406BD1A4: call    loc_1406BD197
 * 00000001406BD1A9: add     rsp, 8
 * 00000001406BD1AD: call    loc_1406BD1A0
 * 00000001406BD1B2: add     rsp, 8
 * 00000001406BD1B6: call    loc_1406BD1A9
 * 00000001406BD1BB: add     rsp, 8
 * 00000001406BD1BF: call    loc_1406BD1B2
 * 00000001406BD1C4: add     rsp, 8
 * 00000001406BD1C8: mov     eax, 0DADAh
 * 00000001406BD1CD: test    byte ptr gs:85Ch, 8
 * 00000001406BD1D6: jz      short loc_1406BD1DF
 * 00000001406BD1D8: mov     al, 20h ; ' '
 * 00000001406BD1DA: incsspq rax
 * 00000001406BD1DF: test    edx, 80h
 * 00000001406BD1E5: jz      short loc_1406BD1EF
 * 00000001406BD1E7: lfence
 * 00000001406BD1EA: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406BD1EF: lfence
 * 00000001406BD1F2: mov     byte ptr gs:85Eh, 0
 * 00000001406BD1FB: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406BD202: jz      short loc_1406BD223
 * 00000001406BD204: mov     ecx, 6A7h
 * 00000001406BD209: rdmsr
 * 00000001406BD20B: cmp     edx, 0
 * 00000001406BD20E: jz      short loc_1406BD223
 * 00000001406BD210: mov     ecx, edx
 * 00000001406BD212: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406BD218: cmp     edx, ecx
 * 00000001406BD21A: jz      short loc_1406BD223
 * 00000001406BD21C: mov     ecx, 6A7h
 * 00000001406BD221: wrmsr
 * 00000001406BD223: test    byte ptr [r10+3], 3
 * 00000001406BD228: mov     word ptr [rbp+80h], 0
 * 00000001406BD231: jz      short loc_1406BD238
 * 00000001406BD233: call    KiSaveDebugRegisterState
 * 00000001406BD238: cld
 * 00000001406BD239: stmxcsr dword ptr [rbp-54h]
 * 00000001406BD23D: ldmxcsr dword ptr gs:180h
 * 00000001406BD246: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001406BD24A: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001406BD24E: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001406BD252: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001406BD256: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001406BD25A: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001406BD25E: test    byte ptr [rbp+0F0h], 1
 * 00000001406BD265: jz      short loc_1406BD26C
 * 00000001406BD267: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406BD26C: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406BD273: jz      short loc_1406BD281
 * 00000001406BD275: test    byte ptr [rbp+0F0h], 1
 * 00000001406BD27C: jz      short loc_1406BD281
 * 00000001406BD27E: stac
 * 00000001406BD281: test    dword ptr [rbp+0F8h], 200h
 * 00000001406BD28B: jz      short loc_1406BD28E
 * 00000001406BD28D: sti
 * 00000001406BD28E: mov     ecx, 0C0000420h
 * 00000001406BD293: xor     edx, edx
 * 00000001406BD295: mov     r8, [rbp+0E8h]
 * 00000001406BD29C: call    KiExceptionDispatch
 * 00000001406BD2A1: nop
 * 00000001406BD2A2: retn
 */
