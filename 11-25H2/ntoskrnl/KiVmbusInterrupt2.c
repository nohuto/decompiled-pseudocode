/*
 * XREFs of KiVmbusInterrupt2 @ 0x1406A50C0
 * Callers:
 *     KiVmbusInterrupt2Shadow @ 0x140BAB140 (KiVmbusInterrupt2Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x140400C70 (KiCheckForSListAddress.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x140429DB0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404F9580 (KiSaveDebugRegisterState.c)
 *     KeWakeProcessor @ 0x1405B8E30 (KeWakeProcessor.c)
 *     KiVmbusInterrupt2 @ 0x1406A50C0 (KiVmbusInterrupt2.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406B4440 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt2 @ 0x1406A50C0
 * Reason: Hex-Rays returned no pseudocode for 0x1406A50C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406A50C0: push    3
 * 00000001406A50C2: push    rbp
 * 00000001406A50C3: push    rsi
 * 00000001406A50C4: sub     rsp, 150h
 * 00000001406A50CB: lea     rbp, [rsp+168h+var_E8]
 * 00000001406A50D3: mov     byte ptr [rbp-55h], 0
 * 00000001406A50D7: mov     [rbp-50h], rax
 * 00000001406A50DB: mov     [rbp-48h], rcx
 * 00000001406A50DF: mov     [rbp-40h], rdx
 * 00000001406A50E3: mov     [rbp-38h], r8
 * 00000001406A50E7: mov     [rbp-30h], r9
 * 00000001406A50EB: mov     [rbp-28h], r10
 * 00000001406A50EF: mov     [rbp-20h], r11
 * 00000001406A50F3: test    byte ptr [rbp+0F0h], 1
 * 00000001406A50FA: jnz     short loc_1406A5134
 * 00000001406A50FC: xor     edx, edx
 * 00000001406A50FE: rdsspq  rdx
 * 00000001406A5103: mov     [rbp+58h], rdx
 * 00000001406A5107: lfence
 * 00000001406A510A: test    byte ptr gs:858h, 1
 * 00000001406A5113: jnz     short loc_1406A511D
 * 00000001406A5115: lfence
 * 00000001406A5118: jmp     loc_1406A53A5
 * 00000001406A511D: movzx   eax, word ptr gs:866h
 * 00000001406A5126: mov     ecx, 48h ; 'H'
 * 00000001406A512B: xor     edx, edx
 * 00000001406A512D: wrmsr
 * 00000001406A512F: jmp     loc_1406A53A5
 * 00000001406A5134: test    cs:KiKvaShadow, 1
 * 00000001406A513B: jnz     short loc_1406A5140
 * 00000001406A513D: swapgs
 * 00000001406A5140: lfence
 * 00000001406A5143: mov     rcx, gs:9D28h
 * 00000001406A514C: test    rcx, rcx
 * 00000001406A514F: jz      short loc_1406A5170
 * 00000001406A5151: rdsspq  rdx
 * 00000001406A5156: mov     r10, gs:9D20h
 * 00000001406A515F: add     r10, 8
 * 00000001406A5163: cmp     rdx, r10
 * 00000001406A5166: jnz     short loc_1406A5170
 * 00000001406A5168: rstorssp qword ptr [rcx]
 * 00000001406A516C: saveprevssp
 * 00000001406A5170: mov     r10, gs:188h
 * 00000001406A5179: mov     rcx, gs:188h
 * 00000001406A5182: mov     rcx, [rcx+220h]
 * 00000001406A5189: mov     rcx, [rcx+760h]
 * 00000001406A5190: mov     gs:850h, rcx
 * 00000001406A5199: mov     cx, gs:862h
 * 00000001406A51A2: mov     gs:864h, cx
 * 00000001406A51AB: mov     cl, gs:858h
 * 00000001406A51B3: mov     gs:85Ah, cl
 * 00000001406A51BB: movzx   eax, word ptr gs:868h
 * 00000001406A51C4: cmp     gs:866h, ax
 * 00000001406A51CD: jz      short loc_1406A51E1
 * 00000001406A51CF: mov     gs:866h, ax
 * 00000001406A51D8: mov     ecx, 48h ; 'H'
 * 00000001406A51DD: xor     edx, edx
 * 00000001406A51DF: wrmsr
 * 00000001406A51E1: movzx   edx, byte ptr gs:858h
 * 00000001406A51EA: test    edx, 8
 * 00000001406A51F0: jz      short loc_1406A5209
 * 00000001406A51F2: mov     eax, 1
 * 00000001406A51F7: xor     edx, edx
 * 00000001406A51F9: mov     ecx, 49h ; 'I'
 * 00000001406A51FE: wrmsr
 * 00000001406A5200: movzx   edx, byte ptr gs:858h
 * 00000001406A5209: test    edx, 2
 * 00000001406A520F: jz      loc_1406A534C
 * 00000001406A5215: call    loc_1406A5328
 * 00000001406A521A: add     rsp, 8
 * 00000001406A521E: call    loc_1406A5331
 * 00000001406A5223: add     rsp, 8
 * 00000001406A5227: call    loc_1406A521A
 * 00000001406A522C: add     rsp, 8
 * 00000001406A5230: call    loc_1406A5223
 * 00000001406A5235: add     rsp, 8
 * 00000001406A5239: call    loc_1406A522C
 * 00000001406A523E: add     rsp, 8
 * 00000001406A5242: call    loc_1406A5235
 * 00000001406A5247: add     rsp, 8
 * 00000001406A524B: call    loc_1406A523E
 * 00000001406A5250: add     rsp, 8
 * 00000001406A5254: call    loc_1406A5247
 * 00000001406A5259: add     rsp, 8
 * 00000001406A525D: call    loc_1406A5250
 * 00000001406A5262: add     rsp, 8
 * 00000001406A5266: call    loc_1406A5259
 * 00000001406A526B: add     rsp, 8
 * 00000001406A526F: call    loc_1406A5262
 * 00000001406A5274: add     rsp, 8
 * 00000001406A5278: call    loc_1406A526B
 * 00000001406A527D: add     rsp, 8
 * 00000001406A5281: call    loc_1406A5274
 * 00000001406A5286: add     rsp, 8
 * 00000001406A528A: call    loc_1406A527D
 * 00000001406A528F: add     rsp, 8
 * 00000001406A5293: call    loc_1406A5286
 * 00000001406A5298: add     rsp, 8
 * 00000001406A529C: call    loc_1406A528F
 * 00000001406A52A1: add     rsp, 8
 * 00000001406A52A5: call    loc_1406A5298
 * 00000001406A52AA: add     rsp, 8
 * 00000001406A52AE: call    loc_1406A52A1
 * 00000001406A52B3: add     rsp, 8
 * 00000001406A52B7: call    loc_1406A52AA
 * 00000001406A52BC: add     rsp, 8
 * 00000001406A52C0: call    loc_1406A52B3
 * 00000001406A52C5: add     rsp, 8
 * 00000001406A52C9: call    loc_1406A52BC
 * 00000001406A52CE: add     rsp, 8
 * 00000001406A52D2: call    loc_1406A52C5
 * 00000001406A52D7: add     rsp, 8
 * 00000001406A52DB: call    loc_1406A52CE
 * 00000001406A52E0: add     rsp, 8
 * 00000001406A52E4: call    loc_1406A52D7
 * 00000001406A52E9: add     rsp, 8
 * 00000001406A52ED: call    loc_1406A52E0
 * 00000001406A52F2: add     rsp, 8
 * 00000001406A52F6: call    loc_1406A52E9
 * 00000001406A52FB: add     rsp, 8
 * 00000001406A52FF: call    loc_1406A52F2
 * 00000001406A5304: add     rsp, 8
 * 00000001406A5308: call    loc_1406A52FB
 * 00000001406A530D: add     rsp, 8
 * 00000001406A5311: call    loc_1406A5304
 * 00000001406A5316: add     rsp, 8
 * 00000001406A531A: call    loc_1406A530D
 * 00000001406A531F: add     rsp, 8
 * 00000001406A5323: call    loc_1406A5316
 * 00000001406A5328: add     rsp, 8
 * 00000001406A532C: call    loc_1406A531F
 * 00000001406A5331: add     rsp, 8
 * 00000001406A5335: mov     eax, 0DADAh
 * 00000001406A533A: test    byte ptr gs:85Ch, 8
 * 00000001406A5343: jz      short loc_1406A534C
 * 00000001406A5345: mov     al, 20h ; ' '
 * 00000001406A5347: incsspq rax
 * 00000001406A534C: test    edx, 80h
 * 00000001406A5352: jz      short loc_1406A535C
 * 00000001406A5354: lfence
 * 00000001406A5357: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406A535C: lfence
 * 00000001406A535F: mov     byte ptr gs:85Eh, 0
 * 00000001406A5368: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406A536F: jz      short loc_1406A5390
 * 00000001406A5371: mov     ecx, 6A7h
 * 00000001406A5376: rdmsr
 * 00000001406A5378: cmp     edx, 0
 * 00000001406A537B: jz      short loc_1406A5390
 * 00000001406A537D: mov     ecx, edx
 * 00000001406A537F: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406A5385: cmp     edx, ecx
 * 00000001406A5387: jz      short loc_1406A5390
 * 00000001406A5389: mov     ecx, 6A7h
 * 00000001406A538E: wrmsr
 * 00000001406A5390: test    byte ptr [r10+3], 3
 * 00000001406A5395: mov     word ptr [rbp+80h], 0
 * 00000001406A539E: jz      short loc_1406A53A5
 * 00000001406A53A0: call    KiSaveDebugRegisterState
 * 00000001406A53A5: cld
 * 00000001406A53A6: stmxcsr dword ptr [rbp-54h]
 * 00000001406A53AA: ldmxcsr dword ptr gs:180h
 * 00000001406A53B3: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001406A53B7: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001406A53BB: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001406A53BF: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001406A53C3: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001406A53C7: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001406A53CB: test    byte ptr [rbp+0F0h], 1
 * 00000001406A53D2: jz      short loc_1406A53D9
 * 00000001406A53D4: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406A53D9: cmp     byte ptr gs:87DAh, 0
 * 00000001406A53E2: jz      short loc_1406A53E9
 * 00000001406A53E4: call    KeWakeProcessor
 * 00000001406A53E9: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001406A53F0: cmp     rax, [rbp+0E8h]
 * 00000001406A53F7: jnb     short loc_1406A5412
 * 00000001406A53F9: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001406A5400: cmp     rax, [rbp+0E8h]
 * 00000001406A5407: jb      short loc_1406A5412
 * 00000001406A5409: lea     rcx, [rbp-80h]
 * 00000001406A540D: call    KiCheckForSListAddress
 * 00000001406A5412: xor     esi, esi
 * 00000001406A5414: inc     dword ptr gs:87C0h
 * 00000001406A541C: jmp     KiVmbusInterruptDispatch
 */
