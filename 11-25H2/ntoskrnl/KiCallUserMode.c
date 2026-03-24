/*
 * XREFs of KiCallUserMode @ 0x1406A01D0
 * Callers:
 *     KeUserModeCallback @ 0x140938670 (KeUserModeCallback.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403EF6C0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiRestoreDebugRegisterState @ 0x1404F9500 (KiRestoreDebugRegisterState.c)
 *     KiCallUserMode @ 0x1406A01D0 (KiCallUserMode.c)
 */

/*
 * Hex-Rays decompilation failed for KiCallUserMode @ 0x1406A01D0
 * Reason: Hex-Rays returned no pseudocode for 0x1406A01D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406A01D0: sub     rsp, 138h
 * 00000001406A01D7: lea     rax, [rsp+138h+var_38]
 * 00000001406A01DF: movaps  [rsp+138h+var_108], xmm6
 * 00000001406A01E4: movaps  [rsp+138h+var_F8], xmm7
 * 00000001406A01E9: movaps  [rsp+138h+var_E8], xmm8
 * 00000001406A01EF: movaps  [rsp+138h+var_D8], xmm9
 * 00000001406A01F5: movaps  [rsp+138h+var_C8], xmm10
 * 00000001406A01FB: movaps  xmmword ptr [rax-80h], xmm11
 * 00000001406A0200: movaps  xmmword ptr [rax-70h], xmm12
 * 00000001406A0205: movaps  xmmword ptr [rax-60h], xmm13
 * 00000001406A020A: movaps  xmmword ptr [rax-50h], xmm14
 * 00000001406A020F: movaps  xmmword ptr [rax-40h], xmm15
 * 00000001406A0214: mov     [rax-8], rbp
 * 00000001406A0218: mov     rbp, rsp
 * 00000001406A021B: mov     [rax], rbx
 * 00000001406A021E: mov     [rax+8], rdi
 * 00000001406A0222: mov     [rax+10h], rsi
 * 00000001406A0226: mov     [rax+18h], r12
 * 00000001406A022A: mov     [rax+20h], r13
 * 00000001406A022E: mov     [rax+28h], r14
 * 00000001406A0232: mov     [rax+30h], r15
 * 00000001406A0236: xor     r10, r10
 * 00000001406A0239: xor     r12, r12
 * 00000001406A023C: xor     r13, r13
 * 00000001406A023F: xor     r14, r14
 * 00000001406A0242: xor     r15, r15
 * 00000001406A0245: pxor    xmm6, xmm6
 * 00000001406A0249: pxor    xmm7, xmm7
 * 00000001406A024D: pxor    xmm8, xmm8
 * 00000001406A0252: pxor    xmm9, xmm9
 * 00000001406A0257: pxor    xmm10, xmm10
 * 00000001406A025C: pxor    xmm11, xmm11
 * 00000001406A0261: pxor    xmm12, xmm12
 * 00000001406A0266: pxor    xmm13, xmm13
 * 00000001406A026B: pxor    xmm14, xmm14
 * 00000001406A0270: pxor    xmm15, xmm15
 * 00000001406A0275: mov     [rbp+0D8h], rcx
 * 00000001406A027C: mov     [rbp+0E0h], rdx
 * 00000001406A0283: mov     rbx, gs:188h
 * 00000001406A028C: mov     [r8+20h], rsp
 * 00000001406A0290: mov     rsi, [rbx+90h]
 * 00000001406A0297: mov     [rbp+0D0h], rsi
 * 00000001406A029E: cli
 * 00000001406A029F: mov     [rbx+28h], r8
 * 00000001406A02A3: mov     [rbx+38h], r9
 * 00000001406A02A7: test    cs:KiKvaShadow, 1
 * 00000001406A02AE: jnz     short loc_1406A02BF
 * 00000001406A02B0: mov     rdi, gs:8
 * 00000001406A02B9: mov     [rdi+4], r8
 * 00000001406A02BD: jmp     short loc_1406A02C8
 * 00000001406A02BF: mov     gs:0B008h, r8
 * 00000001406A02C8: mov     ecx, cs:KeKernelStackSize
 * 00000001406A02CE: sub     r9, rcx
 * 00000001406A02D1: mov     gs:1A8h, r8
 * 00000001406A02DA: mov     [rbx+30h], r9
 * 00000001406A02DE: mov     rcx, [rsp+138h+arg_20]
 * 00000001406A02E6: test    rcx, rcx
 * 00000001406A02E9: jz      short loc_1406A0335
 * 00000001406A02EB: mov     [rbx+418h], rcx
 * 00000001406A02F2: sub     rcx, 3000h
 * 00000001406A02F9: mov     [rbx+420h], rcx
 * 00000001406A0300: or      qword ptr [rbx+420h], 2
 * 00000001406A0308: mov     rcx, [rsp+138h+arg_28]
 * 00000001406A0310: mov     [rbx+410h], rcx
 * 00000001406A0317: mov     gs:9D28h, rcx
 * 00000001406A0320: rdsspq  rdx
 * 00000001406A0325: rstorssp qword ptr [rcx]
 * 00000001406A0329: saveprevssp
 * 00000001406A032D: sub     rdx, 8
 * 00000001406A0331: mov     [r8+40h], rdx
 * 00000001406A0335: lea     rsp, [r8-190h]
 * 00000001406A033C: mov     rdi, rsp
 * 00000001406A033F: mov     ecx, 32h ; '2'
 * 00000001406A0344: rep movsq
 * 00000001406A0347: xor     edi, edi
 * 00000001406A0349: test    byte ptr [rbx+0C2h], 3
 * 00000001406A0350: jnz     loc_1406A0626
 * 00000001406A0356: test    dword ptr [rbx], 8010000h
 * 00000001406A035C: jnz     loc_1406A0626
 * 00000001406A0362: test    byte ptr gs:860h, 2
 * 00000001406A036B: jnz     loc_1406A0626
 * 00000001406A0371: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406A0376: test    eax, eax
 * 00000001406A0378: jnz     loc_1406A0626
 * 00000001406A037E: lea     rbp, [rsi-110h]
 * 00000001406A0385: ldmxcsr dword ptr [rbp-54h]
 * 00000001406A0389: xor     esi, esi
 * 00000001406A038B: test    byte ptr [rbx+3], 3
 * 00000001406A038F: jnz     loc_1406A05FB
 * 00000001406A0395: mov     r9, cs:qword_140FC64A0
 * 00000001406A039C: mov     rcx, gs:188h
 * 00000001406A03A5: bt      dword ptr [rcx+74h], 16h
 * 00000001406A03AA: jnb     short loc_1406A03D6
 * 00000001406A03AC: xor     ecx, ecx
 * 00000001406A03AE: rdsspq  rcx
 * 00000001406A03B3: mov     r8, gs:9D28h
 * 00000001406A03BC: add     r8, 8
 * 00000001406A03C0: cmp     rcx, r8
 * 00000001406A03C3: jnz     short loc_1406A03D6
 * 00000001406A03C5: mov     rcx, gs:9D20h
 * 00000001406A03CE: rstorssp qword ptr [rcx]
 * 00000001406A03D2: saveprevssp
 * 00000001406A03D6: mov     byte ptr gs:85Eh, 0
 * 00000001406A03DF: movzx   eax, word ptr gs:86Ch
 * 00000001406A03E8: cmp     gs:866h, ax
 * 00000001406A03F1: jz      short loc_1406A0405
 * 00000001406A03F3: mov     gs:866h, ax
 * 00000001406A03FC: mov     ecx, 48h ; 'H'
 * 00000001406A0401: xor     edx, edx
 * 00000001406A0403: wrmsr
 * 00000001406A0405: btr     word ptr gs:858h, 2
 * 00000001406A0410: jnb     short loc_1406A0420
 * 00000001406A0412: mov     eax, 1
 * 00000001406A0417: xor     edx, edx
 * 00000001406A0419: mov     ecx, 49h ; 'I'
 * 00000001406A041E: wrmsr
 * 00000001406A0420: btr     word ptr gs:858h, 5
 * 00000001406A042B: jnb     loc_1406A0568
 * 00000001406A0431: call    loc_1406A0544
 * 00000001406A0436: add     rsp, 8
 * 00000001406A043A: call    loc_1406A054D
 * 00000001406A043F: add     rsp, 8
 * 00000001406A0443: call    loc_1406A0436
 * 00000001406A0448: add     rsp, 8
 * 00000001406A044C: call    loc_1406A043F
 * 00000001406A0451: add     rsp, 8
 * 00000001406A0455: call    loc_1406A0448
 * 00000001406A045A: add     rsp, 8
 * 00000001406A045E: call    loc_1406A0451
 * 00000001406A0463: add     rsp, 8
 * 00000001406A0467: call    loc_1406A045A
 * 00000001406A046C: add     rsp, 8
 * 00000001406A0470: call    loc_1406A0463
 * 00000001406A0475: add     rsp, 8
 * 00000001406A0479: call    loc_1406A046C
 * 00000001406A047E: add     rsp, 8
 * 00000001406A0482: call    loc_1406A0475
 * 00000001406A0487: add     rsp, 8
 * 00000001406A048B: call    loc_1406A047E
 * 00000001406A0490: add     rsp, 8
 * 00000001406A0494: call    loc_1406A0487
 * 00000001406A0499: add     rsp, 8
 * 00000001406A049D: call    loc_1406A0490
 * 00000001406A04A2: add     rsp, 8
 * 00000001406A04A6: call    loc_1406A0499
 * 00000001406A04AB: add     rsp, 8
 * 00000001406A04AF: call    loc_1406A04A2
 * 00000001406A04B4: add     rsp, 8
 * 00000001406A04B8: call    loc_1406A04AB
 * 00000001406A04BD: add     rsp, 8
 * 00000001406A04C1: call    loc_1406A04B4
 * 00000001406A04C6: add     rsp, 8
 * 00000001406A04CA: call    loc_1406A04BD
 * 00000001406A04CF: add     rsp, 8
 * 00000001406A04D3: call    loc_1406A04C6
 * 00000001406A04D8: add     rsp, 8
 * 00000001406A04DC: call    loc_1406A04CF
 * 00000001406A04E1: add     rsp, 8
 * 00000001406A04E5: call    loc_1406A04D8
 * 00000001406A04EA: add     rsp, 8
 * 00000001406A04EE: call    loc_1406A04E1
 * 00000001406A04F3: add     rsp, 8
 * 00000001406A04F7: call    loc_1406A04EA
 * 00000001406A04FC: add     rsp, 8
 * 00000001406A0500: call    loc_1406A04F3
 * 00000001406A0505: add     rsp, 8
 * 00000001406A0509: call    loc_1406A04FC
 * 00000001406A050E: add     rsp, 8
 * 00000001406A0512: call    loc_1406A0505
 * 00000001406A0517: add     rsp, 8
 * 00000001406A051B: call    loc_1406A050E
 * 00000001406A0520: add     rsp, 8
 * 00000001406A0524: call    loc_1406A0517
 * 00000001406A0529: add     rsp, 8
 * 00000001406A052D: call    loc_1406A0520
 * 00000001406A0532: add     rsp, 8
 * 00000001406A0536: call    loc_1406A0529
 * 00000001406A053B: add     rsp, 8
 * 00000001406A053F: call    loc_1406A0532
 * 00000001406A0544: add     rsp, 8
 * 00000001406A0548: call    loc_1406A053B
 * 00000001406A054D: add     rsp, 8
 * 00000001406A0551: mov     eax, 0DADAh
 * 00000001406A0556: test    byte ptr gs:85Ch, 8
 * 00000001406A055F: jz      short loc_1406A0568
 * 00000001406A0561: mov     al, 20h ; ' '
 * 00000001406A0563: incsspq rax
 * 00000001406A0568: test    word ptr gs:858h, 100h
 * 00000001406A0573: jz      short loc_1406A0581
 * 00000001406A0575: xor     eax, eax
 * 00000001406A0577: xor     edx, edx
 * 00000001406A0579: mov     ecx, 1
 * 00000001406A057E: div     rcx
 * 00000001406A0581: mov     rcx, r9
 * 00000001406A0584: xor     eax, eax
 * 00000001406A0586: xor     edx, edx
 * 00000001406A0588: mov     r8, [rbp+100h]
 * 00000001406A058F: mov     r9, [rbp+0D8h]
 * 00000001406A0596: pxor    xmm0, xmm0
 * 00000001406A059A: pxor    xmm1, xmm1
 * 00000001406A059E: pxor    xmm2, xmm2
 * 00000001406A05A2: pxor    xmm3, xmm3
 * 00000001406A05A6: pxor    xmm4, xmm4
 * 00000001406A05AA: pxor    xmm5, xmm5
 * 00000001406A05AE: mov     r11, [rbp+0F8h]
 * 00000001406A05B5: xor     ebx, ebx
 * 00000001406A05B7: test    cs:KiKvaShadow, 1
 * 00000001406A05BE: jnz     KiKernelSysretExit
 * 00000001406A05C4: mov     rbp, r9
 * 00000001406A05C7: mov     rsp, r8
 * 00000001406A05CA: xor     r9, r9
 * 00000001406A05CD: rdsspq  r9
 * 00000001406A05D2: test    r9, r9
 * 00000001406A05D5: jz      short loc_1406A05DF
 * 00000001406A05D7: clrssbsy qword ptr [r9]
 * 00000001406A05DC: xor     r9, r9
 * 00000001406A05DF: test    word ptr gs:858h, 200h
 * 00000001406A05EA: jz      short loc_1406A05F5
 * 00000001406A05EC: verw    word ptr gs:0B02Ah
 * 00000001406A05F5: swapgs
 * 00000001406A05F8: sysret
 * 00000001406A05FB: call    KiRestoreDebugRegisterState
 * 00000001406A0600: mov     r10, cs:qword_140FC64A0
 * 00000001406A0607: mov     r9, [rbx+0B8h]
 * 00000001406A060E: mov     r9, [r9+168h]
 * 00000001406A0615: or      r9, r9
 * 00000001406A0618: jnz     loc_1406A039C
 * 00000001406A061E: xchg    r9, r10
 * 00000001406A0621: jmp     loc_1406A039C
 * 00000001406A0626: lea     rbp, [rsp+138h+var_B8]
 * 00000001406A062E: mov     word ptr [rbp+0F0h], 33h ; '3'
 * 00000001406A0637: mov     rax, cs:qword_140FC64A0
 * 00000001406A063E: mov     [rbp+0E8h], rax
 * 00000001406A0645: lea     rcx, KiSystemServiceExit
 * 00000001406A064C: jmp     rcx
 * 00000001406A0652: retn
 */
