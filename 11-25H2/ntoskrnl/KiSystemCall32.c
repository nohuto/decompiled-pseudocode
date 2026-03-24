/*
 * XREFs of KiSystemCall32 @ 0x1406B2600
 * Callers:
 *     <none>
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x140429DB0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404F9580 (KiSaveDebugRegisterState.c)
 *     KiSystemCall32 @ 0x1406B2600 (KiSystemCall32.c)
 *     KiExceptionDispatch @ 0x1406B3A00 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406B4440 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall32 @ 0x1406B2600
 * Reason: Hex-Rays returned no pseudocode for 0x1406B2600
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B2600: swapgs
 * 00000001406B2603: mov     gs:10h, rsp
 * 00000001406B260C: mov     rsp, gs:1A8h
 * 00000001406B2615: push    2Bh ; '+'
 * 00000001406B2617: push    qword ptr gs:10h
 * 00000001406B261F: push    r11
 * 00000001406B2621: push    23h ; '#'
 * 00000001406B2623: push    rcx
 * 00000001406B2624: cmp     qword ptr gs:9D28h, 0
 * 00000001406B262E: jz      short loc_1406B2634
 * 00000001406B2630: setssbsy
 * 00000001406B2634: swapgs
 * 00000001406B2637: lfence
 * 00000001406B263A: sub     rsp, 8
 * 00000001406B263E: push    rbp
 * 00000001406B263F: sub     rsp, 158h
 * 00000001406B2646: lea     rbp, [rsp+190h+var_110]
 * 00000001406B264E: mov     byte ptr [rbp-55h], 1
 * 00000001406B2652: mov     [rbp-50h], rax
 * 00000001406B2656: mov     [rbp-48h], rcx
 * 00000001406B265A: mov     [rbp-40h], rdx
 * 00000001406B265E: mov     [rbp-38h], r8
 * 00000001406B2662: mov     [rbp-30h], r9
 * 00000001406B2666: mov     [rbp-28h], r10
 * 00000001406B266A: mov     [rbp-20h], r11
 * 00000001406B266E: test    byte ptr [rbp+0F0h], 1
 * 00000001406B2675: jnz     short loc_1406B26AF
 * 00000001406B2677: xor     edx, edx
 * 00000001406B2679: rdsspq  rdx
 * 00000001406B267E: mov     [rbp+58h], rdx
 * 00000001406B2682: lfence
 * 00000001406B2685: test    byte ptr gs:858h, 1
 * 00000001406B268E: jnz     short loc_1406B2698
 * 00000001406B2690: lfence
 * 00000001406B2693: jmp     loc_1406B2920
 * 00000001406B2698: movzx   eax, word ptr gs:866h
 * 00000001406B26A1: mov     ecx, 48h ; 'H'
 * 00000001406B26A6: xor     edx, edx
 * 00000001406B26A8: wrmsr
 * 00000001406B26AA: jmp     loc_1406B2920
 * 00000001406B26AF: test    cs:KiKvaShadow, 1
 * 00000001406B26B6: jnz     short loc_1406B26BB
 * 00000001406B26B8: swapgs
 * 00000001406B26BB: lfence
 * 00000001406B26BE: mov     rcx, gs:9D28h
 * 00000001406B26C7: test    rcx, rcx
 * 00000001406B26CA: jz      short loc_1406B26EB
 * 00000001406B26CC: rdsspq  rdx
 * 00000001406B26D1: mov     r10, gs:9D20h
 * 00000001406B26DA: add     r10, 8
 * 00000001406B26DE: cmp     rdx, r10
 * 00000001406B26E1: jnz     short loc_1406B26EB
 * 00000001406B26E3: rstorssp qword ptr [rcx]
 * 00000001406B26E7: saveprevssp
 * 00000001406B26EB: mov     r10, gs:188h
 * 00000001406B26F4: mov     rcx, gs:188h
 * 00000001406B26FD: mov     rcx, [rcx+220h]
 * 00000001406B2704: mov     rcx, [rcx+760h]
 * 00000001406B270B: mov     gs:850h, rcx
 * 00000001406B2714: mov     cx, gs:862h
 * 00000001406B271D: mov     gs:864h, cx
 * 00000001406B2726: mov     cl, gs:858h
 * 00000001406B272E: mov     gs:85Ah, cl
 * 00000001406B2736: movzx   eax, word ptr gs:868h
 * 00000001406B273F: cmp     gs:866h, ax
 * 00000001406B2748: jz      short loc_1406B275C
 * 00000001406B274A: mov     gs:866h, ax
 * 00000001406B2753: mov     ecx, 48h ; 'H'
 * 00000001406B2758: xor     edx, edx
 * 00000001406B275A: wrmsr
 * 00000001406B275C: movzx   edx, byte ptr gs:858h
 * 00000001406B2765: test    edx, 8
 * 00000001406B276B: jz      short loc_1406B2784
 * 00000001406B276D: mov     eax, 1
 * 00000001406B2772: xor     edx, edx
 * 00000001406B2774: mov     ecx, 49h ; 'I'
 * 00000001406B2779: wrmsr
 * 00000001406B277B: movzx   edx, byte ptr gs:858h
 * 00000001406B2784: test    edx, 2
 * 00000001406B278A: jz      loc_1406B28C7
 * 00000001406B2790: call    loc_1406B28A3
 * 00000001406B2795: add     rsp, 8
 * 00000001406B2799: call    loc_1406B28AC
 * 00000001406B279E: add     rsp, 8
 * 00000001406B27A2: call    loc_1406B2795
 * 00000001406B27A7: add     rsp, 8
 * 00000001406B27AB: call    loc_1406B279E
 * 00000001406B27B0: add     rsp, 8
 * 00000001406B27B4: call    loc_1406B27A7
 * 00000001406B27B9: add     rsp, 8
 * 00000001406B27BD: call    loc_1406B27B0
 * 00000001406B27C2: add     rsp, 8
 * 00000001406B27C6: call    loc_1406B27B9
 * 00000001406B27CB: add     rsp, 8
 * 00000001406B27CF: call    loc_1406B27C2
 * 00000001406B27D4: add     rsp, 8
 * 00000001406B27D8: call    loc_1406B27CB
 * 00000001406B27DD: add     rsp, 8
 * 00000001406B27E1: call    loc_1406B27D4
 * 00000001406B27E6: add     rsp, 8
 * 00000001406B27EA: call    loc_1406B27DD
 * 00000001406B27EF: add     rsp, 8
 * 00000001406B27F3: call    loc_1406B27E6
 * 00000001406B27F8: add     rsp, 8
 * 00000001406B27FC: call    loc_1406B27EF
 * 00000001406B2801: add     rsp, 8
 * 00000001406B2805: call    loc_1406B27F8
 * 00000001406B280A: add     rsp, 8
 * 00000001406B280E: call    loc_1406B2801
 * 00000001406B2813: add     rsp, 8
 * 00000001406B2817: call    loc_1406B280A
 * 00000001406B281C: add     rsp, 8
 * 00000001406B2820: call    loc_1406B2813
 * 00000001406B2825: add     rsp, 8
 * 00000001406B2829: call    loc_1406B281C
 * 00000001406B282E: add     rsp, 8
 * 00000001406B2832: call    loc_1406B2825
 * 00000001406B2837: add     rsp, 8
 * 00000001406B283B: call    loc_1406B282E
 * 00000001406B2840: add     rsp, 8
 * 00000001406B2844: call    loc_1406B2837
 * 00000001406B2849: add     rsp, 8
 * 00000001406B284D: call    loc_1406B2840
 * 00000001406B2852: add     rsp, 8
 * 00000001406B2856: call    loc_1406B2849
 * 00000001406B285B: add     rsp, 8
 * 00000001406B285F: call    loc_1406B2852
 * 00000001406B2864: add     rsp, 8
 * 00000001406B2868: call    loc_1406B285B
 * 00000001406B286D: add     rsp, 8
 * 00000001406B2871: call    loc_1406B2864
 * 00000001406B2876: add     rsp, 8
 * 00000001406B287A: call    loc_1406B286D
 * 00000001406B287F: add     rsp, 8
 * 00000001406B2883: call    loc_1406B2876
 * 00000001406B2888: add     rsp, 8
 * 00000001406B288C: call    loc_1406B287F
 * 00000001406B2891: add     rsp, 8
 * 00000001406B2895: call    loc_1406B2888
 * 00000001406B289A: add     rsp, 8
 * 00000001406B289E: call    loc_1406B2891
 * 00000001406B28A3: add     rsp, 8
 * 00000001406B28A7: call    loc_1406B289A
 * 00000001406B28AC: add     rsp, 8
 * 00000001406B28B0: mov     eax, 0DADAh
 * 00000001406B28B5: test    byte ptr gs:85Ch, 8
 * 00000001406B28BE: jz      short loc_1406B28C7
 * 00000001406B28C0: mov     al, 20h ; ' '
 * 00000001406B28C2: incsspq rax
 * 00000001406B28C7: test    edx, 80h
 * 00000001406B28CD: jz      short loc_1406B28D7
 * 00000001406B28CF: lfence
 * 00000001406B28D2: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406B28D7: lfence
 * 00000001406B28DA: mov     byte ptr gs:85Eh, 0
 * 00000001406B28E3: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406B28EA: jz      short loc_1406B290B
 * 00000001406B28EC: mov     ecx, 6A7h
 * 00000001406B28F1: rdmsr
 * 00000001406B28F3: cmp     edx, 0
 * 00000001406B28F6: jz      short loc_1406B290B
 * 00000001406B28F8: mov     ecx, edx
 * 00000001406B28FA: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406B2900: cmp     edx, ecx
 * 00000001406B2902: jz      short loc_1406B290B
 * 00000001406B2904: mov     ecx, 6A7h
 * 00000001406B2909: wrmsr
 * 00000001406B290B: test    byte ptr [r10+3], 3
 * 00000001406B2910: mov     word ptr [rbp+80h], 0
 * 00000001406B2919: jz      short loc_1406B2920
 * 00000001406B291B: call    KiSaveDebugRegisterState
 * 00000001406B2920: cld
 * 00000001406B2921: stmxcsr dword ptr [rbp-54h]
 * 00000001406B2925: ldmxcsr dword ptr gs:180h
 * 00000001406B292E: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001406B2932: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001406B2936: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001406B293A: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001406B293E: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001406B2942: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001406B2946: test    byte ptr [rbp+0F0h], 1
 * 00000001406B294D: jz      short loc_1406B2954
 * 00000001406B294F: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406B2954: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B295B: jz      short loc_1406B2969
 * 00000001406B295D: test    byte ptr [rbp+0F0h], 1
 * 00000001406B2964: jz      short loc_1406B2969
 * 00000001406B2966: stac
 * 00000001406B2969: sub     qword ptr [rbp+0E8h], 2
 * 00000001406B2971: and     dword ptr [rbp+0ECh], 0
 * 00000001406B2978: sti
 * 00000001406B2979: mov     ecx, 0C000001Dh
 * 00000001406B297E: xor     edx, edx
 * 00000001406B2980: mov     r8, [rbp+0E8h]
 * 00000001406B2987: call    KiExceptionDispatch
 * 00000001406B298C: nop
 * 00000001406B298D: retn
 */
