/*
 * XREFs of KiDebugServiceTrap @ 0x1406BE1C0
 * Callers:
 *     KiDebugServiceTrapShadow @ 0x140BBDE40 (KiDebugServiceTrapShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x14040ED30 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404F9550 (KiSaveDebugRegisterState.c)
 *     KiDebugServiceTrap @ 0x1406BE1C0 (KiDebugServiceTrap.c)
 *     KiExceptionDispatch @ 0x1406BFC00 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406C0640 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiDebugServiceTrap @ 0x1406BE1C0
 * Reason: Hex-Rays returned no pseudocode for 0x1406BE1C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406BE1C0: inc     qword ptr [rsp+0]
 * 00000001406BE1C4: cmp     [rsp+arg_0], 23h ; '#'
 * 00000001406BE1CA: jnz     short loc_1406BE1D1
 * 00000001406BE1CC: and     dword ptr [rsp+4], 0
 * 00000001406BE1D1: sub     rsp, 8
 * 00000001406BE1D5: push    rbp
 * 00000001406BE1D6: sub     rsp, 158h
 * 00000001406BE1DD: lea     rbp, [rsp+168h+var_E8]
 * 00000001406BE1E5: mov     byte ptr [rbp-55h], 1
 * 00000001406BE1E9: mov     [rbp-50h], rax
 * 00000001406BE1ED: mov     [rbp-48h], rcx
 * 00000001406BE1F1: mov     [rbp-40h], rdx
 * 00000001406BE1F5: mov     [rbp-38h], r8
 * 00000001406BE1F9: mov     [rbp-30h], r9
 * 00000001406BE1FD: mov     [rbp-28h], r10
 * 00000001406BE201: mov     [rbp-20h], r11
 * 00000001406BE205: test    byte ptr [rbp+0F0h], 1
 * 00000001406BE20C: jnz     short loc_1406BE246
 * 00000001406BE20E: xor     edx, edx
 * 00000001406BE210: rdsspq  rdx
 * 00000001406BE215: mov     [rbp+58h], rdx
 * 00000001406BE219: lfence
 * 00000001406BE21C: test    byte ptr gs:858h, 1
 * 00000001406BE225: jnz     short loc_1406BE22F
 * 00000001406BE227: lfence
 * 00000001406BE22A: jmp     loc_1406BE4B7
 * 00000001406BE22F: movzx   eax, word ptr gs:866h
 * 00000001406BE238: mov     ecx, 48h ; 'H'
 * 00000001406BE23D: xor     edx, edx
 * 00000001406BE23F: wrmsr
 * 00000001406BE241: jmp     loc_1406BE4B7
 * 00000001406BE246: test    cs:KiKvaShadow, 1
 * 00000001406BE24D: jnz     short loc_1406BE252
 * 00000001406BE24F: swapgs
 * 00000001406BE252: lfence
 * 00000001406BE255: mov     rcx, gs:9D28h
 * 00000001406BE25E: test    rcx, rcx
 * 00000001406BE261: jz      short loc_1406BE282
 * 00000001406BE263: rdsspq  rdx
 * 00000001406BE268: mov     r10, gs:9D20h
 * 00000001406BE271: add     r10, 8
 * 00000001406BE275: cmp     rdx, r10
 * 00000001406BE278: jnz     short loc_1406BE282
 * 00000001406BE27A: rstorssp qword ptr [rcx]
 * 00000001406BE27E: saveprevssp
 * 00000001406BE282: mov     r10, gs:188h
 * 00000001406BE28B: mov     rcx, gs:188h
 * 00000001406BE294: mov     rcx, [rcx+220h]
 * 00000001406BE29B: mov     rcx, [rcx+760h]
 * 00000001406BE2A2: mov     gs:850h, rcx
 * 00000001406BE2AB: mov     cx, gs:862h
 * 00000001406BE2B4: mov     gs:864h, cx
 * 00000001406BE2BD: mov     cl, gs:858h
 * 00000001406BE2C5: mov     gs:85Ah, cl
 * 00000001406BE2CD: movzx   eax, word ptr gs:868h
 * 00000001406BE2D6: cmp     gs:866h, ax
 * 00000001406BE2DF: jz      short loc_1406BE2F3
 * 00000001406BE2E1: mov     gs:866h, ax
 * 00000001406BE2EA: mov     ecx, 48h ; 'H'
 * 00000001406BE2EF: xor     edx, edx
 * 00000001406BE2F1: wrmsr
 * 00000001406BE2F3: movzx   edx, byte ptr gs:858h
 * 00000001406BE2FC: test    edx, 8
 * 00000001406BE302: jz      short loc_1406BE31B
 * 00000001406BE304: mov     eax, 1
 * 00000001406BE309: xor     edx, edx
 * 00000001406BE30B: mov     ecx, 49h ; 'I'
 * 00000001406BE310: wrmsr
 * 00000001406BE312: movzx   edx, byte ptr gs:858h
 * 00000001406BE31B: test    edx, 2
 * 00000001406BE321: jz      loc_1406BE45E
 * 00000001406BE327: call    loc_1406BE43A
 * 00000001406BE32C: add     rsp, 8
 * 00000001406BE330: call    loc_1406BE443
 * 00000001406BE335: add     rsp, 8
 * 00000001406BE339: call    loc_1406BE32C
 * 00000001406BE33E: add     rsp, 8
 * 00000001406BE342: call    loc_1406BE335
 * 00000001406BE347: add     rsp, 8
 * 00000001406BE34B: call    loc_1406BE33E
 * 00000001406BE350: add     rsp, 8
 * 00000001406BE354: call    loc_1406BE347
 * 00000001406BE359: add     rsp, 8
 * 00000001406BE35D: call    loc_1406BE350
 * 00000001406BE362: add     rsp, 8
 * 00000001406BE366: call    loc_1406BE359
 * 00000001406BE36B: add     rsp, 8
 * 00000001406BE36F: call    loc_1406BE362
 * 00000001406BE374: add     rsp, 8
 * 00000001406BE378: call    loc_1406BE36B
 * 00000001406BE37D: add     rsp, 8
 * 00000001406BE381: call    loc_1406BE374
 * 00000001406BE386: add     rsp, 8
 * 00000001406BE38A: call    loc_1406BE37D
 * 00000001406BE38F: add     rsp, 8
 * 00000001406BE393: call    loc_1406BE386
 * 00000001406BE398: add     rsp, 8
 * 00000001406BE39C: call    loc_1406BE38F
 * 00000001406BE3A1: add     rsp, 8
 * 00000001406BE3A5: call    loc_1406BE398
 * 00000001406BE3AA: add     rsp, 8
 * 00000001406BE3AE: call    loc_1406BE3A1
 * 00000001406BE3B3: add     rsp, 8
 * 00000001406BE3B7: call    loc_1406BE3AA
 * 00000001406BE3BC: add     rsp, 8
 * 00000001406BE3C0: call    loc_1406BE3B3
 * 00000001406BE3C5: add     rsp, 8
 * 00000001406BE3C9: call    loc_1406BE3BC
 * 00000001406BE3CE: add     rsp, 8
 * 00000001406BE3D2: call    loc_1406BE3C5
 * 00000001406BE3D7: add     rsp, 8
 * 00000001406BE3DB: call    loc_1406BE3CE
 * 00000001406BE3E0: add     rsp, 8
 * 00000001406BE3E4: call    loc_1406BE3D7
 * 00000001406BE3E9: add     rsp, 8
 * 00000001406BE3ED: call    loc_1406BE3E0
 * 00000001406BE3F2: add     rsp, 8
 * 00000001406BE3F6: call    loc_1406BE3E9
 * 00000001406BE3FB: add     rsp, 8
 * 00000001406BE3FF: call    loc_1406BE3F2
 * 00000001406BE404: add     rsp, 8
 * 00000001406BE408: call    loc_1406BE3FB
 * 00000001406BE40D: add     rsp, 8
 * 00000001406BE411: call    loc_1406BE404
 * 00000001406BE416: add     rsp, 8
 * 00000001406BE41A: call    loc_1406BE40D
 * 00000001406BE41F: add     rsp, 8
 * 00000001406BE423: call    loc_1406BE416
 * 00000001406BE428: add     rsp, 8
 * 00000001406BE42C: call    loc_1406BE41F
 * 00000001406BE431: add     rsp, 8
 * 00000001406BE435: call    loc_1406BE428
 * 00000001406BE43A: add     rsp, 8
 * 00000001406BE43E: call    loc_1406BE431
 * 00000001406BE443: add     rsp, 8
 * 00000001406BE447: mov     eax, 0DADAh
 * 00000001406BE44C: test    byte ptr gs:85Ch, 8
 * 00000001406BE455: jz      short loc_1406BE45E
 * 00000001406BE457: mov     al, 20h ; ' '
 * 00000001406BE459: incsspq rax
 * 00000001406BE45E: test    edx, 80h
 * 00000001406BE464: jz      short loc_1406BE46E
 * 00000001406BE466: lfence
 * 00000001406BE469: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406BE46E: lfence
 * 00000001406BE471: mov     byte ptr gs:85Eh, 0
 * 00000001406BE47A: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406BE481: jz      short loc_1406BE4A2
 * 00000001406BE483: mov     ecx, 6A7h
 * 00000001406BE488: rdmsr
 * 00000001406BE48A: cmp     edx, 0
 * 00000001406BE48D: jz      short loc_1406BE4A2
 * 00000001406BE48F: mov     ecx, edx
 * 00000001406BE491: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406BE497: cmp     edx, ecx
 * 00000001406BE499: jz      short loc_1406BE4A2
 * 00000001406BE49B: mov     ecx, 6A7h
 * 00000001406BE4A0: wrmsr
 * 00000001406BE4A2: test    byte ptr [r10+3], 3
 * 00000001406BE4A7: mov     word ptr [rbp+80h], 0
 * 00000001406BE4B0: jz      short loc_1406BE4B7
 * 00000001406BE4B2: call    KiSaveDebugRegisterState
 * 00000001406BE4B7: cld
 * 00000001406BE4B8: stmxcsr dword ptr [rbp-54h]
 * 00000001406BE4BC: ldmxcsr dword ptr gs:180h
 * 00000001406BE4C5: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001406BE4C9: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001406BE4CD: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001406BE4D1: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001406BE4D5: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001406BE4D9: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001406BE4DD: test    byte ptr [rbp+0F0h], 1
 * 00000001406BE4E4: jz      short loc_1406BE4EB
 * 00000001406BE4E6: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406BE4EB: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406BE4F2: jz      short loc_1406BE500
 * 00000001406BE4F4: test    byte ptr [rbp+0F0h], 1
 * 00000001406BE4FB: jz      short loc_1406BE500
 * 00000001406BE4FD: stac
 * 00000001406BE500: test    dword ptr [rbp+0F8h], 200h
 * 00000001406BE50A: jz      short loc_1406BE50D
 * 00000001406BE50C: sti
 * 00000001406BE50D: mov     ecx, 80000003h
 * 00000001406BE512: mov     edx, 1
 * 00000001406BE517: mov     r9, [rbp-50h]
 * 00000001406BE51B: mov     r8, [rbp+0E8h]
 * 00000001406BE522: call    KiExceptionDispatch
 * 00000001406BE527: nop
 * 00000001406BE528: retn
 */
