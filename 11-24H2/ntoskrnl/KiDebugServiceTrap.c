/*
 * XREFs of KiDebugServiceTrap @ 0x1406BD2C0
 * Callers:
 *     KiDebugServiceTrapShadow @ 0x140BBBE40 (KiDebugServiceTrapShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x14041B1F0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404FBC90 (KiSaveDebugRegisterState.c)
 *     KiDebugServiceTrap @ 0x1406BD2C0 (KiDebugServiceTrap.c)
 *     KiExceptionDispatch @ 0x1406BED00 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406BF740 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiDebugServiceTrap @ 0x1406BD2C0
 * Reason: Hex-Rays returned no pseudocode for 0x1406BD2C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406BD2C0: inc     qword ptr [rsp+0]
 * 00000001406BD2C4: cmp     [rsp+arg_0], 23h ; '#'
 * 00000001406BD2CA: jnz     short loc_1406BD2D1
 * 00000001406BD2CC: and     dword ptr [rsp+4], 0
 * 00000001406BD2D1: sub     rsp, 8
 * 00000001406BD2D5: push    rbp
 * 00000001406BD2D6: sub     rsp, 158h
 * 00000001406BD2DD: lea     rbp, [rsp+168h+var_E8]
 * 00000001406BD2E5: mov     byte ptr [rbp-55h], 1
 * 00000001406BD2E9: mov     [rbp-50h], rax
 * 00000001406BD2ED: mov     [rbp-48h], rcx
 * 00000001406BD2F1: mov     [rbp-40h], rdx
 * 00000001406BD2F5: mov     [rbp-38h], r8
 * 00000001406BD2F9: mov     [rbp-30h], r9
 * 00000001406BD2FD: mov     [rbp-28h], r10
 * 00000001406BD301: mov     [rbp-20h], r11
 * 00000001406BD305: test    byte ptr [rbp+0F0h], 1
 * 00000001406BD30C: jnz     short loc_1406BD346
 * 00000001406BD30E: xor     edx, edx
 * 00000001406BD310: rdsspq  rdx
 * 00000001406BD315: mov     [rbp+58h], rdx
 * 00000001406BD319: lfence
 * 00000001406BD31C: test    byte ptr gs:858h, 1
 * 00000001406BD325: jnz     short loc_1406BD32F
 * 00000001406BD327: lfence
 * 00000001406BD32A: jmp     loc_1406BD5B7
 * 00000001406BD32F: movzx   eax, word ptr gs:866h
 * 00000001406BD338: mov     ecx, 48h ; 'H'
 * 00000001406BD33D: xor     edx, edx
 * 00000001406BD33F: wrmsr
 * 00000001406BD341: jmp     loc_1406BD5B7
 * 00000001406BD346: test    cs:KiKvaShadow, 1
 * 00000001406BD34D: jnz     short loc_1406BD352
 * 00000001406BD34F: swapgs
 * 00000001406BD352: lfence
 * 00000001406BD355: mov     rcx, gs:9D28h
 * 00000001406BD35E: test    rcx, rcx
 * 00000001406BD361: jz      short loc_1406BD382
 * 00000001406BD363: rdsspq  rdx
 * 00000001406BD368: mov     r10, gs:9D20h
 * 00000001406BD371: add     r10, 8
 * 00000001406BD375: cmp     rdx, r10
 * 00000001406BD378: jnz     short loc_1406BD382
 * 00000001406BD37A: rstorssp qword ptr [rcx]
 * 00000001406BD37E: saveprevssp
 * 00000001406BD382: mov     r10, gs:188h
 * 00000001406BD38B: mov     rcx, gs:188h
 * 00000001406BD394: mov     rcx, [rcx+220h]
 * 00000001406BD39B: mov     rcx, [rcx+760h]
 * 00000001406BD3A2: mov     gs:850h, rcx
 * 00000001406BD3AB: mov     cx, gs:862h
 * 00000001406BD3B4: mov     gs:864h, cx
 * 00000001406BD3BD: mov     cl, gs:858h
 * 00000001406BD3C5: mov     gs:85Ah, cl
 * 00000001406BD3CD: movzx   eax, word ptr gs:868h
 * 00000001406BD3D6: cmp     gs:866h, ax
 * 00000001406BD3DF: jz      short loc_1406BD3F3
 * 00000001406BD3E1: mov     gs:866h, ax
 * 00000001406BD3EA: mov     ecx, 48h ; 'H'
 * 00000001406BD3EF: xor     edx, edx
 * 00000001406BD3F1: wrmsr
 * 00000001406BD3F3: movzx   edx, byte ptr gs:858h
 * 00000001406BD3FC: test    edx, 8
 * 00000001406BD402: jz      short loc_1406BD41B
 * 00000001406BD404: mov     eax, 1
 * 00000001406BD409: xor     edx, edx
 * 00000001406BD40B: mov     ecx, 49h ; 'I'
 * 00000001406BD410: wrmsr
 * 00000001406BD412: movzx   edx, byte ptr gs:858h
 * 00000001406BD41B: test    edx, 2
 * 00000001406BD421: jz      loc_1406BD55E
 * 00000001406BD427: call    loc_1406BD53A
 * 00000001406BD42C: add     rsp, 8
 * 00000001406BD430: call    loc_1406BD543
 * 00000001406BD435: add     rsp, 8
 * 00000001406BD439: call    loc_1406BD42C
 * 00000001406BD43E: add     rsp, 8
 * 00000001406BD442: call    loc_1406BD435
 * 00000001406BD447: add     rsp, 8
 * 00000001406BD44B: call    loc_1406BD43E
 * 00000001406BD450: add     rsp, 8
 * 00000001406BD454: call    loc_1406BD447
 * 00000001406BD459: add     rsp, 8
 * 00000001406BD45D: call    loc_1406BD450
 * 00000001406BD462: add     rsp, 8
 * 00000001406BD466: call    loc_1406BD459
 * 00000001406BD46B: add     rsp, 8
 * 00000001406BD46F: call    loc_1406BD462
 * 00000001406BD474: add     rsp, 8
 * 00000001406BD478: call    loc_1406BD46B
 * 00000001406BD47D: add     rsp, 8
 * 00000001406BD481: call    loc_1406BD474
 * 00000001406BD486: add     rsp, 8
 * 00000001406BD48A: call    loc_1406BD47D
 * 00000001406BD48F: add     rsp, 8
 * 00000001406BD493: call    loc_1406BD486
 * 00000001406BD498: add     rsp, 8
 * 00000001406BD49C: call    loc_1406BD48F
 * 00000001406BD4A1: add     rsp, 8
 * 00000001406BD4A5: call    loc_1406BD498
 * 00000001406BD4AA: add     rsp, 8
 * 00000001406BD4AE: call    loc_1406BD4A1
 * 00000001406BD4B3: add     rsp, 8
 * 00000001406BD4B7: call    loc_1406BD4AA
 * 00000001406BD4BC: add     rsp, 8
 * 00000001406BD4C0: call    loc_1406BD4B3
 * 00000001406BD4C5: add     rsp, 8
 * 00000001406BD4C9: call    loc_1406BD4BC
 * 00000001406BD4CE: add     rsp, 8
 * 00000001406BD4D2: call    loc_1406BD4C5
 * 00000001406BD4D7: add     rsp, 8
 * 00000001406BD4DB: call    loc_1406BD4CE
 * 00000001406BD4E0: add     rsp, 8
 * 00000001406BD4E4: call    loc_1406BD4D7
 * 00000001406BD4E9: add     rsp, 8
 * 00000001406BD4ED: call    loc_1406BD4E0
 * 00000001406BD4F2: add     rsp, 8
 * 00000001406BD4F6: call    loc_1406BD4E9
 * 00000001406BD4FB: add     rsp, 8
 * 00000001406BD4FF: call    loc_1406BD4F2
 * 00000001406BD504: add     rsp, 8
 * 00000001406BD508: call    loc_1406BD4FB
 * 00000001406BD50D: add     rsp, 8
 * 00000001406BD511: call    loc_1406BD504
 * 00000001406BD516: add     rsp, 8
 * 00000001406BD51A: call    loc_1406BD50D
 * 00000001406BD51F: add     rsp, 8
 * 00000001406BD523: call    loc_1406BD516
 * 00000001406BD528: add     rsp, 8
 * 00000001406BD52C: call    loc_1406BD51F
 * 00000001406BD531: add     rsp, 8
 * 00000001406BD535: call    loc_1406BD528
 * 00000001406BD53A: add     rsp, 8
 * 00000001406BD53E: call    loc_1406BD531
 * 00000001406BD543: add     rsp, 8
 * 00000001406BD547: mov     eax, 0DADAh
 * 00000001406BD54C: test    byte ptr gs:85Ch, 8
 * 00000001406BD555: jz      short loc_1406BD55E
 * 00000001406BD557: mov     al, 20h ; ' '
 * 00000001406BD559: incsspq rax
 * 00000001406BD55E: test    edx, 80h
 * 00000001406BD564: jz      short loc_1406BD56E
 * 00000001406BD566: lfence
 * 00000001406BD569: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406BD56E: lfence
 * 00000001406BD571: mov     byte ptr gs:85Eh, 0
 * 00000001406BD57A: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406BD581: jz      short loc_1406BD5A2
 * 00000001406BD583: mov     ecx, 6A7h
 * 00000001406BD588: rdmsr
 * 00000001406BD58A: cmp     edx, 0
 * 00000001406BD58D: jz      short loc_1406BD5A2
 * 00000001406BD58F: mov     ecx, edx
 * 00000001406BD591: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406BD597: cmp     edx, ecx
 * 00000001406BD599: jz      short loc_1406BD5A2
 * 00000001406BD59B: mov     ecx, 6A7h
 * 00000001406BD5A0: wrmsr
 * 00000001406BD5A2: test    byte ptr [r10+3], 3
 * 00000001406BD5A7: mov     word ptr [rbp+80h], 0
 * 00000001406BD5B0: jz      short loc_1406BD5B7
 * 00000001406BD5B2: call    KiSaveDebugRegisterState
 * 00000001406BD5B7: cld
 * 00000001406BD5B8: stmxcsr dword ptr [rbp-54h]
 * 00000001406BD5BC: ldmxcsr dword ptr gs:180h
 * 00000001406BD5C5: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001406BD5C9: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001406BD5CD: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001406BD5D1: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001406BD5D5: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001406BD5D9: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001406BD5DD: test    byte ptr [rbp+0F0h], 1
 * 00000001406BD5E4: jz      short loc_1406BD5EB
 * 00000001406BD5E6: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406BD5EB: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406BD5F2: jz      short loc_1406BD600
 * 00000001406BD5F4: test    byte ptr [rbp+0F0h], 1
 * 00000001406BD5FB: jz      short loc_1406BD600
 * 00000001406BD5FD: stac
 * 00000001406BD600: test    dword ptr [rbp+0F8h], 200h
 * 00000001406BD60A: jz      short loc_1406BD60D
 * 00000001406BD60C: sti
 * 00000001406BD60D: mov     ecx, 80000003h
 * 00000001406BD612: mov     edx, 1
 * 00000001406BD617: mov     r9, [rbp-50h]
 * 00000001406BD61B: mov     r8, [rbp+0E8h]
 * 00000001406BD622: call    KiExceptionDispatch
 * 00000001406BD627: nop
 * 00000001406BD628: retn
 */
