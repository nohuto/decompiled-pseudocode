/*
 * XREFs of KiVmbusInterrupt3 @ 0x1406A5430
 * Callers:
 *     KiVmbusInterrupt3Shadow @ 0x140BAB1C0 (KiVmbusInterrupt3Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x140400C70 (KiCheckForSListAddress.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x140429DB0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404F9580 (KiSaveDebugRegisterState.c)
 *     KeWakeProcessor @ 0x1405B8E30 (KeWakeProcessor.c)
 *     KiVmbusInterrupt3 @ 0x1406A5430 (KiVmbusInterrupt3.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406B4440 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt3 @ 0x1406A5430
 * Reason: Hex-Rays returned no pseudocode for 0x1406A5430
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406A5430: push    4
 * 00000001406A5432: push    rbp
 * 00000001406A5433: push    rsi
 * 00000001406A5434: sub     rsp, 150h
 * 00000001406A543B: lea     rbp, [rsp+168h+var_E8]
 * 00000001406A5443: mov     byte ptr [rbp-55h], 0
 * 00000001406A5447: mov     [rbp-50h], rax
 * 00000001406A544B: mov     [rbp-48h], rcx
 * 00000001406A544F: mov     [rbp-40h], rdx
 * 00000001406A5453: mov     [rbp-38h], r8
 * 00000001406A5457: mov     [rbp-30h], r9
 * 00000001406A545B: mov     [rbp-28h], r10
 * 00000001406A545F: mov     [rbp-20h], r11
 * 00000001406A5463: test    byte ptr [rbp+0F0h], 1
 * 00000001406A546A: jnz     short loc_1406A54A4
 * 00000001406A546C: xor     edx, edx
 * 00000001406A546E: rdsspq  rdx
 * 00000001406A5473: mov     [rbp+58h], rdx
 * 00000001406A5477: lfence
 * 00000001406A547A: test    byte ptr gs:858h, 1
 * 00000001406A5483: jnz     short loc_1406A548D
 * 00000001406A5485: lfence
 * 00000001406A5488: jmp     loc_1406A5715
 * 00000001406A548D: movzx   eax, word ptr gs:866h
 * 00000001406A5496: mov     ecx, 48h ; 'H'
 * 00000001406A549B: xor     edx, edx
 * 00000001406A549D: wrmsr
 * 00000001406A549F: jmp     loc_1406A5715
 * 00000001406A54A4: test    cs:KiKvaShadow, 1
 * 00000001406A54AB: jnz     short loc_1406A54B0
 * 00000001406A54AD: swapgs
 * 00000001406A54B0: lfence
 * 00000001406A54B3: mov     rcx, gs:9D28h
 * 00000001406A54BC: test    rcx, rcx
 * 00000001406A54BF: jz      short loc_1406A54E0
 * 00000001406A54C1: rdsspq  rdx
 * 00000001406A54C6: mov     r10, gs:9D20h
 * 00000001406A54CF: add     r10, 8
 * 00000001406A54D3: cmp     rdx, r10
 * 00000001406A54D6: jnz     short loc_1406A54E0
 * 00000001406A54D8: rstorssp qword ptr [rcx]
 * 00000001406A54DC: saveprevssp
 * 00000001406A54E0: mov     r10, gs:188h
 * 00000001406A54E9: mov     rcx, gs:188h
 * 00000001406A54F2: mov     rcx, [rcx+220h]
 * 00000001406A54F9: mov     rcx, [rcx+760h]
 * 00000001406A5500: mov     gs:850h, rcx
 * 00000001406A5509: mov     cx, gs:862h
 * 00000001406A5512: mov     gs:864h, cx
 * 00000001406A551B: mov     cl, gs:858h
 * 00000001406A5523: mov     gs:85Ah, cl
 * 00000001406A552B: movzx   eax, word ptr gs:868h
 * 00000001406A5534: cmp     gs:866h, ax
 * 00000001406A553D: jz      short loc_1406A5551
 * 00000001406A553F: mov     gs:866h, ax
 * 00000001406A5548: mov     ecx, 48h ; 'H'
 * 00000001406A554D: xor     edx, edx
 * 00000001406A554F: wrmsr
 * 00000001406A5551: movzx   edx, byte ptr gs:858h
 * 00000001406A555A: test    edx, 8
 * 00000001406A5560: jz      short loc_1406A5579
 * 00000001406A5562: mov     eax, 1
 * 00000001406A5567: xor     edx, edx
 * 00000001406A5569: mov     ecx, 49h ; 'I'
 * 00000001406A556E: wrmsr
 * 00000001406A5570: movzx   edx, byte ptr gs:858h
 * 00000001406A5579: test    edx, 2
 * 00000001406A557F: jz      loc_1406A56BC
 * 00000001406A5585: call    loc_1406A5698
 * 00000001406A558A: add     rsp, 8
 * 00000001406A558E: call    loc_1406A56A1
 * 00000001406A5593: add     rsp, 8
 * 00000001406A5597: call    loc_1406A558A
 * 00000001406A559C: add     rsp, 8
 * 00000001406A55A0: call    loc_1406A5593
 * 00000001406A55A5: add     rsp, 8
 * 00000001406A55A9: call    loc_1406A559C
 * 00000001406A55AE: add     rsp, 8
 * 00000001406A55B2: call    loc_1406A55A5
 * 00000001406A55B7: add     rsp, 8
 * 00000001406A55BB: call    loc_1406A55AE
 * 00000001406A55C0: add     rsp, 8
 * 00000001406A55C4: call    loc_1406A55B7
 * 00000001406A55C9: add     rsp, 8
 * 00000001406A55CD: call    loc_1406A55C0
 * 00000001406A55D2: add     rsp, 8
 * 00000001406A55D6: call    loc_1406A55C9
 * 00000001406A55DB: add     rsp, 8
 * 00000001406A55DF: call    loc_1406A55D2
 * 00000001406A55E4: add     rsp, 8
 * 00000001406A55E8: call    loc_1406A55DB
 * 00000001406A55ED: add     rsp, 8
 * 00000001406A55F1: call    loc_1406A55E4
 * 00000001406A55F6: add     rsp, 8
 * 00000001406A55FA: call    loc_1406A55ED
 * 00000001406A55FF: add     rsp, 8
 * 00000001406A5603: call    loc_1406A55F6
 * 00000001406A5608: add     rsp, 8
 * 00000001406A560C: call    loc_1406A55FF
 * 00000001406A5611: add     rsp, 8
 * 00000001406A5615: call    loc_1406A5608
 * 00000001406A561A: add     rsp, 8
 * 00000001406A561E: call    loc_1406A5611
 * 00000001406A5623: add     rsp, 8
 * 00000001406A5627: call    loc_1406A561A
 * 00000001406A562C: add     rsp, 8
 * 00000001406A5630: call    loc_1406A5623
 * 00000001406A5635: add     rsp, 8
 * 00000001406A5639: call    loc_1406A562C
 * 00000001406A563E: add     rsp, 8
 * 00000001406A5642: call    loc_1406A5635
 * 00000001406A5647: add     rsp, 8
 * 00000001406A564B: call    loc_1406A563E
 * 00000001406A5650: add     rsp, 8
 * 00000001406A5654: call    loc_1406A5647
 * 00000001406A5659: add     rsp, 8
 * 00000001406A565D: call    loc_1406A5650
 * 00000001406A5662: add     rsp, 8
 * 00000001406A5666: call    loc_1406A5659
 * 00000001406A566B: add     rsp, 8
 * 00000001406A566F: call    loc_1406A5662
 * 00000001406A5674: add     rsp, 8
 * 00000001406A5678: call    loc_1406A566B
 * 00000001406A567D: add     rsp, 8
 * 00000001406A5681: call    loc_1406A5674
 * 00000001406A5686: add     rsp, 8
 * 00000001406A568A: call    loc_1406A567D
 * 00000001406A568F: add     rsp, 8
 * 00000001406A5693: call    loc_1406A5686
 * 00000001406A5698: add     rsp, 8
 * 00000001406A569C: call    loc_1406A568F
 * 00000001406A56A1: add     rsp, 8
 * 00000001406A56A5: mov     eax, 0DADAh
 * 00000001406A56AA: test    byte ptr gs:85Ch, 8
 * 00000001406A56B3: jz      short loc_1406A56BC
 * 00000001406A56B5: mov     al, 20h ; ' '
 * 00000001406A56B7: incsspq rax
 * 00000001406A56BC: test    edx, 80h
 * 00000001406A56C2: jz      short loc_1406A56CC
 * 00000001406A56C4: lfence
 * 00000001406A56C7: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406A56CC: lfence
 * 00000001406A56CF: mov     byte ptr gs:85Eh, 0
 * 00000001406A56D8: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406A56DF: jz      short loc_1406A5700
 * 00000001406A56E1: mov     ecx, 6A7h
 * 00000001406A56E6: rdmsr
 * 00000001406A56E8: cmp     edx, 0
 * 00000001406A56EB: jz      short loc_1406A5700
 * 00000001406A56ED: mov     ecx, edx
 * 00000001406A56EF: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406A56F5: cmp     edx, ecx
 * 00000001406A56F7: jz      short loc_1406A5700
 * 00000001406A56F9: mov     ecx, 6A7h
 * 00000001406A56FE: wrmsr
 * 00000001406A5700: test    byte ptr [r10+3], 3
 * 00000001406A5705: mov     word ptr [rbp+80h], 0
 * 00000001406A570E: jz      short loc_1406A5715
 * 00000001406A5710: call    KiSaveDebugRegisterState
 * 00000001406A5715: cld
 * 00000001406A5716: stmxcsr dword ptr [rbp-54h]
 * 00000001406A571A: ldmxcsr dword ptr gs:180h
 * 00000001406A5723: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001406A5727: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001406A572B: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001406A572F: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001406A5733: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001406A5737: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001406A573B: test    byte ptr [rbp+0F0h], 1
 * 00000001406A5742: jz      short loc_1406A5749
 * 00000001406A5744: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406A5749: cmp     byte ptr gs:87DAh, 0
 * 00000001406A5752: jz      short loc_1406A5759
 * 00000001406A5754: call    KeWakeProcessor
 * 00000001406A5759: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001406A5760: cmp     rax, [rbp+0E8h]
 * 00000001406A5767: jnb     short loc_1406A5782
 * 00000001406A5769: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001406A5770: cmp     rax, [rbp+0E8h]
 * 00000001406A5777: jb      short loc_1406A5782
 * 00000001406A5779: lea     rcx, [rbp-80h]
 * 00000001406A577D: call    KiCheckForSListAddress
 * 00000001406A5782: xor     esi, esi
 * 00000001406A5784: inc     dword ptr gs:87C0h
 * 00000001406A578C: jmp     KiVmbusInterruptDispatch
 */
