/*
 * XREFs of KiStackFault @ 0x1406B9440
 * Callers:
 *     KiStackFaultShadow @ 0x140BBB740 (KiStackFaultShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x14041B1F0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404FBC90 (KiSaveDebugRegisterState.c)
 *     KiStackFault @ 0x1406B9440 (KiStackFault.c)
 *     KiExceptionDispatch @ 0x1406BED00 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406BF740 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiStackFault @ 0x1406B9440
 * Reason: Hex-Rays returned no pseudocode for 0x1406B9440
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B9440: push    rbp
 * 00000001406B9441: sub     rsp, 158h
 * 00000001406B9448: lea     rbp, [rsp+80h]
 * 00000001406B9450: mov     [rbp+0D8h+var_12D], 1
 * 00000001406B9454: mov     [rbp+0D8h+var_128], rax
 * 00000001406B9458: mov     [rbp+0D8h+var_120], rcx
 * 00000001406B945C: mov     [rbp+0D8h+var_118], rdx
 * 00000001406B9460: mov     [rbp+0D8h+var_110], r8
 * 00000001406B9464: mov     [rbp+0D8h+var_108], r9
 * 00000001406B9468: mov     [rbp+0D8h+var_100], r10
 * 00000001406B946C: mov     [rbp+0D8h+var_F8], r11
 * 00000001406B9470: test    [rbp+0D8h+arg_8], 1
 * 00000001406B9477: jnz     short loc_1406B94B1
 * 00000001406B9479: xor     edx, edx
 * 00000001406B947B: rdsspq  rdx
 * 00000001406B9480: mov     [rbp+0D8h+var_80], rdx
 * 00000001406B9484: lfence
 * 00000001406B9487: test    byte ptr gs:858h, 1
 * 00000001406B9490: jnz     short loc_1406B949A
 * 00000001406B9492: lfence
 * 00000001406B9495: jmp     loc_1406B9722
 * 00000001406B949A: movzx   eax, word ptr gs:866h
 * 00000001406B94A3: mov     ecx, 48h ; 'H'
 * 00000001406B94A8: xor     edx, edx
 * 00000001406B94AA: wrmsr
 * 00000001406B94AC: jmp     loc_1406B9722
 * 00000001406B94B1: test    cs:KiKvaShadow, 1
 * 00000001406B94B8: jnz     short loc_1406B94BD
 * 00000001406B94BA: swapgs
 * 00000001406B94BD: lfence
 * 00000001406B94C0: mov     rcx, gs:9D28h
 * 00000001406B94C9: test    rcx, rcx
 * 00000001406B94CC: jz      short loc_1406B94ED
 * 00000001406B94CE: rdsspq  rdx
 * 00000001406B94D3: mov     r10, gs:9D20h
 * 00000001406B94DC: add     r10, 8
 * 00000001406B94E0: cmp     rdx, r10
 * 00000001406B94E3: jnz     short loc_1406B94ED
 * 00000001406B94E5: rstorssp qword ptr [rcx]
 * 00000001406B94E9: saveprevssp
 * 00000001406B94ED: mov     r10, gs:188h
 * 00000001406B94F6: mov     rcx, gs:188h
 * 00000001406B94FF: mov     rcx, [rcx+220h]
 * 00000001406B9506: mov     rcx, [rcx+760h]
 * 00000001406B950D: mov     gs:850h, rcx
 * 00000001406B9516: mov     cx, gs:862h
 * 00000001406B951F: mov     gs:864h, cx
 * 00000001406B9528: mov     cl, gs:858h
 * 00000001406B9530: mov     gs:85Ah, cl
 * 00000001406B9538: movzx   eax, word ptr gs:868h
 * 00000001406B9541: cmp     gs:866h, ax
 * 00000001406B954A: jz      short loc_1406B955E
 * 00000001406B954C: mov     gs:866h, ax
 * 00000001406B9555: mov     ecx, 48h ; 'H'
 * 00000001406B955A: xor     edx, edx
 * 00000001406B955C: wrmsr
 * 00000001406B955E: movzx   edx, byte ptr gs:858h
 * 00000001406B9567: test    edx, 8
 * 00000001406B956D: jz      short loc_1406B9586
 * 00000001406B956F: mov     eax, 1
 * 00000001406B9574: xor     edx, edx
 * 00000001406B9576: mov     ecx, 49h ; 'I'
 * 00000001406B957B: wrmsr
 * 00000001406B957D: movzx   edx, byte ptr gs:858h
 * 00000001406B9586: test    edx, 2
 * 00000001406B958C: jz      loc_1406B96C9
 * 00000001406B9592: call    loc_1406B96A5
 * 00000001406B9597: add     rsp, 8
 * 00000001406B959B: call    loc_1406B96AE
 * 00000001406B95A0: add     rsp, 8
 * 00000001406B95A4: call    loc_1406B9597
 * 00000001406B95A9: add     rsp, 8
 * 00000001406B95AD: call    loc_1406B95A0
 * 00000001406B95B2: add     rsp, 8
 * 00000001406B95B6: call    loc_1406B95A9
 * 00000001406B95BB: add     rsp, 8
 * 00000001406B95BF: call    loc_1406B95B2
 * 00000001406B95C4: add     rsp, 8
 * 00000001406B95C8: call    loc_1406B95BB
 * 00000001406B95CD: add     rsp, 8
 * 00000001406B95D1: call    loc_1406B95C4
 * 00000001406B95D6: add     rsp, 8
 * 00000001406B95DA: call    loc_1406B95CD
 * 00000001406B95DF: add     rsp, 8
 * 00000001406B95E3: call    loc_1406B95D6
 * 00000001406B95E8: add     rsp, 8
 * 00000001406B95EC: call    loc_1406B95DF
 * 00000001406B95F1: add     rsp, 8
 * 00000001406B95F5: call    loc_1406B95E8
 * 00000001406B95FA: add     rsp, 8
 * 00000001406B95FE: call    loc_1406B95F1
 * 00000001406B9603: add     rsp, 8
 * 00000001406B9607: call    loc_1406B95FA
 * 00000001406B960C: add     rsp, 8
 * 00000001406B9610: call    loc_1406B9603
 * 00000001406B9615: add     rsp, 8
 * 00000001406B9619: call    loc_1406B960C
 * 00000001406B961E: add     rsp, 8
 * 00000001406B9622: call    loc_1406B9615
 * 00000001406B9627: add     rsp, 8
 * 00000001406B962B: call    loc_1406B961E
 * 00000001406B9630: add     rsp, 8
 * 00000001406B9634: call    loc_1406B9627
 * 00000001406B9639: add     rsp, 8
 * 00000001406B963D: call    loc_1406B9630
 * 00000001406B9642: add     rsp, 8
 * 00000001406B9646: call    loc_1406B9639
 * 00000001406B964B: add     rsp, 8
 * 00000001406B964F: call    loc_1406B9642
 * 00000001406B9654: add     rsp, 8
 * 00000001406B9658: call    loc_1406B964B
 * 00000001406B965D: add     rsp, 8
 * 00000001406B9661: call    loc_1406B9654
 * 00000001406B9666: add     rsp, 8
 * 00000001406B966A: call    loc_1406B965D
 * 00000001406B966F: add     rsp, 8
 * 00000001406B9673: call    loc_1406B9666
 * 00000001406B9678: add     rsp, 8
 * 00000001406B967C: call    loc_1406B966F
 * 00000001406B9681: add     rsp, 8
 * 00000001406B9685: call    loc_1406B9678
 * 00000001406B968A: add     rsp, 8
 * 00000001406B968E: call    loc_1406B9681
 * 00000001406B9693: add     rsp, 8
 * 00000001406B9697: call    loc_1406B968A
 * 00000001406B969C: add     rsp, 8
 * 00000001406B96A0: call    loc_1406B9693
 * 00000001406B96A5: add     rsp, 8
 * 00000001406B96A9: call    loc_1406B969C
 * 00000001406B96AE: add     rsp, 8
 * 00000001406B96B2: mov     eax, 0DADAh
 * 00000001406B96B7: test    byte ptr gs:85Ch, 8
 * 00000001406B96C0: jz      short loc_1406B96C9
 * 00000001406B96C2: mov     al, 20h ; ' '
 * 00000001406B96C4: incsspq rax
 * 00000001406B96C9: test    edx, 80h
 * 00000001406B96CF: jz      short loc_1406B96D9
 * 00000001406B96D1: lfence
 * 00000001406B96D4: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406B96D9: lfence
 * 00000001406B96DC: mov     byte ptr gs:85Eh, 0
 * 00000001406B96E5: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406B96EC: jz      short loc_1406B970D
 * 00000001406B96EE: mov     ecx, 6A7h
 * 00000001406B96F3: rdmsr
 * 00000001406B96F5: cmp     edx, 0
 * 00000001406B96F8: jz      short loc_1406B970D
 * 00000001406B96FA: mov     ecx, edx
 * 00000001406B96FC: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406B9702: cmp     edx, ecx
 * 00000001406B9704: jz      short loc_1406B970D
 * 00000001406B9706: mov     ecx, 6A7h
 * 00000001406B970B: wrmsr
 * 00000001406B970D: test    byte ptr [r10+3], 3
 * 00000001406B9712: mov     [rbp+0D8h+var_58], 0
 * 00000001406B971B: jz      short loc_1406B9722
 * 00000001406B971D: call    KiSaveDebugRegisterState
 * 00000001406B9722: cld
 * 00000001406B9723: stmxcsr [rbp+0D8h+var_12C]
 * 00000001406B9727: ldmxcsr dword ptr gs:180h
 * 00000001406B9730: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001406B9734: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001406B9738: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001406B973C: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001406B9740: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001406B9744: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001406B9748: test    [rbp+0D8h+arg_8], 1
 * 00000001406B974F: jz      short loc_1406B9756
 * 00000001406B9751: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406B9756: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B975D: jz      short loc_1406B976B
 * 00000001406B975F: test    [rbp+0D8h+arg_8], 1
 * 00000001406B9766: jz      short loc_1406B976B
 * 00000001406B9768: stac
 * 00000001406B976B: mov     eax, [rbp+0E0h]
 * 00000001406B9771: test    [rbp+0D8h+arg_10], 200h
 * 00000001406B977B: jz      short loc_1406B977E
 * 00000001406B977D: sti
 * 00000001406B977E: mov     ecx, 0C0000005h
 * 00000001406B9783: mov     edx, 2
 * 00000001406B9788: mov     r8, [rbp+0D8h+arg_0]
 * 00000001406B978F: mov     r9d, [rbp+0E0h]
 * 00000001406B9796: or      r9d, 3
 * 00000001406B979A: and     r9d, 0FFFFh
 * 00000001406B97A1: test    [rbp+0D8h+arg_8], 1
 * 00000001406B97A8: jnz     short loc_1406B97AE
 * 00000001406B97AA: or      r9, 0FFFFFFFFFFFFFFFFh
 * 00000001406B97AE: xor     r10, r10
 * 00000001406B97B1: call    KiExceptionDispatch
 * 00000001406B97B6: nop
 * 00000001406B97B7: retn
 */
