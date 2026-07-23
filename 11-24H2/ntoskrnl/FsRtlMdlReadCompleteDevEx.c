/*
 * XREFs of FsRtlMdlReadCompleteDevEx @ 0x140BC3010
 * Callers:
 *     KiDecodeMcaFault @ 0x1405059B0 (KiDecodeMcaFault.c)
 *     sub_140516920 @ 0x140516920 (sub_140516920.c)
 *     FsRtlUninitializeSmallMcb @ 0x140BDC800 (FsRtlUninitializeSmallMcb.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     sub_140516B3C @ 0x140516B3C (sub_140516B3C.c)
 *     sub_140516C24 @ 0x140516C24 (sub_140516C24.c)
 *     sub_140517D28 @ 0x140517D28 (sub_140517D28.c)
 *     sub_140BD80B0 @ 0x140BD80B0 (sub_140BD80B0.c)
 *     sub_140BD9AF8 @ 0x140BD9AF8 (sub_140BD9AF8.c)
 *     sub_140BDA384 @ 0x140BDA384 (sub_140BDA384.c)
 *     sub_140BDA4C8 @ 0x140BDA4C8 (sub_140BDA4C8.c)
 *     sub_140BDA680 @ 0x140BDA680 (sub_140BDA680.c)
 *     sub_140BDAD30 @ 0x140BDAD30 (sub_140BDAD30.c)
 *     KiGetGdtIdt @ 0x140BDC690 (KiGetGdtIdt.c)
 *     KiGetLdtr @ 0x140BDC6A0 (KiGetLdtr.c)
 *     KiGetSs @ 0x140BDC6B0 (KiGetSs.c)
 *     KiGetTr @ 0x140BDC6C0 (KiGetTr.c)
 *     KiErrata361Present @ 0x140BDC6D0 (KiErrata361Present.c)
 *     KiErrataSkx55Present @ 0x140BDC6F0 (KiErrataSkx55Present.c)
 *     KiErrata704Present @ 0x140BDC700 (KiErrata704Present.c)
 *     SdbpCheckDll @ 0x140BDC7B0 (SdbpCheckDll.c)
 *     KeGuardDispatchICall @ 0x140BDCA60 (KeGuardDispatchICall.c)
 *     KeGuardCheckICall @ 0x140BDCA70 (KeGuardCheckICall.c)
 *     RtlInitMinimalBarrier @ 0x140BDCBD4 (RtlInitMinimalBarrier.c)
 *     sub_140BE196C @ 0x140BE196C (sub_140BE196C.c)
 */

/*
 * Hex-Rays decompilation failed for FsRtlMdlReadCompleteDevEx @ 0x140BC3010
 * Reason: Hex-Rays returned no pseudocode for 0x140BC3010
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140BC3010: mov     [rsp-8+arg_0], rcx
 * 0000000140BC3015: push    rbp
 * 0000000140BC3016: push    rbx
 * 0000000140BC3017: push    rsi
 * 0000000140BC3018: push    rdi
 * 0000000140BC3019: push    r12
 * 0000000140BC301B: push    r13
 * 0000000140BC301D: push    r14
 * 0000000140BC301F: push    r15
 * 0000000140BC3021: lea     rbp, [rsp-898h]
 * 0000000140BC3029: sub     rsp, 998h
 * 0000000140BC3030: mov     eax, [rcx+9D8h]
 * 0000000140BC3036: xor     r9d, r9d
 * 0000000140BC3039: mov     r13, rcx
 * 0000000140BC303C: mov     edi, 0FFFFFFF8h
 * 0000000140BC3041: mov     ecx, 88000h
 * 0000000140BC3046: mov     r11d, 0FFFFFFFFh
 * 0000000140BC304C: and     eax, ecx
 * 0000000140BC304E: mov     r10d, 12Fh
 * 0000000140BC3054: lea     r14d, [r9+1]
 * 0000000140BC3058: cmp     eax, ecx
 * 0000000140BC305A: jz      loc_140BC3115
 * 0000000140BC3060: mov     rdx, [r13+900h]
 * 0000000140BC3067: lea     ecx, [r10+1]
 * 0000000140BC306B: mov     rax, rdx
 * 0000000140BC306E: lea     r8d, [r9+26h]
 * 0000000140BC3072: mov     [rax], r9
 * 0000000140BC3075: add     ecx, edi
 * 0000000140BC3077: add     rax, 8
 * 0000000140BC307B: sub     r8, r14
 * 0000000140BC307E: jnz     short loc_140BC3072
 * 0000000140BC3080: test    ecx, ecx
 * 0000000140BC3082: jz      short loc_140BC308F
 * 0000000140BC3084: mov     [rax], r9b
 * 0000000140BC3087: add     rax, r14
 * 0000000140BC308A: add     ecx, r11d
 * 0000000140BC308D: jnz     short loc_140BC3084
 * 0000000140BC308F: movups  xmm0, xmmword ptr [r13+868h]
 * 0000000140BC3097: lea     rax, [r13+898h]
 * 0000000140BC309E: mov     rcx, rax
 * 0000000140BC30A1: movdqu  xmmword ptr [rdx+10h], xmm0
 * 0000000140BC30A6: shr     rcx, 10h
 * 0000000140BC30AA: movups  xmm1, xmmword ptr [r13+878h]
 * 0000000140BC30B2: movdqu  xmmword ptr [rdx+20h], xmm1
 * 0000000140BC30B7: movups  xmm0, xmmword ptr [r13+888h]
 * 0000000140BC30BF: movdqu  xmmword ptr [rdx+120h], xmm0
 * 0000000140BC30C7: mov     [rbp+152h], rdx
 * 0000000140BC30CE: mov     word ptr [rbp+8D0h+var_780], r10w
 * 0000000140BC30D6: mov     [rdx+10h], ax
 * 0000000140BC30DA: shr     rax, 20h
 * 0000000140BC30DE: mov     [rdx+16h], cx
 * 0000000140BC30E2: mov     [rdx+18h], eax
 * 0000000140BC30E5: cli
 * 0000000140BC30E6: test    dword ptr [r13+9D8h], 40000000h
 * 0000000140BC30F1: jz      short loc_140BC30FB
 * 0000000140BC30F3: xor     eax, eax
 * 0000000140BC30F5: mov     dr7, rax
 * 0000000140BC30F8: sti
 * 0000000140BC30F9: jmp     short loc_140BC3117
 * 0000000140BC30FB: sidt    fword ptr [rbp+8D0h+var_698]
 * 0000000140BC3102: lidt    fword ptr [rbp+8D0h+var_780]
 * 0000000140BC3109: mov     dr7, r9
 * 0000000140BC310D: lidt    fword ptr [rbp+8D0h+var_698]
 * 0000000140BC3114: sti
 * 0000000140BC3115: xor     eax, eax
 * 0000000140BC3117: test    dword ptr [r13+9DCh], 100h
 * 0000000140BC3122: mov     [rbp+8D0h+var_8D0], rax
 * 0000000140BC3126: jz      short loc_140BC313E
 * 0000000140BC3128: mov     rax, [rbp+8D8h]
 * 0000000140BC312F: mov     [rbp+8D0h+var_8D0], rax
 * 0000000140BC3133: xor     eax, eax
 * 0000000140BC3135: mov     [rbp+8D8h], rax
 * 0000000140BC313C: jmp     short loc_140BC3140
 * 0000000140BC313E: xor     eax, eax
 * 0000000140BC3140: mov     r15d, 20h ; ' '
 * 0000000140BC3146: mov     [r13+848h], eax
 * 0000000140BC314D: xor     esi, esi
 * 0000000140BC314F: mov     rbx, 7010008004002001h
 * 0000000140BC3159: test    dword ptr [r13+9D8h], 20000000h
 * 0000000140BC3164: lea     r12d, [r15-1Ch]
 * 0000000140BC3168: jz      short loc_140BC3177
 * 0000000140BC316A: cmp     [r13+0AC0h], rsi
 * 0000000140BC3171: jnz     loc_140BC34BA
 * 0000000140BC3177: mov     r14, [r13+7D8h]
 * 0000000140BC317E: lea     rbx, [r13+7B8h]
 * 0000000140BC3185: mov     [rbp+8D0h+arg_8], r14
 * 0000000140BC318C: lea     rdx, [rbp+8D0h+var_148]
 * 0000000140BC3193: mov     rcx, rbx
 * 0000000140BC3196: mov     r8d, r15d
 * 0000000140BC3199: mov     r9, r12
 * 0000000140BC319C: mov     r10d, 1
 * 0000000140BC31A2: mov     rax, [rcx]
 * 0000000140BC31A5: add     r8d, edi
 * 0000000140BC31A8: mov     [rdx], rax
 * 0000000140BC31AB: add     rcx, 8
 * 0000000140BC31AF: add     rdx, 8
 * 0000000140BC31B3: sub     r9, r10
 * 0000000140BC31B6: jnz     short loc_140BC31A2
 * 0000000140BC31B8: test    r8d, r8d
 * 0000000140BC31BB: jz      short loc_140BC31CC
 * 0000000140BC31BD: mov     al, [rcx]
 * 0000000140BC31BF: add     rcx, r10
 * 0000000140BC31C2: mov     [rdx], al
 * 0000000140BC31C4: add     rdx, r10
 * 0000000140BC31C7: add     r8d, r11d
 * 0000000140BC31CA: jnz     short loc_140BC31BD
 * 0000000140BC31CC: mov     [r13+7D8h], rsi
 * 0000000140BC31D3: mov     ecx, r15d
 * 0000000140BC31D6: mov     [r13+848h], esi
 * 0000000140BC31DD: mov     rax, rbx
 * 0000000140BC31E0: mov     rdx, r12
 * 0000000140BC31E3: mov     [rax], rsi
 * 0000000140BC31E6: add     ecx, edi
 * 0000000140BC31E8: add     rax, 8
 * 0000000140BC31EC: sub     rdx, r10
 * 0000000140BC31EF: jnz     short loc_140BC31E3
 * 0000000140BC31F1: test    ecx, ecx
 * 0000000140BC31F3: jz      short loc_140BC3200
 * 0000000140BC31F5: mov     [rax], sil
 * 0000000140BC31F8: add     rax, r10
 * 0000000140BC31FB: add     ecx, r11d
 * 0000000140BC31FE: jnz     short loc_140BC31F5
 * 0000000140BC3200: mov     r10d, [r13+804h]
 * 0000000140BC3207: mov     r9, r13
 * 0000000140BC320A: add     [r13+848h], r10d
 * 0000000140BC3211: mov     rax, r13
 * 0000000140BC3214: mov     r11d, [r13+834h]
 * 0000000140BC321B: mov     rsi, [r13+838h]
 * 0000000140BC3222: lea     rcx, [r10+r13]
 * 0000000140BC3226: cmp     r13, rcx
 * 0000000140BC3229: jnb     short loc_140BC323B
 * 0000000140BC322B: mov     edx, 40h ; '@'
 * 0000000140BC3230: prefetchnta byte ptr [rax]
 * 0000000140BC3233: add     rax, rdx
 * 0000000140BC3236: cmp     rax, rcx
 * 0000000140BC3239: jb      short loc_140BC3230
 * 0000000140BC323B: mov     edi, r10d
 * 0000000140BC323E: mov     r8, rsi
 * 0000000140BC3241: shr     edi, 7
 * 0000000140BC3244: mov     edx, 1
 * 0000000140BC3249: test    edi, edi
 * 0000000140BC324B: jz      short loc_140BC32C0
 * 0000000140BC324D: mov     rbx, 7010008004002001h
 * 0000000140BC3257: mov     r14d, 0FFFFFFFFh
 * 0000000140BC325D: mov     eax, 8
 * 0000000140BC3262: xor     r8, [r9]
 * 0000000140BC3265: mov     ecx, r11d
 * 0000000140BC3268: rol     r8, cl
 * 0000000140BC326B: xor     r8, [r9+8]
 * 0000000140BC326F: add     r9, 10h
 * 0000000140BC3273: rol     r8, cl
 * 0000000140BC3276: sub     rax, rdx
 * 0000000140BC3279: jnz     short loc_140BC3262
 * 0000000140BC327B: mov     rcx, r9
 * 0000000140BC327E: sub     rcx, r13
 * 0000000140BC3281: xor     rcx, rsi
 * 0000000140BC3284: mov     rax, rcx
 * 0000000140BC3287: rol     rax, 11h
 * 0000000140BC328B: xor     rcx, rax
 * 0000000140BC328E: mov     rax, rbx
 * 0000000140BC3291: mul     rcx
 * 0000000140BC3294: mov     [rbp+8D0h+var_3B8], rdx
 * 0000000140BC329B: xor     edx, eax
 * 0000000140BC329D: xor     r11d, edx
 * 0000000140BC32A0: mov     edx, 1
 * 0000000140BC32A5: and     r11d, 3Fh
 * 0000000140BC32A9: cmovz   r11d, edx
 * 0000000140BC32AD: add     edi, r14d
 * 0000000140BC32B0: jnz     short loc_140BC325D
 * 0000000140BC32B2: mov     r14, [rbp+8D0h+arg_8]
 * 0000000140BC32B9: lea     rbx, [r13+7B8h]
 * 0000000140BC32C0: and     r10d, 7Fh
 * 0000000140BC32C4: cmp     r10d, 8
 * 0000000140BC32C8: jb      short loc_140BC32E7
 * 0000000140BC32CA: mov     eax, r10d
 * 0000000140BC32CD: shr     rax, 3
 * 0000000140BC32D1: xor     r8, [r9]
 * 0000000140BC32D4: mov     ecx, r11d
 * 0000000140BC32D7: rol     r8, cl
 * 0000000140BC32DA: add     r9, 8
 * 0000000140BC32DE: add     r10d, 0FFFFFFF8h
 * 0000000140BC32E2: sub     rax, rdx
 * 0000000140BC32E5: jnz     short loc_140BC32D1
 * 0000000140BC32E7: xor     esi, esi
 * 0000000140BC32E9: test    r10d, r10d
 * 0000000140BC32EC: jz      short loc_140BC3310
 * 0000000140BC32EE: mov     r13d, 0FFFFFFFFh
 * 0000000140BC32F4: movzx   eax, byte ptr [r9]
 * 0000000140BC32F8: mov     ecx, r11d
 * 0000000140BC32FB: xor     r8, rax
 * 0000000140BC32FE: add     r9, rdx
 * 0000000140BC3301: rol     r8, cl
 * 0000000140BC3304: add     r10d, r13d
 * 0000000140BC3307: jnz     short loc_140BC32F4
 * 0000000140BC3309: mov     r13, [rbp+8D0h+arg_0]
 * 0000000140BC3310: mov     [r13+7D8h], r14
 * 0000000140BC3317: lea     rcx, [rbp+8D0h+var_148]
 * 0000000140BC331E: mov     r14d, 1
 * 0000000140BC3324: mov     edx, r15d
 * 0000000140BC3327: mov     r9, r12
 * 0000000140BC332A: mov     rax, [rcx]
 * 0000000140BC332D: add     edx, 0FFFFFFF8h
 * 0000000140BC3330: mov     [rbx], rax
 * 0000000140BC3333: add     rcx, 8
 * 0000000140BC3337: add     rbx, 8
 * 0000000140BC333B: sub     r9, r14
 * 0000000140BC333E: jnz     short loc_140BC332A
 * 0000000140BC3340: test    edx, edx
 * 0000000140BC3342: jz      short loc_140BC3359
 * 0000000140BC3344: mov     r11d, 0FFFFFFFFh
 * 0000000140BC334A: mov     al, [rcx]
 * 0000000140BC334C: add     rcx, r14
 * 0000000140BC334F: mov     [rbx], al
 * 0000000140BC3351: add     rbx, r14
 * 0000000140BC3354: add     edx, r11d
 * 0000000140BC3357: jnz     short loc_140BC334A
 * 0000000140BC3359: cmp     [r13+7D8h], r8
 * 0000000140BC3360: jz      loc_140BC34B0
 * 0000000140BC3366: mov     ecx, [r13+804h]
 * 0000000140BC336D: mov     rax, [r13+588h]
 * 0000000140BC3374: mov     [rax], r13
 * 0000000140BC3377: mov     [rax+10h], ecx
 * 0000000140BC337A: mov     rcx, [r13+7D8h]
 * 0000000140BC3381: cmp     [r13+918h], esi
 * 0000000140BC3388: jnz     loc_140BC34B0
 * 0000000140BC338E: mov     rax, [r13+588h]
 * 0000000140BC3395: xor     rcx, r8
 * 0000000140BC3398: mov     [rax+18h], rcx
 * 0000000140BC339C: cmp     [r13+918h], esi
 * 0000000140BC33A3: jnz     loc_140BC34B0
 * 0000000140BC33A9: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC33B3: add     rax, r13
 * 0000000140BC33B6: mov     [r13+920h], rax
 * 0000000140BC33BD: mov     [r13+928h], rsi
 * 0000000140BC33C4: mov     qword ptr [r13+930h], 101h
 * 0000000140BC33CF: mov     [r13+938h], r8
 * 0000000140BC33D6: mov     [r13+918h], r14d
 * 0000000140BC33DD: mov     ecx, [r13+9D8h]
 * 0000000140BC33E4: bt      ecx, 1Dh
 * 0000000140BC33E8: jb      loc_140BC34B0
 * 0000000140BC33EE: test    dword ptr [r13+9DCh], 200000h
 * 0000000140BC33F9: jz      loc_140BC34B0
 * 0000000140BC33FF: test    r14b, cl
 * 0000000140BC3402: jz      loc_140BC34B0
 * 0000000140BC3408: mov     ecx, [r13+0A74h]
 * 0000000140BC340F: mov     eax, [r13+804h]
 * 0000000140BC3416: mov     r10, [r13+838h]
 * 0000000140BC341D: sub     eax, ecx
 * 0000000140BC341F: mov     r8, [r13+0A78h]
 * 0000000140BC3426: lea     rdx, [rcx+r13]
 * 0000000140BC342A: mov     ecx, eax
 * 0000000140BC342C: shr     rcx, 3
 * 0000000140BC3430: lea     r9, [rdx+rcx*8]
 * 0000000140BC3434: jmp     short loc_140BC3457
 * 0000000140BC3436: xor     [rdx], r8
 * 0000000140BC3439: mov     rax, [rdx]
 * 0000000140BC343C: movzx   ecx, r8b
 * 0000000140BC3440: xor     rax, r10
 * 0000000140BC3443: and     ecx, 3Fh
 * 0000000140BC3446: ror     r8, cl
 * 0000000140BC3449: add     r8, rax
 * 0000000140BC344C: xor     r8, 0EFAh
 * 0000000140BC3453: add     rdx, 8
 * 0000000140BC3457: cmp     rdx, r9
 * 0000000140BC345A: jnz     short loc_140BC3436
 * 0000000140BC345C: btr     dword ptr [r13+9DCh], 15h
 * 0000000140BC3465: cmp     r8, [r13+0A80h]
 * 0000000140BC346C: jz      short loc_140BC34B0
 * 0000000140BC346E: mov     ecx, [r13+804h]
 * 0000000140BC3475: mov     rax, [r13+588h]
 * 0000000140BC347C: mov     [rax], r13
 * 0000000140BC347F: mov     [rax+10h], ecx
 * 0000000140BC3482: mov     rcx, [r13+0A80h]
 * 0000000140BC3489: cmp     [r13+918h], esi
 * 0000000140BC3490: jnz     short loc_140BC34A0
 * 0000000140BC3492: mov     rax, [r13+588h]
 * 0000000140BC3499: xor     rcx, r8
 * 0000000140BC349C: mov     [rax+18h], rcx
 * 0000000140BC34A0: xor     edx, edx
 * 0000000140BC34A2: mov     r9d, 100h
 * 0000000140BC34A8: mov     rcx, r13
 * 0000000140BC34AB: call    sub_140BDA384
 * 0000000140BC34B0: mov     rbx, 7010008004002001h
 * 0000000140BC34BA: mov     r8d, [r13+9D8h]
 * 0000000140BC34C1: mov     ecx, 2
 * 0000000140BC34C6: or      r8d, ecx
 * 0000000140BC34C9: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC34D0: mov     [r13+9D8h], r8d
 * 0000000140BC34D7: mov     r9, 0ABCC77118461CEFDh
 * 0000000140BC34E1: add     [r13+854h], r14d
 * 0000000140BC34E8: test    r12b, r8b
 * 0000000140BC34EB: jz      loc_140BC39AC
 * 0000000140BC34F1: bt      r8d, 16h
 * 0000000140BC34F6: jb      loc_140BC39AC
 * 0000000140BC34FC: mov     r10, [r13+0AB8h]
 * 0000000140BC3503: mov     eax, [r13+9DCh]
 * 0000000140BC350A: mov     esi, [r13+804h]
 * 0000000140BC3511: mov     r11, [r13+0A40h]
 * 0000000140BC3518: mov     r15d, [r13+828h]
 * 0000000140BC351F: mov     [rbp+8D0h+arg_8], r10
 * 0000000140BC3526: test    cl, al
 * 0000000140BC3528: jz      short loc_140BC3531
 * 0000000140BC352A: mov     r11, [r13+5D0h]
 * 0000000140BC3531: mov     rax, [r13+2C8h]
 * 0000000140BC3538: mov     r12, [r13+170h]
 * 0000000140BC353F: mov     [rbp+8D0h+var_940], rax
 * 0000000140BC3543: mov     rax, [r13+340h]
 * 0000000140BC354A: mov     [rsp+9D0h+var_968], rax
 * 0000000140BC354F: mov     [rsp+9D0h+var_978], r12
 * 0000000140BC3554: rdtsc
 * 0000000140BC3556: shl     rdx, 20h
 * 0000000140BC355A: or      rax, rdx
 * 0000000140BC355D: mov     rcx, rax
 * 0000000140BC3560: ror     rax, 3
 * 0000000140BC3564: xor     rcx, rax
 * 0000000140BC3567: mov     rax, rbx
 * 0000000140BC356A: mul     rcx
 * 0000000140BC356D: mov     rcx, rdx
 * 0000000140BC3570: mov     [rbp+8D0h+var_3A0], rdx
 * 0000000140BC3577: xor     rcx, rax
 * 0000000140BC357A: mov     rax, r9
 * 0000000140BC357D: mul     rcx
 * 0000000140BC3580: mov     r9, rdi
 * 0000000140BC3583: shr     rdx, 1Ah
 * 0000000140BC3587: imul    rax, rdx, 5F5E100h
 * 0000000140BC358E: sub     rcx, rax
 * 0000000140BC3591: sub     r9, rcx
 * 0000000140BC3594: mov     [rbp+8D0h+var_840], r9
 * 0000000140BC359B: bt      r8d, 19h
 * 0000000140BC35A0: jnb     loc_140BC363C
 * 0000000140BC35A6: rdtsc
 * 0000000140BC35A8: shl     rdx, 20h
 * 0000000140BC35AC: mov     r13, 0CCCCCCCCCCCCCCCDh
 * 0000000140BC35B6: or      rax, rdx
 * 0000000140BC35B9: mov     rcx, rax
 * 0000000140BC35BC: ror     rax, 3
 * 0000000140BC35C0: xor     rcx, rax
 * 0000000140BC35C3: mov     rax, rbx
 * 0000000140BC35C6: mul     rcx
 * 0000000140BC35C9: mov     rcx, rdx
 * 0000000140BC35CC: mov     [rbp+8D0h+var_398], rdx
 * 0000000140BC35D3: xor     rcx, rax
 * 0000000140BC35D6: mov     rax, r13
 * 0000000140BC35D9: mul     rcx
 * 0000000140BC35DC: shr     rdx, 3
 * 0000000140BC35E0: lea     rax, [rdx+rdx*4]
 * 0000000140BC35E4: add     rax, rax
 * 0000000140BC35E7: sub     rcx, rax
 * 0000000140BC35EA: mov     eax, 2
 * 0000000140BC35EF: cmp     rcx, rax
 * 0000000140BC35F2: jnb     short loc_140BC363C
 * 0000000140BC35F4: rdtsc
 * 0000000140BC35F6: shl     rdx, 20h
 * 0000000140BC35FA: or      rax, rdx
 * 0000000140BC35FD: mov     rcx, rax
 * 0000000140BC3600: ror     rax, 3
 * 0000000140BC3604: xor     rcx, rax
 * 0000000140BC3607: mov     rax, rbx
 * 0000000140BC360A: mul     rcx
 * 0000000140BC360D: mov     rcx, rdx
 * 0000000140BC3610: mov     [rbp+8D0h+var_390], rdx
 * 0000000140BC3617: xor     rcx, rax
 * 0000000140BC361A: mov     rax, r13
 * 0000000140BC361D: mul     rcx
 * 0000000140BC3620: shr     rdx, 3
 * 0000000140BC3624: lea     rax, [rdx+rdx*4]
 * 0000000140BC3628: add     rax, rax
 * 0000000140BC362B: sub     rcx, rax
 * 0000000140BC362E: add     rcx, r14
 * 0000000140BC3631: imul    rcx, r9
 * 0000000140BC3635: mov     [rbp+8D0h+var_840], rcx
 * 0000000140BC363C: xor     r9d, r9d
 * 0000000140BC363F: mov     ebx, r9d
 * 0000000140BC3642: mov     r14d, r9d
 * 0000000140BC3645: lea     eax, [r9+1]
 * 0000000140BC3649: test    al, r8b
 * 0000000140BC364C: lea     ecx, [rax+3Fh]
 * 0000000140BC364F: cmovz   esi, r15d
 * 0000000140BC3653: test    cl, r8b
 * 0000000140BC3656: jnz     short loc_140BC3660
 * 0000000140BC3658: mov     r13d, r9d
 * 0000000140BC365B: jmp     loc_140BC3739
 * 0000000140BC3660: mov     r13d, eax
 * 0000000140BC3663: rdtsc
 * 0000000140BC3665: shl     rdx, 20h
 * 0000000140BC3669: or      rax, rdx
 * 0000000140BC366C: mov     rcx, rax
 * 0000000140BC366F: ror     rax, 3
 * 0000000140BC3673: xor     rcx, rax
 * 0000000140BC3676: mov     rax, 7010008004002001h
 * 0000000140BC3680: mul     rcx
 * 0000000140BC3683: mov     ecx, 15Dh
 * 0000000140BC3688: mov     rbx, rdx
 * 0000000140BC368B: mov     [rbp+8D0h+var_388], rdx
 * 0000000140BC3692: mov     rdx, [rbp+8D0h+arg_0]
 * 0000000140BC3699: xor     rbx, rax
 * 0000000140BC369C: mov     r14, rbx
 * 0000000140BC369F: mov     r8, rbx
 * 0000000140BC36A2: xor     r14, rdx
 * 0000000140BC36A5: lea     rax, [rdx+0AE0h]
 * 0000000140BC36AC: xor     [rax], r8
 * 0000000140BC36AF: lea     rax, [rax-8]
 * 0000000140BC36B3: ror     r8, cl
 * 0000000140BC36B6: sub     ecx, r13d
 * 0000000140BC36B9: jnz     short loc_140BC36AC
 * 0000000140BC36BB: lea     r9, [r15-0AE8h]
 * 0000000140BC36C2: mov     r12, r15
 * 0000000140BC36C5: shr     r9, 3
 * 0000000140BC36C9: test    r9d, r9d
 * 0000000140BC36CC: jz      short loc_140BC370C
 * 0000000140BC36CE: movsxd  r10, r9d
 * 0000000140BC36D1: mov     rdi, r13
 * 0000000140BC36D4: add     r10, 15Ch
 * 0000000140BC36DB: lea     r10, [rdx+r10*8]
 * 0000000140BC36DF: mov     rdx, [r10]
 * 0000000140BC36E2: lea     rax, [r14+r14]
 * 0000000140BC36E6: mov     ecx, r9d
 * 0000000140BC36E9: lea     r10, [r10-8]
 * 0000000140BC36ED: ror     rdx, cl
 * 0000000140BC36F0: mov     r14, rdx
 * 0000000140BC36F3: xor     r14, rax
 * 0000000140BC36F6: sub     r9d, edi
 * 0000000140BC36F9: jnz     short loc_140BC36DF
 * 0000000140BC36FB: mov     r10, [rbp+8D0h+arg_8]
 * 0000000140BC3702: mov     r12, r15
 * 0000000140BC3705: mov     rdx, [rbp+8D0h+arg_0]
 * 0000000140BC370C: mov     ecx, esi
 * 0000000140BC370E: add     rdx, r12
 * 0000000140BC3711: sub     ecx, r15d
 * 0000000140BC3714: shr     ecx, 3
 * 0000000140BC3717: test    ecx, ecx
 * 0000000140BC3719: jz      short loc_140BC3734
 * 0000000140BC371B: lea     rdx, [rdx+rcx*8]
 * 0000000140BC371F: mov     rax, r13
 * 0000000140BC3722: add     rdx, 0FFFFFFFFFFFFFFF8h
 * 0000000140BC3726: xor     [rdx], r8
 * 0000000140BC3729: lea     rdx, [rdx-8]
 * 0000000140BC372D: ror     r8, cl
 * 0000000140BC3730: sub     ecx, eax
 * 0000000140BC3732: jnz     short loc_140BC3726
 * 0000000140BC3734: mov     r12, [rsp+9D0h+var_978]
 * 0000000140BC3739: test    r10, r10
 * 0000000140BC373C: jz      short loc_140BC3762
 * 0000000140BC373E: mov     rcx, [rbp+8D0h+arg_0]
 * 0000000140BC3745: lea     r8, [rbp+8D0h+var_840]
 * 0000000140BC374C: mov     rax, [rsp+9D0h+var_968]
 * 0000000140BC3751: mov     r9, r12
 * 0000000140BC3754: mov     edx, esi
 * 0000000140BC3756: mov     [rsp+9D0h+BugCheckParameter4], r10
 * 0000000140BC375B: call    KeGuardDispatchICall
 * 0000000140BC3760: jmp     short loc_140BC379A
 * 0000000140BC3762: xor     edx, edx
 * 0000000140BC3764: test    r11, r11
 * 0000000140BC3767: jnz     short loc_140BC377C
 * 0000000140BC3769: lea     r8, [rbp+8D0h+var_840]
 * 0000000140BC3770: xor     ecx, ecx
 * 0000000140BC3772: mov     rax, r12
 * 0000000140BC3775: call    KeGuardDispatchICall
 * 0000000140BC377A: jmp     short loc_140BC379A
 * 0000000140BC377C: lea     rax, [rbp+8D0h+var_840]
 * 0000000140BC3783: xor     r9d, r9d
 * 0000000140BC3786: mov     [rsp+9D0h+BugCheckParameter4], rax
 * 0000000140BC378B: xor     r8d, r8d
 * 0000000140BC378E: mov     rax, [rbp+8D0h+var_940]
 * 0000000140BC3792: mov     rcx, r11
 * 0000000140BC3795: call    KeGuardDispatchICall
 * 0000000140BC379A: xor     r12d, r12d
 * 0000000140BC379D: test    r13d, r13d
 * 0000000140BC37A0: mov     r13, [rbp+8D0h+arg_0]
 * 0000000140BC37A7: jz      loc_140BC39A0
 * 0000000140BC37AD: mov     r8, rbx
 * 0000000140BC37B0: lea     rax, [r13+0AE0h]
 * 0000000140BC37B7: xor     r8, r13
 * 0000000140BC37BA: lea     r10d, [r12+1]
 * 0000000140BC37BF: mov     ecx, 15Dh
 * 0000000140BC37C4: xor     [rax], rbx
 * 0000000140BC37C7: lea     rax, [rax-8]
 * 0000000140BC37CB: ror     rbx, cl
 * 0000000140BC37CE: sub     ecx, r10d
 * 0000000140BC37D1: jnz     short loc_140BC37C4
 * 0000000140BC37D3: lea     r9, [r15-0AE8h]
 * 0000000140BC37DA: mov     r11, r15
 * 0000000140BC37DD: shr     r9, 3
 * 0000000140BC37E1: test    r9d, r9d
 * 0000000140BC37E4: jz      short loc_140BC381B
 * 0000000140BC37E6: movsxd  rax, r9d
 * 0000000140BC37E9: lea     r10, [r13+0AE0h]
 * 0000000140BC37F0: lea     r11d, [rcx+1]
 * 0000000140BC37F4: lea     r10, [r10+rax*8]
 * 0000000140BC37F8: mov     rdx, [r10]
 * 0000000140BC37FB: lea     rax, [r8+r8]
 * 0000000140BC37FF: mov     ecx, r9d
 * 0000000140BC3802: lea     r10, [r10-8]
 * 0000000140BC3806: ror     rdx, cl
 * 0000000140BC3809: mov     r8, rdx
 * 0000000140BC380C: xor     r8, rax
 * 0000000140BC380F: sub     r9d, r11d
 * 0000000140BC3812: jnz     short loc_140BC37F8
 * 0000000140BC3814: mov     r11, r15
 * 0000000140BC3817: lea     r10d, [r9+1]
 * 0000000140BC381B: sub     esi, r15d
 * 0000000140BC381E: lea     rcx, [r11+r13]
 * 0000000140BC3822: shr     esi, 3
 * 0000000140BC3825: test    esi, esi
 * 0000000140BC3827: jz      short loc_140BC3843
 * 0000000140BC3829: mov     edx, esi
 * 0000000140BC382B: dec     rdx
 * 0000000140BC382E: lea     rdx, [rcx+rdx*8]
 * 0000000140BC3832: xor     [rdx], rbx
 * 0000000140BC3835: mov     ecx, esi
 * 0000000140BC3837: ror     rbx, cl
 * 0000000140BC383A: lea     rdx, [rdx-8]
 * 0000000140BC383E: sub     esi, r10d
 * 0000000140BC3841: jnz     short loc_140BC3832
 * 0000000140BC3843: cmp     r8, r14
 * 0000000140BC3846: jz      loc_140BC39A0
 * 0000000140BC384C: mov     rax, [r13+588h]
 * 0000000140BC3853: mov     ecx, [r13+804h]
 * 0000000140BC385A: mov     [rax], r13
 * 0000000140BC385D: mov     [rax+10h], ecx
 * 0000000140BC3860: cmp     [r13+918h], r12d
 * 0000000140BC3867: jnz     loc_140BC39A0
 * 0000000140BC386D: mov     rax, [r13+588h]
 * 0000000140BC3874: mov     rcx, r8
 * 0000000140BC3877: xor     rcx, r14
 * 0000000140BC387A: mov     [rax+18h], rcx
 * 0000000140BC387E: cmp     [r13+918h], r12d
 * 0000000140BC3885: jnz     loc_140BC39A0
 * 0000000140BC388B: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC3895: mov     r14d, 1
 * 0000000140BC389B: add     rax, r13
 * 0000000140BC389E: mov     [r13+920h], rax
 * 0000000140BC38A5: mov     [r13+928h], r12
 * 0000000140BC38AC: mov     qword ptr [r13+930h], 10Eh
 * 0000000140BC38B7: mov     [r13+938h], r8
 * 0000000140BC38BE: mov     [r13+918h], r14d
 * 0000000140BC38C5: mov     ecx, [r13+9D8h]
 * 0000000140BC38CC: bt      ecx, 1Dh
 * 0000000140BC38D0: jb      loc_140BC3998
 * 0000000140BC38D6: test    dword ptr [r13+9DCh], 200000h
 * 0000000140BC38E1: jz      loc_140BC3998
 * 0000000140BC38E7: test    r14b, cl
 * 0000000140BC38EA: jz      loc_140BC3998
 * 0000000140BC38F0: mov     ecx, [r13+0A74h]
 * 0000000140BC38F7: mov     eax, [r13+804h]
 * 0000000140BC38FE: mov     r10, [r13+838h]
 * 0000000140BC3905: sub     eax, ecx
 * 0000000140BC3907: mov     r8, [r13+0A78h]
 * 0000000140BC390E: lea     rdx, [rcx+r13]
 * 0000000140BC3912: mov     ecx, eax
 * 0000000140BC3914: shr     rcx, 3
 * 0000000140BC3918: lea     r9, [rdx+rcx*8]
 * 0000000140BC391C: jmp     short loc_140BC393F
 * 0000000140BC391E: xor     [rdx], r8
 * 0000000140BC3921: mov     rax, [rdx]
 * 0000000140BC3924: movzx   ecx, r8b
 * 0000000140BC3928: xor     rax, r10
 * 0000000140BC392B: and     ecx, 3Fh
 * 0000000140BC392E: ror     r8, cl
 * 0000000140BC3931: add     r8, rax
 * 0000000140BC3934: xor     r8, 0EFAh
 * 0000000140BC393B: add     rdx, 8
 * 0000000140BC393F: cmp     rdx, r9
 * 0000000140BC3942: jnz     short loc_140BC391E
 * 0000000140BC3944: btr     dword ptr [r13+9DCh], 15h
 * 0000000140BC394D: cmp     r8, [r13+0A80h]
 * 0000000140BC3954: jz      short loc_140BC3998
 * 0000000140BC3956: mov     ecx, [r13+804h]
 * 0000000140BC395D: mov     rax, [r13+588h]
 * 0000000140BC3964: mov     [rax], r13
 * 0000000140BC3967: mov     [rax+10h], ecx
 * 0000000140BC396A: mov     rcx, [r13+0A80h]
 * 0000000140BC3971: cmp     [r13+918h], r12d
 * 0000000140BC3978: jnz     short loc_140BC3988
 * 0000000140BC397A: mov     rax, [r13+588h]
 * 0000000140BC3981: xor     rcx, r8
 * 0000000140BC3984: mov     [rax+18h], rcx
 * 0000000140BC3988: xor     edx, edx
 * 0000000140BC398A: mov     r9d, 100h
 * 0000000140BC3990: mov     rcx, r13
 * 0000000140BC3993: call    sub_140BDA384
 * 0000000140BC3998: mov     r15d, 20h ; ' '
 * 0000000140BC399E: jmp     short loc_140BC39AF
 * 0000000140BC39A0: mov     r15d, 20h ; ' '
 * 0000000140BC39A6: lea     r14d, [r15-1Fh]
 * 0000000140BC39AA: jmp     short loc_140BC39AF
 * 0000000140BC39AC: xor     r12d, r12d
 * 0000000140BC39AF: mov     esi, [r13+0C4h]
 * 0000000140BC39B6: lea     rcx, [r13+630h]
 * 0000000140BC39BD: mov     [r13+0C4h], r12d
 * 0000000140BC39C4: mov     r9, r13
 * 0000000140BC39C7: add     dword ptr [r13+848h], 630h
 * 0000000140BC39D2: mov     rax, r13
 * 0000000140BC39D5: mov     r10d, [r13+834h]
 * 0000000140BC39DC: mov     rbx, [r13+838h]
 * 0000000140BC39E3: mov     dword ptr [rbp+8D0h+arg_8], esi
 * 0000000140BC39E9: cmp     r13, rcx
 * 0000000140BC39EC: jnb     short loc_140BC39FE
 * 0000000140BC39EE: mov     edx, 40h ; '@'
 * 0000000140BC39F3: prefetchnta byte ptr [rax]
 * 0000000140BC39F6: add     rax, rdx
 * 0000000140BC39F9: cmp     rax, rcx
 * 0000000140BC39FC: jb      short loc_140BC39F3
 * 0000000140BC39FE: mov     r8, rbx
 * 0000000140BC3A01: mov     edi, 0FFFFFFFFh
 * 0000000140BC3A06: mov     rsi, 7010008004002001h
 * 0000000140BC3A10: mov     r11d, 0Ch
 * 0000000140BC3A16: mov     eax, 8
 * 0000000140BC3A1B: xor     r8, [r9]
 * 0000000140BC3A1E: mov     ecx, r10d
 * 0000000140BC3A21: rol     r8, cl
 * 0000000140BC3A24: xor     r8, [r9+8]
 * 0000000140BC3A28: add     r9, 10h
 * 0000000140BC3A2C: rol     r8, cl
 * 0000000140BC3A2F: sub     rax, r14
 * 0000000140BC3A32: jnz     short loc_140BC3A1B
 * 0000000140BC3A34: mov     rcx, r9
 * 0000000140BC3A37: sub     rcx, r13
 * 0000000140BC3A3A: xor     rcx, rbx
 * 0000000140BC3A3D: mov     rax, rcx
 * 0000000140BC3A40: rol     rax, 11h
 * 0000000140BC3A44: xor     rcx, rax
 * 0000000140BC3A47: mov     rax, rsi
 * 0000000140BC3A4A: mul     rcx
 * 0000000140BC3A4D: mov     [rbp+8D0h+var_380], rdx
 * 0000000140BC3A54: xor     edx, eax
 * 0000000140BC3A56: xor     r10d, edx
 * 0000000140BC3A59: and     r10d, 3Fh
 * 0000000140BC3A5D: cmovz   r10d, r14d
 * 0000000140BC3A61: add     r11d, edi
 * 0000000140BC3A64: jnz     short loc_140BC3A16
 * 0000000140BC3A66: mov     esi, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BC3A6C: lea     r12d, [r11+6]
 * 0000000140BC3A70: mov     eax, r12d
 * 0000000140BC3A73: lea     edx, [r11+30h]
 * 0000000140BC3A77: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC3A7E: xor     r8, [r9]
 * 0000000140BC3A81: mov     ecx, r10d
 * 0000000140BC3A84: rol     r8, cl
 * 0000000140BC3A87: add     r9, 8
 * 0000000140BC3A8B: add     edx, 0FFFFFFF8h
 * 0000000140BC3A8E: sub     rax, r14
 * 0000000140BC3A91: jnz     short loc_140BC3A7E
 * 0000000140BC3A93: xor     r11d, r11d
 * 0000000140BC3A96: test    edx, edx
 * 0000000140BC3A98: jz      short loc_140BC3ABC
 * 0000000140BC3A9A: mov     r13d, 0FFFFFFFFh
 * 0000000140BC3AA0: movzx   eax, byte ptr [r9]
 * 0000000140BC3AA4: mov     ecx, r10d
 * 0000000140BC3AA7: xor     r8, rax
 * 0000000140BC3AAA: add     r9, r14
 * 0000000140BC3AAD: rol     r8, cl
 * 0000000140BC3AB0: add     edx, r13d
 * 0000000140BC3AB3: jnz     short loc_140BC3AA0
 * 0000000140BC3AB5: mov     r13, [rbp+8D0h+arg_0]
 * 0000000140BC3ABC: mov     [r13+0C4h], esi
 * 0000000140BC3AC3: cmp     [r13+0A68h], r8
 * 0000000140BC3ACA: jz      loc_140BC3C20
 * 0000000140BC3AD0: mov     rax, [r13+588h]
 * 0000000140BC3AD7: mov     ecx, [r13+804h]
 * 0000000140BC3ADE: mov     [rax], r13
 * 0000000140BC3AE1: mov     [rax+10h], ecx
 * 0000000140BC3AE4: mov     rax, [r13+0A68h]
 * 0000000140BC3AEB: cmp     [r13+918h], r11d
 * 0000000140BC3AF2: jnz     loc_140BC3C20
 * 0000000140BC3AF8: mov     rcx, r8
 * 0000000140BC3AFB: xor     rcx, rax
 * 0000000140BC3AFE: mov     rax, [r13+588h]
 * 0000000140BC3B05: mov     [rax+18h], rcx
 * 0000000140BC3B09: cmp     [r13+918h], r11d
 * 0000000140BC3B10: jnz     loc_140BC3C20
 * 0000000140BC3B16: mov     rbx, 0A3A03F5891C8B4E8h
 * 0000000140BC3B20: lea     rax, [rbx+r13]
 * 0000000140BC3B24: mov     [r13+920h], rax
 * 0000000140BC3B2B: mov     [r13+928h], r11
 * 0000000140BC3B32: mov     qword ptr [r13+930h], 109h
 * 0000000140BC3B3D: mov     [r13+938h], r8
 * 0000000140BC3B44: mov     [r13+918h], r14d
 * 0000000140BC3B4B: mov     ecx, [r13+9D8h]
 * 0000000140BC3B52: bt      ecx, 1Dh
 * 0000000140BC3B56: jb      loc_140BC3C2A
 * 0000000140BC3B5C: test    dword ptr [r13+9DCh], 200000h
 * 0000000140BC3B67: jz      loc_140BC3C2A
 * 0000000140BC3B6D: test    r14b, cl
 * 0000000140BC3B70: jz      loc_140BC3C2A
 * 0000000140BC3B76: mov     ecx, [r13+0A74h]
 * 0000000140BC3B7D: mov     eax, [r13+804h]
 * 0000000140BC3B84: mov     r10, [r13+838h]
 * 0000000140BC3B8B: sub     eax, ecx
 * 0000000140BC3B8D: mov     r8, [r13+0A78h]
 * 0000000140BC3B94: lea     rdx, [rcx+r13]
 * 0000000140BC3B98: mov     ecx, eax
 * 0000000140BC3B9A: shr     rcx, 3
 * 0000000140BC3B9E: lea     r9, [rdx+rcx*8]
 * 0000000140BC3BA2: jmp     short loc_140BC3BC5
 * 0000000140BC3BA4: xor     [rdx], r8
 * 0000000140BC3BA7: mov     rax, [rdx]
 * 0000000140BC3BAA: movzx   ecx, r8b
 * 0000000140BC3BAE: xor     rax, r10
 * 0000000140BC3BB1: and     ecx, 3Fh
 * 0000000140BC3BB4: ror     r8, cl
 * 0000000140BC3BB7: add     r8, rax
 * 0000000140BC3BBA: xor     r8, 0EFAh
 * 0000000140BC3BC1: add     rdx, 8
 * 0000000140BC3BC5: cmp     rdx, r9
 * 0000000140BC3BC8: jnz     short loc_140BC3BA4
 * 0000000140BC3BCA: btr     dword ptr [r13+9DCh], 15h
 * 0000000140BC3BD3: cmp     r8, [r13+0A80h]
 * 0000000140BC3BDA: jz      short loc_140BC3C2A
 * 0000000140BC3BDC: mov     ecx, [r13+804h]
 * 0000000140BC3BE3: mov     rax, [r13+588h]
 * 0000000140BC3BEA: mov     [rax], r13
 * 0000000140BC3BED: mov     [rax+10h], ecx
 * 0000000140BC3BF0: mov     rcx, [r13+0A80h]
 * 0000000140BC3BF7: cmp     [r13+918h], r11d
 * 0000000140BC3BFE: jnz     short loc_140BC3C0E
 * 0000000140BC3C00: mov     rax, [r13+588h]
 * 0000000140BC3C07: xor     rcx, r8
 * 0000000140BC3C0A: mov     [rax+18h], rcx
 * 0000000140BC3C0E: xor     edx, edx
 * 0000000140BC3C10: mov     r9d, 100h
 * 0000000140BC3C16: mov     rcx, r13
 * 0000000140BC3C19: call    sub_140BDA384
 * 0000000140BC3C1E: jmp     short loc_140BC3C2A
 * 0000000140BC3C20: mov     rbx, 0A3A03F5891C8B4E8h
 * 0000000140BC3C2A: mov     ecx, [r13+9D8h]
 * 0000000140BC3C31: bt      ecx, 1Dh
 * 0000000140BC3C35: jb      loc_140BC3D2D
 * 0000000140BC3C3B: test    dword ptr [r13+9DCh], 200000h
 * 0000000140BC3C46: jz      loc_140BC3D2D
 * 0000000140BC3C4C: test    r14b, cl
 * 0000000140BC3C4F: jz      loc_140BC3D2D
 * 0000000140BC3C55: mov     ecx, [r13+0A74h]
 * 0000000140BC3C5C: mov     eax, [r13+804h]
 * 0000000140BC3C63: mov     r10, [r13+838h]
 * 0000000140BC3C6A: sub     eax, ecx
 * 0000000140BC3C6C: mov     rdx, [r13+0A78h]
 * 0000000140BC3C73: lea     r8, [rcx+r13]
 * 0000000140BC3C77: mov     ecx, eax
 * 0000000140BC3C79: shr     rcx, 3
 * 0000000140BC3C7D: lea     r9, [r8+rcx*8]
 * 0000000140BC3C81: jmp     short loc_140BC3CA3
 * 0000000140BC3C83: xor     [r8], rdx
 * 0000000140BC3C86: mov     rax, [r8]
 * 0000000140BC3C89: movzx   ecx, dl
 * 0000000140BC3C8C: xor     rax, r10
 * 0000000140BC3C8F: and     ecx, 3Fh
 * 0000000140BC3C92: ror     rdx, cl
 * 0000000140BC3C95: add     rdx, rax
 * 0000000140BC3C98: xor     rdx, 0EFAh
 * 0000000140BC3C9F: add     r8, 8
 * 0000000140BC3CA3: cmp     r8, r9
 * 0000000140BC3CA6: jnz     short loc_140BC3C83
 * 0000000140BC3CA8: btr     dword ptr [r13+9DCh], 15h
 * 0000000140BC3CB1: xor     r10d, r10d
 * 0000000140BC3CB4: cmp     rdx, [r13+0A80h]
 * 0000000140BC3CBB: jz      short loc_140BC3D30
 * 0000000140BC3CBD: mov     ecx, [r13+804h]
 * 0000000140BC3CC4: mov     rax, [r13+588h]
 * 0000000140BC3CCB: mov     [rax], r13
 * 0000000140BC3CCE: mov     [rax+10h], ecx
 * 0000000140BC3CD1: mov     rcx, [r13+0A80h]
 * 0000000140BC3CD8: cmp     [r13+918h], r10d
 * 0000000140BC3CDF: jnz     short loc_140BC3D30
 * 0000000140BC3CE1: mov     rax, [r13+588h]
 * 0000000140BC3CE8: xor     rcx, rdx
 * 0000000140BC3CEB: mov     [rax+18h], rcx
 * 0000000140BC3CEF: cmp     [r13+918h], r10d
 * 0000000140BC3CF6: jnz     short loc_140BC3D30
 * 0000000140BC3CF8: lea     rax, [rbx+r13]
 * 0000000140BC3CFC: mov     rcx, r13
 * 0000000140BC3CFF: mov     [r13+920h], rax
 * 0000000140BC3D06: mov     [r13+928h], r10
 * 0000000140BC3D0D: mov     qword ptr [r13+930h], 100h
 * 0000000140BC3D18: mov     [r13+938h], rdx
 * 0000000140BC3D1F: xor     edx, edx
 * 0000000140BC3D21: mov     [r13+918h], r14d
 * 0000000140BC3D28: call    sub_140BDA4C8
 * 0000000140BC3D2D: xor     r10d, r10d
 * 0000000140BC3D30: test    dword ptr [r13+9D8h], 20000000h
 * 0000000140BC3D3B: mov     rsi, r13
 * 0000000140BC3D3E: mov     [rsp+9D0h+var_970], r13
 * 0000000140BC3D43: mov     rbx, r13
 * 0000000140BC3D46: jz      short loc_140BC3D52
 * 0000000140BC3D48: mov     [rsp+9D0h+var_970], r13
 * 0000000140BC3D4D: jmp     loc_140BC44F5
 * 0000000140BC3D52: mov     ecx, [r13+9B8h]
 * 0000000140BC3D59: test    ecx, ecx
 * 0000000140BC3D5B: jz      loc_140BC3F69
 * 0000000140BC3D61: cmp     ecx, 1
 * 0000000140BC3D64: jnz     loc_140BC44E7
 * 0000000140BC3D6A: mov     r13d, ecx
 * 0000000140BC3D6D: mov     rax, [rsi+610h]
 * 0000000140BC3D74: mov     rbx, rsi
 * 0000000140BC3D77: test    rax, rax
 * 0000000140BC3D7A: jz      loc_140BC44E7
 * 0000000140BC3D80: mov     rax, [rax]
 * 0000000140BC3D83: test    rax, rax
 * 0000000140BC3D86: jz      loc_140BC44E7
 * 0000000140BC3D8C: mov     rax, [rsi+610h]
 * 0000000140BC3D93: mov     r14, [rax]
 * 0000000140BC3D96: lock or [rsp+9D0h+var_9D0], r10d
 * 0000000140BC3D9B: mov     r10d, [r14+804h]
 * 0000000140BC3DA2: mov     r9, r14
 * 0000000140BC3DA5: mov     r11d, [r14+834h]
 * 0000000140BC3DAC: mov     rax, r14
 * 0000000140BC3DAF: mov     r15, [r14+838h]
 * 0000000140BC3DB6: lea     rcx, [r14+r10]
 * 0000000140BC3DBA: cmp     r14, rcx
 * 0000000140BC3DBD: jnb     short loc_140BC3DCF
 * 0000000140BC3DBF: mov     edx, 40h ; '@'
 * 0000000140BC3DC4: prefetchnta byte ptr [rax]
 * 0000000140BC3DC7: add     rax, rdx
 * 0000000140BC3DCA: cmp     rax, rcx
 * 0000000140BC3DCD: jb      short loc_140BC3DC4
 * 0000000140BC3DCF: mov     ebx, r10d
 * 0000000140BC3DD2: mov     r8, r15
 * 0000000140BC3DD5: shr     ebx, 7
 * 0000000140BC3DD8: mov     r12d, 0FFFFFFFFh
 * 0000000140BC3DDE: test    ebx, ebx
 * 0000000140BC3DE0: jz      short loc_140BC3E42
 * 0000000140BC3DE2: mov     rsi, 7010008004002001h
 * 0000000140BC3DEC: mov     eax, 8
 * 0000000140BC3DF1: xor     r8, [r9]
 * 0000000140BC3DF4: mov     ecx, r11d
 * 0000000140BC3DF7: rol     r8, cl
 * 0000000140BC3DFA: xor     r8, [r9+8]
 * 0000000140BC3DFE: add     r9, 10h
 * 0000000140BC3E02: rol     r8, cl
 * 0000000140BC3E05: sub     rax, r13
 * 0000000140BC3E08: jnz     short loc_140BC3DF1
 * 0000000140BC3E0A: mov     rcx, r9
 * 0000000140BC3E0D: sub     rcx, r14
 * 0000000140BC3E10: xor     rcx, r15
 * 0000000140BC3E13: mov     rax, rcx
 * 0000000140BC3E16: rol     rax, 11h
 * 0000000140BC3E1A: xor     rcx, rax
 * 0000000140BC3E1D: mov     rax, rsi
 * 0000000140BC3E20: mul     rcx
 * 0000000140BC3E23: xor     r11d, edx
 * 0000000140BC3E26: mov     [rbp+8D0h+var_370], rdx
 * 0000000140BC3E2D: xor     r11d, eax
 * 0000000140BC3E30: and     r11d, 3Fh
 * 0000000140BC3E34: cmovz   r11d, r13d
 * 0000000140BC3E38: add     ebx, r12d
 * 0000000140BC3E3B: jnz     short loc_140BC3DEC
 * 0000000140BC3E3D: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC3E42: and     r10d, 7Fh
 * 0000000140BC3E46: cmp     r10d, 8
 * 0000000140BC3E4A: jb      short loc_140BC3E69
 * 0000000140BC3E4C: mov     eax, r10d
 * 0000000140BC3E4F: shr     rax, 3
 * 0000000140BC3E53: xor     r8, [r9]
 * 0000000140BC3E56: mov     ecx, r11d
 * 0000000140BC3E59: rol     r8, cl
 * 0000000140BC3E5C: add     r9, 8
 * 0000000140BC3E60: add     r10d, 0FFFFFFF8h
 * 0000000140BC3E64: sub     rax, r13
 * 0000000140BC3E67: jnz     short loc_140BC3E53
 * 0000000140BC3E69: test    r10d, r10d
 * 0000000140BC3E6C: jz      short loc_140BC3E83
 * 0000000140BC3E6E: movzx   eax, byte ptr [r9]
 * 0000000140BC3E72: mov     ecx, r11d
 * 0000000140BC3E75: xor     r8, rax
 * 0000000140BC3E78: add     r9, r13
 * 0000000140BC3E7B: rol     r8, cl
 * 0000000140BC3E7E: add     r10d, r12d
 * 0000000140BC3E81: jnz     short loc_140BC3E6E
 * 0000000140BC3E83: mov     rax, [rsi+618h]
 * 0000000140BC3E8A: mov     r12d, [r14+804h]
 * 0000000140BC3E91: cmp     r8, [rax]
 * 0000000140BC3E94: jz      loc_140BC4206
 * 0000000140BC3E9A: mov     rax, [rsi+588h]
 * 0000000140BC3EA1: xor     r10d, r10d
 * 0000000140BC3EA4: mov     [rax], r14
 * 0000000140BC3EA7: mov     [rax+10h], r12d
 * 0000000140BC3EAB: mov     rax, [rsi+618h]
 * 0000000140BC3EB2: mov     rcx, [rax]
 * 0000000140BC3EB5: cmp     [rsi+918h], r10d
 * 0000000140BC3EBC: jnz     loc_140BC41FE
 * 0000000140BC3EC2: mov     rax, [rsi+588h]
 * 0000000140BC3EC9: xor     rcx, r8
 * 0000000140BC3ECC: mov     [rax+18h], rcx
 * 0000000140BC3ED0: cmp     [rsi+918h], r10d
 * 0000000140BC3ED7: jnz     loc_140BC41FE
 * 0000000140BC3EDD: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC3EE7: add     rax, rsi
 * 0000000140BC3EEA: mov     [rsi+920h], rax
 * 0000000140BC3EF1: mov     [rsi+928h], r10
 * 0000000140BC3EF8: mov     qword ptr [rsi+930h], 111h
 * 0000000140BC3F03: mov     [rsi+938h], r8
 * 0000000140BC3F0A: mov     [rsi+918h], r13d
 * 0000000140BC3F11: mov     ecx, [rsi+9D8h]
 * 0000000140BC3F17: bt      ecx, 1Dh
 * 0000000140BC3F1B: jb      loc_140BC41FE
 * 0000000140BC3F21: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC3F2B: jz      loc_140BC41FE
 * 0000000140BC3F31: test    r13b, cl
 * 0000000140BC3F34: jz      loc_140BC41FE
 * 0000000140BC3F3A: mov     ecx, [rsi+0A74h]
 * 0000000140BC3F40: mov     eax, [rsi+804h]
 * 0000000140BC3F46: mov     r10, [rsi+838h]
 * 0000000140BC3F4D: sub     eax, ecx
 * 0000000140BC3F4F: mov     r8, [rsi+0A78h]
 * 0000000140BC3F56: lea     rdx, [rcx+rsi]
 * 0000000140BC3F5A: mov     ecx, eax
 * 0000000140BC3F5C: shr     rcx, 3
 * 0000000140BC3F60: lea     r9, [rdx+rcx*8]
 * 0000000140BC3F64: jmp     loc_140BC41A6
 * 0000000140BC3F69: mov     r14, [r13+610h]
 * 0000000140BC3F70: test    r14, r14
 * 0000000140BC3F73: jz      loc_140BC44E7
 * 0000000140BC3F79: cmp     [r14], r10
 * 0000000140BC3F7C: jz      loc_140BC44E7
 * 0000000140BC3F82: mov     r12d, [r13+858h]
 * 0000000140BC3F89: cmp     r12d, 7
 * 0000000140BC3F8D: mov     rbx, [rbp+8D0h+arg_0]
 * 0000000140BC3F94: mov     r13d, [r13+804h]
 * 0000000140BC3F9B: cmovnz  r15d, r10d
 * 0000000140BC3F9F: mov     r8d, [rbx+944h]
 * 0000000140BC3FA6: lea     eax, [r13+30h]
 * 0000000140BC3FAA: cmp     eax, [rbx+0A64h]
 * 0000000140BC3FB0: jbe     loc_140BC409A
 * 0000000140BC3FB6: mov     edx, eax
 * 0000000140BC3FB8: mov     rcx, rbx
 * 0000000140BC3FBB: call    sub_140BD9AF8
 * 0000000140BC3FC0: xor     r10d, r10d
 * 0000000140BC3FC3: mov     [rsp+9D0h+var_970], rax
 * 0000000140BC3FC8: mov     rsi, rax
 * 0000000140BC3FCB: test    rax, rax
 * 0000000140BC3FCE: jz      loc_140BC44E7
 * 0000000140BC3FD4: mov     ecx, [rbx+9D8h]
 * 0000000140BC3FDA: lea     eax, [r10+2]
 * 0000000140BC3FDE: test    al, cl
 * 0000000140BC3FE0: jnz     loc_140BC4091
 * 0000000140BC3FE6: mov     eax, [rbx+804h]
 * 0000000140BC3FEC: lea     r11d, [r10+1]
 * 0000000140BC3FF0: mov     r9, [rbx+7E8h]
 * 0000000140BC3FF7: and     ecx, 10000000h
 * 0000000140BC3FFD: neg     ecx
 * 0000000140BC3FFF: mov     rcx, rbx
 * 0000000140BC4002: sbb     edx, edx
 * 0000000140BC4004: and     edx, [rbx+944h]
 * 0000000140BC400A: cmp     eax, 8
 * 0000000140BC400D: jb      short loc_140BC4025
 * 0000000140BC400F: mov     r8d, eax
 * 0000000140BC4012: shr     r8, 3
 * 0000000140BC4016: mov     [rcx], r10
 * 0000000140BC4019: add     eax, 0FFFFFFF8h
 * 0000000140BC401C: add     rcx, 8
 * 0000000140BC4020: sub     r8, r11
 * 0000000140BC4023: jnz     short loc_140BC4016
 * 0000000140BC4025: test    eax, eax
 * 0000000140BC4027: jz      short loc_140BC403A
 * 0000000140BC4029: mov     r8d, 0FFFFFFFFh
 * 0000000140BC402F: mov     [rcx], r10b
 * 0000000140BC4032: add     rcx, r11
 * 0000000140BC4035: add     eax, r8d
 * 0000000140BC4038: jnz     short loc_140BC402F
 * 0000000140BC403A: mov     ebx, [rsi+944h]
 * 0000000140BC4040: mov     [rsi+944h], edx
 * 0000000140BC4046: cmp     edx, 3
 * 0000000140BC4049: jz      short loc_140BC4079
 * 0000000140BC404B: test    dword ptr [rsi+9D8h], 8000000h
 * 0000000140BC4055: jnz     short loc_140BC4070
 * 0000000140BC4057: test    edx, edx
 * 0000000140BC4059: jz      short loc_140BC4070
 * 0000000140BC405B: mov     rax, [rsi+238h]
 * 0000000140BC4062: lea     rcx, [r9-8]
 * 0000000140BC4066: mov     rdx, [rcx]
 * 0000000140BC4069: call    KeGuardDispatchICall
 * 0000000140BC406E: jmp     short loc_140BC4088
 * 0000000140BC4070: mov     rax, [rsi+108h]
 * 0000000140BC4077: jmp     short loc_140BC4080
 * 0000000140BC4079: mov     rax, [rsi+368h]
 * 0000000140BC4080: mov     rcx, r9
 * 0000000140BC4083: call    KeGuardDispatchICall
 * 0000000140BC4088: mov     [rsi+944h], ebx
 * 0000000140BC408E: xor     r10d, r10d
 * 0000000140BC4091: and     dword ptr [rsi+9D8h], 0FFFFFFFDh
 * 0000000140BC4098: jmp     short loc_140BC40A8
 * 0000000140BC409A: mov     rsi, rbx
 * 0000000140BC409D: mov     [rsp+9D0h+var_970], rbx
 * 0000000140BC40A2: mov     [rbx+804h], eax
 * 0000000140BC40A8: mov     eax, 1
 * 0000000140BC40AD: lea     rbx, [rsi+r13]
 * 0000000140BC40B1: add     [rsi+82Ch], eax
 * 0000000140BC40B7: mov     [rbp+8D0h+var_378], rbx
 * 0000000140BC40BE: lea     ecx, [rax+2Fh]
 * 0000000140BC40C1: mov     rax, rbx
 * 0000000140BC40C4: lea     edx, [rcx-2Ah]
 * 0000000140BC40C7: lea     r13d, [rcx-2Fh]
 * 0000000140BC40CB: mov     [rax], r10
 * 0000000140BC40CE: add     ecx, 0FFFFFFF8h
 * 0000000140BC40D1: add     rax, 8
 * 0000000140BC40D5: sub     rdx, r13
 * 0000000140BC40D8: jnz     short loc_140BC40CB
 * 0000000140BC40DA: test    ecx, ecx
 * 0000000140BC40DC: jz      short loc_140BC40ED
 * 0000000140BC40DE: mov     edx, 0FFFFFFFFh
 * 0000000140BC40E3: mov     [rax], r10b
 * 0000000140BC40E6: add     rax, r13
 * 0000000140BC40E9: add     ecx, edx
 * 0000000140BC40EB: jnz     short loc_140BC40E3
 * 0000000140BC40ED: mov     [rbx], r15d
 * 0000000140BC40F0: mov     [rbx+8], r14
 * 0000000140BC40F4: cmp     r12d, 7
 * 0000000140BC40F8: jnz     short loc_140BC4111
 * 0000000140BC40FA: lea     r9, [rbx+18h]
 * 0000000140BC40FE: mov     rdx, r14
 * 0000000140BC4101: lea     r8d, [r12+1]
 * 0000000140BC4106: mov     rcx, rsi
 * 0000000140BC4109: call    sub_140516B3C
 * 0000000140BC410E: xor     r10d, r10d
 * 0000000140BC4111: mov     dword ptr [rbx+10h], 8
 * 0000000140BC4118: lea     r8, [r14+8]
 * 0000000140BC411C: add     dword ptr [rsi+848h], 8
 * 0000000140BC4123: mov     rdx, r14
 * 0000000140BC4126: mov     ecx, [rsi+834h]
 * 0000000140BC412C: mov     rax, [rsi+838h]
 * 0000000140BC4133: cmp     r14, r8
 * 0000000140BC4136: jnb     short loc_140BC4144
 * 0000000140BC4138: prefetchnta byte ptr [rdx]
 * 0000000140BC413B: add     rdx, 40h ; '@'
 * 0000000140BC413F: cmp     rdx, r8
 * 0000000140BC4142: jb      short loc_140BC4138
 * 0000000140BC4144: xor     rax, [r14]
 * 0000000140BC4147: rol     rax, cl
 * 0000000140BC414A: mov     rcx, rax
 * 0000000140BC414D: jmp     short loc_140BC4151
 * 0000000140BC414F: xor     eax, ecx
 * 0000000140BC4151: shr     rcx, 1Fh
 * 0000000140BC4155: test    rcx, rcx
 * 0000000140BC4158: jnz     short loc_140BC414F
 * 0000000140BC415A: btr     eax, 1Fh
 * 0000000140BC415E: mov     [rbx+14h], eax
 * 0000000140BC4161: add     dword ptr [rsi+848h], 8
 * 0000000140BC4168: test    rsi, rsi
 * 0000000140BC416B: jnz     short loc_140BC4179
 * 0000000140BC416D: mov     rbx, [rbp+8D0h+arg_0]
 * 0000000140BC4174: jmp     loc_140BC44E7
 * 0000000140BC4179: add     [rsi+9B8h], r13d
 * 0000000140BC4180: jmp     loc_140BC3D6D
 * 0000000140BC4185: xor     [rdx], r8
 * 0000000140BC4188: mov     rax, [rdx]
 * 0000000140BC418B: movzx   ecx, r8b
 * 0000000140BC418F: xor     rax, r10
 * 0000000140BC4192: and     ecx, 3Fh
 * 0000000140BC4195: ror     r8, cl
 * 0000000140BC4198: add     r8, rax
 * 0000000140BC419B: xor     r8, 0EFAh
 * 0000000140BC41A2: add     rdx, 8
 * 0000000140BC41A6: cmp     rdx, r9
 * 0000000140BC41A9: jnz     short loc_140BC4185
 * 0000000140BC41AB: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC41B3: cmp     r8, [rsi+0A80h]
 * 0000000140BC41BA: jz      short loc_140BC41FE
 * 0000000140BC41BC: mov     rax, [rsi+588h]
 * 0000000140BC41C3: mov     ecx, [rsi+804h]
 * 0000000140BC41C9: mov     [rax], rsi
 * 0000000140BC41CC: mov     [rax+10h], ecx
 * 0000000140BC41CF: xor     eax, eax
 * 0000000140BC41D1: mov     rcx, [rsi+0A80h]
 * 0000000140BC41D8: cmp     [rsi+918h], eax
 * 0000000140BC41DE: jnz     short loc_140BC41EE
 * 0000000140BC41E0: mov     rax, [rsi+588h]
 * 0000000140BC41E7: xor     rcx, r8
 * 0000000140BC41EA: mov     [rax+18h], rcx
 * 0000000140BC41EE: xor     edx, edx
 * 0000000140BC41F0: mov     r9d, 100h
 * 0000000140BC41F6: mov     rcx, rsi
 * 0000000140BC41F9: call    sub_140BDA384
 * 0000000140BC41FE: mov     rbx, rsi
 * 0000000140BC4201: jmp     loc_140BC44E7
 * 0000000140BC4206: mov     r15d, [rsi+804h]
 * 0000000140BC420D: mov     r13d, 20h ; ' '
 * 0000000140BC4213: mov     r9d, [rsi+858h]
 * 0000000140BC421A: cmp     r9d, 7
 * 0000000140BC421E: mov     r8d, [rsi+944h]
 * 0000000140BC4225: mov     dword ptr [rsp+9D0h+var_960], r9d
 * 0000000140BC422A: lea     r10d, [r13-20h]
 * 0000000140BC422E: mov     dword ptr [rbp+8D0h+arg_8], r15d
 * 0000000140BC4235: lea     eax, [r15+30h]
 * 0000000140BC4239: cmovnz  r13d, r10d
 * 0000000140BC423D: cmp     eax, [rsi+0A64h]
 * 0000000140BC4243: jbe     loc_140BC4336
 * 0000000140BC4249: mov     edx, eax
 * 0000000140BC424B: mov     rcx, rsi
 * 0000000140BC424E: call    sub_140BD9AF8
 * 0000000140BC4253: xor     r10d, r10d
 * 0000000140BC4256: mov     rbx, rax
 * 0000000140BC4259: test    rax, rax
 * 0000000140BC425C: jz      loc_140BC44EF
 * 0000000140BC4262: mov     ecx, [rsi+9D8h]
 * 0000000140BC4268: lea     eax, [r10+2]
 * 0000000140BC426C: test    al, cl
 * 0000000140BC426E: jnz     loc_140BC4328
 * 0000000140BC4274: mov     eax, [rsi+804h]
 * 0000000140BC427A: lea     r11d, [r10+1]
 * 0000000140BC427E: mov     r9, [rsi+7E8h]
 * 0000000140BC4285: and     ecx, 10000000h
 * 0000000140BC428B: neg     ecx
 * 0000000140BC428D: mov     rcx, rsi
 * 0000000140BC4290: sbb     edx, edx
 * 0000000140BC4292: and     edx, [rsi+944h]
 * 0000000140BC4298: cmp     eax, 8
 * 0000000140BC429B: jb      short loc_140BC42B3
 * 0000000140BC429D: mov     r8d, eax
 * 0000000140BC42A0: shr     r8, 3
 * 0000000140BC42A4: mov     [rcx], r10
 * 0000000140BC42A7: add     eax, 0FFFFFFF8h
 * 0000000140BC42AA: add     rcx, 8
 * 0000000140BC42AE: sub     r8, r11
 * 0000000140BC42B1: jnz     short loc_140BC42A4
 * 0000000140BC42B3: test    eax, eax
 * 0000000140BC42B5: jz      short loc_140BC42C8
 * 0000000140BC42B7: mov     r8d, 0FFFFFFFFh
 * 0000000140BC42BD: mov     [rcx], r10b
 * 0000000140BC42C0: add     rcx, r11
 * 0000000140BC42C3: add     eax, r8d
 * 0000000140BC42C6: jnz     short loc_140BC42BD
 * 0000000140BC42C8: mov     r15d, [rbx+944h]
 * 0000000140BC42CF: mov     [rbx+944h], edx
 * 0000000140BC42D5: cmp     edx, 3
 * 0000000140BC42D8: jz      short loc_140BC4308
 * 0000000140BC42DA: test    dword ptr [rbx+9D8h], 8000000h
 * 0000000140BC42E4: jnz     short loc_140BC42FF
 * 0000000140BC42E6: test    edx, edx
 * 0000000140BC42E8: jz      short loc_140BC42FF
 * 0000000140BC42EA: mov     rax, [rbx+238h]
 * 0000000140BC42F1: lea     rcx, [r9-8]
 * 0000000140BC42F5: mov     rdx, [rcx]
 * 0000000140BC42F8: call    KeGuardDispatchICall
 * 0000000140BC42FD: jmp     short loc_140BC4317
 * 0000000140BC42FF: mov     rax, [rbx+108h]
 * 0000000140BC4306: jmp     short loc_140BC430F
 * 0000000140BC4308: mov     rax, [rbx+368h]
 * 0000000140BC430F: mov     rcx, r9
 * 0000000140BC4312: call    KeGuardDispatchICall
 * 0000000140BC4317: mov     [rbx+944h], r15d
 * 0000000140BC431E: xor     r10d, r10d
 * 0000000140BC4321: mov     r15d, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BC4328: and     dword ptr [rbx+9D8h], 0FFFFFFFDh
 * 0000000140BC432F: mov     r9d, dword ptr [rsp+9D0h+var_960]
 * 0000000140BC4334: jmp     short loc_140BC433F
 * 0000000140BC4336: mov     rbx, rsi
 * 0000000140BC4339: mov     [rsi+804h], eax
 * 0000000140BC433F: mov     r8d, 1
 * 0000000140BC4345: add     [rbx+82Ch], r8d
 * 0000000140BC434C: add     r15, rbx
 * 0000000140BC434F: mov     [rbp+8D0h+arg_8], r15
 * 0000000140BC4356: mov     rax, r15
 * 0000000140BC4359: lea     ecx, [r8+2Fh]
 * 0000000140BC435D: mov     [rbp+8D0h+var_368], r15
 * 0000000140BC4364: lea     edx, [rcx-2Ah]
 * 0000000140BC4367: mov     [rax], r10
 * 0000000140BC436A: add     ecx, 0FFFFFFF8h
 * 0000000140BC436D: add     rax, 8
 * 0000000140BC4371: sub     rdx, r8
 * 0000000140BC4374: jnz     short loc_140BC4367
 * 0000000140BC4376: test    ecx, ecx
 * 0000000140BC4378: jz      short loc_140BC4389
 * 0000000140BC437A: mov     edx, 0FFFFFFFFh
 * 0000000140BC437F: mov     [rax], r10b
 * 0000000140BC4382: add     rax, r8
 * 0000000140BC4385: add     ecx, edx
 * 0000000140BC4387: jnz     short loc_140BC437F
 * 0000000140BC4389: mov     [r15], r13d
 * 0000000140BC438C: mov     [r15+8], r14
 * 0000000140BC4390: cmp     r9d, 7
 * 0000000140BC4394: jnz     short loc_140BC43AD
 * 0000000140BC4396: test    r12d, r12d
 * 0000000140BC4399: jz      short loc_140BC43AD
 * 0000000140BC439B: lea     r9, [r15+18h]
 * 0000000140BC439F: mov     r8d, r12d
 * 0000000140BC43A2: mov     rdx, r14
 * 0000000140BC43A5: mov     rcx, rbx
 * 0000000140BC43A8: call    sub_140516B3C
 * 0000000140BC43AD: mov     [r15+10h], r12d
 * 0000000140BC43B1: lea     rcx, [r14+r12]
 * 0000000140BC43B5: add     [rbx+848h], r12d
 * 0000000140BC43BC: mov     r9, r14
 * 0000000140BC43BF: mov     r10d, [rbx+834h]
 * 0000000140BC43C6: mov     rax, r14
 * 0000000140BC43C9: mov     r13, [rbx+838h]
 * 0000000140BC43D0: cmp     r14, rcx
 * 0000000140BC43D3: jnb     short loc_140BC43E5
 * 0000000140BC43D5: mov     edx, 40h ; '@'
 * 0000000140BC43DA: prefetchnta byte ptr [rax]
 * 0000000140BC43DD: add     rax, rdx
 * 0000000140BC43E0: cmp     rax, rcx
 * 0000000140BC43E3: jb      short loc_140BC43DA
 * 0000000140BC43E5: mov     r11d, r12d
 * 0000000140BC43E8: mov     r8, r13
 * 0000000140BC43EB: shr     r11d, 7
 * 0000000140BC43EF: test    r11d, r11d
 * 0000000140BC43F2: jz      short loc_140BC446C
 * 0000000140BC43F4: mov     esi, 1
 * 0000000140BC43F9: mov     edi, 0FFFFFFFFh
 * 0000000140BC43FE: mov     r15, 7010008004002001h
 * 0000000140BC4408: mov     eax, 8
 * 0000000140BC440D: xor     r8, [r9]
 * 0000000140BC4410: mov     ecx, r10d
 * 0000000140BC4413: rol     r8, cl
 * 0000000140BC4416: xor     r8, [r9+8]
 * 0000000140BC441A: add     r9, 10h
 * 0000000140BC441E: rol     r8, cl
 * 0000000140BC4421: sub     rax, rsi
 * 0000000140BC4424: jnz     short loc_140BC440D
 * 0000000140BC4426: mov     rcx, r9
 * 0000000140BC4429: sub     rcx, r14
 * 0000000140BC442C: xor     rcx, r13
 * 0000000140BC442F: mov     rax, rcx
 * 0000000140BC4432: rol     rax, 11h
 * 0000000140BC4436: xor     rcx, rax
 * 0000000140BC4439: mov     rax, r15
 * 0000000140BC443C: mul     rcx
 * 0000000140BC443F: xor     r10d, edx
 * 0000000140BC4442: mov     [rbp+8D0h+var_360], rdx
 * 0000000140BC4449: xor     r10d, eax
 * 0000000140BC444C: and     r10d, 3Fh
 * 0000000140BC4450: cmovz   r10d, esi
 * 0000000140BC4454: add     r11d, edi
 * 0000000140BC4457: jnz     short loc_140BC4408
 * 0000000140BC4459: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC445E: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC4465: mov     r15, [rbp+8D0h+arg_8]
 * 0000000140BC446C: mov     edx, r12d
 * 0000000140BC446F: mov     r11d, 1
 * 0000000140BC4475: and     edx, 7Fh
 * 0000000140BC4478: cmp     edx, 8
 * 0000000140BC447B: jb      short loc_140BC4498
 * 0000000140BC447D: mov     eax, edx
 * 0000000140BC447F: shr     rax, 3
 * 0000000140BC4483: xor     r8, [r9]
 * 0000000140BC4486: mov     ecx, r10d
 * 0000000140BC4489: rol     r8, cl
 * 0000000140BC448C: add     r9, 8
 * 0000000140BC4490: add     edx, 0FFFFFFF8h
 * 0000000140BC4493: sub     rax, r11
 * 0000000140BC4496: jnz     short loc_140BC4483
 * 0000000140BC4498: test    edx, edx
 * 0000000140BC449A: jz      short loc_140BC44BA
 * 0000000140BC449C: mov     esi, 0FFFFFFFFh
 * 0000000140BC44A1: movzx   eax, byte ptr [r9]
 * 0000000140BC44A5: mov     ecx, r10d
 * 0000000140BC44A8: xor     r8, rax
 * 0000000140BC44AB: add     r9, r11
 * 0000000140BC44AE: rol     r8, cl
 * 0000000140BC44B1: add     edx, esi
 * 0000000140BC44B3: jnz     short loc_140BC44A1
 * 0000000140BC44B5: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC44BA: mov     rax, r8
 * 0000000140BC44BD: jmp     short loc_140BC44C2
 * 0000000140BC44BF: xor     r8d, eax
 * 0000000140BC44C2: shr     rax, 1Fh
 * 0000000140BC44C6: test    rax, rax
 * 0000000140BC44C9: jnz     short loc_140BC44BF
 * 0000000140BC44CB: btr     r8d, 1Fh
 * 0000000140BC44D0: mov     [r15+14h], r8d
 * 0000000140BC44D4: add     [rbx+848h], r12d
 * 0000000140BC44DB: test    rbx, rbx
 * 0000000140BC44DE: jz      short loc_140BC44EF
 * 0000000140BC44E0: add     [rbx+9B8h], r11d
 * 0000000140BC44E7: mov     [rsp+9D0h+var_970], rbx
 * 0000000140BC44EC: mov     rsi, rbx
 * 0000000140BC44EF: mov     r12d, 6
 * 0000000140BC44F5: mov     eax, [rsi+9DCh]
 * 0000000140BC44FB: mov     r11d, 1000h
 * 0000000140BC4501: test    al, 8
 * 0000000140BC4503: jz      loc_140BC460E
 * 0000000140BC4509: test    r11d, eax
 * 0000000140BC450C: jnz     loc_140BC460E
 * 0000000140BC4512: rdtsc
 * 0000000140BC4514: shl     rdx, 20h
 * 0000000140BC4518: mov     rbx, 7010008004002001h
 * 0000000140BC4522: or      rax, rdx
 * 0000000140BC4525: mov     rcx, rax
 * 0000000140BC4528: ror     rax, 3
 * 0000000140BC452C: xor     rcx, rax
 * 0000000140BC452F: mov     rax, rbx
 * 0000000140BC4532: mul     rcx
 * 0000000140BC4535: mov     [rbp+8D0h+var_358], rdx
 * 0000000140BC453C: xor     dl, al
 * 0000000140BC453E: test    dl, 3
 * 0000000140BC4541: jnz     loc_140BC460E
 * 0000000140BC4547: mov     rax, [rsi+100h]
 * 0000000140BC454E: mov     ecx, 40h ; '@'
 * 0000000140BC4553: mov     r8d, [rsi+830h]
 * 0000000140BC455A: mov     rdx, [rsi+778h]
 * 0000000140BC4561: call    KeGuardDispatchICall
 * 0000000140BC4566: xor     r13d, r13d
 * 0000000140BC4569: mov     r15, rax
 * 0000000140BC456C: test    rax, rax
 * 0000000140BC456F: jz      loc_140BC4608
 * 0000000140BC4575: mov     rax, [rsi+1B8h]
 * 0000000140BC457C: mov     rcx, r15
 * 0000000140BC457F: movzx   edx, word ptr [rsi+780h]
 * 0000000140BC4586: call    KeGuardDispatchICall
 * 0000000140BC458B: mov     rcx, [rsi+6F8h]
 * 0000000140BC4592: mov     rax, [rsi+510h]
 * 0000000140BC4599: mov     r14d, [rcx+rax]
 * 0000000140BC459D: test    r14d, r14d
 * 0000000140BC45A0: jz      short loc_140BC45CD
 * 0000000140BC45A2: rdtsc
 * 0000000140BC45A4: shl     rdx, 20h
 * 0000000140BC45A8: or      rax, rdx
 * 0000000140BC45AB: mov     rcx, rax
 * 0000000140BC45AE: ror     rax, 3
 * 0000000140BC45B2: xor     rcx, rax
 * 0000000140BC45B5: mov     rax, rbx
 * 0000000140BC45B8: mul     rcx
 * 0000000140BC45BB: mov     [rbp+8D0h+var_350], rdx
 * 0000000140BC45C2: xor     rax, rdx
 * 0000000140BC45C5: xor     edx, edx
 * 0000000140BC45C7: div     r14
 * 0000000140BC45CA: mov     r14, rdx
 * 0000000140BC45CD: xor     ecx, ecx
 * 0000000140BC45CF: jmp     short loc_140BC45E5
 * 0000000140BC45D1: mov     rcx, rbx
 * 0000000140BC45D4: test    r14d, r14d
 * 0000000140BC45D7: jz      loc_140BC4738
 * 0000000140BC45DD: mov     eax, 0FFFFFFFFh
 * 0000000140BC45E2: add     r14d, eax
 * 0000000140BC45E5: mov     rax, [rsi+3B0h]
 * 0000000140BC45EC: call    KeGuardDispatchICall
 * 0000000140BC45F1: mov     rbx, rax
 * 0000000140BC45F4: test    rax, rax
 * 0000000140BC45F7: jnz     short loc_140BC45D1
 * 0000000140BC45F9: mov     rax, [rsi+108h]
 * 0000000140BC4600: mov     rcx, r15
 * 0000000140BC4603: call    KeGuardDispatchICall
 * 0000000140BC4608: mov     r11d, 1000h
 * 0000000140BC460E: xor     r15d, r15d
 * 0000000140BC4611: mov     [rbp+8D0h+var_8E0], r15d
 * 0000000140BC4615: lea     ebx, [r15+1]
 * 0000000140BC4619: mov     [rbp+8D0h+var_898], r15
 * 0000000140BC461D: lea     rax, [rbp+8D0h+var_890]
 * 0000000140BC4621: mov     ecx, 4
 * 0000000140BC4626: mov     edx, 0FFFFFFFFh
 * 0000000140BC462B: mov     [rax], r15b
 * 0000000140BC462E: add     rax, rbx
 * 0000000140BC4631: add     ecx, edx
 * 0000000140BC4633: jnz     short loc_140BC462B
 * 0000000140BC4635: mov     eax, [rsi+84Ch]
 * 0000000140BC463B: mov     edx, 28h ; '('
 * 0000000140BC4640: mov     ecx, [rsi+840h]
 * 0000000140BC4646: mov     [rbp+8D0h+var_8C4], ecx
 * 0000000140BC4649: lea     r14d, [rdx-23h]
 * 0000000140BC464D: cmp     [rsi+848h], eax
 * 0000000140BC4653: jge     loc_140BD2466
 * 0000000140BC4659: mov     eax, [rsi+9D8h]
 * 0000000140BC465F: mov     r8d, 88000h
 * 0000000140BC4665: and     eax, r8d
 * 0000000140BC4668: cmp     eax, r8d
 * 0000000140BC466B: jz      short loc_140BC4671
 * 0000000140BC466D: mov     dr7, r15
 * 0000000140BC4671: cmp     ecx, [rsi+82Ch]
 * 0000000140BC4677: jnz     short loc_140BC4685
 * 0000000140BC4679: add     [rsi+850h], ebx
 * 0000000140BC467F: mov     ecx, r15d
 * 0000000140BC4682: mov     [rbp+8D0h+var_8C4], ecx
 * 0000000140BC4685: mov     rax, [rsi+0AC0h]
 * 0000000140BC468C: mov     r8, rsi
 * 0000000140BC468F: test    rax, rax
 * 0000000140BC4692: mov     r9d, r15d
 * 0000000140BC4695: cmovnz  r8, rax
 * 0000000140BC4699: mov     r13d, [r8+828h]
 * 0000000140BC46A0: add     r13, r8
 * 0000000140BC46A3: mov     [rsp+9D0h+var_980], r13
 * 0000000140BC46A8: cmp     dword ptr [rbp+8D0h+var_898], r15d
 * 0000000140BC46AC: jz      short loc_140BC46C3
 * 0000000140BC46AE: cmp     dword ptr [rbp+8D0h+var_898+4], ecx
 * 0000000140BC46B1: ja      short loc_140BC46C3
 * 0000000140BC46B3: mov     r13d, [rbp+8D0h+var_890]
 * 0000000140BC46B7: mov     r9d, dword ptr [rbp+8D0h+var_898+4]
 * 0000000140BC46BB: add     r13, r8
 * 0000000140BC46BE: mov     [rsp+9D0h+var_980], r13
 * 0000000140BC46C3: cmp     r9d, ecx
 * 0000000140BC46C6: jz      loc_140BC4939
 * 0000000140BC46CC: mov     r10d, ecx
 * 0000000140BC46CF: mov     esi, 2
 * 0000000140BC46D4: sub     r10d, r9d
 * 0000000140BC46D7: mov     rdi, 0AAAAAAAAAAAAAAABh
 * 0000000140BC46E1: mov     r9d, ecx
 * 0000000140BC46E4: mov     ecx, [r13+0]
 * 0000000140BC46E8: sub     ecx, 1
 * 0000000140BC46EB: jz      loc_140BC4903
 * 0000000140BC46F1: sub     ecx, r12d
 * 0000000140BC46F4: jz      loc_140BC48F5
 * 0000000140BC46FA: sub     ecx, 1
 * 0000000140BC46FD: jz      loc_140BC48E8
 * 0000000140BC4703: sub     ecx, esi
 * 0000000140BC4705: jz      loc_140BC48DC
 * 0000000140BC470B: sub     ecx, 12h
 * 0000000140BC470E: jz      loc_140BC48D5
 * 0000000140BC4714: sub     ecx, esi
 * 0000000140BC4716: jz      loc_140BC48A9
 * 0000000140BC471C: sub     ecx, 3
 * 0000000140BC471F: jz      loc_140BC4881
 * 0000000140BC4725: cmp     ecx, 0Ah
 * 0000000140BC4728: jz      loc_140BC4903
 * 0000000140BC472E: mov     eax, 30h ; '0'
 * 0000000140BC4733: jmp     loc_140BC4918
 * 0000000140BC4738: mov     rax, [rsi+3A0h]
 * 0000000140BC473F: call    KeGuardDispatchICall
 * 0000000140BC4744: mov     rcx, rbx
 * 0000000140BC4747: test    eax, eax
 * 0000000140BC4749: jns     short loc_140BC475C
 * 0000000140BC474B: mov     rax, [rsi+3B8h]
 * 0000000140BC4752: call    KeGuardDispatchICall
 * 0000000140BC4757: jmp     loc_140BC45F9
 * 0000000140BC475C: mov     rax, [rsi+438h]
 * 0000000140BC4763: lea     rdx, [rbp+8D0h+var_78]
 * 0000000140BC476A: call    KeGuardDispatchICall
 * 0000000140BC476F: mov     rax, [rsi+1D8h]
 * 0000000140BC4776: xor     r9d, r9d
 * 0000000140BC4779: xor     r8d, r8d
 * 0000000140BC477C: mov     [rsp+9D0h+BugCheckParameter4], r13
 * 0000000140BC4781: mov     rdx, r15
 * 0000000140BC4784: mov     rcx, rbx
 * 0000000140BC4787: call    KeGuardDispatchICall
 * 0000000140BC478C: rdtsc
 * 0000000140BC478E: shl     rdx, 20h
 * 0000000140BC4792: or      rax, rdx
 * 0000000140BC4795: mov     rcx, rax
 * 0000000140BC4798: ror     rax, 3
 * 0000000140BC479C: xor     rcx, rax
 * 0000000140BC479F: mov     rax, 7010008004002001h
 * 0000000140BC47A9: mul     rcx
 * 0000000140BC47AC: mov     rcx, r15
 * 0000000140BC47AF: mov     rbx, rdx
 * 0000000140BC47B2: mov     [rbp+8D0h+var_348], rdx
 * 0000000140BC47B9: xor     rbx, rax
 * 0000000140BC47BC: mov     rax, [rsi+1D0h]
 * 0000000140BC47C3: call    KeGuardDispatchICall
 * 0000000140BC47C8: mov     ecx, eax
 * 0000000140BC47CA: xor     edx, edx
 * 0000000140BC47CC: mov     rax, rbx
 * 0000000140BC47CF: div     rcx
 * 0000000140BC47D2: mov     rbx, rdx
 * 0000000140BC47D5: cli
 * 0000000140BC47D6: sti
 * 0000000140BC47D7: mov     rax, [rsi+1B0h]
 * 0000000140BC47DE: lea     rcx, [rbp+8D0h+var_5F8]
 * 0000000140BC47E5: xor     edx, edx
 * 0000000140BC47E7: call    KeGuardDispatchICall
 * 0000000140BC47EC: mov     rax, [rsi+1C0h]
 * 0000000140BC47F3: lea     rcx, [rbp+8D0h+var_248]
 * 0000000140BC47FA: mov     rdx, r15
 * 0000000140BC47FD: call    KeGuardDispatchICall
 * 0000000140BC4802: jmp     short loc_140BC480F
 * 0000000140BC4804: test    ebx, ebx
 * 0000000140BC4806: jz      short loc_140BC482C
 * 0000000140BC4808: mov     eax, 0FFFFFFFFh
 * 0000000140BC480D: add     ebx, eax
 * 0000000140BC480F: mov     rax, [rsi+1C8h]
 * 0000000140BC4816: lea     rdx, [rbp+8D0h+var_248]
 * 0000000140BC481D: lea     rcx, [rbp+8D0h+var_880]
 * 0000000140BC4821: call    KeGuardDispatchICall
 * 0000000140BC4826: test    eax, eax
 * 0000000140BC4828: jns     short loc_140BC4804
 * 0000000140BC482A: jmp     short loc_140BC4842
 * 0000000140BC482C: mov     rax, [rsi+1B0h]
 * 0000000140BC4833: lea     rcx, [rbp+8D0h+var_5F8]
 * 0000000140BC483A: mov     edx, [rbp+8D0h+var_880]
 * 0000000140BC483D: call    KeGuardDispatchICall
 * 0000000140BC4842: mov     rax, [rsi+1E0h]
 * 0000000140BC4849: lea     rdx, [rbp+8D0h+var_260]
 * 0000000140BC4850: lea     rcx, [rbp+8D0h+var_5F8]
 * 0000000140BC4857: call    KeGuardDispatchICall
 * 0000000140BC485C: mov     rax, [rsi+108h]
 * 0000000140BC4863: mov     rcx, r15
 * 0000000140BC4866: call    KeGuardDispatchICall
 * 0000000140BC486B: mov     ebx, 1
 * 0000000140BC4870: mov     r11d, 1000h
 * 0000000140BC4876: mov     [rbp+8D0h+var_8E0], ebx
 * 0000000140BC4879: xor     r15d, r15d
 * 0000000140BC487C: jmp     loc_140BC4619
 * 0000000140BC4881: mov     ecx, [r13+20h]
 * 0000000140BC4885: mov     edx, [r13+28h]
 * 0000000140BC4889: and     ecx, 0FFFh
 * 0000000140BC488F: add     rdx, 0FFFh
 * 0000000140BC4896: add     rdx, rcx
 * 0000000140BC4899: shr     rdx, 0Ch
 * 0000000140BC489D: lea     eax, [rdx+rdx*4]
 * 0000000140BC48A0: lea     eax, ds:30h[rax*4]
 * 0000000140BC48A7: jmp     short loc_140BC4918
 * 0000000140BC48A9: mov     eax, [r13+24h]
 * 0000000140BC48AD: lea     ecx, [rax-1]
 * 0000000140BC48B0: neg     eax
 * 0000000140BC48B2: sbb     eax, eax
 * 0000000140BC48B4: and     ecx, eax
 * 0000000140BC48B6: mov     rax, rdi
 * 0000000140BC48B9: mul     rcx
 * 0000000140BC48BC: movzx   eax, word ptr [r13+28h]
 * 0000000140BC48C1: shr     rdx, 3
 * 0000000140BC48C5: add     edx, 7
 * 0000000140BC48C8: and     edx, 0FFFFFFF8h
 * 0000000140BC48CB: add     eax, esi
 * 0000000140BC48CD: lea     eax, [rax+rax*2]
 * 0000000140BC48D0: lea     eax, [rdx+rax*8]
 * 0000000140BC48D3: jmp     short loc_140BC4918
 * 0000000140BC48D5: movzx   eax, word ptr [r13+28h]
 * 0000000140BC48DA: jmp     short loc_140BC48ED
 * 0000000140BC48DC: mov     eax, [r13+1Ch]
 * 0000000140BC48E0: add     eax, 3
 * 0000000140BC48E3: shl     eax, 4
 * 0000000140BC48E6: jmp     short loc_140BC4918
 * 0000000140BC48E8: movzx   eax, word ptr [r13+20h]
 * 0000000140BC48ED: add     eax, 37h ; '7'
 * 0000000140BC48F0: and     eax, 0FFFFFFF8h
 * 0000000140BC48F3: jmp     short loc_140BC4918
 * 0000000140BC48F5: mov     eax, [r13+18h]
 * 0000000140BC48F9: add     eax, esi
 * 0000000140BC48FB: lea     eax, [rax+rax*2]
 * 0000000140BC48FE: shl     eax, 3
 * 0000000140BC4901: jmp     short loc_140BC4918
 * 0000000140BC4903: mov     ecx, [r13+10h]
 * 0000000140BC4907: mov     rax, rdi
 * 0000000140BC490A: mul     rcx
 * 0000000140BC490D: shr     rdx, 3
 * 0000000140BC4911: lea     eax, ds:30h[rdx*4]
 * 0000000140BC4918: add     r13, rax
 * 0000000140BC491B: sub     r10, rbx
 * 0000000140BC491E: jnz     loc_140BC46E4
 * 0000000140BC4924: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC4929: lea     edx, [r10+28h]
 * 0000000140BC492D: mov     [rsp+9D0h+var_980], r13
 * 0000000140BC4932: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC4939: mov     eax, r13d
 * 0000000140BC493C: mov     dword ptr [rbp+8D0h+var_898], ebx
 * 0000000140BC493F: sub     eax, r8d
 * 0000000140BC4942: mov     dword ptr [rbp+8D0h+var_898+4], r9d
 * 0000000140BC4946: mov     [rbp+8D0h+var_890], eax
 * 0000000140BC4949: mov     r10d, [r13+0]
 * 0000000140BC494D: mov     [rbp+8D0h+var_948], r10d
 * 0000000140BC4951: cmp     r10d, 1Eh
 * 0000000140BC4955: jg      loc_140BCC66F
 * 0000000140BC495B: jz      loc_140BCBDC6
 * 0000000140BC4961: mov     eax, 0Fh
 * 0000000140BC4966: cmp     r10d, eax
 * 0000000140BC4969: jg      loc_140BC6DBA
 * 0000000140BC496F: jz      loc_140BC6ABE
 * 0000000140BC4975: mov     ecx, r10d
 * 0000000140BC4978: test    r10d, r10d
 * 0000000140BC497B: jz      loc_140BC6785
 * 0000000140BC4981: sub     ecx, 1
 * 0000000140BC4984: jz      loc_140BD14C9
 * 0000000140BC498A: sub     ecx, 3
 * 0000000140BC498D: jz      loc_140BC6349
 * 0000000140BC4993: sub     ecx, 1
 * 0000000140BC4996: jz      loc_140BC5DA1
 * 0000000140BC499C: mov     eax, 2
 * 0000000140BC49A1: sub     ecx, eax
 * 0000000140BC49A3: jz      loc_140BC5B68
 * 0000000140BC49A9: sub     ecx, 1
 * 0000000140BC49AC: jz      loc_140BC53DD
 * 0000000140BC49B2: sub     ecx, eax
 * 0000000140BC49B4: jz      loc_140BC4FF4
 * 0000000140BC49BA: cmp     ecx, 3
 * 0000000140BC49BD: jnz     loc_140BCF176
 * 0000000140BC49C3: mov     r14, [r13+8]
 * 0000000140BC49C7: mov     r8d, [r13+10h]
 * 0000000140BC49CB: mov     r9, r14
 * 0000000140BC49CE: add     [rsi+848h], r8d
 * 0000000140BC49D5: mov     rax, r14
 * 0000000140BC49D8: mov     r11d, [rsi+834h]
 * 0000000140BC49DF: mov     r15, [rsi+838h]
 * 0000000140BC49E6: lea     rcx, [r14+r8]
 * 0000000140BC49EA: cmp     r14, rcx
 * 0000000140BC49ED: jnb     short loc_140BC49FF
 * 0000000140BC49EF: mov     edx, 40h ; '@'
 * 0000000140BC49F4: prefetchnta byte ptr [rax]
 * 0000000140BC49F7: add     rax, rdx
 * 0000000140BC49FA: cmp     rax, rcx
 * 0000000140BC49FD: jb      short loc_140BC49F4
 * 0000000140BC49FF: xor     r12d, r12d
 * 0000000140BC4A02: mov     r10d, r8d
 * 0000000140BC4A05: shr     r10d, 7
 * 0000000140BC4A09: mov     rbx, r15
 * 0000000140BC4A0C: lea     edx, [r12+1]
 * 0000000140BC4A11: test    r10d, r10d
 * 0000000140BC4A14: jz      short loc_140BC4A86
 * 0000000140BC4A16: mov     esi, 0FFFFFFFFh
 * 0000000140BC4A1B: mov     rdi, 7010008004002001h
 * 0000000140BC4A25: mov     eax, 8
 * 0000000140BC4A2A: xor     rbx, [r9]
 * 0000000140BC4A2D: mov     ecx, r11d
 * 0000000140BC4A30: rol     rbx, cl
 * 0000000140BC4A33: xor     rbx, [r9+8]
 * 0000000140BC4A37: add     r9, 10h
 * 0000000140BC4A3B: rol     rbx, cl
 * 0000000140BC4A3E: sub     rax, rdx
 * 0000000140BC4A41: jnz     short loc_140BC4A2A
 * 0000000140BC4A43: mov     rcx, r9
 * 0000000140BC4A46: sub     rcx, r14
 * 0000000140BC4A49: xor     rcx, r15
 * 0000000140BC4A4C: mov     rax, rcx
 * 0000000140BC4A4F: rol     rax, 11h
 * 0000000140BC4A53: xor     rcx, rax
 * 0000000140BC4A56: mov     rax, rdi
 * 0000000140BC4A59: mul     rcx
 * 0000000140BC4A5C: mov     [rbp+8D0h+var_340], rdx
 * 0000000140BC4A63: xor     edx, eax
 * 0000000140BC4A65: xor     r11d, edx
 * 0000000140BC4A68: mov     edx, 1
 * 0000000140BC4A6D: and     r11d, 3Fh
 * 0000000140BC4A71: cmovz   r11d, edx
 * 0000000140BC4A75: add     r10d, esi
 * 0000000140BC4A78: jnz     short loc_140BC4A25
 * 0000000140BC4A7A: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC4A7F: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC4A86: and     r8d, 7Fh
 * 0000000140BC4A8A: cmp     r8d, 8
 * 0000000140BC4A8E: jb      short loc_140BC4AAD
 * 0000000140BC4A90: mov     eax, r8d
 * 0000000140BC4A93: shr     rax, 3
 * 0000000140BC4A97: xor     rbx, [r9]
 * 0000000140BC4A9A: mov     ecx, r11d
 * 0000000140BC4A9D: rol     rbx, cl
 * 0000000140BC4AA0: add     r9, 8
 * 0000000140BC4AA4: add     r8d, 0FFFFFFF8h
 * 0000000140BC4AA8: sub     rax, rdx
 * 0000000140BC4AAB: jnz     short loc_140BC4A97
 * 0000000140BC4AAD: test    r8d, r8d
 * 0000000140BC4AB0: jz      short loc_140BC4AD1
 * 0000000140BC4AB2: mov     esi, 0FFFFFFFFh
 * 0000000140BC4AB7: movzx   eax, byte ptr [r9]
 * 0000000140BC4ABB: mov     ecx, r11d
 * 0000000140BC4ABE: xor     rbx, rax
 * 0000000140BC4AC1: add     r9, rdx
 * 0000000140BC4AC4: rol     rbx, cl
 * 0000000140BC4AC7: add     r8d, esi
 * 0000000140BC4ACA: jnz     short loc_140BC4AB7
 * 0000000140BC4ACC: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC4AD1: mov     rax, rbx
 * 0000000140BC4AD4: jmp     short loc_140BC4AD8
 * 0000000140BC4AD6: xor     ebx, eax
 * 0000000140BC4AD8: shr     rax, 1Fh
 * 0000000140BC4ADC: test    rax, rax
 * 0000000140BC4ADF: jnz     short loc_140BC4AD6
 * 0000000140BC4AE1: btr     ebx, 1Fh
 * 0000000140BC4AE5: cmp     ebx, [r13+14h]
 * 0000000140BC4AE9: jz      loc_140BC4BC1
 * 0000000140BC4AEF: lock or [rsp+9D0h+var_9D0], r12d
 * 0000000140BC4AF4: mov     eax, [r13+18h]
 * 0000000140BC4AF8: test    dl, al
 * 0000000140BC4AFA: jz      short loc_140BC4B0D
 * 0000000140BC4AFC: mov     rax, [rsi+578h]
 * 0000000140BC4B03: mov     cl, [rax]
 * 0000000140BC4B05: test    cl, cl
 * 0000000140BC4B07: jnz     loc_140BC4BC1
 * 0000000140BC4B0D: mov     ecx, [r13+10h]
 * 0000000140BC4B11: mov     rdx, [r13+8]
 * 0000000140BC4B15: test    rcx, rcx
 * 0000000140BC4B18: jz      loc_140BC4C5B
 * 0000000140BC4B1E: mov     eax, [rsi+9DCh]
 * 0000000140BC4B24: mov     r8d, 40h ; '@'
 * 0000000140BC4B2A: test    r8b, al
 * 0000000140BC4B2D: jz      loc_140BC4C5B
 * 0000000140BC4B33: mov     r12, cr8
 * 0000000140BC4B37: lea     eax, [r8-3Eh]
 * 0000000140BC4B3B: mov     cr8, rax
 * 0000000140BC4B3F: mov     r14, rdx
 * 0000000140BC4B42: lea     rax, [rcx-1]
 * 0000000140BC4B46: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140BC4B4D: add     rax, rdx
 * 0000000140BC4B50: or      rax, 0FFFh
 * 0000000140BC4B56: mov     [rsp+9D0h+var_978], rax
 * 0000000140BC4B5B: lea     r13, [r14-1]
 * 0000000140BC4B5F: movzx   r15d, r12b
 * 0000000140BC4B63: mov     rax, [rsi+468h]
 * 0000000140BC4B6A: xor     edx, edx
 * 0000000140BC4B6C: mov     rcx, r14
 * 0000000140BC4B6F: call    KeGuardDispatchICall
 * 0000000140BC4B74: cmp     eax, 0C000022Dh
 * 0000000140BC4B79: jnz     short loc_140BC4B9B
 * 0000000140BC4B7B: mov     eax, 1
 * 0000000140BC4B80: cmp     r12b, al
 * 0000000140BC4B83: ja      short loc_140BC4BA3
 * 0000000140BC4B85: movzx   r15d, r12b
 * 0000000140BC4B89: mov     cr8, r15
 * 0000000140BC4B8D: mov     al, [r14]
 * 0000000140BC4B90: mov     eax, 2
 * 0000000140BC4B95: mov     cr8, rax
 * 0000000140BC4B99: jmp     short loc_140BC4B63
 * 0000000140BC4B9B: test    eax, eax
 * 0000000140BC4B9D: js      loc_140BC4C4F
 * 0000000140BC4BA3: mov     eax, 1000h
 * 0000000140BC4BA8: add     r14, rax
 * 0000000140BC4BAB: add     r13, rax
 * 0000000140BC4BAE: cmp     r13, [rsp+9D0h+var_978]
 * 0000000140BC4BB3: jnz     short loc_140BC4B5F
 * 0000000140BC4BB5: mov     cr8, r15
 * 0000000140BC4BB9: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BC4BBE: xor     r12d, r12d
 * 0000000140BC4BC1: mov     ebx, 1
 * 0000000140BC4BC6: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BC4BD0: jz      loc_140BC4F9B
 * 0000000140BC4BD6: mov     r8d, [r13+10h]
 * 0000000140BC4BDA: test    r8d, r8d
 * 0000000140BC4BDD: jz      loc_140BC4F9B
 * 0000000140BC4BE3: mov     rdx, [r13+8]
 * 0000000140BC4BE7: lea     r9, [rbp+8D0h+var_328]
 * 0000000140BC4BEE: mov     rcx, rsi
 * 0000000140BC4BF1: call    sub_140516B3C
 * 0000000140BC4BF6: mov     edx, 10h
 * 0000000140BC4BFB: lea     r8, [r13+1Ch]
 * 0000000140BC4BFF: lea     r9, [rbp+8D0h+var_328]
 * 0000000140BC4C06: mov     rcx, [r9]
 * 0000000140BC4C09: add     r9, 8
 * 0000000140BC4C0D: mov     rax, [r8]
 * 0000000140BC4C10: add     r8, 8
 * 0000000140BC4C14: cmp     rcx, rax
 * 0000000140BC4C17: jnz     loc_140BC4DA5
 * 0000000140BC4C1D: add     edx, 0FFFFFFF8h
 * 0000000140BC4C20: cmp     edx, 8
 * 0000000140BC4C23: jnb     short loc_140BC4C06
 * 0000000140BC4C25: test    edx, edx
 * 0000000140BC4C27: jz      loc_140BC4F8E
 * 0000000140BC4C2D: mov     cl, [r9]
 * 0000000140BC4C30: add     r9, rbx
 * 0000000140BC4C33: mov     al, [r8]
 * 0000000140BC4C36: add     r8, rbx
 * 0000000140BC4C39: cmp     cl, al
 * 0000000140BC4C3B: jnz     loc_140BC4DA5
 * 0000000140BC4C41: mov     eax, 0FFFFFFFFh
 * 0000000140BC4C46: add     edx, eax
 * 0000000140BC4C48: jnz     short loc_140BC4C2D
 * 0000000140BC4C4A: jmp     loc_140BC4F8E
 * 0000000140BC4C4F: mov     cr8, r15
 * 0000000140BC4C53: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BC4C58: xor     r12d, r12d
 * 0000000140BC4C5B: mov     eax, [r13+14h]
 * 0000000140BC4C5F: cmp     [rsi+918h], r12d
 * 0000000140BC4C66: jnz     short loc_140BC4C7A
 * 0000000140BC4C68: mov     ecx, eax
 * 0000000140BC4C6A: mov     eax, ebx
 * 0000000140BC4C6C: xor     rcx, rax
 * 0000000140BC4C6F: mov     rax, [rsi+588h]
 * 0000000140BC4C76: mov     [rax+18h], rcx
 * 0000000140BC4C7A: mov     ebx, 1
 * 0000000140BC4C7F: mov     rcx, [r13+8]
 * 0000000140BC4C83: cmp     [rsi+918h], r12d
 * 0000000140BC4C8A: jnz     loc_140BC4BC6
 * 0000000140BC4C90: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC4C9A: add     rax, rsi
 * 0000000140BC4C9D: mov     [rsi+920h], rax
 * 0000000140BC4CA4: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC4CAE: add     rax, r13
 * 0000000140BC4CB1: mov     [rsi+928h], rax
 * 0000000140BC4CB8: movsxd  rax, dword ptr [r13+0]
 * 0000000140BC4CBC: mov     [rsi+930h], rax
 * 0000000140BC4CC3: mov     [rsi+938h], rcx
 * 0000000140BC4CCA: mov     [rsi+918h], ebx
 * 0000000140BC4CD0: mov     ecx, [rsi+9D8h]
 * 0000000140BC4CD6: bt      ecx, 1Dh
 * 0000000140BC4CDA: jb      loc_140BC4BC6
 * 0000000140BC4CE0: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC4CEA: jz      loc_140BC4BC6
 * 0000000140BC4CF0: test    bl, cl
 * 0000000140BC4CF2: jz      loc_140BC4BC6
 * 0000000140BC4CF8: mov     ecx, [rsi+0A74h]
 * 0000000140BC4CFE: mov     eax, [rsi+804h]
 * 0000000140BC4D04: mov     r10, [rsi+838h]
 * 0000000140BC4D0B: sub     eax, ecx
 * 0000000140BC4D0D: mov     r8, [rsi+0A78h]
 * 0000000140BC4D14: lea     rdx, [rcx+rsi]
 * 0000000140BC4D18: mov     ecx, eax
 * 0000000140BC4D1A: shr     rcx, 3
 * 0000000140BC4D1E: lea     r9, [rdx+rcx*8]
 * 0000000140BC4D22: jmp     short loc_140BC4D45
 * 0000000140BC4D24: xor     [rdx], r8
 * 0000000140BC4D27: mov     rax, [rdx]
 * 0000000140BC4D2A: movzx   ecx, r8b
 * 0000000140BC4D2E: xor     rax, r10
 * 0000000140BC4D31: and     ecx, 3Fh
 * 0000000140BC4D34: ror     r8, cl
 * 0000000140BC4D37: add     r8, rax
 * 0000000140BC4D3A: xor     r8, 0EFAh
 * 0000000140BC4D41: add     rdx, 8
 * 0000000140BC4D45: cmp     rdx, r9
 * 0000000140BC4D48: jnz     short loc_140BC4D24
 * 0000000140BC4D4A: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC4D52: cmp     r8, [rsi+0A80h]
 * 0000000140BC4D59: jz      loc_140BC4BC6
 * 0000000140BC4D5F: mov     ecx, [rsi+804h]
 * 0000000140BC4D65: mov     rax, [rsi+588h]
 * 0000000140BC4D6C: mov     [rax], rsi
 * 0000000140BC4D6F: mov     [rax+10h], ecx
 * 0000000140BC4D72: mov     rcx, [rsi+0A80h]
 * 0000000140BC4D79: cmp     [rsi+918h], r12d
 * 0000000140BC4D80: jnz     short loc_140BC4D90
 * 0000000140BC4D82: mov     rax, [rsi+588h]
 * 0000000140BC4D89: xor     rcx, r8
 * 0000000140BC4D8C: mov     [rax+18h], rcx
 * 0000000140BC4D90: xor     edx, edx
 * 0000000140BC4D92: mov     r9d, 100h
 * 0000000140BC4D98: mov     rcx, rsi
 * 0000000140BC4D9B: call    sub_140BDA384
 * 0000000140BC4DA0: jmp     loc_140BC4BC6
 * 0000000140BC4DA5: lock or [rsp+9D0h+var_9D0], r12d
 * 0000000140BC4DAA: mov     eax, [r13+18h]
 * 0000000140BC4DAE: test    bl, al
 * 0000000140BC4DB0: jz      short loc_140BC4DC3
 * 0000000140BC4DB2: mov     rax, [rsi+578h]
 * 0000000140BC4DB9: mov     cl, [rax]
 * 0000000140BC4DBB: test    cl, cl
 * 0000000140BC4DBD: jnz     loc_140BC4F8E
 * 0000000140BC4DC3: mov     ecx, [r13+10h]
 * 0000000140BC4DC7: mov     rdx, [r13+8]
 * 0000000140BC4DCB: test    rcx, rcx
 * 0000000140BC4DCE: jz      loc_140BC4E71
 * 0000000140BC4DD4: mov     eax, [rsi+9DCh]
 * 0000000140BC4DDA: mov     r8d, 40h ; '@'
 * 0000000140BC4DE0: test    r8b, al
 * 0000000140BC4DE3: jz      loc_140BC4E71
 * 0000000140BC4DE9: mov     r14, cr8
 * 0000000140BC4DED: mov     rbx, rdx
 * 0000000140BC4DF0: lea     r12, [rcx-1]
 * 0000000140BC4DF4: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140BC4DFB: add     r12, rdx
 * 0000000140BC4DFE: or      r12, 0FFFh
 * 0000000140BC4E05: lea     r15, [rbx-1]
 * 0000000140BC4E09: mov     eax, 2
 * 0000000140BC4E0E: mov     cr8, rax
 * 0000000140BC4E12: mov     rax, [rsi+468h]
 * 0000000140BC4E19: xor     edx, edx
 * 0000000140BC4E1B: mov     rcx, rbx
 * 0000000140BC4E1E: call    KeGuardDispatchICall
 * 0000000140BC4E23: cmp     eax, 0C000022Dh
 * 0000000140BC4E28: jnz     short loc_140BC4E40
 * 0000000140BC4E2A: mov     eax, 1
 * 0000000140BC4E2F: cmp     r14b, al
 * 0000000140BC4E32: ja      short loc_140BC4E44
 * 0000000140BC4E34: movzx   eax, r14b
 * 0000000140BC4E38: mov     cr8, rax
 * 0000000140BC4E3C: mov     al, [rbx]
 * 0000000140BC4E3E: jmp     short loc_140BC4E09
 * 0000000140BC4E40: test    eax, eax
 * 0000000140BC4E42: js      short loc_140BC4E61
 * 0000000140BC4E44: mov     eax, 1000h
 * 0000000140BC4E49: add     rbx, rax
 * 0000000140BC4E4C: add     r15, rax
 * 0000000140BC4E4F: cmp     r15, r12
 * 0000000140BC4E52: jnz     short loc_140BC4E12
 * 0000000140BC4E54: movzx   eax, r14b
 * 0000000140BC4E58: mov     cr8, rax
 * 0000000140BC4E5C: jmp     loc_140BC4F8E
 * 0000000140BC4E61: movzx   eax, r14b
 * 0000000140BC4E65: mov     cr8, rax
 * 0000000140BC4E69: xor     r12d, r12d
 * 0000000140BC4E6C: lea     ebx, [r12+1]
 * 0000000140BC4E71: mov     rcx, [r13+8]
 * 0000000140BC4E75: cmp     [rsi+918h], r12d
 * 0000000140BC4E7C: jnz     loc_140BC4F8E
 * 0000000140BC4E82: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC4E8C: add     rax, rsi
 * 0000000140BC4E8F: mov     [rsi+920h], rax
 * 0000000140BC4E96: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC4EA0: add     rax, r13
 * 0000000140BC4EA3: mov     [rsi+928h], rax
 * 0000000140BC4EAA: movsxd  rax, dword ptr [r13+0]
 * 0000000140BC4EAE: mov     [rsi+930h], rax
 * 0000000140BC4EB5: mov     [rsi+938h], rcx
 * 0000000140BC4EBC: mov     [rsi+918h], ebx
 * 0000000140BC4EC2: mov     ecx, [rsi+9D8h]
 * 0000000140BC4EC8: bt      ecx, 1Dh
 * 0000000140BC4ECC: jb      loc_140BC4F8E
 * 0000000140BC4ED2: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC4EDC: jz      loc_140BC4F8E
 * 0000000140BC4EE2: test    bl, cl
 * 0000000140BC4EE4: jz      loc_140BC4F8E
 * 0000000140BC4EEA: mov     ecx, [rsi+0A74h]
 * 0000000140BC4EF0: mov     eax, [rsi+804h]
 * 0000000140BC4EF6: mov     r10, [rsi+838h]
 * 0000000140BC4EFD: sub     eax, ecx
 * 0000000140BC4EFF: mov     r8, [rsi+0A78h]
 * 0000000140BC4F06: lea     rdx, [rcx+rsi]
 * 0000000140BC4F0A: mov     ecx, eax
 * 0000000140BC4F0C: shr     rcx, 3
 * 0000000140BC4F10: lea     r9, [rdx+rcx*8]
 * 0000000140BC4F14: jmp     short loc_140BC4F37
 * 0000000140BC4F16: xor     [rdx], r8
 * 0000000140BC4F19: mov     rax, [rdx]
 * 0000000140BC4F1C: movzx   ecx, r8b
 * 0000000140BC4F20: xor     rax, r10
 * 0000000140BC4F23: and     ecx, 3Fh
 * 0000000140BC4F26: ror     r8, cl
 * 0000000140BC4F29: add     r8, rax
 * 0000000140BC4F2C: xor     r8, 0EFAh
 * 0000000140BC4F33: add     rdx, 8
 * 0000000140BC4F37: cmp     rdx, r9
 * 0000000140BC4F3A: jnz     short loc_140BC4F16
 * 0000000140BC4F3C: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC4F44: cmp     r8, [rsi+0A80h]
 * 0000000140BC4F4B: jz      short loc_140BC4F8E
 * 0000000140BC4F4D: mov     ecx, [rsi+804h]
 * 0000000140BC4F53: mov     rax, [rsi+588h]
 * 0000000140BC4F5A: mov     [rax], rsi
 * 0000000140BC4F5D: mov     [rax+10h], ecx
 * 0000000140BC4F60: mov     rcx, [rsi+0A80h]
 * 0000000140BC4F67: cmp     [rsi+918h], r12d
 * 0000000140BC4F6E: jnz     short loc_140BC4F7E
 * 0000000140BC4F70: mov     rax, [rsi+588h]
 * 0000000140BC4F77: xor     rcx, r8
 * 0000000140BC4F7A: mov     [rax+18h], rcx
 * 0000000140BC4F7E: xor     edx, edx
 * 0000000140BC4F80: mov     r9d, 100h
 * 0000000140BC4F86: mov     rcx, rsi
 * 0000000140BC4F89: call    sub_140BDA384
 * 0000000140BC4F8E: mov     eax, [r13+10h]
 * 0000000140BC4F92: shl     eax, 4
 * 0000000140BC4F95: add     [rsi+848h], eax
 * 0000000140BC4F9B: mov     r11d, 1000h
 * 0000000140BC4FA1: xor     r15d, r15d
 * 0000000140BC4FA4: mov     ebx, 1
 * 0000000140BC4FA9: mov     r12d, 6
 * 0000000140BC4FAF: mov     ecx, [rbp+8D0h+var_8C4]
 * 0000000140BC4FB2: cmp     [rsi+844h], r15d
 * 0000000140BC4FB9: jz      short loc_140BC4FC2
 * 0000000140BC4FBB: mov     eax, 0FFFFFFFFh
 * 0000000140BC4FC0: add     ecx, eax
 * 0000000140BC4FC2: add     ecx, ebx
 * 0000000140BC4FC4: mov     [rbp+8D0h+var_8C4], ecx
 * 0000000140BC4FC7: cmp     [rsi+918h], r15d
 * 0000000140BC4FCE: jnz     loc_140BD2466
 * 0000000140BC4FD4: mov     eax, [rsi+84Ch]
 * 0000000140BC4FDA: cmp     [rsi+848h], eax
 * 0000000140BC4FE0: jge     loc_140BD2466
 * 0000000140BC4FE6: mov     edx, 28h ; '('
 * 0000000140BC4FEB: lea     r14d, [rdx-23h]
 * 0000000140BC4FEF: jmp     loc_140BC4659
 * 0000000140BC4FF4: mov     r15d, [rsi+844h]
 * 0000000140BC4FFB: lea     rax, [r13+30h]
 * 0000000140BC4FFF: mov     r12d, [r13+1Ch]
 * 0000000140BC5003: mov     rdi, [rsp+9D0h+var_980]
 * 0000000140BC5008: shl     r15, 4
 * 0000000140BC500C: shl     r12, 4
 * 0000000140BC5010: add     r15, rax
 * 0000000140BC5013: add     r12, rax
 * 0000000140BC5016: mov     [rsp+9D0h+var_978], r12
 * 0000000140BC501B: xor     edx, edx
 * 0000000140BC501D: cmp     [r15], edx
 * 0000000140BC5020: jl      loc_140BC5386
 * 0000000140BC5026: mov     r13, [r15+8]
 * 0000000140BC502A: mov     r14d, [r15+4]
 * 0000000140BC502E: mov     r8, r13
 * 0000000140BC5031: add     [rsi+848h], r14d
 * 0000000140BC5038: mov     rax, r13
 * 0000000140BC503B: mov     r10d, [rsi+834h]
 * 0000000140BC5042: mov     r11, [rsi+838h]
 * 0000000140BC5049: lea     rcx, [r14+r13]
 * 0000000140BC504D: mov     [rbp+8D0h+var_940], r13
 * 0000000140BC5051: mov     dword ptr [rbp+8D0h+arg_8], r14d
 * 0000000140BC5058: cmp     r13, rcx
 * 0000000140BC505B: jnb     short loc_140BC506E
 * 0000000140BC505D: mov     r9d, 40h ; '@'
 * 0000000140BC5063: prefetchnta byte ptr [rax]
 * 0000000140BC5066: add     rax, r9
 * 0000000140BC5069: cmp     rax, rcx
 * 0000000140BC506C: jb      short loc_140BC5063
 * 0000000140BC506E: mov     r9d, r14d
 * 0000000140BC5071: mov     rbx, r11
 * 0000000140BC5074: shr     r9d, 7
 * 0000000140BC5078: test    r9d, r9d
 * 0000000140BC507B: jz      short loc_140BC50F3
 * 0000000140BC507D: mov     esi, 0FFFFFFFFh
 * 0000000140BC5082: mov     r12d, 1
 * 0000000140BC5088: mov     r14, 7010008004002001h
 * 0000000140BC5092: mov     eax, 8
 * 0000000140BC5097: xor     rbx, [r8]
 * 0000000140BC509A: mov     ecx, r10d
 * 0000000140BC509D: rol     rbx, cl
 * 0000000140BC50A0: xor     rbx, [r8+8]
 * 0000000140BC50A4: add     r8, 10h
 * 0000000140BC50A8: rol     rbx, cl
 * 0000000140BC50AB: sub     rax, r12
 * 0000000140BC50AE: jnz     short loc_140BC5097
 * 0000000140BC50B0: mov     rcx, r8
 * 0000000140BC50B3: sub     rcx, r13
 * 0000000140BC50B6: xor     rcx, r11
 * 0000000140BC50B9: mov     rax, rcx
 * 0000000140BC50BC: rol     rax, 11h
 * 0000000140BC50C0: xor     rcx, rax
 * 0000000140BC50C3: mov     rax, r14
 * 0000000140BC50C6: mul     rcx
 * 0000000140BC50C9: xor     eax, edx
 * 0000000140BC50CB: mov     [rbp+8D0h+var_338], rdx
 * 0000000140BC50D2: xor     r10d, eax
 * 0000000140BC50D5: and     r10d, 3Fh
 * 0000000140BC50D9: cmovz   r10d, r12d
 * 0000000140BC50DD: add     r9d, esi
 * 0000000140BC50E0: jnz     short loc_140BC5092
 * 0000000140BC50E2: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC50E7: mov     r14d, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BC50EE: mov     r12, [rsp+9D0h+var_978]
 * 0000000140BC50F3: mov     edx, r14d
 * 0000000140BC50F6: mov     r9d, 1
 * 0000000140BC50FC: and     edx, 7Fh
 * 0000000140BC50FF: cmp     edx, 8
 * 0000000140BC5102: jb      short loc_140BC511F
 * 0000000140BC5104: mov     eax, edx
 * 0000000140BC5106: shr     rax, 3
 * 0000000140BC510A: xor     rbx, [r8]
 * 0000000140BC510D: mov     ecx, r10d
 * 0000000140BC5110: rol     rbx, cl
 * 0000000140BC5113: add     r8, 8
 * 0000000140BC5117: add     edx, 0FFFFFFF8h
 * 0000000140BC511A: sub     rax, r9
 * 0000000140BC511D: jnz     short loc_140BC510A
 * 0000000140BC511F: test    edx, edx
 * 0000000140BC5121: jz      short loc_140BC5141
 * 0000000140BC5123: mov     esi, 0FFFFFFFFh
 * 0000000140BC5128: movzx   eax, byte ptr [r8]
 * 0000000140BC512C: mov     ecx, r10d
 * 0000000140BC512F: xor     rbx, rax
 * 0000000140BC5132: add     r8, r9
 * 0000000140BC5135: rol     rbx, cl
 * 0000000140BC5138: add     edx, esi
 * 0000000140BC513A: jnz     short loc_140BC5128
 * 0000000140BC513C: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC5141: mov     rax, rbx
 * 0000000140BC5144: shr     rax, 1Fh
 * 0000000140BC5148: xor     edx, edx
 * 0000000140BC514A: jmp     short loc_140BC5152
 * 0000000140BC514C: xor     ebx, eax
 * 0000000140BC514E: shr     rax, 1Fh
 * 0000000140BC5152: test    rax, rax
 * 0000000140BC5155: jnz     short loc_140BC514C
 * 0000000140BC5157: mov     eax, [r15]
 * 0000000140BC515A: btr     ebx, 1Fh
 * 0000000140BC515E: btr     eax, 1Fh
 * 0000000140BC5162: cmp     ebx, eax
 * 0000000140BC5164: jz      loc_140BC53B7
 * 0000000140BC516A: mov     ecx, r14d
 * 0000000140BC516D: test    r14d, r14d
 * 0000000140BC5170: jz      loc_140BC520E
 * 0000000140BC5176: mov     eax, [rsi+9DCh]
 * 0000000140BC517C: mov     r8d, 40h ; '@'
 * 0000000140BC5182: test    r8b, al
 * 0000000140BC5185: jz      loc_140BC520E
 * 0000000140BC518B: mov     r12, cr8
 * 0000000140BC518F: lea     eax, [r8-3Eh]
 * 0000000140BC5193: mov     cr8, rax
 * 0000000140BC5197: mov     r14, r13
 * 0000000140BC519A: lea     rax, [r13-1]
 * 0000000140BC519E: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140BC51A5: add     rax, rcx
 * 0000000140BC51A8: or      rax, 0FFFh
 * 0000000140BC51AE: mov     [rsp+9D0h+var_968], rax
 * 0000000140BC51B3: lea     r13, [r14-1]
 * 0000000140BC51B7: mov     rax, [rsi+468h]
 * 0000000140BC51BE: xor     edx, edx
 * 0000000140BC51C0: mov     rcx, r14
 * 0000000140BC51C3: call    KeGuardDispatchICall
 * 0000000140BC51C8: cmp     eax, 0C000022Dh
 * 0000000140BC51CD: jnz     short loc_140BC51F3
 * 0000000140BC51CF: mov     eax, 1
 * 0000000140BC51D4: cmp     r12b, al
 * 0000000140BC51D7: ja      loc_140BC52D5
 * 0000000140BC51DD: movzx   eax, r12b
 * 0000000140BC51E1: mov     cr8, rax
 * 0000000140BC51E5: mov     al, [r14]
 * 0000000140BC51E8: mov     eax, 2
 * 0000000140BC51ED: mov     cr8, rax
 * 0000000140BC51F1: jmp     short loc_140BC51B7
 * 0000000140BC51F3: xor     edx, edx
 * 0000000140BC51F5: test    eax, eax
 * 0000000140BC51F7: jns     loc_140BC52D7
 * 0000000140BC51FD: movzx   eax, r12b
 * 0000000140BC5201: mov     cr8, rax
 * 0000000140BC5205: mov     r13, [rbp+8D0h+var_940]
 * 0000000140BC5209: mov     r12, [rsp+9D0h+var_978]
 * 0000000140BC520E: mov     eax, [r15]
 * 0000000140BC5211: btr     eax, 1Fh
 * 0000000140BC5215: cmp     [rsi+918h], edx
 * 0000000140BC521B: jnz     loc_140BC53B7
 * 0000000140BC5221: mov     ecx, ebx
 * 0000000140BC5223: xor     rcx, rax
 * 0000000140BC5226: mov     rax, [rsi+588h]
 * 0000000140BC522D: mov     [rax+18h], rcx
 * 0000000140BC5231: cmp     [rsi+918h], edx
 * 0000000140BC5237: jnz     loc_140BC53B7
 * 0000000140BC523D: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC5247: mov     ebx, 1
 * 0000000140BC524C: add     rax, rsi
 * 0000000140BC524F: mov     [rsi+920h], rax
 * 0000000140BC5256: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC5260: add     rax, rdi
 * 0000000140BC5263: mov     [rsi+928h], rax
 * 0000000140BC526A: movsxd  rax, dword ptr [rdi]
 * 0000000140BC526D: mov     [rsi+930h], rax
 * 0000000140BC5274: mov     [rsi+938h], r13
 * 0000000140BC527B: mov     [rsi+918h], ebx
 * 0000000140BC5281: mov     ecx, [rsi+9D8h]
 * 0000000140BC5287: bt      ecx, 1Dh
 * 0000000140BC528B: jb      loc_140BC5380
 * 0000000140BC5291: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC529B: jz      loc_140BC5380
 * 0000000140BC52A1: test    bl, cl
 * 0000000140BC52A3: jz      loc_140BC5380
 * 0000000140BC52A9: mov     ecx, [rsi+0A74h]
 * 0000000140BC52AF: mov     eax, [rsi+804h]
 * 0000000140BC52B5: mov     r10, [rsi+838h]
 * 0000000140BC52BC: sub     eax, ecx
 * 0000000140BC52BE: mov     r8, [rsi+0A78h]
 * 0000000140BC52C5: lea     rdx, [rcx+rsi]
 * 0000000140BC52C9: mov     ecx, eax
 * 0000000140BC52CB: shr     rcx, 3
 * 0000000140BC52CF: lea     r9, [rdx+rcx*8]
 * 0000000140BC52D3: jmp     short loc_140BC5326
 * 0000000140BC52D5: xor     edx, edx
 * 0000000140BC52D7: mov     r11d, 1000h
 * 0000000140BC52DD: add     r14, r11
 * 0000000140BC52E0: add     r13, r11
 * 0000000140BC52E3: cmp     r13, [rsp+9D0h+var_968]
 * 0000000140BC52E8: jnz     loc_140BC51B7
 * 0000000140BC52EE: movzx   eax, r12b
 * 0000000140BC52F2: mov     cr8, rax
 * 0000000140BC52F6: mov     r12, [rsp+9D0h+var_978]
 * 0000000140BC52FB: mov     ebx, 1
 * 0000000140BC5300: jmp     loc_140BC5386
 * 0000000140BC5305: xor     [rdx], r8
 * 0000000140BC5308: mov     rax, [rdx]
 * 0000000140BC530B: movzx   ecx, r8b
 * 0000000140BC530F: xor     rax, r10
 * 0000000140BC5312: and     ecx, 3Fh
 * 0000000140BC5315: ror     r8, cl
 * 0000000140BC5318: add     r8, rax
 * 0000000140BC531B: xor     r8, 0EFAh
 * 0000000140BC5322: add     rdx, 8
 * 0000000140BC5326: cmp     rdx, r9
 * 0000000140BC5329: jnz     short loc_140BC5305
 * 0000000140BC532B: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC5333: cmp     r8, [rsi+0A80h]
 * 0000000140BC533A: jz      short loc_140BC537E
 * 0000000140BC533C: mov     rax, [rsi+588h]
 * 0000000140BC5343: mov     ecx, [rsi+804h]
 * 0000000140BC5349: mov     [rax], rsi
 * 0000000140BC534C: mov     [rax+10h], ecx
 * 0000000140BC534F: xor     eax, eax
 * 0000000140BC5351: mov     rcx, [rsi+0A80h]
 * 0000000140BC5358: cmp     [rsi+918h], eax
 * 0000000140BC535E: jnz     short loc_140BC536E
 * 0000000140BC5360: mov     rax, [rsi+588h]
 * 0000000140BC5367: xor     rcx, r8
 * 0000000140BC536A: mov     [rax+18h], rcx
 * 0000000140BC536E: xor     edx, edx
 * 0000000140BC5370: mov     r9d, 100h
 * 0000000140BC5376: mov     rcx, rsi
 * 0000000140BC5379: call    sub_140BDA384
 * 0000000140BC537E: xor     edx, edx
 * 0000000140BC5380: mov     r11d, 1000h
 * 0000000140BC5386: add     r15, 10h
 * 0000000140BC538A: cmp     r15, r12
 * 0000000140BC538D: jnb     short loc_140BC53A4
 * 0000000140BC538F: mov     eax, [rsi+84Ch]
 * 0000000140BC5395: cmp     [rsi+848h], eax
 * 0000000140BC539B: jl      loc_140BC501D
 * 0000000140BC53A1: cmp     r15, r12
 * 0000000140BC53A4: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC53AB: mov     ecx, 844h
 * 0000000140BC53B0: jnz     short loc_140BC53BE
 * 0000000140BC53B2: mov     r15d, edx
 * 0000000140BC53B5: jmp     short loc_140BC53CE
 * 0000000140BC53B7: mov     ebx, 1
 * 0000000140BC53BC: jmp     short loc_140BC5380
 * 0000000140BC53BE: mov     rax, [rsp+9D0h+var_980]
 * 0000000140BC53C3: add     rax, 30h ; '0'
 * 0000000140BC53C7: sub     r15, rax
 * 0000000140BC53CA: sar     r15, 4
 * 0000000140BC53CE: mov     rax, rsi
 * 0000000140BC53D1: mov     [rax+rcx], r15d
 * 0000000140BC53D5: xor     r15d, r15d
 * 0000000140BC53D8: jmp     loc_140BC4FA9
 * 0000000140BC53DD: mov     rbx, [r13+18h]
 * 0000000140BC53E1: mov     r8, 0A3A03F5891C8B4E8h
 * 0000000140BC53EB: mov     rdx, [rsi+700h]
 * 0000000140BC53F2: mov     r12d, 1
 * 0000000140BC53F8: mov     rcx, [rsi+730h]
 * 0000000140BC53FF: add     rdx, rbx
 * 0000000140BC5402: movzx   eax, word ptr [r13+22h]
 * 0000000140BC5407: cmp     [rdx+rcx], ax
 * 0000000140BC540B: mov     rdx, 0B3B74BDEE4453415h
 * 0000000140BC5415: jz      loc_140BC5538
 * 0000000140BC541B: cmp     [rsi+918h], r15d
 * 0000000140BC5422: jnz     loc_140BC5538
 * 0000000140BC5428: lea     rax, [rsi+r8]
 * 0000000140BC542C: mov     [rsi+920h], rax
 * 0000000140BC5433: lea     rax, [rdx+r13]
 * 0000000140BC5437: mov     [rsi+928h], rax
 * 0000000140BC543E: movsxd  rax, dword ptr [r13+0]
 * 0000000140BC5442: mov     [rsi+930h], rax
 * 0000000140BC5449: mov     [rsi+938h], rbx
 * 0000000140BC5450: mov     [rsi+918h], r12d
 * 0000000140BC5457: mov     ecx, [rsi+9D8h]
 * 0000000140BC545D: bt      ecx, 1Dh
 * 0000000140BC5461: jb      loc_140BC5538
 * 0000000140BC5467: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC5471: jz      loc_140BC5538
 * 0000000140BC5477: test    r12b, cl
 * 0000000140BC547A: jz      loc_140BC5538
 * 0000000140BC5480: mov     ecx, [rsi+0A74h]
 * 0000000140BC5486: mov     eax, [rsi+804h]
 * 0000000140BC548C: mov     r10, [rsi+838h]
 * 0000000140BC5493: sub     eax, ecx
 * 0000000140BC5495: mov     r8, [rsi+0A78h]
 * 0000000140BC549C: lea     rdx, [rcx+rsi]
 * 0000000140BC54A0: mov     ecx, eax
 * 0000000140BC54A2: shr     rcx, 3
 * 0000000140BC54A6: lea     r9, [rdx+rcx*8]
 * 0000000140BC54AA: jmp     short loc_140BC54CD
 * 0000000140BC54AC: xor     [rdx], r8
 * 0000000140BC54AF: mov     rax, [rdx]
 * 0000000140BC54B2: movzx   ecx, r8b
 * 0000000140BC54B6: xor     rax, r10
 * 0000000140BC54B9: and     ecx, 3Fh
 * 0000000140BC54BC: ror     r8, cl
 * 0000000140BC54BF: add     r8, rax
 * 0000000140BC54C2: xor     r8, 0EFAh
 * 0000000140BC54C9: add     rdx, 8
 * 0000000140BC54CD: cmp     rdx, r9
 * 0000000140BC54D0: jnz     short loc_140BC54AC
 * 0000000140BC54D2: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC54DA: cmp     r8, [rsi+0A80h]
 * 0000000140BC54E1: jz      short loc_140BC5524
 * 0000000140BC54E3: mov     ecx, [rsi+804h]
 * 0000000140BC54E9: mov     rax, [rsi+588h]
 * 0000000140BC54F0: mov     [rax], rsi
 * 0000000140BC54F3: mov     [rax+10h], ecx
 * 0000000140BC54F6: mov     rcx, [rsi+0A80h]
 * 0000000140BC54FD: cmp     [rsi+918h], r15d
 * 0000000140BC5504: jnz     short loc_140BC5514
 * 0000000140BC5506: mov     rax, [rsi+588h]
 * 0000000140BC550D: xor     rcx, r8
 * 0000000140BC5510: mov     [rax+18h], rcx
 * 0000000140BC5514: xor     edx, edx
 * 0000000140BC5516: mov     r9d, 100h
 * 0000000140BC551C: mov     rcx, rsi
 * 0000000140BC551F: call    sub_140BDA384
 * 0000000140BC5524: mov     r8, 0A3A03F5891C8B4E8h
 * 0000000140BC552E: mov     rdx, 0B3B74BDEE4453415h
 * 0000000140BC5538: movzx   eax, word ptr [r13+22h]
 * 0000000140BC553D: test    [rsi+738h], ax
 * 0000000140BC5544: jnz     loc_140BC5666
 * 0000000140BC554A: mov     rcx, [rsi+708h]
 * 0000000140BC5551: add     rcx, rbx
 * 0000000140BC5554: cmp     [rcx], rcx
 * 0000000140BC5557: jz      loc_140BC5666
 * 0000000140BC555D: cmp     [rsi+918h], r15d
 * 0000000140BC5564: jnz     loc_140BC5666
 * 0000000140BC556A: lea     rax, [rsi+r8]
 * 0000000140BC556E: mov     [rsi+920h], rax
 * 0000000140BC5575: lea     rax, [rdx+r13]
 * 0000000140BC5579: mov     [rsi+928h], rax
 * 0000000140BC5580: movsxd  rax, dword ptr [r13+0]
 * 0000000140BC5584: mov     [rsi+930h], rax
 * 0000000140BC558B: mov     [rsi+938h], rbx
 * 0000000140BC5592: mov     [rsi+918h], r12d
 * 0000000140BC5599: mov     ecx, [rsi+9D8h]
 * 0000000140BC559F: bt      ecx, 1Dh
 * 0000000140BC55A3: jb      loc_140BC5666
 * 0000000140BC55A9: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC55B3: jz      loc_140BC5666
 * 0000000140BC55B9: test    r12b, cl
 * 0000000140BC55BC: jz      loc_140BC5666
 * 0000000140BC55C2: mov     ecx, [rsi+0A74h]
 * 0000000140BC55C8: mov     eax, [rsi+804h]
 * 0000000140BC55CE: mov     r10, [rsi+838h]
 * 0000000140BC55D5: sub     eax, ecx
 * 0000000140BC55D7: mov     r8, [rsi+0A78h]
 * 0000000140BC55DE: lea     rdx, [rcx+rsi]
 * 0000000140BC55E2: mov     ecx, eax
 * 0000000140BC55E4: shr     rcx, 3
 * 0000000140BC55E8: lea     r9, [rdx+rcx*8]
 * 0000000140BC55EC: jmp     short loc_140BC560F
 * 0000000140BC55EE: xor     [rdx], r8
 * 0000000140BC55F1: mov     rax, [rdx]
 * 0000000140BC55F4: movzx   ecx, r8b
 * 0000000140BC55F8: xor     rax, r10
 * 0000000140BC55FB: and     ecx, 3Fh
 * 0000000140BC55FE: ror     r8, cl
 * 0000000140BC5601: add     r8, rax
 * 0000000140BC5604: xor     r8, 0EFAh
 * 0000000140BC560B: add     rdx, 8
 * 0000000140BC560F: cmp     rdx, r9
 * 0000000140BC5612: jnz     short loc_140BC55EE
 * 0000000140BC5614: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC561C: cmp     r8, [rsi+0A80h]
 * 0000000140BC5623: jz      short loc_140BC5666
 * 0000000140BC5625: mov     ecx, [rsi+804h]
 * 0000000140BC562B: mov     rax, [rsi+588h]
 * 0000000140BC5632: mov     [rax], rsi
 * 0000000140BC5635: mov     [rax+10h], ecx
 * 0000000140BC5638: mov     rcx, [rsi+0A80h]
 * 0000000140BC563F: cmp     [rsi+918h], r15d
 * 0000000140BC5646: jnz     short loc_140BC5656
 * 0000000140BC5648: mov     rax, [rsi+588h]
 * 0000000140BC564F: xor     rcx, r8
 * 0000000140BC5652: mov     [rax+18h], rcx
 * 0000000140BC5656: xor     edx, edx
 * 0000000140BC5658: mov     r9d, 100h
 * 0000000140BC565E: mov     rcx, rsi
 * 0000000140BC5661: call    sub_140BDA384
 * 0000000140BC5666: mov     r14, [r13+8]
 * 0000000140BC566A: mov     r8d, [r13+10h]
 * 0000000140BC566E: mov     r9, r14
 * 0000000140BC5671: add     [rsi+848h], r8d
 * 0000000140BC5678: mov     rax, r14
 * 0000000140BC567B: mov     r10d, [rsi+834h]
 * 0000000140BC5682: mov     r15, [rsi+838h]
 * 0000000140BC5689: lea     rcx, [r14+r8]
 * 0000000140BC568D: cmp     r14, rcx
 * 0000000140BC5690: jnb     short loc_140BC56A2
 * 0000000140BC5692: mov     edx, 40h ; '@'
 * 0000000140BC5697: prefetchnta byte ptr [rax]
 * 0000000140BC569A: add     rax, rdx
 * 0000000140BC569D: cmp     rax, rcx
 * 0000000140BC56A0: jb      short loc_140BC5697
 * 0000000140BC56A2: mov     r11d, r8d
 * 0000000140BC56A5: mov     rbx, r15
 * 0000000140BC56A8: shr     r11d, 7
 * 0000000140BC56AC: test    r11d, r11d
 * 0000000140BC56AF: jz      short loc_140BC5718
 * 0000000140BC56B1: mov     rsi, 7010008004002001h
 * 0000000140BC56BB: mov     eax, 8
 * 0000000140BC56C0: xor     rbx, [r9]
 * 0000000140BC56C3: mov     ecx, r10d
 * 0000000140BC56C6: rol     rbx, cl
 * 0000000140BC56C9: xor     rbx, [r9+8]
 * 0000000140BC56CD: add     r9, 10h
 * 0000000140BC56D1: rol     rbx, cl
 * 0000000140BC56D4: sub     rax, r12
 * 0000000140BC56D7: jnz     short loc_140BC56C0
 * 0000000140BC56D9: mov     rcx, r9
 * 0000000140BC56DC: sub     rcx, r14
 * 0000000140BC56DF: xor     rcx, r15
 * 0000000140BC56E2: mov     rax, rcx
 * 0000000140BC56E5: rol     rax, 11h
 * 0000000140BC56E9: xor     rcx, rax
 * 0000000140BC56EC: mov     rax, rsi
 * 0000000140BC56EF: mul     rcx
 * 0000000140BC56F2: xor     r10d, eax
 * 0000000140BC56F5: mov     [rbp+8D0h+var_330], rdx
 * 0000000140BC56FC: xor     r10d, edx
 * 0000000140BC56FF: mov     edx, 0FFFFFFFFh
 * 0000000140BC5704: and     r10d, 3Fh
 * 0000000140BC5708: cmovz   r10d, r12d
 * 0000000140BC570C: add     r11d, edx
 * 0000000140BC570F: jnz     short loc_140BC56BB
 * 0000000140BC5711: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC5716: jmp     short loc_140BC571D
 * 0000000140BC5718: mov     edx, 0FFFFFFFFh
 * 0000000140BC571D: and     r8d, 7Fh
 * 0000000140BC5721: cmp     r8d, 8
 * 0000000140BC5725: jb      short loc_140BC5744
 * 0000000140BC5727: mov     eax, r8d
 * 0000000140BC572A: shr     rax, 3
 * 0000000140BC572E: xor     rbx, [r9]
 * 0000000140BC5731: mov     ecx, r10d
 * 0000000140BC5734: rol     rbx, cl
 * 0000000140BC5737: add     r9, 8
 * 0000000140BC573B: add     r8d, 0FFFFFFF8h
 * 0000000140BC573F: sub     rax, r12
 * 0000000140BC5742: jnz     short loc_140BC572E
 * 0000000140BC5744: xor     r15d, r15d
 * 0000000140BC5747: test    r8d, r8d
 * 0000000140BC574A: jz      short loc_140BC5761
 * 0000000140BC574C: movzx   eax, byte ptr [r9]
 * 0000000140BC5750: mov     ecx, r10d
 * 0000000140BC5753: xor     rbx, rax
 * 0000000140BC5756: add     r9, r12
 * 0000000140BC5759: rol     rbx, cl
 * 0000000140BC575C: add     r8d, edx
 * 0000000140BC575F: jnz     short loc_140BC574C
 * 0000000140BC5761: mov     rax, rbx
 * 0000000140BC5764: jmp     short loc_140BC5768
 * 0000000140BC5766: xor     ebx, eax
 * 0000000140BC5768: shr     rax, 1Fh
 * 0000000140BC576C: test    rax, rax
 * 0000000140BC576F: jnz     short loc_140BC5766
 * 0000000140BC5771: btr     ebx, 1Fh
 * 0000000140BC5775: mov     r12d, r15d
 * 0000000140BC5778: cmp     ebx, [r13+14h]
 * 0000000140BC577C: jz      loc_140BC5852
 * 0000000140BC5782: cmp     [r13+0], r15d
 * 0000000140BC5786: jnz     short loc_140BC5795
 * 0000000140BC5788: cmp     [r13+18h], r15d
 * 0000000140BC578C: mov     eax, 1
 * 0000000140BC5791: cmovnz  r12d, eax
 * 0000000140BC5795: mov     ecx, [r13+10h]
 * 0000000140BC5799: mov     rdx, [r13+8]
 * 0000000140BC579D: test    rcx, rcx
 * 0000000140BC57A0: jz      loc_140BC5981
 * 0000000140BC57A6: mov     eax, [rsi+9DCh]
 * 0000000140BC57AC: mov     r8d, 40h ; '@'
 * 0000000140BC57B2: test    r8b, al
 * 0000000140BC57B5: jz      loc_140BC5981
 * 0000000140BC57BB: mov     r15, cr8
 * 0000000140BC57BF: lea     eax, [r8-3Eh]
 * 0000000140BC57C3: mov     cr8, rax
 * 0000000140BC57C7: mov     r14, rdx
 * 0000000140BC57CA: lea     rax, [rcx-1]
 * 0000000140BC57CE: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140BC57D5: add     rax, rdx
 * 0000000140BC57D8: or      rax, 0FFFh
 * 0000000140BC57DE: mov     [rsp+9D0h+var_978], rax
 * 0000000140BC57E3: lea     r13, [r14-1]
 * 0000000140BC57E7: mov     rax, [rsi+468h]
 * 0000000140BC57EE: xor     edx, edx
 * 0000000140BC57F0: mov     rcx, r14
 * 0000000140BC57F3: call    KeGuardDispatchICall
 * 0000000140BC57F8: cmp     eax, 0C000022Dh
 * 0000000140BC57FD: jnz     short loc_140BC5828
 * 0000000140BC57FF: test    r12d, r12d
 * 0000000140BC5802: jnz     loc_140BC5971
 * 0000000140BC5808: lea     eax, [r12+1]
 * 0000000140BC580D: cmp     r15b, al
 * 0000000140BC5810: ja      short loc_140BC5830
 * 0000000140BC5812: movzx   eax, r15b
 * 0000000140BC5816: mov     cr8, rax
 * 0000000140BC581A: mov     al, [r14]
 * 0000000140BC581D: lea     eax, [r12+2]
 * 0000000140BC5822: mov     cr8, rax
 * 0000000140BC5826: jmp     short loc_140BC57E7
 * 0000000140BC5828: test    eax, eax
 * 0000000140BC582A: js      loc_140BC5971
 * 0000000140BC5830: mov     eax, 1000h
 * 0000000140BC5835: add     r14, rax
 * 0000000140BC5838: add     r13, rax
 * 0000000140BC583B: cmp     r13, [rsp+9D0h+var_978]
 * 0000000140BC5840: jnz     short loc_140BC57E7
 * 0000000140BC5842: movzx   eax, r15b
 * 0000000140BC5846: mov     cr8, rax
 * 0000000140BC584A: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BC584F: xor     r15d, r15d
 * 0000000140BC5852: mov     r12, 0A3A03F5891C8B4E8h
 * 0000000140BC585C: mov     r14, 0B3B74BDEE4453415h
 * 0000000140BC5866: mov     ebx, 1
 * 0000000140BC586B: lea     rax, [r13+30h]
 * 0000000140BC586F: xor     r9d, r9d
 * 0000000140BC5872: mov     [rbp+8D0h+var_6D8], rax
 * 0000000140BC5879: lea     rcx, [rbp+8D0h+var_6E0]
 * 0000000140BC5880: movzx   eax, word ptr [r13+20h]
 * 0000000140BC5885: xor     r8d, r8d
 * 0000000140BC5888: mov     [rbp+8D0h+var_6E0], ax
 * 0000000140BC588F: xor     edx, edx
 * 0000000140BC5891: mov     [rbp+8D0h+var_6DE], ax
 * 0000000140BC5898: lea     rax, [rbp+8D0h+var_818]
 * 0000000140BC589F: mov     [rsp+9D0h+var_998], rax
 * 0000000140BC58A4: mov     rax, [rsi+500h]
 * 0000000140BC58AB: mov     [rsp+9D0h+var_9A0], r15
 * 0000000140BC58B0: mov     byte ptr [rsp+9D0h+var_9A8], r15b
 * 0000000140BC58B5: mov     [rsp+9D0h+BugCheckParameter4], rax
 * 0000000140BC58BA: mov     rax, [rsi+1F8h]
 * 0000000140BC58C1: call    KeGuardDispatchICall
 * 0000000140BC58C6: test    eax, eax
 * 0000000140BC58C8: js      loc_140BC5B58
 * 0000000140BC58CE: mov     rcx, [rbp+8D0h+var_818]
 * 0000000140BC58D5: cmp     rcx, [r13+18h]
 * 0000000140BC58D9: jz      loc_140BC5B4C
 * 0000000140BC58DF: cmp     [rsi+918h], r15d
 * 0000000140BC58E6: jnz     loc_140BC5B4C
 * 0000000140BC58EC: lea     rax, [rsi+r12]
 * 0000000140BC58F0: mov     [rsi+920h], rax
 * 0000000140BC58F7: lea     rax, [r14+r13]
 * 0000000140BC58FB: mov     [rsi+928h], rax
 * 0000000140BC5902: movsxd  rax, dword ptr [r13+0]
 * 0000000140BC5906: mov     [rsi+930h], rax
 * 0000000140BC590D: mov     [rsi+938h], rcx
 * 0000000140BC5914: mov     [rsi+918h], ebx
 * 0000000140BC591A: mov     ecx, [rsi+9D8h]
 * 0000000140BC5920: bt      ecx, 1Dh
 * 0000000140BC5924: jb      loc_140BC5B45
 * 0000000140BC592A: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC5934: jz      loc_140BC5B45
 * 0000000140BC593A: test    bl, cl
 * 0000000140BC593C: jz      loc_140BC5B45
 * 0000000140BC5942: mov     ecx, [rsi+0A74h]
 * 0000000140BC5948: mov     eax, [rsi+804h]
 * 0000000140BC594E: mov     r10, [rsi+838h]
 * 0000000140BC5955: sub     eax, ecx
 * 0000000140BC5957: mov     r8, [rsi+0A78h]
 * 0000000140BC595E: lea     rdx, [rcx+rsi]
 * 0000000140BC5962: mov     ecx, eax
 * 0000000140BC5964: shr     rcx, 3
 * 0000000140BC5968: lea     r9, [rdx+rcx*8]
 * 0000000140BC596C: jmp     loc_140BC5AEE
 * 0000000140BC5971: movzx   eax, r15b
 * 0000000140BC5975: mov     cr8, rax
 * 0000000140BC5979: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BC597E: xor     r15d, r15d
 * 0000000140BC5981: mov     eax, [r13+14h]
 * 0000000140BC5985: cmp     [rsi+918h], r15d
 * 0000000140BC598C: jnz     short loc_140BC59A0
 * 0000000140BC598E: mov     ecx, eax
 * 0000000140BC5990: mov     eax, ebx
 * 0000000140BC5992: xor     rcx, rax
 * 0000000140BC5995: mov     rax, [rsi+588h]
 * 0000000140BC599C: mov     [rax+18h], rcx
 * 0000000140BC59A0: mov     r12, 0A3A03F5891C8B4E8h
 * 0000000140BC59AA: mov     rcx, [r13+8]
 * 0000000140BC59AE: mov     r14, 0B3B74BDEE4453415h
 * 0000000140BC59B8: mov     ebx, 1
 * 0000000140BC59BD: cmp     [rsi+918h], r15d
 * 0000000140BC59C4: jnz     loc_140BC586B
 * 0000000140BC59CA: lea     rax, [rsi+r12]
 * 0000000140BC59CE: mov     [rsi+920h], rax
 * 0000000140BC59D5: lea     rax, [r14+r13]
 * 0000000140BC59D9: mov     [rsi+928h], rax
 * 0000000140BC59E0: movsxd  rax, dword ptr [r13+0]
 * 0000000140BC59E4: mov     [rsi+930h], rax
 * 0000000140BC59EB: mov     [rsi+938h], rcx
 * 0000000140BC59F2: mov     [rsi+918h], ebx
 * 0000000140BC59F8: mov     ecx, [rsi+9D8h]
 * 0000000140BC59FE: bt      ecx, 1Dh
 * 0000000140BC5A02: jb      loc_140BC586B
 * 0000000140BC5A08: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC5A12: jz      loc_140BC586B
 * 0000000140BC5A18: test    bl, cl
 * 0000000140BC5A1A: jz      loc_140BC586B
 * 0000000140BC5A20: mov     ecx, [rsi+0A74h]
 * 0000000140BC5A26: mov     eax, [rsi+804h]
 * 0000000140BC5A2C: mov     r10, [rsi+838h]
 * 0000000140BC5A33: sub     eax, ecx
 * 0000000140BC5A35: mov     r8, [rsi+0A78h]
 * 0000000140BC5A3C: lea     rdx, [rcx+rsi]
 * 0000000140BC5A40: mov     ecx, eax
 * 0000000140BC5A42: shr     rcx, 3
 * 0000000140BC5A46: lea     r9, [rdx+rcx*8]
 * 0000000140BC5A4A: jmp     short loc_140BC5A6D
 * 0000000140BC5A4C: xor     [rdx], r8
 * 0000000140BC5A4F: mov     rax, [rdx]
 * 0000000140BC5A52: movzx   ecx, r8b
 * 0000000140BC5A56: xor     rax, r10
 * 0000000140BC5A59: and     ecx, 3Fh
 * 0000000140BC5A5C: ror     r8, cl
 * 0000000140BC5A5F: add     r8, rax
 * 0000000140BC5A62: xor     r8, 0EFAh
 * 0000000140BC5A69: add     rdx, 8
 * 0000000140BC5A6D: cmp     rdx, r9
 * 0000000140BC5A70: jnz     short loc_140BC5A4C
 * 0000000140BC5A72: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC5A7A: cmp     r8, [rsi+0A80h]
 * 0000000140BC5A81: jz      loc_140BC586B
 * 0000000140BC5A87: mov     ecx, [rsi+804h]
 * 0000000140BC5A8D: mov     rax, [rsi+588h]
 * 0000000140BC5A94: mov     [rax], rsi
 * 0000000140BC5A97: mov     [rax+10h], ecx
 * 0000000140BC5A9A: mov     rcx, [rsi+0A80h]
 * 0000000140BC5AA1: cmp     [rsi+918h], r15d
 * 0000000140BC5AA8: jnz     short loc_140BC5AB8
 * 0000000140BC5AAA: mov     rax, [rsi+588h]
 * 0000000140BC5AB1: xor     rcx, r8
 * 0000000140BC5AB4: mov     [rax+18h], rcx
 * 0000000140BC5AB8: xor     edx, edx
 * 0000000140BC5ABA: mov     r9d, 100h
 * 0000000140BC5AC0: mov     rcx, rsi
 * 0000000140BC5AC3: call    sub_140BDA384
 * 0000000140BC5AC8: jmp     loc_140BC586B
 * 0000000140BC5ACD: xor     [rdx], r8
 * 0000000140BC5AD0: mov     rax, [rdx]
 * 0000000140BC5AD3: movzx   ecx, r8b
 * 0000000140BC5AD7: xor     rax, r10
 * 0000000140BC5ADA: and     ecx, 3Fh
 * 0000000140BC5ADD: ror     r8, cl
 * 0000000140BC5AE0: add     r8, rax
 * 0000000140BC5AE3: xor     r8, 0EFAh
 * 0000000140BC5AEA: add     rdx, 8
 * 0000000140BC5AEE: cmp     rdx, r9
 * 0000000140BC5AF1: jnz     short loc_140BC5ACD
 * 0000000140BC5AF3: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC5AFB: cmp     r8, [rsi+0A80h]
 * 0000000140BC5B02: jz      short loc_140BC5B45
 * 0000000140BC5B04: mov     ecx, [rsi+804h]
 * 0000000140BC5B0A: mov     rax, [rsi+588h]
 * 0000000140BC5B11: mov     [rax], rsi
 * 0000000140BC5B14: mov     [rax+10h], ecx
 * 0000000140BC5B17: mov     rcx, [rsi+0A80h]
 * 0000000140BC5B1E: cmp     [rsi+918h], r15d
 * 0000000140BC5B25: jnz     short loc_140BC5B35
 * 0000000140BC5B27: mov     rax, [rsi+588h]
 * 0000000140BC5B2E: xor     rcx, r8
 * 0000000140BC5B31: mov     [rax+18h], rcx
 * 0000000140BC5B35: xor     edx, edx
 * 0000000140BC5B37: mov     r9d, 100h
 * 0000000140BC5B3D: mov     rcx, rsi
 * 0000000140BC5B40: call    sub_140BDA384
 * 0000000140BC5B45: mov     rcx, [rbp+8D0h+var_818]
 * 0000000140BC5B4C: mov     rax, [rsi+1F0h]
 * 0000000140BC5B53: call    KeGuardDispatchICall
 * 0000000140BC5B58: mov     ebx, 1
 * 0000000140BC5B5D: mov     r11d, 1000h
 * 0000000140BC5B63: jmp     loc_140BC4FA9
 * 0000000140BC5B68: mov     rax, [rsi+1B0h]
 * 0000000140BC5B6F: lea     rcx, [rbp+8D0h+var_318]
 * 0000000140BC5B76: mov     edx, [r13+1Ch]
 * 0000000140BC5B7A: call    KeGuardDispatchICall
 * 0000000140BC5B7F: mov     rax, [rsi+1E0h]
 * 0000000140BC5B86: lea     rdx, [rbp+8D0h+var_308]
 * 0000000140BC5B8D: lea     rcx, [rbp+8D0h+var_318]
 * 0000000140BC5B94: call    KeGuardDispatchICall
 * 0000000140BC5B99: mov     ebx, r15d
 * 0000000140BC5B9C: cmp     [r13+18h], r15d
 * 0000000140BC5BA0: jbe     loc_140BC5D77
 * 0000000140BC5BA6: test    byte ptr [rsi+89Bh], 2
 * 0000000140BC5BAD: mov     eax, ebx
 * 0000000140BC5BAF: lea     r8, [rax+rax*2]
 * 0000000140BC5BB3: mov     r9d, [r13+r8*8+40h]
 * 0000000140BC5BB8: jz      short loc_140BC5BDD
 * 0000000140BC5BBA: mov     eax, 0C0000082h
 * 0000000140BC5BBF: cmp     r9d, eax
 * 0000000140BC5BC2: jnz     short loc_140BC5BDD
 * 0000000140BC5BC4: mov     eax, gs:1A4h
 * 0000000140BC5BCC: cmp     eax, [rsi+910h]
 * 0000000140BC5BD2: jnz     short loc_140BC5BDD
 * 0000000140BC5BD4: mov     rdx, [rsi+908h]
 * 0000000140BC5BDB: jmp     short loc_140BC5BE9
 * 0000000140BC5BDD: mov     ecx, r9d
 * 0000000140BC5BE0: rdmsr
 * 0000000140BC5BE2: shl     rdx, 20h
 * 0000000140BC5BE6: or      rdx, rax
 * 0000000140BC5BE9: mov     rcx, [r13+r8*8+30h]
 * 0000000140BC5BEE: mov     r8, [r13+r8*8+38h]
 * 0000000140BC5BF3: and     rdx, rcx
 * 0000000140BC5BF6: cmp     rdx, r8
 * 0000000140BC5BF9: jz      loc_140BC5D46
 * 0000000140BC5BFF: mov     ecx, [r13+1Ch]
 * 0000000140BC5C03: shl     rcx, 20h
 * 0000000140BC5C07: or      rcx, r9
 * 0000000140BC5C0A: cmp     [rsi+918h], r15d
 * 0000000140BC5C11: jnz     loc_140BC5D64
 * 0000000140BC5C17: mov     rax, [rsi+588h]
 * 0000000140BC5C1E: xor     r8, rdx
 * 0000000140BC5C21: mov     [rax+18h], r8
 * 0000000140BC5C25: cmp     [rsi+918h], r15d
 * 0000000140BC5C2C: jnz     loc_140BC5D64
 * 0000000140BC5C32: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC5C3C: mov     edi, 1
 * 0000000140BC5C41: add     rax, rsi
 * 0000000140BC5C44: mov     [rsi+920h], rax
 * 0000000140BC5C4B: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC5C55: add     rax, r13
 * 0000000140BC5C58: mov     [rsi+928h], rax
 * 0000000140BC5C5F: movsxd  rax, dword ptr [r13+0]
 * 0000000140BC5C63: mov     [rsi+930h], rax
 * 0000000140BC5C6A: mov     [rsi+938h], rcx
 * 0000000140BC5C71: mov     [rsi+918h], edi
 * 0000000140BC5C77: mov     ecx, [rsi+9D8h]
 * 0000000140BC5C7D: bt      ecx, 1Dh
 * 0000000140BC5C81: jb      loc_140BC5D64
 * 0000000140BC5C87: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC5C91: jz      loc_140BC5D64
 * 0000000140BC5C97: test    dil, cl
 * 0000000140BC5C9A: jz      loc_140BC5D64
 * 0000000140BC5CA0: mov     ecx, [rsi+0A74h]
 * 0000000140BC5CA6: mov     eax, [rsi+804h]
 * 0000000140BC5CAC: mov     r10, [rsi+838h]
 * 0000000140BC5CB3: sub     eax, ecx
 * 0000000140BC5CB5: mov     r8, [rsi+0A78h]
 * 0000000140BC5CBC: lea     rdx, [rcx+rsi]
 * 0000000140BC5CC0: mov     ecx, eax
 * 0000000140BC5CC2: shr     rcx, 3
 * 0000000140BC5CC6: lea     r9, [rdx+rcx*8]
 * 0000000140BC5CCA: jmp     short loc_140BC5CED
 * 0000000140BC5CCC: xor     [rdx], r8
 * 0000000140BC5CCF: mov     rax, [rdx]
 * 0000000140BC5CD2: movzx   ecx, r8b
 * 0000000140BC5CD6: xor     rax, r10
 * 0000000140BC5CD9: and     ecx, 3Fh
 * 0000000140BC5CDC: ror     r8, cl
 * 0000000140BC5CDF: add     r8, rax
 * 0000000140BC5CE2: xor     r8, 0EFAh
 * 0000000140BC5CE9: add     rdx, 8
 * 0000000140BC5CED: cmp     rdx, r9
 * 0000000140BC5CF0: jnz     short loc_140BC5CCC
 * 0000000140BC5CF2: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC5CFA: cmp     r8, [rsi+0A80h]
 * 0000000140BC5D01: jz      short loc_140BC5D64
 * 0000000140BC5D03: mov     ecx, [rsi+804h]
 * 0000000140BC5D09: mov     rax, [rsi+588h]
 * 0000000140BC5D10: mov     [rax], rsi
 * 0000000140BC5D13: mov     [rax+10h], ecx
 * 0000000140BC5D16: mov     rcx, [rsi+0A80h]
 * 0000000140BC5D1D: cmp     [rsi+918h], r15d
 * 0000000140BC5D24: jnz     short loc_140BC5D34
 * 0000000140BC5D26: mov     rax, [rsi+588h]
 * 0000000140BC5D2D: xor     rcx, r8
 * 0000000140BC5D30: mov     [rax+18h], rcx
 * 0000000140BC5D34: xor     edx, edx
 * 0000000140BC5D36: mov     r9d, 100h
 * 0000000140BC5D3C: mov     rcx, rsi
 * 0000000140BC5D3F: call    sub_140BDA384
 * 0000000140BC5D44: jmp     short loc_140BC5D64
 * 0000000140BC5D46: test    dword ptr [rsi+9DCh], 200h
 * 0000000140BC5D50: jz      short loc_140BC5D64
 * 0000000140BC5D52: cmp     rcx, 0FFFFFFFFFFFFFFFFh
 * 0000000140BC5D56: jnz     short loc_140BC5D64
 * 0000000140BC5D58: mov     rax, rdx
 * 0000000140BC5D5B: mov     ecx, r9d
 * 0000000140BC5D5E: shr     rdx, 20h
 * 0000000140BC5D62: wrmsr
 * 0000000140BC5D64: inc     ebx
 * 0000000140BC5D66: cmp     ebx, [r13+18h]
 * 0000000140BC5D6A: jb      loc_140BC5BA6
 * 0000000140BC5D70: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC5D77: mov     rax, [rsi+1A8h]
 * 0000000140BC5D7E: lea     rcx, [rbp+8D0h+var_308]
 * 0000000140BC5D85: call    KeGuardDispatchICall
 * 0000000140BC5D8A: mov     eax, [r13+18h]
 * 0000000140BC5D8E: shl     eax, 0Fh
 * 0000000140BC5D91: add     [rsi+848h], eax
 * 0000000140BC5D97: mov     ebx, 1
 * 0000000140BC5D9C: jmp     loc_140BD0398
 * 0000000140BC5DA1: mov     ecx, [rsi+850h]
 * 0000000140BC5DA7: test    bl, cl
 * 0000000140BC5DA9: jz      loc_140BC4FAF
 * 0000000140BC5DAF: bt      dword ptr [rsi+9D8h], 1Dh
 * 0000000140BC5DB7: jb      short loc_140BC5DCF
 * 0000000140BC5DB9: mov     r14d, r15d
 * 0000000140BC5DBC: and     ecx, 3
 * 0000000140BC5DBF: cmp     cl, 3
 * 0000000140BC5DC2: setz    r14b
 * 0000000140BC5DC6: mov     dword ptr [rbp+8D0h+arg_8], r14d
 * 0000000140BC5DCD: jmp     short loc_140BC5E1F
 * 0000000140BC5DCF: rdtsc
 * 0000000140BC5DD1: shl     rdx, 20h
 * 0000000140BC5DD5: or      rax, rdx
 * 0000000140BC5DD8: mov     rcx, rax
 * 0000000140BC5DDB: ror     rax, 3
 * 0000000140BC5DDF: xor     rcx, rax
 * 0000000140BC5DE2: mov     rax, 7010008004002001h
 * 0000000140BC5DEC: mul     rcx
 * 0000000140BC5DEF: mov     rcx, rdx
 * 0000000140BC5DF2: mov     [rbp+8D0h+var_250], rdx
 * 0000000140BC5DF9: xor     rcx, rax
 * 0000000140BC5DFC: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140BC5E06: mul     rcx
 * 0000000140BC5E09: shr     rdx, 1
 * 0000000140BC5E0C: lea     rax, [rdx+rdx*2]
 * 0000000140BC5E10: cmp     rcx, rax
 * 0000000140BC5E13: mov     eax, r15d
 * 0000000140BC5E16: setz    al
 * 0000000140BC5E19: mov     dword ptr [rbp+8D0h+arg_8], eax
 * 0000000140BC5E1F: mov     rax, [rsi+188h]
 * 0000000140BC5E26: mov     rbx, [rsi+540h]
 * 0000000140BC5E2D: mov     dword ptr [rsp+9D0h+var_960], r15d
 * 0000000140BC5E32: call    KeGuardDispatchICall
 * 0000000140BC5E37: bt      dword ptr [rsi+9D8h], 1Dh
 * 0000000140BC5E3F: jb      short loc_140BC5E5A
 * 0000000140BC5E41: mov     ecx, [rsi+978h]
 * 0000000140BC5E47: cmp     ecx, 7
 * 0000000140BC5E4A: jnb     short loc_140BC5E5A
 * 0000000140BC5E4C: mov     r12d, 1
 * 0000000140BC5E52: mov     r14d, r12d
 * 0000000140BC5E55: shl     r14b, cl
 * 0000000140BC5E58: jmp     short loc_140BC5E78
 * 0000000140BC5E5A: mov     rax, [rsi+138h]
 * 0000000140BC5E61: xor     edx, edx
 * 0000000140BC5E63: mov     rcx, [rsi+0A48h]
 * 0000000140BC5E6A: call    KeGuardDispatchICall
 * 0000000140BC5E6F: mov     r14b, 80h
 * 0000000140BC5E72: mov     r12d, 1
 * 0000000140BC5E78: mov     rax, [rsi+148h]
 * 0000000140BC5E7F: xor     edx, edx
 * 0000000140BC5E81: mov     rcx, rbx
 * 0000000140BC5E84: call    KeGuardDispatchICall
 * 0000000140BC5E89: mov     r8, [rsi+518h]
 * 0000000140BC5E90: mov     rdx, [r8]
 * 0000000140BC5E93: cmp     rdx, r8
 * 0000000140BC5E96: jz      short loc_140BC5EBE
 * 0000000140BC5E98: mov     rax, [rsi+6C8h]
 * 0000000140BC5E9F: mov     rcx, rdx
 * 0000000140BC5EA2: sub     rcx, [rsi+6E0h]
 * 0000000140BC5EA9: lock or [rcx+rax], r14b
 * 0000000140BC5EAE: mov     rdx, [rdx]
 * 0000000140BC5EB1: add     r15d, r12d
 * 0000000140BC5EB4: cmp     rdx, r8
 * 0000000140BC5EB7: jnz     short loc_140BC5E98
 * 0000000140BC5EB9: mov     dword ptr [rsp+9D0h+var_960], r15d
 * 0000000140BC5EBE: mov     rax, [rsi+548h]
 * 0000000140BC5EC5: mov     r15d, 4
 * 0000000140BC5ECB: mov     edi, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BC5ED1: mov     r13, [rax]
 * 0000000140BC5ED4: mov     rax, [rsi+740h]
 * 0000000140BC5EDB: mov     ebx, [rax+r13]
 * 0000000140BC5EDF: mov     [rsp+9D0h+var_978], rbx
 * 0000000140BC5EE4: mov     rax, [rsi+110h]
 * 0000000140BC5EEB: mov     rdx, r15
 * 0000000140BC5EEE: mov     rcx, r13
 * 0000000140BC5EF1: call    KeGuardDispatchICall
 * 0000000140BC5EF6: mov     r12, rax
 * 0000000140BC5EF9: test    rax, rax
 * 0000000140BC5EFC: jz      loc_140BC62E7
 * 0000000140BC5F02: mov     rax, [rsi+118h]
 * 0000000140BC5F09: mov     rcx, r12
 * 0000000140BC5F0C: call    KeGuardDispatchICall
 * 0000000140BC5F11: mov     rbx, rax
 * 0000000140BC5F14: mov     al, [rax]
 * 0000000140BC5F16: and     al, 7Fh
 * 0000000140BC5F18: cmp     al, 3
 * 0000000140BC5F1A: jnz     loc_140BC6080
 * 0000000140BC5F20: mov     rax, [rsi+6C8h]
 * 0000000140BC5F27: test    [rbx+rax], r14b
 * 0000000140BC5F2B: jnz     loc_140BC606B
 * 0000000140BC5F31: mov     rax, [rsi+6D0h]
 * 0000000140BC5F38: mov     ecx, [rbx+rax]
 * 0000000140BC5F3B: test    [rsi+6E8h], ecx
 * 0000000140BC5F41: jz      loc_140BC606B
 * 0000000140BC5F47: xor     r11d, r11d
 * 0000000140BC5F4A: cmp     [rsi+918h], r11d
 * 0000000140BC5F51: jnz     loc_140BC606B
 * 0000000140BC5F57: mov     rcx, [rsp+9D0h+var_980]
 * 0000000140BC5F5C: lea     edx, [r11+1]
 * 0000000140BC5F60: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC5F6A: add     rax, rsi
 * 0000000140BC5F6D: mov     [rsi+920h], rax
 * 0000000140BC5F74: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC5F7E: add     rax, rcx
 * 0000000140BC5F81: mov     [rsi+928h], rax
 * 0000000140BC5F88: movsxd  rax, dword ptr [rcx]
 * 0000000140BC5F8B: mov     [rsi+930h], rax
 * 0000000140BC5F92: mov     [rsi+938h], rbx
 * 0000000140BC5F99: mov     [rsi+918h], edx
 * 0000000140BC5F9F: mov     ecx, [rsi+9D8h]
 * 0000000140BC5FA5: bt      ecx, 1Dh
 * 0000000140BC5FA9: jb      loc_140BC606B
 * 0000000140BC5FAF: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC5FB9: jz      loc_140BC606B
 * 0000000140BC5FBF: test    dl, cl
 * 0000000140BC5FC1: jz      loc_140BC606B
 * 0000000140BC5FC7: mov     ecx, [rsi+0A74h]
 * 0000000140BC5FCD: mov     eax, [rsi+804h]
 * 0000000140BC5FD3: mov     r10, [rsi+838h]
 * 0000000140BC5FDA: sub     eax, ecx
 * 0000000140BC5FDC: mov     r8, [rsi+0A78h]
 * 0000000140BC5FE3: lea     rdx, [rcx+rsi]
 * 0000000140BC5FE7: mov     ecx, eax
 * 0000000140BC5FE9: shr     rcx, 3
 * 0000000140BC5FED: lea     r9, [rdx+rcx*8]
 * 0000000140BC5FF1: jmp     short loc_140BC6014
 * 0000000140BC5FF3: xor     [rdx], r8
 * 0000000140BC5FF6: mov     rax, [rdx]
 * 0000000140BC5FF9: movzx   ecx, r8b
 * 0000000140BC5FFD: xor     rax, r10
 * 0000000140BC6000: and     ecx, 3Fh
 * 0000000140BC6003: ror     r8, cl
 * 0000000140BC6006: add     r8, rax
 * 0000000140BC6009: xor     r8, 0EFAh
 * 0000000140BC6010: add     rdx, 8
 * 0000000140BC6014: cmp     rdx, r9
 * 0000000140BC6017: jnz     short loc_140BC5FF3
 * 0000000140BC6019: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC6021: cmp     r8, [rsi+0A80h]
 * 0000000140BC6028: jz      short loc_140BC606B
 * 0000000140BC602A: mov     ecx, [rsi+804h]
 * 0000000140BC6030: mov     rax, [rsi+588h]
 * 0000000140BC6037: mov     [rax], rsi
 * 0000000140BC603A: mov     [rax+10h], ecx
 * 0000000140BC603D: mov     rcx, [rsi+0A80h]
 * 0000000140BC6044: cmp     [rsi+918h], r11d
 * 0000000140BC604B: jnz     short loc_140BC605B
 * 0000000140BC604D: mov     rax, [rsi+588h]
 * 0000000140BC6054: xor     rcx, r8
 * 0000000140BC6057: mov     [rax+18h], rcx
 * 0000000140BC605B: xor     edx, edx
 * 0000000140BC605D: mov     r9d, 100h
 * 0000000140BC6063: mov     rcx, rsi
 * 0000000140BC6066: call    sub_140BDA384
 * 0000000140BC606B: mov     rax, [rsi+6C8h]
 * 0000000140BC6072: mov     cl, r14b
 * 0000000140BC6075: not     cl
 * 0000000140BC6077: lock and [rbx+rax], cl
 * 0000000140BC607B: jmp     loc_140BC62D0
 * 0000000140BC6080: xor     r11d, r11d
 * 0000000140BC6083: cmp     al, 6
 * 0000000140BC6085: jnz     loc_140BC61A6
 * 0000000140BC608B: test    edi, edi
 * 0000000140BC608D: jz      loc_140BC62D0
 * 0000000140BC6093: mov     rcx, [rsi+690h]
 * 0000000140BC609A: mov     rax, [rbx+rcx+20h]
 * 0000000140BC609F: cmp     rax, [rsi+320h]
 * 0000000140BC60A6: jz      short loc_140BC60B1
 * 0000000140BC60A8: cmp     rax, [rsi+328h]
 * 0000000140BC60AF: jnz     short loc_140BC60D1
 * 0000000140BC60B1: mov     rax, [rsi+330h]
 * 0000000140BC60B8: cmp     [rbx+rcx+30h], rax
 * 0000000140BC60BD: jnz     short loc_140BC60D1
 * 0000000140BC60BF: mov     rax, [rsi+338h]
 * 0000000140BC60C6: cmp     [rbx+rcx+28h], rax
 * 0000000140BC60CB: jz      loc_140BC62D0
 * 0000000140BC60D1: cmp     [rsi+918h], r11d
 * 0000000140BC60D8: jnz     loc_140BC62D0
 * 0000000140BC60DE: mov     rcx, [rsp+9D0h+var_980]
 * 0000000140BC60E3: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC60ED: add     rax, rsi
 * 0000000140BC60F0: mov     [rsi+920h], rax
 * 0000000140BC60F7: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC6101: add     rax, rcx
 * 0000000140BC6104: mov     [rsi+928h], rax
 * 0000000140BC610B: movsxd  rax, dword ptr [rcx]
 * 0000000140BC610E: mov     [rsi+930h], rax
 * 0000000140BC6115: mov     [rsi+938h], rbx
 * 0000000140BC611C: mov     ebx, 1
 * 0000000140BC6121: mov     [rsi+918h], ebx
 * 0000000140BC6127: mov     ecx, [rsi+9D8h]
 * 0000000140BC612D: bt      ecx, 1Dh
 * 0000000140BC6131: jb      loc_140BC62D0
 * 0000000140BC6137: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC6141: jz      loc_140BC62D0
 * 0000000140BC6147: test    bl, cl
 * 0000000140BC6149: jz      loc_140BC62D0
 * 0000000140BC614F: mov     ecx, [rsi+0A74h]
 * 0000000140BC6155: mov     eax, [rsi+804h]
 * 0000000140BC615B: mov     r10, [rsi+838h]
 * 0000000140BC6162: sub     eax, ecx
 * 0000000140BC6164: mov     r8, [rsi+0A78h]
 * 0000000140BC616B: lea     rdx, [rcx+rsi]
 * 0000000140BC616F: mov     ecx, eax
 * 0000000140BC6171: shr     rcx, 3
 * 0000000140BC6175: lea     r9, [rdx+rcx*8]
 * 0000000140BC6179: jmp     short loc_140BC619C
 * 0000000140BC617B: xor     [rdx], r8
 * 0000000140BC617E: mov     rax, [rdx]
 * 0000000140BC6181: movzx   ecx, r8b
 * 0000000140BC6185: xor     rax, r10
 * 0000000140BC6188: and     ecx, 3Fh
 * 0000000140BC618B: ror     r8, cl
 * 0000000140BC618E: add     r8, rax
 * 0000000140BC6191: xor     r8, 0EFAh
 * 0000000140BC6198: add     rdx, 8
 * 0000000140BC619C: cmp     rdx, r9
 * 0000000140BC619F: jnz     short loc_140BC617B
 * 0000000140BC61A1: jmp     loc_140BC627E
 * 0000000140BC61A6: test    al, al
 * 0000000140BC61A8: jz      loc_140BC62D0
 * 0000000140BC61AE: cmp     [rsi+918h], r11d
 * 0000000140BC61B5: jnz     loc_140BC62D0
 * 0000000140BC61BB: mov     rcx, [rsp+9D0h+var_980]
 * 0000000140BC61C0: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC61CA: add     rax, rsi
 * 0000000140BC61CD: mov     [rsi+920h], rax
 * 0000000140BC61D4: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC61DE: add     rax, rcx
 * 0000000140BC61E1: mov     [rsi+928h], rax
 * 0000000140BC61E8: movsxd  rax, dword ptr [rcx]
 * 0000000140BC61EB: mov     [rsi+930h], rax
 * 0000000140BC61F2: mov     [rsi+938h], rbx
 * 0000000140BC61F9: mov     ebx, 1
 * 0000000140BC61FE: mov     [rsi+918h], ebx
 * 0000000140BC6204: mov     ecx, [rsi+9D8h]
 * 0000000140BC620A: bt      ecx, 1Dh
 * 0000000140BC620E: jb      loc_140BC62D0
 * 0000000140BC6214: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC621E: jz      loc_140BC62D0
 * 0000000140BC6224: test    bl, cl
 * 0000000140BC6226: jz      loc_140BC62D0
 * 0000000140BC622C: mov     ecx, [rsi+0A74h]
 * 0000000140BC6232: mov     eax, [rsi+804h]
 * 0000000140BC6238: mov     r10, [rsi+838h]
 * 0000000140BC623F: sub     eax, ecx
 * 0000000140BC6241: mov     r8, [rsi+0A78h]
 * 0000000140BC6248: lea     rdx, [rcx+rsi]
 * 0000000140BC624C: mov     ecx, eax
 * 0000000140BC624E: shr     rcx, 3
 * 0000000140BC6252: lea     r9, [rdx+rcx*8]
 * 0000000140BC6256: jmp     short loc_140BC6279
 * 0000000140BC6258: xor     [rdx], r8
 * 0000000140BC625B: mov     rax, [rdx]
 * 0000000140BC625E: movzx   ecx, r8b
 * 0000000140BC6262: xor     rax, r10
 * 0000000140BC6265: and     ecx, 3Fh
 * 0000000140BC6268: ror     r8, cl
 * 0000000140BC626B: add     r8, rax
 * 0000000140BC626E: xor     r8, 0EFAh
 * 0000000140BC6275: add     rdx, 8
 * 0000000140BC6279: cmp     rdx, r9
 * 0000000140BC627C: jnz     short loc_140BC6258
 * 0000000140BC627E: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC6286: cmp     r8, [rsi+0A80h]
 * 0000000140BC628D: jz      short loc_140BC62D0
 * 0000000140BC628F: mov     ecx, [rsi+804h]
 * 0000000140BC6295: mov     rax, [rsi+588h]
 * 0000000140BC629C: mov     [rax], rsi
 * 0000000140BC629F: mov     [rax+10h], ecx
 * 0000000140BC62A2: mov     rcx, [rsi+0A80h]
 * 0000000140BC62A9: cmp     [rsi+918h], r11d
 * 0000000140BC62B0: jnz     short loc_140BC62C0
 * 0000000140BC62B2: mov     rax, [rsi+588h]
 * 0000000140BC62B9: xor     rcx, r8
 * 0000000140BC62BC: mov     [rax+18h], rcx
 * 0000000140BC62C0: mov     r9d, 100h
 * 0000000140BC62C6: xor     edx, edx
 * 0000000140BC62C8: mov     rcx, rsi
 * 0000000140BC62CB: call    sub_140BDA384
 * 0000000140BC62D0: mov     rax, [rsi+130h]
 * 0000000140BC62D7: mov     rdx, r12
 * 0000000140BC62DA: mov     rcx, r13
 * 0000000140BC62DD: call    KeGuardDispatchICall
 * 0000000140BC62E2: mov     rbx, [rsp+9D0h+var_978]
 * 0000000140BC62E7: add     r15, 4
 * 0000000140BC62EB: cmp     r15, rbx
 * 0000000140BC62EE: jb      loc_140BC5EE4
 * 0000000140BC62F4: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC62FB: cmp     r14b, 80h
 * 0000000140BC62FF: jnz     short loc_140BC6316
 * 0000000140BC6301: mov     rax, [rsi+140h]
 * 0000000140BC6308: xor     edx, edx
 * 0000000140BC630A: mov     rcx, [rsi+0A48h]
 * 0000000140BC6311: call    KeGuardDispatchICall
 * 0000000140BC6316: mov     rcx, [rsi+540h]
 * 0000000140BC631D: xor     edx, edx
 * 0000000140BC631F: mov     rax, [rsi+150h]
 * 0000000140BC6326: call    KeGuardDispatchICall
 * 0000000140BC632B: mov     rax, [rsi+190h]
 * 0000000140BC6332: call    KeGuardDispatchICall
 * 0000000140BC6337: mov     eax, dword ptr [rsp+9D0h+var_960]
 * 0000000140BC633B: shr     rbx, 2
 * 0000000140BC633F: add     eax, ebx
 * 0000000140BC6341: shl     eax, 8
 * 0000000140BC6344: jmp     loc_140BC4F95
 * 0000000140BC6349: mov     eax, [rsi+850h]
 * 0000000140BC634F: test    bl, al
 * 0000000140BC6351: jnz     loc_140BC4FAF
 * 0000000140BC6357: mov     rax, [rsi+188h]
 * 0000000140BC635E: mov     r13d, r15d
 * 0000000140BC6361: mov     rbx, [rsi+540h]
 * 0000000140BC6368: mov     [rsp+9D0h+var_958], r15d
 * 0000000140BC636D: call    KeGuardDispatchICall
 * 0000000140BC6372: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BC637C: jnz     short loc_140BC6394
 * 0000000140BC637E: mov     ecx, [rsi+978h]
 * 0000000140BC6384: cmp     ecx, 7
 * 0000000140BC6387: jnb     short loc_140BC6394
 * 0000000140BC6389: mov     r12d, 1
 * 0000000140BC638F: shl     r12b, cl
 * 0000000140BC6392: jmp     short loc_140BC63AC
 * 0000000140BC6394: mov     rax, [rsi+138h]
 * 0000000140BC639B: xor     edx, edx
 * 0000000140BC639D: mov     rcx, [rsi+0A48h]
 * 0000000140BC63A4: call    KeGuardDispatchICall
 * 0000000140BC63A9: mov     r12b, 80h
 * 0000000140BC63AC: mov     rax, [rsi+148h]
 * 0000000140BC63B3: xor     edx, edx
 * 0000000140BC63B5: mov     rcx, rbx
 * 0000000140BC63B8: mov     dword ptr [rsp+9D0h+var_960], r12d
 * 0000000140BC63BD: call    KeGuardDispatchICall
 * 0000000140BC63C2: mov     r15, [rsi+518h]
 * 0000000140BC63C9: mov     r14, [r15]
 * 0000000140BC63CC: cmp     r14, r15
 * 0000000140BC63CF: jz      loc_140BC6565
 * 0000000140BC63D5: mov     rdi, [rsp+9D0h+var_980]
 * 0000000140BC63DA: mov     rbx, r14
 * 0000000140BC63DD: sub     rbx, [rsi+6E0h]
 * 0000000140BC63E4: cmp     r12b, 80h
 * 0000000140BC63E8: jz      loc_140BC653E
 * 0000000140BC63EE: mov     rax, [rsi+6C8h]
 * 0000000140BC63F5: test    [rbx+rax], r12b
 * 0000000140BC63F9: jz      loc_140BC653E
 * 0000000140BC63FF: mov     rax, [rsi+6D0h]
 * 0000000140BC6406: mov     ecx, [rbx+rax]
 * 0000000140BC6409: test    [rsi+6E8h], ecx
 * 0000000140BC640F: jz      loc_140BC653E
 * 0000000140BC6415: xor     r11d, r11d
 * 0000000140BC6418: cmp     [rsi+918h], r11d
 * 0000000140BC641F: jnz     loc_140BC653E
 * 0000000140BC6425: lea     ecx, [r11+1]
 * 0000000140BC6429: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC6433: add     rax, rsi
 * 0000000140BC6436: mov     [rsi+920h], rax
 * 0000000140BC643D: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC6447: add     rax, rdi
 * 0000000140BC644A: mov     [rsi+928h], rax
 * 0000000140BC6451: movsxd  rax, dword ptr [rdi]
 * 0000000140BC6454: mov     [rsi+930h], rax
 * 0000000140BC645B: mov     rax, rbx
 * 0000000140BC645E: or      rax, rcx
 * 0000000140BC6461: mov     [rsi+938h], rax
 * 0000000140BC6468: mov     [rsi+918h], ecx
 * 0000000140BC646E: mov     ecx, [rsi+9D8h]
 * 0000000140BC6474: bt      ecx, 1Dh
 * 0000000140BC6478: jb      loc_140BC653E
 * 0000000140BC647E: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC6488: jz      loc_140BC653E
 * 0000000140BC648E: lea     eax, [r11+1]
 * 0000000140BC6492: test    al, cl
 * 0000000140BC6494: jz      loc_140BC653E
 * 0000000140BC649A: mov     ecx, [rsi+0A74h]
 * 0000000140BC64A0: mov     eax, [rsi+804h]
 * 0000000140BC64A6: mov     r10, [rsi+838h]
 * 0000000140BC64AD: sub     eax, ecx
 * 0000000140BC64AF: mov     r8, [rsi+0A78h]
 * 0000000140BC64B6: lea     rdx, [rcx+rsi]
 * 0000000140BC64BA: mov     ecx, eax
 * 0000000140BC64BC: shr     rcx, 3
 * 0000000140BC64C0: lea     r9, [rdx+rcx*8]
 * 0000000140BC64C4: jmp     short loc_140BC64E7
 * 0000000140BC64C6: xor     [rdx], r8
 * 0000000140BC64C9: mov     rax, [rdx]
 * 0000000140BC64CC: movzx   ecx, r8b
 * 0000000140BC64D0: xor     rax, r10
 * 0000000140BC64D3: and     ecx, 3Fh
 * 0000000140BC64D6: ror     r8, cl
 * 0000000140BC64D9: add     r8, rax
 * 0000000140BC64DC: xor     r8, 0EFAh
 * 0000000140BC64E3: add     rdx, 8
 * 0000000140BC64E7: cmp     rdx, r9
 * 0000000140BC64EA: jnz     short loc_140BC64C6
 * 0000000140BC64EC: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC64F4: cmp     r8, [rsi+0A80h]
 * 0000000140BC64FB: jz      short loc_140BC653E
 * 0000000140BC64FD: mov     ecx, [rsi+804h]
 * 0000000140BC6503: mov     rax, [rsi+588h]
 * 0000000140BC650A: mov     [rax], rsi
 * 0000000140BC650D: mov     [rax+10h], ecx
 * 0000000140BC6510: mov     rcx, [rsi+0A80h]
 * 0000000140BC6517: cmp     [rsi+918h], r11d
 * 0000000140BC651E: jnz     short loc_140BC652E
 * 0000000140BC6520: mov     rax, [rsi+588h]
 * 0000000140BC6527: xor     rcx, r8
 * 0000000140BC652A: mov     [rax+18h], rcx
 * 0000000140BC652E: xor     edx, edx
 * 0000000140BC6530: mov     r9d, 100h
 * 0000000140BC6536: mov     rcx, rsi
 * 0000000140BC6539: call    sub_140BDA384
 * 0000000140BC653E: mov     rax, [rsi+6C8h]
 * 0000000140BC6545: lock or [rbx+rax], r12b
 * 0000000140BC654A: mov     r14, [r14]
 * 0000000140BC654D: inc     r13d
 * 0000000140BC6550: cmp     r14, r15
 * 0000000140BC6553: jnz     loc_140BC63DA
 * 0000000140BC6559: mov     [rsp+9D0h+var_958], r13d
 * 0000000140BC655E: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC6565: mov     rcx, [rsi+4F8h]
 * 0000000140BC656C: mov     rax, cr8
 * 0000000140BC6570: mov     [rsp+9D0h+var_978], rax
 * 0000000140BC6575: mov     eax, 0Ch
 * 0000000140BC657A: mov     cr8, rax
 * 0000000140BC657E: mov     rax, [rsi+158h]
 * 0000000140BC6585: lea     rdx, [rbp+8D0h+var_178]
 * 0000000140BC658C: call    KeGuardDispatchICall
 * 0000000140BC6591: mov     r13, [rsi+4F0h]
 * 0000000140BC6598: mov     r14, [r13+0]
 * 0000000140BC659C: cmp     r14, r13
 * 0000000140BC659F: jz      loc_140BC6724
 * 0000000140BC65A5: mov     rdi, [rsp+9D0h+var_980]
 * 0000000140BC65AA: mov     r15b, r12b
 * 0000000140BC65AD: movzx   edx, r12b
 * 0000000140BC65B1: not     r15b
 * 0000000140BC65B4: mov     dword ptr [rbp+8D0h+arg_8], edx
 * 0000000140BC65BA: xor     r12d, r12d
 * 0000000140BC65BD: mov     rax, [rsi+6C8h]
 * 0000000140BC65C4: mov     rbx, r14
 * 0000000140BC65C7: sub     rbx, [rsi+6C0h]
 * 0000000140BC65CE: movsx   ecx, byte ptr [rax+rbx]
 * 0000000140BC65D2: test    edx, ecx
 * 0000000140BC65D4: jnz     loc_140BC6700
 * 0000000140BC65DA: cmp     [rsi+918h], r12d
 * 0000000140BC65E1: jnz     loc_140BC6700
 * 0000000140BC65E7: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC65F1: mov     r8d, 1
 * 0000000140BC65F7: add     rax, rsi
 * 0000000140BC65FA: mov     [rsi+920h], rax
 * 0000000140BC6601: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC660B: add     rax, rdi
 * 0000000140BC660E: mov     [rsi+928h], rax
 * 0000000140BC6615: movsxd  rax, dword ptr [rdi]
 * 0000000140BC6618: mov     [rsi+930h], rax
 * 0000000140BC661F: mov     [rsi+938h], rbx
 * 0000000140BC6626: mov     [rsi+918h], r8d
 * 0000000140BC662D: mov     ecx, [rsi+9D8h]
 * 0000000140BC6633: bt      ecx, 1Dh
 * 0000000140BC6637: jb      loc_140BC6700
 * 0000000140BC663D: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC6647: jz      loc_140BC6700
 * 0000000140BC664D: test    r8b, cl
 * 0000000140BC6650: jz      loc_140BC6700
 * 0000000140BC6656: mov     ecx, [rsi+0A74h]
 * 0000000140BC665C: mov     eax, [rsi+804h]
 * 0000000140BC6662: mov     r10, [rsi+838h]
 * 0000000140BC6669: sub     eax, ecx
 * 0000000140BC666B: mov     r8, [rsi+0A78h]
 * 0000000140BC6672: lea     rdx, [rcx+rsi]
 * 0000000140BC6676: mov     ecx, eax
 * 0000000140BC6678: shr     rcx, 3
 * 0000000140BC667C: lea     r9, [rdx+rcx*8]
 * 0000000140BC6680: jmp     short loc_140BC66A3
 * 0000000140BC6682: xor     [rdx], r8
 * 0000000140BC6685: mov     rax, [rdx]
 * 0000000140BC6688: movzx   ecx, r8b
 * 0000000140BC668C: xor     rax, r10
 * 0000000140BC668F: and     ecx, 3Fh
 * 0000000140BC6692: ror     r8, cl
 * 0000000140BC6695: add     r8, rax
 * 0000000140BC6698: xor     r8, 0EFAh
 * 0000000140BC669F: add     rdx, 8
 * 0000000140BC66A3: cmp     rdx, r9
 * 0000000140BC66A6: jnz     short loc_140BC6682
 * 0000000140BC66A8: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC66B0: cmp     r8, [rsi+0A80h]
 * 0000000140BC66B7: jz      short loc_140BC66FA
 * 0000000140BC66B9: mov     ecx, [rsi+804h]
 * 0000000140BC66BF: mov     rax, [rsi+588h]
 * 0000000140BC66C6: mov     [rax], rsi
 * 0000000140BC66C9: mov     [rax+10h], ecx
 * 0000000140BC66CC: mov     rcx, [rsi+0A80h]
 * 0000000140BC66D3: cmp     [rsi+918h], r12d
 * 0000000140BC66DA: jnz     short loc_140BC66EA
 * 0000000140BC66DC: mov     rax, [rsi+588h]
 * 0000000140BC66E3: xor     rcx, r8
 * 0000000140BC66E6: mov     [rax+18h], rcx
 * 0000000140BC66EA: xor     edx, edx
 * 0000000140BC66EC: mov     r9d, 100h
 * 0000000140BC66F2: mov     rcx, rsi
 * 0000000140BC66F5: call    sub_140BDA384
 * 0000000140BC66FA: mov     edx, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BC6700: mov     rax, [rsi+6C8h]
 * 0000000140BC6707: lock and [rbx+rax], r15b
 * 0000000140BC670C: mov     r14, [r14]
 * 0000000140BC670F: cmp     r14, r13
 * 0000000140BC6712: jnz     loc_140BC65BD
 * 0000000140BC6718: mov     r12d, dword ptr [rsp+9D0h+var_960]
 * 0000000140BC671D: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC6724: mov     rax, [rsi+198h]
 * 0000000140BC672B: lea     rcx, [rbp+8D0h+var_178]
 * 0000000140BC6732: call    KeGuardDispatchICall
 * 0000000140BC6737: movzx   eax, byte ptr [rsp+9D0h+var_978]
 * 0000000140BC673C: mov     cr8, rax
 * 0000000140BC6740: cmp     r12b, 80h
 * 0000000140BC6744: jnz     short loc_140BC675B
 * 0000000140BC6746: mov     rax, [rsi+140h]
 * 0000000140BC674D: xor     edx, edx
 * 0000000140BC674F: mov     rcx, [rsi+0A48h]
 * 0000000140BC6756: call    KeGuardDispatchICall
 * 0000000140BC675B: mov     rcx, [rsi+540h]
 * 0000000140BC6762: xor     edx, edx
 * 0000000140BC6764: mov     rax, [rsi+150h]
 * 0000000140BC676B: call    KeGuardDispatchICall
 * 0000000140BC6770: mov     rax, [rsi+190h]
 * 0000000140BC6777: call    KeGuardDispatchICall
 * 0000000140BC677C: mov     eax, [rsp+9D0h+var_958]
 * 0000000140BC6780: jmp     loc_140BC6341
 * 0000000140BC6785: mov     r14, [r13+8]
 * 0000000140BC6789: mov     r8d, [r13+10h]
 * 0000000140BC678D: mov     r9, r14
 * 0000000140BC6790: add     [rsi+848h], r8d
 * 0000000140BC6797: mov     rax, r14
 * 0000000140BC679A: mov     r10d, [rsi+834h]
 * 0000000140BC67A1: mov     r15, [rsi+838h]
 * 0000000140BC67A8: lea     rcx, [r14+r8]
 * 0000000140BC67AC: cmp     r14, rcx
 * 0000000140BC67AF: jnb     short loc_140BC67C1
 * 0000000140BC67B1: mov     edx, 40h ; '@'
 * 0000000140BC67B6: prefetchnta byte ptr [rax]
 * 0000000140BC67B9: add     rax, rdx
 * 0000000140BC67BC: cmp     rax, rcx
 * 0000000140BC67BF: jb      short loc_140BC67B6
 * 0000000140BC67C1: mov     r11d, r8d
 * 0000000140BC67C4: mov     rbx, r15
 * 0000000140BC67C7: shr     r11d, 7
 * 0000000140BC67CB: mov     edx, 1
 * 0000000140BC67D0: mov     r12d, 0FFFFFFFFh
 * 0000000140BC67D6: test    r11d, r11d
 * 0000000140BC67D9: jz      short loc_140BC6840
 * 0000000140BC67DB: mov     rsi, 7010008004002001h
 * 0000000140BC67E5: mov     eax, 8
 * 0000000140BC67EA: xor     rbx, [r9]
 * 0000000140BC67ED: mov     ecx, r10d
 * 0000000140BC67F0: rol     rbx, cl
 * 0000000140BC67F3: xor     rbx, [r9+8]
 * 0000000140BC67F7: add     r9, 10h
 * 0000000140BC67FB: rol     rbx, cl
 * 0000000140BC67FE: sub     rax, rdx
 * 0000000140BC6801: jnz     short loc_140BC67EA
 * 0000000140BC6803: mov     rcx, r9
 * 0000000140BC6806: sub     rcx, r14
 * 0000000140BC6809: xor     rcx, r15
 * 0000000140BC680C: mov     rax, rcx
 * 0000000140BC680F: rol     rax, 11h
 * 0000000140BC6813: xor     rcx, rax
 * 0000000140BC6816: mov     rax, rsi
 * 0000000140BC6819: mul     rcx
 * 0000000140BC681C: xor     r10d, edx
 * 0000000140BC681F: mov     [rbp+8D0h+var_218], rdx
 * 0000000140BC6826: xor     r10d, eax
 * 0000000140BC6829: mov     edx, 1
 * 0000000140BC682E: and     r10d, 3Fh
 * 0000000140BC6832: cmovz   r10d, edx
 * 0000000140BC6836: add     r11d, r12d
 * 0000000140BC6839: jnz     short loc_140BC67E5
 * 0000000140BC683B: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC6840: and     r8d, 7Fh
 * 0000000140BC6844: cmp     r8d, 8
 * 0000000140BC6848: jb      short loc_140BC6867
 * 0000000140BC684A: mov     eax, r8d
 * 0000000140BC684D: shr     rax, 3
 * 0000000140BC6851: xor     rbx, [r9]
 * 0000000140BC6854: mov     ecx, r10d
 * 0000000140BC6857: rol     rbx, cl
 * 0000000140BC685A: add     r9, 8
 * 0000000140BC685E: add     r8d, 0FFFFFFF8h
 * 0000000140BC6862: sub     rax, rdx
 * 0000000140BC6865: jnz     short loc_140BC6851
 * 0000000140BC6867: xor     r15d, r15d
 * 0000000140BC686A: test    r8d, r8d
 * 0000000140BC686D: jz      short loc_140BC6884
 * 0000000140BC686F: movzx   eax, byte ptr [r9]
 * 0000000140BC6873: mov     ecx, r10d
 * 0000000140BC6876: xor     rbx, rax
 * 0000000140BC6879: add     r9, rdx
 * 0000000140BC687C: rol     rbx, cl
 * 0000000140BC687F: add     r8d, r12d
 * 0000000140BC6882: jnz     short loc_140BC686F
 * 0000000140BC6884: mov     rax, rbx
 * 0000000140BC6887: jmp     short loc_140BC688B
 * 0000000140BC6889: xor     ebx, eax
 * 0000000140BC688B: shr     rax, 1Fh
 * 0000000140BC688F: test    rax, rax
 * 0000000140BC6892: jnz     short loc_140BC6889
 * 0000000140BC6894: btr     ebx, 1Fh
 * 0000000140BC6898: mov     r12d, r15d
 * 0000000140BC689B: cmp     ebx, [r13+14h]
 * 0000000140BC689F: jz      loc_140BC5B58
 * 0000000140BC68A5: cmp     [r13+0], r15d
 * 0000000140BC68A9: jnz     short loc_140BC68B3
 * 0000000140BC68AB: cmp     [r13+18h], r15d
 * 0000000140BC68AF: cmovnz  r12d, edx
 * 0000000140BC68B3: mov     ecx, [r13+10h]
 * 0000000140BC68B7: mov     rdx, [r13+8]
 * 0000000140BC68BB: test    rcx, rcx
 * 0000000140BC68BE: jz      loc_140BC6976
 * 0000000140BC68C4: mov     eax, [rsi+9DCh]
 * 0000000140BC68CA: mov     r8d, 40h ; '@'
 * 0000000140BC68D0: test    r8b, al
 * 0000000140BC68D3: jz      loc_140BC6976
 * 0000000140BC68D9: mov     r15, cr8
 * 0000000140BC68DD: lea     eax, [r8-3Eh]
 * 0000000140BC68E1: mov     cr8, rax
 * 0000000140BC68E5: mov     r14, rdx
 * 0000000140BC68E8: lea     rax, [rcx-1]
 * 0000000140BC68EC: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140BC68F3: add     rax, rdx
 * 0000000140BC68F6: or      rax, 0FFFh
 * 0000000140BC68FC: mov     [rsp+9D0h+var_978], rax
 * 0000000140BC6901: lea     r13, [r14-1]
 * 0000000140BC6905: mov     rax, [rsi+468h]
 * 0000000140BC690C: xor     edx, edx
 * 0000000140BC690E: mov     rcx, r14
 * 0000000140BC6911: call    KeGuardDispatchICall
 * 0000000140BC6916: cmp     eax, 0C000022Dh
 * 0000000140BC691B: jnz     short loc_140BC6942
 * 0000000140BC691D: test    r12d, r12d
 * 0000000140BC6920: jnz     short loc_140BC6966
 * 0000000140BC6922: lea     eax, [r12+1]
 * 0000000140BC6927: cmp     r15b, al
 * 0000000140BC692A: ja      short loc_140BC6946
 * 0000000140BC692C: movzx   eax, r15b
 * 0000000140BC6930: mov     cr8, rax
 * 0000000140BC6934: mov     al, [r14]
 * 0000000140BC6937: lea     eax, [r12+2]
 * 0000000140BC693C: mov     cr8, rax
 * 0000000140BC6940: jmp     short loc_140BC6905
 * 0000000140BC6942: test    eax, eax
 * 0000000140BC6944: js      short loc_140BC6966
 * 0000000140BC6946: mov     r11d, 1000h
 * 0000000140BC694C: add     r14, r11
 * 0000000140BC694F: add     r13, r11
 * 0000000140BC6952: cmp     r13, [rsp+9D0h+var_978]
 * 0000000140BC6957: jnz     short loc_140BC6905
 * 0000000140BC6959: movzx   eax, r15b
 * 0000000140BC695D: mov     cr8, rax
 * 0000000140BC6961: jmp     loc_140BC4FA1
 * 0000000140BC6966: movzx   eax, r15b
 * 0000000140BC696A: mov     cr8, rax
 * 0000000140BC696E: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BC6973: xor     r15d, r15d
 * 0000000140BC6976: mov     eax, [r13+14h]
 * 0000000140BC697A: cmp     [rsi+918h], r15d
 * 0000000140BC6981: jnz     short loc_140BC6993
 * 0000000140BC6983: mov     ecx, ebx
 * 0000000140BC6985: xor     rcx, rax
 * 0000000140BC6988: mov     rax, [rsi+588h]
 * 0000000140BC698F: mov     [rax+18h], rcx
 * 0000000140BC6993: mov     ebx, 1
 * 0000000140BC6998: mov     rcx, [r13+8]
 * 0000000140BC699C: cmp     [rsi+918h], r15d
 * 0000000140BC69A3: jnz     loc_140BC5B5D
 * 0000000140BC69A9: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC69B3: add     rax, rsi
 * 0000000140BC69B6: mov     [rsi+920h], rax
 * 0000000140BC69BD: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC69C7: add     rax, r13
 * 0000000140BC69CA: mov     [rsi+928h], rax
 * 0000000140BC69D1: movsxd  rax, dword ptr [r13+0]
 * 0000000140BC69D5: mov     [rsi+930h], rax
 * 0000000140BC69DC: mov     [rsi+938h], rcx
 * 0000000140BC69E3: mov     [rsi+918h], ebx
 * 0000000140BC69E9: mov     ecx, [rsi+9D8h]
 * 0000000140BC69EF: bt      ecx, 1Dh
 * 0000000140BC69F3: jb      loc_140BC5B5D
 * 0000000140BC69F9: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC6A03: jz      loc_140BC5B5D
 * 0000000140BC6A09: test    bl, cl
 * 0000000140BC6A0B: jz      loc_140BC5B5D
 * 0000000140BC6A11: mov     ecx, [rsi+0A74h]
 * 0000000140BC6A17: mov     eax, [rsi+804h]
 * 0000000140BC6A1D: mov     r10, [rsi+838h]
 * 0000000140BC6A24: sub     eax, ecx
 * 0000000140BC6A26: mov     r8, [rsi+0A78h]
 * 0000000140BC6A2D: lea     rdx, [rcx+rsi]
 * 0000000140BC6A31: mov     ecx, eax
 * 0000000140BC6A33: shr     rcx, 3
 * 0000000140BC6A37: lea     r9, [rdx+rcx*8]
 * 0000000140BC6A3B: jmp     short loc_140BC6A5E
 * 0000000140BC6A3D: xor     [rdx], r8
 * 0000000140BC6A40: mov     rax, [rdx]
 * 0000000140BC6A43: movzx   ecx, r8b
 * 0000000140BC6A47: xor     rax, r10
 * 0000000140BC6A4A: and     ecx, 3Fh
 * 0000000140BC6A4D: ror     r8, cl
 * 0000000140BC6A50: add     r8, rax
 * 0000000140BC6A53: xor     r8, 0EFAh
 * 0000000140BC6A5A: add     rdx, 8
 * 0000000140BC6A5E: cmp     rdx, r9
 * 0000000140BC6A61: jnz     short loc_140BC6A3D
 * 0000000140BC6A63: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC6A6B: cmp     r8, [rsi+0A80h]
 * 0000000140BC6A72: jz      loc_140BC5B5D
 * 0000000140BC6A78: mov     ecx, [rsi+804h]
 * 0000000140BC6A7E: mov     rax, [rsi+588h]
 * 0000000140BC6A85: mov     [rax], rsi
 * 0000000140BC6A88: mov     [rax+10h], ecx
 * 0000000140BC6A8B: mov     rcx, [rsi+0A80h]
 * 0000000140BC6A92: cmp     [rsi+918h], r15d
 * 0000000140BC6A99: jnz     short loc_140BC6AA9
 * 0000000140BC6A9B: mov     rax, [rsi+588h]
 * 0000000140BC6AA2: xor     rcx, r8
 * 0000000140BC6AA5: mov     [rax+18h], rcx
 * 0000000140BC6AA9: xor     edx, edx
 * 0000000140BC6AAB: mov     r9d, 100h
 * 0000000140BC6AB1: mov     rcx, rsi
 * 0000000140BC6AB4: call    sub_140BDA384
 * 0000000140BC6AB9: jmp     loc_140BC5B5D
 * 0000000140BC6ABE: mov     rax, [rsi+568h]
 * 0000000140BC6AC5: cmp     [rax+20h], r15
 * 0000000140BC6AC9: jz      loc_140BC4FAF
 * 0000000140BC6ACF: add     dword ptr [rsi+848h], 100h
 * 0000000140BC6AD9: mov     r15, [rsi+580h]
 * 0000000140BC6AE0: mov     rax, [rsi+2D8h]
 * 0000000140BC6AE7: mov     rcx, r15
 * 0000000140BC6AEA: call    KeGuardDispatchICall
 * 0000000140BC6AEF: mov     r14, rax
 * 0000000140BC6AF2: test    rax, rax
 * 0000000140BC6AF5: jz      loc_140BC6DAC
 * 0000000140BC6AFB: mov     rax, [rsi+2E0h]
 * 0000000140BC6B02: mov     rcx, r14
 * 0000000140BC6B05: call    KeGuardDispatchICall
 * 0000000140BC6B0A: mov     rbx, rax
 * 0000000140BC6B0D: xor     r11d, r11d
 * 0000000140BC6B10: mov     rax, [r13+18h]
 * 0000000140BC6B14: test    rax, rax
 * 0000000140BC6B17: jz      loc_140BC6C4C
 * 0000000140BC6B1D: cmp     rax, rbx
 * 0000000140BC6B20: jz      loc_140BC6D95
 * 0000000140BC6B26: cmp     [rsi+918h], r11d
 * 0000000140BC6B2D: jnz     loc_140BC6D95
 * 0000000140BC6B33: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC6B3D: add     rax, rsi
 * 0000000140BC6B40: mov     [rsi+920h], rax
 * 0000000140BC6B47: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC6B51: add     rax, r13
 * 0000000140BC6B54: mov     [rsi+928h], rax
 * 0000000140BC6B5B: movsxd  rax, dword ptr [r13+0]
 * 0000000140BC6B5F: mov     [rsi+930h], rax
 * 0000000140BC6B66: mov     [rsi+938h], rbx
 * 0000000140BC6B6D: lea     ebx, [r11+1]
 * 0000000140BC6B71: mov     [rsi+918h], ebx
 * 0000000140BC6B77: mov     ecx, [rsi+9D8h]
 * 0000000140BC6B7D: bt      ecx, 1Dh
 * 0000000140BC6B81: jb      loc_140BC6D9A
 * 0000000140BC6B87: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC6B91: jz      loc_140BC6D9A
 * 0000000140BC6B97: test    bl, cl
 * 0000000140BC6B99: jz      loc_140BC6D9A
 * 0000000140BC6B9F: mov     ecx, [rsi+0A74h]
 * 0000000140BC6BA5: mov     eax, [rsi+804h]
 * 0000000140BC6BAB: mov     r10, [rsi+838h]
 * 0000000140BC6BB2: sub     eax, ecx
 * 0000000140BC6BB4: mov     r8, [rsi+0A78h]
 * 0000000140BC6BBB: lea     rdx, [rcx+rsi]
 * 0000000140BC6BBF: mov     ecx, eax
 * 0000000140BC6BC1: shr     rcx, 3
 * 0000000140BC6BC5: lea     r9, [rdx+rcx*8]
 * 0000000140BC6BC9: jmp     short loc_140BC6BEC
 * 0000000140BC6BCB: xor     [rdx], r8
 * 0000000140BC6BCE: mov     rax, [rdx]
 * 0000000140BC6BD1: movzx   ecx, r8b
 * 0000000140BC6BD5: xor     rax, r10
 * 0000000140BC6BD8: and     ecx, 3Fh
 * 0000000140BC6BDB: ror     r8, cl
 * 0000000140BC6BDE: add     r8, rax
 * 0000000140BC6BE1: xor     r8, 0EFAh
 * 0000000140BC6BE8: add     rdx, 8
 * 0000000140BC6BEC: cmp     rdx, r9
 * 0000000140BC6BEF: jnz     short loc_140BC6BCB
 * 0000000140BC6BF1: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC6BF9: cmp     r8, [rsi+0A80h]
 * 0000000140BC6C00: jz      loc_140BC6D9A
 * 0000000140BC6C06: mov     ecx, [rsi+804h]
 * 0000000140BC6C0C: mov     rax, [rsi+588h]
 * 0000000140BC6C13: mov     [rax], rsi
 * 0000000140BC6C16: mov     [rax+10h], ecx
 * 0000000140BC6C19: mov     rcx, [rsi+0A80h]
 * 0000000140BC6C20: cmp     [rsi+918h], r11d
 * 0000000140BC6C27: jnz     short loc_140BC6C37
 * 0000000140BC6C29: mov     rax, [rsi+588h]
 * 0000000140BC6C30: xor     rcx, r8
 * 0000000140BC6C33: mov     [rax+18h], rcx
 * 0000000140BC6C37: xor     edx, edx
 * 0000000140BC6C39: mov     r9d, 100h
 * 0000000140BC6C3F: mov     rcx, rsi
 * 0000000140BC6C42: call    sub_140BDA384
 * 0000000140BC6C47: jmp     loc_140BC6D9A
 * 0000000140BC6C4C: mov     eax, [rsi+9C0h]
 * 0000000140BC6C52: mov     rcx, [rsi+9C8h]
 * 0000000140BC6C59: test    rax, rax
 * 0000000140BC6C5C: jz      short loc_140BC6C73
 * 0000000140BC6C5E: lea     rdx, [rax-1]
 * 0000000140BC6C62: add     rdx, rcx
 * 0000000140BC6C65: cmp     rbx, rcx
 * 0000000140BC6C68: jb      short loc_140BC6C73
 * 0000000140BC6C6A: cmp     rbx, rdx
 * 0000000140BC6C6D: jbe     loc_140BC6D91
 * 0000000140BC6C73: cmp     [rsi+918h], r11d
 * 0000000140BC6C7A: jnz     loc_140BC6D91
 * 0000000140BC6C80: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC6C8A: mov     edx, 1
 * 0000000140BC6C8F: add     rax, rsi
 * 0000000140BC6C92: mov     [rsi+920h], rax
 * 0000000140BC6C99: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC6CA3: add     rax, r13
 * 0000000140BC6CA6: mov     [rsi+928h], rax
 * 0000000140BC6CAD: movsxd  rax, dword ptr [r13+0]
 * 0000000140BC6CB1: mov     [rsi+930h], rax
 * 0000000140BC6CB8: mov     [rsi+938h], rbx
 * 0000000140BC6CBF: mov     [rsi+918h], edx
 * 0000000140BC6CC5: mov     ecx, [rsi+9D8h]
 * 0000000140BC6CCB: bt      ecx, 1Dh
 * 0000000140BC6CCF: jb      loc_140BC6D91
 * 0000000140BC6CD5: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC6CDF: jz      loc_140BC6D91
 * 0000000140BC6CE5: test    dl, cl
 * 0000000140BC6CE7: jz      loc_140BC6D91
 * 0000000140BC6CED: mov     ecx, [rsi+0A74h]
 * 0000000140BC6CF3: mov     eax, [rsi+804h]
 * 0000000140BC6CF9: mov     r10, [rsi+838h]
 * 0000000140BC6D00: sub     eax, ecx
 * 0000000140BC6D02: mov     r8, [rsi+0A78h]
 * 0000000140BC6D09: lea     rdx, [rcx+rsi]
 * 0000000140BC6D0D: mov     ecx, eax
 * 0000000140BC6D0F: shr     rcx, 3
 * 0000000140BC6D13: lea     r9, [rdx+rcx*8]
 * 0000000140BC6D17: jmp     short loc_140BC6D3A
 * 0000000140BC6D19: xor     [rdx], r8
 * 0000000140BC6D1C: mov     rax, [rdx]
 * 0000000140BC6D1F: movzx   ecx, r8b
 * 0000000140BC6D23: xor     rax, r10
 * 0000000140BC6D26: and     ecx, 3Fh
 * 0000000140BC6D29: ror     r8, cl
 * 0000000140BC6D2C: add     r8, rax
 * 0000000140BC6D2F: xor     r8, 0EFAh
 * 0000000140BC6D36: add     rdx, 8
 * 0000000140BC6D3A: cmp     rdx, r9
 * 0000000140BC6D3D: jnz     short loc_140BC6D19
 * 0000000140BC6D3F: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC6D47: cmp     r8, [rsi+0A80h]
 * 0000000140BC6D4E: jz      short loc_140BC6D91
 * 0000000140BC6D50: mov     ecx, [rsi+804h]
 * 0000000140BC6D56: mov     rax, [rsi+588h]
 * 0000000140BC6D5D: mov     [rax], rsi
 * 0000000140BC6D60: mov     [rax+10h], ecx
 * 0000000140BC6D63: mov     rcx, [rsi+0A80h]
 * 0000000140BC6D6A: cmp     [rsi+918h], r11d
 * 0000000140BC6D71: jnz     short loc_140BC6D81
 * 0000000140BC6D73: mov     rax, [rsi+588h]
 * 0000000140BC6D7A: xor     rcx, r8
 * 0000000140BC6D7D: mov     [rax+18h], rcx
 * 0000000140BC6D81: xor     edx, edx
 * 0000000140BC6D83: mov     r9d, 100h
 * 0000000140BC6D89: mov     rcx, rsi
 * 0000000140BC6D8C: call    sub_140BDA384
 * 0000000140BC6D91: mov     [r13+18h], rbx
 * 0000000140BC6D95: mov     ebx, 1
 * 0000000140BC6D9A: mov     rax, [rsi+2E8h]
 * 0000000140BC6DA1: mov     rdx, r14
 * 0000000140BC6DA4: mov     rcx, r15
 * 0000000140BC6DA7: call    KeGuardDispatchICall
 * 0000000140BC6DAC: mov     r11d, 1000h
 * 0000000140BC6DB2: xor     r15d, r15d
 * 0000000140BC6DB5: jmp     loc_140BC4FAF
 * 0000000140BC6DBA: mov     ecx, r10d
 * 0000000140BC6DBD: sub     ecx, 15h
 * 0000000140BC6DC0: jz      loc_140BCBC0F
 * 0000000140BC6DC6: sub     ecx, 3
 * 0000000140BC6DC9: jz      loc_140BC8B5D
 * 0000000140BC6DCF: sub     ecx, 1
 * 0000000140BC6DD2: jz      loc_140BC866E
 * 0000000140BC6DD8: sub     ecx, 1
 * 0000000140BC6DDB: jz      loc_140BC837E
 * 0000000140BC6DE1: sub     ecx, 1
 * 0000000140BC6DE4: jz      loc_140BC7FE0
 * 0000000140BC6DEA: sub     ecx, 1
 * 0000000140BC6DED: jz      loc_140BC73C7
 * 0000000140BC6DF3: cmp     ecx, 1
 * 0000000140BC6DF6: jnz     loc_140BCF176
 * 0000000140BC6DFC: mov     r14, [r13+8]
 * 0000000140BC6E00: mov     r8d, [r13+10h]
 * 0000000140BC6E04: mov     r9, r14
 * 0000000140BC6E07: add     [rsi+848h], r8d
 * 0000000140BC6E0E: mov     rax, r14
 * 0000000140BC6E11: mov     r11d, [rsi+834h]
 * 0000000140BC6E18: mov     r15, [rsi+838h]
 * 0000000140BC6E1F: lea     rcx, [r14+r8]
 * 0000000140BC6E23: cmp     r14, rcx
 * 0000000140BC6E26: jnb     short loc_140BC6E38
 * 0000000140BC6E28: mov     edx, 40h ; '@'
 * 0000000140BC6E2D: prefetchnta byte ptr [rax]
 * 0000000140BC6E30: add     rax, rdx
 * 0000000140BC6E33: cmp     rax, rcx
 * 0000000140BC6E36: jb      short loc_140BC6E2D
 * 0000000140BC6E38: mov     r10d, r8d
 * 0000000140BC6E3B: mov     rbx, r15
 * 0000000140BC6E3E: shr     r10d, 7
 * 0000000140BC6E42: mov     edx, 1
 * 0000000140BC6E47: mov     r12d, 0FFFFFFFFh
 * 0000000140BC6E4D: test    r10d, r10d
 * 0000000140BC6E50: jz      short loc_140BC6EB6
 * 0000000140BC6E52: mov     rsi, 7010008004002001h
 * 0000000140BC6E5C: mov     eax, 8
 * 0000000140BC6E61: xor     rbx, [r9]
 * 0000000140BC6E64: mov     ecx, r11d
 * 0000000140BC6E67: rol     rbx, cl
 * 0000000140BC6E6A: xor     rbx, [r9+8]
 * 0000000140BC6E6E: add     r9, 10h
 * 0000000140BC6E72: rol     rbx, cl
 * 0000000140BC6E75: sub     rax, rdx
 * 0000000140BC6E78: jnz     short loc_140BC6E61
 * 0000000140BC6E7A: mov     rcx, r9
 * 0000000140BC6E7D: sub     rcx, r14
 * 0000000140BC6E80: xor     rcx, r15
 * 0000000140BC6E83: mov     rax, rcx
 * 0000000140BC6E86: rol     rax, 11h
 * 0000000140BC6E8A: xor     rcx, rax
 * 0000000140BC6E8D: mov     rax, rsi
 * 0000000140BC6E90: mul     rcx
 * 0000000140BC6E93: mov     [rbp+8D0h+var_210], rdx
 * 0000000140BC6E9A: xor     edx, eax
 * 0000000140BC6E9C: xor     r11d, edx
 * 0000000140BC6E9F: mov     edx, 1
 * 0000000140BC6EA4: and     r11d, 3Fh
 * 0000000140BC6EA8: cmovz   r11d, edx
 * 0000000140BC6EAC: add     r10d, r12d
 * 0000000140BC6EAF: jnz     short loc_140BC6E5C
 * 0000000140BC6EB1: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC6EB6: and     r8d, 7Fh
 * 0000000140BC6EBA: cmp     r8d, 8
 * 0000000140BC6EBE: jb      short loc_140BC6EDD
 * 0000000140BC6EC0: mov     eax, r8d
 * 0000000140BC6EC3: shr     rax, 3
 * 0000000140BC6EC7: xor     rbx, [r9]
 * 0000000140BC6ECA: mov     ecx, r11d
 * 0000000140BC6ECD: rol     rbx, cl
 * 0000000140BC6ED0: add     r9, 8
 * 0000000140BC6ED4: add     r8d, 0FFFFFFF8h
 * 0000000140BC6ED8: sub     rax, rdx
 * 0000000140BC6EDB: jnz     short loc_140BC6EC7
 * 0000000140BC6EDD: xor     r15d, r15d
 * 0000000140BC6EE0: test    r8d, r8d
 * 0000000140BC6EE3: jz      short loc_140BC6EFA
 * 0000000140BC6EE5: movzx   eax, byte ptr [r9]
 * 0000000140BC6EE9: mov     ecx, r11d
 * 0000000140BC6EEC: xor     rbx, rax
 * 0000000140BC6EEF: add     r9, rdx
 * 0000000140BC6EF2: rol     rbx, cl
 * 0000000140BC6EF5: add     r8d, r12d
 * 0000000140BC6EF8: jnz     short loc_140BC6EE5
 * 0000000140BC6EFA: mov     rax, rbx
 * 0000000140BC6EFD: jmp     short loc_140BC6F01
 * 0000000140BC6EFF: xor     ebx, eax
 * 0000000140BC6F01: shr     rax, 1Fh
 * 0000000140BC6F05: test    rax, rax
 * 0000000140BC6F08: jnz     short loc_140BC6EFF
 * 0000000140BC6F0A: btr     ebx, 1Fh
 * 0000000140BC6F0E: mov     r12d, r15d
 * 0000000140BC6F11: cmp     ebx, [r13+14h]
 * 0000000140BC6F15: jz      loc_140BC7139
 * 0000000140BC6F1B: cmp     [r13+0], r15d
 * 0000000140BC6F1F: jnz     short loc_140BC6F29
 * 0000000140BC6F21: cmp     [r13+18h], r15d
 * 0000000140BC6F25: cmovnz  r12d, edx
 * 0000000140BC6F29: mov     ecx, [r13+10h]
 * 0000000140BC6F2D: mov     rdx, [r13+8]
 * 0000000140BC6F31: test    rcx, rcx
 * 0000000140BC6F34: jz      loc_140BC6FF8
 * 0000000140BC6F3A: mov     eax, [rsi+9DCh]
 * 0000000140BC6F40: mov     r8d, 40h ; '@'
 * 0000000140BC6F46: test    r8b, al
 * 0000000140BC6F49: jz      loc_140BC6FF8
 * 0000000140BC6F4F: mov     r15, cr8
 * 0000000140BC6F53: lea     eax, [r8-3Eh]
 * 0000000140BC6F57: mov     cr8, rax
 * 0000000140BC6F5B: mov     r14, rdx
 * 0000000140BC6F5E: lea     rax, [rcx-1]
 * 0000000140BC6F62: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140BC6F69: add     rax, rdx
 * 0000000140BC6F6C: or      rax, 0FFFh
 * 0000000140BC6F72: mov     [rsp+9D0h+var_978], rax
 * 0000000140BC6F77: lea     r13, [r14-1]
 * 0000000140BC6F7B: mov     rax, [rsi+468h]
 * 0000000140BC6F82: xor     edx, edx
 * 0000000140BC6F84: mov     rcx, r14
 * 0000000140BC6F87: call    KeGuardDispatchICall
 * 0000000140BC6F8C: cmp     eax, 0C000022Dh
 * 0000000140BC6F91: jnz     short loc_140BC6FB8
 * 0000000140BC6F93: test    r12d, r12d
 * 0000000140BC6F96: jnz     short loc_140BC6FE8
 * 0000000140BC6F98: lea     eax, [r12+1]
 * 0000000140BC6F9D: cmp     r15b, al
 * 0000000140BC6FA0: ja      short loc_140BC6FBC
 * 0000000140BC6FA2: movzx   eax, r15b
 * 0000000140BC6FA6: mov     cr8, rax
 * 0000000140BC6FAA: mov     al, [r14]
 * 0000000140BC6FAD: lea     eax, [r12+2]
 * 0000000140BC6FB2: mov     cr8, rax
 * 0000000140BC6FB6: jmp     short loc_140BC6F7B
 * 0000000140BC6FB8: test    eax, eax
 * 0000000140BC6FBA: js      short loc_140BC6FE8
 * 0000000140BC6FBC: mov     r11d, 1000h
 * 0000000140BC6FC2: add     r14, r11
 * 0000000140BC6FC5: add     r13, r11
 * 0000000140BC6FC8: cmp     r13, [rsp+9D0h+var_978]
 * 0000000140BC6FCD: jnz     short loc_140BC6F7B
 * 0000000140BC6FCF: movzx   eax, r15b
 * 0000000140BC6FD3: mov     cr8, rax
 * 0000000140BC6FD7: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BC6FDC: xor     r15d, r15d
 * 0000000140BC6FDF: lea     ebx, [r15+1]
 * 0000000140BC6FE3: jmp     loc_140BC7144
 * 0000000140BC6FE8: movzx   eax, r15b
 * 0000000140BC6FEC: mov     cr8, rax
 * 0000000140BC6FF0: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BC6FF5: xor     r15d, r15d
 * 0000000140BC6FF8: mov     eax, [r13+14h]
 * 0000000140BC6FFC: cmp     [rsi+918h], r15d
 * 0000000140BC7003: jnz     short loc_140BC7015
 * 0000000140BC7005: mov     ecx, ebx
 * 0000000140BC7007: xor     rcx, rax
 * 0000000140BC700A: mov     rax, [rsi+588h]
 * 0000000140BC7011: mov     [rax+18h], rcx
 * 0000000140BC7015: mov     ebx, 1
 * 0000000140BC701A: mov     rcx, [r13+8]
 * 0000000140BC701E: cmp     [rsi+918h], r15d
 * 0000000140BC7025: jnz     loc_140BC713E
 * 0000000140BC702B: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC7035: add     rax, rsi
 * 0000000140BC7038: mov     [rsi+920h], rax
 * 0000000140BC703F: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC7049: add     rax, r13
 * 0000000140BC704C: mov     [rsi+928h], rax
 * 0000000140BC7053: movsxd  rax, dword ptr [r13+0]
 * 0000000140BC7057: mov     [rsi+930h], rax
 * 0000000140BC705E: mov     [rsi+938h], rcx
 * 0000000140BC7065: mov     [rsi+918h], ebx
 * 0000000140BC706B: mov     ecx, [rsi+9D8h]
 * 0000000140BC7071: bt      ecx, 1Dh
 * 0000000140BC7075: jb      loc_140BC713E
 * 0000000140BC707B: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC7085: jz      loc_140BC713E
 * 0000000140BC708B: test    bl, cl
 * 0000000140BC708D: jz      loc_140BC713E
 * 0000000140BC7093: mov     ecx, [rsi+0A74h]
 * 0000000140BC7099: mov     eax, [rsi+804h]
 * 0000000140BC709F: mov     r10, [rsi+838h]
 * 0000000140BC70A6: sub     eax, ecx
 * 0000000140BC70A8: mov     r8, [rsi+0A78h]
 * 0000000140BC70AF: lea     rdx, [rcx+rsi]
 * 0000000140BC70B3: mov     ecx, eax
 * 0000000140BC70B5: shr     rcx, 3
 * 0000000140BC70B9: lea     r9, [rdx+rcx*8]
 * 0000000140BC70BD: jmp     short loc_140BC70E0
 * 0000000140BC70BF: xor     [rdx], r8
 * 0000000140BC70C2: mov     rax, [rdx]
 * 0000000140BC70C5: movzx   ecx, r8b
 * 0000000140BC70C9: xor     rax, r10
 * 0000000140BC70CC: and     ecx, 3Fh
 * 0000000140BC70CF: ror     r8, cl
 * 0000000140BC70D2: add     r8, rax
 * 0000000140BC70D5: xor     r8, 0EFAh
 * 0000000140BC70DC: add     rdx, 8
 * 0000000140BC70E0: cmp     rdx, r9
 * 0000000140BC70E3: jnz     short loc_140BC70BF
 * 0000000140BC70E5: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC70ED: cmp     r8, [rsi+0A80h]
 * 0000000140BC70F4: jz      short loc_140BC713E
 * 0000000140BC70F6: mov     ecx, [rsi+804h]
 * 0000000140BC70FC: mov     rax, [rsi+588h]
 * 0000000140BC7103: mov     [rax], rsi
 * 0000000140BC7106: mov     [rax+10h], ecx
 * 0000000140BC7109: mov     rcx, [rsi+0A80h]
 * 0000000140BC7110: cmp     [rsi+918h], r15d
 * 0000000140BC7117: jnz     short loc_140BC7127
 * 0000000140BC7119: mov     rax, [rsi+588h]
 * 0000000140BC7120: xor     rcx, r8
 * 0000000140BC7123: mov     [rax+18h], rcx
 * 0000000140BC7127: xor     edx, edx
 * 0000000140BC7129: mov     r9d, 100h
 * 0000000140BC712F: mov     rcx, rsi
 * 0000000140BC7132: call    sub_140BDA384
 * 0000000140BC7137: jmp     short loc_140BC713E
 * 0000000140BC7139: mov     ebx, 1
 * 0000000140BC713E: mov     r11d, 1000h
 * 0000000140BC7144: mov     eax, [r13+10h]
 * 0000000140BC7148: mov     r12, [r13+8]
 * 0000000140BC714C: shr     eax, 4
 * 0000000140BC714F: mov     [rbp+8D0h+arg_8], r12
 * 0000000140BC7156: test    eax, eax
 * 0000000140BC7158: jz      loc_140BC4FA9
 * 0000000140BC715E: mov     rdi, [rsp+9D0h+var_980]
 * 0000000140BC7163: mov     r13d, eax
 * 0000000140BC7166: mov     [rsp+9D0h+var_978], r13
 * 0000000140BC716B: mov     rax, [r12]
 * 0000000140BC716F: lea     rdx, [rbp+8D0h+var_788]
 * 0000000140BC7176: mov     rbx, rdi
 * 0000000140BC7179: mov     r15, [rax]
 * 0000000140BC717C: xor     eax, eax
 * 0000000140BC717E: mov     [rbp+8D0h+var_788], rax
 * 0000000140BC7185: mov     rcx, r15
 * 0000000140BC7188: mov     rax, [rsi+310h]
 * 0000000140BC718F: call    KeGuardDispatchICall
 * 0000000140BC7194: mov     r14, rax
 * 0000000140BC7197: test    rax, rax
 * 0000000140BC719A: jz      loc_140BC7397
 * 0000000140BC71A0: mov     r12d, 6
 * 0000000140BC71A6: xor     r13d, r13d
 * 0000000140BC71A9: mov     rdi, 0B3B74BDEE4453415h
 * 0000000140BC71B3: mov     rax, [rsi+218h]
 * 0000000140BC71BA: lea     rdx, [rbp+8D0h+var_208]
 * 0000000140BC71C1: mov     rcx, r14
 * 0000000140BC71C4: call    KeGuardDispatchICall
 * 0000000140BC71C9: test    rax, rax
 * 0000000140BC71CC: jnz     loc_140BC7364
 * 0000000140BC71D2: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BC71DC: lea     r9d, [rax+1]
 * 0000000140BC71E0: jz      short loc_140BC7228
 * 0000000140BC71E2: mov     rcx, [rsi+0AC8h]
 * 0000000140BC71E9: lea     edx, [rax+30h]
 * 0000000140BC71EC: mov     r8, r12
 * 0000000140BC71EF: mov     rax, [rbx]
 * 0000000140BC71F2: add     edx, 0FFFFFFF8h
 * 0000000140BC71F5: mov     [rcx], rax
 * 0000000140BC71F8: add     rbx, 8
 * 0000000140BC71FC: add     rcx, 8
 * 0000000140BC7200: sub     r8, r9
 * 0000000140BC7203: jnz     short loc_140BC71EF
 * 0000000140BC7205: test    edx, edx
 * 0000000140BC7207: jz      short loc_140BC7221
 * 0000000140BC7209: mov     esi, 0FFFFFFFFh
 * 0000000140BC720E: mov     al, [rbx]
 * 0000000140BC7210: add     rbx, r9
 * 0000000140BC7213: mov     [rcx], al
 * 0000000140BC7215: add     rcx, r9
 * 0000000140BC7218: add     edx, esi
 * 0000000140BC721A: jnz     short loc_140BC720E
 * 0000000140BC721C: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC7221: mov     rbx, [rsi+0AC8h]
 * 0000000140BC7228: mov     [rbx+18h], r14
 * 0000000140BC722C: mov     [rbx+20h], r15
 * 0000000140BC7230: mov     rax, [rsi+588h]
 * 0000000140BC7237: mov     [rax], rbx
 * 0000000140BC723A: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140BC7241: mov     rax, [rsi+588h]
 * 0000000140BC7248: mov     [rax+8], r14
 * 0000000140BC724C: mov     dword ptr [rax+14h], 1000h
 * 0000000140BC7253: cmp     [rsi+918h], r13d
 * 0000000140BC725A: jnz     loc_140BC7364
 * 0000000140BC7260: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC726A: add     rax, rsi
 * 0000000140BC726D: mov     [rsi+920h], rax
 * 0000000140BC7274: lea     rax, [rbx+rdi]
 * 0000000140BC7278: mov     [rsi+928h], rax
 * 0000000140BC727F: movsxd  rax, dword ptr [rbx]
 * 0000000140BC7282: mov     [rsi+930h], rax
 * 0000000140BC7289: mov     [rsi+938h], r12
 * 0000000140BC7290: mov     [rsi+918h], r9d
 * 0000000140BC7297: mov     ecx, [rsi+9D8h]
 * 0000000140BC729D: bt      ecx, 1Dh
 * 0000000140BC72A1: jb      loc_140BC7364
 * 0000000140BC72A7: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC72B1: jz      loc_140BC7364
 * 0000000140BC72B7: test    r9b, cl
 * 0000000140BC72BA: jz      loc_140BC7364
 * 0000000140BC72C0: mov     ecx, [rsi+0A74h]
 * 0000000140BC72C6: mov     eax, [rsi+804h]
 * 0000000140BC72CC: mov     r10, [rsi+838h]
 * 0000000140BC72D3: sub     eax, ecx
 * 0000000140BC72D5: mov     r8, [rsi+0A78h]
 * 0000000140BC72DC: lea     rdx, [rcx+rsi]
 * 0000000140BC72E0: mov     ecx, eax
 * 0000000140BC72E2: shr     rcx, 3
 * 0000000140BC72E6: lea     r9, [rdx+rcx*8]
 * 0000000140BC72EA: jmp     short loc_140BC730D
 * 0000000140BC72EC: xor     [rdx], r8
 * 0000000140BC72EF: mov     rax, [rdx]
 * 0000000140BC72F2: movzx   ecx, r8b
 * 0000000140BC72F6: xor     rax, r10
 * 0000000140BC72F9: and     ecx, 3Fh
 * 0000000140BC72FC: ror     r8, cl
 * 0000000140BC72FF: add     r8, rax
 * 0000000140BC7302: xor     r8, 0EFAh
 * 0000000140BC7309: add     rdx, 8
 * 0000000140BC730D: cmp     rdx, r9
 * 0000000140BC7310: jnz     short loc_140BC72EC
 * 0000000140BC7312: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC731A: cmp     r8, [rsi+0A80h]
 * 0000000140BC7321: jz      short loc_140BC7364
 * 0000000140BC7323: mov     ecx, [rsi+804h]
 * 0000000140BC7329: mov     rax, [rsi+588h]
 * 0000000140BC7330: mov     [rax], rsi
 * 0000000140BC7333: mov     [rax+10h], ecx
 * 0000000140BC7336: mov     rcx, [rsi+0A80h]
 * 0000000140BC733D: cmp     [rsi+918h], r13d
 * 0000000140BC7344: jnz     short loc_140BC7354
 * 0000000140BC7346: mov     rax, [rsi+588h]
 * 0000000140BC734D: xor     rcx, r8
 * 0000000140BC7350: mov     [rax+18h], rcx
 * 0000000140BC7354: xor     edx, edx
 * 0000000140BC7356: mov     r9d, 100h
 * 0000000140BC735C: mov     rcx, rsi
 * 0000000140BC735F: call    sub_140BDA384
 * 0000000140BC7364: mov     rax, [rsi+310h]
 * 0000000140BC736B: lea     rdx, [rbp+8D0h+var_788]
 * 0000000140BC7372: mov     rcx, r15
 * 0000000140BC7375: call    KeGuardDispatchICall
 * 0000000140BC737A: mov     r14, rax
 * 0000000140BC737D: test    rax, rax
 * 0000000140BC7380: jnz     loc_140BC71B3
 * 0000000140BC7386: mov     r12, [rbp+8D0h+arg_8]
 * 0000000140BC738D: mov     r13, [rsp+9D0h+var_978]
 * 0000000140BC7392: mov     rdi, [rsp+9D0h+var_980]
 * 0000000140BC7397: add     r12, 10h
 * 0000000140BC739B: mov     ebx, 1
 * 0000000140BC73A0: sub     r13, rbx
 * 0000000140BC73A3: mov     [rbp+8D0h+arg_8], r12
 * 0000000140BC73AA: mov     [rsp+9D0h+var_978], r13
 * 0000000140BC73AF: jnz     loc_140BC716B
 * 0000000140BC73B5: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC73BC: mov     r11d, 1000h
 * 0000000140BC73C2: jmp     loc_140BC53D5
 * 0000000140BC73C7: cmp     [r13+10h], r15d
 * 0000000140BC73CB: jnz     loc_140BC7A6E
 * 0000000140BC73D1: lea     rax, [r13+30h]
 * 0000000140BC73D5: xor     r9d, r9d
 * 0000000140BC73D8: mov     [rbp+8D0h+var_6F8], rax
 * 0000000140BC73DF: lea     rcx, [rbp+8D0h+var_700]
 * 0000000140BC73E6: movzx   eax, word ptr [r13+28h]
 * 0000000140BC73EB: xor     r8d, r8d
 * 0000000140BC73EE: mov     [rbp+8D0h+var_700], ax
 * 0000000140BC73F5: xor     edx, edx
 * 0000000140BC73F7: mov     [rbp+8D0h+var_6FE], ax
 * 0000000140BC73FE: lea     rax, [rbp+8D0h+var_8A0]
 * 0000000140BC7402: mov     [rsp+9D0h+var_998], rax
 * 0000000140BC7407: mov     rax, [rsi+508h]
 * 0000000140BC740E: mov     [rsp+9D0h+var_9A0], r15
 * 0000000140BC7413: mov     byte ptr [rsp+9D0h+var_9A8], r15b
 * 0000000140BC7418: mov     [rsp+9D0h+BugCheckParameter4], rax
 * 0000000140BC741D: mov     rax, [rsi+1F8h]
 * 0000000140BC7424: call    KeGuardDispatchICall
 * 0000000140BC7429: test    eax, eax
 * 0000000140BC742B: js      loc_140BD0398
 * 0000000140BC7431: mov     rax, [rbp+8D0h+var_8A0]
 * 0000000140BC7435: mov     ecx, [rax+10h]
 * 0000000140BC7438: mov     eax, 10h
 * 0000000140BC743D: test    al, cl
 * 0000000140BC743F: jnz     short loc_140BC7456
 * 0000000140BC7441: mov     rax, [rsi+1F0h]
 * 0000000140BC7448: mov     rcx, [rbp+8D0h+var_8A0]
 * 0000000140BC744C: call    KeGuardDispatchICall
 * 0000000140BC7451: jmp     loc_140BD0398
 * 0000000140BC7456: mov     rcx, [rsi+1F8h]
 * 0000000140BC745D: lea     rdx, [rbp+8D0h+var_160]
 * 0000000140BC7464: mov     rax, [rsi+210h]
 * 0000000140BC746B: call    KeGuardDispatchICall
 * 0000000140BC7470: mov     rcx, [rbp+8D0h+var_158]
 * 0000000140BC7477: test    rcx, rcx
 * 0000000140BC747A: jz      short loc_140BC749E
 * 0000000140BC747C: mov     rax, [rsi+208h]
 * 0000000140BC7483: mov     r12, rcx
 * 0000000140BC7486: mov     [rbp+8D0h+var_8D8], rcx
 * 0000000140BC748A: call    KeGuardDispatchICall
 * 0000000140BC748F: test    rax, rax
 * 0000000140BC7492: jz      short loc_140BC74A2
 * 0000000140BC7494: mov     r14d, [rax+50h]
 * 0000000140BC7498: mov     [rbp+8D0h+var_8F8], r14d
 * 0000000140BC749C: jmp     short loc_140BC74A6
 * 0000000140BC749E: mov     r12, [rbp+8D0h+var_8D8]
 * 0000000140BC74A2: mov     r14d, [rbp+8D0h+var_8F8]
 * 0000000140BC74A6: mov     rcx, [r13+18h]
 * 0000000140BC74AA: lea     rdx, [rbp+8D0h+var_190]
 * 0000000140BC74B1: mov     rax, [rsi+210h]
 * 0000000140BC74B8: call    KeGuardDispatchICall
 * 0000000140BC74BD: mov     rcx, [rbp+8D0h+var_188]
 * 0000000140BC74C4: test    rcx, rcx
 * 0000000140BC74C7: jz      short loc_140BC74EB
 * 0000000140BC74C9: mov     rax, [rsi+208h]
 * 0000000140BC74D0: mov     rbx, rcx
 * 0000000140BC74D3: mov     [rbp+8D0h+var_8F0], rcx
 * 0000000140BC74D7: call    KeGuardDispatchICall
 * 0000000140BC74DC: test    rax, rax
 * 0000000140BC74DF: jz      short loc_140BC74EF
 * 0000000140BC74E1: mov     r8d, [rax+50h]
 * 0000000140BC74E5: mov     [rbp+8D0h+var_8C8], r8d
 * 0000000140BC74E9: jmp     short loc_140BC74F3
 * 0000000140BC74EB: mov     rbx, [rbp+8D0h+var_8F0]
 * 0000000140BC74EF: mov     r8d, [rbp+8D0h+var_8C8]
 * 0000000140BC74F3: bt      dword ptr [rsi+9D8h], 1Dh
 * 0000000140BC74FB: jb      short loc_140BC7511
 * 0000000140BC74FD: mov     rax, [rbp+8D0h+var_8A0]
 * 0000000140BC7501: add     rax, 70h ; 'p'
 * 0000000140BC7505: mov     [r13+8], rax
 * 0000000140BC7509: mov     dword ptr [r13+10h], 0E0h
 * 0000000140BC7511: mov     rcx, [rbp+8D0h+var_8A0]
 * 0000000140BC7515: mov     dl, r15b
 * 0000000140BC7518: mov     r10d, r14d
 * 0000000140BC751B: movzx   eax, dl
 * 0000000140BC751E: mov     r9, [rcx+rax*8+70h]
 * 0000000140BC7523: test    r14d, r14d
 * 0000000140BC7526: jz      short loc_140BC753A
 * 0000000140BC7528: lea     rax, [r12-1]
 * 0000000140BC752D: add     rax, r10
 * 0000000140BC7530: cmp     r9, r12
 * 0000000140BC7533: jb      short loc_140BC753A
 * 0000000140BC7535: cmp     r9, rax
 * 0000000140BC7538: jbe     short loc_140BC755F
 * 0000000140BC753A: mov     eax, r8d
 * 0000000140BC753D: test    r8d, r8d
 * 0000000140BC7540: jz      loc_140BC7930
 * 0000000140BC7546: lea     r8, [rbx-1]
 * 0000000140BC754A: add     r8, rax
 * 0000000140BC754D: cmp     r9, rbx
 * 0000000140BC7550: jb      loc_140BC7930
 * 0000000140BC7556: cmp     r9, r8
 * 0000000140BC7559: ja      loc_140BC7930
 * 0000000140BC755F: mov     r8d, [rbp+8D0h+var_8C8]
 * 0000000140BC7563: add     dl, 1
 * 0000000140BC7566: cmp     dl, 1Ch
 * 0000000140BC7569: jb      short loc_140BC751B
 * 0000000140BC756B: bt      dword ptr [rsi+9D8h], 1Dh
 * 0000000140BC7573: jb      loc_140BC5B4C
 * 0000000140BC7579: mov     r14, [r13+8]
 * 0000000140BC757D: mov     r9d, [r13+10h]
 * 0000000140BC7581: mov     r10, r14
 * 0000000140BC7584: add     [rsi+848h], r9d
 * 0000000140BC758B: mov     rax, r14
 * 0000000140BC758E: mov     r11d, [rsi+834h]
 * 0000000140BC7595: mov     r15, [rsi+838h]
 * 0000000140BC759C: lea     rcx, [r14+r9]
 * 0000000140BC75A0: cmp     r14, rcx
 * 0000000140BC75A3: jnb     short loc_140BC75B5
 * 0000000140BC75A5: mov     edx, 40h ; '@'
 * 0000000140BC75AA: prefetchnta byte ptr [rax]
 * 0000000140BC75AD: add     rax, rdx
 * 0000000140BC75B0: cmp     rax, rcx
 * 0000000140BC75B3: jb      short loc_140BC75AA
 * 0000000140BC75B5: mov     ebx, r9d
 * 0000000140BC75B8: mov     r8, r15
 * 0000000140BC75BB: shr     ebx, 7
 * 0000000140BC75BE: test    ebx, ebx
 * 0000000140BC75C0: jz      short loc_140BC7638
 * 0000000140BC75C2: mov     esi, 1
 * 0000000140BC75C7: mov     rdi, 7010008004002001h
 * 0000000140BC75D1: mov     r12d, 0FFFFFFFFh
 * 0000000140BC75D7: mov     eax, 8
 * 0000000140BC75DC: xor     r8, [r10]
 * 0000000140BC75DF: mov     ecx, r11d
 * 0000000140BC75E2: rol     r8, cl
 * 0000000140BC75E5: xor     r8, [r10+8]
 * 0000000140BC75E9: add     r10, 10h
 * 0000000140BC75ED: rol     r8, cl
 * 0000000140BC75F0: sub     rax, rsi
 * 0000000140BC75F3: jnz     short loc_140BC75DC
 * 0000000140BC75F5: mov     rcx, r10
 * 0000000140BC75F8: sub     rcx, r14
 * 0000000140BC75FB: xor     rcx, r15
 * 0000000140BC75FE: mov     rax, rcx
 * 0000000140BC7601: rol     rax, 11h
 * 0000000140BC7605: xor     rcx, rax
 * 0000000140BC7608: mov     rax, rdi
 * 0000000140BC760B: mul     rcx
 * 0000000140BC760E: xor     r11d, edx
 * 0000000140BC7611: mov     [rbp+8D0h+var_5E8], rdx
 * 0000000140BC7618: xor     r11d, eax
 * 0000000140BC761B: and     r11d, 3Fh
 * 0000000140BC761F: cmovz   r11d, esi
 * 0000000140BC7623: add     ebx, r12d
 * 0000000140BC7626: jnz     short loc_140BC75D7
 * 0000000140BC7628: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC762D: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC7634: mov     r12, [rbp+8D0h+var_8D8]
 * 0000000140BC7638: and     r9d, 7Fh
 * 0000000140BC763C: mov     ebx, 1
 * 0000000140BC7641: cmp     r9d, 8
 * 0000000140BC7645: jb      short loc_140BC7664
 * 0000000140BC7647: mov     eax, r9d
 * 0000000140BC764A: shr     rax, 3
 * 0000000140BC764E: xor     r8, [r10]
 * 0000000140BC7651: mov     ecx, r11d
 * 0000000140BC7654: rol     r8, cl
 * 0000000140BC7657: add     r10, 8
 * 0000000140BC765B: add     r9d, 0FFFFFFF8h
 * 0000000140BC765F: sub     rax, rbx
 * 0000000140BC7662: jnz     short loc_140BC764E
 * 0000000140BC7664: test    r9d, r9d
 * 0000000140BC7667: jz      short loc_140BC7688
 * 0000000140BC7669: mov     r12d, 0FFFFFFFFh
 * 0000000140BC766F: movzx   eax, byte ptr [r10]
 * 0000000140BC7673: mov     ecx, r11d
 * 0000000140BC7676: xor     r8, rax
 * 0000000140BC7679: add     r10, rbx
 * 0000000140BC767C: rol     r8, cl
 * 0000000140BC767F: add     r9d, r12d
 * 0000000140BC7682: jnz     short loc_140BC766F
 * 0000000140BC7684: mov     r12, [rbp+8D0h+var_8D8]
 * 0000000140BC7688: mov     rax, r8
 * 0000000140BC768B: shr     rax, 1Fh
 * 0000000140BC768F: xor     r9d, r9d
 * 0000000140BC7692: jmp     short loc_140BC769B
 * 0000000140BC7694: xor     r8d, eax
 * 0000000140BC7697: shr     rax, 1Fh
 * 0000000140BC769B: test    rax, rax
 * 0000000140BC769E: jnz     short loc_140BC7694
 * 0000000140BC76A0: btr     r8d, 1Fh
 * 0000000140BC76A5: mov     r10d, r9d
 * 0000000140BC76A8: mov     [r13+14h], r8d
 * 0000000140BC76AC: mov     rax, [rbp+8D0h+var_8A0]
 * 0000000140BC76B0: mov     r14, [rax+50h]
 * 0000000140BC76B4: test    r14, r14
 * 0000000140BC76B7: jz      short loc_140BC772E
 * 0000000140BC76B9: mov     r10d, [r14]
 * 0000000140BC76BC: mov     dl, r9b
 * 0000000140BC76BF: lea     r8d, [r10-8]
 * 0000000140BC76C3: shr     r8d, 3
 * 0000000140BC76C7: test    r8d, r8d
 * 0000000140BC76CA: jz      short loc_140BC772E
 * 0000000140BC76CC: mov     r11d, [rbp+8D0h+var_8F8]
 * 0000000140BC76D0: mov     rbx, [rbp+8D0h+var_8F0]
 * 0000000140BC76D4: mov     r15d, [rbp+8D0h+var_8C8]
 * 0000000140BC76D8: movzx   eax, dl
 * 0000000140BC76DB: mov     rcx, [r14+rax*8+8]
 * 0000000140BC76E0: test    rcx, rcx
 * 0000000140BC76E3: jz      short loc_140BC7723
 * 0000000140BC76E5: test    r11, r11
 * 0000000140BC76E8: jz      short loc_140BC76FB
 * 0000000140BC76EA: lea     rax, [r11-1]
 * 0000000140BC76EE: add     rax, r12
 * 0000000140BC76F1: cmp     rcx, r12
 * 0000000140BC76F4: jb      short loc_140BC76FB
 * 0000000140BC76F6: cmp     rcx, rax
 * 0000000140BC76F9: jbe     short loc_140BC7723
 * 0000000140BC76FB: mov     rax, r15
 * 0000000140BC76FE: test    r15d, r15d
 * 0000000140BC7701: jz      loc_140BC77E2
 * 0000000140BC7707: lea     r9, [rbx-1]
 * 0000000140BC770B: add     r9, rax
 * 0000000140BC770E: cmp     rcx, rbx
 * 0000000140BC7711: jb      loc_140BC77E2
 * 0000000140BC7717: cmp     rcx, r9
 * 0000000140BC771A: ja      loc_140BC77E2
 * 0000000140BC7720: xor     r9d, r9d
 * 0000000140BC7723: add     dl, 1
 * 0000000140BC7726: movzx   eax, dl
 * 0000000140BC7729: cmp     eax, r8d
 * 0000000140BC772C: jb      short loc_140BC76D8
 * 0000000140BC772E: add     [rsi+848h], r10d
 * 0000000140BC7735: mov     r9, r14
 * 0000000140BC7738: mov     ebx, [rsi+834h]
 * 0000000140BC773E: mov     rax, r14
 * 0000000140BC7741: mov     r15, [rsi+838h]
 * 0000000140BC7748: mov     ecx, r10d
 * 0000000140BC774B: add     rcx, r14
 * 0000000140BC774E: cmp     r14, rcx
 * 0000000140BC7751: jnb     short loc_140BC7763
 * 0000000140BC7753: mov     edx, 40h ; '@'
 * 0000000140BC7758: prefetchnta byte ptr [rax]
 * 0000000140BC775B: add     rax, rdx
 * 0000000140BC775E: cmp     rax, rcx
 * 0000000140BC7761: jb      short loc_140BC7758
 * 0000000140BC7763: mov     r11d, r10d
 * 0000000140BC7766: mov     r8, r15
 * 0000000140BC7769: shr     r11d, 7
 * 0000000140BC776D: mov     r12d, 1
 * 0000000140BC7773: test    r11d, r11d
 * 0000000140BC7776: jz      loc_140BC78CA
 * 0000000140BC777C: mov     rsi, 7010008004002001h
 * 0000000140BC7786: mov     eax, 8
 * 0000000140BC778B: xor     r8, [r9]
 * 0000000140BC778E: mov     ecx, ebx
 * 0000000140BC7790: rol     r8, cl
 * 0000000140BC7793: xor     r8, [r9+8]
 * 0000000140BC7797: add     r9, 10h
 * 0000000140BC779B: rol     r8, cl
 * 0000000140BC779E: sub     rax, r12
 * 0000000140BC77A1: jnz     short loc_140BC778B
 * 0000000140BC77A3: mov     rcx, r9
 * 0000000140BC77A6: sub     rcx, r14
 * 0000000140BC77A9: xor     rcx, r15
 * 0000000140BC77AC: mov     rax, rcx
 * 0000000140BC77AF: rol     rax, 11h
 * 0000000140BC77B3: xor     rcx, rax
 * 0000000140BC77B6: mov     rax, rsi
 * 0000000140BC77B9: mul     rcx
 * 0000000140BC77BC: xor     eax, edx
 * 0000000140BC77BE: mov     [rbp+8D0h+var_5E0], rdx
 * 0000000140BC77C5: xor     ebx, eax
 * 0000000140BC77C7: mov     edx, 0FFFFFFFFh
 * 0000000140BC77CC: and     ebx, 3Fh
 * 0000000140BC77CF: cmovz   ebx, r12d
 * 0000000140BC77D3: add     r11d, edx
 * 0000000140BC77D6: jnz     short loc_140BC7786
 * 0000000140BC77D8: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC77DD: jmp     loc_140BC78CF
 * 0000000140BC77E2: mov     [r13+20h], rcx
 * 0000000140BC77E6: xor     r15d, r15d
 * 0000000140BC77E9: mov     rax, [rsi+588h]
 * 0000000140BC77F0: lea     ebx, [r15+1]
 * 0000000140BC77F4: mov     [rax], r13
 * 0000000140BC77F7: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140BC77FE: cmp     [rsi+918h], r15d
 * 0000000140BC7805: jnz     loc_140BC5B5D
 * 0000000140BC780B: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC7815: add     rax, rsi
 * 0000000140BC7818: mov     [rsi+920h], rax
 * 0000000140BC781F: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC7829: add     rax, r13
 * 0000000140BC782C: mov     [rsi+928h], rax
 * 0000000140BC7833: movsxd  rax, dword ptr [r13+0]
 * 0000000140BC7837: mov     [rsi+930h], rax
 * 0000000140BC783E: mov     [rsi+938h], r14
 * 0000000140BC7845: mov     [rsi+918h], ebx
 * 0000000140BC784B: mov     ecx, [rsi+9D8h]
 * 0000000140BC7851: bt      ecx, 1Dh
 * 0000000140BC7855: jb      loc_140BC5B5D
 * 0000000140BC785B: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC7865: jz      loc_140BC5B5D
 * 0000000140BC786B: test    bl, cl
 * 0000000140BC786D: jz      loc_140BC5B5D
 * 0000000140BC7873: mov     ecx, [rsi+0A74h]
 * 0000000140BC7879: mov     eax, [rsi+804h]
 * 0000000140BC787F: mov     r10, [rsi+838h]
 * 0000000140BC7886: sub     eax, ecx
 * 0000000140BC7888: mov     r8, [rsi+0A78h]
 * 0000000140BC788F: lea     rdx, [rcx+rsi]
 * 0000000140BC7893: mov     ecx, eax
 * 0000000140BC7895: shr     rcx, 3
 * 0000000140BC7899: lea     r9, [rdx+rcx*8]
 * 0000000140BC789D: jmp     short loc_140BC78C0
 * 0000000140BC789F: xor     [rdx], r8
 * 0000000140BC78A2: mov     rax, [rdx]
 * 0000000140BC78A5: movzx   ecx, r8b
 * 0000000140BC78A9: xor     rax, r10
 * 0000000140BC78AC: and     ecx, 3Fh
 * 0000000140BC78AF: ror     r8, cl
 * 0000000140BC78B2: add     r8, rax
 * 0000000140BC78B5: xor     r8, 0EFAh
 * 0000000140BC78BC: add     rdx, 8
 * 0000000140BC78C0: cmp     rdx, r9
 * 0000000140BC78C3: jnz     short loc_140BC789F
 * 0000000140BC78C5: jmp     loc_140BC6A63
 * 0000000140BC78CA: mov     edx, 0FFFFFFFFh
 * 0000000140BC78CF: and     r10d, 7Fh
 * 0000000140BC78D3: cmp     r10d, 8
 * 0000000140BC78D7: jb      short loc_140BC78F5
 * 0000000140BC78D9: mov     eax, r10d
 * 0000000140BC78DC: shr     rax, 3
 * 0000000140BC78E0: xor     r8, [r9]
 * 0000000140BC78E3: mov     ecx, ebx
 * 0000000140BC78E5: rol     r8, cl
 * 0000000140BC78E8: add     r9, 8
 * 0000000140BC78EC: add     r10d, 0FFFFFFF8h
 * 0000000140BC78F0: sub     rax, r12
 * 0000000140BC78F3: jnz     short loc_140BC78E0
 * 0000000140BC78F5: xor     r15d, r15d
 * 0000000140BC78F8: test    r10d, r10d
 * 0000000140BC78FB: jz      short loc_140BC7911
 * 0000000140BC78FD: movzx   eax, byte ptr [r9]
 * 0000000140BC7901: mov     ecx, ebx
 * 0000000140BC7903: xor     r8, rax
 * 0000000140BC7906: add     r9, r12
 * 0000000140BC7909: rol     r8, cl
 * 0000000140BC790C: add     r10d, edx
 * 0000000140BC790F: jnz     short loc_140BC78FD
 * 0000000140BC7911: mov     rax, r8
 * 0000000140BC7914: jmp     short loc_140BC7919
 * 0000000140BC7916: xor     r8d, eax
 * 0000000140BC7919: shr     rax, 1Fh
 * 0000000140BC791D: test    rax, rax
 * 0000000140BC7920: jnz     short loc_140BC7916
 * 0000000140BC7922: btr     r8d, 1Fh
 * 0000000140BC7927: mov     [r13+2Ch], r8d
 * 0000000140BC792B: jmp     loc_140BC5B58
 * 0000000140BC7930: bt      dword ptr [rsi+9D8h], 1Dh
 * 0000000140BC7938: mov     ebx, 1
 * 0000000140BC793D: jnb     short loc_140BC7989
 * 0000000140BC793F: mov     rcx, [rsi+0AC8h]
 * 0000000140BC7946: lea     edx, [rbx+2Fh]
 * 0000000140BC7949: lea     r8d, [rbx+5]
 * 0000000140BC794D: mov     rax, [r13+0]
 * 0000000140BC7951: add     edx, 0FFFFFFF8h
 * 0000000140BC7954: mov     [rcx], rax
 * 0000000140BC7957: add     r13, 8
 * 0000000140BC795B: add     rcx, 8
 * 0000000140BC795F: sub     r8, rbx
 * 0000000140BC7962: jnz     short loc_140BC794D
 * 0000000140BC7964: test    edx, edx
 * 0000000140BC7966: jz      short loc_140BC7982
 * 0000000140BC7968: mov     esi, 0FFFFFFFFh
 * 0000000140BC796D: mov     al, [r13+0]
 * 0000000140BC7971: add     r13, rbx
 * 0000000140BC7974: mov     [rcx], al
 * 0000000140BC7976: add     rcx, rbx
 * 0000000140BC7979: add     edx, esi
 * 0000000140BC797B: jnz     short loc_140BC796D
 * 0000000140BC797D: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC7982: mov     r13, [rsi+0AC8h]
 * 0000000140BC7989: mov     [r13+20h], r9
 * 0000000140BC798D: mov     rax, [rsi+588h]
 * 0000000140BC7994: mov     [rax], r13
 * 0000000140BC7997: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140BC799E: mov     rcx, [r13+8]
 * 0000000140BC79A2: cmp     [rsi+918h], r15d
 * 0000000140BC79A9: jnz     loc_140BC5B5D
 * 0000000140BC79AF: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC79B9: add     rax, rsi
 * 0000000140BC79BC: mov     [rsi+920h], rax
 * 0000000140BC79C3: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC79CD: add     rax, r13
 * 0000000140BC79D0: mov     [rsi+928h], rax
 * 0000000140BC79D7: movsxd  rax, dword ptr [r13+0]
 * 0000000140BC79DB: mov     [rsi+930h], rax
 * 0000000140BC79E2: mov     [rsi+938h], rcx
 * 0000000140BC79E9: mov     [rsi+918h], ebx
 * 0000000140BC79EF: mov     ecx, [rsi+9D8h]
 * 0000000140BC79F5: bt      ecx, 1Dh
 * 0000000140BC79F9: jb      loc_140BC5B5D
 * 0000000140BC79FF: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC7A09: jz      loc_140BC5B5D
 * 0000000140BC7A0F: test    bl, cl
 * 0000000140BC7A11: jz      loc_140BC5B5D
 * 0000000140BC7A17: mov     ecx, [rsi+0A74h]
 * 0000000140BC7A1D: mov     eax, [rsi+804h]
 * 0000000140BC7A23: mov     r10, [rsi+838h]
 * 0000000140BC7A2A: sub     eax, ecx
 * 0000000140BC7A2C: mov     r8, [rsi+0A78h]
 * 0000000140BC7A33: lea     rdx, [rcx+rsi]
 * 0000000140BC7A37: mov     ecx, eax
 * 0000000140BC7A39: shr     rcx, 3
 * 0000000140BC7A3D: lea     r9, [rdx+rcx*8]
 * 0000000140BC7A41: jmp     short loc_140BC7A64
 * 0000000140BC7A43: xor     [rdx], r8
 * 0000000140BC7A46: mov     rax, [rdx]
 * 0000000140BC7A49: movzx   ecx, r8b
 * 0000000140BC7A4D: xor     rax, r10
 * 0000000140BC7A50: and     ecx, 3Fh
 * 0000000140BC7A53: ror     r8, cl
 * 0000000140BC7A56: add     r8, rax
 * 0000000140BC7A59: xor     r8, 0EFAh
 * 0000000140BC7A60: add     rdx, 8
 * 0000000140BC7A64: cmp     rdx, r9
 * 0000000140BC7A67: jnz     short loc_140BC7A43
 * 0000000140BC7A69: jmp     loc_140BC6A63
 * 0000000140BC7A6E: mov     r14, [r13+8]
 * 0000000140BC7A72: mov     r8d, [r13+10h]
 * 0000000140BC7A76: mov     r9, r14
 * 0000000140BC7A79: add     [rsi+848h], r8d
 * 0000000140BC7A80: mov     rax, r14
 * 0000000140BC7A83: mov     r10d, [rsi+834h]
 * 0000000140BC7A8A: mov     r15, [rsi+838h]
 * 0000000140BC7A91: lea     rcx, [r14+r8]
 * 0000000140BC7A95: cmp     r14, rcx
 * 0000000140BC7A98: jnb     short loc_140BC7AAA
 * 0000000140BC7A9A: mov     edx, 40h ; '@'
 * 0000000140BC7A9F: prefetchnta byte ptr [rax]
 * 0000000140BC7AA2: add     rax, rdx
 * 0000000140BC7AA5: cmp     rax, rcx
 * 0000000140BC7AA8: jb      short loc_140BC7A9F
 * 0000000140BC7AAA: mov     r11d, r8d
 * 0000000140BC7AAD: mov     rbx, r15
 * 0000000140BC7AB0: shr     r11d, 7
 * 0000000140BC7AB4: mov     edx, 1
 * 0000000140BC7AB9: mov     r12d, 0FFFFFFFFh
 * 0000000140BC7ABF: test    r11d, r11d
 * 0000000140BC7AC2: jz      short loc_140BC7B29
 * 0000000140BC7AC4: mov     rsi, 7010008004002001h
 * 0000000140BC7ACE: mov     eax, 8
 * 0000000140BC7AD3: xor     rbx, [r9]
 * 0000000140BC7AD6: mov     ecx, r10d
 * 0000000140BC7AD9: rol     rbx, cl
 * 0000000140BC7ADC: xor     rbx, [r9+8]
 * 0000000140BC7AE0: add     r9, 10h
 * 0000000140BC7AE4: rol     rbx, cl
 * 0000000140BC7AE7: sub     rax, rdx
 * 0000000140BC7AEA: jnz     short loc_140BC7AD3
 * 0000000140BC7AEC: mov     rcx, r9
 * 0000000140BC7AEF: sub     rcx, r14
 * 0000000140BC7AF2: xor     rcx, r15
 * 0000000140BC7AF5: mov     rax, rcx
 * 0000000140BC7AF8: rol     rax, 11h
 * 0000000140BC7AFC: xor     rcx, rax
 * 0000000140BC7AFF: mov     rax, rsi
 * 0000000140BC7B02: mul     rcx
 * 0000000140BC7B05: xor     r10d, edx
 * 0000000140BC7B08: mov     [rbp+8D0h+var_5D8], rdx
 * 0000000140BC7B0F: xor     r10d, eax
 * 0000000140BC7B12: mov     edx, 1
 * 0000000140BC7B17: and     r10d, 3Fh
 * 0000000140BC7B1B: cmovz   r10d, edx
 * 0000000140BC7B1F: add     r11d, r12d
 * 0000000140BC7B22: jnz     short loc_140BC7ACE
 * 0000000140BC7B24: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC7B29: and     r8d, 7Fh
 * 0000000140BC7B2D: cmp     r8d, 8
 * 0000000140BC7B31: jb      short loc_140BC7B50
 * 0000000140BC7B33: mov     eax, r8d
 * 0000000140BC7B36: shr     rax, 3
 * 0000000140BC7B3A: xor     rbx, [r9]
 * 0000000140BC7B3D: mov     ecx, r10d
 * 0000000140BC7B40: rol     rbx, cl
 * 0000000140BC7B43: add     r9, 8
 * 0000000140BC7B47: add     r8d, 0FFFFFFF8h
 * 0000000140BC7B4B: sub     rax, rdx
 * 0000000140BC7B4E: jnz     short loc_140BC7B3A
 * 0000000140BC7B50: xor     r15d, r15d
 * 0000000140BC7B53: test    r8d, r8d
 * 0000000140BC7B56: jz      short loc_140BC7B6D
 * 0000000140BC7B58: movzx   eax, byte ptr [r9]
 * 0000000140BC7B5C: mov     ecx, r10d
 * 0000000140BC7B5F: xor     rbx, rax
 * 0000000140BC7B62: add     r9, rdx
 * 0000000140BC7B65: rol     rbx, cl
 * 0000000140BC7B68: add     r8d, r12d
 * 0000000140BC7B6B: jnz     short loc_140BC7B58
 * 0000000140BC7B6D: mov     rax, rbx
 * 0000000140BC7B70: jmp     short loc_140BC7B74
 * 0000000140BC7B72: xor     ebx, eax
 * 0000000140BC7B74: shr     rax, 1Fh
 * 0000000140BC7B78: test    rax, rax
 * 0000000140BC7B7B: jnz     short loc_140BC7B72
 * 0000000140BC7B7D: btr     ebx, 1Fh
 * 0000000140BC7B81: mov     r12d, r15d
 * 0000000140BC7B84: cmp     ebx, [r13+14h]
 * 0000000140BC7B88: jz      loc_140BC7C59
 * 0000000140BC7B8E: cmp     [r13+0], r15d
 * 0000000140BC7B92: jnz     short loc_140BC7B9C
 * 0000000140BC7B94: cmp     [r13+18h], r15d
 * 0000000140BC7B98: cmovnz  r12d, edx
 * 0000000140BC7B9C: mov     ecx, [r13+10h]
 * 0000000140BC7BA0: mov     rdx, [r13+8]
 * 0000000140BC7BA4: test    rcx, rcx
 * 0000000140BC7BA7: jz      loc_140BC7D3A
 * 0000000140BC7BAD: mov     eax, [rsi+9DCh]
 * 0000000140BC7BB3: mov     r8d, 40h ; '@'
 * 0000000140BC7BB9: test    r8b, al
 * 0000000140BC7BBC: jz      loc_140BC7D3A
 * 0000000140BC7BC2: mov     r15, cr8
 * 0000000140BC7BC6: lea     eax, [r8-3Eh]
 * 0000000140BC7BCA: mov     cr8, rax
 * 0000000140BC7BCE: mov     r14, rdx
 * 0000000140BC7BD1: lea     rax, [rcx-1]
 * 0000000140BC7BD5: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140BC7BDC: add     rax, rdx
 * 0000000140BC7BDF: or      rax, 0FFFh
 * 0000000140BC7BE5: mov     [rsp+9D0h+var_978], rax
 * 0000000140BC7BEA: lea     r13, [r14-1]
 * 0000000140BC7BEE: mov     rax, [rsi+468h]
 * 0000000140BC7BF5: xor     edx, edx
 * 0000000140BC7BF7: mov     rcx, r14
 * 0000000140BC7BFA: call    KeGuardDispatchICall
 * 0000000140BC7BFF: cmp     eax, 0C000022Dh
 * 0000000140BC7C04: jnz     short loc_140BC7C2F
 * 0000000140BC7C06: test    r12d, r12d
 * 0000000140BC7C09: jnz     loc_140BC7D2A
 * 0000000140BC7C0F: lea     eax, [r12+1]
 * 0000000140BC7C14: cmp     r15b, al
 * 0000000140BC7C17: ja      short loc_140BC7C37
 * 0000000140BC7C19: movzx   eax, r15b
 * 0000000140BC7C1D: mov     cr8, rax
 * 0000000140BC7C21: mov     al, [r14]
 * 0000000140BC7C24: lea     eax, [r12+2]
 * 0000000140BC7C29: mov     cr8, rax
 * 0000000140BC7C2D: jmp     short loc_140BC7BEE
 * 0000000140BC7C2F: test    eax, eax
 * 0000000140BC7C31: js      loc_140BC7D2A
 * 0000000140BC7C37: mov     eax, 1000h
 * 0000000140BC7C3C: add     r14, rax
 * 0000000140BC7C3F: add     r13, rax
 * 0000000140BC7C42: cmp     r13, [rsp+9D0h+var_978]
 * 0000000140BC7C47: jnz     short loc_140BC7BEE
 * 0000000140BC7C49: movzx   eax, r15b
 * 0000000140BC7C4D: mov     cr8, rax
 * 0000000140BC7C51: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BC7C56: xor     r15d, r15d
 * 0000000140BC7C59: mov     r12d, 1
 * 0000000140BC7C5F: mov     rax, [r13+8]
 * 0000000140BC7C63: mov     r9d, r15d
 * 0000000140BC7C66: add     rax, 0FFFFFFFFFFFFFF90h
 * 0000000140BC7C6A: mov     [rbp+8D0h+var_8A0], rax
 * 0000000140BC7C6E: mov     r14, [rax+50h]
 * 0000000140BC7C72: test    r14, r14
 * 0000000140BC7C75: jz      short loc_140BC7C7A
 * 0000000140BC7C77: mov     r9d, [r14]
 * 0000000140BC7C7A: add     [rsi+848h], r9d
 * 0000000140BC7C81: mov     r10, r14
 * 0000000140BC7C84: mov     r11d, [rsi+834h]
 * 0000000140BC7C8B: mov     rax, r14
 * 0000000140BC7C8E: mov     r15, [rsi+838h]
 * 0000000140BC7C95: mov     ecx, r9d
 * 0000000140BC7C98: add     rcx, r14
 * 0000000140BC7C9B: cmp     r14, rcx
 * 0000000140BC7C9E: jnb     short loc_140BC7CB0
 * 0000000140BC7CA0: mov     edx, 40h ; '@'
 * 0000000140BC7CA5: prefetchnta byte ptr [rax]
 * 0000000140BC7CA8: add     rax, rdx
 * 0000000140BC7CAB: cmp     rax, rcx
 * 0000000140BC7CAE: jb      short loc_140BC7CA5
 * 0000000140BC7CB0: mov     ebx, r9d
 * 0000000140BC7CB3: mov     r8, r15
 * 0000000140BC7CB6: shr     ebx, 7
 * 0000000140BC7CB9: test    ebx, ebx
 * 0000000140BC7CBB: jz      loc_140BC7E85
 * 0000000140BC7CC1: mov     rsi, 7010008004002001h
 * 0000000140BC7CCB: mov     eax, 8
 * 0000000140BC7CD0: xor     r8, [r10]
 * 0000000140BC7CD3: mov     ecx, r11d
 * 0000000140BC7CD6: rol     r8, cl
 * 0000000140BC7CD9: xor     r8, [r10+8]
 * 0000000140BC7CDD: add     r10, 10h
 * 0000000140BC7CE1: rol     r8, cl
 * 0000000140BC7CE4: sub     rax, r12
 * 0000000140BC7CE7: jnz     short loc_140BC7CD0
 * 0000000140BC7CE9: mov     rcx, r10
 * 0000000140BC7CEC: sub     rcx, r14
 * 0000000140BC7CEF: xor     rcx, r15
 * 0000000140BC7CF2: mov     rax, rcx
 * 0000000140BC7CF5: rol     rax, 11h
 * 0000000140BC7CF9: xor     rcx, rax
 * 0000000140BC7CFC: mov     rax, rsi
 * 0000000140BC7CFF: mul     rcx
 * 0000000140BC7D02: xor     r11d, edx
 * 0000000140BC7D05: mov     [rbp+8D0h+var_5D0], rdx
 * 0000000140BC7D0C: xor     r11d, eax
 * 0000000140BC7D0F: mov     edx, 0FFFFFFFFh
 * 0000000140BC7D14: and     r11d, 3Fh
 * 0000000140BC7D18: cmovz   r11d, r12d
 * 0000000140BC7D1C: add     ebx, edx
 * 0000000140BC7D1E: jnz     short loc_140BC7CCB
 * 0000000140BC7D20: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC7D25: jmp     loc_140BC7E8A
 * 0000000140BC7D2A: movzx   eax, r15b
 * 0000000140BC7D2E: mov     cr8, rax
 * 0000000140BC7D32: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BC7D37: xor     r15d, r15d
 * 0000000140BC7D3A: mov     eax, [r13+14h]
 * 0000000140BC7D3E: cmp     [rsi+918h], r15d
 * 0000000140BC7D45: jnz     short loc_140BC7D57
 * 0000000140BC7D47: mov     ecx, ebx
 * 0000000140BC7D49: xor     rcx, rax
 * 0000000140BC7D4C: mov     rax, [rsi+588h]
 * 0000000140BC7D53: mov     [rax+18h], rcx
 * 0000000140BC7D57: mov     r12d, 1
 * 0000000140BC7D5D: mov     rcx, [r13+8]
 * 0000000140BC7D61: cmp     [rsi+918h], r15d
 * 0000000140BC7D68: jnz     loc_140BC7C5F
 * 0000000140BC7D6E: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC7D78: add     rax, rsi
 * 0000000140BC7D7B: mov     [rsi+920h], rax
 * 0000000140BC7D82: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC7D8C: add     rax, r13
 * 0000000140BC7D8F: mov     [rsi+928h], rax
 * 0000000140BC7D96: movsxd  rax, dword ptr [r13+0]
 * 0000000140BC7D9A: mov     [rsi+930h], rax
 * 0000000140BC7DA1: mov     [rsi+938h], rcx
 * 0000000140BC7DA8: mov     [rsi+918h], r12d
 * 0000000140BC7DAF: mov     ecx, [rsi+9D8h]
 * 0000000140BC7DB5: bt      ecx, 1Dh
 * 0000000140BC7DB9: jb      loc_140BC7C5F
 * 0000000140BC7DBF: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC7DC9: jz      loc_140BC7C5F
 * 0000000140BC7DCF: test    r12b, cl
 * 0000000140BC7DD2: jz      loc_140BC7C5F
 * 0000000140BC7DD8: mov     ecx, [rsi+0A74h]
 * 0000000140BC7DDE: mov     eax, [rsi+804h]
 * 0000000140BC7DE4: mov     r10, [rsi+838h]
 * 0000000140BC7DEB: sub     eax, ecx
 * 0000000140BC7DED: mov     r8, [rsi+0A78h]
 * 0000000140BC7DF4: lea     rdx, [rcx+rsi]
 * 0000000140BC7DF8: mov     ecx, eax
 * 0000000140BC7DFA: shr     rcx, 3
 * 0000000140BC7DFE: lea     r9, [rdx+rcx*8]
 * 0000000140BC7E02: jmp     short loc_140BC7E25
 * 0000000140BC7E04: xor     [rdx], r8
 * 0000000140BC7E07: mov     rax, [rdx]
 * 0000000140BC7E0A: movzx   ecx, r8b
 * 0000000140BC7E0E: xor     rax, r10
 * 0000000140BC7E11: and     ecx, 3Fh
 * 0000000140BC7E14: ror     r8, cl
 * 0000000140BC7E17: add     r8, rax
 * 0000000140BC7E1A: xor     r8, 0EFAh
 * 0000000140BC7E21: add     rdx, 8
 * 0000000140BC7E25: cmp     rdx, r9
 * 0000000140BC7E28: jnz     short loc_140BC7E04
 * 0000000140BC7E2A: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC7E32: cmp     r8, [rsi+0A80h]
 * 0000000140BC7E39: jz      loc_140BC7C5F
 * 0000000140BC7E3F: mov     ecx, [rsi+804h]
 * 0000000140BC7E45: mov     rax, [rsi+588h]
 * 0000000140BC7E4C: mov     [rax], rsi
 * 0000000140BC7E4F: mov     [rax+10h], ecx
 * 0000000140BC7E52: mov     rcx, [rsi+0A80h]
 * 0000000140BC7E59: cmp     [rsi+918h], r15d
 * 0000000140BC7E60: jnz     short loc_140BC7E70
 * 0000000140BC7E62: mov     rax, [rsi+588h]
 * 0000000140BC7E69: xor     rcx, r8
 * 0000000140BC7E6C: mov     [rax+18h], rcx
 * 0000000140BC7E70: xor     edx, edx
 * 0000000140BC7E72: mov     r9d, 100h
 * 0000000140BC7E78: mov     rcx, rsi
 * 0000000140BC7E7B: call    sub_140BDA384
 * 0000000140BC7E80: jmp     loc_140BC7C5F
 * 0000000140BC7E85: mov     edx, 0FFFFFFFFh
 * 0000000140BC7E8A: and     r9d, 7Fh
 * 0000000140BC7E8E: mov     ebx, 1
 * 0000000140BC7E93: cmp     r9d, 8
 * 0000000140BC7E97: jb      short loc_140BC7EB6
 * 0000000140BC7E99: mov     eax, r9d
 * 0000000140BC7E9C: shr     rax, 3
 * 0000000140BC7EA0: xor     r8, [r10]
 * 0000000140BC7EA3: mov     ecx, r11d
 * 0000000140BC7EA6: rol     r8, cl
 * 0000000140BC7EA9: add     r10, 8
 * 0000000140BC7EAD: add     r9d, 0FFFFFFF8h
 * 0000000140BC7EB1: sub     rax, rbx
 * 0000000140BC7EB4: jnz     short loc_140BC7EA0
 * 0000000140BC7EB6: xor     r15d, r15d
 * 0000000140BC7EB9: test    r9d, r9d
 * 0000000140BC7EBC: jz      short loc_140BC7ED3
 * 0000000140BC7EBE: movzx   eax, byte ptr [r10]
 * 0000000140BC7EC2: mov     ecx, r11d
 * 0000000140BC7EC5: xor     r8, rax
 * 0000000140BC7EC8: add     r10, rbx
 * 0000000140BC7ECB: rol     r8, cl
 * 0000000140BC7ECE: add     r9d, edx
 * 0000000140BC7ED1: jnz     short loc_140BC7EBE
 * 0000000140BC7ED3: mov     rax, r8
 * 0000000140BC7ED6: jmp     short loc_140BC7EDB
 * 0000000140BC7ED8: xor     r8d, eax
 * 0000000140BC7EDB: shr     rax, 1Fh
 * 0000000140BC7EDF: test    rax, rax
 * 0000000140BC7EE2: jnz     short loc_140BC7ED8
 * 0000000140BC7EE4: mov     eax, [r13+2Ch]
 * 0000000140BC7EE8: btr     r8d, 1Fh
 * 0000000140BC7EED: cmp     r8d, eax
 * 0000000140BC7EF0: jz      loc_140BC5B5D
 * 0000000140BC7EF6: cmp     [rsi+918h], r15d
 * 0000000140BC7EFD: jnz     loc_140BC5B5D
 * 0000000140BC7F03: mov     ecx, r8d
 * 0000000140BC7F06: xor     rcx, rax
 * 0000000140BC7F09: mov     rax, [rsi+588h]
 * 0000000140BC7F10: mov     [rax+18h], rcx
 * 0000000140BC7F14: cmp     [rsi+918h], r15d
 * 0000000140BC7F1B: jnz     loc_140BC5B5D
 * 0000000140BC7F21: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC7F2B: add     rax, rsi
 * 0000000140BC7F2E: mov     [rsi+920h], rax
 * 0000000140BC7F35: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC7F3F: add     rax, r13
 * 0000000140BC7F42: mov     [rsi+928h], rax
 * 0000000140BC7F49: movsxd  rax, dword ptr [r13+0]
 * 0000000140BC7F4D: mov     [rsi+930h], rax
 * 0000000140BC7F54: mov     [rsi+938h], r14
 * 0000000140BC7F5B: mov     [rsi+918h], ebx
 * 0000000140BC7F61: mov     ecx, [rsi+9D8h]
 * 0000000140BC7F67: bt      ecx, 1Dh
 * 0000000140BC7F6B: jb      loc_140BC5B5D
 * 0000000140BC7F71: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC7F7B: jz      loc_140BC5B5D
 * 0000000140BC7F81: test    bl, cl
 * 0000000140BC7F83: jz      loc_140BC5B5D
 * 0000000140BC7F89: mov     ecx, [rsi+0A74h]
 * 0000000140BC7F8F: mov     eax, [rsi+804h]
 * 0000000140BC7F95: mov     r10, [rsi+838h]
 * 0000000140BC7F9C: sub     eax, ecx
 * 0000000140BC7F9E: mov     r8, [rsi+0A78h]
 * 0000000140BC7FA5: lea     rdx, [rcx+rsi]
 * 0000000140BC7FA9: mov     ecx, eax
 * 0000000140BC7FAB: shr     rcx, 3
 * 0000000140BC7FAF: lea     r9, [rdx+rcx*8]
 * 0000000140BC7FB3: jmp     short loc_140BC7FD6
 * 0000000140BC7FB5: xor     [rdx], r8
 * 0000000140BC7FB8: mov     rax, [rdx]
 * 0000000140BC7FBB: movzx   ecx, r8b
 * 0000000140BC7FBF: xor     rax, r10
 * 0000000140BC7FC2: and     ecx, 3Fh
 * 0000000140BC7FC5: ror     r8, cl
 * 0000000140BC7FC8: add     r8, rax
 * 0000000140BC7FCB: xor     r8, 0EFAh
 * 0000000140BC7FD2: add     rdx, 8
 * 0000000140BC7FD6: cmp     rdx, r9
 * 0000000140BC7FD9: jnz     short loc_140BC7FB5
 * 0000000140BC7FDB: jmp     loc_140BC6A63
 * 0000000140BC7FE0: mov     eax, [rsi+850h]
 * 0000000140BC7FE6: test    bl, al
 * 0000000140BC7FE8: jz      loc_140BC4FAF
 * 0000000140BC7FEE: mov     r14, [rsi+5A0h]
 * 0000000140BC7FF5: mov     r13, [rsi+5A8h]
 * 0000000140BC7FFC: mov     rax, [rsi+188h]
 * 0000000140BC8003: mov     rbx, [rsi+540h]
 * 0000000140BC800A: mov     [rbp+8D0h+var_940], r14
 * 0000000140BC800E: mov     [rsp+9D0h+var_978], r13
 * 0000000140BC8013: mov     dword ptr [rbp+8D0h+arg_8], r15d
 * 0000000140BC801A: call    KeGuardDispatchICall
 * 0000000140BC801F: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BC8029: jnz     short loc_140BC8044
 * 0000000140BC802B: mov     ecx, [rsi+978h]
 * 0000000140BC8031: cmp     ecx, 7
 * 0000000140BC8034: jnb     short loc_140BC8044
 * 0000000140BC8036: mov     r12d, 1
 * 0000000140BC803C: mov     r15d, r12d
 * 0000000140BC803F: shl     r15b, cl
 * 0000000140BC8042: jmp     short loc_140BC8062
 * 0000000140BC8044: mov     rax, [rsi+138h]
 * 0000000140BC804B: xor     edx, edx
 * 0000000140BC804D: mov     rcx, [rsi+0A48h]
 * 0000000140BC8054: call    KeGuardDispatchICall
 * 0000000140BC8059: mov     r15b, 80h
 * 0000000140BC805C: mov     r12d, 1
 * 0000000140BC8062: mov     rax, [rsi+148h]
 * 0000000140BC8069: xor     edx, edx
 * 0000000140BC806B: mov     rcx, rbx
 * 0000000140BC806E: mov     [rsp+9D0h+var_958], r15d
 * 0000000140BC8073: call    KeGuardDispatchICall
 * 0000000140BC8078: mov     rax, [rsi+148h]
 * 0000000140BC807F: xor     edx, edx
 * 0000000140BC8081: mov     rcx, r14
 * 0000000140BC8084: call    KeGuardDispatchICall
 * 0000000140BC8089: mov     r9, [rsi+598h]
 * 0000000140BC8090: xor     r11d, r11d
 * 0000000140BC8093: mov     r10d, r11d
 * 0000000140BC8096: mov     [rsp+9D0h+var_968], r11
 * 0000000140BC809B: mov     r8, [r9]
 * 0000000140BC809E: cmp     r8, r9
 * 0000000140BC80A1: jz      short loc_140BC80EF
 * 0000000140BC80A3: lea     rdx, [r8-18h]
 * 0000000140BC80A7: cmp     rdx, r13
 * 0000000140BC80AA: jz      short loc_140BC80E2
 * 0000000140BC80AC: mov     rax, [rsi+748h]
 * 0000000140BC80B3: mov     rdx, [rdx+rax]
 * 0000000140BC80B7: mov     rax, [rsi+6D0h]
 * 0000000140BC80BE: mov     ecx, [rdx+rax]
 * 0000000140BC80C1: test    [rsi+6E8h], ecx
 * 0000000140BC80C7: jnz     short loc_140BC80D6
 * 0000000140BC80C9: test    r10, r10
 * 0000000140BC80CC: mov     rax, rdx
 * 0000000140BC80CF: cmovnz  rax, r12
 * 0000000140BC80D3: mov     r10, rax
 * 0000000140BC80D6: mov     rax, [rsi+6C8h]
 * 0000000140BC80DD: lock or [rdx+rax], r15b
 * 0000000140BC80E2: mov     r8, [r8]
 * 0000000140BC80E5: cmp     r8, r9
 * 0000000140BC80E8: jnz     short loc_140BC80A3
 * 0000000140BC80EA: mov     [rsp+9D0h+var_968], r10
 * 0000000140BC80EF: mov     r12, [rsi+518h]
 * 0000000140BC80F6: mov     r14, [r12]
 * 0000000140BC80FA: cmp     r14, r12
 * 0000000140BC80FD: jz      loc_140BC82BD
 * 0000000140BC8103: mov     rdi, [rsp+9D0h+var_978]
 * 0000000140BC8108: mov     r13b, r15b
 * 0000000140BC810B: movzx   edx, r15b
 * 0000000140BC810F: not     r13b
 * 0000000140BC8112: mov     r15d, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BC8119: mov     dword ptr [rsp+9D0h+var_960], edx
 * 0000000140BC811D: mov     rax, [rsi+6C8h]
 * 0000000140BC8124: mov     rbx, r14
 * 0000000140BC8127: sub     rbx, [rsi+6E0h]
 * 0000000140BC812E: movsx   ecx, byte ptr [rbx+rax]
 * 0000000140BC8132: test    edx, ecx
 * 0000000140BC8134: jnz     loc_140BC8283
 * 0000000140BC813A: mov     rax, [rsi+6D8h]
 * 0000000140BC8141: mov     rcx, [rbx+rax]
 * 0000000140BC8145: test    rcx, rcx
 * 0000000140BC8148: jz      loc_140BC8283
 * 0000000140BC814E: cmp     rcx, rdi
 * 0000000140BC8151: jz      loc_140BC8283
 * 0000000140BC8157: cmp     [rsi+918h], r11d
 * 0000000140BC815E: jnz     loc_140BC8283
 * 0000000140BC8164: mov     rcx, [rsp+9D0h+var_980]
 * 0000000140BC8169: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC8173: add     rax, rsi
 * 0000000140BC8176: mov     r8d, 1
 * 0000000140BC817C: mov     [rsi+920h], rax
 * 0000000140BC8183: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC818D: add     rax, rcx
 * 0000000140BC8190: mov     [rsi+928h], rax
 * 0000000140BC8197: movsxd  rax, dword ptr [rcx]
 * 0000000140BC819A: mov     [rsi+930h], rax
 * 0000000140BC81A1: mov     [rsi+938h], rbx
 * 0000000140BC81A8: mov     [rsi+918h], r8d
 * 0000000140BC81AF: mov     ecx, [rsi+9D8h]
 * 0000000140BC81B5: bt      ecx, 1Dh
 * 0000000140BC81B9: jb      loc_140BC8283
 * 0000000140BC81BF: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC81C9: jz      loc_140BC8283
 * 0000000140BC81CF: test    r8b, cl
 * 0000000140BC81D2: jz      loc_140BC8283
 * 0000000140BC81D8: mov     ecx, [rsi+0A74h]
 * 0000000140BC81DE: mov     eax, [rsi+804h]
 * 0000000140BC81E4: mov     r10, [rsi+838h]
 * 0000000140BC81EB: sub     eax, ecx
 * 0000000140BC81ED: mov     r8, [rsi+0A78h]
 * 0000000140BC81F4: lea     rdx, [rcx+rsi]
 * 0000000140BC81F8: mov     ecx, eax
 * 0000000140BC81FA: shr     rcx, 3
 * 0000000140BC81FE: lea     r9, [rdx+rcx*8]
 * 0000000140BC8202: jmp     short loc_140BC8225
 * 0000000140BC8204: xor     [rdx], r8
 * 0000000140BC8207: mov     rax, [rdx]
 * 0000000140BC820A: movzx   ecx, r8b
 * 0000000140BC820E: xor     rax, r10
 * 0000000140BC8211: and     ecx, 3Fh
 * 0000000140BC8214: ror     r8, cl
 * 0000000140BC8217: add     r8, rax
 * 0000000140BC821A: xor     r8, 0EFAh
 * 0000000140BC8221: add     rdx, 8
 * 0000000140BC8225: cmp     rdx, r9
 * 0000000140BC8228: jnz     short loc_140BC8204
 * 0000000140BC822A: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC8232: cmp     r8, [rsi+0A80h]
 * 0000000140BC8239: jz      short loc_140BC827F
 * 0000000140BC823B: mov     ecx, [rsi+804h]
 * 0000000140BC8241: mov     rax, [rsi+588h]
 * 0000000140BC8248: mov     [rax], rsi
 * 0000000140BC824B: mov     [rax+10h], ecx
 * 0000000140BC824E: mov     rcx, [rsi+0A80h]
 * 0000000140BC8255: cmp     [rsi+918h], r11d
 * 0000000140BC825C: jnz     short loc_140BC826C
 * 0000000140BC825E: mov     rax, [rsi+588h]
 * 0000000140BC8265: xor     rcx, r8
 * 0000000140BC8268: mov     [rax+18h], rcx
 * 0000000140BC826C: xor     edx, edx
 * 0000000140BC826E: mov     r9d, 100h
 * 0000000140BC8274: mov     rcx, rsi
 * 0000000140BC8277: call    sub_140BDA384
 * 0000000140BC827C: xor     r11d, r11d
 * 0000000140BC827F: mov     edx, dword ptr [rsp+9D0h+var_960]
 * 0000000140BC8283: mov     rax, [rsi+6C8h]
 * 0000000140BC828A: lock and [rbx+rax], r13b
 * 0000000140BC828F: mov     r14, [r14]
 * 0000000140BC8292: mov     ebx, 1
 * 0000000140BC8297: add     r15d, ebx
 * 0000000140BC829A: cmp     r14, r12
 * 0000000140BC829D: jnz     loc_140BC811D
 * 0000000140BC82A3: mov     r13, [rsp+9D0h+var_978]
 * 0000000140BC82A8: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC82AF: mov     dword ptr [rbp+8D0h+arg_8], r15d
 * 0000000140BC82B6: mov     r15d, [rsp+9D0h+var_958]
 * 0000000140BC82BB: jmp     short loc_140BC82C2
 * 0000000140BC82BD: mov     ebx, 1
 * 0000000140BC82C2: mov     rdx, [rsp+9D0h+var_968]
 * 0000000140BC82C7: test    rdx, rdx
 * 0000000140BC82CA: jz      short loc_140BC831C
 * 0000000140BC82CC: cmp     rdx, rbx
 * 0000000140BC82CF: jz      short loc_140BC82E3
 * 0000000140BC82D1: mov     rax, [rsi+6C8h]
 * 0000000140BC82D8: mov     cl, r15b
 * 0000000140BC82DB: not     cl
 * 0000000140BC82DD: lock and [rdx+rax], cl
 * 0000000140BC82E1: jmp     short loc_140BC831C
 * 0000000140BC82E3: mov     r10, [rsi+598h]
 * 0000000140BC82EA: mov     r9, [r10]
 * 0000000140BC82ED: jmp     short loc_140BC8317
 * 0000000140BC82EF: lea     r8, [r9-18h]
 * 0000000140BC82F3: cmp     r8, r13
 * 0000000140BC82F6: jz      short loc_140BC8314
 * 0000000140BC82F8: mov     rax, [rsi+748h]
 * 0000000140BC82FF: mov     dl, r15b
 * 0000000140BC8302: not     dl
 * 0000000140BC8304: mov     r8, [r8+rax]
 * 0000000140BC8308: mov     rax, [rsi+6C8h]
 * 0000000140BC830F: lock and [r8+rax], dl
 * 0000000140BC8314: mov     r9, [r9]
 * 0000000140BC8317: cmp     r9, r10
 * 0000000140BC831A: jnz     short loc_140BC82EF
 * 0000000140BC831C: mov     rax, [rsi+150h]
 * 0000000140BC8323: xor     edx, edx
 * 0000000140BC8325: mov     rcx, [rbp+8D0h+var_940]
 * 0000000140BC8329: call    KeGuardDispatchICall
 * 0000000140BC832E: cmp     r15b, 80h
 * 0000000140BC8332: jnz     short loc_140BC8349
 * 0000000140BC8334: mov     rax, [rsi+140h]
 * 0000000140BC833B: xor     edx, edx
 * 0000000140BC833D: mov     rcx, [rsi+0A48h]
 * 0000000140BC8344: call    KeGuardDispatchICall
 * 0000000140BC8349: mov     rcx, [rsi+540h]
 * 0000000140BC8350: xor     edx, edx
 * 0000000140BC8352: mov     rax, [rsi+150h]
 * 0000000140BC8359: call    KeGuardDispatchICall
 * 0000000140BC835E: mov     rax, [rsi+190h]
 * 0000000140BC8365: call    KeGuardDispatchICall
 * 0000000140BC836A: mov     eax, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BC8370: shl     eax, 8
 * 0000000140BC8373: add     [rsi+848h], eax
 * 0000000140BC8379: jmp     loc_140BC73BC
 * 0000000140BC837E: mov     eax, [rsi+850h]
 * 0000000140BC8384: test    bl, al
 * 0000000140BC8386: jnz     loc_140BC4FAF
 * 0000000140BC838C: mov     rax, [rsi+5A8h]
 * 0000000140BC8393: mov     r13d, r15d
 * 0000000140BC8396: mov     r14, [rsi+5A0h]
 * 0000000140BC839D: mov     rbx, [rsi+540h]
 * 0000000140BC83A4: mov     [rsp+9D0h+var_978], rax
 * 0000000140BC83A9: mov     rax, [rsi+188h]
 * 0000000140BC83B0: mov     dword ptr [rbp+8D0h+arg_8], r15d
 * 0000000140BC83B7: mov     [rsp+9D0h+var_968], r14
 * 0000000140BC83BC: call    KeGuardDispatchICall
 * 0000000140BC83C1: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BC83CB: jnz     short loc_140BC83E6
 * 0000000140BC83CD: mov     ecx, [rsi+978h]
 * 0000000140BC83D3: cmp     ecx, 7
 * 0000000140BC83D6: jnb     short loc_140BC83E6
 * 0000000140BC83D8: mov     r12d, 1
 * 0000000140BC83DE: mov     r15d, r12d
 * 0000000140BC83E1: shl     r15b, cl
 * 0000000140BC83E4: jmp     short loc_140BC8404
 * 0000000140BC83E6: mov     rax, [rsi+138h]
 * 0000000140BC83ED: xor     edx, edx
 * 0000000140BC83EF: mov     rcx, [rsi+0A48h]
 * 0000000140BC83F6: call    KeGuardDispatchICall
 * 0000000140BC83FB: mov     r15b, 80h
 * 0000000140BC83FE: mov     r12d, 1
 * 0000000140BC8404: mov     rax, [rsi+148h]
 * 0000000140BC840B: xor     edx, edx
 * 0000000140BC840D: mov     rcx, rbx
 * 0000000140BC8410: call    KeGuardDispatchICall
 * 0000000140BC8415: mov     r8, [rsi+518h]
 * 0000000140BC841C: mov     rdx, [r8]
 * 0000000140BC841F: cmp     rdx, r8
 * 0000000140BC8422: jz      short loc_140BC844C
 * 0000000140BC8424: mov     rax, [rsi+6C8h]
 * 0000000140BC842B: mov     rcx, rdx
 * 0000000140BC842E: sub     rcx, [rsi+6E0h]
 * 0000000140BC8435: lock or [rcx+rax], r15b
 * 0000000140BC843A: mov     rdx, [rdx]
 * 0000000140BC843D: add     r13d, r12d
 * 0000000140BC8440: cmp     rdx, r8
 * 0000000140BC8443: jnz     short loc_140BC8424
 * 0000000140BC8445: mov     dword ptr [rbp+8D0h+arg_8], r13d
 * 0000000140BC844C: mov     rax, [rsi+148h]
 * 0000000140BC8453: xor     edx, edx
 * 0000000140BC8455: mov     rcx, r14
 * 0000000140BC8458: call    KeGuardDispatchICall
 * 0000000140BC845D: mov     r12, [rsi+598h]
 * 0000000140BC8464: mov     r14, [r12]
 * 0000000140BC8468: cmp     r14, r12
 * 0000000140BC846B: jz      loc_140BC860F
 * 0000000140BC8471: mov     rax, [rsp+9D0h+var_978]
 * 0000000140BC8476: xor     r13d, r13d
 * 0000000140BC8479: mov     rdi, [rsp+9D0h+var_980]
 * 0000000140BC847E: mov     rcx, r14
 * 0000000140BC8481: sub     rcx, [rsi+750h]
 * 0000000140BC8488: cmp     rcx, rax
 * 0000000140BC848B: jz      loc_140BC85F5
 * 0000000140BC8491: mov     rax, [rsi+748h]
 * 0000000140BC8498: mov     rbx, [rcx+rax]
 * 0000000140BC849C: mov     rax, [rsi+6C8h]
 * 0000000140BC84A3: test    [rbx+rax], r15b
 * 0000000140BC84A7: jnz     loc_140BC85E0
 * 0000000140BC84AD: mov     rax, [rsi+6D0h]
 * 0000000140BC84B4: mov     ecx, [rbx+rax]
 * 0000000140BC84B7: test    [rsi+6E8h], ecx
 * 0000000140BC84BD: jz      loc_140BC85E0
 * 0000000140BC84C3: cmp     [rsi+918h], r13d
 * 0000000140BC84CA: jnz     loc_140BC85E0
 * 0000000140BC84D0: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC84DA: mov     edx, 1
 * 0000000140BC84DF: add     rax, rsi
 * 0000000140BC84E2: mov     [rsi+920h], rax
 * 0000000140BC84E9: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC84F3: add     rax, rdi
 * 0000000140BC84F6: mov     [rsi+928h], rax
 * 0000000140BC84FD: movsxd  rax, dword ptr [rdi]
 * 0000000140BC8500: mov     [rsi+930h], rax
 * 0000000140BC8507: mov     [rsi+938h], rbx
 * 0000000140BC850E: mov     [rsi+918h], edx
 * 0000000140BC8514: mov     ecx, [rsi+9D8h]
 * 0000000140BC851A: bt      ecx, 1Dh
 * 0000000140BC851E: jb      loc_140BC85E0
 * 0000000140BC8524: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC852E: jz      loc_140BC85E0
 * 0000000140BC8534: test    dl, cl
 * 0000000140BC8536: jz      loc_140BC85E0
 * 0000000140BC853C: mov     ecx, [rsi+0A74h]
 * 0000000140BC8542: mov     eax, [rsi+804h]
 * 0000000140BC8548: mov     r10, [rsi+838h]
 * 0000000140BC854F: sub     eax, ecx
 * 0000000140BC8551: mov     r8, [rsi+0A78h]
 * 0000000140BC8558: lea     rdx, [rcx+rsi]
 * 0000000140BC855C: mov     ecx, eax
 * 0000000140BC855E: shr     rcx, 3
 * 0000000140BC8562: lea     r9, [rdx+rcx*8]
 * 0000000140BC8566: jmp     short loc_140BC8589
 * 0000000140BC8568: xor     [rdx], r8
 * 0000000140BC856B: mov     rax, [rdx]
 * 0000000140BC856E: movzx   ecx, r8b
 * 0000000140BC8572: xor     rax, r10
 * 0000000140BC8575: and     ecx, 3Fh
 * 0000000140BC8578: ror     r8, cl
 * 0000000140BC857B: add     r8, rax
 * 0000000140BC857E: xor     r8, 0EFAh
 * 0000000140BC8585: add     rdx, 8
 * 0000000140BC8589: cmp     rdx, r9
 * 0000000140BC858C: jnz     short loc_140BC8568
 * 0000000140BC858E: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC8596: cmp     r8, [rsi+0A80h]
 * 0000000140BC859D: jz      short loc_140BC85E0
 * 0000000140BC859F: mov     ecx, [rsi+804h]
 * 0000000140BC85A5: mov     rax, [rsi+588h]
 * 0000000140BC85AC: mov     [rax], rsi
 * 0000000140BC85AF: mov     [rax+10h], ecx
 * 0000000140BC85B2: mov     rcx, [rsi+0A80h]
 * 0000000140BC85B9: cmp     [rsi+918h], r13d
 * 0000000140BC85C0: jnz     short loc_140BC85D0
 * 0000000140BC85C2: mov     rax, [rsi+588h]
 * 0000000140BC85C9: xor     rcx, r8
 * 0000000140BC85CC: mov     [rax+18h], rcx
 * 0000000140BC85D0: xor     edx, edx
 * 0000000140BC85D2: mov     r9d, 100h
 * 0000000140BC85D8: mov     rcx, rsi
 * 0000000140BC85DB: call    sub_140BDA384
 * 0000000140BC85E0: mov     rax, [rsi+6C8h]
 * 0000000140BC85E7: mov     dl, r15b
 * 0000000140BC85EA: not     dl
 * 0000000140BC85EC: lock and [rbx+rax], dl
 * 0000000140BC85F0: mov     rax, [rsp+9D0h+var_978]
 * 0000000140BC85F5: mov     r14, [r14]
 * 0000000140BC85F8: cmp     r14, r12
 * 0000000140BC85FB: jnz     loc_140BC847E
 * 0000000140BC8601: mov     r13d, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BC8608: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC860F: mov     rax, [rsi+150h]
 * 0000000140BC8616: xor     edx, edx
 * 0000000140BC8618: mov     rcx, [rsp+9D0h+var_968]
 * 0000000140BC861D: call    KeGuardDispatchICall
 * 0000000140BC8622: cmp     r15b, 80h
 * 0000000140BC8626: jnz     short loc_140BC863D
 * 0000000140BC8628: mov     rax, [rsi+140h]
 * 0000000140BC862F: xor     edx, edx
 * 0000000140BC8631: mov     rcx, [rsi+0A48h]
 * 0000000140BC8638: call    KeGuardDispatchICall
 * 0000000140BC863D: mov     rcx, [rsi+540h]
 * 0000000140BC8644: xor     edx, edx
 * 0000000140BC8646: mov     rax, [rsi+150h]
 * 0000000140BC864D: call    KeGuardDispatchICall
 * 0000000140BC8652: mov     rax, [rsi+190h]
 * 0000000140BC8659: call    KeGuardDispatchICall
 * 0000000140BC865E: shl     r13d, 8
 * 0000000140BC8662: add     [rsi+848h], r13d
 * 0000000140BC8669: jmp     loc_140BC4F9B
 * 0000000140BC866E: mov     rax, [rsi+378h]
 * 0000000140BC8675: mov     r12, [rsi+528h]
 * 0000000140BC867C: mov     dword ptr [rbp+8D0h+arg_8], r15d
 * 0000000140BC8683: call    KeGuardDispatchICall
 * 0000000140BC8688: mov     [rbp+8D0h+var_940], rax
 * 0000000140BC868C: cli
 * 0000000140BC868D: mov     rcx, gs:20h
 * 0000000140BC8696: mov     rax, [rsi+658h]
 * 0000000140BC869D: mov     rcx, [rcx+rax]
 * 0000000140BC86A1: sti
 * 0000000140BC86A2: mov     rax, [rsi+178h]
 * 0000000140BC86A9: call    KeGuardDispatchICall
 * 0000000140BC86AE: mov     rcx, [rsi+530h]
 * 0000000140BC86B5: mov     dl, bl
 * 0000000140BC86B7: mov     rax, [rsi+0F8h]
 * 0000000140BC86BE: call    KeGuardDispatchICall
 * 0000000140BC86C3: mov     rax, [rsi+620h]
 * 0000000140BC86CA: mov     dword ptr [rsp+9D0h+var_960], r15d
 * 0000000140BC86CF: mov     rcx, [rax]
 * 0000000140BC86D2: mov     r13d, [rcx]
 * 0000000140BC86D5: lea     rdx, [rcx+10h]
 * 0000000140BC86D9: mov     [rsp+9D0h+var_978], rdx
 * 0000000140BC86DE: lea     rax, ds:0[r13*2]
 * 0000000140BC86E6: add     rax, r13
 * 0000000140BC86E9: lea     rax, [rdx+rax*8]
 * 0000000140BC86ED: mov     [rsp+9D0h+var_968], rax
 * 0000000140BC86F2: cmp     [rcx+0Ch], r15b
 * 0000000140BC86F6: jz      short loc_140BC870C
 * 0000000140BC86F8: mov     rax, [r12]
 * 0000000140BC86FC: mov     r13d, r15d
 * 0000000140BC86FF: jmp     short loc_140BC8707
 * 0000000140BC8701: mov     rax, [rax]
 * 0000000140BC8704: add     r13d, ebx
 * 0000000140BC8707: cmp     rax, r12
 * 0000000140BC870A: jnz     short loc_140BC8701
 * 0000000140BC870C: mov     r8d, [rsi+830h]
 * 0000000140BC8713: lea     r15d, ds:0[r13*8]
 * 0000000140BC871B: rdtsc
 * 0000000140BC871D: shl     rdx, 20h
 * 0000000140BC8721: mov     r9, 7010008004002001h
 * 0000000140BC872B: or      rax, rdx
 * 0000000140BC872E: mov     rcx, rax
 * 0000000140BC8731: ror     rax, 3
 * 0000000140BC8735: xor     rcx, rax
 * 0000000140BC8738: mov     rax, r9
 * 0000000140BC873B: mul     rcx
 * 0000000140BC873E: mov     rbx, rax
 * 0000000140BC8741: mov     [rbp+8D0h+var_5C8], rdx
 * 0000000140BC8748: xor     ebx, edx
 * 0000000140BC874A: and     ebx, 7FFh
 * 0000000140BC8750: rdtsc
 * 0000000140BC8752: shl     rdx, 20h
 * 0000000140BC8756: or      rax, rdx
 * 0000000140BC8759: mov     rcx, rax
 * 0000000140BC875C: ror     rax, 3
 * 0000000140BC8760: xor     rcx, rax
 * 0000000140BC8763: mov     rax, r9
 * 0000000140BC8766: mul     rcx
 * 0000000140BC8769: lea     r9d, [rbx+1]
 * 0000000140BC876D: mov     ecx, 42h ; 'B'
 * 0000000140BC8772: xor     rax, rdx
 * 0000000140BC8775: mov     [rbp+8D0h+var_5C0], rdx
 * 0000000140BC877C: xor     edx, edx
 * 0000000140BC877E: div     r9
 * 0000000140BC8781: mov     rax, [rsi+100h]
 * 0000000140BC8788: mov     r14, rdx
 * 0000000140BC878B: lea     edx, [rbx+r15]
 * 0000000140BC878F: call    KeGuardDispatchICall
 * 0000000140BC8794: mov     r11, rax
 * 0000000140BC8797: test    rax, rax
 * 0000000140BC879A: jnz     short loc_140BC87AE
 * 0000000140BC879C: lea     eax, [r11+1]
 * 0000000140BC87A0: add     [rsi+0A60h], eax
 * 0000000140BC87A6: xor     r15d, r15d
 * 0000000140BC87A9: jmp     loc_140BC890C
 * 0000000140BC87AE: mov     r10d, r14d
 * 0000000140BC87B1: mov     r9, r11
 * 0000000140BC87B4: cmp     r14d, 8
 * 0000000140BC87B8: jb      short loc_140BC880F
 * 0000000140BC87BA: mov     r8d, r14d
 * 0000000140BC87BD: mov     esi, 1
 * 0000000140BC87C2: shr     r8, 3
 * 0000000140BC87C6: mov     rdi, 7010008004002001h
 * 0000000140BC87D0: rdtsc
 * 0000000140BC87D2: shl     rdx, 20h
 * 0000000140BC87D6: add     r10d, 0FFFFFFF8h
 * 0000000140BC87DA: or      rax, rdx
 * 0000000140BC87DD: mov     rcx, rax
 * 0000000140BC87E0: ror     rax, 3
 * 0000000140BC87E4: xor     rcx, rax
 * 0000000140BC87E7: mov     rax, rdi
 * 0000000140BC87EA: mul     rcx
 * 0000000140BC87ED: mov     [rbp+8D0h+var_5B8], rdx
 * 0000000140BC87F4: xor     rdx, rax
 * 0000000140BC87F7: mov     [r9], rdx
 * 0000000140BC87FA: add     r9, 8
 * 0000000140BC87FE: sub     r8, rsi
 * 0000000140BC8801: jnz     short loc_140BC87D0
 * 0000000140BC8803: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC8808: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC880F: test    r10d, r10d
 * 0000000140BC8812: jz      short loc_140BC8857
 * 0000000140BC8814: rdtsc
 * 0000000140BC8816: shl     rdx, 20h
 * 0000000140BC881A: or      rax, rdx
 * 0000000140BC881D: mov     rcx, rax
 * 0000000140BC8820: ror     rax, 3
 * 0000000140BC8824: xor     rcx, rax
 * 0000000140BC8827: mov     rax, 7010008004002001h
 * 0000000140BC8831: mul     rcx
 * 0000000140BC8834: mov     ecx, 0FFFFFFFFh
 * 0000000140BC8839: mov     [rbp+8D0h+var_5B0], rdx
 * 0000000140BC8840: xor     rdx, rax
 * 0000000140BC8843: mov     eax, 1
 * 0000000140BC8848: mov     [r9], dl
 * 0000000140BC884B: add     r9, rax
 * 0000000140BC884E: shr     rdx, 8
 * 0000000140BC8852: add     r10d, ecx
 * 0000000140BC8855: jnz     short loc_140BC8848
 * 0000000140BC8857: mov     eax, r14d
 * 0000000140BC885A: sub     ebx, r14d
 * 0000000140BC885D: add     rax, r11
 * 0000000140BC8860: mov     r8d, r15d
 * 0000000140BC8863: add     r8, rax
 * 0000000140BC8866: mov     r10d, 1
 * 0000000140BC886C: cmp     ebx, 8
 * 0000000140BC886F: jb      short loc_140BC88B9
 * 0000000140BC8871: mov     r9d, ebx
 * 0000000140BC8874: mov     rsi, 7010008004002001h
 * 0000000140BC887E: shr     r9, 3
 * 0000000140BC8882: rdtsc
 * 0000000140BC8884: shl     rdx, 20h
 * 0000000140BC8888: add     ebx, 0FFFFFFF8h
 * 0000000140BC888B: or      rax, rdx
 * 0000000140BC888E: mov     rcx, rax
 * 0000000140BC8891: ror     rax, 3
 * 0000000140BC8895: xor     rcx, rax
 * 0000000140BC8898: mov     rax, rsi
 * 0000000140BC889B: mul     rcx
 * 0000000140BC889E: mov     [rbp+8D0h+var_5A8], rdx
 * 0000000140BC88A5: xor     rdx, rax
 * 0000000140BC88A8: mov     [r8], rdx
 * 0000000140BC88AB: add     r8, 8
 * 0000000140BC88AF: sub     r9, r10
 * 0000000140BC88B2: jnz     short loc_140BC8882
 * 0000000140BC88B4: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC88B9: xor     r15d, r15d
 * 0000000140BC88BC: test    ebx, ebx
 * 0000000140BC88BE: jz      short loc_140BC88FD
 * 0000000140BC88C0: rdtsc
 * 0000000140BC88C2: shl     rdx, 20h
 * 0000000140BC88C6: or      rax, rdx
 * 0000000140BC88C9: mov     rcx, rax
 * 0000000140BC88CC: ror     rax, 3
 * 0000000140BC88D0: xor     rcx, rax
 * 0000000140BC88D3: mov     rax, 7010008004002001h
 * 0000000140BC88DD: mul     rcx
 * 0000000140BC88E0: mov     [rbp+8D0h+var_5A0], rdx
 * 0000000140BC88E7: xor     rdx, rax
 * 0000000140BC88EA: mov     eax, 0FFFFFFFFh
 * 0000000140BC88EF: mov     [r8], dl
 * 0000000140BC88F2: add     r8, r10
 * 0000000140BC88F5: shr     rdx, 8
 * 0000000140BC88F9: add     ebx, eax
 * 0000000140BC88FB: jnz     short loc_140BC88EF
 * 0000000140BC88FD: mov     ebx, r14d
 * 0000000140BC8900: mov     [rbp+8D0h+var_820], r11
 * 0000000140BC8907: add     rbx, r11
 * 0000000140BC890A: jnz     short loc_140BC8918
 * 0000000140BC890C: mov     [rbp+8D0h+var_820], r15
 * 0000000140BC8913: jmp     loc_140BC8AFF
 * 0000000140BC8918: mov     rdx, [r12]
 * 0000000140BC891C: mov     r14d, dword ptr [rsp+9D0h+var_960]
 * 0000000140BC8921: cmp     rdx, r12
 * 0000000140BC8924: jz      short loc_140BC8964
 * 0000000140BC8926: mov     eax, r14d
 * 0000000140BC8929: mov     r8, rdx
 * 0000000140BC892C: sub     r8, [rsi+758h]
 * 0000000140BC8933: cmp     r14d, r13d
 * 0000000140BC8936: jnb     short loc_140BC8953
 * 0000000140BC8938: mov     rax, [rsi+760h]
 * 0000000140BC893F: mov     ecx, r14d
 * 0000000140BC8942: add     r14d, r10d
 * 0000000140BC8945: mov     rax, [r8+rax]
 * 0000000140BC8949: mov     [rbx+rcx*8], rax
 * 0000000140BC894D: mov     eax, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BC8953: mov     rdx, [rdx]
 * 0000000140BC8956: add     eax, r10d
 * 0000000140BC8959: mov     dword ptr [rbp+8D0h+arg_8], eax
 * 0000000140BC895F: cmp     rdx, r12
 * 0000000140BC8962: jnz     short loc_140BC8929
 * 0000000140BC8964: mov     rax, [rsi+398h]
 * 0000000140BC896B: mov     edx, r14d
 * 0000000140BC896E: mov     rcx, rbx
 * 0000000140BC8971: call    KeGuardDispatchICall
 * 0000000140BC8976: mov     r15, [rsp+9D0h+var_978]
 * 0000000140BC897B: dec     r14d
 * 0000000140BC897E: mov     r12, [rsp+9D0h+var_968]
 * 0000000140BC8983: xor     r11d, r11d
 * 0000000140BC8986: mov     rdi, [rsp+9D0h+var_980]
 * 0000000140BC898B: mov     r10, [r15+8]
 * 0000000140BC898F: mov     r8d, r11d
 * 0000000140BC8992: mov     edx, r14d
 * 0000000140BC8995: test    r14d, r14d
 * 0000000140BC8998: js      short loc_140BC89C8
 * 0000000140BC899A: lea     ecx, [rdx+r8]
 * 0000000140BC899E: sar     ecx, 1
 * 0000000140BC89A0: movsxd  rax, ecx
 * 0000000140BC89A3: cmp     r10, [rbx+rax*8]
 * 0000000140BC89A7: jnb     short loc_140BC89B2
 * 0000000140BC89A9: test    ecx, ecx
 * 0000000140BC89AB: jz      short loc_140BC89C8
 * 0000000140BC89AD: lea     edx, [rcx-1]
 * 0000000140BC89B0: jmp     short loc_140BC89B8
 * 0000000140BC89B2: jbe     short loc_140BC89BF
 * 0000000140BC89B4: lea     r8d, [rcx+1]
 * 0000000140BC89B8: cmp     edx, r8d
 * 0000000140BC89BB: jge     short loc_140BC899A
 * 0000000140BC89BD: jmp     short loc_140BC89C8
 * 0000000140BC89BF: cmp     edx, r8d
 * 0000000140BC89C2: jge     loc_140BC8AE8
 * 0000000140BC89C8: cmp     [rsi+918h], r11d
 * 0000000140BC89CF: jnz     loc_140BC8AE8
 * 0000000140BC89D5: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC89DF: mov     edx, 1
 * 0000000140BC89E4: add     rax, rsi
 * 0000000140BC89E7: mov     [rsi+920h], rax
 * 0000000140BC89EE: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC89F8: add     rax, rdi
 * 0000000140BC89FB: mov     [rsi+928h], rax
 * 0000000140BC8A02: movsxd  rax, dword ptr [rdi]
 * 0000000140BC8A05: mov     [rsi+930h], rax
 * 0000000140BC8A0C: mov     [rsi+938h], r10
 * 0000000140BC8A13: mov     [rsi+918h], edx
 * 0000000140BC8A19: mov     ecx, [rsi+9D8h]
 * 0000000140BC8A1F: bt      ecx, 1Dh
 * 0000000140BC8A23: jb      loc_140BC8AE8
 * 0000000140BC8A29: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC8A33: jz      loc_140BC8AE8
 * 0000000140BC8A39: test    dl, cl
 * 0000000140BC8A3B: jz      loc_140BC8AE8
 * 0000000140BC8A41: mov     ecx, [rsi+0A74h]
 * 0000000140BC8A47: mov     eax, [rsi+804h]
 * 0000000140BC8A4D: mov     r10, [rsi+838h]
 * 0000000140BC8A54: sub     eax, ecx
 * 0000000140BC8A56: mov     r8, [rsi+0A78h]
 * 0000000140BC8A5D: lea     rdx, [rcx+rsi]
 * 0000000140BC8A61: mov     ecx, eax
 * 0000000140BC8A63: shr     rcx, 3
 * 0000000140BC8A67: lea     r9, [rdx+rcx*8]
 * 0000000140BC8A6B: jmp     short loc_140BC8A8E
 * 0000000140BC8A6D: xor     [rdx], r8
 * 0000000140BC8A70: mov     rax, [rdx]
 * 0000000140BC8A73: movzx   ecx, r8b
 * 0000000140BC8A77: xor     rax, r10
 * 0000000140BC8A7A: and     ecx, 3Fh
 * 0000000140BC8A7D: ror     r8, cl
 * 0000000140BC8A80: add     r8, rax
 * 0000000140BC8A83: xor     r8, 0EFAh
 * 0000000140BC8A8A: add     rdx, 8
 * 0000000140BC8A8E: cmp     rdx, r9
 * 0000000140BC8A91: jnz     short loc_140BC8A6D
 * 0000000140BC8A93: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC8A9B: cmp     r8, [rsi+0A80h]
 * 0000000140BC8AA2: jz      short loc_140BC8AE8
 * 0000000140BC8AA4: mov     ecx, [rsi+804h]
 * 0000000140BC8AAA: mov     rax, [rsi+588h]
 * 0000000140BC8AB1: mov     [rax], rsi
 * 0000000140BC8AB4: mov     [rax+10h], ecx
 * 0000000140BC8AB7: mov     rcx, [rsi+0A80h]
 * 0000000140BC8ABE: cmp     [rsi+918h], r11d
 * 0000000140BC8AC5: jnz     short loc_140BC8AD5
 * 0000000140BC8AC7: mov     rax, [rsi+588h]
 * 0000000140BC8ACE: xor     rcx, r8
 * 0000000140BC8AD1: mov     [rax+18h], rcx
 * 0000000140BC8AD5: xor     edx, edx
 * 0000000140BC8AD7: mov     r9d, 100h
 * 0000000140BC8ADD: mov     rcx, rsi
 * 0000000140BC8AE0: call    sub_140BDA384
 * 0000000140BC8AE5: xor     r11d, r11d
 * 0000000140BC8AE8: add     r15, 18h
 * 0000000140BC8AEC: cmp     r15, r12
 * 0000000140BC8AEF: jb      loc_140BC898B
 * 0000000140BC8AF5: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC8AFC: xor     r15d, r15d
 * 0000000140BC8AFF: mov     rcx, [rsi+530h]
 * 0000000140BC8B06: mov     rax, [rsi+128h]
 * 0000000140BC8B0D: call    KeGuardDispatchICall
 * 0000000140BC8B12: mov     rax, [rsi+180h]
 * 0000000140BC8B19: call    KeGuardDispatchICall
 * 0000000140BC8B1E: mov     rax, [rsi+380h]
 * 0000000140BC8B25: mov     rcx, [rbp+8D0h+var_940]
 * 0000000140BC8B29: call    KeGuardDispatchICall
 * 0000000140BC8B2E: cmp     [rbp+8D0h+var_820], r15
 * 0000000140BC8B35: jz      loc_140BC5B58
 * 0000000140BC8B3B: mov     eax, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BC8B41: shl     eax, 9
 * 0000000140BC8B44: add     [rsi+848h], eax
 * 0000000140BC8B4A: mov     rax, [rsi+108h]
 * 0000000140BC8B51: mov     rcx, [rbp+8D0h+var_820]
 * 0000000140BC8B58: jmp     loc_140BC5B53
 * 0000000140BC8B5D: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BC8B67: jz      short loc_140BC8BBD
 * 0000000140BC8B69: test    [rsi+9DCh], r11d
 * 0000000140BC8B70: jnz     short loc_140BC8BBD
 * 0000000140BC8B72: rdtsc
 * 0000000140BC8B74: shl     rdx, 20h
 * 0000000140BC8B78: or      rax, rdx
 * 0000000140BC8B7B: mov     rcx, rax
 * 0000000140BC8B7E: ror     rax, 3
 * 0000000140BC8B82: xor     rcx, rax
 * 0000000140BC8B85: mov     rax, 7010008004002001h
 * 0000000140BC8B8F: mul     rcx
 * 0000000140BC8B92: mov     rcx, rdx
 * 0000000140BC8B95: mov     [rbp+8D0h+var_598], rdx
 * 0000000140BC8B9C: xor     rcx, rax
 * 0000000140BC8B9F: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 0000000140BC8BA9: mul     rcx
 * 0000000140BC8BAC: shr     rdx, 2
 * 0000000140BC8BB0: lea     rax, [rdx+rdx*4]
 * 0000000140BC8BB4: sub     rcx, rax
 * 0000000140BC8BB7: mov     [rsi+844h], ecx
 * 0000000140BC8BBD: mov     ecx, [rsi+844h]
 * 0000000140BC8BC3: test    ecx, ecx
 * 0000000140BC8BC5: jz      loc_140BCB9B0
 * 0000000140BC8BCB: sub     ecx, 1
 * 0000000140BC8BCE: jz      loc_140BCB776
 * 0000000140BC8BD4: sub     ecx, 1
 * 0000000140BC8BD7: jz      loc_140BCB4F2
 * 0000000140BC8BDD: sub     ecx, 1
 * 0000000140BC8BE0: jz      loc_140BC909E
 * 0000000140BC8BE6: sub     ecx, 1
 * 0000000140BC8BE9: jz      loc_140BC8E2E
 * 0000000140BC8BEF: cmp     ecx, 1
 * 0000000140BC8BF2: jnz     loc_140BCBBFE
 * 0000000140BC8BF8: mov     rbx, r13
 * 0000000140BC8BFB: mov     [rbp+8D0h+arg_10], 0FFh
 * 0000000140BC8C02: mov     r13d, r15d
 * 0000000140BC8C05: mov     r14d, r15d
 * 0000000140BC8C08: xor     edi, edi
 * 0000000140BC8C0A: mov     [rbp+8D0h+var_7B8], rdi
 * 0000000140BC8C11: jmp     loc_140BC8DDF
 * 0000000140BC8C16: mov     rax, [rsi+218h]
 * 0000000140BC8C1D: lea     rdx, [rbp+8D0h+var_590]
 * 0000000140BC8C24: mov     rcx, [rbp+8D0h+var_838]
 * 0000000140BC8C2B: inc     r13d
 * 0000000140BC8C2E: call    KeGuardDispatchICall
 * 0000000140BC8C33: test    rax, rax
 * 0000000140BC8C36: jnz     loc_140BC8DDF
 * 0000000140BC8C3C: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BC8C46: lea     r9d, [rax+1]
 * 0000000140BC8C4A: jz      short loc_140BC8C92
 * 0000000140BC8C4C: mov     rcx, [rsi+0AC8h]
 * 0000000140BC8C53: lea     edx, [rax+30h]
 * 0000000140BC8C56: mov     r8, r12
 * 0000000140BC8C59: mov     rax, [rbx]
 * 0000000140BC8C5C: add     edx, 0FFFFFFF8h
 * 0000000140BC8C5F: mov     [rcx], rax
 * 0000000140BC8C62: add     rbx, 8
 * 0000000140BC8C66: add     rcx, 8
 * 0000000140BC8C6A: sub     r8, r9
 * 0000000140BC8C6D: jnz     short loc_140BC8C59
 * 0000000140BC8C6F: test    edx, edx
 * 0000000140BC8C71: jz      short loc_140BC8C8B
 * 0000000140BC8C73: mov     esi, 0FFFFFFFFh
 * 0000000140BC8C78: mov     al, [rbx]
 * 0000000140BC8C7A: add     rbx, r9
 * 0000000140BC8C7D: mov     [rcx], al
 * 0000000140BC8C7F: add     rcx, r9
 * 0000000140BC8C82: add     edx, esi
 * 0000000140BC8C84: jnz     short loc_140BC8C78
 * 0000000140BC8C86: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC8C8B: mov     rbx, [rsi+0AC8h]
 * 0000000140BC8C92: mov     rax, [rbp+8D0h+var_838]
 * 0000000140BC8C99: mov     [rbx+18h], rax
 * 0000000140BC8C9D: mov     rax, [rsi+588h]
 * 0000000140BC8CA4: mov     [rax], rbx
 * 0000000140BC8CA7: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140BC8CAE: mov     rcx, [rsi+588h]
 * 0000000140BC8CB5: mov     rax, [rbp+8D0h+var_838]
 * 0000000140BC8CBC: mov     [rcx+8], rax
 * 0000000140BC8CC0: mov     dword ptr [rcx+14h], 1000h
 * 0000000140BC8CC7: cmp     [rsi+918h], edi
 * 0000000140BC8CCD: jnz     loc_140BC8DDF
 * 0000000140BC8CD3: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC8CDD: add     rax, rsi
 * 0000000140BC8CE0: mov     [rsi+920h], rax
 * 0000000140BC8CE7: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC8CF1: add     rax, rbx
 * 0000000140BC8CF4: mov     [rsi+928h], rax
 * 0000000140BC8CFB: movsxd  rax, dword ptr [rbx]
 * 0000000140BC8CFE: mov     [rsi+930h], rax
 * 0000000140BC8D05: mov     [rsi+938h], r15
 * 0000000140BC8D0C: mov     [rsi+918h], r9d
 * 0000000140BC8D13: mov     ecx, [rsi+9D8h]
 * 0000000140BC8D19: bt      ecx, 1Dh
 * 0000000140BC8D1D: jb      loc_140BC8DDF
 * 0000000140BC8D23: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC8D2D: jz      loc_140BC8DDF
 * 0000000140BC8D33: test    r9b, cl
 * 0000000140BC8D36: jz      loc_140BC8DDF
 * 0000000140BC8D3C: mov     ecx, [rsi+0A74h]
 * 0000000140BC8D42: mov     eax, [rsi+804h]
 * 0000000140BC8D48: mov     r10, [rsi+838h]
 * 0000000140BC8D4F: sub     eax, ecx
 * 0000000140BC8D51: mov     r8, [rsi+0A78h]
 * 0000000140BC8D58: lea     rdx, [rcx+rsi]
 * 0000000140BC8D5C: mov     ecx, eax
 * 0000000140BC8D5E: shr     rcx, 3
 * 0000000140BC8D62: lea     r9, [rdx+rcx*8]
 * 0000000140BC8D66: jmp     short loc_140BC8D89
 * 0000000140BC8D68: xor     [rdx], r8
 * 0000000140BC8D6B: mov     rax, [rdx]
 * 0000000140BC8D6E: movzx   ecx, r8b
 * 0000000140BC8D72: xor     rax, r10
 * 0000000140BC8D75: and     ecx, 3Fh
 * 0000000140BC8D78: ror     r8, cl
 * 0000000140BC8D7B: add     r8, rax
 * 0000000140BC8D7E: xor     r8, 0EFAh
 * 0000000140BC8D85: add     rdx, 8
 * 0000000140BC8D89: cmp     rdx, r9
 * 0000000140BC8D8C: jnz     short loc_140BC8D68
 * 0000000140BC8D8E: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC8D96: cmp     r8, [rsi+0A80h]
 * 0000000140BC8D9D: jz      short loc_140BC8DDF
 * 0000000140BC8D9F: mov     ecx, [rsi+804h]
 * 0000000140BC8DA5: mov     rax, [rsi+588h]
 * 0000000140BC8DAC: mov     [rax], rsi
 * 0000000140BC8DAF: mov     [rax+10h], ecx
 * 0000000140BC8DB2: mov     rcx, [rsi+0A80h]
 * 0000000140BC8DB9: cmp     [rsi+918h], edi
 * 0000000140BC8DBF: jnz     short loc_140BC8DCF
 * 0000000140BC8DC1: mov     rax, [rsi+588h]
 * 0000000140BC8DC8: xor     rcx, r8
 * 0000000140BC8DCB: mov     [rax+18h], rcx
 * 0000000140BC8DCF: xor     edx, edx
 * 0000000140BC8DD1: mov     r9d, 100h
 * 0000000140BC8DD7: mov     rcx, rsi
 * 0000000140BC8DDA: call    sub_140BDA384
 * 0000000140BC8DDF: mov     rax, [rsi+430h]
 * 0000000140BC8DE6: lea     r9, [rbp+8D0h+var_838]
 * 0000000140BC8DED: lea     r8, [rbp+8D0h+arg_10]
 * 0000000140BC8DF4: mov     ecx, r14d
 * 0000000140BC8DF7: lea     rdx, [rbp+8D0h+var_7B8]
 * 0000000140BC8DFE: call    KeGuardDispatchICall
 * 0000000140BC8E03: test    eax, eax
 * 0000000140BC8E05: jnz     loc_140BC8C16
 * 0000000140BC8E0B: mov     eax, 1
 * 0000000140BC8E10: add     r14d, eax
 * 0000000140BC8E13: add     r15, rax
 * 0000000140BC8E16: cmp     r14d, 3
 * 0000000140BC8E1A: jb      loc_140BC8C0A
 * 0000000140BC8E20: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC8E27: mov     ebx, eax
 * 0000000140BC8E29: jmp     loc_140BCBBC4
 * 0000000140BC8E2E: mov     rax, [rsi+318h]
 * 0000000140BC8E35: xor     ecx, ecx
 * 0000000140BC8E37: mov     r13d, r15d
 * 0000000140BC8E3A: mov     [rbp+8D0h+var_948], r15d
 * 0000000140BC8E3E: call    KeGuardDispatchICall
 * 0000000140BC8E43: mov     r15, rax
 * 0000000140BC8E46: xor     eax, eax
 * 0000000140BC8E48: test    r15, r15
 * 0000000140BC8E4B: jz      loc_140BCBBC4
 * 0000000140BC8E51: mov     rdi, [rsp+9D0h+var_980]
 * 0000000140BC8E56: mov     [rbp+8D0h+var_7B0], rax
 * 0000000140BC8E5D: lea     rdx, [rbp+8D0h+var_7B0]
 * 0000000140BC8E64: mov     rax, [rsi+310h]
 * 0000000140BC8E6B: mov     rcx, r15
 * 0000000140BC8E6E: mov     rbx, rdi
 * 0000000140BC8E71: mov     r12d, 1
 * 0000000140BC8E77: call    KeGuardDispatchICall
 * 0000000140BC8E7C: mov     r14, rax
 * 0000000140BC8E7F: test    rax, rax
 * 0000000140BC8E82: jz      loc_140BC9075
 * 0000000140BC8E88: xor     edi, edi
 * 0000000140BC8E8A: lea     r13d, [r12+5]
 * 0000000140BC8E8F: mov     rax, [rsi+218h]
 * 0000000140BC8E96: lea     rdx, [rbp+8D0h+var_588]
 * 0000000140BC8E9D: mov     rcx, r14
 * 0000000140BC8EA0: inc     r12d
 * 0000000140BC8EA3: call    KeGuardDispatchICall
 * 0000000140BC8EA8: test    rax, rax
 * 0000000140BC8EAB: jnz     loc_140BC904A
 * 0000000140BC8EB1: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BC8EBB: lea     r9d, [rax+1]
 * 0000000140BC8EBF: jz      short loc_140BC8F07
 * 0000000140BC8EC1: mov     rcx, [rsi+0AC8h]
 * 0000000140BC8EC8: lea     edx, [rax+30h]
 * 0000000140BC8ECB: mov     r8, r13
 * 0000000140BC8ECE: mov     rax, [rbx]
 * 0000000140BC8ED1: add     edx, 0FFFFFFF8h
 * 0000000140BC8ED4: mov     [rcx], rax
 * 0000000140BC8ED7: add     rbx, 8
 * 0000000140BC8EDB: add     rcx, 8
 * 0000000140BC8EDF: sub     r8, r9
 * 0000000140BC8EE2: jnz     short loc_140BC8ECE
 * 0000000140BC8EE4: test    edx, edx
 * 0000000140BC8EE6: jz      short loc_140BC8F00
 * 0000000140BC8EE8: mov     esi, 0FFFFFFFFh
 * 0000000140BC8EED: mov     al, [rbx]
 * 0000000140BC8EEF: add     rbx, r9
 * 0000000140BC8EF2: mov     [rcx], al
 * 0000000140BC8EF4: add     rcx, r9
 * 0000000140BC8EF7: add     edx, esi
 * 0000000140BC8EF9: jnz     short loc_140BC8EED
 * 0000000140BC8EFB: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC8F00: mov     rbx, [rsi+0AC8h]
 * 0000000140BC8F07: mov     [rbx+18h], r14
 * 0000000140BC8F0B: mov     [rbx+20h], r15
 * 0000000140BC8F0F: mov     rax, [rsi+588h]
 * 0000000140BC8F16: mov     [rax], rbx
 * 0000000140BC8F19: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140BC8F20: mov     rax, [rsi+588h]
 * 0000000140BC8F27: mov     [rax+8], r14
 * 0000000140BC8F2B: mov     dword ptr [rax+14h], 1000h
 * 0000000140BC8F32: cmp     [rsi+918h], edi
 * 0000000140BC8F38: jnz     loc_140BC904A
 * 0000000140BC8F3E: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC8F48: add     rax, rsi
 * 0000000140BC8F4B: mov     [rsi+920h], rax
 * 0000000140BC8F52: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC8F5C: add     rax, rbx
 * 0000000140BC8F5F: mov     [rsi+928h], rax
 * 0000000140BC8F66: movsxd  rax, dword ptr [rbx]
 * 0000000140BC8F69: mov     [rsi+930h], rax
 * 0000000140BC8F70: mov     [rsi+938h], r13
 * 0000000140BC8F77: mov     [rsi+918h], r9d
 * 0000000140BC8F7E: mov     ecx, [rsi+9D8h]
 * 0000000140BC8F84: bt      ecx, 1Dh
 * 0000000140BC8F88: jb      loc_140BC904A
 * 0000000140BC8F8E: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC8F98: jz      loc_140BC904A
 * 0000000140BC8F9E: test    r9b, cl
 * 0000000140BC8FA1: jz      loc_140BC904A
 * 0000000140BC8FA7: mov     ecx, [rsi+0A74h]
 * 0000000140BC8FAD: mov     eax, [rsi+804h]
 * 0000000140BC8FB3: mov     r10, [rsi+838h]
 * 0000000140BC8FBA: sub     eax, ecx
 * 0000000140BC8FBC: mov     r8, [rsi+0A78h]
 * 0000000140BC8FC3: lea     rdx, [rcx+rsi]
 * 0000000140BC8FC7: mov     ecx, eax
 * 0000000140BC8FC9: shr     rcx, 3
 * 0000000140BC8FCD: lea     r9, [rdx+rcx*8]
 * 0000000140BC8FD1: jmp     short loc_140BC8FF4
 * 0000000140BC8FD3: xor     [rdx], r8
 * 0000000140BC8FD6: mov     rax, [rdx]
 * 0000000140BC8FD9: movzx   ecx, r8b
 * 0000000140BC8FDD: xor     rax, r10
 * 0000000140BC8FE0: and     ecx, 3Fh
 * 0000000140BC8FE3: ror     r8, cl
 * 0000000140BC8FE6: add     r8, rax
 * 0000000140BC8FE9: xor     r8, 0EFAh
 * 0000000140BC8FF0: add     rdx, 8
 * 0000000140BC8FF4: cmp     rdx, r9
 * 0000000140BC8FF7: jnz     short loc_140BC8FD3
 * 0000000140BC8FF9: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC9001: cmp     r8, [rsi+0A80h]
 * 0000000140BC9008: jz      short loc_140BC904A
 * 0000000140BC900A: mov     ecx, [rsi+804h]
 * 0000000140BC9010: mov     rax, [rsi+588h]
 * 0000000140BC9017: mov     [rax], rsi
 * 0000000140BC901A: mov     [rax+10h], ecx
 * 0000000140BC901D: mov     rcx, [rsi+0A80h]
 * 0000000140BC9024: cmp     [rsi+918h], edi
 * 0000000140BC902A: jnz     short loc_140BC903A
 * 0000000140BC902C: mov     rax, [rsi+588h]
 * 0000000140BC9033: xor     rcx, r8
 * 0000000140BC9036: mov     [rax+18h], rcx
 * 0000000140BC903A: xor     edx, edx
 * 0000000140BC903C: mov     r9d, 100h
 * 0000000140BC9042: mov     rcx, rsi
 * 0000000140BC9045: call    sub_140BDA384
 * 0000000140BC904A: mov     rax, [rsi+310h]
 * 0000000140BC9051: lea     rdx, [rbp+8D0h+var_7B0]
 * 0000000140BC9058: mov     rcx, r15
 * 0000000140BC905B: call    KeGuardDispatchICall
 * 0000000140BC9060: mov     r14, rax
 * 0000000140BC9063: test    rax, rax
 * 0000000140BC9066: jnz     loc_140BC8E8F
 * 0000000140BC906C: mov     r13d, [rbp+8D0h+var_948]
 * 0000000140BC9070: mov     rdi, [rsp+9D0h+var_980]
 * 0000000140BC9075: mov     rax, [rsi+318h]
 * 0000000140BC907C: add     r13d, r12d
 * 0000000140BC907F: mov     rcx, r15
 * 0000000140BC9082: mov     [rbp+8D0h+var_948], r13d
 * 0000000140BC9086: call    KeGuardDispatchICall
 * 0000000140BC908B: mov     r15, rax
 * 0000000140BC908E: xor     eax, eax
 * 0000000140BC9090: test    r15, r15
 * 0000000140BC9093: jnz     loc_140BC8E56
 * 0000000140BC9099: jmp     loc_140BCBBB8
 * 0000000140BC909E: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BC90A8: mov     r13d, r15d
 * 0000000140BC90AB: mov     rax, [rsi+4E8h]
 * 0000000140BC90B2: mov     [rbp+8D0h+var_8B8], rsi
 * 0000000140BC90B6: mov     rbx, [rax]
 * 0000000140BC90B9: mov     [rbp+8D0h+var_900], rbx
 * 0000000140BC90BD: jnz     loc_140BCBBBF
 * 0000000140BC90C3: mov     rcx, [rsp+9D0h+var_980]
 * 0000000140BC90C8: mov     rax, [rcx+28h]
 * 0000000140BC90CC: test    rax, rax
 * 0000000140BC90CF: jz      loc_140BC922B
 * 0000000140BC90D5: mov     edx, 1
 * 0000000140BC90DA: mov     r13d, edx
 * 0000000140BC90DD: cmp     rbx, rax
 * 0000000140BC90E0: jz      loc_140BCBBBF
 * 0000000140BC90E6: mov     [rcx+18h], rbx
 * 0000000140BC90EA: mov     rax, [rsi+588h]
 * 0000000140BC90F1: mov     [rax], rcx
 * 0000000140BC90F4: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140BC90FB: mov     rax, [rsi+588h]
 * 0000000140BC9102: mov     [rax+8], rbx
 * 0000000140BC9106: mov     [rax+14h], r11d
 * 0000000140BC910A: cmp     [rsi+918h], r15d
 * 0000000140BC9111: jnz     loc_140BCBBBF
 * 0000000140BC9117: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC9121: add     rax, rsi
 * 0000000140BC9124: mov     [rsi+920h], rax
 * 0000000140BC912B: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC9135: add     rax, rcx
 * 0000000140BC9138: mov     [rsi+928h], rax
 * 0000000140BC913F: movsxd  rax, dword ptr [rcx]
 * 0000000140BC9142: mov     [rsi+930h], rax
 * 0000000140BC9149: mov     [rsi+938h], r14
 * 0000000140BC9150: mov     [rsi+918h], edx
 * 0000000140BC9156: mov     ecx, [rsi+9D8h]
 * 0000000140BC915C: bt      ecx, 1Dh
 * 0000000140BC9160: jb      loc_140BCBBBF
 * 0000000140BC9166: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC9170: jz      loc_140BCBBBF
 * 0000000140BC9176: test    dl, cl
 * 0000000140BC9178: jz      loc_140BCBBBF
 * 0000000140BC917E: mov     ecx, [rsi+0A74h]
 * 0000000140BC9184: mov     eax, [rsi+804h]
 * 0000000140BC918A: mov     r10, [rsi+838h]
 * 0000000140BC9191: sub     eax, ecx
 * 0000000140BC9193: mov     r8, [rsi+0A78h]
 * 0000000140BC919A: lea     rdx, [rcx+rsi]
 * 0000000140BC919E: mov     ecx, eax
 * 0000000140BC91A0: shr     rcx, 3
 * 0000000140BC91A4: lea     r9, [rdx+rcx*8]
 * 0000000140BC91A8: jmp     short loc_140BC91CB
 * 0000000140BC91AA: xor     [rdx], r8
 * 0000000140BC91AD: mov     rax, [rdx]
 * 0000000140BC91B0: movzx   ecx, r8b
 * 0000000140BC91B4: xor     rax, r10
 * 0000000140BC91B7: and     ecx, 3Fh
 * 0000000140BC91BA: ror     r8, cl
 * 0000000140BC91BD: add     r8, rax
 * 0000000140BC91C0: xor     r8, 0EFAh
 * 0000000140BC91C7: add     rdx, 8
 * 0000000140BC91CB: cmp     rdx, r9
 * 0000000140BC91CE: jnz     short loc_140BC91AA
 * 0000000140BC91D0: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC91D8: cmp     r8, [rsi+0A80h]
 * 0000000140BC91DF: jz      loc_140BCBBBF
 * 0000000140BC91E5: mov     ecx, [rsi+804h]
 * 0000000140BC91EB: mov     rax, [rsi+588h]
 * 0000000140BC91F2: mov     [rax], rsi
 * 0000000140BC91F5: mov     [rax+10h], ecx
 * 0000000140BC91F8: mov     rcx, [rsi+0A80h]
 * 0000000140BC91FF: cmp     [rsi+918h], r15d
 * 0000000140BC9206: jnz     short loc_140BC9216
 * 0000000140BC9208: mov     rax, [rsi+588h]
 * 0000000140BC920F: xor     rcx, r8
 * 0000000140BC9212: mov     [rax+18h], rcx
 * 0000000140BC9216: xor     edx, edx
 * 0000000140BC9218: mov     r9d, 100h
 * 0000000140BC921E: mov     rcx, rsi
 * 0000000140BC9221: call    sub_140BDA384
 * 0000000140BC9226: jmp     loc_140BCBBBF
 * 0000000140BC922B: test    rbx, rbx
 * 0000000140BC922E: jz      loc_140BCBBBF
 * 0000000140BC9234: mov     rax, [rsi+210h]
 * 0000000140BC923B: lea     rdx, [rbp+8D0h+var_230]
 * 0000000140BC9242: mov     rcx, rbx
 * 0000000140BC9245: mov     [rbp+8D0h+var_948], 1
 * 0000000140BC924C: mov     [rbp+8D0h+var_8C0], rsi
 * 0000000140BC9250: call    KeGuardDispatchICall
 * 0000000140BC9255: mov     r15, [rbp+8D0h+BugCheckParameter2]
 * 0000000140BC925C: xor     r13d, r13d
 * 0000000140BC925F: mov     r14d, [rbp+8D0h+var_21C]
 * 0000000140BC9266: mov     r12, rax
 * 0000000140BC9269: mov     [rbp+8D0h+var_930], rax
 * 0000000140BC926D: mov     [rbp+8D0h+var_914], r14d
 * 0000000140BC9271: mov     [rbp+8D0h+var_910], r15
 * 0000000140BC9275: test    r15, r15
 * 0000000140BC9278: jnz     short loc_140BC9294
 * 0000000140BC927A: test    dword ptr [rsi+9D8h], 100000h
 * 0000000140BC9284: jz      loc_140BD54B1
 * 0000000140BC928A: mov     ecx, 0C000007Bh
 * 0000000140BC928F: jmp     loc_140BCB4B5
 * 0000000140BC9294: mov     ecx, 4
 * 0000000140BC9299: mov     [rbp+8D0h+var_870], r13
 * 0000000140BC929D: lea     rax, [rbp+8D0h+var_868]
 * 0000000140BC92A1: mov     r8d, 0FFFFFFFFh
 * 0000000140BC92A7: lea     edx, [rcx-3]
 * 0000000140BC92AA: mov     [rax], r13b
 * 0000000140BC92AD: add     rax, rdx
 * 0000000140BC92B0: add     ecx, r8d
 * 0000000140BC92B3: jnz     short loc_140BC92AA
 * 0000000140BC92B5: mov     ebx, r13d
 * 0000000140BC92B8: cmp     [rsi+82Ch], r13d
 * 0000000140BC92BF: jbe     loc_140BC9484
 * 0000000140BC92C5: mov     ecx, [rbp+8D0h+var_868]
 * 0000000140BC92C8: mov     edx, dword ptr [rbp+8D0h+var_870+4]
 * 0000000140BC92CB: mov     r9d, dword ptr [rbp+8D0h+var_870]
 * 0000000140BC92CF: mov     rax, [rsi+0AC0h]
 * 0000000140BC92D6: mov     r11, rsi
 * 0000000140BC92D9: test    rax, rax
 * 0000000140BC92DC: mov     r10d, r13d
 * 0000000140BC92DF: cmovnz  r11, rax
 * 0000000140BC92E3: mov     r8d, [r11+828h]
 * 0000000140BC92EA: add     r8, r11
 * 0000000140BC92ED: test    r9d, r9d
 * 0000000140BC92F0: jz      short loc_140BC92FF
 * 0000000140BC92F2: cmp     edx, ebx
 * 0000000140BC92F4: ja      short loc_140BC92FF
 * 0000000140BC92F6: mov     r8d, ecx
 * 0000000140BC92F9: mov     r10d, edx
 * 0000000140BC92FC: add     r8, r11
 * 0000000140BC92FF: cmp     r10d, ebx
 * 0000000140BC9302: jz      loc_140BC941E
 * 0000000140BC9308: mov     esi, 2
 * 0000000140BC930D: mov     r9d, ebx
 * 0000000140BC9310: sub     r9d, r10d
 * 0000000140BC9313: mov     rdi, 0AAAAAAAAAAAAAAABh
 * 0000000140BC931D: mov     r10d, ebx
 * 0000000140BC9320: lea     r12d, [rsi-1]
 * 0000000140BC9324: mov     ecx, [r8]
 * 0000000140BC9327: sub     ecx, r12d
 * 0000000140BC932A: jz      loc_140BC93E9
 * 0000000140BC9330: sub     ecx, 6
 * 0000000140BC9333: jz      loc_140BC93DB
 * 0000000140BC9339: sub     ecx, r12d
 * 0000000140BC933C: jz      loc_140BC93CE
 * 0000000140BC9342: sub     ecx, esi
 * 0000000140BC9344: jz      short loc_140BC93C2
 * 0000000140BC9346: sub     ecx, 12h
 * 0000000140BC9349: jz      short loc_140BC93BB
 * 0000000140BC934B: sub     ecx, esi
 * 0000000140BC934D: jz      short loc_140BC938F
 * 0000000140BC934F: sub     ecx, 3
 * 0000000140BC9352: jz      short loc_140BC9367
 * 0000000140BC9354: cmp     ecx, 0Ah
 * 0000000140BC9357: jz      loc_140BC93E9
 * 0000000140BC935D: mov     eax, 30h ; '0'
 * 0000000140BC9362: jmp     loc_140BC93FE
 * 0000000140BC9367: mov     ecx, [r8+20h]
 * 0000000140BC936B: mov     edx, [r8+28h]
 * 0000000140BC936F: and     ecx, 0FFFh
 * 0000000140BC9375: add     rdx, 0FFFh
 * 0000000140BC937C: add     rdx, rcx
 * 0000000140BC937F: shr     rdx, 0Ch
 * 0000000140BC9383: lea     eax, [rdx+rdx*4]
 * 0000000140BC9386: lea     eax, ds:30h[rax*4]
 * 0000000140BC938D: jmp     short loc_140BC93FE
 * 0000000140BC938F: mov     eax, [r8+24h]
 * 0000000140BC9393: lea     ecx, [rax-1]
 * 0000000140BC9396: neg     eax
 * 0000000140BC9398: sbb     eax, eax
 * 0000000140BC939A: and     ecx, eax
 * 0000000140BC939C: mov     rax, rdi
 * 0000000140BC939F: mul     rcx
 * 0000000140BC93A2: movzx   eax, word ptr [r8+28h]
 * 0000000140BC93A7: shr     rdx, 3
 * 0000000140BC93AB: add     edx, 7
 * 0000000140BC93AE: and     edx, 0FFFFFFF8h
 * 0000000140BC93B1: add     eax, esi
 * 0000000140BC93B3: lea     eax, [rax+rax*2]
 * 0000000140BC93B6: lea     eax, [rdx+rax*8]
 * 0000000140BC93B9: jmp     short loc_140BC93FE
 * 0000000140BC93BB: movzx   eax, word ptr [r8+28h]
 * 0000000140BC93C0: jmp     short loc_140BC93D3
 * 0000000140BC93C2: mov     eax, [r8+1Ch]
 * 0000000140BC93C6: add     eax, 3
 * 0000000140BC93C9: shl     eax, 4
 * 0000000140BC93CC: jmp     short loc_140BC93FE
 * 0000000140BC93CE: movzx   eax, word ptr [r8+20h]
 * 0000000140BC93D3: add     eax, 37h ; '7'
 * 0000000140BC93D6: and     eax, 0FFFFFFF8h
 * 0000000140BC93D9: jmp     short loc_140BC93FE
 * 0000000140BC93DB: mov     eax, [r8+18h]
 * 0000000140BC93DF: add     eax, esi
 * 0000000140BC93E1: lea     eax, [rax+rax*2]
 * 0000000140BC93E4: shl     eax, 3
 * 0000000140BC93E7: jmp     short loc_140BC93FE
 * 0000000140BC93E9: mov     ecx, [r8+10h]
 * 0000000140BC93ED: mov     rax, rdi
 * 0000000140BC93F0: mul     rcx
 * 0000000140BC93F3: shr     rdx, 3
 * 0000000140BC93F7: lea     eax, ds:30h[rdx*4]
 * 0000000140BC93FE: add     r8, rax
 * 0000000140BC9401: sub     r9, r12
 * 0000000140BC9404: jnz     loc_140BC9324
 * 0000000140BC940A: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC940F: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC9416: mov     r15, [rbp+8D0h+var_910]
 * 0000000140BC941A: mov     r12, [rbp+8D0h+var_930]
 * 0000000140BC941E: mov     eax, 1
 * 0000000140BC9423: mov     edx, r10d
 * 0000000140BC9426: mov     r9d, eax
 * 0000000140BC9429: mov     dword ptr [rbp+8D0h+var_870], eax
 * 0000000140BC942C: mov     ecx, r8d
 * 0000000140BC942F: mov     dword ptr [rbp+8D0h+var_870+4], edx
 * 0000000140BC9432: sub     ecx, r11d
 * 0000000140BC9435: mov     r10d, r9d
 * 0000000140BC9438: mov     [rbp+8D0h+var_868], ecx
 * 0000000140BC943B: mov     eax, [r8]
 * 0000000140BC943E: cmp     eax, r10d
 * 0000000140BC9441: jz      short loc_140BC9453
 * 0000000140BC9443: mov     r11d, 0Ch
 * 0000000140BC9449: cmp     eax, r11d
 * 0000000140BC944C: jz      short loc_140BC9453
 * 0000000140BC944E: cmp     eax, 2Bh ; '+'
 * 0000000140BC9451: jnz     short loc_140BC9463
 * 0000000140BC9453: cmp     [r8+8], r12
 * 0000000140BC9457: jnz     short loc_140BC9463
 * 0000000140BC9459: cmp     [r8+10h], r14d
 * 0000000140BC945D: jz      loc_140BC9516
 * 0000000140BC9463: add     eax, 0FFFFFFDFh
 * 0000000140BC9466: cmp     eax, r10d
 * 0000000140BC9469: ja      short loc_140BC9475
 * 0000000140BC946B: cmp     [r8+20h], r15
 * 0000000140BC946F: jz      loc_140BC9516
 * 0000000140BC9475: add     ebx, r10d
 * 0000000140BC9478: cmp     ebx, [rsi+82Ch]
 * 0000000140BC947E: jb      loc_140BC92CF
 * 0000000140BC9484: mov     [rbp+8D0h+var_8B0], r13
 * 0000000140BC9488: mov     eax, [rbp+8D0h+var_914]
 * 0000000140BC948B: mov     rbx, [rsi+528h]
 * 0000000140BC9492: mov     dword ptr [rsp+9D0h+var_960], eax
 * 0000000140BC9496: cli
 * 0000000140BC9497: mov     rcx, gs:20h
 * 0000000140BC94A0: mov     rax, [rsi+658h]
 * 0000000140BC94A7: mov     rcx, [rcx+rax]
 * 0000000140BC94AB: sti
 * 0000000140BC94AC: mov     rax, [rsi+178h]
 * 0000000140BC94B3: call    KeGuardDispatchICall
 * 0000000140BC94B8: mov     rcx, [rsi+530h]
 * 0000000140BC94BF: mov     r12d, 1
 * 0000000140BC94C5: mov     rax, [rsi+0F8h]
 * 0000000140BC94CC: mov     dl, r12b
 * 0000000140BC94CF: call    KeGuardDispatchICall
 * 0000000140BC94D4: mov     rdx, [rbx]
 * 0000000140BC94D7: cmp     rdx, rbx
 * 0000000140BC94DA: jz      short loc_140BC953C
 * 0000000140BC94DC: mov     r9, [rsi+758h]
 * 0000000140BC94E3: mov     r10, [rsi+760h]
 * 0000000140BC94EA: mov     r11, [rsi+768h]
 * 0000000140BC94F1: mov     rcx, rdx
 * 0000000140BC94F4: sub     rcx, r9
 * 0000000140BC94F7: mov     rax, [rcx+r10]
 * 0000000140BC94FB: mov     r8d, [rcx+r11]
 * 0000000140BC94FF: add     r8, rax
 * 0000000140BC9502: cmp     r15, rax
 * 0000000140BC9505: jb      short loc_140BC950C
 * 0000000140BC9507: cmp     r15, r8
 * 0000000140BC950A: jb      short loc_140BC952D
 * 0000000140BC950C: mov     rdx, [rdx]
 * 0000000140BC950F: cmp     rdx, rbx
 * 0000000140BC9512: jnz     short loc_140BC94F1
 * 0000000140BC9514: jmp     short loc_140BC953C
 * 0000000140BC9516: mov     [rbp+8D0h+var_8B0], r8
 * 0000000140BC951A: test    r8, r8
 * 0000000140BC951D: jz      loc_140BC9488
 * 0000000140BC9523: mov     ecx, 0C000010Eh
 * 0000000140BC9528: jmp     loc_140BCB4B1
 * 0000000140BC952D: mov     rax, [rsi+0E8h]
 * 0000000140BC9534: mov     edx, r12d
 * 0000000140BC9537: call    KeGuardDispatchICall
 * 0000000140BC953C: mov     rcx, [rsi+530h]
 * 0000000140BC9543: mov     rax, [rsi+128h]
 * 0000000140BC954A: call    KeGuardDispatchICall
 * 0000000140BC954F: mov     rax, [rsi+180h]
 * 0000000140BC9556: call    KeGuardDispatchICall
 * 0000000140BC955B: bt      dword ptr [rsi+9D8h], 1Dh
 * 0000000140BC9563: jnb     short loc_140BC957E
 * 0000000140BC9565: mov     r8d, 9
 * 0000000140BC956B: lea     rcx, [rbp+8D0h+var_8B8]
 * 0000000140BC956F: mov     rdx, r15
 * 0000000140BC9572: call    sub_140BE196C
 * 0000000140BC9577: mov     ecx, eax
 * 0000000140BC9579: jmp     loc_140BCB4B1
 * 0000000140BC957E: mov     rax, [rsi+200h]
 * 0000000140BC9585: lea     r9, [rbp+8D0h+var_914]
 * 0000000140BC9589: xor     r8d, r8d
 * 0000000140BC958C: mov     [rbp+8D0h+var_6A8], r13
 * 0000000140BC9593: mov     dl, r12b
 * 0000000140BC9596: mov     [rbp+8D0h+var_7D0], r13d
 * 0000000140BC959D: mov     rcx, r15
 * 0000000140BC95A0: call    KeGuardDispatchICall
 * 0000000140BC95A5: mov     rcx, rax
 * 0000000140BC95A8: test    rax, rax
 * 0000000140BC95AB: jnz     short loc_140BC95B5
 * 0000000140BC95AD: mov     eax, r13d
 * 0000000140BC95B0: mov     [rbp+8D0h+var_914], eax
 * 0000000140BC95B3: jmp     short loc_140BC95B8
 * 0000000140BC95B5: mov     eax, [rbp+8D0h+var_914]
 * 0000000140BC95B8: mov     [rbp+8D0h+var_6C0], rcx
 * 0000000140BC95BF: lea     r9, [rbp+8D0h+var_914]
 * 0000000140BC95C3: mov     [rbp+8D0h+var_7DC], eax
 * 0000000140BC95C9: mov     rcx, r15
 * 0000000140BC95CC: mov     rax, [rsi+200h]
 * 0000000140BC95D3: mov     r8d, 0Ch
 * 0000000140BC95D9: mov     dl, r12b
 * 0000000140BC95DC: call    KeGuardDispatchICall
 * 0000000140BC95E1: mov     [rbp+8D0h+var_920], rax
 * 0000000140BC95E5: mov     rcx, rax
 * 0000000140BC95E8: test    rax, rax
 * 0000000140BC95EB: jnz     short loc_140BC95F5
 * 0000000140BC95ED: mov     eax, r13d
 * 0000000140BC95F0: mov     [rbp+8D0h+var_914], eax
 * 0000000140BC95F3: jmp     short loc_140BC95F8
 * 0000000140BC95F5: mov     eax, [rbp+8D0h+var_914]
 * 0000000140BC95F8: mov     dword ptr [rbp+8D0h+arg_8], eax
 * 0000000140BC95FE: lea     r9, [rbp+8D0h+var_914]
 * 0000000140BC9602: mov     [rbp+8D0h+var_6B8], rcx
 * 0000000140BC9609: mov     r8d, 0Ah
 * 0000000140BC960F: mov     [rbp+8D0h+var_7D8], eax
 * 0000000140BC9615: mov     rcx, r15
 * 0000000140BC9618: mov     rax, [rsi+200h]
 * 0000000140BC961F: mov     dl, r12b
 * 0000000140BC9622: call    KeGuardDispatchICall
 * 0000000140BC9627: mov     rcx, rax
 * 0000000140BC962A: test    rax, rax
 * 0000000140BC962D: jnz     short loc_140BC9637
 * 0000000140BC962F: mov     eax, r13d
 * 0000000140BC9632: mov     [rbp+8D0h+var_914], eax
 * 0000000140BC9635: jmp     short loc_140BC963A
 * 0000000140BC9637: mov     eax, [rbp+8D0h+var_914]
 * 0000000140BC963A: mov     [rbp+8D0h+var_6B0], rcx
 * 0000000140BC9641: mov     rcx, r15
 * 0000000140BC9644: mov     [rbp+8D0h+var_7D4], eax
 * 0000000140BC964A: mov     rax, [rsi+208h]
 * 0000000140BC9651: call    KeGuardDispatchICall
 * 0000000140BC9656: mov     rbx, rax
 * 0000000140BC9659: test    rax, rax
 * 0000000140BC965C: jnz     loc_140BC9784
 * 0000000140BC9662: mov     ecx, [rsi+9D8h]
 * 0000000140BC9668: bt      ecx, 14h
 * 0000000140BC966C: jnb     loc_140BD54DC
 * 0000000140BC9672: cmp     [rsi+918h], r13d
 * 0000000140BC9679: jnz     loc_140BC977A
 * 0000000140BC967F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC9689: add     rax, rsi
 * 0000000140BC968C: bt      ecx, 1Dh
 * 0000000140BC9690: mov     [rsi+920h], rax
 * 0000000140BC9697: mov     [rsi+928h], r13
 * 0000000140BC969E: mov     qword ptr [rsi+930h], 10Fh
 * 0000000140BC96A9: mov     [rsi+938h], r15
 * 0000000140BC96B0: mov     [rsi+918h], r12d
 * 0000000140BC96B7: jb      loc_140BC977A
 * 0000000140BC96BD: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC96C7: jz      loc_140BC977A
 * 0000000140BC96CD: test    r12b, cl
 * 0000000140BC96D0: jz      loc_140BC977A
 * 0000000140BC96D6: mov     ecx, [rsi+0A74h]
 * 0000000140BC96DC: mov     eax, [rsi+804h]
 * 0000000140BC96E2: mov     r10, [rsi+838h]
 * 0000000140BC96E9: sub     eax, ecx
 * 0000000140BC96EB: mov     r8, [rsi+0A78h]
 * 0000000140BC96F2: lea     rdx, [rcx+rsi]
 * 0000000140BC96F6: mov     ecx, eax
 * 0000000140BC96F8: shr     rcx, 3
 * 0000000140BC96FC: lea     r9, [rdx+rcx*8]
 * 0000000140BC9700: jmp     short loc_140BC9723
 * 0000000140BC9702: xor     [rdx], r8
 * 0000000140BC9705: mov     rax, [rdx]
 * 0000000140BC9708: movzx   ecx, r8b
 * 0000000140BC970C: xor     rax, r10
 * 0000000140BC970F: and     ecx, 3Fh
 * 0000000140BC9712: ror     r8, cl
 * 0000000140BC9715: add     r8, rax
 * 0000000140BC9718: xor     r8, 0EFAh
 * 0000000140BC971F: add     rdx, 8
 * 0000000140BC9723: cmp     rdx, r9
 * 0000000140BC9726: jnz     short loc_140BC9702
 * 0000000140BC9728: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC9730: cmp     r8, [rsi+0A80h]
 * 0000000140BC9737: jz      short loc_140BC977A
 * 0000000140BC9739: mov     ecx, [rsi+804h]
 * 0000000140BC973F: mov     rax, [rsi+588h]
 * 0000000140BC9746: mov     [rax], rsi
 * 0000000140BC9749: mov     [rax+10h], ecx
 * 0000000140BC974C: mov     rcx, [rsi+0A80h]
 * 0000000140BC9753: cmp     [rsi+918h], r13d
 * 0000000140BC975A: jnz     short loc_140BC976A
 * 0000000140BC975C: mov     rax, [rsi+588h]
 * 0000000140BC9763: xor     rcx, r8
 * 0000000140BC9766: mov     [rax+18h], rcx
 * 0000000140BC976A: mov     rcx, rsi
 * 0000000140BC976D: xor     edx, edx
 * 0000000140BC976F: mov     r9d, 100h
 * 0000000140BC9775: call    sub_140BDA384
 * 0000000140BC977A: mov     ecx, 0C000007Bh
 * 0000000140BC977F: jmp     loc_140BCB4B1
 * 0000000140BC9784: mov     rax, [rsi+498h]
 * 0000000140BC978B: lea     rdx, [rbp+8D0h+var_6F0]
 * 0000000140BC9792: mov     rcx, r15
 * 0000000140BC9795: call    KeGuardDispatchICall
 * 0000000140BC979A: mov     r8d, [rsi+944h]
 * 0000000140BC97A1: mov     [rbp+8D0h+var_6A0], rax
 * 0000000140BC97A8: mov     eax, [rbp+8D0h+var_6F0]
 * 0000000140BC97AE: mov     [rbp+8D0h+var_7CC], eax
 * 0000000140BC97B4: mov     eax, [rbx+54h]
 * 0000000140BC97B7: mov     [rbp+8D0h+var_6C8], r15
 * 0000000140BC97BE: mov     r15d, [rsi+804h]
 * 0000000140BC97C5: mov     [rbp+8D0h+var_7E0], eax
 * 0000000140BC97CB: lea     eax, [r15+120h]
 * 0000000140BC97D2: cmp     eax, [rsi+0A64h]
 * 0000000140BC97D8: jbe     loc_140BC98C4
 * 0000000140BC97DE: mov     edx, eax
 * 0000000140BC97E0: mov     rcx, rsi
 * 0000000140BC97E3: call    sub_140BD9AF8
 * 0000000140BC97E8: mov     [rsp+9D0h+var_978], rax
 * 0000000140BC97ED: mov     r14, rax
 * 0000000140BC97F0: test    rax, rax
 * 0000000140BC97F3: jnz     short loc_140BC97FE
 * 0000000140BC97F5: mov     [rbp+8D0h+var_8C0], r13
 * 0000000140BC97F9: jmp     loc_140BC9AC2
 * 0000000140BC97FE: mov     ecx, [rsi+9D8h]
 * 0000000140BC9804: mov     eax, 2
 * 0000000140BC9809: test    al, cl
 * 0000000140BC980B: jnz     loc_140BC98BA
 * 0000000140BC9811: mov     eax, [rsi+804h]
 * 0000000140BC9817: and     ecx, 10000000h
 * 0000000140BC981D: mov     r9, [rsi+7E8h]
 * 0000000140BC9824: neg     ecx
 * 0000000140BC9826: mov     rcx, rsi
 * 0000000140BC9829: sbb     r8d, r8d
 * 0000000140BC982C: and     r8d, [rsi+944h]
 * 0000000140BC9833: cmp     eax, 8
 * 0000000140BC9836: jb      short loc_140BC984D
 * 0000000140BC9838: mov     edx, eax
 * 0000000140BC983A: shr     rdx, 3
 * 0000000140BC983E: mov     [rcx], r13
 * 0000000140BC9841: add     eax, 0FFFFFFF8h
 * 0000000140BC9844: add     rcx, 8
 * 0000000140BC9848: sub     rdx, r12
 * 0000000140BC984B: jnz     short loc_140BC983E
 * 0000000140BC984D: test    eax, eax
 * 0000000140BC984F: jz      short loc_140BC9860
 * 0000000140BC9851: mov     edx, 0FFFFFFFFh
 * 0000000140BC9856: mov     [rcx], r13b
 * 0000000140BC9859: add     rcx, r12
 * 0000000140BC985C: add     eax, edx
 * 0000000140BC985E: jnz     short loc_140BC9856
 * 0000000140BC9860: mov     ebx, [r14+944h]
 * 0000000140BC9867: mov     [r14+944h], r8d
 * 0000000140BC986E: cmp     r8d, 3
 * 0000000140BC9872: jz      short loc_140BC98A4
 * 0000000140BC9874: test    dword ptr [r14+9D8h], 8000000h
 * 0000000140BC987F: jnz     short loc_140BC989B
 * 0000000140BC9881: test    r8d, r8d
 * 0000000140BC9884: jz      short loc_140BC989B
 * 0000000140BC9886: mov     rax, [r14+238h]
 * 0000000140BC988D: lea     rcx, [r9-8]
 * 0000000140BC9891: mov     rdx, [rcx]
 * 0000000140BC9894: call    KeGuardDispatchICall
 * 0000000140BC9899: jmp     short loc_140BC98B3
 * 0000000140BC989B: mov     rax, [r14+108h]
 * 0000000140BC98A2: jmp     short loc_140BC98AB
 * 0000000140BC98A4: mov     rax, [r14+368h]
 * 0000000140BC98AB: mov     rcx, r9
 * 0000000140BC98AE: call    KeGuardDispatchICall
 * 0000000140BC98B3: mov     [r14+944h], ebx
 * 0000000140BC98BA: and     dword ptr [r14+9D8h], 0FFFFFFFDh
 * 0000000140BC98C2: jmp     short loc_140BC98D2
 * 0000000140BC98C4: mov     r14, rsi
 * 0000000140BC98C7: mov     [rsp+9D0h+var_978], rsi
 * 0000000140BC98CC: mov     [rsi+804h], eax
 * 0000000140BC98D2: mov     eax, 6
 * 0000000140BC98D7: lea     r12, [r14+r15]
 * 0000000140BC98DB: add     [r14+82Ch], eax
 * 0000000140BC98E2: lea     rdi, [rbp+8D0h+var_6C8]
 * 0000000140BC98E9: mov     [rbp+8D0h+var_7A8], r12
 * 0000000140BC98F0: lea     rsi, [rbp+8D0h+var_7E0]
 * 0000000140BC98F7: mov     [rbp+8D0h+var_8B0], r12
 * 0000000140BC98FB: xor     r10d, r10d
 * 0000000140BC98FE: lea     ebx, [rax-5]
 * 0000000140BC9901: mov     [rsp+9D0h+var_968], rdi
 * 0000000140BC9906: mov     [rbp+8D0h+var_940], rax
 * 0000000140BC990A: mov     r13d, [rsi]
 * 0000000140BC990D: mov     rdx, rax
 * 0000000140BC9910: mov     r15, [rdi]
 * 0000000140BC9913: mov     ecx, 30h ; '0'
 * 0000000140BC9918: mov     [rsp+9D0h+var_958], r13d
 * 0000000140BC991D: mov     rax, r12
 * 0000000140BC9920: mov     [rax], r10
 * 0000000140BC9923: add     ecx, 0FFFFFFF8h
 * 0000000140BC9926: add     rax, 8
 * 0000000140BC992A: sub     rdx, rbx
 * 0000000140BC992D: jnz     short loc_140BC9920
 * 0000000140BC992F: test    ecx, ecx
 * 0000000140BC9931: jz      short loc_140BC9942
 * 0000000140BC9933: mov     edx, 0FFFFFFFFh
 * 0000000140BC9938: mov     [rax], r10b
 * 0000000140BC993B: add     rax, rbx
 * 0000000140BC993E: add     ecx, edx
 * 0000000140BC9940: jnz     short loc_140BC9938
 * 0000000140BC9942: mov     [r12], r10d
 * 0000000140BC9946: lea     rcx, [r15+r13]
 * 0000000140BC994A: mov     [r12+8], r15
 * 0000000140BC994F: mov     r9, r15
 * 0000000140BC9952: mov     [r12+10h], r13d
 * 0000000140BC9957: mov     rax, r15
 * 0000000140BC995A: add     [r14+848h], r13d
 * 0000000140BC9961: mov     r11d, [r14+834h]
 * 0000000140BC9968: mov     rbx, [r14+838h]
 * 0000000140BC996F: cmp     r15, rcx
 * 0000000140BC9972: jnb     short loc_140BC9984
 * 0000000140BC9974: mov     edx, 40h ; '@'
 * 0000000140BC9979: prefetchnta byte ptr [rax]
 * 0000000140BC997C: add     rax, rdx
 * 0000000140BC997F: cmp     rax, rcx
 * 0000000140BC9982: jb      short loc_140BC9979
 * 0000000140BC9984: mov     r10d, r13d
 * 0000000140BC9987: mov     r8, rbx
 * 0000000140BC998A: shr     r10d, 7
 * 0000000140BC998E: test    r10d, r10d
 * 0000000140BC9991: jz      short loc_140BC9A09
 * 0000000140BC9993: mov     rdi, 7010008004002001h
 * 0000000140BC999D: mov     r14d, 1
 * 0000000140BC99A3: mov     r13d, 0FFFFFFFFh
 * 0000000140BC99A9: mov     eax, 8
 * 0000000140BC99AE: xor     r8, [r9]
 * 0000000140BC99B1: mov     ecx, r11d
 * 0000000140BC99B4: rol     r8, cl
 * 0000000140BC99B7: xor     r8, [r9+8]
 * 0000000140BC99BB: add     r9, 10h
 * 0000000140BC99BF: rol     r8, cl
 * 0000000140BC99C2: sub     rax, r14
 * 0000000140BC99C5: jnz     short loc_140BC99AE
 * 0000000140BC99C7: mov     rcx, r9
 * 0000000140BC99CA: sub     rcx, r15
 * 0000000140BC99CD: xor     rcx, rbx
 * 0000000140BC99D0: mov     rax, rcx
 * 0000000140BC99D3: rol     rax, 11h
 * 0000000140BC99D7: xor     rcx, rax
 * 0000000140BC99DA: mov     rax, rdi
 * 0000000140BC99DD: mul     rcx
 * 0000000140BC99E0: xor     r11d, eax
 * 0000000140BC99E3: mov     [rbp+8D0h+var_580], rdx
 * 0000000140BC99EA: xor     r11d, edx
 * 0000000140BC99ED: and     r11d, 3Fh
 * 0000000140BC99F1: cmovz   r11d, r14d
 * 0000000140BC99F5: add     r10d, r13d
 * 0000000140BC99F8: jnz     short loc_140BC99A9
 * 0000000140BC99FA: mov     r14, [rsp+9D0h+var_978]
 * 0000000140BC99FF: mov     r13d, [rsp+9D0h+var_958]
 * 0000000140BC9A04: mov     rdi, [rsp+9D0h+var_968]
 * 0000000140BC9A09: mov     edx, r13d
 * 0000000140BC9A0C: mov     ebx, 1
 * 0000000140BC9A11: and     edx, 7Fh
 * 0000000140BC9A14: cmp     edx, 8
 * 0000000140BC9A17: jb      short loc_140BC9A34
 * 0000000140BC9A19: mov     eax, edx
 * 0000000140BC9A1B: shr     rax, 3
 * 0000000140BC9A1F: xor     r8, [r9]
 * 0000000140BC9A22: mov     ecx, r11d
 * 0000000140BC9A25: rol     r8, cl
 * 0000000140BC9A28: add     r9, 8
 * 0000000140BC9A2C: add     edx, 0FFFFFFF8h
 * 0000000140BC9A2F: sub     rax, rbx
 * 0000000140BC9A32: jnz     short loc_140BC9A1F
 * 0000000140BC9A34: xor     r10d, r10d
 * 0000000140BC9A37: test    edx, edx
 * 0000000140BC9A39: jz      short loc_140BC9A5B
 * 0000000140BC9A3B: mov     r14d, 0FFFFFFFFh
 * 0000000140BC9A41: movzx   eax, byte ptr [r9]
 * 0000000140BC9A45: mov     ecx, r11d
 * 0000000140BC9A48: xor     r8, rax
 * 0000000140BC9A4B: add     r9, rbx
 * 0000000140BC9A4E: rol     r8, cl
 * 0000000140BC9A51: add     edx, r14d
 * 0000000140BC9A54: jnz     short loc_140BC9A41
 * 0000000140BC9A56: mov     r14, [rsp+9D0h+var_978]
 * 0000000140BC9A5B: mov     rax, r8
 * 0000000140BC9A5E: jmp     short loc_140BC9A63
 * 0000000140BC9A60: xor     r8d, eax
 * 0000000140BC9A63: shr     rax, 1Fh
 * 0000000140BC9A67: test    rax, rax
 * 0000000140BC9A6A: jnz     short loc_140BC9A60
 * 0000000140BC9A6C: btr     r8d, 1Fh
 * 0000000140BC9A71: lea     r15d, [rax+4]
 * 0000000140BC9A75: mov     [r12+14h], r8d
 * 0000000140BC9A7A: lea     eax, [r15+2]
 * 0000000140BC9A7E: add     [r14+848h], r13d
 * 0000000140BC9A85: add     rdi, 8
 * 0000000140BC9A89: mov     r12, [rbp+8D0h+var_7A8]
 * 0000000140BC9A90: add     rsi, r15
 * 0000000140BC9A93: add     r12, 30h ; '0'
 * 0000000140BC9A97: mov     [rsp+9D0h+var_968], rdi
 * 0000000140BC9A9C: sub     [rbp+8D0h+var_940], rbx
 * 0000000140BC9AA0: mov     [rbp+8D0h+var_7A8], r12
 * 0000000140BC9AA7: jnz     loc_140BC990A
 * 0000000140BC9AAD: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC9AB2: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC9AB9: mov     [rbp+8D0h+var_8C0], r14
 * 0000000140BC9ABD: test    r14, r14
 * 0000000140BC9AC0: jnz     short loc_140BC9ACC
 * 0000000140BC9AC2: mov     ecx, 0C000009Ah
 * 0000000140BC9AC7: jmp     loc_140BCB4B1
 * 0000000140BC9ACC: mov     rbx, [rbp+8D0h+var_8B0]
 * 0000000140BC9AD0: mov     r12, [rbp+8D0h+var_910]
 * 0000000140BC9AD4: mov     dword ptr [rbx], 2Ch ; ','
 * 0000000140BC9ADA: mov     [rbx+18h], r12
 * 0000000140BC9ADE: test    dword ptr [r14+9D8h], 8100000h
 * 0000000140BC9AE9: jnz     short loc_140BC9B11
 * 0000000140BC9AEB: bt      dword ptr [r14+9DCh], 0Fh
 * 0000000140BC9AF4: jnb     short loc_140BC9B11
 * 0000000140BC9AF6: mov     ecx, 1
 * 0000000140BC9AFB: mov     rdx, r12
 * 0000000140BC9AFE: or      [rbx+20h], ecx
 * 0000000140BC9B01: mov     rcx, r14
 * 0000000140BC9B04: call    sub_140BDAD30
 * 0000000140BC9B09: test    eax, eax
 * 0000000140BC9B0B: jz      short loc_140BC9B11
 * 0000000140BC9B0D: or      [rbx+20h], r15d
 * 0000000140BC9B11: mov     r8d, dword ptr [rsp+9D0h+var_960]
 * 0000000140BC9B16: lea     rax, [rbp+8D0h+var_830]
 * 0000000140BC9B1D: mov     rdx, [rbp+8D0h+var_930]
 * 0000000140BC9B21: lea     rcx, [rbp+8D0h+var_8C0]
 * 0000000140BC9B25: mov     [rsp+9D0h+var_9A0], rax
 * 0000000140BC9B2A: mov     r9, r12
 * 0000000140BC9B2D: lea     rax, [rbp+8D0h+var_884]
 * 0000000140BC9B31: mov     [rbp+8D0h+var_8B8], r14
 * 0000000140BC9B35: mov     [rsp+9D0h+var_9A8], rax
 * 0000000140BC9B3A: mov     dword ptr [rsp+9D0h+BugCheckParameter4], 9
 * 0000000140BC9B42: call    sub_140BD80B0
 * 0000000140BC9B47: xor     r8d, r8d
 * 0000000140BC9B4A: mov     ecx, eax
 * 0000000140BC9B4C: test    eax, eax
 * 0000000140BC9B4E: js      loc_140BCB4B1
 * 0000000140BC9B54: mov     rbx, [rbp+8D0h+var_8C0]
 * 0000000140BC9B58: lea     r10d, [r8+1]
 * 0000000140BC9B5C: mov     rcx, [rbp+8D0h+var_8B0]
 * 0000000140BC9B60: mov     rax, rbx
 * 0000000140BC9B63: mov     r9d, [rbp+8D0h+var_830]
 * 0000000140BC9B6A: sub     rax, r14
 * 0000000140BC9B6D: sub     r9d, [rbp+8D0h+var_884]
 * 0000000140BC9B71: add     rcx, rax
 * 0000000140BC9B74: mov     r15d, [rbp+8D0h+var_884]
 * 0000000140BC9B78: mov     [rbp+8D0h+var_8B0], rcx
 * 0000000140BC9B7C: add     r15, r12
 * 0000000140BC9B7F: mov     [rbp+8D0h+var_8B8], rbx
 * 0000000140BC9B83: lea     r13, [rcx+0C0h]
 * 0000000140BC9B8A: lea     ecx, [r8+30h]
 * 0000000140BC9B8E: mov     rax, r13
 * 0000000140BC9B91: lea     edx, [rcx-2Ah]
 * 0000000140BC9B94: mov     [rax], r8
 * 0000000140BC9B97: add     ecx, 0FFFFFFF8h
 * 0000000140BC9B9A: add     rax, 8
 * 0000000140BC9B9E: sub     rdx, r10
 * 0000000140BC9BA1: jnz     short loc_140BC9B94
 * 0000000140BC9BA3: mov     rdx, r10
 * 0000000140BC9BA6: test    ecx, ecx
 * 0000000140BC9BA8: jz      short loc_140BC9BBB
 * 0000000140BC9BAA: mov     r10d, 0FFFFFFFFh
 * 0000000140BC9BB0: mov     [rax], r8b
 * 0000000140BC9BB3: add     rax, rdx
 * 0000000140BC9BB6: add     ecx, r10d
 * 0000000140BC9BB9: jnz     short loc_140BC9BB0
 * 0000000140BC9BBB: mov     [r13+0], r8d
 * 0000000140BC9BBF: mov     r10, r15
 * 0000000140BC9BC2: mov     [r13+8], r15
 * 0000000140BC9BC6: mov     rax, r15
 * 0000000140BC9BC9: mov     [r13+10h], r9d
 * 0000000140BC9BCD: add     [rbx+848h], r9d
 * 0000000140BC9BD4: mov     r11d, [rbx+834h]
 * 0000000140BC9BDB: mov     r12, [rbx+838h]
 * 0000000140BC9BE2: mov     ecx, r9d
 * 0000000140BC9BE5: add     rcx, r15
 * 0000000140BC9BE8: cmp     r15, rcx
 * 0000000140BC9BEB: jnb     short loc_140BC9BFE
 * 0000000140BC9BED: mov     r8d, 40h ; '@'
 * 0000000140BC9BF3: prefetchnta byte ptr [rax]
 * 0000000140BC9BF6: add     rax, r8
 * 0000000140BC9BF9: cmp     rax, rcx
 * 0000000140BC9BFC: jb      short loc_140BC9BF3
 * 0000000140BC9BFE: mov     r14d, r9d
 * 0000000140BC9C01: mov     r8, r12
 * 0000000140BC9C04: shr     r14d, 7
 * 0000000140BC9C08: test    r14d, r14d
 * 0000000140BC9C0B: jz      short loc_140BC9C7E
 * 0000000140BC9C0D: mov     esi, 0FFFFFFFFh
 * 0000000140BC9C12: mov     rdi, 7010008004002001h
 * 0000000140BC9C1C: mov     eax, 8
 * 0000000140BC9C21: xor     r8, [r10]
 * 0000000140BC9C24: mov     ecx, r11d
 * 0000000140BC9C27: rol     r8, cl
 * 0000000140BC9C2A: xor     r8, [r10+8]
 * 0000000140BC9C2E: add     r10, 10h
 * 0000000140BC9C32: rol     r8, cl
 * 0000000140BC9C35: sub     rax, rdx
 * 0000000140BC9C38: jnz     short loc_140BC9C21
 * 0000000140BC9C3A: mov     rcx, r10
 * 0000000140BC9C3D: sub     rcx, r15
 * 0000000140BC9C40: xor     rcx, r12
 * 0000000140BC9C43: mov     rax, rcx
 * 0000000140BC9C46: rol     rax, 11h
 * 0000000140BC9C4A: xor     rcx, rax
 * 0000000140BC9C4D: mov     rax, rdi
 * 0000000140BC9C50: mul     rcx
 * 0000000140BC9C53: xor     r11d, edx
 * 0000000140BC9C56: mov     [rbp+8D0h+var_578], rdx
 * 0000000140BC9C5D: xor     r11d, eax
 * 0000000140BC9C60: mov     edx, 1
 * 0000000140BC9C65: and     r11d, 3Fh
 * 0000000140BC9C69: cmovz   r11d, edx
 * 0000000140BC9C6D: add     r14d, esi
 * 0000000140BC9C70: jnz     short loc_140BC9C1C
 * 0000000140BC9C72: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC9C77: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC9C7E: and     r9d, 7Fh
 * 0000000140BC9C82: mov     r12d, 1
 * 0000000140BC9C88: cmp     r9d, 8
 * 0000000140BC9C8C: jb      short loc_140BC9CAB
 * 0000000140BC9C8E: mov     eax, r9d
 * 0000000140BC9C91: shr     rax, 3
 * 0000000140BC9C95: xor     r8, [r10]
 * 0000000140BC9C98: mov     ecx, r11d
 * 0000000140BC9C9B: rol     r8, cl
 * 0000000140BC9C9E: add     r10, 8
 * 0000000140BC9CA2: add     r9d, 0FFFFFFF8h
 * 0000000140BC9CA6: sub     rax, r12
 * 0000000140BC9CA9: jnz     short loc_140BC9C95
 * 0000000140BC9CAB: xor     r15d, r15d
 * 0000000140BC9CAE: test    r9d, r9d
 * 0000000140BC9CB1: jz      short loc_140BC9CD2
 * 0000000140BC9CB3: mov     esi, 0FFFFFFFFh
 * 0000000140BC9CB8: movzx   eax, byte ptr [r10]
 * 0000000140BC9CBC: mov     ecx, r11d
 * 0000000140BC9CBF: xor     r8, rax
 * 0000000140BC9CC2: add     r10, r12
 * 0000000140BC9CC5: rol     r8, cl
 * 0000000140BC9CC8: add     r9d, esi
 * 0000000140BC9CCB: jnz     short loc_140BC9CB8
 * 0000000140BC9CCD: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC9CD2: mov     rax, r8
 * 0000000140BC9CD5: jmp     short loc_140BC9CDA
 * 0000000140BC9CD7: xor     r8d, eax
 * 0000000140BC9CDA: shr     rax, 1Fh
 * 0000000140BC9CDE: test    rax, rax
 * 0000000140BC9CE1: jnz     short loc_140BC9CD7
 * 0000000140BC9CE3: btr     r8d, 1Fh
 * 0000000140BC9CE8: mov     [rbp+8D0h+var_8B8], rbx
 * 0000000140BC9CEC: mov     [r13+14h], r8d
 * 0000000140BC9CF0: mov     rax, [rbp+8D0h+var_8B0]
 * 0000000140BC9CF4: mov     dword ptr [rax+0F0h], 30h ; '0'
 * 0000000140BC9CFE: mov     rax, [rbp+8D0h+var_8B0]
 * 0000000140BC9D02: add     rax, 60h ; '`'
 * 0000000140BC9D06: mov     [rbp+8D0h+var_860], rax
 * 0000000140BC9D0A: jnz     loc_140BC9FAA
 * 0000000140BC9D10: mov     r14d, [rbx+804h]
 * 0000000140BC9D17: mov     r8d, [rbx+944h]
 * 0000000140BC9D1E: lea     eax, [r14+30h]
 * 0000000140BC9D22: cmp     eax, [rbx+0A64h]
 * 0000000140BC9D28: jbe     loc_140BC9E0D
 * 0000000140BC9D2E: mov     edx, eax
 * 0000000140BC9D30: mov     rcx, rbx
 * 0000000140BC9D33: call    sub_140BD9AF8
 * 0000000140BC9D38: mov     [rsp+9D0h+var_968], rax
 * 0000000140BC9D3D: mov     r13, rax
 * 0000000140BC9D40: test    rax, rax
 * 0000000140BC9D43: jnz     short loc_140BC9D4E
 * 0000000140BC9D45: mov     [rbp+8D0h+var_8C0], r15
 * 0000000140BC9D49: jmp     loc_140BC9AC2
 * 0000000140BC9D4E: mov     ecx, [rbx+9D8h]
 * 0000000140BC9D54: mov     eax, 2
 * 0000000140BC9D59: test    al, cl
 * 0000000140BC9D5B: jnz     loc_140BC9E03
 * 0000000140BC9D61: mov     eax, [rbx+804h]
 * 0000000140BC9D67: and     ecx, 10000000h
 * 0000000140BC9D6D: mov     r8, [rbx+7E8h]
 * 0000000140BC9D74: neg     ecx
 * 0000000140BC9D76: sbb     edx, edx
 * 0000000140BC9D78: and     edx, [rbx+944h]
 * 0000000140BC9D7E: cmp     eax, 8
 * 0000000140BC9D81: jb      short loc_140BC9D98
 * 0000000140BC9D83: mov     ecx, eax
 * 0000000140BC9D85: shr     rcx, 3
 * 0000000140BC9D89: mov     [rbx], r15
 * 0000000140BC9D8C: add     eax, 0FFFFFFF8h
 * 0000000140BC9D8F: add     rbx, 8
 * 0000000140BC9D93: sub     rcx, r12
 * 0000000140BC9D96: jnz     short loc_140BC9D89
 * 0000000140BC9D98: test    eax, eax
 * 0000000140BC9D9A: jz      short loc_140BC9DAB
 * 0000000140BC9D9C: mov     ecx, 0FFFFFFFFh
 * 0000000140BC9DA1: mov     [rbx], r15b
 * 0000000140BC9DA4: add     rbx, r12
 * 0000000140BC9DA7: add     eax, ecx
 * 0000000140BC9DA9: jnz     short loc_140BC9DA1
 * 0000000140BC9DAB: mov     ebx, [r13+944h]
 * 0000000140BC9DB2: mov     [r13+944h], edx
 * 0000000140BC9DB9: cmp     edx, 3
 * 0000000140BC9DBC: jz      short loc_140BC9DED
 * 0000000140BC9DBE: test    dword ptr [r13+9D8h], 8000000h
 * 0000000140BC9DC9: jnz     short loc_140BC9DE4
 * 0000000140BC9DCB: test    edx, edx
 * 0000000140BC9DCD: jz      short loc_140BC9DE4
 * 0000000140BC9DCF: mov     rax, [r13+238h]
 * 0000000140BC9DD6: lea     rcx, [r8-8]
 * 0000000140BC9DDA: mov     rdx, [rcx]
 * 0000000140BC9DDD: call    KeGuardDispatchICall
 * 0000000140BC9DE2: jmp     short loc_140BC9DFC
 * 0000000140BC9DE4: mov     rax, [r13+108h]
 * 0000000140BC9DEB: jmp     short loc_140BC9DF4
 * 0000000140BC9DED: mov     rax, [r13+368h]
 * 0000000140BC9DF4: mov     rcx, r8
 * 0000000140BC9DF7: call    KeGuardDispatchICall
 * 0000000140BC9DFC: mov     [r13+944h], ebx
 * 0000000140BC9E03: and     dword ptr [r13+9D8h], 0FFFFFFFDh
 * 0000000140BC9E0B: jmp     short loc_140BC9E1B
 * 0000000140BC9E0D: mov     r13, rbx
 * 0000000140BC9E10: mov     [rsp+9D0h+var_968], rbx
 * 0000000140BC9E15: mov     [rbx+804h], eax
 * 0000000140BC9E1B: add     [r13+82Ch], r12d
 * 0000000140BC9E22: mov     ecx, 30h ; '0'
 * 0000000140BC9E27: add     r14, r13
 * 0000000140BC9E2A: mov     [rbp+8D0h+var_708], r14
 * 0000000140BC9E31: mov     rax, r14
 * 0000000140BC9E34: lea     edx, [rcx-2Ah]
 * 0000000140BC9E37: mov     [rax], r15
 * 0000000140BC9E3A: add     ecx, 0FFFFFFF8h
 * 0000000140BC9E3D: add     rax, 8
 * 0000000140BC9E41: sub     rdx, r12
 * 0000000140BC9E44: jnz     short loc_140BC9E37
 * 0000000140BC9E46: test    ecx, ecx
 * 0000000140BC9E48: jz      short loc_140BC9E59
 * 0000000140BC9E4A: mov     edx, 0FFFFFFFFh
 * 0000000140BC9E4F: mov     [rax], r15b
 * 0000000140BC9E52: add     rax, r12
 * 0000000140BC9E55: add     ecx, edx
 * 0000000140BC9E57: jnz     short loc_140BC9E4F
 * 0000000140BC9E59: mov     r12, [rbp+8D0h+var_920]
 * 0000000140BC9E5D: mov     r15d, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BC9E64: mov     r9, r12
 * 0000000140BC9E67: mov     dword ptr [r14], 0Dh
 * 0000000140BC9E6E: mov     [r14+8], r12
 * 0000000140BC9E72: mov     [r14+10h], r15d
 * 0000000140BC9E76: add     [r13+848h], r15d
 * 0000000140BC9E7D: lea     rcx, [r12+r15]
 * 0000000140BC9E81: mov     r10d, [r13+834h]
 * 0000000140BC9E88: mov     rbx, [r13+838h]
 * 0000000140BC9E8F: cmp     r12, rcx
 * 0000000140BC9E92: jnb     short loc_140BC9EA7
 * 0000000140BC9E94: mov     rax, r12
 * 0000000140BC9E97: mov     edx, 40h ; '@'
 * 0000000140BC9E9C: prefetchnta byte ptr [rax]
 * 0000000140BC9E9F: add     rax, rdx
 * 0000000140BC9EA2: cmp     rax, rcx
 * 0000000140BC9EA5: jb      short loc_140BC9E9C
 * 0000000140BC9EA7: mov     r11d, r15d
 * 0000000140BC9EAA: mov     r8, rbx
 * 0000000140BC9EAD: shr     r11d, 7
 * 0000000140BC9EB1: test    r11d, r11d
 * 0000000140BC9EB4: jz      short loc_140BC9F2F
 * 0000000140BC9EB6: mov     esi, 1
 * 0000000140BC9EBB: mov     rdi, 7010008004002001h
 * 0000000140BC9EC5: mov     r15d, 0FFFFFFFFh
 * 0000000140BC9ECB: mov     eax, 8
 * 0000000140BC9ED0: xor     r8, [r9]
 * 0000000140BC9ED3: mov     ecx, r10d
 * 0000000140BC9ED6: rol     r8, cl
 * 0000000140BC9ED9: xor     r8, [r9+8]
 * 0000000140BC9EDD: add     r9, 10h
 * 0000000140BC9EE1: rol     r8, cl
 * 0000000140BC9EE4: sub     rax, rsi
 * 0000000140BC9EE7: jnz     short loc_140BC9ED0
 * 0000000140BC9EE9: mov     rcx, r9
 * 0000000140BC9EEC: sub     rcx, r12
 * 0000000140BC9EEF: xor     rcx, rbx
 * 0000000140BC9EF2: mov     rax, rcx
 * 0000000140BC9EF5: rol     rax, 11h
 * 0000000140BC9EF9: xor     rcx, rax
 * 0000000140BC9EFC: mov     rax, rdi
 * 0000000140BC9EFF: mul     rcx
 * 0000000140BC9F02: xor     r10d, edx
 * 0000000140BC9F05: mov     [rbp+8D0h+var_570], rdx
 * 0000000140BC9F0C: xor     r10d, eax
 * 0000000140BC9F0F: and     r10d, 3Fh
 * 0000000140BC9F13: cmovz   r10d, esi
 * 0000000140BC9F17: add     r11d, r15d
 * 0000000140BC9F1A: jnz     short loc_140BC9ECB
 * 0000000140BC9F1C: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC9F21: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC9F28: mov     r15d, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BC9F2F: mov     edx, r15d
 * 0000000140BC9F32: mov     ebx, 1
 * 0000000140BC9F37: and     edx, 7Fh
 * 0000000140BC9F3A: cmp     edx, 8
 * 0000000140BC9F3D: jb      short loc_140BC9F5A
 * 0000000140BC9F3F: mov     eax, edx
 * 0000000140BC9F41: shr     rax, 3
 * 0000000140BC9F45: xor     r8, [r9]
 * 0000000140BC9F48: mov     ecx, r10d
 * 0000000140BC9F4B: rol     r8, cl
 * 0000000140BC9F4E: add     r9, 8
 * 0000000140BC9F52: add     edx, 0FFFFFFF8h
 * 0000000140BC9F55: sub     rax, rbx
 * 0000000140BC9F58: jnz     short loc_140BC9F45
 * 0000000140BC9F5A: test    edx, edx
 * 0000000140BC9F5C: jz      short loc_140BC9F7C
 * 0000000140BC9F5E: mov     esi, 0FFFFFFFFh
 * 0000000140BC9F63: movzx   eax, byte ptr [r9]
 * 0000000140BC9F67: mov     ecx, r10d
 * 0000000140BC9F6A: xor     r8, rax
 * 0000000140BC9F6D: add     r9, rbx
 * 0000000140BC9F70: rol     r8, cl
 * 0000000140BC9F73: add     edx, esi
 * 0000000140BC9F75: jnz     short loc_140BC9F63
 * 0000000140BC9F77: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC9F7C: mov     rax, r8
 * 0000000140BC9F7F: jmp     short loc_140BC9F84
 * 0000000140BC9F81: xor     r8d, eax
 * 0000000140BC9F84: shr     rax, 1Fh
 * 0000000140BC9F88: test    rax, rax
 * 0000000140BC9F8B: jnz     short loc_140BC9F81
 * 0000000140BC9F8D: btr     r8d, 1Fh
 * 0000000140BC9F92: mov     [r14+14h], r8d
 * 0000000140BC9F96: mov     rax, [rbp+8D0h+var_708]
 * 0000000140BC9F9D: mov     [rbp+8D0h+var_860], rax
 * 0000000140BC9FA1: add     [r13+848h], r15d
 * 0000000140BC9FA8: jmp     short loc_140BC9FC3
 * 0000000140BC9FAA: mov     r15d, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BC9FB1: mov     r13, rbx
 * 0000000140BC9FB4: mov     r12, [rbp+8D0h+var_920]
 * 0000000140BC9FB8: mov     [rsp+9D0h+var_968], rbx
 * 0000000140BC9FBD: mov     dword ptr [rax], 0Dh
 * 0000000140BC9FC3: test    dword ptr [r13+9D8h], 20000000h
 * 0000000140BC9FCE: jz      short loc_140BC9FEB
 * 0000000140BC9FD0: test    r15d, r15d
 * 0000000140BC9FD3: jz      short loc_140BC9FEB
 * 0000000140BC9FD5: mov     r9, [rbp+8D0h+var_860]
 * 0000000140BC9FD9: mov     r8d, r15d
 * 0000000140BC9FDC: add     r9, 1Ch
 * 0000000140BC9FE0: mov     rdx, r12
 * 0000000140BC9FE3: mov     rcx, r13
 * 0000000140BC9FE6: call    sub_140516B3C
 * 0000000140BC9FEB: mov     rax, [rbp+8D0h+var_860]
 * 0000000140BC9FEF: xor     r15d, r15d
 * 0000000140BC9FF2: mov     [rbp+8D0h+var_8C0], r13
 * 0000000140BC9FF6: mov     [rax+18h], r15d
 * 0000000140BC9FFA: lea     r12d, [r15+1]
 * 0000000140BC9FFE: mov     rax, [rbp+8D0h+var_860]
 * 0000000140BCA002: or      [rax+18h], r12d
 * 0000000140BCA006: test    r13, r13
 * 0000000140BCA009: jz      loc_140BC9AC2
 * 0000000140BCA00F: mov     rbx, [rbp+8D0h+var_8B0]
 * 0000000140BCA013: mov     [rbp+8D0h+var_8B8], r13
 * 0000000140BCA017: mov     dword ptr [rbx+90h], 23h ; '#'
 * 0000000140BCA021: cmp     dword ptr [rbx+0A0h], 94h
 * 0000000140BCA02B: jb      loc_140BCA1C9
 * 0000000140BCA031: mov     r15, [rbp+8D0h+var_910]
 * 0000000140BCA035: mov     rax, [r13+208h]
 * 0000000140BCA03C: mov     rcx, r15
 * 0000000140BCA03F: mov     r14, [rbx+98h]
 * 0000000140BCA046: call    KeGuardDispatchICall
 * 0000000140BCA04B: xor     ecx, ecx
 * 0000000140BCA04D: test    rax, rax
 * 0000000140BCA050: jnz     short loc_140BCA05B
 * 0000000140BCA052: mov     [rbp+8D0h+var_8C0], rcx
 * 0000000140BCA056: jmp     loc_140BC9AC2
 * 0000000140BCA05B: mov     r8d, [rax+50h]
 * 0000000140BCA05F: mov     edx, [rbx+0B8h]
 * 0000000140BCA065: add     r8, r15
 * 0000000140BCA068: or      edx, 2
 * 0000000140BCA06B: mov     [rbx+0B8h], edx
 * 0000000140BCA071: mov     ecx, edx
 * 0000000140BCA073: mov     rax, [r14+70h]
 * 0000000140BCA077: cmp     rax, r15
 * 0000000140BCA07A: jb      short loc_140BCA094
 * 0000000140BCA07C: cmp     rax, r8
 * 0000000140BCA07F: jnb     short loc_140BCA094
 * 0000000140BCA081: mov     rax, [rax]
 * 0000000140BCA084: or      ecx, 4
 * 0000000140BCA087: mov     [rbx+0A8h], rax
 * 0000000140BCA08E: mov     [rbx+0B8h], ecx
 * 0000000140BCA094: mov     rax, [r14+78h]
 * 0000000140BCA098: mov     r14, [rbp+8D0h+var_910]
 * 0000000140BCA09C: cmp     rax, r14
 * 0000000140BCA09F: jb      short loc_140BCA0B9
 * 0000000140BCA0A1: cmp     rax, r8
 * 0000000140BCA0A4: jnb     short loc_140BCA0B9
 * 0000000140BCA0A6: mov     rax, [rax]
 * 0000000140BCA0A9: or      ecx, 8
 * 0000000140BCA0AC: mov     [rbx+0B0h], rax
 * 0000000140BCA0B3: mov     [rbx+0B8h], ecx
 * 0000000140BCA0B9: xor     r15d, r15d
 * 0000000140BCA0BC: bt      dword ptr [r13+9D8h], 15h
 * 0000000140BCA0C5: mov     [rbp+8D0h+var_8B8], r13
 * 0000000140BCA0C9: jnb     loc_140BCB4AA
 * 0000000140BCA0CF: mov     rax, [r13+208h]
 * 0000000140BCA0D6: mov     rcx, r14
 * 0000000140BCA0D9: call    KeGuardDispatchICall
 * 0000000140BCA0DE: xor     r11d, r11d
 * 0000000140BCA0E1: mov     [rbp+8D0h+var_950], rax
 * 0000000140BCA0E5: mov     r15, rax
 * 0000000140BCA0E8: test    rax, rax
 * 0000000140BCA0EB: jz      loc_140BC977A
 * 0000000140BCA0F1: movzx   r10d, word ptr [r15+6]
 * 0000000140BCA0F6: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140BCA100: mov     ecx, dword ptr [rsp+9D0h+var_960]
 * 0000000140BCA104: mul     rcx
 * 0000000140BCA107: mov     word ptr [rbp+8D0h+arg_8], r10w
 * 0000000140BCA10F: mov     r9, rdx
 * 0000000140BCA112: shr     r9, 3
 * 0000000140BCA116: mov     [rbp+8D0h+var_940], r9
 * 0000000140BCA11A: test    r10w, r10w
 * 0000000140BCA11E: jnz     loc_140BCA248
 * 0000000140BCA124: mov     ecx, [r13+9D8h]
 * 0000000140BCA12B: bt      ecx, 14h
 * 0000000140BCA12F: jnb     loc_140BD5507
 * 0000000140BCA135: xor     r15d, r15d
 * 0000000140BCA138: cmp     [r13+918h], r15d
 * 0000000140BCA13F: jnz     loc_140BC977A
 * 0000000140BCA145: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BCA14F: add     rax, r13
 * 0000000140BCA152: mov     [r13+920h], rax
 * 0000000140BCA159: mov     [r13+928h], r15
 * 0000000140BCA160: mov     qword ptr [r13+930h], 10Fh
 * 0000000140BCA16B: mov     [r13+938h], r14
 * 0000000140BCA172: mov     [r13+918h], r12d
 * 0000000140BCA179: bt      ecx, 1Dh
 * 0000000140BCA17D: jb      loc_140BC977A
 * 0000000140BCA183: bt      dword ptr [r13+9DCh], 15h
 * 0000000140BCA18C: jnb     loc_140BC977A
 * 0000000140BCA192: test    r12b, cl
 * 0000000140BCA195: jz      loc_140BC977A
 * 0000000140BCA19B: mov     ecx, [r13+0A74h]
 * 0000000140BCA1A2: mov     eax, [r13+804h]
 * 0000000140BCA1A9: mov     r10, [r13+838h]
 * 0000000140BCA1B0: sub     eax, ecx
 * 0000000140BCA1B2: mov     r8, [r13+0A78h]
 * 0000000140BCA1B9: lea     rdx, [rcx+r13]
 * 0000000140BCA1BD: mov     ecx, eax
 * 0000000140BCA1BF: shr     rcx, 3
 * 0000000140BCA1C3: lea     r9, [rdx+rcx*8]
 * 0000000140BCA1C7: jmp     short loc_140BCA1F3
 * 0000000140BCA1C9: mov     r14, [rbp+8D0h+var_910]
 * 0000000140BCA1CD: jmp     loc_140BCA0BC
 * 0000000140BCA1D2: xor     [rdx], r8
 * 0000000140BCA1D5: mov     rax, [rdx]
 * 0000000140BCA1D8: movzx   ecx, r8b
 * 0000000140BCA1DC: xor     rax, r10
 * 0000000140BCA1DF: and     ecx, 3Fh
 * 0000000140BCA1E2: ror     r8, cl
 * 0000000140BCA1E5: add     r8, rax
 * 0000000140BCA1E8: xor     r8, 0EFAh
 * 0000000140BCA1EF: add     rdx, 8
 * 0000000140BCA1F3: cmp     rdx, r9
 * 0000000140BCA1F6: jnz     short loc_140BCA1D2
 * 0000000140BCA1F8: btr     dword ptr [r13+9DCh], 15h
 * 0000000140BCA201: cmp     r8, [r13+0A80h]
 * 0000000140BCA208: jz      loc_140BC977A
 * 0000000140BCA20E: mov     rax, [r13+588h]
 * 0000000140BCA215: mov     ecx, [r13+804h]
 * 0000000140BCA21C: mov     [rax], r13
 * 0000000140BCA21F: mov     [rax+10h], ecx
 * 0000000140BCA222: mov     rdx, [r13+0A80h]
 * 0000000140BCA229: cmp     [r13+918h], r15d
 * 0000000140BCA230: jnz     short loc_140BCA240
 * 0000000140BCA232: mov     rax, [r13+588h]
 * 0000000140BCA239: xor     rdx, r8
 * 0000000140BCA23C: mov     [rax+18h], rdx
 * 0000000140BCA240: mov     rcx, r13
 * 0000000140BCA243: jmp     loc_140BC976D
 * 0000000140BCA248: mov     rdx, [rbp+8D0h+var_930]
 * 0000000140BCA24C: movzx   r12d, word ptr [r15+14h]
 * 0000000140BCA251: mov     r13, rdx
 * 0000000140BCA254: mov     eax, r9d
 * 0000000140BCA257: add     r12, 18h
 * 0000000140BCA25B: add     r12, r15
 * 0000000140BCA25E: mov     [rsp+9D0h+var_978], r12
 * 0000000140BCA263: lea     rcx, [rax+rax*2]
 * 0000000140BCA267: lea     rax, [rdx+rcx*4]
 * 0000000140BCA26B: mov     ecx, r11d
 * 0000000140BCA26E: mov     [rbp+8D0h+var_908], rax
 * 0000000140BCA272: mov     rax, [rsp+9D0h+var_968]
 * 0000000140BCA277: mov     [rsp+9D0h+var_958], ecx
 * 0000000140BCA27B: mov     rbx, rax
 * 0000000140BCA27E: test    r10w, r10w
 * 0000000140BCA282: jz      loc_140BCA828
 * 0000000140BCA288: mov     r11, [rbp+8D0h+var_908]
 * 0000000140BCA28C: mov     r8, r12
 * 0000000140BCA28F: mov     [rbp+8D0h+var_920], r12
 * 0000000140BCA293: xor     r15d, r15d
 * 0000000140BCA296: mov     edx, [r8+10h]
 * 0000000140BCA29A: mov     eax, [r8+8]
 * 0000000140BCA29E: cmp     edx, eax
 * 0000000140BCA2A0: mov     r9d, [r8+0Ch]
 * 0000000140BCA2A4: cmovbe  edx, eax
 * 0000000140BCA2A7: mov     [rbp+8D0h+var_928], r9d
 * 0000000140BCA2AB: add     edx, r9d
 * 0000000140BCA2AE: mov     [rbp+8D0h+var_938], edx
 * 0000000140BCA2B1: test    ecx, ecx
 * 0000000140BCA2B3: jz      short loc_140BCA2CB
 * 0000000140BCA2B5: lea     eax, [rcx-1]
 * 0000000140BCA2B8: lea     rax, [rax+rax*4]
 * 0000000140BCA2BC: cmp     edx, [r12+rax*8+0Ch]
 * 0000000140BCA2C1: jb      loc_140BCA643
 * 0000000140BCA2C7: mov     ecx, [rsp+9D0h+var_958]
 * 0000000140BCA2CB: cmp     r13, r11
 * 0000000140BCA2CE: jz      loc_140BCA614
 * 0000000140BCA2D4: mov     ecx, [r13+0]
 * 0000000140BCA2D8: mov     eax, [r13+4]
 * 0000000140BCA2DC: cmp     ecx, edx
 * 0000000140BCA2DE: jnb     loc_140BCA5FF
 * 0000000140BCA2E4: cmp     eax, r9d
 * 0000000140BCA2E7: jbe     loc_140BCA5FF
 * 0000000140BCA2ED: cmp     ecx, r9d
 * 0000000140BCA2F0: jb      loc_140BCA75A
 * 0000000140BCA2F6: cmp     eax, edx
 * 0000000140BCA2F8: ja      loc_140BCA75A
 * 0000000140BCA2FE: mov     eax, [r13+8]
 * 0000000140BCA302: mov     ecx, 1
 * 0000000140BCA307: mov     [rbp+8D0h+var_568], r13
 * 0000000140BCA30E: test    cl, al
 * 0000000140BCA310: jnz     short loc_140BCA31D
 * 0000000140BCA312: test    byte ptr [rax+r14], 20h
 * 0000000140BCA317: jz      loc_140BCA5F1
 * 0000000140BCA31D: mov     eax, [r8+8]
 * 0000000140BCA321: mov     rcx, r13
 * 0000000140BCA324: mov     r14d, [r8+10h]
 * 0000000140BCA328: cmp     r14d, eax
 * 0000000140BCA32B: mov     r12d, [r8+0Ch]
 * 0000000140BCA32F: mov     rdx, [rbp+8D0h+var_910]
 * 0000000140BCA333: cmovbe  r14d, eax
 * 0000000140BCA337: mov     rax, [rbx+418h]
 * 0000000140BCA33E: add     r14d, r12d
 * 0000000140BCA341: call    KeGuardDispatchICall
 * 0000000140BCA346: mov     r15, rax
 * 0000000140BCA349: cmp     [rax], r12d
 * 0000000140BCA34C: jb      short loc_140BCA358
 * 0000000140BCA34E: cmp     [rax+4], r14d
 * 0000000140BCA352: jbe     loc_140BCA486
 * 0000000140BCA358: mov     r8, [rbp+8D0h+var_910]; BugCheckParameter2
 * 0000000140BCA35C: mov     ecx, 80000000h
 * 0000000140BCA361: sub     eax, r8d
 * 0000000140BCA364: or      eax, ecx
 * 0000000140BCA366: mov     rcx, rbx
 * 0000000140BCA369: mov     ecx, [rbx+9D8h]
 * 0000000140BCA36F: bt      ecx, 14h
 * 0000000140BCA373: jnb     loc_140BD5583
 * 0000000140BCA379: xor     r11d, r11d
 * 0000000140BCA37C: cmp     [rbx+918h], r11d
 * 0000000140BCA383: jnz     loc_140BCA486
 * 0000000140BCA389: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BCA393: lea     edx, [r11+1]
 * 0000000140BCA397: add     rax, rbx
 * 0000000140BCA39A: mov     [rbx+920h], rax
 * 0000000140BCA3A1: mov     [rbx+928h], r11
 * 0000000140BCA3A8: mov     qword ptr [rbx+930h], 10Fh
 * 0000000140BCA3B3: mov     [rbx+938h], r8
 * 0000000140BCA3BA: mov     [rbx+918h], edx
 * 0000000140BCA3C0: bt      ecx, 1Dh
 * 0000000140BCA3C4: jb      loc_140BCA486
 * 0000000140BCA3CA: test    dword ptr [rbx+9DCh], 200000h
 * 0000000140BCA3D4: jz      loc_140BCA486
 * 0000000140BCA3DA: test    dl, cl
 * 0000000140BCA3DC: jz      loc_140BCA486
 * 0000000140BCA3E2: mov     ecx, [rbx+0A74h]
 * 0000000140BCA3E8: mov     eax, [rbx+804h]
 * 0000000140BCA3EE: mov     r10, [rbx+838h]
 * 0000000140BCA3F5: sub     eax, ecx
 * 0000000140BCA3F7: mov     r8, [rbx+0A78h]
 * 0000000140BCA3FE: lea     rdx, [rcx+rbx]
 * 0000000140BCA402: mov     ecx, eax
 * 0000000140BCA404: shr     rcx, 3
 * 0000000140BCA408: lea     r9, [rdx+rcx*8]
 * 0000000140BCA40C: jmp     short loc_140BCA42F
 * 0000000140BCA40E: xor     [rdx], r8
 * 0000000140BCA411: mov     rax, [rdx]
 * 0000000140BCA414: movzx   ecx, r8b
 * 0000000140BCA418: xor     rax, r10
 * 0000000140BCA41B: and     ecx, 3Fh
 * 0000000140BCA41E: ror     r8, cl
 * 0000000140BCA421: add     r8, rax
 * 0000000140BCA424: xor     r8, 0EFAh
 * 0000000140BCA42B: add     rdx, 8
 * 0000000140BCA42F: cmp     rdx, r9
 * 0000000140BCA432: jnz     short loc_140BCA40E
 * 0000000140BCA434: btr     dword ptr [rbx+9DCh], 15h
 * 0000000140BCA43C: cmp     r8, [rbx+0A80h]
 * 0000000140BCA443: jz      short loc_140BCA486
 * 0000000140BCA445: mov     ecx, [rbx+804h]
 * 0000000140BCA44B: mov     rax, [rbx+588h]
 * 0000000140BCA452: mov     [rax], rbx
 * 0000000140BCA455: mov     [rax+10h], ecx
 * 0000000140BCA458: mov     rcx, [rbx+0A80h]
 * 0000000140BCA45F: cmp     [rbx+918h], r11d
 * 0000000140BCA466: jnz     short loc_140BCA476
 * 0000000140BCA468: mov     rax, [rbx+588h]
 * 0000000140BCA46F: xor     rcx, r8
 * 0000000140BCA472: mov     [rax+18h], rcx
 * 0000000140BCA476: xor     edx, edx
 * 0000000140BCA478: mov     r9d, 100h
 * 0000000140BCA47E: mov     rcx, rbx
 * 0000000140BCA481: call    sub_140BDA384
 * 0000000140BCA486: mov     r8d, [r15]
 * 0000000140BCA489: mov     rcx, r15
 * 0000000140BCA48C: add     r8, [rbp+8D0h+var_910]
 * 0000000140BCA490: mov     rax, [rbx+420h]
 * 0000000140BCA497: mov     rdx, [rbp+8D0h+var_910]
 * 0000000140BCA49B: call    KeGuardDispatchICall
 * 0000000140BCA4A0: cmp     [rax], r12d
 * 0000000140BCA4A3: jb      short loc_140BCA4AF
 * 0000000140BCA4A5: cmp     [rax+4], r14d
 * 0000000140BCA4A9: jbe     loc_140BCA5DF
 * 0000000140BCA4AF: mov     r14, [rbp+8D0h+var_910]
 * 0000000140BCA4B3: mov     ecx, 80000000h
 * 0000000140BCA4B8: sub     eax, r14d
 * 0000000140BCA4BB: or      eax, ecx
 * 0000000140BCA4BD: mov     rcx, rbx
 * 0000000140BCA4C0: mov     ecx, [rbx+9D8h]
 * 0000000140BCA4C6: bt      ecx, 14h
 * 0000000140BCA4CA: jnb     loc_140BD555A
 * 0000000140BCA4D0: xor     r15d, r15d
 * 0000000140BCA4D3: cmp     [rbx+918h], r15d
 * 0000000140BCA4DA: jnz     loc_140BCA5E6
 * 0000000140BCA4E0: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BCA4EA: lea     edx, [r15+1]
 * 0000000140BCA4EE: add     rax, rbx
 * 0000000140BCA4F1: mov     [rbx+920h], rax
 * 0000000140BCA4F8: mov     [rbx+928h], r15
 * 0000000140BCA4FF: mov     qword ptr [rbx+930h], 10Fh
 * 0000000140BCA50A: mov     [rbx+938h], r14
 * 0000000140BCA511: mov     [rbx+918h], edx
 * 0000000140BCA517: bt      ecx, 1Dh
 * 0000000140BCA51B: jb      loc_140BCA5E6
 * 0000000140BCA521: test    dword ptr [rbx+9DCh], 200000h
 * 0000000140BCA52B: jz      loc_140BCA5E6
 * 0000000140BCA531: test    dl, cl
 * 0000000140BCA533: jz      loc_140BCA5E6
 * 0000000140BCA539: mov     ecx, [rbx+0A74h]
 * 0000000140BCA53F: mov     eax, [rbx+804h]
 * 0000000140BCA545: mov     r10, [rbx+838h]
 * 0000000140BCA54C: sub     eax, ecx
 * 0000000140BCA54E: mov     r8, [rbx+0A78h]
 * 0000000140BCA555: lea     rdx, [rcx+rbx]
 * 0000000140BCA559: mov     ecx, eax
 * 0000000140BCA55B: shr     rcx, 3
 * 0000000140BCA55F: lea     r9, [rdx+rcx*8]
 * 0000000140BCA563: jmp     short loc_140BCA586
 * 0000000140BCA565: xor     [rdx], r8
 * 0000000140BCA568: mov     rax, [rdx]
 * 0000000140BCA56B: movzx   ecx, r8b
 * 0000000140BCA56F: xor     rax, r10
 * 0000000140BCA572: and     ecx, 3Fh
 * 0000000140BCA575: ror     r8, cl
 * 0000000140BCA578: add     r8, rax
 * 0000000140BCA57B: xor     r8, 0EFAh
 * 0000000140BCA582: add     rdx, 8
 * 0000000140BCA586: cmp     rdx, r9
 * 0000000140BCA589: jnz     short loc_140BCA565
 * 0000000140BCA58B: btr     dword ptr [rbx+9DCh], 15h
 * 0000000140BCA593: cmp     r8, [rbx+0A80h]
 * 0000000140BCA59A: jz      short loc_140BCA5E6
 * 0000000140BCA59C: mov     ecx, [rbx+804h]
 * 0000000140BCA5A2: mov     rax, [rbx+588h]
 * 0000000140BCA5A9: mov     [rax], rbx
 * 0000000140BCA5AC: mov     [rax+10h], ecx
 * 0000000140BCA5AF: mov     rcx, [rbx+0A80h]
 * 0000000140BCA5B6: cmp     [rbx+918h], r15d
 * 0000000140BCA5BD: jnz     short loc_140BCA5CD
 * 0000000140BCA5BF: mov     rax, [rbx+588h]
 * 0000000140BCA5C6: xor     rcx, r8
 * 0000000140BCA5C9: mov     [rax+18h], rcx
 * 0000000140BCA5CD: xor     edx, edx
 * 0000000140BCA5CF: mov     r9d, 100h
 * 0000000140BCA5D5: mov     rcx, rbx
 * 0000000140BCA5D8: call    sub_140BDA384
 * 0000000140BCA5DD: jmp     short loc_140BCA5E6
 * 0000000140BCA5DF: mov     r14, [rbp+8D0h+var_910]
 * 0000000140BCA5E3: xor     r15d, r15d
 * 0000000140BCA5E6: mov     edx, [rbp+8D0h+var_938]
 * 0000000140BCA5E9: mov     r8, [rbp+8D0h+var_920]
 * 0000000140BCA5ED: mov     r9d, [rbp+8D0h+var_928]
 * 0000000140BCA5F1: add     r13, 0Ch
 * 0000000140BCA5F5: cmp     r13, [rbp+8D0h+var_908]
 * 0000000140BCA5F9: jnz     loc_140BCA2D4
 * 0000000140BCA5FF: mov     ecx, [rsp+9D0h+var_958]
 * 0000000140BCA603: movzx   r10d, word ptr [rbp+8D0h+arg_8]
 * 0000000140BCA60B: mov     r12, [rsp+9D0h+var_978]
 * 0000000140BCA610: mov     r11, [rbp+8D0h+var_908]
 * 0000000140BCA614: add     r8, 28h ; '('
 * 0000000140BCA618: movzx   eax, r10w
 * 0000000140BCA61C: mov     edx, 1
 * 0000000140BCA621: mov     [rbp+8D0h+var_920], r8
 * 0000000140BCA625: add     ecx, edx
 * 0000000140BCA627: mov     [rsp+9D0h+var_958], ecx
 * 0000000140BCA62B: cmp     ecx, eax
 * 0000000140BCA62D: jb      loc_140BCA296
 * 0000000140BCA633: mov     r9, [rbp+8D0h+var_940]
 * 0000000140BCA637: xor     r11d, r11d
 * 0000000140BCA63A: mov     r15, [rbp+8D0h+var_950]
 * 0000000140BCA63E: jmp     loc_140BCA82D
 * 0000000140BCA643: mov     ecx, [rbx+9D8h]
 * 0000000140BCA649: bt      ecx, 14h
 * 0000000140BCA64D: jnb     loc_140BD552F
 * 0000000140BCA653: cmp     [rbx+918h], r15d
 * 0000000140BCA65A: jnz     loc_140BC977A
 * 0000000140BCA660: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BCA66A: mov     edx, 1
 * 0000000140BCA66F: add     rax, rbx
 * 0000000140BCA672: mov     [rbx+920h], rax
 * 0000000140BCA679: mov     [rbx+928h], r15
 * 0000000140BCA680: mov     qword ptr [rbx+930h], 10Fh
 * 0000000140BCA68B: mov     [rbx+938h], r14
 * 0000000140BCA692: mov     [rbx+918h], edx
 * 0000000140BCA698: bt      ecx, 1Dh
 * 0000000140BCA69C: jb      loc_140BC977A
 * 0000000140BCA6A2: test    dword ptr [rbx+9DCh], 200000h
 * 0000000140BCA6AC: jz      loc_140BC977A
 * 0000000140BCA6B2: test    dl, cl
 * 0000000140BCA6B4: jz      loc_140BC977A
 * 0000000140BCA6BA: mov     ecx, [rbx+0A74h]
 * 0000000140BCA6C0: mov     eax, [rbx+804h]
 * 0000000140BCA6C6: mov     r10, [rbx+838h]
 * 0000000140BCA6CD: sub     eax, ecx
 * 0000000140BCA6CF: mov     r8, [rbx+0A78h]
 * 0000000140BCA6D6: lea     rdx, [rcx+rbx]
 * 0000000140BCA6DA: mov     ecx, eax
 * 0000000140BCA6DC: shr     rcx, 3
 * 0000000140BCA6E0: lea     r9, [rdx+rcx*8]
 * 0000000140BCA6E4: jmp     short loc_140BCA707
 * 0000000140BCA6E6: xor     [rdx], r8
 * 0000000140BCA6E9: mov     rax, [rdx]
 * 0000000140BCA6EC: movzx   ecx, r8b
 * 0000000140BCA6F0: xor     rax, r10
 * 0000000140BCA6F3: and     ecx, 3Fh
 * 0000000140BCA6F6: ror     r8, cl
 * 0000000140BCA6F9: add     r8, rax
 * 0000000140BCA6FC: xor     r8, 0EFAh
 * 0000000140BCA703: add     rdx, 8
 * 0000000140BCA707: cmp     rdx, r9
 * 0000000140BCA70A: jnz     short loc_140BCA6E6
 * 0000000140BCA70C: btr     dword ptr [rbx+9DCh], 15h
 * 0000000140BCA714: cmp     r8, [rbx+0A80h]
 * 0000000140BCA71B: jz      loc_140BC977A
 * 0000000140BCA721: mov     ecx, [rbx+804h]
 * 0000000140BCA727: mov     rax, [rbx+588h]
 * 0000000140BCA72E: mov     [rax], rbx
 * 0000000140BCA731: mov     [rax+10h], ecx
 * 0000000140BCA734: mov     rcx, [rbx+0A80h]
 * 0000000140BCA73B: cmp     [rbx+918h], r15d
 * 0000000140BCA742: jnz     short loc_140BCA752
 * 0000000140BCA744: mov     rax, [rbx+588h]
 * 0000000140BCA74B: xor     rcx, r8
 * 0000000140BCA74E: mov     [rax+18h], rcx
 * 0000000140BCA752: mov     rcx, rbx
 * 0000000140BCA755: jmp     loc_140BC976D
 * 0000000140BCA75A: mov     ecx, [rbx+9D8h]
 * 0000000140BCA760: bt      ecx, 14h
 * 0000000140BCA764: jnb     loc_140BD55A9
 * 0000000140BCA76A: cmp     [rbx+918h], r15d
 * 0000000140BCA771: jnz     loc_140BC977A
 * 0000000140BCA777: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BCA781: mov     edx, 1
 * 0000000140BCA786: add     rax, rbx
 * 0000000140BCA789: mov     [rbx+920h], rax
 * 0000000140BCA790: mov     [rbx+928h], r15
 * 0000000140BCA797: mov     qword ptr [rbx+930h], 10Fh
 * 0000000140BCA7A2: mov     [rbx+938h], r14
 * 0000000140BCA7A9: mov     [rbx+918h], edx
 * 0000000140BCA7AF: bt      ecx, 1Dh
 * 0000000140BCA7B3: jb      loc_140BC977A
 * 0000000140BCA7B9: test    dword ptr [rbx+9DCh], 200000h
 * 0000000140BCA7C3: jz      loc_140BC977A
 * 0000000140BCA7C9: test    dl, cl
 * 0000000140BCA7CB: jz      loc_140BC977A
 * 0000000140BCA7D1: mov     ecx, [rbx+0A74h]
 * 0000000140BCA7D7: mov     eax, [rbx+804h]
 * 0000000140BCA7DD: mov     r10, [rbx+838h]
 * 0000000140BCA7E4: sub     eax, ecx
 * 0000000140BCA7E6: mov     r8, [rbx+0A78h]
 * 0000000140BCA7ED: lea     rdx, [rcx+rbx]
 * 0000000140BCA7F1: mov     ecx, eax
 * 0000000140BCA7F3: shr     rcx, 3
 * 0000000140BCA7F7: lea     r9, [rdx+rcx*8]
 * 0000000140BCA7FB: jmp     short loc_140BCA81E
 * 0000000140BCA7FD: xor     [rdx], r8
 * 0000000140BCA800: mov     rax, [rdx]
 * 0000000140BCA803: movzx   ecx, r8b
 * 0000000140BCA807: xor     rax, r10
 * 0000000140BCA80A: and     ecx, 3Fh
 * 0000000140BCA80D: ror     r8, cl
 * 0000000140BCA810: add     r8, rax
 * 0000000140BCA813: xor     r8, 0EFAh
 * 0000000140BCA81A: add     rdx, 8
 * 0000000140BCA81E: cmp     rdx, r9
 * 0000000140BCA821: jnz     short loc_140BCA7FD
 * 0000000140BCA823: jmp     loc_140BCA70C
 * 0000000140BCA828: mov     edx, 1
 * 0000000140BCA82D: cmp     r13, [rbp+8D0h+var_908]
 * 0000000140BCA831: jz      loc_140BCA903
 * 0000000140BCA837: mov     ecx, [rbx+9D8h]
 * 0000000140BCA83D: bt      ecx, 14h
 * 0000000140BCA841: jnb     loc_140BD55D4
 * 0000000140BCA847: xor     r15d, r15d
 * 0000000140BCA84A: cmp     [rbx+918h], r15d
 * 0000000140BCA851: jnz     loc_140BC977A
 * 0000000140BCA857: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BCA861: add     rax, rbx
 * 0000000140BCA864: mov     [rbx+920h], rax
 * 0000000140BCA86B: mov     [rbx+928h], r15
 * 0000000140BCA872: mov     qword ptr [rbx+930h], 10Fh
 * 0000000140BCA87D: mov     [rbx+938h], r14
 * 0000000140BCA884: mov     [rbx+918h], edx
 * 0000000140BCA88A: bt      ecx, 1Dh
 * 0000000140BCA88E: jb      loc_140BC977A
 * 0000000140BCA894: test    dword ptr [rbx+9DCh], 200000h
 * 0000000140BCA89E: jz      loc_140BC977A
 * 0000000140BCA8A4: test    dl, cl
 * 0000000140BCA8A6: jz      loc_140BC977A
 * 0000000140BCA8AC: mov     ecx, [rbx+0A74h]
 * 0000000140BCA8B2: mov     eax, [rbx+804h]
 * 0000000140BCA8B8: mov     r10, [rbx+838h]
 * 0000000140BCA8BF: sub     eax, ecx
 * 0000000140BCA8C1: mov     r8, [rbx+0A78h]
 * 0000000140BCA8C8: lea     rdx, [rcx+rbx]
 * 0000000140BCA8CC: mov     ecx, eax
 * 0000000140BCA8CE: shr     rcx, 3
 * 0000000140BCA8D2: lea     r9, [rdx+rcx*8]
 * 0000000140BCA8D6: jmp     short loc_140BCA8F9
 * 0000000140BCA8D8: xor     [rdx], r8
 * 0000000140BCA8DB: mov     rax, [rdx]
 * 0000000140BCA8DE: movzx   ecx, r8b
 * 0000000140BCA8E2: xor     rax, r10
 * 0000000140BCA8E5: and     ecx, 3Fh
 * 0000000140BCA8E8: ror     r8, cl
 * 0000000140BCA8EB: add     r8, rax
 * 0000000140BCA8EE: xor     r8, 0EFAh
 * 0000000140BCA8F5: add     rdx, 8
 * 0000000140BCA8F9: cmp     rdx, r9
 * 0000000140BCA8FC: jnz     short loc_140BCA8D8
 * 0000000140BCA8FE: jmp     loc_140BCA70C
 * 0000000140BCA903: test    r9d, r9d
 * 0000000140BCA906: jz      short loc_140BCA911
 * 0000000140BCA908: lea     edx, [r9+6]
 * 0000000140BCA90C: and     edx, 0FFFFFFF8h
 * 0000000140BCA90F: jmp     short loc_140BCA914
 * 0000000140BCA911: mov     edx, r11d
 * 0000000140BCA914: mov     r14d, [rbx+804h]
 * 0000000140BCA91B: mov     r8d, [rbx+944h]
 * 0000000140BCA922: movzx   eax, r10w
 * 0000000140BCA926: lea     ecx, [rax+rax*2]
 * 0000000140BCA929: lea     eax, [rdx+rcx*8]
 * 0000000140BCA92C: lea     ecx, [r14+30h]
 * 0000000140BCA930: add     ecx, eax
 * 0000000140BCA932: cmp     ecx, [rbx+0A64h]
 * 0000000140BCA938: jbe     loc_140BCAA28
 * 0000000140BCA93E: mov     edx, ecx
 * 0000000140BCA940: mov     rcx, rbx
 * 0000000140BCA943: call    sub_140BD9AF8
 * 0000000140BCA948: xor     r11d, r11d
 * 0000000140BCA94B: mov     r13, rax
 * 0000000140BCA94E: test    rax, rax
 * 0000000140BCA951: jz      loc_140BC9AC2
 * 0000000140BCA957: mov     ecx, [rbx+9D8h]
 * 0000000140BCA95D: lea     eax, [r11+2]
 * 0000000140BCA961: test    al, cl
 * 0000000140BCA963: jnz     loc_140BCAA12
 * 0000000140BCA969: mov     eax, [rbx+804h]
 * 0000000140BCA96F: lea     r9d, [r11+1]
 * 0000000140BCA973: mov     r8, [rbx+7E8h]
 * 0000000140BCA97A: and     ecx, 10000000h
 * 0000000140BCA980: neg     ecx
 * 0000000140BCA982: sbb     edx, edx
 * 0000000140BCA984: and     edx, [rbx+944h]
 * 0000000140BCA98A: cmp     eax, 8
 * 0000000140BCA98D: jb      short loc_140BCA9A4
 * 0000000140BCA98F: mov     ecx, eax
 * 0000000140BCA991: shr     rcx, 3
 * 0000000140BCA995: mov     [rbx], r11
 * 0000000140BCA998: add     eax, 0FFFFFFF8h
 * 0000000140BCA99B: add     rbx, 8
 * 0000000140BCA99F: sub     rcx, r9
 * 0000000140BCA9A2: jnz     short loc_140BCA995
 * 0000000140BCA9A4: test    eax, eax
 * 0000000140BCA9A6: jz      short loc_140BCA9B7
 * 0000000140BCA9A8: mov     ecx, 0FFFFFFFFh
 * 0000000140BCA9AD: mov     [rbx], r11b
 * 0000000140BCA9B0: add     rbx, r9
 * 0000000140BCA9B3: add     eax, ecx
 * 0000000140BCA9B5: jnz     short loc_140BCA9AD
 * 0000000140BCA9B7: mov     ebx, [r13+944h]
 * 0000000140BCA9BE: mov     [r13+944h], edx
 * 0000000140BCA9C5: cmp     edx, 3
 * 0000000140BCA9C8: jz      short loc_140BCA9F9
 * 0000000140BCA9CA: test    dword ptr [r13+9D8h], 8000000h
 * 0000000140BCA9D5: jnz     short loc_140BCA9F0
 * 0000000140BCA9D7: test    edx, edx
 * 0000000140BCA9D9: jz      short loc_140BCA9F0
 * 0000000140BCA9DB: mov     rax, [r13+238h]
 * 0000000140BCA9E2: lea     rcx, [r8-8]
 * 0000000140BCA9E6: mov     rdx, [rcx]
 * 0000000140BCA9E9: call    KeGuardDispatchICall
 * 0000000140BCA9EE: jmp     short loc_140BCAA08
 * 0000000140BCA9F0: mov     rax, [r13+108h]
 * 0000000140BCA9F7: jmp     short loc_140BCAA00
 * 0000000140BCA9F9: mov     rax, [r13+368h]
 * 0000000140BCAA00: mov     rcx, r8
 * 0000000140BCAA03: call    KeGuardDispatchICall
 * 0000000140BCAA08: mov     [r13+944h], ebx
 * 0000000140BCAA0F: xor     r11d, r11d
 * 0000000140BCAA12: and     dword ptr [r13+9D8h], 0FFFFFFFDh
 * 0000000140BCAA1A: mov     r9, [rbp+8D0h+var_940]
 * 0000000140BCAA1E: movzx   r10d, word ptr [rbp+8D0h+arg_8]
 * 0000000140BCAA26: jmp     short loc_140BCAA31
 * 0000000140BCAA28: mov     r13, rbx
 * 0000000140BCAA2B: mov     [rbx+804h], ecx
 * 0000000140BCAA31: mov     eax, 1
 * 0000000140BCAA36: lea     rdx, [r14+r13]
 * 0000000140BCAA3A: add     [r13+82Ch], eax
 * 0000000140BCAA41: mov     [rbp+8D0h+var_6D0], rdx
 * 0000000140BCAA48: lea     ecx, [rax+2Fh]
 * 0000000140BCAA4B: mov     rax, rdx
 * 0000000140BCAA4E: lea     r8d, [rcx-2Ah]
 * 0000000140BCAA52: lea     r14d, [rcx-2Fh]
 * 0000000140BCAA56: mov     [rax], r11
 * 0000000140BCAA59: add     ecx, 0FFFFFFF8h
 * 0000000140BCAA5C: add     rax, 8
 * 0000000140BCAA60: sub     r8, r14
 * 0000000140BCAA63: jnz     short loc_140BCAA56
 * 0000000140BCAA65: test    ecx, ecx
 * 0000000140BCAA67: jz      short loc_140BCAA7A
 * 0000000140BCAA69: mov     r8d, 0FFFFFFFFh
 * 0000000140BCAA6F: mov     [rax], r11b
 * 0000000140BCAA72: add     rax, r14
 * 0000000140BCAA75: add     ecx, r8d
 * 0000000140BCAA78: jnz     short loc_140BCAA6F
 * 0000000140BCAA7A: mov     rbx, [rbp+8D0h+var_930]
 * 0000000140BCAA7E: mov     dword ptr [rdx], 1Eh
 * 0000000140BCAA84: mov     [rdx+8], rbx
 * 0000000140BCAA88: mov     [rdx+10h], r11d
 * 0000000140BCAA8C: mov     rcx, [r13+838h]
 * 0000000140BCAA93: mov     rax, rcx
 * 0000000140BCAA96: jmp     short loc_140BCAA9A
 * 0000000140BCAA98: xor     ecx, eax
 * 0000000140BCAA9A: shr     rax, 1Fh
 * 0000000140BCAA9E: test    rax, rax
 * 0000000140BCAAA1: jnz     short loc_140BCAA98
 * 0000000140BCAAA3: mov     rax, [rbp+8D0h+var_910]
 * 0000000140BCAAA7: btr     ecx, 1Fh
 * 0000000140BCAAAB: mov     [rdx+14h], ecx
 * 0000000140BCAAAE: mov     rcx, [rbp+8D0h+var_6D0]
 * 0000000140BCAAB5: mov     [rbp+8D0h+var_858], rcx
 * 0000000140BCAAB9: mov     [rbp+8D0h+var_8C0], r13
 * 0000000140BCAABD: mov     [rcx+18h], rax
 * 0000000140BCAAC1: mov     ecx, [r15+50h]
 * 0000000140BCAAC5: xor     r15d, r15d
 * 0000000140BCAAC8: mov     rax, [rbp+8D0h+var_858]
 * 0000000140BCAACC: mov     [rax+20h], ecx
 * 0000000140BCAACF: mov     rax, [rbp+8D0h+var_858]
 * 0000000140BCAAD3: mov     ecx, dword ptr [rsp+9D0h+var_960]
 * 0000000140BCAAD7: mov     [rax+24h], ecx
 * 0000000140BCAADA: mov     rax, [rbp+8D0h+var_858]
 * 0000000140BCAADE: mov     [rax+28h], r10w
 * 0000000140BCAAE3: mov     rcx, [rbp+8D0h+var_858]
 * 0000000140BCAAE7: lea     rdx, [rcx+30h]
 * 0000000140BCAAEB: mov     [rbp+8D0h+var_940], rdx
 * 0000000140BCAAEF: test    r9d, r9d
 * 0000000140BCAAF2: jz      short loc_140BCAB05
 * 0000000140BCAAF4: lea     r11d, [r9-1]
 * 0000000140BCAAF8: add     r11, 7
 * 0000000140BCAAFC: and     r11, 0FFFFFFFFFFFFFFF8h
 * 0000000140BCAB00: add     r11, rdx
 * 0000000140BCAB03: jmp     short loc_140BCAB08
 * 0000000140BCAB05: mov     r11, rdx
 * 0000000140BCAB08: movzx   eax, word ptr [rcx+28h]
 * 0000000140BCAB0C: mov     [rbp+8D0h+var_920], r11
 * 0000000140BCAB10: lea     rcx, [rax+rax*2]
 * 0000000140BCAB14: lea     r8, [r11+rcx*8]
 * 0000000140BCAB18: mov     [rbp+8D0h+var_950], r8
 * 0000000140BCAB1C: lea     rax, [rbx+0Ch]
 * 0000000140BCAB20: test    r9d, r9d
 * 0000000140BCAB23: jnz     short loc_140BCAB29
 * 0000000140BCAB25: mov     rax, [rbp+8D0h+var_908]
 * 0000000140BCAB29: mov     [rsp+9D0h+var_968], rax
 * 0000000140BCAB2E: cmp     r15w, r10w
 * 0000000140BCAB32: jnb     short loc_140BCAB68
 * 0000000140BCAB34: mov     esi, 2
 * 0000000140BCAB39: movzx   edx, r10w
 * 0000000140BCAB3D: lea     rax, [r11+8]
 * 0000000140BCAB41: lea     r10d, [rsi+0Ah]
 * 0000000140BCAB45: mov     rcx, rsi
 * 0000000140BCAB48: mov     [rax-8], r15d
 * 0000000140BCAB4C: mov     [rax-4], r15d
 * 0000000140BCAB50: mov     dword ptr [rax], 80000000h
 * 0000000140BCAB56: add     rax, r10
 * 0000000140BCAB59: sub     rcx, r14
 * 0000000140BCAB5C: jnz     short loc_140BCAB48
 * 0000000140BCAB5E: sub     rdx, r14
 * 0000000140BCAB61: jnz     short loc_140BCAB45
 * 0000000140BCAB63: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BCAB68: cmp     r11, r8
 * 0000000140BCAB6B: jz      loc_140BCB4AA
 * 0000000140BCAB71: test    dword ptr [r12+24h], 2000000h
 * 0000000140BCAB7A: mov     [rbp+8D0h+var_938], r15d
 * 0000000140BCAB7E: jnz     short loc_140BCABC2
 * 0000000140BCAB80: mov     ecx, [r12]
 * 0000000140BCAB84: lea     rax, [r12+4]
 * 0000000140BCAB89: cmp     ecx, 54494E49h
 * 0000000140BCAB8F: jnz     short loc_140BCAB99
 * 0000000140BCAB91: cmp     dword ptr [rax], 4742444Bh
 * 0000000140BCAB97: jz      short loc_140BCABC2
 * 0000000140BCAB99: cmp     ecx, 45474150h
 * 0000000140BCAB9F: jnz     short loc_140BCABCE
 * 0000000140BCABA1: movzx   ecx, word ptr [rax]
 * 0000000140BCABA4: mov     eax, 7877h
 * 0000000140BCABA9: cmp     cx, ax
 * 0000000140BCABAC: jz      short loc_140BCABC2
 * 0000000140BCABAE: mov     eax, 7277h
 * 0000000140BCABB3: cmp     cx, ax
 * 0000000140BCABB6: jz      short loc_140BCABC2
 * 0000000140BCABB8: mov     eax, 7777h
 * 0000000140BCABBD: cmp     cx, ax
 * 0000000140BCABC0: jnz     short loc_140BCABE0
 * 0000000140BCABC2: mov     r15d, r14d
 * 0000000140BCABC5: mov     [rbp+8D0h+var_938], r14d
 * 0000000140BCABC9: jmp     loc_140BCACB5
 * 0000000140BCABCE: cmp     ecx, 41525245h
 * 0000000140BCABD4: jnz     short loc_140BCABE0
 * 0000000140BCABD6: mov     ecx, 4154h
 * 0000000140BCABDB: cmp     [rax], cx
 * 0000000140BCABDE: jz      short loc_140BCABC2
 * 0000000140BCABE0: mov     r9, [r13+958h]
 * 0000000140BCABE7: mov     r10d, 7
 * 0000000140BCABED: mov     r11, [r13+960h]
 * 0000000140BCABF4: mov     rdx, r12
 * 0000000140BCABF7: mov     rbx, [r13+968h]
 * 0000000140BCABFE: mov     r8, [r13+950h]
 * 0000000140BCAC05: mov     cl, [rdx]
 * 0000000140BCAC07: add     rdx, r14
 * 0000000140BCAC0A: mov     al, [r8]
 * 0000000140BCAC0D: add     r8, r14
 * 0000000140BCAC10: cmp     cl, al
 * 0000000140BCAC12: jnz     short loc_140BCAC23
 * 0000000140BCAC14: mov     eax, 0FFFFFFFFh
 * 0000000140BCAC19: add     r10d, eax
 * 0000000140BCAC1C: jnz     short loc_140BCAC05
 * 0000000140BCAC1E: jmp     loc_140BCACA6
 * 0000000140BCAC23: mov     edx, 8
 * 0000000140BCAC28: mov     r8, r12
 * 0000000140BCAC2B: mov     rcx, [r8]
 * 0000000140BCAC2E: add     r8, 8
 * 0000000140BCAC32: mov     rax, [r9]
 * 0000000140BCAC35: add     r9, 8
 * 0000000140BCAC39: cmp     rcx, rax
 * 0000000140BCAC3C: jnz     short loc_140BCAC65
 * 0000000140BCAC3E: add     edx, 0FFFFFFF8h
 * 0000000140BCAC41: cmp     edx, 8
 * 0000000140BCAC44: jnb     short loc_140BCAC2B
 * 0000000140BCAC46: test    edx, edx
 * 0000000140BCAC48: jz      short loc_140BCACA6
 * 0000000140BCAC4A: mov     cl, [r8]
 * 0000000140BCAC4D: add     r8, r14
 * 0000000140BCAC50: mov     al, [r9]
 * 0000000140BCAC53: add     r9, r14
 * 0000000140BCAC56: cmp     cl, al
 * 0000000140BCAC58: jnz     short loc_140BCAC65
 * 0000000140BCAC5A: mov     eax, 0FFFFFFFFh
 * 0000000140BCAC5F: add     edx, eax
 * 0000000140BCAC61: jnz     short loc_140BCAC4A
 * 0000000140BCAC63: jmp     short loc_140BCACA6
 * 0000000140BCAC65: mov     r8d, 4
 * 0000000140BCAC6B: mov     rdx, r12
 * 0000000140BCAC6E: mov     r9d, 0FFFFFFFFh
 * 0000000140BCAC74: mov     cl, [rdx]
 * 0000000140BCAC76: add     rdx, r14
 * 0000000140BCAC79: mov     al, [r11]
 * 0000000140BCAC7C: add     r11, r14
 * 0000000140BCAC7F: cmp     cl, al
 * 0000000140BCAC81: jnz     short loc_140BCAC8A
 * 0000000140BCAC83: add     r8d, r9d
 * 0000000140BCAC86: jnz     short loc_140BCAC74
 * 0000000140BCAC88: jmp     short loc_140BCACA6
 * 0000000140BCAC8A: mov     r8d, 6
 * 0000000140BCAC90: mov     rdx, r12
 * 0000000140BCAC93: mov     cl, [rdx]
 * 0000000140BCAC95: add     rdx, r14
 * 0000000140BCAC98: mov     al, [rbx]
 * 0000000140BCAC9A: add     rbx, r14
 * 0000000140BCAC9D: cmp     cl, al
 * 0000000140BCAC9F: jnz     short loc_140BCACAD
 * 0000000140BCACA1: add     r8d, r9d
 * 0000000140BCACA4: jnz     short loc_140BCAC93
 * 0000000140BCACA6: mov     r15d, r14d
 * 0000000140BCACA9: mov     [rbp+8D0h+var_938], r14d
 * 0000000140BCACAD: mov     rbx, [rbp+8D0h+var_930]
 * 0000000140BCACB1: mov     r11, [rbp+8D0h+var_920]
 * 0000000140BCACB5: mov     ecx, [r12+24h]
 * 0000000140BCACBA: xor     r10d, r10d
 * 0000000140BCACBD: test    ecx, ecx
 * 0000000140BCACBF: jns     short loc_140BCACCA
 * 0000000140BCACC1: mov     r15d, r14d
 * 0000000140BCACC4: mov     [rbp+8D0h+var_938], r14d
 * 0000000140BCACC8: jmp     short loc_140BCACCF
 * 0000000140BCACCA: test    r15d, r15d
 * 0000000140BCACCD: jz      short loc_140BCACF7
 * 0000000140BCACCF: cmp     dword ptr [r12], 54494E49h
 * 0000000140BCACD7: jnz     short loc_140BCACF7
 * 0000000140BCACD9: cmp     dword ptr [r12+4], 4742444Bh
 * 0000000140BCACE2: jnz     short loc_140BCACF7
 * 0000000140BCACE4: test    dword ptr [r13+9DCh], 2000h
 * 0000000140BCACEF: cmovnz  r15d, r10d
 * 0000000140BCACF3: mov     [rbp+8D0h+var_938], r15d
 * 0000000140BCACF7: test    dword ptr [r13+9DCh], 4000h
 * 0000000140BCAD02: mov     r9, [rbp+8D0h+var_910]
 * 0000000140BCAD06: jz      short loc_140BCAD27
 * 0000000140BCAD08: bt      ecx, 1Dh
 * 0000000140BCAD0C: jnb     short loc_140BCAD27
 * 0000000140BCAD0E: cmp     r9, [r13+5E0h]
 * 0000000140BCAD15: jz      short loc_140BCAD20
 * 0000000140BCAD17: cmp     r9, [r13+5E8h]
 * 0000000140BCAD1E: jnz     short loc_140BCAD27
 * 0000000140BCAD20: mov     r15d, r14d
 * 0000000140BCAD23: mov     [rbp+8D0h+var_938], r14d
 * 0000000140BCAD27: mov     edx, [r12+0Ch]
 * 0000000140BCAD2C: mov     r14d, [r12+10h]
 * 0000000140BCAD31: mov     eax, [r12+8]
 * 0000000140BCAD36: cmp     r14d, eax
 * 0000000140BCAD39: mov     r8, [rbp+8D0h+var_908]
 * 0000000140BCAD3D: cmovbe  r14d, eax
 * 0000000140BCAD41: mov     dword ptr [rsp+9D0h+var_960], edx
 * 0000000140BCAD45: add     r14d, edx
 * 0000000140BCAD48: mov     dword ptr [rbp+8D0h+arg_8], edx
 * 0000000140BCAD4E: mov     [rsp+9D0h+var_958], r14d
 * 0000000140BCAD53: cmp     rbx, r8
 * 0000000140BCAD56: jz      loc_140BCAF1B
 * 0000000140BCAD5C: mov     eax, [rbx]
 * 0000000140BCAD5E: mov     ecx, [rbx+4]
 * 0000000140BCAD61: mov     r12d, ecx
 * 0000000140BCAD64: cmp     eax, edx
 * 0000000140BCAD66: jbe     loc_140BCAF21
 * 0000000140BCAD6C: mov     dword ptr [rbp+8D0h+arg_8], edx
 * 0000000140BCAD72: cmp     ecx, r14d
 * 0000000140BCAD75: ja      loc_140BCAF40
 * 0000000140BCAD7B: mov     dword ptr [rbp+8D0h+arg_8], edx
 * 0000000140BCAD81: test    r15d, r15d
 * 0000000140BCAD84: jnz     loc_140BCAF56
 * 0000000140BCAD8A: mov     [r11], edx
 * 0000000140BCAD8D: lea     rbx, [r9+rdx]
 * 0000000140BCAD91: mov     [r11+4], eax
 * 0000000140BCAD95: lea     rdx, [rbp+8D0h+var_7E0]
 * 0000000140BCAD9C: mov     r9d, eax
 * 0000000140BCAD9F: mov     dword ptr [rbp+8D0h+arg_8], eax
 * 0000000140BCADA5: sub     r9d, [r11]
 * 0000000140BCADA8: lea     r8, [rbp+8D0h+var_6C8]
 * 0000000140BCADAF: mov     r11d, r9d
 * 0000000140BCADB2: add     r11, rbx
 * 0000000140BCADB5: mov     rcx, [r8]
 * 0000000140BCADB8: mov     eax, [rdx]
 * 0000000140BCADBA: add     rax, rcx
 * 0000000140BCADBD: cmp     rbx, rax
 * 0000000140BCADC0: jnb     short loc_140BCADCB
 * 0000000140BCADC2: cmp     r11, rcx
 * 0000000140BCADC5: ja      loc_140BCAF2D
 * 0000000140BCADCB: inc     r10d
 * 0000000140BCADCE: add     r8, 8
 * 0000000140BCADD2: add     rdx, 4
 * 0000000140BCADD6: cmp     r10d, 6
 * 0000000140BCADDA: jb      short loc_140BCADB5
 * 0000000140BCADDC: add     [r13+848h], r9d
 * 0000000140BCADE3: mov     r11, rbx
 * 0000000140BCADE6: mov     r15d, [r13+834h]
 * 0000000140BCADED: mov     rax, rbx
 * 0000000140BCADF0: mov     r14, [r13+838h]
 * 0000000140BCADF7: mov     ecx, r9d
 * 0000000140BCADFA: add     rcx, rbx
 * 0000000140BCADFD: cmp     rbx, rcx
 * 0000000140BCAE00: jnb     short loc_140BCAE12
 * 0000000140BCAE02: mov     edx, 40h ; '@'
 * 0000000140BCAE07: prefetchnta byte ptr [rax]
 * 0000000140BCAE0A: add     rax, rdx
 * 0000000140BCAE0D: cmp     rax, rcx
 * 0000000140BCAE10: jb      short loc_140BCAE07
 * 0000000140BCAE12: mov     r10d, r9d
 * 0000000140BCAE15: mov     r8, r14
 * 0000000140BCAE18: shr     r10d, 7
 * 0000000140BCAE1C: mov     edx, 1
 * 0000000140BCAE21: test    r10d, r10d
 * 0000000140BCAE24: jz      short loc_140BCAE96
 * 0000000140BCAE26: mov     esi, 0FFFFFFFFh
 * 0000000140BCAE2B: mov     rdi, 7010008004002001h
 * 0000000140BCAE35: mov     eax, 8
 * 0000000140BCAE3A: xor     r8, [r11]
 * 0000000140BCAE3D: mov     ecx, r15d
 * 0000000140BCAE40: rol     r8, cl
 * 0000000140BCAE43: xor     r8, [r11+8]
 * 0000000140BCAE47: add     r11, 10h
 * 0000000140BCAE4B: rol     r8, cl
 * 0000000140BCAE4E: sub     rax, rdx
 * 0000000140BCAE51: jnz     short loc_140BCAE3A
 * 0000000140BCAE53: mov     rcx, r11
 * 0000000140BCAE56: sub     rcx, rbx
 * 0000000140BCAE59: xor     rcx, r14
 * 0000000140BCAE5C: mov     rax, rcx
 * 0000000140BCAE5F: rol     rax, 11h
 * 0000000140BCAE63: xor     rcx, rax
 * 0000000140BCAE66: mov     rax, rdi
 * 0000000140BCAE69: mul     rcx
 * 0000000140BCAE6C: xor     eax, edx
 * 0000000140BCAE6E: mov     [rbp+8D0h+var_560], rdx
 * 0000000140BCAE75: xor     r15d, eax
 * 0000000140BCAE78: mov     edx, 1
 * 0000000140BCAE7D: and     r15d, 3Fh
 * 0000000140BCAE81: cmovz   r15d, edx
 * 0000000140BCAE85: add     r10d, esi
 * 0000000140BCAE88: jnz     short loc_140BCAE35
 * 0000000140BCAE8A: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BCAE8F: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BCAE96: and     r9d, 7Fh
 * 0000000140BCAE9A: cmp     r9d, 8
 * 0000000140BCAE9E: jb      short loc_140BCAEBD
 * 0000000140BCAEA0: mov     eax, r9d
 * 0000000140BCAEA3: shr     rax, 3
 * 0000000140BCAEA7: xor     r8, [r11]
 * 0000000140BCAEAA: mov     ecx, r15d
 * 0000000140BCAEAD: rol     r8, cl
 * 0000000140BCAEB0: add     r11, 8
 * 0000000140BCAEB4: add     r9d, 0FFFFFFF8h
 * 0000000140BCAEB8: sub     rax, rdx
 * 0000000140BCAEBB: jnz     short loc_140BCAEA7
 * 0000000140BCAEBD: xor     r10d, r10d
 * 0000000140BCAEC0: test    r9d, r9d
 * 0000000140BCAEC3: jz      short loc_140BCAEE4
 * 0000000140BCAEC5: mov     esi, 0FFFFFFFFh
 * 0000000140BCAECA: movzx   eax, byte ptr [r11]
 * 0000000140BCAECE: mov     ecx, r15d
 * 0000000140BCAED1: xor     r8, rax
 * 0000000140BCAED4: add     r11, rdx
 * 0000000140BCAED7: rol     r8, cl
 * 0000000140BCAEDA: add     r9d, esi
 * 0000000140BCAEDD: jnz     short loc_140BCAECA
 * 0000000140BCAEDF: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BCAEE4: mov     rax, r8
 * 0000000140BCAEE7: jmp     short loc_140BCAEEC
 * 0000000140BCAEE9: xor     r8d, eax
 * 0000000140BCAEEC: shr     rax, 1Fh
 * 0000000140BCAEF0: test    rax, rax
 * 0000000140BCAEF3: jnz     short loc_140BCAEE9
 * 0000000140BCAEF5: mov     rcx, [rbp+8D0h+var_920]
 * 0000000140BCAEF9: btr     r8d, 1Fh
 * 0000000140BCAEFE: mov     r14d, [rsp+9D0h+var_958]
 * 0000000140BCAF03: mov     r15d, [rbp+8D0h+var_938]
 * 0000000140BCAF07: mov     rbx, [rbp+8D0h+var_930]
 * 0000000140BCAF0B: mov     [rcx+8], r8d
 * 0000000140BCAF0F: mov     ecx, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BCAF15: mov     r8, [rbp+8D0h+var_908]
 * 0000000140BCAF19: jmp     short loc_140BCAF42
 * 0000000140BCAF1B: mov     eax, r10d
 * 0000000140BCAF1E: mov     r12d, r10d
 * 0000000140BCAF21: mov     ecx, edx
 * 0000000140BCAF23: cmp     eax, edx
 * 0000000140BCAF25: jb      loc_140BCB298
 * 0000000140BCAF2B: jmp     short loc_140BCAF42
 * 0000000140BCAF2D: mov     ecx, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BCAF33: xor     r10d, r10d
 * 0000000140BCAF36: mov     r8, [rbp+8D0h+var_908]
 * 0000000140BCAF3A: mov     rbx, [rbp+8D0h+var_930]
 * 0000000140BCAF3E: jmp     short loc_140BCAF42
 * 0000000140BCAF40: mov     ecx, edx
 * 0000000140BCAF42: cmp     r12d, r14d
 * 0000000140BCAF45: ja      loc_140BCB298
 * 0000000140BCAF4B: cmp     rbx, r8
 * 0000000140BCAF4E: jz      loc_140BCB298
 * 0000000140BCAF54: jmp     short loc_140BCAF58
 * 0000000140BCAF56: mov     ecx, edx
 * 0000000140BCAF58: mov     rax, [rsp+9D0h+var_968]
 * 0000000140BCAF5D: cmp     rax, r8
 * 0000000140BCAF60: jz      loc_140BCB298
 * 0000000140BCAF66: mov     r12d, [rax+4]
 * 0000000140BCAF6A: cmp     r12d, r14d
 * 0000000140BCAF6D: ja      loc_140BCB298
 * 0000000140BCAF73: mov     ecx, 0Ch
 * 0000000140BCAF78: cmp     rax, r8
 * 0000000140BCAF7B: jz      loc_140BCB292
 * 0000000140BCAF81: test    r15d, r15d
 * 0000000140BCAF84: jz      short loc_140BCAF8E
 * 0000000140BCAF86: mov     r8b, 80h
 * 0000000140BCAF89: jmp     loc_140BCB25D
 * 0000000140BCAF8E: mov     r15d, [rax]
 * 0000000140BCAF91: mov     r14d, [rbx+4]
 * 0000000140BCAF95: mov     dword ptr [rbp+8D0h+arg_8], r15d
 * 0000000140BCAF9C: cmp     r15d, r14d
 * 0000000140BCAF9F: jnb     loc_140BCB0D0
 * 0000000140BCAFA5: mov     ecx, [r13+9D8h]
 * 0000000140BCAFAC: bt      ecx, 14h
 * 0000000140BCAFB0: jnb     loc_140BD55FF
 * 0000000140BCAFB6: cmp     [r13+918h], r10d
 * 0000000140BCAFBD: jnz     loc_140BCB0D0
 * 0000000140BCAFC3: mov     rdx, [rbp+8D0h+var_910]
 * 0000000140BCAFC7: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BCAFD1: add     rax, r13
 * 0000000140BCAFD4: mov     [r13+920h], rax
 * 0000000140BCAFDB: mov     [r13+928h], r10
 * 0000000140BCAFE2: mov     qword ptr [r13+930h], 10Fh
 * 0000000140BCAFED: mov     [r13+938h], rdx
 * 0000000140BCAFF4: mov     edx, 1
 * 0000000140BCAFF9: mov     [r13+918h], edx
 * 0000000140BCB000: bt      ecx, 1Dh
 * 0000000140BCB004: jb      loc_140BCB0D0
 * 0000000140BCB00A: test    dword ptr [r13+9DCh], 200000h
 * 0000000140BCB015: jz      loc_140BCB0D0
 * 0000000140BCB01B: test    dl, cl
 * 0000000140BCB01D: jz      loc_140BCB0D0
 * 0000000140BCB023: mov     ecx, [r13+0A74h]
 * 0000000140BCB02A: mov     eax, [r13+804h]
 * 0000000140BCB031: mov     r10, [r13+838h]
 * 0000000140BCB038: sub     eax, ecx
 * 0000000140BCB03A: mov     r8, [r13+0A78h]
 * 0000000140BCB041: lea     rdx, [rcx+r13]
 * 0000000140BCB045: mov     ecx, eax
 * 0000000140BCB047: shr     rcx, 3
 * 0000000140BCB04B: lea     r9, [rdx+rcx*8]
 * 0000000140BCB04F: jmp     short loc_140BCB072
 * 0000000140BCB051: xor     [rdx], r8
 * 0000000140BCB054: mov     rax, [rdx]
 * 0000000140BCB057: movzx   ecx, r8b
 * 0000000140BCB05B: xor     rax, r10
 * 0000000140BCB05E: and     ecx, 3Fh
 * 0000000140BCB061: ror     r8, cl
 * 0000000140BCB064: add     r8, rax
 * 0000000140BCB067: xor     r8, 0EFAh
 * 0000000140BCB06E: add     rdx, 8
 * 0000000140BCB072: cmp     rdx, r9
 * 0000000140BCB075: jnz     short loc_140BCB051
 * 0000000140BCB077: btr     dword ptr [r13+9DCh], 15h
 * 0000000140BCB080: cmp     r8, [r13+0A80h]
 * 0000000140BCB087: jz      short loc_140BCB0CD
 * 0000000140BCB089: mov     rax, [r13+588h]
 * 0000000140BCB090: mov     ecx, [r13+804h]
 * 0000000140BCB097: mov     [rax], r13
 * 0000000140BCB09A: mov     [rax+10h], ecx
 * 0000000140BCB09D: xor     eax, eax
 * 0000000140BCB09F: mov     rcx, [r13+0A80h]
 * 0000000140BCB0A6: cmp     [r13+918h], eax
 * 0000000140BCB0AD: jnz     short loc_140BCB0BD
 * 0000000140BCB0AF: mov     rax, [r13+588h]
 * 0000000140BCB0B6: xor     rcx, r8
 * 0000000140BCB0B9: mov     [rax+18h], rcx
 * 0000000140BCB0BD: xor     edx, edx
 * 0000000140BCB0BF: mov     r9d, 100h
 * 0000000140BCB0C5: mov     rcx, r13
 * 0000000140BCB0C8: call    sub_140BDA384
 * 0000000140BCB0CD: xor     r10d, r10d
 * 0000000140BCB0D0: mov     r9d, r15d
 * 0000000140BCB0D3: lea     rdx, [rbp+8D0h+var_7E0]
 * 0000000140BCB0DA: sub     r9d, r14d
 * 0000000140BCB0DD: lea     r8, [rbp+8D0h+var_6C8]
 * 0000000140BCB0E4: mov     rbx, r14
 * 0000000140BCB0E7: mov     r11d, r9d
 * 0000000140BCB0EA: add     rbx, [rbp+8D0h+var_910]
 * 0000000140BCB0EE: add     r11, rbx
 * 0000000140BCB0F1: mov     rcx, [r8]
 * 0000000140BCB0F4: mov     eax, [rdx]
 * 0000000140BCB0F6: add     rax, rcx
 * 0000000140BCB0F9: cmp     rbx, rax
 * 0000000140BCB0FC: jnb     short loc_140BCB107
 * 0000000140BCB0FE: cmp     r11, rcx
 * 0000000140BCB101: ja      loc_140BCB245
 * 0000000140BCB107: mov     eax, 4
 * 0000000140BCB10C: inc     r10d
 * 0000000140BCB10F: add     rdx, rax
 * 0000000140BCB112: add     r8, 8
 * 0000000140BCB116: cmp     r10d, 6
 * 0000000140BCB11A: jb      short loc_140BCB0F1
 * 0000000140BCB11C: cmp     r9d, eax
 * 0000000140BCB11F: jb      loc_140BCB245
 * 0000000140BCB125: add     [r13+848h], r9d
 * 0000000140BCB12C: mov     r11, rbx
 * 0000000140BCB12F: mov     r14d, [r13+834h]
 * 0000000140BCB136: mov     rax, rbx
 * 0000000140BCB139: mov     r15, [r13+838h]
 * 0000000140BCB140: mov     ecx, r9d
 * 0000000140BCB143: add     rcx, rbx
 * 0000000140BCB146: cmp     rbx, rcx
 * 0000000140BCB149: jnb     short loc_140BCB15B
 * 0000000140BCB14B: mov     edx, 40h ; '@'
 * 0000000140BCB150: prefetchnta byte ptr [rax]
 * 0000000140BCB153: add     rax, rdx
 * 0000000140BCB156: cmp     rax, rcx
 * 0000000140BCB159: jb      short loc_140BCB150
 * 0000000140BCB15B: mov     r10d, r9d
 * 0000000140BCB15E: mov     r8, r15
 * 0000000140BCB161: shr     r10d, 7
 * 0000000140BCB165: mov     edx, 1
 * 0000000140BCB16A: test    r10d, r10d
 * 0000000140BCB16D: jz      short loc_140BCB1E0
 * 0000000140BCB16F: mov     esi, 0FFFFFFFFh
 * 0000000140BCB174: mov     rdi, 7010008004002001h
 * 0000000140BCB17E: mov     eax, 8
 * 0000000140BCB183: xor     r8, [r11]
 * 0000000140BCB186: mov     ecx, r14d
 * 0000000140BCB189: rol     r8, cl
 * 0000000140BCB18C: xor     r8, [r11+8]
 * 0000000140BCB190: add     r11, 10h
 * 0000000140BCB194: rol     r8, cl
 * 0000000140BCB197: sub     rax, rdx
 * 0000000140BCB19A: jnz     short loc_140BCB183
 * 0000000140BCB19C: mov     rcx, r11
 * 0000000140BCB19F: sub     rcx, rbx
 * 0000000140BCB1A2: xor     rcx, r15
 * 0000000140BCB1A5: mov     rax, rcx
 * 0000000140BCB1A8: rol     rax, 11h
 * 0000000140BCB1AC: xor     rcx, rax
 * 0000000140BCB1AF: mov     rax, rdi
 * 0000000140BCB1B2: mul     rcx
 * 0000000140BCB1B5: xor     r14d, eax
 * 0000000140BCB1B8: mov     [rbp+8D0h+var_558], rdx
 * 0000000140BCB1BF: xor     r14d, edx
 * 0000000140BCB1C2: mov     edx, 1
 * 0000000140BCB1C7: and     r14d, 3Fh
 * 0000000140BCB1CB: cmovz   r14d, edx
 * 0000000140BCB1CF: add     r10d, esi
 * 0000000140BCB1D2: jnz     short loc_140BCB17E
 * 0000000140BCB1D4: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BCB1D9: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BCB1E0: and     r9d, 7Fh
 * 0000000140BCB1E4: cmp     r9d, 8
 * 0000000140BCB1E8: jb      short loc_140BCB207
 * 0000000140BCB1EA: mov     eax, r9d
 * 0000000140BCB1ED: shr     rax, 3
 * 0000000140BCB1F1: xor     r8, [r11]
 * 0000000140BCB1F4: mov     ecx, r14d
 * 0000000140BCB1F7: rol     r8, cl
 * 0000000140BCB1FA: add     r11, 8
 * 0000000140BCB1FE: add     r9d, 0FFFFFFF8h
 * 0000000140BCB202: sub     rax, rdx
 * 0000000140BCB205: jnz     short loc_140BCB1F1
 * 0000000140BCB207: xor     r10d, r10d
 * 0000000140BCB20A: test    r9d, r9d
 * 0000000140BCB20D: jz      short loc_140BCB22E
 * 0000000140BCB20F: mov     esi, 0FFFFFFFFh
 * 0000000140BCB214: movzx   eax, byte ptr [r11]
 * 0000000140BCB218: mov     ecx, r14d
 * 0000000140BCB21B: xor     r8, rax
 * 0000000140BCB21E: add     r11, rdx
 * 0000000140BCB221: rol     r8, cl
 * 0000000140BCB224: add     r9d, esi
 * 0000000140BCB227: jnz     short loc_140BCB214
 * 0000000140BCB229: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BCB22E: mov     rax, r8
 * 0000000140BCB231: jmp     short loc_140BCB236
 * 0000000140BCB233: xor     r8b, al
 * 0000000140BCB236: shr     rax, 7
 * 0000000140BCB23A: test    rax, rax
 * 0000000140BCB23D: jnz     short loc_140BCB233
 * 0000000140BCB23F: and     r8b, 7Fh
 * 0000000140BCB243: jmp     short loc_140BCB24B
 * 0000000140BCB245: xor     r10d, r10d
 * 0000000140BCB248: mov     r8b, 80h
 * 0000000140BCB24B: mov     rbx, [rbp+8D0h+var_930]
 * 0000000140BCB24F: mov     ecx, 0Ch
 * 0000000140BCB254: mov     r15d, [rbp+8D0h+var_938]
 * 0000000140BCB258: mov     r14d, [rsp+9D0h+var_958]
 * 0000000140BCB25D: mov     rax, [rbp+8D0h+var_940]
 * 0000000140BCB261: add     rbx, rcx
 * 0000000140BCB264: inc     [rbp+8D0h+var_940]
 * 0000000140BCB268: mov     [rbp+8D0h+var_930], rbx
 * 0000000140BCB26C: mov     [rax], r8b
 * 0000000140BCB26F: mov     rax, [rsp+9D0h+var_968]
 * 0000000140BCB274: mov     r8, [rbp+8D0h+var_908]
 * 0000000140BCB278: add     rax, rcx
 * 0000000140BCB27B: mov     [rsp+9D0h+var_968], rax
 * 0000000140BCB280: cmp     rax, r8
 * 0000000140BCB283: jz      short loc_140BCB289
 * 0000000140BCB285: mov     r12d, [rax+4]
 * 0000000140BCB289: cmp     r12d, r14d
 * 0000000140BCB28C: jbe     loc_140BCAF78
 * 0000000140BCB292: mov     ecx, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BCB298: test    r15d, r15d
 * 0000000140BCB29B: jnz     loc_140BCB42D
 * 0000000140BCB2A1: cmp     ecx, r14d
 * 0000000140BCB2A4: jz      loc_140BCB42D
 * 0000000140BCB2AA: mov     rax, [rbp+8D0h+var_920]
 * 0000000140BCB2AE: lea     rdx, [rbp+8D0h+var_7E0]
 * 0000000140BCB2B5: mov     r9d, r14d
 * 0000000140BCB2B8: lea     r8, [rbp+8D0h+var_6C8]
 * 0000000140BCB2BF: mov     [rax+0Ch], ecx
 * 0000000140BCB2C2: mov     [rax+10h], r14d
 * 0000000140BCB2C6: mov     eax, [rax+0Ch]
 * 0000000140BCB2C9: sub     r9d, eax
 * 0000000140BCB2CC: mov     ebx, eax
 * 0000000140BCB2CE: add     rbx, [rbp+8D0h+var_910]
 * 0000000140BCB2D2: mov     r11d, r9d
 * 0000000140BCB2D5: add     r11, rbx
 * 0000000140BCB2D8: xor     r15d, r15d
 * 0000000140BCB2DB: mov     r10d, r15d
 * 0000000140BCB2DE: lea     r12d, [r15+1]
 * 0000000140BCB2E2: mov     rcx, [r8]
 * 0000000140BCB2E5: mov     eax, [rdx]
 * 0000000140BCB2E7: add     rax, rcx
 * 0000000140BCB2EA: cmp     rbx, rax
 * 0000000140BCB2ED: jnb     short loc_140BCB2F8
 * 0000000140BCB2EF: cmp     r11, rcx
 * 0000000140BCB2F2: ja      loc_140BCB427
 * 0000000140BCB2F8: add     r10d, r12d
 * 0000000140BCB2FB: add     r8, 8
 * 0000000140BCB2FF: add     rdx, 4
 * 0000000140BCB303: cmp     r10d, 6
 * 0000000140BCB307: jb      short loc_140BCB2E2
 * 0000000140BCB309: add     [r13+848h], r9d
 * 0000000140BCB310: mov     r10, rbx
 * 0000000140BCB313: mov     r14d, [r13+834h]
 * 0000000140BCB31A: mov     rax, rbx
 * 0000000140BCB31D: mov     r15, [r13+838h]
 * 0000000140BCB324: mov     ecx, r9d
 * 0000000140BCB327: add     rcx, rbx
 * 0000000140BCB32A: cmp     rbx, rcx
 * 0000000140BCB32D: jnb     short loc_140BCB33F
 * 0000000140BCB32F: mov     edx, 40h ; '@'
 * 0000000140BCB334: prefetchnta byte ptr [rax]
 * 0000000140BCB337: add     rax, rdx
 * 0000000140BCB33A: cmp     rax, rcx
 * 0000000140BCB33D: jb      short loc_140BCB334
 * 0000000140BCB33F: mov     r11d, r9d
 * 0000000140BCB342: mov     r8, r15
 * 0000000140BCB345: shr     r11d, 7
 * 0000000140BCB349: test    r11d, r11d
 * 0000000140BCB34C: jz      short loc_140BCB3B5
 * 0000000140BCB34E: mov     rsi, 7010008004002001h
 * 0000000140BCB358: mov     eax, 8
 * 0000000140BCB35D: xor     r8, [r10]
 * 0000000140BCB360: mov     ecx, r14d
 * 0000000140BCB363: rol     r8, cl
 * 0000000140BCB366: xor     r8, [r10+8]
 * 0000000140BCB36A: add     r10, 10h
 * 0000000140BCB36E: rol     r8, cl
 * 0000000140BCB371: sub     rax, r12
 * 0000000140BCB374: jnz     short loc_140BCB35D
 * 0000000140BCB376: mov     rcx, r10
 * 0000000140BCB379: sub     rcx, rbx
 * 0000000140BCB37C: xor     rcx, r15
 * 0000000140BCB37F: mov     rax, rcx
 * 0000000140BCB382: rol     rax, 11h
 * 0000000140BCB386: xor     rcx, rax
 * 0000000140BCB389: mov     rax, rsi
 * 0000000140BCB38C: mul     rcx
 * 0000000140BCB38F: xor     r14d, eax
 * 0000000140BCB392: mov     [rbp+8D0h+var_550], rdx
 * 0000000140BCB399: xor     r14d, edx
 * 0000000140BCB39C: mov     edx, 0FFFFFFFFh
 * 0000000140BCB3A1: and     r14d, 3Fh
 * 0000000140BCB3A5: cmovz   r14d, r12d
 * 0000000140BCB3A9: add     r11d, edx
 * 0000000140BCB3AC: jnz     short loc_140BCB358
 * 0000000140BCB3AE: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BCB3B3: jmp     short loc_140BCB3BA
 * 0000000140BCB3B5: mov     edx, 0FFFFFFFFh
 * 0000000140BCB3BA: and     r9d, 7Fh
 * 0000000140BCB3BE: cmp     r9d, 8
 * 0000000140BCB3C2: jb      short loc_140BCB3E1
 * 0000000140BCB3C4: mov     eax, r9d
 * 0000000140BCB3C7: shr     rax, 3
 * 0000000140BCB3CB: xor     r8, [r10]
 * 0000000140BCB3CE: mov     ecx, r14d
 * 0000000140BCB3D1: rol     r8, cl
 * 0000000140BCB3D4: add     r10, 8
 * 0000000140BCB3D8: add     r9d, 0FFFFFFF8h
 * 0000000140BCB3DC: sub     rax, r12
 * 0000000140BCB3DF: jnz     short loc_140BCB3CB
 * 0000000140BCB3E1: xor     r15d, r15d
 * 0000000140BCB3E4: test    r9d, r9d
 * 0000000140BCB3E7: jz      short loc_140BCB3FE
 * 0000000140BCB3E9: movzx   eax, byte ptr [r10]
 * 0000000140BCB3ED: mov     ecx, r14d
 * 0000000140BCB3F0: xor     r8, rax
 * 0000000140BCB3F3: add     r10, r12
 * 0000000140BCB3F6: rol     r8, cl
 * 0000000140BCB3F9: add     r9d, edx
 * 0000000140BCB3FC: jnz     short loc_140BCB3E9
 * 0000000140BCB3FE: mov     rax, r8
 * 0000000140BCB401: jmp     short loc_140BCB406
 * 0000000140BCB403: xor     r8d, eax
 * 0000000140BCB406: shr     rax, 1Fh
 * 0000000140BCB40A: test    rax, rax
 * 0000000140BCB40D: jnz     short loc_140BCB403
 * 0000000140BCB40F: mov     r11, [rbp+8D0h+var_920]
 * 0000000140BCB413: btr     r8d, 1Fh
 * 0000000140BCB418: mov     r14d, [rsp+9D0h+var_958]
 * 0000000140BCB41D: mov     rbx, [rbp+8D0h+var_930]
 * 0000000140BCB421: mov     [r11+14h], r8d
 * 0000000140BCB425: jmp     short loc_140BCB434
 * 0000000140BCB427: mov     rbx, [rbp+8D0h+var_930]
 * 0000000140BCB42B: jmp     short loc_140BCB430
 * 0000000140BCB42D: xor     r15d, r15d
 * 0000000140BCB430: mov     r11, [rbp+8D0h+var_920]
 * 0000000140BCB434: mov     rdx, [rbp+8D0h+var_908]
 * 0000000140BCB438: cmp     rbx, rdx
 * 0000000140BCB43B: jz      short loc_140BCB480
 * 0000000140BCB43D: mov     eax, [rbx]
 * 0000000140BCB43F: mov     ecx, [rbx+4]
 * 0000000140BCB442: cmp     eax, dword ptr [rsp+9D0h+var_960]
 * 0000000140BCB446: jb      short loc_140BCB480
 * 0000000140BCB448: cmp     ecx, r14d
 * 0000000140BCB44B: ja      short loc_140BCB480
 * 0000000140BCB44D: mov     r8, [rsp+9D0h+var_968]
 * 0000000140BCB452: cmp     r8, rdx
 * 0000000140BCB455: jz      short loc_140BCB474
 * 0000000140BCB457: mov     rax, [rbp+8D0h+var_940]
 * 0000000140BCB45B: mov     byte ptr [rax], 80h
 * 0000000140BCB45E: inc     rax
 * 0000000140BCB461: mov     [rbp+8D0h+var_940], rax
 * 0000000140BCB465: mov     eax, 0Ch
 * 0000000140BCB46A: add     r8, rax
 * 0000000140BCB46D: mov     [rsp+9D0h+var_968], r8
 * 0000000140BCB472: jmp     short loc_140BCB479
 * 0000000140BCB474: mov     eax, 0Ch
 * 0000000140BCB479: add     rbx, rax
 * 0000000140BCB47C: mov     [rbp+8D0h+var_930], rbx
 * 0000000140BCB480: mov     r12, [rsp+9D0h+var_978]
 * 0000000140BCB485: add     r11, 18h
 * 0000000140BCB489: add     r12, 28h ; '('
 * 0000000140BCB48D: mov     [rbp+8D0h+var_920], r11
 * 0000000140BCB491: mov     r14d, 1
 * 0000000140BCB497: mov     [rsp+9D0h+var_978], r12
 * 0000000140BCB49C: cmp     r11, [rbp+8D0h+var_950]
 * 0000000140BCB4A0: jnz     loc_140BCAB71
 * 0000000140BCB4A6: mov     r13, [rbp+8D0h+var_8C0]
 * 0000000140BCB4AA: mov     [rbp+8D0h+var_8B8], r13
 * 0000000140BCB4AE: mov     ecx, r15d
 * 0000000140BCB4B1: mov     rbx, [rbp+8D0h+var_900]
 * 0000000140BCB4B5: mov     rdx, [rsp+9D0h+var_980]
 * 0000000140BCB4BA: mov     r8d, 80000000h
 * 0000000140BCB4C0: sub     rdx, rsi
 * 0000000140BCB4C3: mov     rsi, [rbp+8D0h+var_8B8]
 * 0000000140BCB4C7: add     rdx, rsi
 * 0000000140BCB4CA: mov     [rsp+9D0h+var_970], rsi
 * 0000000140BCB4CF: mov     [rsp+9D0h+var_980], rdx
 * 0000000140BCB4D4: lea     eax, [rcx+r8]
 * 0000000140BCB4D8: test    r8d, eax
 * 0000000140BCB4DB: jnz     short loc_140BCB4E5
 * 0000000140BCB4DD: cmp     ecx, 0C000010Eh
 * 0000000140BCB4E3: jnz     short loc_140BCB4E9
 * 0000000140BCB4E5: mov     [rdx+28h], rbx
 * 0000000140BCB4E9: mov     r13d, [rbp+8D0h+var_948]
 * 0000000140BCB4ED: jmp     loc_140BCBBBF
 * 0000000140BCB4F2: xor     edi, edi
 * 0000000140BCB4F4: mov     [rbp+8D0h+var_948], r15d
 * 0000000140BCB4F8: mov     r14, r13
 * 0000000140BCB4FB: mov     r12d, edi
 * 0000000140BCB4FE: mov     r13d, edi
 * 0000000140BCB501: mov     [rbp+8D0h+var_888], edi
 * 0000000140BCB504: lea     r8, [rbp+8D0h+var_808]
 * 0000000140BCB50B: mov     rax, [rsi+2F8h]
 * 0000000140BCB512: lea     rdx, [rbp+8D0h+var_888]
 * 0000000140BCB516: mov     ecx, r12d
 * 0000000140BCB519: call    KeGuardDispatchICall
 * 0000000140BCB51E: test    eax, eax
 * 0000000140BCB520: jz      loc_140BCB5B4
 * 0000000140BCB526: mov     rax, [rsi+2D8h]
 * 0000000140BCB52D: mov     rcx, [rbp+8D0h+var_808]
 * 0000000140BCB534: call    KeGuardDispatchICall
 * 0000000140BCB539: mov     rbx, rax
 * 0000000140BCB53C: test    rax, rax
 * 0000000140BCB53F: jz      short loc_140BCB58F
 * 0000000140BCB541: mov     rax, [rsi+2E0h]
 * 0000000140BCB548: inc     r15d
 * 0000000140BCB54B: mov     rcx, rbx
 * 0000000140BCB54E: mov     [rbp+8D0h+var_948], r15d
 * 0000000140BCB552: call    KeGuardDispatchICall
 * 0000000140BCB557: mov     r15, rax
 * 0000000140BCB55A: lea     rdx, [rbp+8D0h+var_548]
 * 0000000140BCB561: mov     rax, [rsi+218h]
 * 0000000140BCB568: mov     rcx, r15
 * 0000000140BCB56B: call    KeGuardDispatchICall
 * 0000000140BCB570: test    rax, rax
 * 0000000140BCB573: jz      short loc_140BCB5D7
 * 0000000140BCB575: mov     rax, [rsi+2E8h]
 * 0000000140BCB57C: mov     rdx, rbx
 * 0000000140BCB57F: mov     rcx, [rbp+8D0h+var_808]
 * 0000000140BCB586: call    KeGuardDispatchICall
 * 0000000140BCB58B: mov     r15d, [rbp+8D0h+var_948]
 * 0000000140BCB58F: mov     rax, [rsi+2F8h]
 * 0000000140BCB596: lea     r8, [rbp+8D0h+var_808]
 * 0000000140BCB59D: lea     rdx, [rbp+8D0h+var_888]
 * 0000000140BCB5A1: mov     ecx, r12d
 * 0000000140BCB5A4: call    KeGuardDispatchICall
 * 0000000140BCB5A9: test    eax, eax
 * 0000000140BCB5AB: jnz     loc_140BCB526
 * 0000000140BCB5B1: lea     ebx, [rax+1]
 * 0000000140BCB5B4: mov     r15d, [rbp+8D0h+var_948]
 * 0000000140BCB5B8: add     r12d, ebx
 * 0000000140BCB5BB: add     r13, rbx
 * 0000000140BCB5BE: cmp     r12d, 3
 * 0000000140BCB5C2: jb      loc_140BCB501
 * 0000000140BCB5C8: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BCB5CF: mov     r13d, r15d
 * 0000000140BCB5D2: jmp     loc_140BCBBC4
 * 0000000140BCB5D7: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BCB5E1: mov     ebx, 1
 * 0000000140BCB5E6: jz      short loc_140BCB630
 * 0000000140BCB5E8: mov     rcx, [rsi+0AC8h]
 * 0000000140BCB5EF: lea     edx, [rbx+2Fh]
 * 0000000140BCB5F2: lea     r8d, [rbx+5]
 * 0000000140BCB5F6: mov     rax, [r14]
 * 0000000140BCB5F9: add     edx, 0FFFFFFF8h
 * 0000000140BCB5FC: mov     [rcx], rax
 * 0000000140BCB5FF: add     r14, 8
 * 0000000140BCB603: add     rcx, 8
 * 0000000140BCB607: sub     r8, rbx
 * 0000000140BCB60A: jnz     short loc_140BCB5F6
 * 0000000140BCB60C: test    edx, edx
 * 0000000140BCB60E: jz      short loc_140BCB629
 * 0000000140BCB610: mov     esi, 0FFFFFFFFh
 * 0000000140BCB615: mov     al, [r14]
 * 0000000140BCB618: add     r14, rbx
 * 0000000140BCB61B: mov     [rcx], al
 * 0000000140BCB61D: add     rcx, rbx
 * 0000000140BCB620: add     edx, esi
 * 0000000140BCB622: jnz     short loc_140BCB615
 * 0000000140BCB624: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BCB629: mov     r14, [rsi+0AC8h]
 * 0000000140BCB630: mov     [r14+18h], r15
 * 0000000140BCB634: mov     rax, [rsi+588h]
 * 0000000140BCB63B: mov     [rax], r14
 * 0000000140BCB63E: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140BCB645: mov     rax, [rsi+588h]
 * 0000000140BCB64C: mov     [rax+8], r15
 * 0000000140BCB650: mov     dword ptr [rax+14h], 1000h
 * 0000000140BCB657: cmp     [rsi+918h], edi
 * 0000000140BCB65D: jnz     loc_140BCB5B4
 * 0000000140BCB663: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BCB66D: add     rax, rsi
 * 0000000140BCB670: mov     [rsi+920h], rax
 * 0000000140BCB677: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BCB681: add     rax, r14
 * 0000000140BCB684: mov     [rsi+928h], rax
 * 0000000140BCB68B: movsxd  rax, dword ptr [r14]
 * 0000000140BCB68E: mov     [rsi+930h], rax
 * 0000000140BCB695: mov     [rsi+938h], r13
 * 0000000140BCB69C: mov     [rsi+918h], ebx
 * 0000000140BCB6A2: mov     ecx, [rsi+9D8h]
 * 0000000140BCB6A8: bt      ecx, 1Dh
 * 0000000140BCB6AC: jb      loc_140BCB5B4
 * 0000000140BCB6B2: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCB6BC: jz      loc_140BCB5B4
 * 0000000140BCB6C2: test    bl, cl
 * 0000000140BCB6C4: jz      loc_140BCB5B4
 * 0000000140BCB6CA: mov     ecx, [rsi+0A74h]
 * 0000000140BCB6D0: mov     eax, [rsi+804h]
 * 0000000140BCB6D6: mov     r10, [rsi+838h]
 * 0000000140BCB6DD: sub     eax, ecx
 * 0000000140BCB6DF: mov     r8, [rsi+0A78h]
 * 0000000140BCB6E6: lea     rdx, [rcx+rsi]
 * 0000000140BCB6EA: mov     ecx, eax
 * 0000000140BCB6EC: shr     rcx, 3
 * 0000000140BCB6F0: lea     r9, [rdx+rcx*8]
 * 0000000140BCB6F4: jmp     short loc_140BCB717
 * 0000000140BCB6F6: xor     [rdx], r8
 * 0000000140BCB6F9: mov     rax, [rdx]
 * 0000000140BCB6FC: movzx   ecx, r8b
 * 0000000140BCB700: xor     rax, r10
 * 0000000140BCB703: and     ecx, 3Fh
 * 0000000140BCB706: ror     r8, cl
 * 0000000140BCB709: add     r8, rax
 * 0000000140BCB70C: xor     r8, 0EFAh
 * 0000000140BCB713: add     rdx, 8
 * 0000000140BCB717: cmp     rdx, r9
 * 0000000140BCB71A: jnz     short loc_140BCB6F6
 * 0000000140BCB71C: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCB724: cmp     r8, [rsi+0A80h]
 * 0000000140BCB72B: jz      loc_140BCB5B4
 * 0000000140BCB731: mov     ecx, [rsi+804h]
 * 0000000140BCB737: mov     rax, [rsi+588h]
 * 0000000140BCB73E: mov     [rax], rsi
 * 0000000140BCB741: mov     [rax+10h], ecx
 * 0000000140BCB744: mov     rcx, [rsi+0A80h]
 * 0000000140BCB74B: cmp     [rsi+918h], edi
 * 0000000140BCB751: jnz     short loc_140BCB761
 * 0000000140BCB753: mov     rax, [rsi+588h]
 * 0000000140BCB75A: xor     rcx, r8
 * 0000000140BCB75D: mov     [rax+18h], rcx
 * 0000000140BCB761: xor     edx, edx
 * 0000000140BCB763: mov     r9d, 100h
 * 0000000140BCB769: mov     rcx, rsi
 * 0000000140BCB76C: call    sub_140BDA384
 * 0000000140BCB771: jmp     loc_140BCB5B4
 * 0000000140BCB776: mov     rbx, r13
 * 0000000140BCB779: mov     [rbp+8D0h+var_7A0], r15
 * 0000000140BCB780: mov     r13d, r15d
 * 0000000140BCB783: mov     r15, cr8
 * 0000000140BCB787: mov     [rbp+8D0h+arg_8], r15
 * 0000000140BCB78E: mov     eax, 0Ch
 * 0000000140BCB793: mov     cr8, rax
 * 0000000140BCB797: mov     rax, [rsi+308h]
 * 0000000140BCB79E: lea     rcx, [rbp+8D0h+var_7A0]
 * 0000000140BCB7A5: call    KeGuardDispatchICall
 * 0000000140BCB7AA: mov     r14, rax
 * 0000000140BCB7AD: test    rax, rax
 * 0000000140BCB7B0: jz      loc_140BCB9A3
 * 0000000140BCB7B6: xor     edi, edi
 * 0000000140BCB7B8: lea     r15d, [rdi+1]
 * 0000000140BCB7BC: mov     rax, [rsi+218h]
 * 0000000140BCB7C3: lea     rdx, [rbp+8D0h+var_540]
 * 0000000140BCB7CA: mov     rcx, r14
 * 0000000140BCB7CD: add     r13d, r15d
 * 0000000140BCB7D0: call    KeGuardDispatchICall
 * 0000000140BCB7D5: test    rax, rax
 * 0000000140BCB7D8: jnz     loc_140BCB976
 * 0000000140BCB7DE: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BCB7E8: jz      short loc_140BCB830
 * 0000000140BCB7EA: mov     rcx, [rsi+0AC8h]
 * 0000000140BCB7F1: lea     edx, [rax+30h]
 * 0000000140BCB7F4: mov     r8, r12
 * 0000000140BCB7F7: mov     rax, [rbx]
 * 0000000140BCB7FA: add     edx, 0FFFFFFF8h
 * 0000000140BCB7FD: mov     [rcx], rax
 * 0000000140BCB800: add     rbx, 8
 * 0000000140BCB804: add     rcx, 8
 * 0000000140BCB808: sub     r8, r15
 * 0000000140BCB80B: jnz     short loc_140BCB7F7
 * 0000000140BCB80D: test    edx, edx
 * 0000000140BCB80F: jz      short loc_140BCB829
 * 0000000140BCB811: mov     esi, 0FFFFFFFFh
 * 0000000140BCB816: mov     al, [rbx]
 * 0000000140BCB818: add     rbx, r15
 * 0000000140BCB81B: mov     [rcx], al
 * 0000000140BCB81D: add     rcx, r15
 * 0000000140BCB820: add     edx, esi
 * 0000000140BCB822: jnz     short loc_140BCB816
 * 0000000140BCB824: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BCB829: mov     rbx, [rsi+0AC8h]
 * 0000000140BCB830: mov     [rbx+18h], r14
 * 0000000140BCB834: mov     rax, [rsi+588h]
 * 0000000140BCB83B: mov     [rax], rbx
 * 0000000140BCB83E: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140BCB845: mov     rax, [rsi+588h]
 * 0000000140BCB84C: mov     [rax+8], r14
 * 0000000140BCB850: mov     dword ptr [rax+14h], 1000h
 * 0000000140BCB857: cmp     [rsi+918h], edi
 * 0000000140BCB85D: jnz     loc_140BCB976
 * 0000000140BCB863: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BCB86D: add     rax, rsi
 * 0000000140BCB870: mov     [rsi+920h], rax
 * 0000000140BCB877: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BCB881: add     rax, rbx
 * 0000000140BCB884: mov     [rsi+928h], rax
 * 0000000140BCB88B: movsxd  rax, dword ptr [rbx]
 * 0000000140BCB88E: mov     [rsi+930h], rax
 * 0000000140BCB895: mov     qword ptr [rsi+938h], 4
 * 0000000140BCB8A0: mov     [rsi+918h], r15d
 * 0000000140BCB8A7: mov     ecx, [rsi+9D8h]
 * 0000000140BCB8AD: bt      ecx, 1Dh
 * 0000000140BCB8B1: jb      loc_140BCB976
 * 0000000140BCB8B7: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCB8C1: jz      loc_140BCB976
 * 0000000140BCB8C7: test    r15b, cl
 * 0000000140BCB8CA: jz      loc_140BCB976
 * 0000000140BCB8D0: mov     ecx, [rsi+0A74h]
 * 0000000140BCB8D6: mov     eax, [rsi+804h]
 * 0000000140BCB8DC: mov     r10, [rsi+838h]
 * 0000000140BCB8E3: sub     eax, ecx
 * 0000000140BCB8E5: mov     r8, [rsi+0A78h]
 * 0000000140BCB8EC: lea     rdx, [rcx+rsi]
 * 0000000140BCB8F0: mov     ecx, eax
 * 0000000140BCB8F2: shr     rcx, 3
 * 0000000140BCB8F6: lea     r9, [rdx+rcx*8]
 * 0000000140BCB8FA: jmp     short loc_140BCB91D
 * 0000000140BCB8FC: xor     [rdx], r8
 * 0000000140BCB8FF: mov     rax, [rdx]
 * 0000000140BCB902: movzx   ecx, r8b
 * 0000000140BCB906: xor     rax, r10
 * 0000000140BCB909: and     ecx, 3Fh
 * 0000000140BCB90C: ror     r8, cl
 * 0000000140BCB90F: add     r8, rax
 * 0000000140BCB912: xor     r8, 0EFAh
 * 0000000140BCB919: add     rdx, 8
 * 0000000140BCB91D: cmp     rdx, r9
 * 0000000140BCB920: jnz     short loc_140BCB8FC
 * 0000000140BCB922: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCB92A: cmp     r8, [rsi+0A80h]
 * 0000000140BCB931: jz      short loc_140BCB976
 * 0000000140BCB933: mov     rax, [rsi+588h]
 * 0000000140BCB93A: mov     ecx, [rsi+804h]
 * 0000000140BCB940: mov     [rax], rsi
 * 0000000140BCB943: mov     [rax+10h], ecx
 * 0000000140BCB946: mov     rax, [rsi+0A80h]
 * 0000000140BCB94D: cmp     [rsi+918h], edi
 * 0000000140BCB953: jnz     short loc_140BCB966
 * 0000000140BCB955: mov     rcx, r8
 * 0000000140BCB958: xor     rcx, rax
 * 0000000140BCB95B: mov     rax, [rsi+588h]
 * 0000000140BCB962: mov     [rax+18h], rcx
 * 0000000140BCB966: xor     edx, edx
 * 0000000140BCB968: mov     r9d, 100h
 * 0000000140BCB96E: mov     rcx, rsi
 * 0000000140BCB971: call    sub_140BDA384
 * 0000000140BCB976: mov     rax, [rsi+308h]
 * 0000000140BCB97D: lea     rcx, [rbp+8D0h+var_7A0]
 * 0000000140BCB984: call    KeGuardDispatchICall
 * 0000000140BCB989: mov     r14, rax
 * 0000000140BCB98C: test    rax, rax
 * 0000000140BCB98F: jnz     loc_140BCB7BC
 * 0000000140BCB995: mov     r15, [rbp+8D0h+arg_8]
 * 0000000140BCB99C: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BCB9A3: movzx   eax, r15b
 * 0000000140BCB9A7: mov     cr8, rax
 * 0000000140BCB9AB: jmp     loc_140BCBBBF
 * 0000000140BCB9B0: mov     [rbp+8D0h+var_790], r15
 * 0000000140BCB9B7: lea     rcx, [rbp+8D0h+var_790]
 * 0000000140BCB9BE: mov     rax, [rsi+300h]
 * 0000000140BCB9C5: mov     rbx, r13
 * 0000000140BCB9C8: mov     r13d, r15d
 * 0000000140BCB9CB: call    KeGuardDispatchICall
 * 0000000140BCB9D0: mov     r14, rax
 * 0000000140BCB9D3: test    rax, rax
 * 0000000140BCB9D6: jz      loc_140BCBBBF
 * 0000000140BCB9DC: mov     edi, 1
 * 0000000140BCB9E1: mov     rax, [rsi+218h]
 * 0000000140BCB9E8: lea     rdx, [rbp+8D0h+var_538]
 * 0000000140BCB9EF: mov     rcx, r14
 * 0000000140BCB9F2: add     r13d, edi
 * 0000000140BCB9F5: call    KeGuardDispatchICall
 * 0000000140BCB9FA: test    rax, rax
 * 0000000140BCB9FD: jnz     loc_140BCBB99
 * 0000000140BCBA03: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BCBA0D: jz      short loc_140BCBA55
 * 0000000140BCBA0F: mov     rcx, [rsi+0AC8h]
 * 0000000140BCBA16: lea     edx, [rax+30h]
 * 0000000140BCBA19: mov     r8, r12
 * 0000000140BCBA1C: mov     rax, [rbx]
 * 0000000140BCBA1F: add     edx, 0FFFFFFF8h
 * 0000000140BCBA22: mov     [rcx], rax
 * 0000000140BCBA25: add     rbx, 8
 * 0000000140BCBA29: add     rcx, 8
 * 0000000140BCBA2D: sub     r8, rdi
 * 0000000140BCBA30: jnz     short loc_140BCBA1C
 * 0000000140BCBA32: test    edx, edx
 * 0000000140BCBA34: jz      short loc_140BCBA4E
 * 0000000140BCBA36: mov     esi, 0FFFFFFFFh
 * 0000000140BCBA3B: mov     al, [rbx]
 * 0000000140BCBA3D: add     rbx, rdi
 * 0000000140BCBA40: mov     [rcx], al
 * 0000000140BCBA42: add     rcx, rdi
 * 0000000140BCBA45: add     edx, esi
 * 0000000140BCBA47: jnz     short loc_140BCBA3B
 * 0000000140BCBA49: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BCBA4E: mov     rbx, [rsi+0AC8h]
 * 0000000140BCBA55: mov     [rbx+18h], r14
 * 0000000140BCBA59: mov     rax, [rsi+588h]
 * 0000000140BCBA60: mov     [rax], rbx
 * 0000000140BCBA63: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140BCBA6A: mov     rax, [rsi+588h]
 * 0000000140BCBA71: mov     [rax+8], r14
 * 0000000140BCBA75: mov     dword ptr [rax+14h], 1000h
 * 0000000140BCBA7C: cmp     [rsi+918h], r15d
 * 0000000140BCBA83: jnz     loc_140BCBB99
 * 0000000140BCBA89: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BCBA93: add     rax, rsi
 * 0000000140BCBA96: mov     [rsi+920h], rax
 * 0000000140BCBA9D: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BCBAA7: add     rax, rbx
 * 0000000140BCBAAA: mov     [rsi+928h], rax
 * 0000000140BCBAB1: movsxd  rax, dword ptr [rbx]
 * 0000000140BCBAB4: mov     [rsi+930h], rax
 * 0000000140BCBABB: mov     qword ptr [rsi+938h], 3
 * 0000000140BCBAC6: mov     [rsi+918h], edi
 * 0000000140BCBACC: mov     ecx, [rsi+9D8h]
 * 0000000140BCBAD2: bt      ecx, 1Dh
 * 0000000140BCBAD6: jb      loc_140BCBB99
 * 0000000140BCBADC: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCBAE6: jz      loc_140BCBB99
 * 0000000140BCBAEC: test    dil, cl
 * 0000000140BCBAEF: jz      loc_140BCBB99
 * 0000000140BCBAF5: mov     ecx, [rsi+0A74h]
 * 0000000140BCBAFB: mov     eax, [rsi+804h]
 * 0000000140BCBB01: mov     r10, [rsi+838h]
 * 0000000140BCBB08: sub     eax, ecx
 * 0000000140BCBB0A: mov     r8, [rsi+0A78h]
 * 0000000140BCBB11: lea     rdx, [rcx+rsi]
 * 0000000140BCBB15: mov     ecx, eax
 * 0000000140BCBB17: shr     rcx, 3
 * 0000000140BCBB1B: lea     r9, [rdx+rcx*8]
 * 0000000140BCBB1F: jmp     short loc_140BCBB42
 * 0000000140BCBB21: xor     [rdx], r8
 * 0000000140BCBB24: mov     rax, [rdx]
 * 0000000140BCBB27: movzx   ecx, r8b
 * 0000000140BCBB2B: xor     rax, r10
 * 0000000140BCBB2E: and     ecx, 3Fh
 * 0000000140BCBB31: ror     r8, cl
 * 0000000140BCBB34: add     r8, rax
 * 0000000140BCBB37: xor     r8, 0EFAh
 * 0000000140BCBB3E: add     rdx, 8
 * 0000000140BCBB42: cmp     rdx, r9
 * 0000000140BCBB45: jnz     short loc_140BCBB21
 * 0000000140BCBB47: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCBB4F: cmp     r8, [rsi+0A80h]
 * 0000000140BCBB56: jz      short loc_140BCBB99
 * 0000000140BCBB58: mov     ecx, [rsi+804h]
 * 0000000140BCBB5E: mov     rax, [rsi+588h]
 * 0000000140BCBB65: mov     [rax], rsi
 * 0000000140BCBB68: mov     [rax+10h], ecx
 * 0000000140BCBB6B: mov     rcx, [rsi+0A80h]
 * 0000000140BCBB72: cmp     [rsi+918h], r15d
 * 0000000140BCBB79: jnz     short loc_140BCBB89
 * 0000000140BCBB7B: mov     rax, [rsi+588h]
 * 0000000140BCBB82: xor     rcx, r8
 * 0000000140BCBB85: mov     [rax+18h], rcx
 * 0000000140BCBB89: xor     edx, edx
 * 0000000140BCBB8B: mov     r9d, 100h
 * 0000000140BCBB91: mov     rcx, rsi
 * 0000000140BCBB94: call    sub_140BDA384
 * 0000000140BCBB99: mov     rax, [rsi+300h]
 * 0000000140BCBBA0: lea     rcx, [rbp+8D0h+var_790]
 * 0000000140BCBBA7: call    KeGuardDispatchICall
 * 0000000140BCBBAC: mov     r14, rax
 * 0000000140BCBBAF: test    rax, rax
 * 0000000140BCBBB2: jnz     loc_140BCB9E1
 * 0000000140BCBBB8: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BCBBBF: mov     ebx, 1
 * 0000000140BCBBC4: shl     r13d, 0Ch
 * 0000000140BCBBC8: xor     r15d, r15d
 * 0000000140BCBBCB: add     [rsi+848h], r13d
 * 0000000140BCBBD2: mov     eax, [rsi+848h]
 * 0000000140BCBBD8: add     [rsi+844h], ebx
 * 0000000140BCBBDE: cmp     eax, [rsi+84Ch]
 * 0000000140BCBBE4: jge     short loc_140BCBC05
 * 0000000140BCBBE6: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BCBBEB: lea     r12d, [r15+6]
 * 0000000140BCBBEF: mov     r11d, 1000h
 * 0000000140BCBBF5: lea     r14d, [r15+5]
 * 0000000140BCBBF9: jmp     loc_140BC8BBD
 * 0000000140BCBBFE: mov     [rsi+844h], r15d
 * 0000000140BCBC05: mov     [rsp+9D0h+var_970], rsi
 * 0000000140BCBC0A: jmp     loc_140BC5B5D
 * 0000000140BCBC0F: mov     edx, [r13+2Ch]
 * 0000000140BCBC13: lea     rcx, [rbp+8D0h+var_2F8]
 * 0000000140BCBC1A: mov     rax, [rsi+1B0h]
 * 0000000140BCBC21: mov     ebx, [r13+28h]
 * 0000000140BCBC25: call    KeGuardDispatchICall
 * 0000000140BCBC2A: mov     rax, [rsi+1E0h]
 * 0000000140BCBC31: lea     rdx, [rbp+8D0h+var_2E8]
 * 0000000140BCBC38: lea     rcx, [rbp+8D0h+var_2F8]
 * 0000000140BCBC3F: call    KeGuardDispatchICall
 * 0000000140BCBC44: test    ebx, ebx
 * 0000000140BCBC46: mov     rbx, cr4
 * 0000000140BCBC49: jnz     short loc_140BCBC4E
 * 0000000140BCBC4B: mov     rbx, cr0
 * 0000000140BCBC4E: mov     rax, [rsi+1A8h]
 * 0000000140BCBC55: lea     rcx, [rbp+8D0h+var_2E8]
 * 0000000140BCBC5C: call    KeGuardDispatchICall
 * 0000000140BCBC61: mov     r8, [r13+18h]
 * 0000000140BCBC65: mov     rdx, [r13+20h]
 * 0000000140BCBC69: and     r8, rbx
 * 0000000140BCBC6C: cmp     r8, rdx
 * 0000000140BCBC6F: jz      loc_140BC5D97
 * 0000000140BCBC75: mov     ecx, [r13+2Ch]
 * 0000000140BCBC79: mov     eax, [r13+28h]
 * 0000000140BCBC7D: shl     rcx, 20h
 * 0000000140BCBC81: or      rcx, rax
 * 0000000140BCBC84: cmp     [rsi+918h], r15d
 * 0000000140BCBC8B: jnz     loc_140BC5D97
 * 0000000140BCBC91: mov     rax, [rsi+588h]
 * 0000000140BCBC98: xor     rdx, r8
 * 0000000140BCBC9B: mov     [rax+18h], rdx
 * 0000000140BCBC9F: cmp     [rsi+918h], r15d
 * 0000000140BCBCA6: jnz     loc_140BC5D97
 * 0000000140BCBCAC: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BCBCB6: mov     ebx, 1
 * 0000000140BCBCBB: add     rax, rsi
 * 0000000140BCBCBE: mov     [rsi+920h], rax
 * 0000000140BCBCC5: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BCBCCF: add     rax, r13
 * 0000000140BCBCD2: mov     [rsi+928h], rax
 * 0000000140BCBCD9: movsxd  rax, dword ptr [r13+0]
 * 0000000140BCBCDD: mov     [rsi+930h], rax
 * 0000000140BCBCE4: mov     [rsi+938h], rcx
 * 0000000140BCBCEB: mov     [rsi+918h], ebx
 * 0000000140BCBCF1: mov     ecx, [rsi+9D8h]
 * 0000000140BCBCF7: bt      ecx, 1Dh
 * 0000000140BCBCFB: jb      loc_140BD0398
 * 0000000140BCBD01: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCBD0B: jz      loc_140BD0398
 * 0000000140BCBD11: test    bl, cl
 * 0000000140BCBD13: jz      loc_140BD0398
 * 0000000140BCBD19: mov     ecx, [rsi+0A74h]
 * 0000000140BCBD1F: mov     eax, [rsi+804h]
 * 0000000140BCBD25: mov     r10, [rsi+838h]
 * 0000000140BCBD2C: sub     eax, ecx
 * 0000000140BCBD2E: mov     r8, [rsi+0A78h]
 * 0000000140BCBD35: lea     rdx, [rcx+rsi]
 * 0000000140BCBD39: mov     ecx, eax
 * 0000000140BCBD3B: shr     rcx, 3
 * 0000000140BCBD3F: lea     r9, [rdx+rcx*8]
 * 0000000140BCBD43: jmp     short loc_140BCBD66
 * 0000000140BCBD45: xor     [rdx], r8
 * 0000000140BCBD48: mov     rax, [rdx]
 * 0000000140BCBD4B: movzx   ecx, r8b
 * 0000000140BCBD4F: xor     rax, r10
 * 0000000140BCBD52: and     ecx, 3Fh
 * 0000000140BCBD55: ror     r8, cl
 * 0000000140BCBD58: add     r8, rax
 * 0000000140BCBD5B: xor     r8, 0EFAh
 * 0000000140BCBD62: add     rdx, 8
 * 0000000140BCBD66: cmp     rdx, r9
 * 0000000140BCBD69: jnz     short loc_140BCBD45
 * 0000000140BCBD6B: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCBD73: cmp     r8, [rsi+0A80h]
 * 0000000140BCBD7A: jz      loc_140BD0398
 * 0000000140BCBD80: mov     ecx, [rsi+804h]
 * 0000000140BCBD86: mov     rax, [rsi+588h]
 * 0000000140BCBD8D: mov     [rax], rsi
 * 0000000140BCBD90: mov     [rax+10h], ecx
 * 0000000140BCBD93: mov     rcx, [rsi+0A80h]
 * 0000000140BCBD9A: cmp     [rsi+918h], r15d
 * 0000000140BCBDA1: jnz     short loc_140BCBDB1
 * 0000000140BCBDA3: xor     rcx, r8
 * 0000000140BCBDA6: mov     rax, [rsi+588h]
 * 0000000140BCBDAD: mov     [rax+18h], rcx
 * 0000000140BCBDB1: xor     edx, edx
 * 0000000140BCBDB3: mov     r9d, 100h
 * 0000000140BCBDB9: mov     rcx, rsi
 * 0000000140BCBDBC: call    sub_140BDA384
 * 0000000140BCBDC1: jmp     loc_140BD0398
 * 0000000140BCBDC6: mov     r9, [r13+8]
 * 0000000140BCBDCA: mov     r8d, [rsi+844h]
 * 0000000140BCBDD1: mov     [rbp+8D0h+var_920], r9
 * 0000000140BCBDD5: lea     rax, [r8+r8*2]
 * 0000000140BCBDD9: lea     rcx, [r9+rax*4]
 * 0000000140BCBDDD: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140BCBDE7: lea     r11, [rcx+0Ch]
 * 0000000140BCBDEB: mov     [rbp+8D0h+arg_8], rcx
 * 0000000140BCBDF2: mov     ecx, [r13+24h]
 * 0000000140BCBDF6: mul     rcx
 * 0000000140BCBDF9: mov     [rsp+9D0h+var_968], r11
 * 0000000140BCBDFE: mov     r10, rdx
 * 0000000140BCBE01: shr     r10, 3
 * 0000000140BCBE05: mov     eax, r10d
 * 0000000140BCBE08: mov     [rbp+8D0h+var_908], r10
 * 0000000140BCBE0C: lea     rcx, [rax+rax*2]
 * 0000000140BCBE10: lea     rax, [r9+rcx*4]
 * 0000000140BCBE14: mov     [rbp+8D0h+var_900], rax
 * 0000000140BCBE18: lea     rax, [r13+30h]
 * 0000000140BCBE1C: lea     r12, [r8+rax]
 * 0000000140BCBE20: mov     [rsp+9D0h+var_978], r12
 * 0000000140BCBE25: lea     r9d, [r10-1]
 * 0000000140BCBE29: test    r10d, r10d
 * 0000000140BCBE2C: jz      short loc_140BCBE3E
 * 0000000140BCBE2E: mov     edx, r9d
 * 0000000140BCBE31: add     rdx, 7
 * 0000000140BCBE35: and     rdx, 0FFFFFFFFFFFFFFF8h
 * 0000000140BCBE39: add     rdx, rax
 * 0000000140BCBE3C: jmp     short loc_140BCBE41
 * 0000000140BCBE3E: mov     rdx, rax
 * 0000000140BCBE41: movzx   eax, word ptr [r13+28h]
 * 0000000140BCBE46: mov     [rbp+8D0h+var_940], rdx
 * 0000000140BCBE4A: lea     rcx, [rax+rax*2]
 * 0000000140BCBE4E: lea     rax, [rdx+rcx*8]
 * 0000000140BCBE52: mov     [rbp+8D0h+var_930], rax
 * 0000000140BCBE56: test    r10d, r10d
 * 0000000140BCBE59: jz      loc_140BCC0E7
 * 0000000140BCBE5F: cmp     r8d, r9d
 * 0000000140BCBE62: jnb     loc_140BCC0DA
 * 0000000140BCBE68: mov     rdi, [rbp+8D0h+arg_8]
 * 0000000140BCBE6F: cmp     [r12], r15b
 * 0000000140BCBE73: jl      loc_140BCC074
 * 0000000140BCBE79: mov     eax, [rdi+4]
 * 0000000140BCBE7C: mov     r14d, [r11]
 * 0000000140BCBE7F: mov     r15d, eax
 * 0000000140BCBE82: add     r15, [r13+18h]
 * 0000000140BCBE86: sub     r14d, eax
 * 0000000140BCBE89: add     [rsi+848h], r14d
 * 0000000140BCBE90: mov     r9, r15
 * 0000000140BCBE93: mov     r11d, [rsi+834h]
 * 0000000140BCBE9A: mov     rax, r15
 * 0000000140BCBE9D: mov     rbx, [rsi+838h]
 * 0000000140BCBEA4: mov     ecx, r14d
 * 0000000140BCBEA7: add     rcx, r15
 * 0000000140BCBEAA: mov     [rbp+8D0h+var_950], r15
 * 0000000140BCBEAE: cmp     r15, rcx
 * 0000000140BCBEB1: jnb     short loc_140BCBEC3
 * 0000000140BCBEB3: mov     edx, 40h ; '@'
 * 0000000140BCBEB8: prefetchnta byte ptr [rax]
 * 0000000140BCBEBB: add     rax, rdx
 * 0000000140BCBEBE: cmp     rax, rcx
 * 0000000140BCBEC1: jb      short loc_140BCBEB8
 * 0000000140BCBEC3: mov     r10d, r14d
 * 0000000140BCBEC6: mov     r8, rbx
 * 0000000140BCBEC9: shr     r10d, 7
 * 0000000140BCBECD: mov     r13d, 1
 * 0000000140BCBED3: test    r10d, r10d
 * 0000000140BCBED6: jz      short loc_140BCBF42
 * 0000000140BCBED8: mov     esi, 0FFFFFFFFh
 * 0000000140BCBEDD: mov     r12, 7010008004002001h
 * 0000000140BCBEE7: mov     eax, 8
 * 0000000140BCBEEC: xor     r8, [r9]
 * 0000000140BCBEEF: mov     ecx, r11d
 * 0000000140BCBEF2: rol     r8, cl
 * 0000000140BCBEF5: xor     r8, [r9+8]
 * 0000000140BCBEF9: add     r9, 10h
 * 0000000140BCBEFD: rol     r8, cl
 * 0000000140BCBF00: sub     rax, r13
 * 0000000140BCBF03: jnz     short loc_140BCBEEC
 * 0000000140BCBF05: mov     rcx, r9
 * 0000000140BCBF08: sub     rcx, r15
 * 0000000140BCBF0B: xor     rcx, rbx
 * 0000000140BCBF0E: mov     rax, rcx
 * 0000000140BCBF11: rol     rax, 11h
 * 0000000140BCBF15: xor     rcx, rax
 * 0000000140BCBF18: mov     rax, r12
 * 0000000140BCBF1B: mul     rcx
 * 0000000140BCBF1E: xor     r11d, edx
 * 0000000140BCBF21: mov     [rbp+8D0h+var_530], rdx
 * 0000000140BCBF28: xor     r11d, eax
 * 0000000140BCBF2B: and     r11d, 3Fh
 * 0000000140BCBF2F: cmovz   r11d, r13d
 * 0000000140BCBF33: add     r10d, esi
 * 0000000140BCBF36: jnz     short loc_140BCBEE7
 * 0000000140BCBF38: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BCBF3D: mov     r12, [rsp+9D0h+var_978]
 * 0000000140BCBF42: mov     edx, r14d
 * 0000000140BCBF45: and     edx, 7Fh
 * 0000000140BCBF48: cmp     edx, 8
 * 0000000140BCBF4B: jb      short loc_140BCBF68
 * 0000000140BCBF4D: mov     eax, edx
 * 0000000140BCBF4F: shr     rax, 3
 * 0000000140BCBF53: xor     r8, [r9]
 * 0000000140BCBF56: mov     ecx, r11d
 * 0000000140BCBF59: rol     r8, cl
 * 0000000140BCBF5C: add     r9, 8
 * 0000000140BCBF60: add     edx, 0FFFFFFF8h
 * 0000000140BCBF63: sub     rax, r13
 * 0000000140BCBF66: jnz     short loc_140BCBF53
 * 0000000140BCBF68: xor     r10d, r10d
 * 0000000140BCBF6B: test    edx, edx
 * 0000000140BCBF6D: jz      short loc_140BCBF8F
 * 0000000140BCBF6F: mov     r12d, 0FFFFFFFFh
 * 0000000140BCBF75: movzx   eax, byte ptr [r9]
 * 0000000140BCBF79: mov     ecx, r11d
 * 0000000140BCBF7C: xor     r8, rax
 * 0000000140BCBF7F: add     r9, r13
 * 0000000140BCBF82: rol     r8, cl
 * 0000000140BCBF85: add     edx, r12d
 * 0000000140BCBF88: jnz     short loc_140BCBF75
 * 0000000140BCBF8A: mov     r12, [rsp+9D0h+var_978]
 * 0000000140BCBF8F: mov     rax, r8
 * 0000000140BCBF92: jmp     short loc_140BCBF97
 * 0000000140BCBF94: xor     r8b, al
 * 0000000140BCBF97: shr     rax, 7
 * 0000000140BCBF9B: test    rax, rax
 * 0000000140BCBF9E: jnz     short loc_140BCBF94
 * 0000000140BCBFA0: movzx   eax, byte ptr [r12]
 * 0000000140BCBFA5: movzx   r13d, r8b
 * 0000000140BCBFA9: and     eax, 7Fh
 * 0000000140BCBFAC: and     r13d, 7Fh
 * 0000000140BCBFB0: cmp     r13d, eax
 * 0000000140BCBFB3: jz      loc_140BCC057
 * 0000000140BCBFB9: mov     ecx, r14d
 * 0000000140BCBFBC: test    r14d, r14d
 * 0000000140BCBFBF: jz      loc_140BCC122
 * 0000000140BCBFC5: mov     eax, [rsi+9DCh]
 * 0000000140BCBFCB: mov     edx, 40h ; '@'
 * 0000000140BCBFD0: test    dl, al
 * 0000000140BCBFD2: jz      loc_140BCC122
 * 0000000140BCBFD8: mov     r14, cr8
 * 0000000140BCBFDC: mov     rbx, r15
 * 0000000140BCBFDF: lea     r12, [r15-1]
 * 0000000140BCBFE3: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140BCBFEA: add     r12, rcx
 * 0000000140BCBFED: or      r12, 0FFFh
 * 0000000140BCBFF4: lea     r15, [rbx-1]
 * 0000000140BCBFF8: mov     eax, 2
 * 0000000140BCBFFD: mov     cr8, rax
 * 0000000140BCC001: mov     rax, [rsi+468h]
 * 0000000140BCC008: xor     edx, edx
 * 0000000140BCC00A: mov     rcx, rbx
 * 0000000140BCC00D: call    KeGuardDispatchICall
 * 0000000140BCC012: cmp     eax, 0C000022Dh
 * 0000000140BCC017: jnz     short loc_140BCC02F
 * 0000000140BCC019: mov     eax, 1
 * 0000000140BCC01E: cmp     r14b, al
 * 0000000140BCC021: ja      short loc_140BCC03A
 * 0000000140BCC023: movzx   eax, r14b
 * 0000000140BCC027: mov     cr8, rax
 * 0000000140BCC02B: mov     al, [rbx]
 * 0000000140BCC02D: jmp     short loc_140BCBFF8
 * 0000000140BCC02F: xor     r10d, r10d
 * 0000000140BCC032: test    eax, eax
 * 0000000140BCC034: js      loc_140BCC111
 * 0000000140BCC03A: mov     eax, 1000h
 * 0000000140BCC03F: add     rbx, rax
 * 0000000140BCC042: add     r15, rax
 * 0000000140BCC045: cmp     r15, r12
 * 0000000140BCC048: jnz     short loc_140BCC001
 * 0000000140BCC04A: movzx   eax, r14b
 * 0000000140BCC04E: mov     cr8, rax
 * 0000000140BCC052: mov     r12, [rsp+9D0h+var_978]
 * 0000000140BCC057: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BCC05C: mov     ebx, 1
 * 0000000140BCC061: xor     r15d, r15d
 * 0000000140BCC064: mov     r11, [rsp+9D0h+var_968]
 * 0000000140BCC069: mov     ecx, 40h ; '@'
 * 0000000140BCC06E: add     [rsi+848h], ecx
 * 0000000140BCC074: mov     eax, 0Ch
 * 0000000140BCC079: add     r12, rbx
 * 0000000140BCC07C: add     r11, rax
 * 0000000140BCC07F: mov     [rsp+9D0h+var_978], r12
 * 0000000140BCC084: add     rdi, rax
 * 0000000140BCC087: mov     [rsp+9D0h+var_968], r11
 * 0000000140BCC08C: cmp     r11, [rbp+8D0h+var_900]
 * 0000000140BCC090: jnb     short loc_140BCC0A4
 * 0000000140BCC092: mov     eax, [rsi+84Ch]
 * 0000000140BCC098: cmp     [rsi+848h], eax
 * 0000000140BCC09E: jl      loc_140BCBE6F
 * 0000000140BCC0A4: sub     rdi, [rbp+8D0h+var_920]
 * 0000000140BCC0A8: mov     rax, 2AAAAAAAAAAAAAABh
 * 0000000140BCC0B2: mov     r10, [rbp+8D0h+var_908]
 * 0000000140BCC0B6: imul    rdi
 * 0000000140BCC0B9: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BCC0C0: sar     rdx, 1
 * 0000000140BCC0C3: mov     rax, rdx
 * 0000000140BCC0C6: shr     rax, 3Fh
 * 0000000140BCC0CA: add     rdx, rax
 * 0000000140BCC0CD: mov     [rsi+844h], edx
 * 0000000140BCC0D3: mov     r8d, edx
 * 0000000140BCC0D6: mov     rdx, [rbp+8D0h+var_940]
 * 0000000140BCC0DA: lea     eax, [r10-1]
 * 0000000140BCC0DE: cmp     r8d, eax
 * 0000000140BCC0E1: jb      loc_140BC5B5D
 * 0000000140BCC0E7: mov     eax, [rsi+84Ch]
 * 0000000140BCC0ED: cmp     [rsi+848h], eax
 * 0000000140BCC0F3: jge     loc_140BC5B5D
 * 0000000140BCC0F9: test    r10d, r10d
 * 0000000140BCC0FC: jz      loc_140BCC277
 * 0000000140BCC102: sub     r8d, r10d
 * 0000000140BCC105: add     r8d, ebx
 * 0000000140BCC108: lea     rcx, [r8+r8*2]
 * 0000000140BCC10C: jmp     loc_140BCC27E
 * 0000000140BCC111: movzx   eax, r14b
 * 0000000140BCC115: mov     cr8, rax
 * 0000000140BCC119: mov     r15, [rbp+8D0h+var_950]
 * 0000000140BCC11D: mov     r12, [rsp+9D0h+var_978]
 * 0000000140BCC122: movzx   eax, byte ptr [r12]
 * 0000000140BCC127: and     eax, 7Fh
 * 0000000140BCC12A: cmp     [rsi+918h], r10d
 * 0000000140BCC131: jnz     loc_140BCC057
 * 0000000140BCC137: mov     ecx, r13d
 * 0000000140BCC13A: xor     rcx, rax
 * 0000000140BCC13D: mov     rax, [rsi+588h]
 * 0000000140BCC144: mov     [rax+18h], rcx
 * 0000000140BCC148: cmp     [rsi+918h], r10d
 * 0000000140BCC14F: jnz     loc_140BCC057
 * 0000000140BCC155: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BCC15A: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BCC164: add     rax, rsi
 * 0000000140BCC167: mov     ebx, 1
 * 0000000140BCC16C: mov     [rsi+920h], rax
 * 0000000140BCC173: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BCC17D: add     rax, r13
 * 0000000140BCC180: mov     [rsi+928h], rax
 * 0000000140BCC187: movsxd  rax, dword ptr [r13+0]
 * 0000000140BCC18B: mov     [rsi+930h], rax
 * 0000000140BCC192: mov     [rsi+938h], r15
 * 0000000140BCC199: mov     [rsi+918h], ebx
 * 0000000140BCC19F: mov     ecx, [rsi+9D8h]
 * 0000000140BCC1A5: bt      ecx, 1Dh
 * 0000000140BCC1A9: jb      loc_140BCC061
 * 0000000140BCC1AF: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCC1B9: jz      loc_140BCC061
 * 0000000140BCC1BF: test    bl, cl
 * 0000000140BCC1C1: jz      loc_140BCC061
 * 0000000140BCC1C7: mov     ecx, [rsi+0A74h]
 * 0000000140BCC1CD: mov     eax, [rsi+804h]
 * 0000000140BCC1D3: mov     r10, [rsi+838h]
 * 0000000140BCC1DA: sub     eax, ecx
 * 0000000140BCC1DC: mov     r8, [rsi+0A78h]
 * 0000000140BCC1E3: lea     rdx, [rcx+rsi]
 * 0000000140BCC1E7: mov     ecx, eax
 * 0000000140BCC1E9: shr     rcx, 3
 * 0000000140BCC1ED: lea     r9, [rdx+rcx*8]
 * 0000000140BCC1F1: jmp     short loc_140BCC214
 * 0000000140BCC1F3: xor     [rdx], r8
 * 0000000140BCC1F6: mov     rax, [rdx]
 * 0000000140BCC1F9: movzx   ecx, r8b
 * 0000000140BCC1FD: xor     rax, r10
 * 0000000140BCC200: and     ecx, 3Fh
 * 0000000140BCC203: ror     r8, cl
 * 0000000140BCC206: add     r8, rax
 * 0000000140BCC209: xor     r8, 0EFAh
 * 0000000140BCC210: add     rdx, 8
 * 0000000140BCC214: cmp     rdx, r9
 * 0000000140BCC217: jnz     short loc_140BCC1F3
 * 0000000140BCC219: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCC221: cmp     r8, [rsi+0A80h]
 * 0000000140BCC228: jz      loc_140BCC061
 * 0000000140BCC22E: mov     ecx, [rsi+804h]
 * 0000000140BCC234: xor     r15d, r15d
 * 0000000140BCC237: mov     rax, [rsi+588h]
 * 0000000140BCC23E: mov     [rax], rsi
 * 0000000140BCC241: mov     [rax+10h], ecx
 * 0000000140BCC244: mov     rcx, [rsi+0A80h]
 * 0000000140BCC24B: cmp     [rsi+918h], r15d
 * 0000000140BCC252: jnz     short loc_140BCC262
 * 0000000140BCC254: mov     rax, [rsi+588h]
 * 0000000140BCC25B: xor     rcx, r8
 * 0000000140BCC25E: mov     [rax+18h], rcx
 * 0000000140BCC262: xor     edx, edx
 * 0000000140BCC264: mov     r9d, 100h
 * 0000000140BCC26A: mov     rcx, rsi
 * 0000000140BCC26D: call    sub_140BDA384
 * 0000000140BCC272: jmp     loc_140BCC064
 * 0000000140BCC277: mov     eax, r8d
 * 0000000140BCC27A: lea     rcx, [rax+rax*2]
 * 0000000140BCC27E: lea     rcx, [rdx+rcx*8]
 * 0000000140BCC282: mov     [rbp+8D0h+var_940], rcx
 * 0000000140BCC286: mov     rdi, [rsp+9D0h+var_980]
 * 0000000140BCC28B: lea     r15, [rcx+8]
 * 0000000140BCC28F: mov     eax, 2
 * 0000000140BCC294: mov     [rsp+9D0h+var_978], r15
 * 0000000140BCC299: xor     edx, edx
 * 0000000140BCC29B: mov     [rsp+9D0h+var_968], rax
 * 0000000140BCC2A0: mov     r13d, eax
 * 0000000140BCC2A3: lea     eax, [rdx+0Ch]
 * 0000000140BCC2A6: cmp     [r15], edx
 * 0000000140BCC2A9: jl      loc_140BCC5FA
 * 0000000140BCC2AF: mov     eax, [r15-8]
 * 0000000140BCC2B3: mov     r14d, [r15-4]
 * 0000000140BCC2B7: mov     r12d, eax
 * 0000000140BCC2BA: add     r12, [rdi+18h]
 * 0000000140BCC2BE: sub     r14d, eax
 * 0000000140BCC2C1: add     [rsi+848h], r14d
 * 0000000140BCC2C8: mov     r8, r12
 * 0000000140BCC2CB: mov     r10d, [rsi+834h]
 * 0000000140BCC2D2: mov     rax, r12
 * 0000000140BCC2D5: mov     r11, [rsi+838h]
 * 0000000140BCC2DC: mov     ecx, r14d
 * 0000000140BCC2DF: add     rcx, r12
 * 0000000140BCC2E2: mov     [rbp+8D0h+var_950], r12
 * 0000000140BCC2E6: cmp     r12, rcx
 * 0000000140BCC2E9: jnb     short loc_140BCC2FC
 * 0000000140BCC2EB: mov     r9d, 40h ; '@'
 * 0000000140BCC2F1: prefetchnta byte ptr [rax]
 * 0000000140BCC2F4: add     rax, r9
 * 0000000140BCC2F7: cmp     rax, rcx
 * 0000000140BCC2FA: jb      short loc_140BCC2F1
 * 0000000140BCC2FC: mov     r9d, r14d
 * 0000000140BCC2FF: mov     rbx, r11
 * 0000000140BCC302: shr     r9d, 7
 * 0000000140BCC306: test    r9d, r9d
 * 0000000140BCC309: jz      short loc_140BCC37F
 * 0000000140BCC30B: mov     esi, 0FFFFFFFFh
 * 0000000140BCC310: mov     r13d, 1
 * 0000000140BCC316: mov     r15, 7010008004002001h
 * 0000000140BCC320: mov     eax, 8
 * 0000000140BCC325: xor     rbx, [r8]
 * 0000000140BCC328: mov     ecx, r10d
 * 0000000140BCC32B: rol     rbx, cl
 * 0000000140BCC32E: xor     rbx, [r8+8]
 * 0000000140BCC332: add     r8, 10h
 * 0000000140BCC336: rol     rbx, cl
 * 0000000140BCC339: sub     rax, r13
 * 0000000140BCC33C: jnz     short loc_140BCC325
 * 0000000140BCC33E: mov     rcx, r8
 * 0000000140BCC341: sub     rcx, r12
 * 0000000140BCC344: xor     rcx, r11
 * 0000000140BCC347: mov     rax, rcx
 * 0000000140BCC34A: rol     rax, 11h
 * 0000000140BCC34E: xor     rcx, rax
 * 0000000140BCC351: mov     rax, r15
 * 0000000140BCC354: mul     rcx
 * 0000000140BCC357: xor     eax, edx
 * 0000000140BCC359: mov     [rbp+8D0h+var_528], rdx
 * 0000000140BCC360: xor     r10d, eax
 * 0000000140BCC363: and     r10d, 3Fh
 * 0000000140BCC367: cmovz   r10d, r13d
 * 0000000140BCC36B: add     r9d, esi
 * 0000000140BCC36E: jnz     short loc_140BCC320
 * 0000000140BCC370: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BCC375: mov     r15, [rsp+9D0h+var_978]
 * 0000000140BCC37A: mov     r13, [rsp+9D0h+var_968]
 * 0000000140BCC37F: mov     edx, r14d
 * 0000000140BCC382: mov     r9d, 1
 * 0000000140BCC388: and     edx, 7Fh
 * 0000000140BCC38B: cmp     edx, 8
 * 0000000140BCC38E: jb      short loc_140BCC3AB
 * 0000000140BCC390: mov     eax, edx
 * 0000000140BCC392: shr     rax, 3
 * 0000000140BCC396: xor     rbx, [r8]
 * 0000000140BCC399: mov     ecx, r10d
 * 0000000140BCC39C: rol     rbx, cl
 * 0000000140BCC39F: add     r8, 8
 * 0000000140BCC3A3: add     edx, 0FFFFFFF8h
 * 0000000140BCC3A6: sub     rax, r9
 * 0000000140BCC3A9: jnz     short loc_140BCC396
 * 0000000140BCC3AB: xor     r11d, r11d
 * 0000000140BCC3AE: test    edx, edx
 * 0000000140BCC3B0: jz      short loc_140BCC3D2
 * 0000000140BCC3B2: mov     r15d, 0FFFFFFFFh
 * 0000000140BCC3B8: movzx   eax, byte ptr [r8]
 * 0000000140BCC3BC: mov     ecx, r10d
 * 0000000140BCC3BF: xor     rbx, rax
 * 0000000140BCC3C2: add     r8, r9
 * 0000000140BCC3C5: rol     rbx, cl
 * 0000000140BCC3C8: add     edx, r15d
 * 0000000140BCC3CB: jnz     short loc_140BCC3B8
 * 0000000140BCC3CD: mov     r15, [rsp+9D0h+var_978]
 * 0000000140BCC3D2: mov     rax, rbx
 * 0000000140BCC3D5: jmp     short loc_140BCC3D9
 * 0000000140BCC3D7: xor     ebx, eax
 * 0000000140BCC3D9: shr     rax, 1Fh
 * 0000000140BCC3DD: test    rax, rax
 * 0000000140BCC3E0: jnz     short loc_140BCC3D7
 * 0000000140BCC3E2: mov     eax, [r15]
 * 0000000140BCC3E5: btr     ebx, 1Fh
 * 0000000140BCC3E9: btr     eax, 1Fh
 * 0000000140BCC3ED: cmp     ebx, eax
 * 0000000140BCC3EF: jz      loc_140BCC602
 * 0000000140BCC3F5: mov     ecx, r14d
 * 0000000140BCC3F8: test    r14d, r14d
 * 0000000140BCC3FB: jz      loc_140BCC4B7
 * 0000000140BCC401: mov     eax, [rsi+9DCh]
 * 0000000140BCC407: mov     edx, 40h ; '@'
 * 0000000140BCC40C: test    dl, al
 * 0000000140BCC40E: jz      loc_140BCC4B7
 * 0000000140BCC414: mov     r15, cr8
 * 0000000140BCC418: mov     r14, r12
 * 0000000140BCC41B: lea     r13, [r12-1]
 * 0000000140BCC420: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140BCC427: add     r13, rcx
 * 0000000140BCC42A: or      r13, 0FFFh
 * 0000000140BCC431: lea     r12, [r14-1]
 * 0000000140BCC435: mov     eax, 2
 * 0000000140BCC43A: mov     cr8, rax
 * 0000000140BCC43E: mov     rax, [rsi+468h]
 * 0000000140BCC445: xor     edx, edx
 * 0000000140BCC447: mov     rcx, r14
 * 0000000140BCC44A: call    KeGuardDispatchICall
 * 0000000140BCC44F: cmp     eax, 0C000022Dh
 * 0000000140BCC454: jnz     short loc_140BCC46D
 * 0000000140BCC456: mov     eax, 1
 * 0000000140BCC45B: cmp     r15b, al
 * 0000000140BCC45E: ja      short loc_140BCC474
 * 0000000140BCC460: movzx   eax, r15b
 * 0000000140BCC464: mov     cr8, rax
 * 0000000140BCC468: mov     al, [r14]
 * 0000000140BCC46B: jmp     short loc_140BCC435
 * 0000000140BCC46D: xor     r11d, r11d
 * 0000000140BCC470: test    eax, eax
 * 0000000140BCC472: js      short loc_140BCC4A1
 * 0000000140BCC474: mov     r11d, 1000h
 * 0000000140BCC47A: add     r14, r11
 * 0000000140BCC47D: add     r12, r11
 * 0000000140BCC480: cmp     r12, r13
 * 0000000140BCC483: jnz     short loc_140BCC43E
 * 0000000140BCC485: movzx   eax, r15b
 * 0000000140BCC489: mov     cr8, rax
 * 0000000140BCC48D: mov     r15, [rsp+9D0h+var_978]
 * 0000000140BCC492: mov     ebx, 1
 * 0000000140BCC497: mov     r13, [rsp+9D0h+var_968]
 * 0000000140BCC49C: jmp     loc_140BCC60D
 * 0000000140BCC4A1: movzx   eax, r15b
 * 0000000140BCC4A5: mov     cr8, rax
 * 0000000140BCC4A9: mov     r12, [rbp+8D0h+var_950]
 * 0000000140BCC4AD: mov     r15, [rsp+9D0h+var_978]
 * 0000000140BCC4B2: mov     r13, [rsp+9D0h+var_968]
 * 0000000140BCC4B7: mov     eax, [r15]
 * 0000000140BCC4BA: btr     eax, 1Fh
 * 0000000140BCC4BE: cmp     [rsi+918h], r11d
 * 0000000140BCC4C5: jnz     loc_140BCC602
 * 0000000140BCC4CB: mov     ecx, ebx
 * 0000000140BCC4CD: xor     rcx, rax
 * 0000000140BCC4D0: mov     rax, [rsi+588h]
 * 0000000140BCC4D7: mov     [rax+18h], rcx
 * 0000000140BCC4DB: cmp     [rsi+918h], r11d
 * 0000000140BCC4E2: jnz     loc_140BCC602
 * 0000000140BCC4E8: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BCC4F2: mov     ebx, 1
 * 0000000140BCC4F7: add     rax, rsi
 * 0000000140BCC4FA: mov     [rsi+920h], rax
 * 0000000140BCC501: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BCC50B: add     rax, rdi
 * 0000000140BCC50E: mov     [rsi+928h], rax
 * 0000000140BCC515: movsxd  rax, dword ptr [rdi]
 * 0000000140BCC518: mov     [rsi+930h], rax
 * 0000000140BCC51F: mov     [rsi+938h], r12
 * 0000000140BCC526: mov     [rsi+918h], ebx
 * 0000000140BCC52C: mov     ecx, [rsi+9D8h]
 * 0000000140BCC532: bt      ecx, 1Dh
 * 0000000140BCC536: jb      loc_140BCC607
 * 0000000140BCC53C: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCC546: jz      loc_140BCC607
 * 0000000140BCC54C: test    bl, cl
 * 0000000140BCC54E: jz      loc_140BCC607
 * 0000000140BCC554: mov     ecx, [rsi+0A74h]
 * 0000000140BCC55A: mov     eax, [rsi+804h]
 * 0000000140BCC560: mov     r10, [rsi+838h]
 * 0000000140BCC567: sub     eax, ecx
 * 0000000140BCC569: mov     r8, [rsi+0A78h]
 * 0000000140BCC570: lea     rdx, [rcx+rsi]
 * 0000000140BCC574: mov     ecx, eax
 * 0000000140BCC576: shr     rcx, 3
 * 0000000140BCC57A: lea     r9, [rdx+rcx*8]
 * 0000000140BCC57E: jmp     short loc_140BCC5A1
 * 0000000140BCC580: xor     [rdx], r8
 * 0000000140BCC583: mov     rax, [rdx]
 * 0000000140BCC586: movzx   ecx, r8b
 * 0000000140BCC58A: xor     rax, r10
 * 0000000140BCC58D: and     ecx, 3Fh
 * 0000000140BCC590: ror     r8, cl
 * 0000000140BCC593: add     r8, rax
 * 0000000140BCC596: xor     r8, 0EFAh
 * 0000000140BCC59D: add     rdx, 8
 * 0000000140BCC5A1: cmp     rdx, r9
 * 0000000140BCC5A4: jnz     short loc_140BCC580
 * 0000000140BCC5A6: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCC5AE: cmp     r8, [rsi+0A80h]
 * 0000000140BCC5B5: jz      short loc_140BCC607
 * 0000000140BCC5B7: mov     ecx, [rsi+804h]
 * 0000000140BCC5BD: mov     rax, [rsi+588h]
 * 0000000140BCC5C4: mov     [rax], rsi
 * 0000000140BCC5C7: mov     [rax+10h], ecx
 * 0000000140BCC5CA: mov     rcx, [rsi+0A80h]
 * 0000000140BCC5D1: cmp     [rsi+918h], r11d
 * 0000000140BCC5D8: jnz     short loc_140BCC5E8
 * 0000000140BCC5DA: mov     rax, [rsi+588h]
 * 0000000140BCC5E1: xor     rcx, r8
 * 0000000140BCC5E4: mov     [rax+18h], rcx
 * 0000000140BCC5E8: xor     edx, edx
 * 0000000140BCC5EA: mov     r9d, 100h
 * 0000000140BCC5F0: mov     rcx, rsi
 * 0000000140BCC5F3: call    sub_140BDA384
 * 0000000140BCC5F8: jmp     short loc_140BCC607
 * 0000000140BCC5FA: mov     r11d, 1000h
 * 0000000140BCC600: jmp     short loc_140BCC614
 * 0000000140BCC602: mov     ebx, 1
 * 0000000140BCC607: mov     r11d, 1000h
 * 0000000140BCC60D: mov     eax, 0Ch
 * 0000000140BCC612: xor     edx, edx
 * 0000000140BCC614: add     r15, rax
 * 0000000140BCC617: sub     r13, rbx
 * 0000000140BCC61A: mov     [rsp+9D0h+var_978], r15
 * 0000000140BCC61F: mov     [rsp+9D0h+var_968], r13
 * 0000000140BCC624: jnz     loc_140BCC2A6
 * 0000000140BCC62A: mov     rcx, [rbp+8D0h+var_940]
 * 0000000140BCC62E: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BCC635: add     [rsi+844h], ebx
 * 0000000140BCC63B: add     rcx, 18h
 * 0000000140BCC63F: mov     [rbp+8D0h+var_940], rcx
 * 0000000140BCC643: cmp     rcx, [rbp+8D0h+var_930]
 * 0000000140BCC647: jz      short loc_140BCC660
 * 0000000140BCC649: mov     eax, [rsi+84Ch]
 * 0000000140BCC64F: cmp     [rsi+848h], eax
 * 0000000140BCC655: jl      loc_140BCC286
 * 0000000140BCC65B: jmp     loc_140BC53D5
 * 0000000140BCC660: xor     r15d, r15d
 * 0000000140BCC663: mov     [rsi+844h], r15d
 * 0000000140BCC66A: jmp     loc_140BC4FA9
 * 0000000140BCC66F: cmp     r10d, edx
 * 0000000140BCC672: jg      loc_140BCF134
 * 0000000140BCC678: jz      short loc_140BCC6C5
 * 0000000140BCC67A: mov     ecx, r10d
 * 0000000140BCC67D: sub     ecx, 1Fh
 * 0000000140BCC680: jz      loc_140BCD79C
 * 0000000140BCC686: sub     ecx, 1
 * 0000000140BCC689: jz      loc_140BCD78C
 * 0000000140BCC68F: sub     ecx, 1
 * 0000000140BCC692: jz      loc_140BCD77C
 * 0000000140BCC698: sub     ecx, 2
 * 0000000140BCC69B: jz      loc_140BCD191
 * 0000000140BCC6A1: sub     ecx, 1
 * 0000000140BCC6A4: jz      loc_140BCC9DC
 * 0000000140BCC6AA: sub     ecx, 1
 * 0000000140BCC6AD: jz      loc_140BCC8EE
 * 0000000140BCC6B3: sub     ecx, 1
 * 0000000140BCC6B6: jz      loc_140BCC78C
 * 0000000140BCC6BC: cmp     ecx, 1
 * 0000000140BCC6BF: jnz     loc_140BCF176
 * 0000000140BCC6C5: mov     eax, [r13+24h]
 * 0000000140BCC6C9: add     [rsi+848h], eax
 * 0000000140BCC6CF: mov     r11d, [r13+20h]
 * 0000000140BCC6D3: mov     r9d, [r13+24h]
 * 0000000140BCC6D7: add     r11, rsi
 * 0000000140BCC6DA: mov     r14d, [rsi+834h]
 * 0000000140BCC6E1: mov     r10, r11
 * 0000000140BCC6E4: mov     r15, [rsi+838h]
 * 0000000140BCC6EB: mov     rax, r11
 * 0000000140BCC6EE: lea     rcx, [r11+r9]
 * 0000000140BCC6F2: cmp     r11, rcx
 * 0000000140BCC6F5: jnb     short loc_140BCC707
 * 0000000140BCC6F7: mov     edx, 40h ; '@'
 * 0000000140BCC6FC: prefetchnta byte ptr [rax]
 * 0000000140BCC6FF: add     rax, rdx
 * 0000000140BCC702: cmp     rax, rcx
 * 0000000140BCC705: jb      short loc_140BCC6FC
 * 0000000140BCC707: mov     ebx, r9d
 * 0000000140BCC70A: mov     r8, r15
 * 0000000140BCC70D: shr     ebx, 7
 * 0000000140BCC710: test    ebx, ebx
 * 0000000140BCC712: jz      loc_140BD2316
 * 0000000140BCC718: mov     esi, 1
 * 0000000140BCC71D: mov     rdi, 7010008004002001h
 * 0000000140BCC727: mov     eax, 8
 * 0000000140BCC72C: xor     r8, [r10]
 * 0000000140BCC72F: mov     ecx, r14d
 * 0000000140BCC732: rol     r8, cl
 * 0000000140BCC735: xor     r8, [r10+8]
 * 0000000140BCC739: add     r10, 10h
 * 0000000140BCC73D: rol     r8, cl
 * 0000000140BCC740: sub     rax, rsi
 * 0000000140BCC743: jnz     short loc_140BCC72C
 * 0000000140BCC745: mov     rcx, r10
 * 0000000140BCC748: sub     rcx, r11
 * 0000000140BCC74B: xor     rcx, r15
 * 0000000140BCC74E: mov     rax, rcx
 * 0000000140BCC751: rol     rax, 11h
 * 0000000140BCC755: xor     rcx, rax
 * 0000000140BCC758: mov     rax, rdi
 * 0000000140BCC75B: mul     rcx
 * 0000000140BCC75E: xor     eax, edx
 * 0000000140BCC760: mov     [rbp+8D0h+var_4C0], rdx
 * 0000000140BCC767: xor     r14d, eax
 * 0000000140BCC76A: mov     edx, 0FFFFFFFFh
 * 0000000140BCC76F: and     r14d, 3Fh
 * 0000000140BCC773: cmovz   r14d, esi
 * 0000000140BCC777: add     ebx, edx
 * 0000000140BCC779: jnz     short loc_140BCC727
 * 0000000140BCC77B: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BCC780: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BCC787: jmp     loc_140BD231B
 * 0000000140BCC78C: mov     edx, [r13+2Ch]
 * 0000000140BCC790: lea     rcx, [rbp+8D0h+var_2D8]
 * 0000000140BCC797: mov     rax, [rsi+1B0h]
 * 0000000140BCC79E: call    KeGuardDispatchICall
 * 0000000140BCC7A3: mov     rax, [rsi+1E0h]
 * 0000000140BCC7AA: lea     rdx, [rbp+8D0h+var_200]
 * 0000000140BCC7B1: lea     rcx, [rbp+8D0h+var_2D8]
 * 0000000140BCC7B8: call    KeGuardDispatchICall
 * 0000000140BCC7BD: xor     ecx, ecx
 * 0000000140BCC7BF: xgetbv
 * 0000000140BCC7C2: shl     rdx, 20h
 * 0000000140BCC7C6: lea     rcx, [rbp+8D0h+var_200]
 * 0000000140BCC7CD: or      rdx, rax
 * 0000000140BCC7D0: mov     rax, [rsi+1A8h]
 * 0000000140BCC7D7: mov     rbx, rdx
 * 0000000140BCC7DA: call    KeGuardDispatchICall
 * 0000000140BCC7DF: mov     r8, [r13+18h]
 * 0000000140BCC7E3: mov     rdx, [r13+20h]
 * 0000000140BCC7E7: and     r8, rbx
 * 0000000140BCC7EA: cmp     r8, rdx
 * 0000000140BCC7ED: jz      loc_140BC5D97
 * 0000000140BCC7F3: mov     ecx, [r13+2Ch]
 * 0000000140BCC7F7: mov     eax, [r13+28h]
 * 0000000140BCC7FB: shl     rcx, 20h
 * 0000000140BCC7FF: or      rcx, rax
 * 0000000140BCC802: cmp     [rsi+918h], r15d
 * 0000000140BCC809: jnz     loc_140BC5D97
 * 0000000140BCC80F: mov     rax, [rsi+588h]
 * 0000000140BCC816: xor     rdx, r8
 * 0000000140BCC819: mov     [rax+18h], rdx
 * 0000000140BCC81D: cmp     [rsi+918h], r15d
 * 0000000140BCC824: jnz     loc_140BC5D97
 * 0000000140BCC82A: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BCC834: mov     ebx, 1
 * 0000000140BCC839: add     rax, rsi
 * 0000000140BCC83C: mov     [rsi+920h], rax
 * 0000000140BCC843: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BCC84D: add     rax, r13
 * 0000000140BCC850: mov     [rsi+928h], rax
 * 0000000140BCC857: movsxd  rax, dword ptr [r13+0]
 * 0000000140BCC85B: mov     [rsi+930h], rax
 * 0000000140BCC862: mov     [rsi+938h], rcx
 * 0000000140BCC869: mov     [rsi+918h], ebx
 * 0000000140BCC86F: mov     ecx, [rsi+9D8h]
 * 0000000140BCC875: bt      ecx, 1Dh
 * 0000000140BCC879: jb      loc_140BD0398
 * 0000000140BCC87F: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCC889: jz      loc_140BD0398
 * 0000000140BCC88F: test    bl, cl
 * 0000000140BCC891: jz      loc_140BD0398
 * 0000000140BCC897: mov     ecx, [rsi+0A74h]
 * 0000000140BCC89D: mov     eax, [rsi+804h]
 * 0000000140BCC8A3: mov     r10, [rsi+838h]
 * 0000000140BCC8AA: sub     eax, ecx
 * 0000000140BCC8AC: mov     r8, [rsi+0A78h]
 * 0000000140BCC8B3: lea     rdx, [rcx+rsi]
 * 0000000140BCC8B7: mov     ecx, eax
 * 0000000140BCC8B9: shr     rcx, 3
 * 0000000140BCC8BD: lea     r9, [rdx+rcx*8]
 * 0000000140BCC8C1: jmp     short loc_140BCC8E4
 * 0000000140BCC8C3: xor     [rdx], r8
 * 0000000140BCC8C6: mov     rax, [rdx]
 * 0000000140BCC8C9: movzx   ecx, r8b
 * 0000000140BCC8CD: xor     rax, r10
 * 0000000140BCC8D0: and     ecx, 3Fh
 * 0000000140BCC8D3: ror     r8, cl
 * 0000000140BCC8D6: add     r8, rax
 * 0000000140BCC8D9: xor     r8, 0EFAh
 * 0000000140BCC8E0: add     rdx, 8
 * 0000000140BCC8E4: cmp     rdx, r9
 * 0000000140BCC8E7: jnz     short loc_140BCC8C3
 * 0000000140BCC8E9: jmp     loc_140BCBD6B
 * 0000000140BCC8EE: mov     eax, [rsi+9DCh]
 * 0000000140BCC8F4: test    al, 4
 * 0000000140BCC8F6: jnz     loc_140BC4FAF
 * 0000000140BCC8FC: mov     rax, [rsi+428h]
 * 0000000140BCC903: call    KeGuardDispatchICall
 * 0000000140BCC908: test    al, al
 * 0000000140BCC90A: jz      loc_140BD0398
 * 0000000140BCC910: cmp     [rsi+918h], r15d
 * 0000000140BCC917: jnz     loc_140BD0398
 * 0000000140BCC91D: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BCC927: add     rax, rsi
 * 0000000140BCC92A: mov     [rsi+920h], rax
 * 0000000140BCC931: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BCC93B: add     rax, r13
 * 0000000140BCC93E: mov     [rsi+928h], rax
 * 0000000140BCC945: movsxd  rax, dword ptr [r13+0]
 * 0000000140BCC949: mov     [rsi+930h], rax
 * 0000000140BCC950: mov     [rsi+938h], r15
 * 0000000140BCC957: mov     [rsi+918h], ebx
 * 0000000140BCC95D: mov     ecx, [rsi+9D8h]
 * 0000000140BCC963: bt      ecx, 1Dh
 * 0000000140BCC967: jb      loc_140BD0398
 * 0000000140BCC96D: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCC977: jz      loc_140BD0398
 * 0000000140BCC97D: test    bl, cl
 * 0000000140BCC97F: jz      loc_140BD0398
 * 0000000140BCC985: mov     ecx, [rsi+0A74h]
 * 0000000140BCC98B: mov     eax, [rsi+804h]
 * 0000000140BCC991: mov     r10, [rsi+838h]
 * 0000000140BCC998: sub     eax, ecx
 * 0000000140BCC99A: mov     r8, [rsi+0A78h]
 * 0000000140BCC9A1: lea     rdx, [rcx+rsi]
 * 0000000140BCC9A5: mov     ecx, eax
 * 0000000140BCC9A7: shr     rcx, 3
 * 0000000140BCC9AB: lea     r9, [rdx+rcx*8]
 * 0000000140BCC9AF: jmp     short loc_140BCC9D2
 * 0000000140BCC9B1: xor     [rdx], r8
 * 0000000140BCC9B4: mov     rax, [rdx]
 * 0000000140BCC9B7: movzx   ecx, r8b
 * 0000000140BCC9BB: xor     rax, r10
 * 0000000140BCC9BE: and     ecx, 3Fh
 * 0000000140BCC9C1: ror     r8, cl
 * 0000000140BCC9C4: add     r8, rax
 * 0000000140BCC9C7: xor     r8, 0EFAh
 * 0000000140BCC9CE: add     rdx, 8
 * 0000000140BCC9D2: cmp     rdx, r9
 * 0000000140BCC9D5: jnz     short loc_140BCC9B1
 * 0000000140BCC9D7: jmp     loc_140BCBD6B
 * 0000000140BCC9DC: mov     r14, [r13+8]
 * 0000000140BCC9E0: mov     r8d, [r13+10h]
 * 0000000140BCC9E4: mov     r9, r14
 * 0000000140BCC9E7: add     [rsi+848h], r8d
 * 0000000140BCC9EE: mov     rax, r14
 * 0000000140BCC9F1: mov     r10d, [rsi+834h]
 * 0000000140BCC9F8: mov     r15, [rsi+838h]
 * 0000000140BCC9FF: lea     rcx, [r14+r8]
 * 0000000140BCCA03: cmp     r14, rcx
 * 0000000140BCCA06: jnb     short loc_140BCCA18
 * 0000000140BCCA08: mov     edx, 40h ; '@'
 * 0000000140BCCA0D: prefetchnta byte ptr [rax]
 * 0000000140BCCA10: add     rax, rdx
 * 0000000140BCCA13: cmp     rax, rcx
 * 0000000140BCCA16: jb      short loc_140BCCA0D
 * 0000000140BCCA18: mov     r11d, r8d
 * 0000000140BCCA1B: mov     rbx, r15
 * 0000000140BCCA1E: shr     r11d, 7
 * 0000000140BCCA22: mov     edx, 1
 * 0000000140BCCA27: mov     r12d, 0FFFFFFFFh
 * 0000000140BCCA2D: test    r11d, r11d
 * 0000000140BCCA30: jz      short loc_140BCCA97
 * 0000000140BCCA32: mov     rsi, 7010008004002001h
 * 0000000140BCCA3C: mov     eax, 8
 * 0000000140BCCA41: xor     rbx, [r9]
 * 0000000140BCCA44: mov     ecx, r10d
 * 0000000140BCCA47: rol     rbx, cl
 * 0000000140BCCA4A: xor     rbx, [r9+8]
 * 0000000140BCCA4E: add     r9, 10h
 * 0000000140BCCA52: rol     rbx, cl
 * 0000000140BCCA55: sub     rax, rdx
 * 0000000140BCCA58: jnz     short loc_140BCCA41
 * 0000000140BCCA5A: mov     rcx, r9
 * 0000000140BCCA5D: sub     rcx, r14
 * 0000000140BCCA60: xor     rcx, r15
 * 0000000140BCCA63: mov     rax, rcx
 * 0000000140BCCA66: rol     rax, 11h
 * 0000000140BCCA6A: xor     rcx, rax
 * 0000000140BCCA6D: mov     rax, rsi
 * 0000000140BCCA70: mul     rcx
 * 0000000140BCCA73: xor     r10d, edx
 * 0000000140BCCA76: mov     [rbp+8D0h+var_520], rdx
 * 0000000140BCCA7D: xor     r10d, eax
 * 0000000140BCCA80: mov     edx, 1
 * 0000000140BCCA85: and     r10d, 3Fh
 * 0000000140BCCA89: cmovz   r10d, edx
 * 0000000140BCCA8D: add     r11d, r12d
 * 0000000140BCCA90: jnz     short loc_140BCCA3C
 * 0000000140BCCA92: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BCCA97: and     r8d, 7Fh
 * 0000000140BCCA9B: cmp     r8d, 8
 * 0000000140BCCA9F: jb      short loc_140BCCABE
 * 0000000140BCCAA1: mov     eax, r8d
 * 0000000140BCCAA4: shr     rax, 3
 * 0000000140BCCAA8: xor     rbx, [r9]
 * 0000000140BCCAAB: mov     ecx, r10d
 * 0000000140BCCAAE: rol     rbx, cl
 * 0000000140BCCAB1: add     r9, 8
 * 0000000140BCCAB5: add     r8d, 0FFFFFFF8h
 * 0000000140BCCAB9: sub     rax, rdx
 * 0000000140BCCABC: jnz     short loc_140BCCAA8
 * 0000000140BCCABE: xor     r11d, r11d
 * 0000000140BCCAC1: test    r8d, r8d
 * 0000000140BCCAC4: jz      short loc_140BCCADB
 * 0000000140BCCAC6: movzx   eax, byte ptr [r9]
 * 0000000140BCCACA: mov     ecx, r10d
 * 0000000140BCCACD: xor     rbx, rax
 * 0000000140BCCAD0: add     r9, rdx
 * 0000000140BCCAD3: rol     rbx, cl
 * 0000000140BCCAD6: add     r8d, r12d
 * 0000000140BCCAD9: jnz     short loc_140BCCAC6
 * 0000000140BCCADB: mov     rax, rbx
 * 0000000140BCCADE: jmp     short loc_140BCCAE2
 * 0000000140BCCAE0: xor     ebx, eax
 * 0000000140BCCAE2: shr     rax, 1Fh
 * 0000000140BCCAE6: test    rax, rax
 * 0000000140BCCAE9: jnz     short loc_140BCCAE0
 * 0000000140BCCAEB: btr     ebx, 1Fh
 * 0000000140BCCAEF: mov     r12d, r11d
 * 0000000140BCCAF2: cmp     ebx, [r13+14h]
 * 0000000140BCCAF6: jz      loc_140BCCD0E
 * 0000000140BCCAFC: cmp     [r13+0], r11d
 * 0000000140BCCB00: jnz     short loc_140BCCB0A
 * 0000000140BCCB02: cmp     [r13+18h], r11d
 * 0000000140BCCB06: cmovnz  r12d, edx
 * 0000000140BCCB0A: mov     ecx, [r13+10h]
 * 0000000140BCCB0E: mov     rdx, [r13+8]
 * 0000000140BCCB12: test    rcx, rcx
 * 0000000140BCCB15: jz      loc_140BCCBCD
 * 0000000140BCCB1B: mov     eax, [rsi+9DCh]
 * 0000000140BCCB21: mov     r8d, 40h ; '@'
 * 0000000140BCCB27: test    r8b, al
 * 0000000140BCCB2A: jz      loc_140BCCBCD
 * 0000000140BCCB30: mov     r15, cr8
 * 0000000140BCCB34: lea     eax, [r8-3Eh]
 * 0000000140BCCB38: mov     cr8, rax
 * 0000000140BCCB3C: mov     r14, rdx
 * 0000000140BCCB3F: lea     rax, [rcx-1]
 * 0000000140BCCB43: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140BCCB4A: add     rax, rdx
 * 0000000140BCCB4D: or      rax, 0FFFh
 * 0000000140BCCB53: mov     [rbp+8D0h+var_950], rax
 * 0000000140BCCB57: lea     r13, [r14-1]
 * 0000000140BCCB5B: mov     rax, [rsi+468h]
 * 0000000140BCCB62: xor     edx, edx
 * 0000000140BCCB64: mov     rcx, r14
 * 0000000140BCCB67: call    KeGuardDispatchICall
 * 0000000140BCCB6C: xor     r11d, r11d
 * 0000000140BCCB6F: cmp     eax, 0C000022Dh
 * 0000000140BCCB74: jnz     short loc_140BCCB99
 * 0000000140BCCB76: test    r12d, r12d
 * 0000000140BCCB79: jnz     short loc_140BCCBC0
 * 0000000140BCCB7B: lea     eax, [r11+1]
 * 0000000140BCCB7F: cmp     r15b, al
 * 0000000140BCCB82: ja      short loc_140BCCB9D
 * 0000000140BCCB84: movzx   eax, r15b
 * 0000000140BCCB88: mov     cr8, rax
 * 0000000140BCCB8C: mov     al, [r14]
 * 0000000140BCCB8F: lea     eax, [r11+2]
 * 0000000140BCCB93: mov     cr8, rax
 * 0000000140BCCB97: jmp     short loc_140BCCB5B
 * 0000000140BCCB99: test    eax, eax
 * 0000000140BCCB9B: js      short loc_140BCCBC0
 * 0000000140BCCB9D: mov     eax, 1000h
 * 0000000140BCCBA2: add     r14, rax
 * 0000000140BCCBA5: add     r13, rax
 * 0000000140BCCBA8: cmp     r13, [rbp+8D0h+var_950]
 * 0000000140BCCBAC: jnz     short loc_140BCCB5B
 * 0000000140BCCBAE: movzx   eax, r15b
 * 0000000140BCCBB2: mov     cr8, rax
 * 0000000140BCCBB6: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BCCBBB: jmp     loc_140BCCD0E
 * 0000000140BCCBC0: movzx   eax, r15b
 * 0000000140BCCBC4: mov     cr8, rax
 * 0000000140BCCBC8: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BCCBCD: mov     eax, [r13+14h]
 * 0000000140BCCBD1: cmp     [rsi+918h], r11d
 * 0000000140BCCBD8: jnz     short loc_140BCCBEC
 * 0000000140BCCBDA: mov     ecx, eax
 * 0000000140BCCBDC: mov     eax, ebx
 * 0000000140BCCBDE: xor     rcx, rax
 * 0000000140BCCBE1: mov     rax, [rsi+588h]
 * 0000000140BCCBE8: mov     [rax+18h], rcx
 * 0000000140BCCBEC: mov     rcx, [r13+8]
 * 0000000140BCCBF0: cmp     [rsi+918h], r11d
 * 0000000140BCCBF7: jnz     loc_140BCCD0E
 * 0000000140BCCBFD: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BCCC07: mov     edx, 1
 * 0000000140BCCC0C: add     rax, rsi
 * 0000000140BCCC0F: mov     [rsi+920h], rax
 * 0000000140BCCC16: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BCCC20: add     rax, r13
 * 0000000140BCCC23: mov     [rsi+928h], rax
 * 0000000140BCCC2A: movsxd  rax, dword ptr [r13+0]
 * 0000000140BCCC2E: mov     [rsi+930h], rax
 * 0000000140BCCC35: mov     [rsi+938h], rcx
 * 0000000140BCCC3C: mov     [rsi+918h], edx
 * 0000000140BCCC42: mov     ecx, [rsi+9D8h]
 * 0000000140BCCC48: bt      ecx, 1Dh
 * 0000000140BCCC4C: jb      loc_140BCCD0E
 * 0000000140BCCC52: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCCC5C: jz      loc_140BCCD0E
 * 0000000140BCCC62: test    dl, cl
 * 0000000140BCCC64: jz      loc_140BCCD0E
 * 0000000140BCCC6A: mov     ecx, [rsi+0A74h]
 * 0000000140BCCC70: mov     eax, [rsi+804h]
 * 0000000140BCCC76: mov     r10, [rsi+838h]
 * 0000000140BCCC7D: sub     eax, ecx
 * 0000000140BCCC7F: mov     r8, [rsi+0A78h]
 * 0000000140BCCC86: lea     rdx, [rcx+rsi]
 * 0000000140BCCC8A: mov     ecx, eax
 * 0000000140BCCC8C: shr     rcx, 3
 * 0000000140BCCC90: lea     r9, [rdx+rcx*8]
 * 0000000140BCCC94: jmp     short loc_140BCCCB7
 * 0000000140BCCC96: xor     [rdx], r8
 * 0000000140BCCC99: mov     rax, [rdx]
 * 0000000140BCCC9C: movzx   ecx, r8b
 * 0000000140BCCCA0: xor     rax, r10
 * 0000000140BCCCA3: and     ecx, 3Fh
 * 0000000140BCCCA6: ror     r8, cl
 * 0000000140BCCCA9: add     r8, rax
 * 0000000140BCCCAC: xor     r8, 0EFAh
 * 0000000140BCCCB3: add     rdx, 8
 * 0000000140BCCCB7: cmp     rdx, r9
 * 0000000140BCCCBA: jnz     short loc_140BCCC96
 * 0000000140BCCCBC: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCCCC4: cmp     r8, [rsi+0A80h]
 * 0000000140BCCCCB: jz      short loc_140BCCD0E
 * 0000000140BCCCCD: mov     ecx, [rsi+804h]
 * 0000000140BCCCD3: mov     rax, [rsi+588h]
 * 0000000140BCCCDA: mov     [rax], rsi
 * 0000000140BCCCDD: mov     [rax+10h], ecx
 * 0000000140BCCCE0: mov     rcx, [rsi+0A80h]
 * 0000000140BCCCE7: cmp     [rsi+918h], r11d
 * 0000000140BCCCEE: jnz     short loc_140BCCCFE
 * 0000000140BCCCF0: mov     rax, [rsi+588h]
 * 0000000140BCCCF7: xor     rcx, r8
 * 0000000140BCCCFA: mov     [rax+18h], rcx
 * 0000000140BCCCFE: xor     edx, edx
 * 0000000140BCCD00: mov     r9d, 100h
 * 0000000140BCCD06: mov     rcx, rsi
 * 0000000140BCCD09: call    sub_140BDA384
 * 0000000140BCCD0E: mov     rcx, [rsi+538h]
 * 0000000140BCCD15: mov     r14, cr8
 * 0000000140BCCD19: mov     eax, 0Fh
 * 0000000140BCCD1E: mov     cr8, rax
 * 0000000140BCCD22: mov     rax, [rsi+160h]
 * 0000000140BCCD29: call    KeGuardDispatchICall
 * 0000000140BCCD2E: mov     rax, [rsi+620h]
 * 0000000140BCCD35: mov     rcx, [rax]
 * 0000000140BCCD38: mov     eax, [rcx]
 * 0000000140BCCD3A: lea     rbx, [rcx+10h]
 * 0000000140BCCD3E: mov     r15b, [rcx+0Ch]
 * 0000000140BCCD42: lea     rcx, [rax+rax*2]
 * 0000000140BCCD46: lea     r12, [rbx+rcx*8]
 * 0000000140BCCD4A: mov     edx, 18h
 * 0000000140BCCD4F: lea     r8, [r13+18h]
 * 0000000140BCCD53: mov     r9, rbx
 * 0000000140BCCD56: mov     rcx, [r9]
 * 0000000140BCCD59: add     r9, 8
 * 0000000140BCCD5D: mov     rax, [r8]
 * 0000000140BCCD60: add     r8, 8
 * 0000000140BCCD64: cmp     rcx, rax
 * 0000000140BCCD67: jnz     short loc_140BCCD96
 * 0000000140BCCD69: add     edx, 0FFFFFFF8h
 * 0000000140BCCD6C: cmp     edx, 8
 * 0000000140BCCD6F: jnb     short loc_140BCCD56
 * 0000000140BCCD71: test    edx, edx
 * 0000000140BCCD73: jz      short loc_140BCCD9F
 * 0000000140BCCD75: mov     r11d, 1
 * 0000000140BCCD7B: mov     cl, [r9]
 * 0000000140BCCD7E: add     r9, r11
 * 0000000140BCCD81: mov     al, [r8]
 * 0000000140BCCD84: add     r8, r11
 * 0000000140BCCD87: cmp     cl, al
 * 0000000140BCCD89: jnz     short loc_140BCCD96
 * 0000000140BCCD8B: mov     eax, 0FFFFFFFFh
 * 0000000140BCCD90: add     edx, eax
 * 0000000140BCCD92: jnz     short loc_140BCCD7B
 * 0000000140BCCD94: jmp     short loc_140BCCD9F
 * 0000000140BCCD96: add     rbx, 18h
 * 0000000140BCCD9A: cmp     rbx, r12
 * 0000000140BCCD9D: jb      short loc_140BCCD4A
 * 0000000140BCCD9F: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BCCDA4: mov     rcx, [rsi+538h]
 * 0000000140BCCDAB: mov     rax, [rsi+1A0h]
 * 0000000140BCCDB2: call    KeGuardDispatchICall
 * 0000000140BCCDB7: movzx   eax, r14b
 * 0000000140BCCDBB: mov     cr8, rax
 * 0000000140BCCDBF: xor     r11d, r11d
 * 0000000140BCCDC2: lea     r14d, [r11+1]
 * 0000000140BCCDC6: test    r15b, r15b
 * 0000000140BCCDC9: jz      loc_140BCCF03
 * 0000000140BCCDCF: mov     ecx, [rsi+9DCh]
 * 0000000140BCCDD5: lea     eax, [r11+10h]
 * 0000000140BCCDD9: test    al, cl
 * 0000000140BCCDDB: jz      loc_140BCCEF9
 * 0000000140BCCDE1: cmp     [rsi+918h], r11d
 * 0000000140BCCDE8: jnz     loc_140BCCEF9
 * 0000000140BCCDEE: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BCCDF8: add     rax, rsi
 * 0000000140BCCDFB: mov     [rsi+920h], rax
 * 0000000140BCCE02: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BCCE0C: add     rax, r13
 * 0000000140BCCE0F: mov     [rsi+928h], rax
 * 0000000140BCCE16: movsxd  rax, dword ptr [r13+0]
 * 0000000140BCCE1A: mov     [rsi+930h], rax
 * 0000000140BCCE21: mov     [rsi+938h], r14
 * 0000000140BCCE28: mov     [rsi+918h], r14d
 * 0000000140BCCE2F: mov     eax, [rsi+9D8h]
 * 0000000140BCCE35: bt      eax, 1Dh
 * 0000000140BCCE39: jb      loc_140BCCEF9
 * 0000000140BCCE3F: bt      ecx, 15h
 * 0000000140BCCE43: jnb     loc_140BCCEF9
 * 0000000140BCCE49: test    r14b, al
 * 0000000140BCCE4C: jz      loc_140BCCEF9
 * 0000000140BCCE52: mov     ecx, [rsi+0A74h]
 * 0000000140BCCE58: mov     eax, [rsi+804h]
 * 0000000140BCCE5E: mov     r10, [rsi+838h]
 * 0000000140BCCE65: sub     eax, ecx
 * 0000000140BCCE67: mov     r8, [rsi+0A78h]
 * 0000000140BCCE6E: lea     rdx, [rcx+rsi]
 * 0000000140BCCE72: mov     ecx, eax
 * 0000000140BCCE74: shr     rcx, 3
 * 0000000140BCCE78: lea     r9, [rdx+rcx*8]
 * 0000000140BCCE7C: jmp     short loc_140BCCE9F
 * 0000000140BCCE7E: xor     [rdx], r8
 * 0000000140BCCE81: mov     rax, [rdx]
 * 0000000140BCCE84: movzx   ecx, r8b
 * 0000000140BCCE88: xor     rax, r10
 * 0000000140BCCE8B: and     ecx, 3Fh
 * 0000000140BCCE8E: ror     r8, cl
 * 0000000140BCCE91: add     r8, rax
 * 0000000140BCCE94: xor     r8, 0EFAh
 * 0000000140BCCE9B: add     rdx, 8
 * 0000000140BCCE9F: cmp     rdx, r9
 * 0000000140BCCEA2: jnz     short loc_140BCCE7E
 * 0000000140BCCEA4: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCCEAC: cmp     r8, [rsi+0A80h]
 * 0000000140BCCEB3: jz      short loc_140BCCEF9
 * 0000000140BCCEB5: mov     ecx, [rsi+804h]
 * 0000000140BCCEBB: mov     rax, [rsi+588h]
 * 0000000140BCCEC2: mov     [rax], rsi
 * 0000000140BCCEC5: mov     [rax+10h], ecx
 * 0000000140BCCEC8: mov     rcx, [rsi+0A80h]
 * 0000000140BCCECF: cmp     [rsi+918h], r11d
 * 0000000140BCCED6: jnz     short loc_140BCCEE6
 * 0000000140BCCED8: mov     rax, [rsi+588h]
 * 0000000140BCCEDF: xor     rcx, r8
 * 0000000140BCCEE2: mov     [rax+18h], rcx
 * 0000000140BCCEE6: xor     edx, edx
 * 0000000140BCCEE8: mov     r9d, 100h
 * 0000000140BCCEEE: mov     rcx, rsi
 * 0000000140BCCEF1: call    sub_140BDA384
 * 0000000140BCCEF6: xor     r11d, r11d
 * 0000000140BCCEF9: cmp     [r13+18h], r14
 * 0000000140BCCEFD: jz      loc_140BCD02A
 * 0000000140BCCF03: cmp     rbx, r12
 * 0000000140BCCF06: jnz     loc_140BCD02A
 * 0000000140BCCF0C: mov     r12, 0B3B74BDEE4453415h
 * 0000000140BCCF16: cmp     [rsi+918h], r11d
 * 0000000140BCCF1D: jnz     loc_140BCD034
 * 0000000140BCCF23: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BCCF2D: add     rax, rsi
 * 0000000140BCCF30: mov     [rsi+920h], rax
 * 0000000140BCCF37: lea     rax, [r12+r13]
 * 0000000140BCCF3B: mov     [rsi+928h], rax
 * 0000000140BCCF42: movsxd  rax, dword ptr [r13+0]
 * 0000000140BCCF46: mov     [rsi+930h], rax
 * 0000000140BCCF4D: mov     [rsi+938h], rbx
 * 0000000140BCCF54: mov     [rsi+918h], r14d
 * 0000000140BCCF5B: mov     ecx, [rsi+9D8h]
 * 0000000140BCCF61: bt      ecx, 1Dh
 * 0000000140BCCF65: jb      loc_140BCD034
 * 0000000140BCCF6B: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCCF75: jz      loc_140BCD034
 * 0000000140BCCF7B: test    r14b, cl
 * 0000000140BCCF7E: jz      loc_140BCD034
 * 0000000140BCCF84: mov     ecx, [rsi+0A74h]
 * 0000000140BCCF8A: mov     eax, [rsi+804h]
 * 0000000140BCCF90: mov     r10, [rsi+838h]
 * 0000000140BCCF97: sub     eax, ecx
 * 0000000140BCCF99: mov     r8, [rsi+0A78h]
 * 0000000140BCCFA0: lea     rdx, [rcx+rsi]
 * 0000000140BCCFA4: mov     ecx, eax
 * 0000000140BCCFA6: shr     rcx, 3
 * 0000000140BCCFAA: lea     r9, [rdx+rcx*8]
 * 0000000140BCCFAE: jmp     short loc_140BCCFD1
 * 0000000140BCCFB0: xor     [rdx], r8
 * 0000000140BCCFB3: mov     rax, [rdx]
 * 0000000140BCCFB6: movzx   ecx, r8b
 * 0000000140BCCFBA: xor     rax, r10
 * 0000000140BCCFBD: and     ecx, 3Fh
 * 0000000140BCCFC0: ror     r8, cl
 * 0000000140BCCFC3: add     r8, rax
 * 0000000140BCCFC6: xor     r8, 0EFAh
 * 0000000140BCCFCD: add     rdx, 8
 * 0000000140BCCFD1: cmp     rdx, r9
 * 0000000140BCCFD4: jnz     short loc_140BCCFB0
 * 0000000140BCCFD6: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCCFDE: cmp     r8, [rsi+0A80h]
 * 0000000140BCCFE5: jz      short loc_140BCD034
 * 0000000140BCCFE7: mov     ecx, [rsi+804h]
 * 0000000140BCCFED: mov     rax, [rsi+588h]
 * 0000000140BCCFF4: mov     [rax], rsi
 * 0000000140BCCFF7: mov     [rax+10h], ecx
 * 0000000140BCCFFA: mov     rcx, [rsi+0A80h]
 * 0000000140BCD001: cmp     [rsi+918h], r11d
 * 0000000140BCD008: jnz     short loc_140BCD018
 * 0000000140BCD00A: mov     rax, [rsi+588h]
 * 0000000140BCD011: xor     rcx, r8
 * 0000000140BCD014: mov     [rax+18h], rcx
 * 0000000140BCD018: xor     edx, edx
 * 0000000140BCD01A: mov     r9d, 100h
 * 0000000140BCD020: mov     rcx, rsi
 * 0000000140BCD023: call    sub_140BDA384
 * 0000000140BCD028: jmp     short loc_140BCD034
 * 0000000140BCD02A: mov     r12, 0B3B74BDEE4453415h
 * 0000000140BCD034: mov     rcx, [rsi+538h]
 * 0000000140BCD03B: mov     r15, cr8
 * 0000000140BCD03F: mov     eax, 0Fh
 * 0000000140BCD044: mov     cr8, rax
 * 0000000140BCD048: mov     rax, [rsi+160h]
 * 0000000140BCD04F: call    KeGuardDispatchICall
 * 0000000140BCD054: mov     rax, [rsi+620h]
 * 0000000140BCD05B: mov     rcx, [rax]
 * 0000000140BCD05E: mov     eax, [rcx]
 * 0000000140BCD060: lea     rbx, [rcx+10h]
 * 0000000140BCD064: lea     rcx, [rax+rax*2]
 * 0000000140BCD068: xor     eax, eax
 * 0000000140BCD06A: lea     r14, [rbx+rcx*8]
 * 0000000140BCD06E: jmp     short loc_140BCD097
 * 0000000140BCD070: mov     rcx, [rbx+8]
 * 0000000140BCD074: cmp     rcx, rdx
 * 0000000140BCD077: jb      short loc_140BCD0A3
 * 0000000140BCD079: mov     rax, rcx
 * 0000000140BCD07C: and     rax, 0FFFFFFFFFFFFF000h
 * 0000000140BCD082: cmp     rax, rcx
 * 0000000140BCD085: jnz     short loc_140BCD0A3
 * 0000000140BCD087: mov     eax, [rbx+10h]
 * 0000000140BCD08A: add     rax, rcx
 * 0000000140BCD08D: cmp     rax, rcx
 * 0000000140BCD090: jbe     short loc_140BCD0A3
 * 0000000140BCD092: cmp     rax, rdx
 * 0000000140BCD095: jz      short loc_140BCD0A3
 * 0000000140BCD097: add     rbx, 18h
 * 0000000140BCD09B: mov     rdx, rax
 * 0000000140BCD09E: cmp     rbx, r14
 * 0000000140BCD0A1: jb      short loc_140BCD070
 * 0000000140BCD0A3: mov     rcx, [rsi+538h]
 * 0000000140BCD0AA: mov     rax, [rsi+1A0h]
 * 0000000140BCD0B1: call    KeGuardDispatchICall
 * 0000000140BCD0B6: movzx   eax, r15b
 * 0000000140BCD0BA: mov     cr8, rax
 * 0000000140BCD0BE: xor     r15d, r15d
 * 0000000140BCD0C1: cmp     rbx, r14
 * 0000000140BCD0C4: jz      loc_140BD245B
 * 0000000140BCD0CA: cmp     [rsi+918h], r15d
 * 0000000140BCD0D1: jnz     loc_140BC5B58
 * 0000000140BCD0D7: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BCD0E1: add     rax, rsi
 * 0000000140BCD0E4: mov     [rsi+920h], rax
 * 0000000140BCD0EB: lea     rax, [r12+r13]
 * 0000000140BCD0EF: mov     [rsi+928h], rax
 * 0000000140BCD0F6: movsxd  rax, dword ptr [r13+0]
 * 0000000140BCD0FA: mov     [rsi+930h], rax
 * 0000000140BCD101: mov     [rsi+938h], rbx
 * 0000000140BCD108: lea     ebx, [r15+1]
 * 0000000140BCD10C: mov     [rsi+918h], ebx
 * 0000000140BCD112: mov     ecx, [rsi+9D8h]
 * 0000000140BCD118: bt      ecx, 1Dh
 * 0000000140BCD11C: jb      loc_140BC5B5D
 * 0000000140BCD122: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCD12C: jz      loc_140BC5B5D
 * 0000000140BCD132: test    bl, cl
 * 0000000140BCD134: jz      loc_140BC5B5D
 * 0000000140BCD13A: mov     ecx, [rsi+0A74h]
 * 0000000140BCD140: mov     eax, [rsi+804h]
 * 0000000140BCD146: mov     r10, [rsi+838h]
 * 0000000140BCD14D: sub     eax, ecx
 * 0000000140BCD14F: mov     r8, [rsi+0A78h]
 * 0000000140BCD156: lea     rdx, [rcx+rsi]
 * 0000000140BCD15A: mov     ecx, eax
 * 0000000140BCD15C: shr     rcx, 3
 * 0000000140BCD160: lea     r9, [rdx+rcx*8]
 * 0000000140BCD164: jmp     short loc_140BCD187
 * 0000000140BCD166: xor     [rdx], r8
 * 0000000140BCD169: mov     rax, [rdx]
 * 0000000140BCD16C: movzx   ecx, r8b
 * 0000000140BCD170: xor     rax, r10
 * 0000000140BCD173: and     ecx, 3Fh
 * 0000000140BCD176: ror     r8, cl
 * 0000000140BCD179: add     r8, rax
 * 0000000140BCD17C: xor     r8, 0EFAh
 * 0000000140BCD183: add     rdx, 8
 * 0000000140BCD187: cmp     rdx, r9
 * 0000000140BCD18A: jnz     short loc_140BCD166
 * 0000000140BCD18C: jmp     loc_140BC6A63
 * 0000000140BCD191: mov     r14, [r13+8]
 * 0000000140BCD195: mov     r8d, [r13+10h]
 * 0000000140BCD199: mov     r9, r14
 * 0000000140BCD19C: add     [rsi+848h], r8d
 * 0000000140BCD1A3: mov     rax, r14
 * 0000000140BCD1A6: mov     r11d, [rsi+834h]
 * 0000000140BCD1AD: mov     r15, [rsi+838h]
 * 0000000140BCD1B4: lea     rcx, [r14+r8]
 * 0000000140BCD1B8: cmp     r14, rcx
 * 0000000140BCD1BB: jnb     short loc_140BCD1CD
 * 0000000140BCD1BD: mov     edx, 40h ; '@'
 * 0000000140BCD1C2: prefetchnta byte ptr [rax]
 * 0000000140BCD1C5: add     rax, rdx
 * 0000000140BCD1C8: cmp     rax, rcx
 * 0000000140BCD1CB: jb      short loc_140BCD1C2
 * 0000000140BCD1CD: mov     r10d, r8d
 * 0000000140BCD1D0: mov     rbx, r15
 * 0000000140BCD1D3: shr     r10d, 7
 * 0000000140BCD1D7: mov     edx, 1
 * 0000000140BCD1DC: mov     r12d, 0FFFFFFFFh
 * 0000000140BCD1E2: test    r10d, r10d
 * 0000000140BCD1E5: jz      short loc_140BCD24B
 * 0000000140BCD1E7: mov     rsi, 7010008004002001h
 * 0000000140BCD1F1: mov     eax, 8
 * 0000000140BCD1F6: xor     rbx, [r9]
 * 0000000140BCD1F9: mov     ecx, r11d
 * 0000000140BCD1FC: rol     rbx, cl
 * 0000000140BCD1FF: xor     rbx, [r9+8]
 * 0000000140BCD203: add     r9, 10h
 * 0000000140BCD207: rol     rbx, cl
 * 0000000140BCD20A: sub     rax, rdx
 * 0000000140BCD20D: jnz     short loc_140BCD1F6
 * 0000000140BCD20F: mov     rcx, r9
 * 0000000140BCD212: sub     rcx, r14
 * 0000000140BCD215: xor     rcx, r15
 * 0000000140BCD218: mov     rax, rcx
 * 0000000140BCD21B: rol     rax, 11h
 * 0000000140BCD21F: xor     rcx, rax
 * 0000000140BCD222: mov     rax, rsi
 * 0000000140BCD225: mul     rcx
 * 0000000140BCD228: xor     eax, edx
 * 0000000140BCD22A: mov     [rbp+8D0h+var_518], rdx
 * 0000000140BCD231: xor     r11d, eax
 * 0000000140BCD234: mov     edx, 1
 * 0000000140BCD239: and     r11d, 3Fh
 * 0000000140BCD23D: cmovz   r11d, edx
 * 0000000140BCD241: add     r10d, r12d
 * 0000000140BCD244: jnz     short loc_140BCD1F1
 * 0000000140BCD246: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BCD24B: and     r8d, 7Fh
 * 0000000140BCD24F: cmp     r8d, 8
 * 0000000140BCD253: jb      short loc_140BCD272
 * 0000000140BCD255: mov     eax, r8d
 * 0000000140BCD258: shr     rax, 3
 * 0000000140BCD25C: xor     rbx, [r9]
 * 0000000140BCD25F: mov     ecx, r11d
 * 0000000140BCD262: rol     rbx, cl
 * 0000000140BCD265: add     r9, 8
 * 0000000140BCD269: add     r8d, 0FFFFFFF8h
 * 0000000140BCD26D: sub     rax, rdx
 * 0000000140BCD270: jnz     short loc_140BCD25C
 * 0000000140BCD272: xor     r15d, r15d
 * 0000000140BCD275: test    r8d, r8d
 * 0000000140BCD278: jz      short loc_140BCD28F
 * 0000000140BCD27A: movzx   eax, byte ptr [r9]
 * 0000000140BCD27E: mov     ecx, r11d
 * 0000000140BCD281: xor     rbx, rax
 * 0000000140BCD284: add     r9, rdx
 * 0000000140BCD287: rol     rbx, cl
 * 0000000140BCD28A: add     r8d, r12d
 * 0000000140BCD28D: jnz     short loc_140BCD27A
 * 0000000140BCD28F: mov     rax, rbx
 * 0000000140BCD292: jmp     short loc_140BCD296
 * 0000000140BCD294: xor     ebx, eax
 * 0000000140BCD296: shr     rax, 1Fh
 * 0000000140BCD29A: test    rax, rax
 * 0000000140BCD29D: jnz     short loc_140BCD294
 * 0000000140BCD29F: btr     ebx, 1Fh
 * 0000000140BCD2A3: mov     r12d, r15d
 * 0000000140BCD2A6: cmp     ebx, [r13+14h]
 * 0000000140BCD2AA: jz      loc_140BCD4E0
 * 0000000140BCD2B0: cmp     [r13+0], r15d
 * 0000000140BCD2B4: jnz     short loc_140BCD2BE
 * 0000000140BCD2B6: cmp     [r13+18h], r15d
 * 0000000140BCD2BA: cmovnz  r12d, edx
 * 0000000140BCD2BE: mov     ecx, [r13+10h]
 * 0000000140BCD2C2: mov     rdx, [r13+8]
 * 0000000140BCD2C6: test    rcx, rcx
 * 0000000140BCD2C9: jz      loc_140BCD395
 * 0000000140BCD2CF: mov     eax, [rsi+9DCh]
 * 0000000140BCD2D5: mov     r8d, 40h ; '@'
 * 0000000140BCD2DB: test    r8b, al
 * 0000000140BCD2DE: jz      loc_140BCD395
 * 0000000140BCD2E4: mov     r15, cr8
 * 0000000140BCD2E8: lea     eax, [r8-3Eh]
 * 0000000140BCD2EC: mov     cr8, rax
 * 0000000140BCD2F0: mov     r14, rdx
 * 0000000140BCD2F3: lea     rax, [rcx-1]
 * 0000000140BCD2F7: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140BCD2FE: add     rax, rdx
 * 0000000140BCD301: or      rax, 0FFFh
 * 0000000140BCD307: mov     [rbp+8D0h+var_950], rax
 * 0000000140BCD30B: lea     r13, [r14-1]
 * 0000000140BCD30F: mov     rax, [rsi+468h]
 * 0000000140BCD316: xor     edx, edx
 * 0000000140BCD318: mov     rcx, r14
 * 0000000140BCD31B: call    KeGuardDispatchICall
 * 0000000140BCD320: cmp     eax, 0C000022Dh
 * 0000000140BCD325: jnz     short loc_140BCD34C
 * 0000000140BCD327: test    r12d, r12d
 * 0000000140BCD32A: jnz     short loc_140BCD385
 * 0000000140BCD32C: lea     eax, [r12+1]
 * 0000000140BCD331: cmp     r15b, al
 * 0000000140BCD334: ja      short loc_140BCD350
 * 0000000140BCD336: movzx   eax, r15b
 * 0000000140BCD33A: mov     cr8, rax
 * 0000000140BCD33E: mov     al, [r14]
 * 0000000140BCD341: lea     eax, [r12+2]
 * 0000000140BCD346: mov     cr8, rax
 * 0000000140BCD34A: jmp     short loc_140BCD30F
 * 0000000140BCD34C: test    eax, eax
 * 0000000140BCD34E: js      short loc_140BCD385
 * 0000000140BCD350: mov     r11d, 1000h
 * 0000000140BCD356: add     r14, r11
 * 0000000140BCD359: add     r13, r11
 * 0000000140BCD35C: cmp     r13, [rbp+8D0h+var_950]
 * 0000000140BCD360: jnz     short loc_140BCD30F
 * 0000000140BCD362: movzx   eax, r15b
 * 0000000140BCD366: mov     cr8, rax
 * 0000000140BCD36A: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BCD36F: xor     r15d, r15d
 * 0000000140BCD372: mov     r14, 0A3A03F5891C8B4E8h
 * 0000000140BCD37C: lea     ebx, [r15+1]
 * 0000000140BCD380: jmp     loc_140BCD4F5
 * 0000000140BCD385: movzx   eax, r15b
 * 0000000140BCD389: mov     cr8, rax
 * 0000000140BCD38D: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BCD392: xor     r15d, r15d
 * 0000000140BCD395: mov     eax, [r13+14h]
 * 0000000140BCD399: cmp     [rsi+918h], r15d
 * 0000000140BCD3A0: jnz     short loc_140BCD3B2
 * 0000000140BCD3A2: mov     ecx, ebx
 * 0000000140BCD3A4: xor     rcx, rax
 * 0000000140BCD3A7: mov     rax, [rsi+588h]
 * 0000000140BCD3AE: mov     [rax+18h], rcx
 * 0000000140BCD3B2: mov     r14, 0A3A03F5891C8B4E8h
 * 0000000140BCD3BC: mov     rcx, [r13+8]
 * 0000000140BCD3C0: mov     r8, 0B3B74BDEE4453415h
 * 0000000140BCD3CA: mov     ebx, 1
 * 0000000140BCD3CF: cmp     [rsi+918h], r15d
 * 0000000140BCD3D6: jnz     loc_140BCD4D8
 * 0000000140BCD3DC: lea     rax, [rsi+r14]
 * 0000000140BCD3E0: mov     [rsi+920h], rax
 * 0000000140BCD3E7: lea     rax, [r8+r13]
 * 0000000140BCD3EB: mov     [rsi+928h], rax
 * 0000000140BCD3F2: movsxd  rax, dword ptr [r13+0]
 * 0000000140BCD3F6: mov     [rsi+930h], rax
 * 0000000140BCD3FD: mov     [rsi+938h], rcx
 * 0000000140BCD404: mov     [rsi+918h], ebx
 * 0000000140BCD40A: mov     ecx, [rsi+9D8h]
 * 0000000140BCD410: bt      ecx, 1Dh
 * 0000000140BCD414: jb      loc_140BCD4D8
 * 0000000140BCD41A: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCD424: jz      loc_140BCD4D8
 * 0000000140BCD42A: test    bl, cl
 * 0000000140BCD42C: jz      loc_140BCD4D8
 * 0000000140BCD432: mov     ecx, [rsi+0A74h]
 * 0000000140BCD438: mov     eax, [rsi+804h]
 * 0000000140BCD43E: mov     r10, [rsi+838h]
 * 0000000140BCD445: sub     eax, ecx
 * 0000000140BCD447: mov     r8, [rsi+0A78h]
 * 0000000140BCD44E: lea     rdx, [rcx+rsi]
 * 0000000140BCD452: mov     ecx, eax
 * 0000000140BCD454: shr     rcx, 3
 * 0000000140BCD458: lea     r9, [rdx+rcx*8]
 * 0000000140BCD45C: jmp     short loc_140BCD47F
 * 0000000140BCD45E: xor     [rdx], r8
 * 0000000140BCD461: mov     rax, [rdx]
 * 0000000140BCD464: movzx   ecx, r8b
 * 0000000140BCD468: xor     rax, r10
 * 0000000140BCD46B: and     ecx, 3Fh
 * 0000000140BCD46E: ror     r8, cl
 * 0000000140BCD471: add     r8, rax
 * 0000000140BCD474: xor     r8, 0EFAh
 * 0000000140BCD47B: add     rdx, 8
 * 0000000140BCD47F: cmp     rdx, r9
 * 0000000140BCD482: jnz     short loc_140BCD45E
 * 0000000140BCD484: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCD48C: cmp     r8, [rsi+0A80h]
 * 0000000140BCD493: jz      short loc_140BCD4EF
 * 0000000140BCD495: mov     ecx, [rsi+804h]
 * 0000000140BCD49B: mov     rax, [rsi+588h]
 * 0000000140BCD4A2: mov     [rax], rsi
 * 0000000140BCD4A5: mov     [rax+10h], ecx
 * 0000000140BCD4A8: mov     rcx, [rsi+0A80h]
 * 0000000140BCD4AF: cmp     [rsi+918h], r15d
 * 0000000140BCD4B6: jnz     short loc_140BCD4C6
 * 0000000140BCD4B8: mov     rax, [rsi+588h]
 * 0000000140BCD4BF: xor     rcx, r8
 * 0000000140BCD4C2: mov     [rax+18h], rcx
 * 0000000140BCD4C6: xor     edx, edx
 * 0000000140BCD4C8: mov     r9d, 100h
 * 0000000140BCD4CE: mov     rcx, rsi
 * 0000000140BCD4D1: call    sub_140BDA384
 * 0000000140BCD4D6: jmp     short loc_140BCD4EF
 * 0000000140BCD4D8: mov     r11d, 1000h
 * 0000000140BCD4DE: jmp     short loc_140BCD4FF
 * 0000000140BCD4E0: mov     ebx, 1
 * 0000000140BCD4E5: mov     r14, 0A3A03F5891C8B4E8h
 * 0000000140BCD4EF: mov     r11d, 1000h
 * 0000000140BCD4F5: mov     r8, 0B3B74BDEE4453415h
 * 0000000140BCD4FF: mov     eax, [r13+28h]
 * 0000000140BCD503: mov     ecx, 2
 * 0000000140BCD508: test    cl, al
 * 0000000140BCD50A: jz      loc_140BC4FA9
 * 0000000140BCD510: mov     rbx, [r13+8]
 * 0000000140BCD514: test    al, 4
 * 0000000140BCD516: jz      loc_140BCD668
 * 0000000140BCD51C: mov     rax, [rbx+70h]
 * 0000000140BCD520: mov     rdx, [r13+18h]
 * 0000000140BCD524: mov     rcx, [rax]
 * 0000000140BCD527: cmp     rcx, rdx
 * 0000000140BCD52A: jz      loc_140BCD668
 * 0000000140BCD530: mov     rax, [rsi+588h]
 * 0000000140BCD537: mov     [rax], rcx
 * 0000000140BCD53A: mov     dword ptr [rax+10h], 100h
 * 0000000140BCD541: cmp     [rsi+918h], r15d
 * 0000000140BCD548: jnz     short loc_140BCD558
 * 0000000140BCD54A: mov     rax, [rsi+588h]
 * 0000000140BCD551: xor     rcx, rdx
 * 0000000140BCD554: mov     [rax+18h], rcx
 * 0000000140BCD558: mov     rcx, [rbx+70h]
 * 0000000140BCD55C: cmp     [rsi+918h], r15d
 * 0000000140BCD563: jnz     loc_140BCD668
 * 0000000140BCD569: lea     rax, [rsi+r14]
 * 0000000140BCD56D: mov     edx, 1
 * 0000000140BCD572: mov     [rsi+920h], rax
 * 0000000140BCD579: lea     rax, [r8+r13]
 * 0000000140BCD57D: mov     [rsi+928h], rax
 * 0000000140BCD584: movsxd  rax, dword ptr [r13+0]
 * 0000000140BCD588: mov     [rsi+930h], rax
 * 0000000140BCD58F: mov     [rsi+938h], rcx
 * 0000000140BCD596: mov     [rsi+918h], edx
 * 0000000140BCD59C: mov     ecx, [rsi+9D8h]
 * 0000000140BCD5A2: bt      ecx, 1Dh
 * 0000000140BCD5A6: jb      loc_140BCD668
 * 0000000140BCD5AC: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCD5B6: jz      loc_140BCD668
 * 0000000140BCD5BC: test    dl, cl
 * 0000000140BCD5BE: jz      loc_140BCD668
 * 0000000140BCD5C4: mov     ecx, [rsi+0A74h]
 * 0000000140BCD5CA: mov     eax, [rsi+804h]
 * 0000000140BCD5D0: mov     r10, [rsi+838h]
 * 0000000140BCD5D7: sub     eax, ecx
 * 0000000140BCD5D9: mov     r8, [rsi+0A78h]
 * 0000000140BCD5E0: lea     rdx, [rcx+rsi]
 * 0000000140BCD5E4: mov     ecx, eax
 * 0000000140BCD5E6: shr     rcx, 3
 * 0000000140BCD5EA: lea     r9, [rdx+rcx*8]
 * 0000000140BCD5EE: jmp     short loc_140BCD611
 * 0000000140BCD5F0: xor     [rdx], r8
 * 0000000140BCD5F3: mov     rax, [rdx]
 * 0000000140BCD5F6: movzx   ecx, r8b
 * 0000000140BCD5FA: xor     rax, r10
 * 0000000140BCD5FD: and     ecx, 3Fh
 * 0000000140BCD600: ror     r8, cl
 * 0000000140BCD603: add     r8, rax
 * 0000000140BCD606: xor     r8, 0EFAh
 * 0000000140BCD60D: add     rdx, 8
 * 0000000140BCD611: cmp     rdx, r9
 * 0000000140BCD614: jnz     short loc_140BCD5F0
 * 0000000140BCD616: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCD61E: cmp     r8, [rsi+0A80h]
 * 0000000140BCD625: jz      short loc_140BCD668
 * 0000000140BCD627: mov     ecx, [rsi+804h]
 * 0000000140BCD62D: mov     rax, [rsi+588h]
 * 0000000140BCD634: mov     [rax], rsi
 * 0000000140BCD637: mov     [rax+10h], ecx
 * 0000000140BCD63A: mov     rcx, [rsi+0A80h]
 * 0000000140BCD641: cmp     [rsi+918h], r15d
 * 0000000140BCD648: jnz     short loc_140BCD658
 * 0000000140BCD64A: mov     rax, [rsi+588h]
 * 0000000140BCD651: xor     rcx, r8
 * 0000000140BCD654: mov     [rax+18h], rcx
 * 0000000140BCD658: xor     edx, edx
 * 0000000140BCD65A: mov     r9d, 100h
 * 0000000140BCD660: mov     rcx, rsi
 * 0000000140BCD663: call    sub_140BDA384
 * 0000000140BCD668: mov     eax, [r13+28h]
 * 0000000140BCD66C: test    al, 8
 * 0000000140BCD66E: jz      loc_140BC5B58
 * 0000000140BCD674: mov     rax, [rbx+78h]
 * 0000000140BCD678: mov     rdx, [r13+20h]
 * 0000000140BCD67C: mov     rcx, [rax]
 * 0000000140BCD67F: cmp     rcx, rdx
 * 0000000140BCD682: jz      loc_140BC5B58
 * 0000000140BCD688: mov     rax, [rsi+588h]
 * 0000000140BCD68F: mov     [rax], rcx
 * 0000000140BCD692: mov     dword ptr [rax+10h], 100h
 * 0000000140BCD699: cmp     [rsi+918h], r15d
 * 0000000140BCD6A0: jnz     short loc_140BCD6B0
 * 0000000140BCD6A2: mov     rax, [rsi+588h]
 * 0000000140BCD6A9: xor     rcx, rdx
 * 0000000140BCD6AC: mov     [rax+18h], rcx
 * 0000000140BCD6B0: mov     rcx, [rbx+78h]
 * 0000000140BCD6B4: mov     ebx, 1
 * 0000000140BCD6B9: cmp     [rsi+918h], r15d
 * 0000000140BCD6C0: jnz     loc_140BC5B5D
 * 0000000140BCD6C6: lea     rax, [rsi+r14]
 * 0000000140BCD6CA: mov     [rsi+920h], rax
 * 0000000140BCD6D1: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BCD6DB: add     rax, r13
 * 0000000140BCD6DE: mov     [rsi+928h], rax
 * 0000000140BCD6E5: movsxd  rax, dword ptr [r13+0]
 * 0000000140BCD6E9: mov     [rsi+930h], rax
 * 0000000140BCD6F0: mov     [rsi+938h], rcx
 * 0000000140BCD6F7: mov     [rsi+918h], ebx
 * 0000000140BCD6FD: mov     ecx, [rsi+9D8h]
 * 0000000140BCD703: bt      ecx, 1Dh
 * 0000000140BCD707: jb      loc_140BC5B5D
 * 0000000140BCD70D: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCD717: jz      loc_140BC5B5D
 * 0000000140BCD71D: test    bl, cl
 * 0000000140BCD71F: jz      loc_140BC5B5D
 * 0000000140BCD725: mov     ecx, [rsi+0A74h]
 * 0000000140BCD72B: mov     eax, [rsi+804h]
 * 0000000140BCD731: mov     r10, [rsi+838h]
 * 0000000140BCD738: sub     eax, ecx
 * 0000000140BCD73A: mov     r8, [rsi+0A78h]
 * 0000000140BCD741: lea     rdx, [rcx+rsi]
 * 0000000140BCD745: mov     ecx, eax
 * 0000000140BCD747: shr     rcx, 3
 * 0000000140BCD74B: lea     r9, [rdx+rcx*8]
 * 0000000140BCD74F: jmp     short loc_140BCD772
 * 0000000140BCD751: xor     [rdx], r8
 * 0000000140BCD754: mov     rax, [rdx]
 * 0000000140BCD757: movzx   ecx, r8b
 * 0000000140BCD75B: xor     rax, r10
 * 0000000140BCD75E: and     ecx, 3Fh
 * 0000000140BCD761: ror     r8, cl
 * 0000000140BCD764: add     r8, rax
 * 0000000140BCD767: xor     r8, 0EFAh
 * 0000000140BCD76E: add     rdx, 8
 * 0000000140BCD772: cmp     rdx, r9
 * 0000000140BCD775: jnz     short loc_140BCD751
 * 0000000140BCD777: jmp     loc_140BC6A63
 * 0000000140BCD77C: mov     rdx, r13
 * 0000000140BCD77F: mov     rcx, rsi
 * 0000000140BCD782: call    sub_140516C24
 * 0000000140BCD787: jmp     loc_140BD0398
 * 0000000140BCD78C: mov     rdx, r13
 * 0000000140BCD78F: mov     rcx, rsi
 * 0000000140BCD792: call    sub_140517D28
 * 0000000140BCD797: jmp     loc_140BD0398
 * 0000000140BCD79C: mov     eax, [rsi+850h]
 * 0000000140BCD7A2: test    bl, al
 * 0000000140BCD7A4: jz      loc_140BC4FAF
 * 0000000140BCD7AA: mov     rax, [rsi+568h]
 * 0000000140BCD7B1: cmp     [rax+20h], r15
 * 0000000140BCD7B5: jnz     short loc_140BCD7BF
 * 0000000140BCD7B7: mov     rbx, r15
 * 0000000140BCD7BA: jmp     loc_140BCD8D2
 * 0000000140BCD7BF: mov     ecx, [rsi+9BCh]
 * 0000000140BCD7C5: mov     r12d, 0FFFFFFFFh
 * 0000000140BCD7CB: cmp     ecx, r12d
 * 0000000140BCD7CE: jnz     short loc_140BCD7DA
 * 0000000140BCD7D0: mov     [rsi+9BCh], r15d
 * 0000000140BCD7D7: mov     ecx, r15d
 * 0000000140BCD7DA: mov     rax, [rsi+288h]
 * 0000000140BCD7E1: call    KeGuardDispatchICall
 * 0000000140BCD7E6: mov     rbx, rax
 * 0000000140BCD7E9: test    rax, rax
 * 0000000140BCD7EC: jnz     short loc_140BCD804
 * 0000000140BCD7EE: mov     rax, [rsi+290h]
 * 0000000140BCD7F5: xor     ecx, ecx
 * 0000000140BCD7F7: call    KeGuardDispatchICall
 * 0000000140BCD7FC: mov     rbx, rax
 * 0000000140BCD7FF: test    rax, rax
 * 0000000140BCD802: jz      short loc_140BCD7B7
 * 0000000140BCD804: lea     r14, [rsi+988h]
 * 0000000140BCD80B: jmp     short loc_140BCD828
 * 0000000140BCD80D: mov     rax, [rsi+290h]
 * 0000000140BCD814: mov     rcx, rbx
 * 0000000140BCD817: call    KeGuardDispatchICall
 * 0000000140BCD81C: mov     rbx, rax
 * 0000000140BCD81F: test    rax, rax
 * 0000000140BCD822: jz      loc_140BCD8B1
 * 0000000140BCD828: mov     rax, [rsi+2A0h]
 * 0000000140BCD82F: mov     rdx, r14
 * 0000000140BCD832: mov     rcx, rbx
 * 0000000140BCD835: call    KeGuardDispatchICall
 * 0000000140BCD83A: test    eax, eax
 * 0000000140BCD83C: js      short loc_140BCD80D
 * 0000000140BCD83E: mov     rax, [rsi+3D0h]
 * 0000000140BCD845: lea     rdx, [rbp+8D0h+var_710]
 * 0000000140BCD84C: xor     r9d, r9d
 * 0000000140BCD84F: xor     r8d, r8d
 * 0000000140BCD852: lea     ecx, [r9+1Ah]
 * 0000000140BCD856: call    KeGuardDispatchICall
 * 0000000140BCD85B: mov     r14d, eax
 * 0000000140BCD85E: lea     rdx, [rsi+988h]
 * 0000000140BCD865: mov     rax, [rsi+2A8h]
 * 0000000140BCD86C: mov     rcx, rbx
 * 0000000140BCD86F: call    KeGuardDispatchICall
 * 0000000140BCD874: mov     rax, [rsi+290h]
 * 0000000140BCD87B: mov     rcx, rbx
 * 0000000140BCD87E: call    KeGuardDispatchICall
 * 0000000140BCD883: mov     rbx, rax
 * 0000000140BCD886: test    rax, rax
 * 0000000140BCD889: jz      short loc_140BCD8BD
 * 0000000140BCD88B: mov     rax, [rsi+2B0h]
 * 0000000140BCD892: mov     rcx, rbx
 * 0000000140BCD895: call    KeGuardDispatchICall
 * 0000000140BCD89A: mov     [rsi+9BCh], eax
 * 0000000140BCD8A0: mov     rcx, rbx
 * 0000000140BCD8A3: mov     rax, [rsi+298h]
 * 0000000140BCD8AA: call    KeGuardDispatchICall
 * 0000000140BCD8AF: jmp     short loc_140BCD8C4
 * 0000000140BCD8B1: mov     [rsi+9BCh], r12d
 * 0000000140BCD8B8: jmp     loc_140BCD7B7
 * 0000000140BCD8BD: mov     [rsi+9BCh], r12d
 * 0000000140BCD8C4: mov     rbx, [rbp+8D0h+var_710]
 * 0000000140BCD8CB: test    r14d, r14d
 * 0000000140BCD8CE: cmovs   rbx, r15
 * 0000000140BCD8D2: mov     rax, [rsi+3B0h]
 * 0000000140BCD8D9: xor     ecx, ecx
 * 0000000140BCD8DB: mov     [rsp+9D0h+var_968], rbx
 * 0000000140BCD8E0: mov     [rsp+9D0h+var_958], r15d
 * 0000000140BCD8E5: call    KeGuardDispatchICall
 * 0000000140BCD8EA: xor     r12d, r12d
 * 0000000140BCD8ED: mov     [rbp+8D0h+var_930], rax
 * 0000000140BCD8F1: mov     r14, rax
 * 0000000140BCD8F4: test    rax, rax
 * 0000000140BCD8F7: jz      loc_140BCE91A
 * 0000000140BCD8FD: mov     rcx, r14
 * 0000000140BCD900: cmp     rbx, r14
 * 0000000140BCD903: jnz     loc_140BCE0D6
 * 0000000140BCD909: mov     rax, [rsi+3A0h]
 * 0000000140BCD910: call    KeGuardDispatchICall
 * 0000000140BCD915: test    eax, eax
 * 0000000140BCD917: js      loc_140BCE8E7
 * 0000000140BCD91D: mov     rax, [rsi+3E0h]
 * 0000000140BCD924: mov     rcx, r14
 * 0000000140BCD927: call    KeGuardDispatchICall
 * 0000000140BCD92C: movzx   ebx, al
 * 0000000140BCD92F: lea     rdx, [rbp+8D0h+var_918]
 * 0000000140BCD933: mov     rax, [rsi+3E8h]
 * 0000000140BCD93A: mov     rcx, r14
 * 0000000140BCD93D: call    KeGuardDispatchICall
 * 0000000140BCD942: mov     byte ptr [rbp+8D0h+arg_8], al
 * 0000000140BCD948: mov     rcx, r14
 * 0000000140BCD94B: mov     rax, [rsi+3F0h]
 * 0000000140BCD952: call    KeGuardDispatchICall
 * 0000000140BCD957: mov     [rbp+8D0h+var_950], rax
 * 0000000140BCD95B: cmp     bl, 61h ; 'a'
 * 0000000140BCD95E: jz      loc_140BCDAA9
 * 0000000140BCD964: cmp     [rsi+918h], r12d
 * 0000000140BCD96B: jnz     loc_140BCDAA9
 * 0000000140BCD971: mov     rax, [rsi+588h]
 * 0000000140BCD978: mov     ecx, ebx
 * 0000000140BCD97A: xor     rcx, 61h
 * 0000000140BCD97E: mov     [rax+18h], rcx
 * 0000000140BCD982: cmp     [rsi+918h], r12d
 * 0000000140BCD989: jnz     loc_140BCDAA9
 * 0000000140BCD98F: mov     rdx, [rsp+9D0h+var_980]
 * 0000000140BCD994: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140BCD99E: mov     r9, 0B3B74BDEE4453415h
 * 0000000140BCD9A8: mov     r8d, 1
 * 0000000140BCD9AE: lea     rax, [rsi+r10]
 * 0000000140BCD9B2: mov     [rsi+920h], rax
 * 0000000140BCD9B9: lea     rax, [rdx+r9]
 * 0000000140BCD9BD: mov     [rsi+928h], rax
 * 0000000140BCD9C4: movsxd  rax, dword ptr [rdx]
 * 0000000140BCD9C7: mov     [rsi+930h], rax
 * 0000000140BCD9CE: mov     [rsi+938h], r14
 * 0000000140BCD9D5: mov     [rsi+918h], r8d
 * 0000000140BCD9DC: mov     ecx, [rsi+9D8h]
 * 0000000140BCD9E2: bt      ecx, 1Dh
 * 0000000140BCD9E6: jb      loc_140BCDAC8
 * 0000000140BCD9EC: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCD9F6: jz      loc_140BCDAC8
 * 0000000140BCD9FC: test    r8b, cl
 * 0000000140BCD9FF: jz      loc_140BCDAC8
 * 0000000140BCDA05: mov     ecx, [rsi+0A74h]
 * 0000000140BCDA0B: mov     eax, [rsi+804h]
 * 0000000140BCDA11: mov     r10, [rsi+838h]
 * 0000000140BCDA18: sub     eax, ecx
 * 0000000140BCDA1A: mov     r8, [rsi+0A78h]
 * 0000000140BCDA21: lea     rdx, [rcx+rsi]
 * 0000000140BCDA25: mov     ecx, eax
 * 0000000140BCDA27: shr     rcx, 3
 * 0000000140BCDA2B: lea     r9, [rdx+rcx*8]
 * 0000000140BCDA2F: jmp     short loc_140BCDA52
 * 0000000140BCDA31: xor     [rdx], r8
 * 0000000140BCDA34: mov     rax, [rdx]
 * 0000000140BCDA37: movzx   ecx, r8b
 * 0000000140BCDA3B: xor     rax, r10
 * 0000000140BCDA3E: and     ecx, 3Fh
 * 0000000140BCDA41: ror     r8, cl
 * 0000000140BCDA44: add     r8, rax
 * 0000000140BCDA47: xor     r8, 0EFAh
 * 0000000140BCDA4E: add     rdx, 8
 * 0000000140BCDA52: cmp     rdx, r9
 * 0000000140BCDA55: jnz     short loc_140BCDA31
 * 0000000140BCDA57: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCDA5F: cmp     r8, [rsi+0A80h]
 * 0000000140BCDA66: jz      short loc_140BCDAA9
 * 0000000140BCDA68: mov     ecx, [rsi+804h]
 * 0000000140BCDA6E: mov     rax, [rsi+588h]
 * 0000000140BCDA75: mov     [rax], rsi
 * 0000000140BCDA78: mov     [rax+10h], ecx
 * 0000000140BCDA7B: mov     rcx, [rsi+0A80h]
 * 0000000140BCDA82: cmp     [rsi+918h], r12d
 * 0000000140BCDA89: jnz     short loc_140BCDA99
 * 0000000140BCDA8B: mov     rax, [rsi+588h]
 * 0000000140BCDA92: xor     rcx, r8
 * 0000000140BCDA95: mov     [rax+18h], rcx
 * 0000000140BCDA99: xor     edx, edx
 * 0000000140BCDA9B: mov     r9d, 100h
 * 0000000140BCDAA1: mov     rcx, rsi
 * 0000000140BCDAA4: call    sub_140BDA384
 * 0000000140BCDAA9: mov     rdx, [rsp+9D0h+var_980]
 * 0000000140BCDAAE: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140BCDAB8: mov     r9, 0B3B74BDEE4453415h
 * 0000000140BCDAC2: mov     r8d, 1
 * 0000000140BCDAC8: mov     ecx, ebx
 * 0000000140BCDACA: mov     r14b, r12b
 * 0000000140BCDACD: and     ecx, 7
 * 0000000140BCDAD0: sub     ecx, 1
 * 0000000140BCDAD3: jz      loc_140BCDC09
 * 0000000140BCDAD9: xor     r11d, r11d
 * 0000000140BCDADC: cmp     ecx, 1
 * 0000000140BCDADF: jz      loc_140BCDBFC
 * 0000000140BCDAE5: test    bl, 7
 * 0000000140BCDAE8: jz      loc_140BCDC0F
 * 0000000140BCDAEE: cmp     [rsi+918h], r11d
 * 0000000140BCDAF5: jnz     loc_140BCDC0F
 * 0000000140BCDAFB: lea     rax, [rsi+r10]
 * 0000000140BCDAFF: mov     [rsi+920h], rax
 * 0000000140BCDB06: lea     rax, [rdx+r9]
 * 0000000140BCDB0A: mov     [rsi+928h], rax
 * 0000000140BCDB11: movsxd  rax, dword ptr [rdx]
 * 0000000140BCDB14: mov     [rsi+930h], rax
 * 0000000140BCDB1B: mov     rax, [rbp+8D0h+var_930]
 * 0000000140BCDB1F: mov     [rsi+938h], rax
 * 0000000140BCDB26: mov     [rsi+918h], r8d
 * 0000000140BCDB2D: mov     ecx, [rsi+9D8h]
 * 0000000140BCDB33: bt      ecx, 1Dh
 * 0000000140BCDB37: jb      loc_140BCDC0F
 * 0000000140BCDB3D: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCDB47: jz      loc_140BCDC0F
 * 0000000140BCDB4D: test    r8b, cl
 * 0000000140BCDB50: jz      loc_140BCDC0F
 * 0000000140BCDB56: mov     ecx, [rsi+0A74h]
 * 0000000140BCDB5C: mov     eax, [rsi+804h]
 * 0000000140BCDB62: mov     r10, [rsi+838h]
 * 0000000140BCDB69: sub     eax, ecx
 * 0000000140BCDB6B: mov     r8, [rsi+0A78h]
 * 0000000140BCDB72: lea     rdx, [rcx+rsi]
 * 0000000140BCDB76: mov     ecx, eax
 * 0000000140BCDB78: shr     rcx, 3
 * 0000000140BCDB7C: lea     r9, [rdx+rcx*8]
 * 0000000140BCDB80: jmp     short loc_140BCDBA3
 * 0000000140BCDB82: xor     [rdx], r8
 * 0000000140BCDB85: mov     rax, [rdx]
 * 0000000140BCDB88: movzx   ecx, r8b
 * 0000000140BCDB8C: xor     rax, r10
 * 0000000140BCDB8F: and     ecx, 3Fh
 * 0000000140BCDB92: ror     r8, cl
 * 0000000140BCDB95: add     r8, rax
 * 0000000140BCDB98: xor     r8, 0EFAh
 * 0000000140BCDB9F: add     rdx, 8
 * 0000000140BCDBA3: cmp     rdx, r9
 * 0000000140BCDBA6: jnz     short loc_140BCDB82
 * 0000000140BCDBA8: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCDBB0: cmp     r8, [rsi+0A80h]
 * 0000000140BCDBB7: jz      short loc_140BCDC0F
 * 0000000140BCDBB9: mov     ecx, [rsi+804h]
 * 0000000140BCDBBF: mov     rax, [rsi+588h]
 * 0000000140BCDBC6: mov     [rax], rsi
 * 0000000140BCDBC9: mov     [rax+10h], ecx
 * 0000000140BCDBCC: mov     rcx, [rsi+0A80h]
 * 0000000140BCDBD3: cmp     [rsi+918h], r11d
 * 0000000140BCDBDA: jnz     short loc_140BCDBEA
 * 0000000140BCDBDC: mov     rax, [rsi+588h]
 * 0000000140BCDBE3: xor     rcx, r8
 * 0000000140BCDBE6: mov     [rax+18h], rcx
 * 0000000140BCDBEA: xor     edx, edx
 * 0000000140BCDBEC: mov     r9d, 100h
 * 0000000140BCDBF2: mov     rcx, rsi
 * 0000000140BCDBF5: call    sub_140BDA384
 * 0000000140BCDBFA: jmp     short loc_140BCDC0C
 * 0000000140BCDBFC: mov     eax, 10h
 * 0000000140BCDC01: mov     r14b, al
 * 0000000140BCDC04: mov     r12b, al
 * 0000000140BCDC07: jmp     short loc_140BCDC0F
 * 0000000140BCDC09: mov     r14b, 30h ; '0'
 * 0000000140BCDC0C: xor     r11d, r11d
 * 0000000140BCDC0F: mov     r15, [rsi+5C0h]
 * 0000000140BCDC16: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140BCDC20: mov     dil, byte ptr [rbp+8D0h+arg_8]
 * 0000000140BCDC27: mov     r9, 0B3B74BDEE4453415h
 * 0000000140BCDC31: mov     rdx, [rsp+9D0h+var_980]
 * 0000000140BCDC36: mov     r8d, 1
 * 0000000140BCDC3C: shr     rbx, 4
 * 0000000140BCDC40: or      r14b, [r15+rbx*2]
 * 0000000140BCDC44: cmp     r14b, dil
 * 0000000140BCDC47: mov     r14, [rbp+8D0h+var_930]
 * 0000000140BCDC4B: jz      loc_140BCDD78
 * 0000000140BCDC51: cmp     [rsi+918h], r11d
 * 0000000140BCDC58: jnz     loc_140BCDD78
 * 0000000140BCDC5E: lea     rax, [rsi+r10]
 * 0000000140BCDC62: mov     [rsi+920h], rax
 * 0000000140BCDC69: lea     rax, [rdx+r9]
 * 0000000140BCDC6D: mov     [rsi+928h], rax
 * 0000000140BCDC74: movsxd  rax, dword ptr [rdx]
 * 0000000140BCDC77: mov     [rsi+930h], rax
 * 0000000140BCDC7E: mov     [rsi+938h], r14
 * 0000000140BCDC85: mov     [rsi+918h], r8d
 * 0000000140BCDC8C: mov     ecx, [rsi+9D8h]
 * 0000000140BCDC92: bt      ecx, 1Dh
 * 0000000140BCDC96: jb      loc_140BCDD78
 * 0000000140BCDC9C: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCDCA6: jz      loc_140BCDD78
 * 0000000140BCDCAC: test    r8b, cl
 * 0000000140BCDCAF: jz      loc_140BCDD78
 * 0000000140BCDCB5: mov     ecx, [rsi+0A74h]
 * 0000000140BCDCBB: mov     eax, [rsi+804h]
 * 0000000140BCDCC1: mov     r10, [rsi+838h]
 * 0000000140BCDCC8: sub     eax, ecx
 * 0000000140BCDCCA: mov     r8, [rsi+0A78h]
 * 0000000140BCDCD1: lea     rdx, [rcx+rsi]
 * 0000000140BCDCD5: mov     ecx, eax
 * 0000000140BCDCD7: shr     rcx, 3
 * 0000000140BCDCDB: lea     r9, [rdx+rcx*8]
 * 0000000140BCDCDF: jmp     short loc_140BCDD02
 * 0000000140BCDCE1: xor     [rdx], r8
 * 0000000140BCDCE4: mov     rax, [rdx]
 * 0000000140BCDCE7: movzx   ecx, r8b
 * 0000000140BCDCEB: xor     rax, r10
 * 0000000140BCDCEE: and     ecx, 3Fh
 * 0000000140BCDCF1: ror     r8, cl
 * 0000000140BCDCF4: add     r8, rax
 * 0000000140BCDCF7: xor     r8, 0EFAh
 * 0000000140BCDCFE: add     rdx, 8
 * 0000000140BCDD02: cmp     rdx, r9
 * 0000000140BCDD05: jnz     short loc_140BCDCE1
 * 0000000140BCDD07: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCDD0F: cmp     r8, [rsi+0A80h]
 * 0000000140BCDD16: jz      short loc_140BCDD59
 * 0000000140BCDD18: mov     ecx, [rsi+804h]
 * 0000000140BCDD1E: mov     rax, [rsi+588h]
 * 0000000140BCDD25: mov     [rax], rsi
 * 0000000140BCDD28: mov     [rax+10h], ecx
 * 0000000140BCDD2B: mov     rcx, [rsi+0A80h]
 * 0000000140BCDD32: cmp     [rsi+918h], r11d
 * 0000000140BCDD39: jnz     short loc_140BCDD49
 * 0000000140BCDD3B: mov     rax, [rsi+588h]
 * 0000000140BCDD42: xor     rcx, r8
 * 0000000140BCDD45: mov     [rax+18h], rcx
 * 0000000140BCDD49: xor     edx, edx
 * 0000000140BCDD4B: mov     r9d, 100h
 * 0000000140BCDD51: mov     rcx, rsi
 * 0000000140BCDD54: call    sub_140BDA384
 * 0000000140BCDD59: mov     rdx, [rsp+9D0h+var_980]
 * 0000000140BCDD5E: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140BCDD68: mov     r9, 0B3B74BDEE4453415h
 * 0000000140BCDD72: mov     r8d, 1
 * 0000000140BCDD78: or      r12b, [r15+rbx*2+1]
 * 0000000140BCDD7D: cmp     r12b, [rbp+8D0h+var_918]
 * 0000000140BCDD81: jz      loc_140BCDE94
 * 0000000140BCDD87: xor     r12d, r12d
 * 0000000140BCDD8A: cmp     [rsi+918h], r12d
 * 0000000140BCDD91: jnz     loc_140BCDE97
 * 0000000140BCDD97: lea     rax, [rsi+r10]
 * 0000000140BCDD9B: mov     [rsi+920h], rax
 * 0000000140BCDDA2: lea     rax, [rdx+r9]
 * 0000000140BCDDA6: mov     [rsi+928h], rax
 * 0000000140BCDDAD: movsxd  rax, dword ptr [rdx]
 * 0000000140BCDDB0: mov     [rsi+930h], rax
 * 0000000140BCDDB7: mov     [rsi+938h], r14
 * 0000000140BCDDBE: mov     [rsi+918h], r8d
 * 0000000140BCDDC5: mov     ecx, [rsi+9D8h]
 * 0000000140BCDDCB: bt      ecx, 1Dh
 * 0000000140BCDDCF: jb      loc_140BCDE97
 * 0000000140BCDDD5: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCDDDF: jz      loc_140BCDE97
 * 0000000140BCDDE5: test    r8b, cl
 * 0000000140BCDDE8: jz      loc_140BCDE97
 * 0000000140BCDDEE: mov     ecx, [rsi+0A74h]
 * 0000000140BCDDF4: mov     eax, [rsi+804h]
 * 0000000140BCDDFA: mov     r10, [rsi+838h]
 * 0000000140BCDE01: sub     eax, ecx
 * 0000000140BCDE03: mov     r8, [rsi+0A78h]
 * 0000000140BCDE0A: lea     rdx, [rcx+rsi]
 * 0000000140BCDE0E: mov     ecx, eax
 * 0000000140BCDE10: shr     rcx, 3
 * 0000000140BCDE14: lea     r9, [rdx+rcx*8]
 * 0000000140BCDE18: jmp     short loc_140BCDE3B
 * 0000000140BCDE1A: xor     [rdx], r8
 * 0000000140BCDE1D: mov     rax, [rdx]
 * 0000000140BCDE20: movzx   ecx, r8b
 * 0000000140BCDE24: xor     rax, r10
 * 0000000140BCDE27: and     ecx, 3Fh
 * 0000000140BCDE2A: ror     r8, cl
 * 0000000140BCDE2D: add     r8, rax
 * 0000000140BCDE30: xor     r8, 0EFAh
 * 0000000140BCDE37: add     rdx, 8
 * 0000000140BCDE3B: cmp     rdx, r9
 * 0000000140BCDE3E: jnz     short loc_140BCDE1A
 * 0000000140BCDE40: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCDE48: cmp     r8, [rsi+0A80h]
 * 0000000140BCDE4F: jz      short loc_140BCDE97
 * 0000000140BCDE51: mov     ecx, [rsi+804h]
 * 0000000140BCDE57: mov     rax, [rsi+588h]
 * 0000000140BCDE5E: mov     [rax], rsi
 * 0000000140BCDE61: mov     [rax+10h], ecx
 * 0000000140BCDE64: mov     rcx, [rsi+0A80h]
 * 0000000140BCDE6B: cmp     [rsi+918h], r12d
 * 0000000140BCDE72: jnz     short loc_140BCDE82
 * 0000000140BCDE74: mov     rax, [rsi+588h]
 * 0000000140BCDE7B: xor     rcx, r8
 * 0000000140BCDE7E: mov     [rax+18h], rcx
 * 0000000140BCDE82: xor     edx, edx
 * 0000000140BCDE84: mov     r9d, 100h
 * 0000000140BCDE8A: mov     rcx, rsi
 * 0000000140BCDE8D: call    sub_140BDA384
 * 0000000140BCDE92: jmp     short loc_140BCDE97
 * 0000000140BCDE94: xor     r12d, r12d
 * 0000000140BCDE97: cmp     r14, [rsi+4D8h]
 * 0000000140BCDE9E: jz      loc_140BCE8C3
 * 0000000140BCDEA4: mov     rax, [rsi+3D8h]
 * 0000000140BCDEAB: mov     edx, 1
 * 0000000140BCDEB0: mov     rcx, r14
 * 0000000140BCDEB3: call    KeGuardDispatchICall
 * 0000000140BCDEB8: mov     rbx, rax
 * 0000000140BCDEBB: test    rax, rax
 * 0000000140BCDEBE: jz      loc_140BCE8C3
 * 0000000140BCDEC4: mov     rcx, [rax]
 * 0000000140BCDEC7: mov     r15, rax
 * 0000000140BCDECA: test    rcx, rcx
 * 0000000140BCDECD: jz      loc_140BCE8B4
 * 0000000140BCDED3: mov     r12, [rbp+8D0h+var_950]
 * 0000000140BCDED7: mov     r15, [rbp+8D0h+var_930]
 * 0000000140BCDEDB: mov     [rsp+9D0h+var_978], rax
 * 0000000140BCDEE0: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 0000000140BCDEE4: mov     [rbx], rcx
 * 0000000140BCDEE7: mov     rax, [rsi+1F0h]
 * 0000000140BCDEEE: call    KeGuardDispatchICall
 * 0000000140BCDEF3: mov     rcx, [rbx+8]
 * 0000000140BCDEF7: movzx   edx, [rbp+8D0h+var_918]
 * 0000000140BCDEFB: mov     r14, rcx
 * 0000000140BCDEFE: movzx   eax, dil
 * 0000000140BCDF02: and     r14, 0FFFFFFFFFFFF0000h
 * 0000000140BCDF09: cmp     r14, r12
 * 0000000140BCDF0C: cmovz   edx, eax
 * 0000000140BCDF0F: mov     rax, [rsi+3F8h]
 * 0000000140BCDF16: shr     rcx, 6
 * 0000000140BCDF1A: and     cl, 0Fh
 * 0000000140BCDF1D: call    KeGuardDispatchICall
 * 0000000140BCDF22: xor     r11d, r11d
 * 0000000140BCDF25: test    eax, eax
 * 0000000140BCDF27: jnz     loc_140BCE0BC
 * 0000000140BCDF2D: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BCDF37: lea     r9d, [r11+1]
 * 0000000140BCDF3B: jz      short loc_140BCDF89
 * 0000000140BCDF3D: mov     rcx, [rsi+0AC8h]
 * 0000000140BCDF44: lea     edx, [rax+30h]
 * 0000000140BCDF47: lea     r8d, [r11+6]
 * 0000000140BCDF4B: mov     rax, [r13+0]
 * 0000000140BCDF4F: add     edx, 0FFFFFFF8h
 * 0000000140BCDF52: mov     [rcx], rax
 * 0000000140BCDF55: add     r13, 8
 * 0000000140BCDF59: add     rcx, 8
 * 0000000140BCDF5D: sub     r8, r9
 * 0000000140BCDF60: jnz     short loc_140BCDF4B
 * 0000000140BCDF62: test    edx, edx
 * 0000000140BCDF64: jz      short loc_140BCDF82
 * 0000000140BCDF66: mov     edi, 0FFFFFFFFh
 * 0000000140BCDF6B: mov     al, [r13+0]
 * 0000000140BCDF6F: add     r13, r9
 * 0000000140BCDF72: mov     [rcx], al
 * 0000000140BCDF74: add     rcx, r9
 * 0000000140BCDF77: add     edx, edi
 * 0000000140BCDF79: jnz     short loc_140BCDF6B
 * 0000000140BCDF7B: mov     dil, byte ptr [rbp+8D0h+arg_8]
 * 0000000140BCDF82: mov     r13, [rsi+0AC8h]
 * 0000000140BCDF89: mov     [r13+18h], r14
 * 0000000140BCDF8D: mov     rax, [rbx]
 * 0000000140BCDF90: mov     [r13+20h], rax
 * 0000000140BCDF94: mov     eax, [rbx+8]
 * 0000000140BCDF97: shr     rax, 6
 * 0000000140BCDF9B: and     al, 0Fh
 * 0000000140BCDF9D: mov     [r13+28h], al
 * 0000000140BCDFA1: cmp     [rsi+918h], r11d
 * 0000000140BCDFA8: jnz     loc_140BCE0BC
 * 0000000140BCDFAE: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BCDFB8: add     rax, rsi
 * 0000000140BCDFBB: mov     [rsi+920h], rax
 * 0000000140BCDFC2: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BCDFCC: add     rax, r13
 * 0000000140BCDFCF: mov     [rsi+928h], rax
 * 0000000140BCDFD6: movsxd  rax, dword ptr [r13+0]
 * 0000000140BCDFDA: mov     [rsi+930h], rax
 * 0000000140BCDFE1: mov     [rsi+938h], r15
 * 0000000140BCDFE8: mov     [rsi+918h], r9d
 * 0000000140BCDFEF: mov     ecx, [rsi+9D8h]
 * 0000000140BCDFF5: bt      ecx, 1Dh
 * 0000000140BCDFF9: jb      loc_140BCE0BC
 * 0000000140BCDFFF: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCE009: jz      loc_140BCE0BC
 * 0000000140BCE00F: test    r9b, cl
 * 0000000140BCE012: jz      loc_140BCE0BC
 * 0000000140BCE018: mov     ecx, [rsi+0A74h]
 * 0000000140BCE01E: mov     eax, [rsi+804h]
 * 0000000140BCE024: mov     r10, [rsi+838h]
 * 0000000140BCE02B: sub     eax, ecx
 * 0000000140BCE02D: mov     r8, [rsi+0A78h]
 * 0000000140BCE034: lea     rdx, [rcx+rsi]
 * 0000000140BCE038: mov     ecx, eax
 * 0000000140BCE03A: shr     rcx, 3
 * 0000000140BCE03E: lea     r9, [rdx+rcx*8]
 * 0000000140BCE042: jmp     short loc_140BCE065
 * 0000000140BCE044: xor     [rdx], r8
 * 0000000140BCE047: mov     rax, [rdx]
 * 0000000140BCE04A: movzx   ecx, r8b
 * 0000000140BCE04E: xor     rax, r10
 * 0000000140BCE051: and     ecx, 3Fh
 * 0000000140BCE054: ror     r8, cl
 * 0000000140BCE057: add     r8, rax
 * 0000000140BCE05A: xor     r8, 0EFAh
 * 0000000140BCE061: add     rdx, 8
 * 0000000140BCE065: cmp     rdx, r9
 * 0000000140BCE068: jnz     short loc_140BCE044
 * 0000000140BCE06A: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCE072: cmp     r8, [rsi+0A80h]
 * 0000000140BCE079: jz      short loc_140BCE0BC
 * 0000000140BCE07B: mov     ecx, [rsi+804h]
 * 0000000140BCE081: mov     rax, [rsi+588h]
 * 0000000140BCE088: mov     [rax], rsi
 * 0000000140BCE08B: mov     [rax+10h], ecx
 * 0000000140BCE08E: mov     rcx, [rsi+0A80h]
 * 0000000140BCE095: cmp     [rsi+918h], r11d
 * 0000000140BCE09C: jnz     short loc_140BCE0AC
 * 0000000140BCE09E: mov     rax, [rsi+588h]
 * 0000000140BCE0A5: xor     rcx, r8
 * 0000000140BCE0A8: mov     [rax+18h], rcx
 * 0000000140BCE0AC: xor     edx, edx
 * 0000000140BCE0AE: mov     r9d, 100h
 * 0000000140BCE0B4: mov     rcx, rsi
 * 0000000140BCE0B7: call    sub_140BDA384
 * 0000000140BCE0BC: add     rbx, 30h ; '0'
 * 0000000140BCE0C0: mov     rcx, [rbx]
 * 0000000140BCE0C3: test    rcx, rcx
 * 0000000140BCE0C6: jnz     loc_140BCDEE0
 * 0000000140BCE0CC: mov     r15, [rsp+9D0h+var_978]
 * 0000000140BCE0D1: jmp     loc_140BCE8AD
 * 0000000140BCE0D6: mov     rax, [rsi+3C8h]
 * 0000000140BCE0DD: call    KeGuardDispatchICall
 * 0000000140BCE0E2: test    eax, eax
 * 0000000140BCE0E4: jz      loc_140BCE8EC
 * 0000000140BCE0EA: mov     rax, [rsi+3A0h]
 * 0000000140BCE0F1: mov     rcx, r14
 * 0000000140BCE0F4: call    KeGuardDispatchICall
 * 0000000140BCE0F9: test    eax, eax
 * 0000000140BCE0FB: js      loc_140BCE8E7
 * 0000000140BCE101: mov     rax, [rsi+3E0h]
 * 0000000140BCE108: mov     rcx, r14
 * 0000000140BCE10B: call    KeGuardDispatchICall
 * 0000000140BCE110: movzx   ebx, al
 * 0000000140BCE113: lea     rdx, [rbp+8D0h+var_917]
 * 0000000140BCE117: mov     rax, [rsi+3E8h]
 * 0000000140BCE11E: mov     rcx, r14
 * 0000000140BCE121: call    KeGuardDispatchICall
 * 0000000140BCE126: movzx   edi, al
 * 0000000140BCE129: mov     rcx, r14
 * 0000000140BCE12C: mov     rax, [rsi+3F0h]
 * 0000000140BCE133: call    KeGuardDispatchICall
 * 0000000140BCE138: mov     [rbp+8D0h+arg_8], rax
 * 0000000140BCE13F: cmp     bl, 61h ; 'a'
 * 0000000140BCE142: jz      loc_140BCE28D
 * 0000000140BCE148: cmp     [rsi+918h], r12d
 * 0000000140BCE14F: jnz     loc_140BCE28D
 * 0000000140BCE155: mov     rax, [rsi+588h]
 * 0000000140BCE15C: mov     ecx, ebx
 * 0000000140BCE15E: xor     rcx, 61h
 * 0000000140BCE162: mov     [rax+18h], rcx
 * 0000000140BCE166: cmp     [rsi+918h], r12d
 * 0000000140BCE16D: jnz     loc_140BCE28D
 * 0000000140BCE173: mov     rdx, [rsp+9D0h+var_980]
 * 0000000140BCE178: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140BCE182: mov     r9, 0B3B74BDEE4453415h
 * 0000000140BCE18C: mov     r8d, 1
 * 0000000140BCE192: lea     rax, [rsi+r10]
 * 0000000140BCE196: mov     [rsi+920h], rax
 * 0000000140BCE19D: lea     rax, [rdx+r9]
 * 0000000140BCE1A1: mov     [rsi+928h], rax
 * 0000000140BCE1A8: movsxd  rax, dword ptr [rdx]
 * 0000000140BCE1AB: mov     [rsi+930h], rax
 * 0000000140BCE1B2: mov     [rsi+938h], r14
 * 0000000140BCE1B9: mov     [rsi+918h], r8d
 * 0000000140BCE1C0: mov     ecx, [rsi+9D8h]
 * 0000000140BCE1C6: bt      ecx, 1Dh
 * 0000000140BCE1CA: jb      loc_140BCE2AC
 * 0000000140BCE1D0: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCE1DA: jz      loc_140BCE2AC
 * 0000000140BCE1E0: test    r8b, cl
 * 0000000140BCE1E3: jz      loc_140BCE2AC
 * 0000000140BCE1E9: mov     ecx, [rsi+0A74h]
 * 0000000140BCE1EF: mov     eax, [rsi+804h]
 * 0000000140BCE1F5: mov     r10, [rsi+838h]
 * 0000000140BCE1FC: sub     eax, ecx
 * 0000000140BCE1FE: mov     r8, [rsi+0A78h]
 * 0000000140BCE205: lea     rdx, [rcx+rsi]
 * 0000000140BCE209: mov     ecx, eax
 * 0000000140BCE20B: shr     rcx, 3
 * 0000000140BCE20F: lea     r9, [rdx+rcx*8]
 * 0000000140BCE213: jmp     short loc_140BCE236
 * 0000000140BCE215: xor     [rdx], r8
 * 0000000140BCE218: mov     rax, [rdx]
 * 0000000140BCE21B: movzx   ecx, r8b
 * 0000000140BCE21F: xor     rax, r10
 * 0000000140BCE222: and     ecx, 3Fh
 * 0000000140BCE225: ror     r8, cl
 * 0000000140BCE228: add     r8, rax
 * 0000000140BCE22B: xor     r8, 0EFAh
 * 0000000140BCE232: add     rdx, 8
 * 0000000140BCE236: cmp     rdx, r9
 * 0000000140BCE239: jnz     short loc_140BCE215
 * 0000000140BCE23B: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCE243: cmp     r8, [rsi+0A80h]
 * 0000000140BCE24A: jz      short loc_140BCE28D
 * 0000000140BCE24C: mov     ecx, [rsi+804h]
 * 0000000140BCE252: mov     rax, [rsi+588h]
 * 0000000140BCE259: mov     [rax], rsi
 * 0000000140BCE25C: mov     [rax+10h], ecx
 * 0000000140BCE25F: mov     rcx, [rsi+0A80h]
 * 0000000140BCE266: cmp     [rsi+918h], r12d
 * 0000000140BCE26D: jnz     short loc_140BCE27D
 * 0000000140BCE26F: mov     rax, [rsi+588h]
 * 0000000140BCE276: xor     rcx, r8
 * 0000000140BCE279: mov     [rax+18h], rcx
 * 0000000140BCE27D: xor     edx, edx
 * 0000000140BCE27F: mov     r9d, 100h
 * 0000000140BCE285: mov     rcx, rsi
 * 0000000140BCE288: call    sub_140BDA384
 * 0000000140BCE28D: mov     rdx, [rsp+9D0h+var_980]
 * 0000000140BCE292: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140BCE29C: mov     r9, 0B3B74BDEE4453415h
 * 0000000140BCE2A6: mov     r8d, 1
 * 0000000140BCE2AC: mov     ecx, ebx
 * 0000000140BCE2AE: mov     r14b, r12b
 * 0000000140BCE2B1: and     ecx, 7
 * 0000000140BCE2B4: sub     ecx, 1
 * 0000000140BCE2B7: jz      loc_140BCE3ED
 * 0000000140BCE2BD: xor     r11d, r11d
 * 0000000140BCE2C0: cmp     ecx, 1
 * 0000000140BCE2C3: jz      loc_140BCE3E0
 * 0000000140BCE2C9: test    bl, 7
 * 0000000140BCE2CC: jz      loc_140BCE3F3
 * 0000000140BCE2D2: cmp     [rsi+918h], r11d
 * 0000000140BCE2D9: jnz     loc_140BCE3F3
 * 0000000140BCE2DF: lea     rax, [rsi+r10]
 * 0000000140BCE2E3: mov     [rsi+920h], rax
 * 0000000140BCE2EA: lea     rax, [rdx+r9]
 * 0000000140BCE2EE: mov     [rsi+928h], rax
 * 0000000140BCE2F5: movsxd  rax, dword ptr [rdx]
 * 0000000140BCE2F8: mov     [rsi+930h], rax
 * 0000000140BCE2FF: mov     rax, [rbp+8D0h+var_930]
 * 0000000140BCE303: mov     [rsi+938h], rax
 * 0000000140BCE30A: mov     [rsi+918h], r8d
 * 0000000140BCE311: mov     ecx, [rsi+9D8h]
 * 0000000140BCE317: bt      ecx, 1Dh
 * 0000000140BCE31B: jb      loc_140BCE3F3
 * 0000000140BCE321: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCE32B: jz      loc_140BCE3F3
 * 0000000140BCE331: test    r8b, cl
 * 0000000140BCE334: jz      loc_140BCE3F3
 * 0000000140BCE33A: mov     ecx, [rsi+0A74h]
 * 0000000140BCE340: mov     eax, [rsi+804h]
 * 0000000140BCE346: mov     r10, [rsi+838h]
 * 0000000140BCE34D: sub     eax, ecx
 * 0000000140BCE34F: mov     r8, [rsi+0A78h]
 * 0000000140BCE356: lea     rdx, [rcx+rsi]
 * 0000000140BCE35A: mov     ecx, eax
 * 0000000140BCE35C: shr     rcx, 3
 * 0000000140BCE360: lea     r9, [rdx+rcx*8]
 * 0000000140BCE364: jmp     short loc_140BCE387
 * 0000000140BCE366: xor     [rdx], r8
 * 0000000140BCE369: mov     rax, [rdx]
 * 0000000140BCE36C: movzx   ecx, r8b
 * 0000000140BCE370: xor     rax, r10
 * 0000000140BCE373: and     ecx, 3Fh
 * 0000000140BCE376: ror     r8, cl
 * 0000000140BCE379: add     r8, rax
 * 0000000140BCE37C: xor     r8, 0EFAh
 * 0000000140BCE383: add     rdx, 8
 * 0000000140BCE387: cmp     rdx, r9
 * 0000000140BCE38A: jnz     short loc_140BCE366
 * 0000000140BCE38C: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCE394: cmp     r8, [rsi+0A80h]
 * 0000000140BCE39B: jz      short loc_140BCE3F3
 * 0000000140BCE39D: mov     ecx, [rsi+804h]
 * 0000000140BCE3A3: mov     rax, [rsi+588h]
 * 0000000140BCE3AA: mov     [rax], rsi
 * 0000000140BCE3AD: mov     [rax+10h], ecx
 * 0000000140BCE3B0: mov     rcx, [rsi+0A80h]
 * 0000000140BCE3B7: cmp     [rsi+918h], r11d
 * 0000000140BCE3BE: jnz     short loc_140BCE3CE
 * 0000000140BCE3C0: mov     rax, [rsi+588h]
 * 0000000140BCE3C7: xor     rcx, r8
 * 0000000140BCE3CA: mov     [rax+18h], rcx
 * 0000000140BCE3CE: xor     edx, edx
 * 0000000140BCE3D0: mov     r9d, 100h
 * 0000000140BCE3D6: mov     rcx, rsi
 * 0000000140BCE3D9: call    sub_140BDA384
 * 0000000140BCE3DE: jmp     short loc_140BCE3F0
 * 0000000140BCE3E0: mov     eax, 10h
 * 0000000140BCE3E5: mov     r14b, al
 * 0000000140BCE3E8: mov     r12b, al
 * 0000000140BCE3EB: jmp     short loc_140BCE3F3
 * 0000000140BCE3ED: mov     r14b, 30h ; '0'
 * 0000000140BCE3F0: xor     r11d, r11d
 * 0000000140BCE3F3: mov     r15, [rsi+5C0h]
 * 0000000140BCE3FA: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140BCE404: mov     rdx, [rsp+9D0h+var_980]
 * 0000000140BCE409: mov     r9, 0B3B74BDEE4453415h
 * 0000000140BCE413: shr     rbx, 4
 * 0000000140BCE417: mov     r8d, 1
 * 0000000140BCE41D: or      r14b, [r15+rbx*2]
 * 0000000140BCE421: cmp     r14b, dil
 * 0000000140BCE424: mov     r14, [rbp+8D0h+var_930]
 * 0000000140BCE428: jz      loc_140BCE555
 * 0000000140BCE42E: cmp     [rsi+918h], r11d
 * 0000000140BCE435: jnz     loc_140BCE555
 * 0000000140BCE43B: lea     rax, [rsi+r10]
 * 0000000140BCE43F: mov     [rsi+920h], rax
 * 0000000140BCE446: lea     rax, [rdx+r9]
 * 0000000140BCE44A: mov     [rsi+928h], rax
 * 0000000140BCE451: movsxd  rax, dword ptr [rdx]
 * 0000000140BCE454: mov     [rsi+930h], rax
 * 0000000140BCE45B: mov     [rsi+938h], r14
 * 0000000140BCE462: mov     [rsi+918h], r8d
 * 0000000140BCE469: mov     ecx, [rsi+9D8h]
 * 0000000140BCE46F: bt      ecx, 1Dh
 * 0000000140BCE473: jb      loc_140BCE555
 * 0000000140BCE479: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCE483: jz      loc_140BCE555
 * 0000000140BCE489: test    r8b, cl
 * 0000000140BCE48C: jz      loc_140BCE555
 * 0000000140BCE492: mov     ecx, [rsi+0A74h]
 * 0000000140BCE498: mov     eax, [rsi+804h]
 * 0000000140BCE49E: mov     r10, [rsi+838h]
 * 0000000140BCE4A5: sub     eax, ecx
 * 0000000140BCE4A7: mov     r8, [rsi+0A78h]
 * 0000000140BCE4AE: lea     rdx, [rcx+rsi]
 * 0000000140BCE4B2: mov     ecx, eax
 * 0000000140BCE4B4: shr     rcx, 3
 * 0000000140BCE4B8: lea     r9, [rdx+rcx*8]
 * 0000000140BCE4BC: jmp     short loc_140BCE4DF
 * 0000000140BCE4BE: xor     [rdx], r8
 * 0000000140BCE4C1: mov     rax, [rdx]
 * 0000000140BCE4C4: movzx   ecx, r8b
 * 0000000140BCE4C8: xor     rax, r10
 * 0000000140BCE4CB: and     ecx, 3Fh
 * 0000000140BCE4CE: ror     r8, cl
 * 0000000140BCE4D1: add     r8, rax
 * 0000000140BCE4D4: xor     r8, 0EFAh
 * 0000000140BCE4DB: add     rdx, 8
 * 0000000140BCE4DF: cmp     rdx, r9
 * 0000000140BCE4E2: jnz     short loc_140BCE4BE
 * 0000000140BCE4E4: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCE4EC: cmp     r8, [rsi+0A80h]
 * 0000000140BCE4F3: jz      short loc_140BCE536
 * 0000000140BCE4F5: mov     ecx, [rsi+804h]
 * 0000000140BCE4FB: mov     rax, [rsi+588h]
 * 0000000140BCE502: mov     [rax], rsi
 * 0000000140BCE505: mov     [rax+10h], ecx
 * 0000000140BCE508: mov     rcx, [rsi+0A80h]
 * 0000000140BCE50F: cmp     [rsi+918h], r11d
 * 0000000140BCE516: jnz     short loc_140BCE526
 * 0000000140BCE518: mov     rax, [rsi+588h]
 * 0000000140BCE51F: xor     rcx, r8
 * 0000000140BCE522: mov     [rax+18h], rcx
 * 0000000140BCE526: xor     edx, edx
 * 0000000140BCE528: mov     r9d, 100h
 * 0000000140BCE52E: mov     rcx, rsi
 * 0000000140BCE531: call    sub_140BDA384
 * 0000000140BCE536: mov     rdx, [rsp+9D0h+var_980]
 * 0000000140BCE53B: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140BCE545: mov     r9, 0B3B74BDEE4453415h
 * 0000000140BCE54F: mov     r8d, 1
 * 0000000140BCE555: or      r12b, [r15+rbx*2+1]
 * 0000000140BCE55A: cmp     r12b, [rbp+8D0h+var_917]
 * 0000000140BCE55E: jz      loc_140BCE671
 * 0000000140BCE564: xor     r12d, r12d
 * 0000000140BCE567: cmp     [rsi+918h], r12d
 * 0000000140BCE56E: jnz     loc_140BCE674
 * 0000000140BCE574: lea     rax, [rsi+r10]
 * 0000000140BCE578: mov     [rsi+920h], rax
 * 0000000140BCE57F: lea     rax, [rdx+r9]
 * 0000000140BCE583: mov     [rsi+928h], rax
 * 0000000140BCE58A: movsxd  rax, dword ptr [rdx]
 * 0000000140BCE58D: mov     [rsi+930h], rax
 * 0000000140BCE594: mov     [rsi+938h], r14
 * 0000000140BCE59B: mov     [rsi+918h], r8d
 * 0000000140BCE5A2: mov     ecx, [rsi+9D8h]
 * 0000000140BCE5A8: bt      ecx, 1Dh
 * 0000000140BCE5AC: jb      loc_140BCE674
 * 0000000140BCE5B2: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCE5BC: jz      loc_140BCE674
 * 0000000140BCE5C2: test    r8b, cl
 * 0000000140BCE5C5: jz      loc_140BCE674
 * 0000000140BCE5CB: mov     ecx, [rsi+0A74h]
 * 0000000140BCE5D1: mov     eax, [rsi+804h]
 * 0000000140BCE5D7: mov     r10, [rsi+838h]
 * 0000000140BCE5DE: sub     eax, ecx
 * 0000000140BCE5E0: mov     r8, [rsi+0A78h]
 * 0000000140BCE5E7: lea     rdx, [rcx+rsi]
 * 0000000140BCE5EB: mov     ecx, eax
 * 0000000140BCE5ED: shr     rcx, 3
 * 0000000140BCE5F1: lea     r9, [rdx+rcx*8]
 * 0000000140BCE5F5: jmp     short loc_140BCE618
 * 0000000140BCE5F7: xor     [rdx], r8
 * 0000000140BCE5FA: mov     rax, [rdx]
 * 0000000140BCE5FD: movzx   ecx, r8b
 * 0000000140BCE601: xor     rax, r10
 * 0000000140BCE604: and     ecx, 3Fh
 * 0000000140BCE607: ror     r8, cl
 * 0000000140BCE60A: add     r8, rax
 * 0000000140BCE60D: xor     r8, 0EFAh
 * 0000000140BCE614: add     rdx, 8
 * 0000000140BCE618: cmp     rdx, r9
 * 0000000140BCE61B: jnz     short loc_140BCE5F7
 * 0000000140BCE61D: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCE625: cmp     r8, [rsi+0A80h]
 * 0000000140BCE62C: jz      short loc_140BCE674
 * 0000000140BCE62E: mov     ecx, [rsi+804h]
 * 0000000140BCE634: mov     rax, [rsi+588h]
 * 0000000140BCE63B: mov     [rax], rsi
 * 0000000140BCE63E: mov     [rax+10h], ecx
 * 0000000140BCE641: mov     rcx, [rsi+0A80h]
 * 0000000140BCE648: cmp     [rsi+918h], r12d
 * 0000000140BCE64F: jnz     short loc_140BCE65F
 * 0000000140BCE651: mov     rax, [rsi+588h]
 * 0000000140BCE658: xor     rcx, r8
 * 0000000140BCE65B: mov     [rax+18h], rcx
 * 0000000140BCE65F: xor     edx, edx
 * 0000000140BCE661: mov     r9d, 100h
 * 0000000140BCE667: mov     rcx, rsi
 * 0000000140BCE66A: call    sub_140BDA384
 * 0000000140BCE66F: jmp     short loc_140BCE674
 * 0000000140BCE671: xor     r12d, r12d
 * 0000000140BCE674: cmp     r14, [rsi+4D8h]
 * 0000000140BCE67B: jz      loc_140BCE8C3
 * 0000000140BCE681: mov     rax, [rsi+3D8h]
 * 0000000140BCE688: mov     edx, 1
 * 0000000140BCE68D: mov     rcx, r14
 * 0000000140BCE690: call    KeGuardDispatchICall
 * 0000000140BCE695: mov     rbx, rax
 * 0000000140BCE698: test    rax, rax
 * 0000000140BCE69B: jz      loc_140BCE8C3
 * 0000000140BCE6A1: mov     rcx, [rax]
 * 0000000140BCE6A4: mov     r15, rax
 * 0000000140BCE6A7: test    rcx, rcx
 * 0000000140BCE6AA: jz      loc_140BCE8B4
 * 0000000140BCE6B0: mov     r12, [rbp+8D0h+arg_8]
 * 0000000140BCE6B7: mov     r15, [rbp+8D0h+var_930]
 * 0000000140BCE6BB: mov     [rbp+8D0h+var_950], rax
 * 0000000140BCE6BF: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 0000000140BCE6C3: mov     [rbx], rcx
 * 0000000140BCE6C6: mov     rax, [rsi+1F0h]
 * 0000000140BCE6CD: call    KeGuardDispatchICall
 * 0000000140BCE6D2: mov     rcx, [rbx+8]
 * 0000000140BCE6D6: movzx   edx, [rbp+8D0h+var_917]
 * 0000000140BCE6DA: mov     r14, rcx
 * 0000000140BCE6DD: mov     rax, [rsi+3F8h]
 * 0000000140BCE6E4: and     r14, 0FFFFFFFFFFFF0000h
 * 0000000140BCE6EB: cmp     r14, r12
 * 0000000140BCE6EE: cmovz   edx, edi
 * 0000000140BCE6F1: shr     rcx, 6
 * 0000000140BCE6F5: and     cl, 0Fh
 * 0000000140BCE6F8: call    KeGuardDispatchICall
 * 0000000140BCE6FD: xor     r11d, r11d
 * 0000000140BCE700: test    eax, eax
 * 0000000140BCE702: jnz     loc_140BCE899
 * 0000000140BCE708: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BCE712: lea     r9d, [r11+1]
 * 0000000140BCE716: jz      short loc_140BCE766
 * 0000000140BCE718: mov     rcx, [rsi+0AC8h]
 * 0000000140BCE71F: lea     edx, [rax+30h]
 * 0000000140BCE722: lea     r8d, [r11+6]
 * 0000000140BCE726: mov     rax, [r13+0]
 * 0000000140BCE72A: add     edx, 0FFFFFFF8h
 * 0000000140BCE72D: mov     [rcx], rax
 * 0000000140BCE730: add     r13, 8
 * 0000000140BCE734: add     rcx, 8
 * 0000000140BCE738: sub     r8, r9
 * 0000000140BCE73B: jnz     short loc_140BCE726
 * 0000000140BCE73D: test    edx, edx
 * 0000000140BCE73F: jz      short loc_140BCE75F
 * 0000000140BCE741: mov     r12d, 0FFFFFFFFh
 * 0000000140BCE747: mov     al, [r13+0]
 * 0000000140BCE74B: add     r13, r9
 * 0000000140BCE74E: mov     [rcx], al
 * 0000000140BCE750: add     rcx, r9
 * 0000000140BCE753: add     edx, r12d
 * 0000000140BCE756: jnz     short loc_140BCE747
 * 0000000140BCE758: mov     r12, [rbp+8D0h+arg_8]
 * 0000000140BCE75F: mov     r13, [rsi+0AC8h]
 * 0000000140BCE766: mov     [r13+18h], r14
 * 0000000140BCE76A: mov     rax, [rbx]
 * 0000000140BCE76D: mov     [r13+20h], rax
 * 0000000140BCE771: mov     eax, [rbx+8]
 * 0000000140BCE774: shr     rax, 6
 * 0000000140BCE778: and     al, 0Fh
 * 0000000140BCE77A: mov     [r13+28h], al
 * 0000000140BCE77E: cmp     [rsi+918h], r11d
 * 0000000140BCE785: jnz     loc_140BCE899
 * 0000000140BCE78B: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BCE795: add     rax, rsi
 * 0000000140BCE798: mov     [rsi+920h], rax
 * 0000000140BCE79F: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BCE7A9: add     rax, r13
 * 0000000140BCE7AC: mov     [rsi+928h], rax
 * 0000000140BCE7B3: movsxd  rax, dword ptr [r13+0]
 * 0000000140BCE7B7: mov     [rsi+930h], rax
 * 0000000140BCE7BE: mov     [rsi+938h], r15
 * 0000000140BCE7C5: mov     [rsi+918h], r9d
 * 0000000140BCE7CC: mov     ecx, [rsi+9D8h]
 * 0000000140BCE7D2: bt      ecx, 1Dh
 * 0000000140BCE7D6: jb      loc_140BCE899
 * 0000000140BCE7DC: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCE7E6: jz      loc_140BCE899
 * 0000000140BCE7EC: test    r9b, cl
 * 0000000140BCE7EF: jz      loc_140BCE899
 * 0000000140BCE7F5: mov     ecx, [rsi+0A74h]
 * 0000000140BCE7FB: mov     eax, [rsi+804h]
 * 0000000140BCE801: mov     r10, [rsi+838h]
 * 0000000140BCE808: sub     eax, ecx
 * 0000000140BCE80A: mov     r8, [rsi+0A78h]
 * 0000000140BCE811: lea     rdx, [rcx+rsi]
 * 0000000140BCE815: mov     ecx, eax
 * 0000000140BCE817: shr     rcx, 3
 * 0000000140BCE81B: lea     r9, [rdx+rcx*8]
 * 0000000140BCE81F: jmp     short loc_140BCE842
 * 0000000140BCE821: xor     [rdx], r8
 * 0000000140BCE824: mov     rax, [rdx]
 * 0000000140BCE827: movzx   ecx, r8b
 * 0000000140BCE82B: xor     rax, r10
 * 0000000140BCE82E: and     ecx, 3Fh
 * 0000000140BCE831: ror     r8, cl
 * 0000000140BCE834: add     r8, rax
 * 0000000140BCE837: xor     r8, 0EFAh
 * 0000000140BCE83E: add     rdx, 8
 * 0000000140BCE842: cmp     rdx, r9
 * 0000000140BCE845: jnz     short loc_140BCE821
 * 0000000140BCE847: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCE84F: cmp     r8, [rsi+0A80h]
 * 0000000140BCE856: jz      short loc_140BCE899
 * 0000000140BCE858: mov     ecx, [rsi+804h]
 * 0000000140BCE85E: mov     rax, [rsi+588h]
 * 0000000140BCE865: mov     [rax], rsi
 * 0000000140BCE868: mov     [rax+10h], ecx
 * 0000000140BCE86B: mov     rcx, [rsi+0A80h]
 * 0000000140BCE872: cmp     [rsi+918h], r11d
 * 0000000140BCE879: jnz     short loc_140BCE889
 * 0000000140BCE87B: mov     rax, [rsi+588h]
 * 0000000140BCE882: xor     rcx, r8
 * 0000000140BCE885: mov     [rax+18h], rcx
 * 0000000140BCE889: xor     edx, edx
 * 0000000140BCE88B: mov     r9d, 100h
 * 0000000140BCE891: mov     rcx, rsi
 * 0000000140BCE894: call    sub_140BDA384
 * 0000000140BCE899: add     rbx, 30h ; '0'
 * 0000000140BCE89D: mov     rcx, [rbx]
 * 0000000140BCE8A0: test    rcx, rcx
 * 0000000140BCE8A3: jnz     loc_140BCE6BF
 * 0000000140BCE8A9: mov     r15, [rbp+8D0h+var_950]
 * 0000000140BCE8AD: mov     r14, [rbp+8D0h+var_930]
 * 0000000140BCE8B1: xor     r12d, r12d
 * 0000000140BCE8B4: mov     rax, [rsi+108h]
 * 0000000140BCE8BB: mov     rcx, r15
 * 0000000140BCE8BE: call    KeGuardDispatchICall
 * 0000000140BCE8C3: mov     rax, [rsi+3A8h]
 * 0000000140BCE8CA: mov     rcx, r14
 * 0000000140BCE8CD: call    KeGuardDispatchICall
 * 0000000140BCE8D2: mov     r15d, [rsp+9D0h+var_958]
 * 0000000140BCE8D7: mov     eax, 8000h
 * 0000000140BCE8DC: add     [rsi+848h], eax
 * 0000000140BCE8E2: mov     rbx, [rsp+9D0h+var_968]
 * 0000000140BCE8E7: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BCE8EC: mov     rax, [rsi+3B0h]
 * 0000000140BCE8F3: inc     r15d
 * 0000000140BCE8F6: mov     rcx, r14
 * 0000000140BCE8F9: mov     [rsp+9D0h+var_958], r15d
 * 0000000140BCE8FE: call    KeGuardDispatchICall
 * 0000000140BCE903: mov     [rbp+8D0h+var_930], rax
 * 0000000140BCE907: mov     r14, rax
 * 0000000140BCE90A: test    rax, rax
 * 0000000140BCE90D: jnz     loc_140BCD8FD
 * 0000000140BCE913: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BCE91A: mov     r13, [rsi+4D8h]
 * 0000000140BCE921: mov     rax, [rsi+3A0h]
 * 0000000140BCE928: mov     rcx, r13
 * 0000000140BCE92B: call    KeGuardDispatchICall
 * 0000000140BCE930: test    eax, eax
 * 0000000140BCE932: js      loc_140BCF10E
 * 0000000140BCE938: mov     rax, [rsi+3E0h]
 * 0000000140BCE93F: mov     rcx, r13
 * 0000000140BCE942: call    KeGuardDispatchICall
 * 0000000140BCE947: movzx   ebx, al
 * 0000000140BCE94A: lea     rdx, [rbp+8D0h+var_916]
 * 0000000140BCE94E: mov     rax, [rsi+3E8h]
 * 0000000140BCE955: mov     rcx, r13
 * 0000000140BCE958: call    KeGuardDispatchICall
 * 0000000140BCE95D: mov     byte ptr [rbp+8D0h+arg_8], al
 * 0000000140BCE963: mov     rcx, r13
 * 0000000140BCE966: mov     rax, [rsi+3F0h]
 * 0000000140BCE96D: call    KeGuardDispatchICall
 * 0000000140BCE972: mov     [rbp+8D0h+var_950], rax
 * 0000000140BCE976: cmp     bl, 72h ; 'r'
 * 0000000140BCE979: jz      loc_140BCEAC4
 * 0000000140BCE97F: cmp     [rsi+918h], r12d
 * 0000000140BCE986: jnz     loc_140BCEAC4
 * 0000000140BCE98C: mov     rax, [rsi+588h]
 * 0000000140BCE993: mov     ecx, ebx
 * 0000000140BCE995: xor     rcx, 72h
 * 0000000140BCE999: mov     [rax+18h], rcx
 * 0000000140BCE99D: cmp     [rsi+918h], r12d
 * 0000000140BCE9A4: jnz     loc_140BCEAC4
 * 0000000140BCE9AA: mov     rdx, [rsp+9D0h+var_980]
 * 0000000140BCE9AF: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140BCE9B9: mov     r9, 0B3B74BDEE4453415h
 * 0000000140BCE9C3: mov     r8d, 1
 * 0000000140BCE9C9: lea     rax, [rsi+r10]
 * 0000000140BCE9CD: mov     [rsi+920h], rax
 * 0000000140BCE9D4: lea     rax, [rdx+r9]
 * 0000000140BCE9D8: mov     [rsi+928h], rax
 * 0000000140BCE9DF: movsxd  rax, dword ptr [rdx]
 * 0000000140BCE9E2: mov     [rsi+930h], rax
 * 0000000140BCE9E9: mov     [rsi+938h], r13
 * 0000000140BCE9F0: mov     [rsi+918h], r8d
 * 0000000140BCE9F7: mov     ecx, [rsi+9D8h]
 * 0000000140BCE9FD: bt      ecx, 1Dh
 * 0000000140BCEA01: jb      loc_140BCEAE3
 * 0000000140BCEA07: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCEA11: jz      loc_140BCEAE3
 * 0000000140BCEA17: test    r8b, cl
 * 0000000140BCEA1A: jz      loc_140BCEAE3
 * 0000000140BCEA20: mov     ecx, [rsi+0A74h]
 * 0000000140BCEA26: mov     eax, [rsi+804h]
 * 0000000140BCEA2C: mov     r10, [rsi+838h]
 * 0000000140BCEA33: sub     eax, ecx
 * 0000000140BCEA35: mov     r8, [rsi+0A78h]
 * 0000000140BCEA3C: lea     rdx, [rcx+rsi]
 * 0000000140BCEA40: mov     ecx, eax
 * 0000000140BCEA42: shr     rcx, 3
 * 0000000140BCEA46: lea     r9, [rdx+rcx*8]
 * 0000000140BCEA4A: jmp     short loc_140BCEA6D
 * 0000000140BCEA4C: xor     [rdx], r8
 * 0000000140BCEA4F: mov     rax, [rdx]
 * 0000000140BCEA52: movzx   ecx, r8b
 * 0000000140BCEA56: xor     rax, r10
 * 0000000140BCEA59: and     ecx, 3Fh
 * 0000000140BCEA5C: ror     r8, cl
 * 0000000140BCEA5F: add     r8, rax
 * 0000000140BCEA62: xor     r8, 0EFAh
 * 0000000140BCEA69: add     rdx, 8
 * 0000000140BCEA6D: cmp     rdx, r9
 * 0000000140BCEA70: jnz     short loc_140BCEA4C
 * 0000000140BCEA72: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCEA7A: cmp     r8, [rsi+0A80h]
 * 0000000140BCEA81: jz      short loc_140BCEAC4
 * 0000000140BCEA83: mov     ecx, [rsi+804h]
 * 0000000140BCEA89: mov     rax, [rsi+588h]
 * 0000000140BCEA90: mov     [rax], rsi
 * 0000000140BCEA93: mov     [rax+10h], ecx
 * 0000000140BCEA96: mov     rcx, [rsi+0A80h]
 * 0000000140BCEA9D: cmp     [rsi+918h], r12d
 * 0000000140BCEAA4: jnz     short loc_140BCEAB4
 * 0000000140BCEAA6: mov     rax, [rsi+588h]
 * 0000000140BCEAAD: xor     rcx, r8
 * 0000000140BCEAB0: mov     [rax+18h], rcx
 * 0000000140BCEAB4: xor     edx, edx
 * 0000000140BCEAB6: mov     r9d, 100h
 * 0000000140BCEABC: mov     rcx, rsi
 * 0000000140BCEABF: call    sub_140BDA384
 * 0000000140BCEAC4: mov     rdx, [rsp+9D0h+var_980]
 * 0000000140BCEAC9: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140BCEAD3: mov     r9, 0B3B74BDEE4453415h
 * 0000000140BCEADD: mov     r8d, 1
 * 0000000140BCEAE3: mov     ecx, ebx
 * 0000000140BCEAE5: mov     r14b, r12b
 * 0000000140BCEAE8: and     ecx, 7
 * 0000000140BCEAEB: sub     ecx, 1
 * 0000000140BCEAEE: jz      loc_140BCEC20
 * 0000000140BCEAF4: xor     r11d, r11d
 * 0000000140BCEAF7: cmp     ecx, 1
 * 0000000140BCEAFA: jz      loc_140BCEC13
 * 0000000140BCEB00: test    bl, 7
 * 0000000140BCEB03: jz      loc_140BCEC26
 * 0000000140BCEB09: cmp     [rsi+918h], r11d
 * 0000000140BCEB10: jnz     loc_140BCEC26
 * 0000000140BCEB16: lea     rax, [rsi+r10]
 * 0000000140BCEB1A: mov     [rsi+920h], rax
 * 0000000140BCEB21: lea     rax, [rdx+r9]
 * 0000000140BCEB25: mov     [rsi+928h], rax
 * 0000000140BCEB2C: movsxd  rax, dword ptr [rdx]
 * 0000000140BCEB2F: mov     [rsi+930h], rax
 * 0000000140BCEB36: mov     [rsi+938h], r13
 * 0000000140BCEB3D: mov     [rsi+918h], r8d
 * 0000000140BCEB44: mov     ecx, [rsi+9D8h]
 * 0000000140BCEB4A: bt      ecx, 1Dh
 * 0000000140BCEB4E: jb      loc_140BCEC26
 * 0000000140BCEB54: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCEB5E: jz      loc_140BCEC26
 * 0000000140BCEB64: test    r8b, cl
 * 0000000140BCEB67: jz      loc_140BCEC26
 * 0000000140BCEB6D: mov     ecx, [rsi+0A74h]
 * 0000000140BCEB73: mov     eax, [rsi+804h]
 * 0000000140BCEB79: mov     r10, [rsi+838h]
 * 0000000140BCEB80: sub     eax, ecx
 * 0000000140BCEB82: mov     r8, [rsi+0A78h]
 * 0000000140BCEB89: lea     rdx, [rcx+rsi]
 * 0000000140BCEB8D: mov     ecx, eax
 * 0000000140BCEB8F: shr     rcx, 3
 * 0000000140BCEB93: lea     r9, [rdx+rcx*8]
 * 0000000140BCEB97: jmp     short loc_140BCEBBA
 * 0000000140BCEB99: xor     [rdx], r8
 * 0000000140BCEB9C: mov     rax, [rdx]
 * 0000000140BCEB9F: movzx   ecx, r8b
 * 0000000140BCEBA3: xor     rax, r10
 * 0000000140BCEBA6: and     ecx, 3Fh
 * 0000000140BCEBA9: ror     r8, cl
 * 0000000140BCEBAC: add     r8, rax
 * 0000000140BCEBAF: xor     r8, 0EFAh
 * 0000000140BCEBB6: add     rdx, 8
 * 0000000140BCEBBA: cmp     rdx, r9
 * 0000000140BCEBBD: jnz     short loc_140BCEB99
 * 0000000140BCEBBF: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCEBC7: cmp     r8, [rsi+0A80h]
 * 0000000140BCEBCE: jz      short loc_140BCEC26
 * 0000000140BCEBD0: mov     ecx, [rsi+804h]
 * 0000000140BCEBD6: mov     rax, [rsi+588h]
 * 0000000140BCEBDD: mov     [rax], rsi
 * 0000000140BCEBE0: mov     [rax+10h], ecx
 * 0000000140BCEBE3: mov     rcx, [rsi+0A80h]
 * 0000000140BCEBEA: cmp     [rsi+918h], r11d
 * 0000000140BCEBF1: jnz     short loc_140BCEC01
 * 0000000140BCEBF3: mov     rax, [rsi+588h]
 * 0000000140BCEBFA: xor     rcx, r8
 * 0000000140BCEBFD: mov     [rax+18h], rcx
 * 0000000140BCEC01: xor     edx, edx
 * 0000000140BCEC03: mov     r9d, 100h
 * 0000000140BCEC09: mov     rcx, rsi
 * 0000000140BCEC0C: call    sub_140BDA384
 * 0000000140BCEC11: jmp     short loc_140BCEC23
 * 0000000140BCEC13: mov     eax, 10h
 * 0000000140BCEC18: mov     r14b, al
 * 0000000140BCEC1B: mov     r12b, al
 * 0000000140BCEC1E: jmp     short loc_140BCEC26
 * 0000000140BCEC20: mov     r14b, 30h ; '0'
 * 0000000140BCEC23: xor     r11d, r11d
 * 0000000140BCEC26: mov     r15, [rsi+5C0h]
 * 0000000140BCEC2D: mov     r9, 0A3A03F5891C8B4E8h
 * 0000000140BCEC37: mov     rdx, [rsp+9D0h+var_980]
 * 0000000140BCEC3C: mov     r8, 0B3B74BDEE4453415h
 * 0000000140BCEC46: shr     rbx, 4
 * 0000000140BCEC4A: or      r14b, [r15+rbx*2]
 * 0000000140BCEC4E: cmp     r14b, byte ptr [rbp+8D0h+arg_8]
 * 0000000140BCEC55: mov     r14d, 1
 * 0000000140BCEC5B: jz      loc_140BCED82
 * 0000000140BCEC61: cmp     [rsi+918h], r11d
 * 0000000140BCEC68: jnz     loc_140BCED82
 * 0000000140BCEC6E: lea     rax, [rsi+r9]
 * 0000000140BCEC72: mov     [rsi+920h], rax
 * 0000000140BCEC79: lea     rax, [rdx+r8]
 * 0000000140BCEC7D: mov     [rsi+928h], rax
 * 0000000140BCEC84: movsxd  rax, dword ptr [rdx]
 * 0000000140BCEC87: mov     [rsi+930h], rax
 * 0000000140BCEC8E: mov     [rsi+938h], r13
 * 0000000140BCEC95: mov     [rsi+918h], r14d
 * 0000000140BCEC9C: mov     ecx, [rsi+9D8h]
 * 0000000140BCECA2: bt      ecx, 1Dh
 * 0000000140BCECA6: jb      loc_140BCED82
 * 0000000140BCECAC: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCECB6: jz      loc_140BCED82
 * 0000000140BCECBC: test    r14b, cl
 * 0000000140BCECBF: jz      loc_140BCED82
 * 0000000140BCECC5: mov     ecx, [rsi+0A74h]
 * 0000000140BCECCB: mov     eax, [rsi+804h]
 * 0000000140BCECD1: mov     r10, [rsi+838h]
 * 0000000140BCECD8: sub     eax, ecx
 * 0000000140BCECDA: mov     r8, [rsi+0A78h]
 * 0000000140BCECE1: lea     rdx, [rcx+rsi]
 * 0000000140BCECE5: mov     ecx, eax
 * 0000000140BCECE7: shr     rcx, 3
 * 0000000140BCECEB: lea     r9, [rdx+rcx*8]
 * 0000000140BCECEF: jmp     short loc_140BCED12
 * 0000000140BCECF1: xor     [rdx], r8
 * 0000000140BCECF4: mov     rax, [rdx]
 * 0000000140BCECF7: movzx   ecx, r8b
 * 0000000140BCECFB: xor     rax, r10
 * 0000000140BCECFE: and     ecx, 3Fh
 * 0000000140BCED01: ror     r8, cl
 * 0000000140BCED04: add     r8, rax
 * 0000000140BCED07: xor     r8, 0EFAh
 * 0000000140BCED0E: add     rdx, 8
 * 0000000140BCED12: cmp     rdx, r9
 * 0000000140BCED15: jnz     short loc_140BCECF1
 * 0000000140BCED17: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCED1F: cmp     r8, [rsi+0A80h]
 * 0000000140BCED26: jz      short loc_140BCED69
 * 0000000140BCED28: mov     ecx, [rsi+804h]
 * 0000000140BCED2E: mov     rax, [rsi+588h]
 * 0000000140BCED35: mov     [rax], rsi
 * 0000000140BCED38: mov     [rax+10h], ecx
 * 0000000140BCED3B: mov     rcx, [rsi+0A80h]
 * 0000000140BCED42: cmp     [rsi+918h], r11d
 * 0000000140BCED49: jnz     short loc_140BCED59
 * 0000000140BCED4B: mov     rax, [rsi+588h]
 * 0000000140BCED52: xor     rcx, r8
 * 0000000140BCED55: mov     [rax+18h], rcx
 * 0000000140BCED59: xor     edx, edx
 * 0000000140BCED5B: mov     r9d, 100h
 * 0000000140BCED61: mov     rcx, rsi
 * 0000000140BCED64: call    sub_140BDA384
 * 0000000140BCED69: mov     rdx, [rsp+9D0h+var_980]
 * 0000000140BCED6E: mov     r9, 0A3A03F5891C8B4E8h
 * 0000000140BCED78: mov     r8, 0B3B74BDEE4453415h
 * 0000000140BCED82: or      r12b, [r15+rbx*2+1]
 * 0000000140BCED87: cmp     r12b, [rbp+8D0h+var_916]
 * 0000000140BCED8B: jz      loc_140BCEE9C
 * 0000000140BCED91: xor     r12d, r12d
 * 0000000140BCED94: cmp     [rsi+918h], r12d
 * 0000000140BCED9B: jnz     loc_140BCEE9C
 * 0000000140BCEDA1: lea     rax, [rsi+r9]
 * 0000000140BCEDA5: mov     [rsi+920h], rax
 * 0000000140BCEDAC: lea     rax, [rdx+r8]
 * 0000000140BCEDB0: mov     [rsi+928h], rax
 * 0000000140BCEDB7: movsxd  rax, dword ptr [rdx]
 * 0000000140BCEDBA: mov     [rsi+930h], rax
 * 0000000140BCEDC1: mov     [rsi+938h], r13
 * 0000000140BCEDC8: mov     [rsi+918h], r14d
 * 0000000140BCEDCF: mov     ecx, [rsi+9D8h]
 * 0000000140BCEDD5: bt      ecx, 1Dh
 * 0000000140BCEDD9: jb      loc_140BCEE9C
 * 0000000140BCEDDF: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCEDE9: jz      loc_140BCEE9C
 * 0000000140BCEDEF: test    r14b, cl
 * 0000000140BCEDF2: jz      loc_140BCEE9C
 * 0000000140BCEDF8: mov     ecx, [rsi+0A74h]
 * 0000000140BCEDFE: mov     eax, [rsi+804h]
 * 0000000140BCEE04: mov     r10, [rsi+838h]
 * 0000000140BCEE0B: sub     eax, ecx
 * 0000000140BCEE0D: mov     r8, [rsi+0A78h]
 * 0000000140BCEE14: lea     rdx, [rcx+rsi]
 * 0000000140BCEE18: mov     ecx, eax
 * 0000000140BCEE1A: shr     rcx, 3
 * 0000000140BCEE1E: lea     r9, [rdx+rcx*8]
 * 0000000140BCEE22: jmp     short loc_140BCEE45
 * 0000000140BCEE24: xor     [rdx], r8
 * 0000000140BCEE27: mov     rax, [rdx]
 * 0000000140BCEE2A: movzx   ecx, r8b
 * 0000000140BCEE2E: xor     rax, r10
 * 0000000140BCEE31: and     ecx, 3Fh
 * 0000000140BCEE34: ror     r8, cl
 * 0000000140BCEE37: add     r8, rax
 * 0000000140BCEE3A: xor     r8, 0EFAh
 * 0000000140BCEE41: add     rdx, 8
 * 0000000140BCEE45: cmp     rdx, r9
 * 0000000140BCEE48: jnz     short loc_140BCEE24
 * 0000000140BCEE4A: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCEE52: cmp     r8, [rsi+0A80h]
 * 0000000140BCEE59: jz      short loc_140BCEE9C
 * 0000000140BCEE5B: mov     ecx, [rsi+804h]
 * 0000000140BCEE61: mov     rax, [rsi+588h]
 * 0000000140BCEE68: mov     [rax], rsi
 * 0000000140BCEE6B: mov     [rax+10h], ecx
 * 0000000140BCEE6E: mov     rcx, [rsi+0A80h]
 * 0000000140BCEE75: cmp     [rsi+918h], r12d
 * 0000000140BCEE7C: jnz     short loc_140BCEE8C
 * 0000000140BCEE7E: mov     rax, [rsi+588h]
 * 0000000140BCEE85: xor     rcx, r8
 * 0000000140BCEE88: mov     [rax+18h], rcx
 * 0000000140BCEE8C: xor     edx, edx
 * 0000000140BCEE8E: mov     r9d, 100h
 * 0000000140BCEE94: mov     rcx, rsi
 * 0000000140BCEE97: call    sub_140BDA384
 * 0000000140BCEE9C: cmp     r13, [rsi+4D8h]
 * 0000000140BCEEA3: jz      loc_140BCF0EF
 * 0000000140BCEEA9: mov     rax, [rsi+3D8h]
 * 0000000140BCEEB0: mov     edx, r14d
 * 0000000140BCEEB3: mov     rcx, r13
 * 0000000140BCEEB6: call    KeGuardDispatchICall
 * 0000000140BCEEBB: mov     rbx, rax
 * 0000000140BCEEBE: test    rax, rax
 * 0000000140BCEEC1: jz      loc_140BCF0EF
 * 0000000140BCEEC7: mov     rcx, [rax]
 * 0000000140BCEECA: mov     r15, rax
 * 0000000140BCEECD: test    rcx, rcx
 * 0000000140BCEED0: jz      loc_140BCF0E0
 * 0000000140BCEED6: mov     dil, byte ptr [rbp+8D0h+arg_8]
 * 0000000140BCEEDD: mov     r12, [rbp+8D0h+var_950]
 * 0000000140BCEEE1: mov     r15, [rsp+9D0h+var_980]
 * 0000000140BCEEE6: mov     [rsp+9D0h+var_978], rax
 * 0000000140BCEEEB: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 0000000140BCEEEF: mov     [rbx], rcx
 * 0000000140BCEEF2: mov     rax, [rsi+1F0h]
 * 0000000140BCEEF9: call    KeGuardDispatchICall
 * 0000000140BCEEFE: mov     rcx, [rbx+8]
 * 0000000140BCEF02: movzx   edx, [rbp+8D0h+var_916]
 * 0000000140BCEF06: mov     r14, rcx
 * 0000000140BCEF09: movzx   eax, dil
 * 0000000140BCEF0D: and     r14, 0FFFFFFFFFFFF0000h
 * 0000000140BCEF14: cmp     r14, r12
 * 0000000140BCEF17: cmovz   edx, eax
 * 0000000140BCEF1A: mov     rax, [rsi+3F8h]
 * 0000000140BCEF21: shr     rcx, 6
 * 0000000140BCEF25: and     cl, 0Fh
 * 0000000140BCEF28: call    KeGuardDispatchICall
 * 0000000140BCEF2D: xor     r11d, r11d
 * 0000000140BCEF30: test    eax, eax
 * 0000000140BCEF32: jnz     loc_140BCF0C4
 * 0000000140BCEF38: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BCEF42: lea     r9d, [r11+1]
 * 0000000140BCEF46: jz      short loc_140BCEF92
 * 0000000140BCEF48: mov     rcx, [rsi+0AC8h]
 * 0000000140BCEF4F: lea     edx, [rax+30h]
 * 0000000140BCEF52: lea     r8d, [r11+6]
 * 0000000140BCEF56: mov     rax, [r15]
 * 0000000140BCEF59: add     edx, 0FFFFFFF8h
 * 0000000140BCEF5C: mov     [rcx], rax
 * 0000000140BCEF5F: add     r15, 8
 * 0000000140BCEF63: add     rcx, 8
 * 0000000140BCEF67: sub     r8, r9
 * 0000000140BCEF6A: jnz     short loc_140BCEF56
 * 0000000140BCEF6C: test    edx, edx
 * 0000000140BCEF6E: jz      short loc_140BCEF8B
 * 0000000140BCEF70: mov     edi, 0FFFFFFFFh
 * 0000000140BCEF75: mov     al, [r15]
 * 0000000140BCEF78: add     r15, r9
 * 0000000140BCEF7B: mov     [rcx], al
 * 0000000140BCEF7D: add     rcx, r9
 * 0000000140BCEF80: add     edx, edi
 * 0000000140BCEF82: jnz     short loc_140BCEF75
 * 0000000140BCEF84: mov     dil, byte ptr [rbp+8D0h+arg_8]
 * 0000000140BCEF8B: mov     r15, [rsi+0AC8h]
 * 0000000140BCEF92: mov     [r15+18h], r14
 * 0000000140BCEF96: mov     rax, [rbx]
 * 0000000140BCEF99: mov     [r15+20h], rax
 * 0000000140BCEF9D: mov     eax, [rbx+8]
 * 0000000140BCEFA0: shr     rax, 6
 * 0000000140BCEFA4: and     al, 0Fh
 * 0000000140BCEFA6: mov     [r15+28h], al
 * 0000000140BCEFAA: cmp     [rsi+918h], r11d
 * 0000000140BCEFB1: jnz     loc_140BCF0C4
 * 0000000140BCEFB7: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BCEFC1: add     rax, rsi
 * 0000000140BCEFC4: mov     [rsi+920h], rax
 * 0000000140BCEFCB: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BCEFD5: add     rax, r15
 * 0000000140BCEFD8: mov     [rsi+928h], rax
 * 0000000140BCEFDF: movsxd  rax, dword ptr [r15]
 * 0000000140BCEFE2: mov     [rsi+930h], rax
 * 0000000140BCEFE9: mov     [rsi+938h], r13
 * 0000000140BCEFF0: mov     [rsi+918h], r9d
 * 0000000140BCEFF7: mov     ecx, [rsi+9D8h]
 * 0000000140BCEFFD: bt      ecx, 1Dh
 * 0000000140BCF001: jb      loc_140BCF0C4
 * 0000000140BCF007: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCF011: jz      loc_140BCF0C4
 * 0000000140BCF017: test    r9b, cl
 * 0000000140BCF01A: jz      loc_140BCF0C4
 * 0000000140BCF020: mov     ecx, [rsi+0A74h]
 * 0000000140BCF026: mov     eax, [rsi+804h]
 * 0000000140BCF02C: mov     r10, [rsi+838h]
 * 0000000140BCF033: sub     eax, ecx
 * 0000000140BCF035: mov     r8, [rsi+0A78h]
 * 0000000140BCF03C: lea     rdx, [rcx+rsi]
 * 0000000140BCF040: mov     ecx, eax
 * 0000000140BCF042: shr     rcx, 3
 * 0000000140BCF046: lea     r9, [rdx+rcx*8]
 * 0000000140BCF04A: jmp     short loc_140BCF06D
 * 0000000140BCF04C: xor     [rdx], r8
 * 0000000140BCF04F: mov     rax, [rdx]
 * 0000000140BCF052: movzx   ecx, r8b
 * 0000000140BCF056: xor     rax, r10
 * 0000000140BCF059: and     ecx, 3Fh
 * 0000000140BCF05C: ror     r8, cl
 * 0000000140BCF05F: add     r8, rax
 * 0000000140BCF062: xor     r8, 0EFAh
 * 0000000140BCF069: add     rdx, 8
 * 0000000140BCF06D: cmp     rdx, r9
 * 0000000140BCF070: jnz     short loc_140BCF04C
 * 0000000140BCF072: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCF07A: cmp     r8, [rsi+0A80h]
 * 0000000140BCF081: jz      short loc_140BCF0C4
 * 0000000140BCF083: mov     ecx, [rsi+804h]
 * 0000000140BCF089: mov     rax, [rsi+588h]
 * 0000000140BCF090: mov     [rax], rsi
 * 0000000140BCF093: mov     [rax+10h], ecx
 * 0000000140BCF096: mov     rcx, [rsi+0A80h]
 * 0000000140BCF09D: cmp     [rsi+918h], r11d
 * 0000000140BCF0A4: jnz     short loc_140BCF0B4
 * 0000000140BCF0A6: mov     rax, [rsi+588h]
 * 0000000140BCF0AD: xor     rcx, r8
 * 0000000140BCF0B0: mov     [rax+18h], rcx
 * 0000000140BCF0B4: xor     edx, edx
 * 0000000140BCF0B6: mov     r9d, 100h
 * 0000000140BCF0BC: mov     rcx, rsi
 * 0000000140BCF0BF: call    sub_140BDA384
 * 0000000140BCF0C4: add     rbx, 30h ; '0'
 * 0000000140BCF0C8: mov     rcx, [rbx]
 * 0000000140BCF0CB: test    rcx, rcx
 * 0000000140BCF0CE: jnz     loc_140BCEEEB
 * 0000000140BCF0D4: mov     r15, [rsp+9D0h+var_978]
 * 0000000140BCF0D9: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BCF0E0: mov     rax, [rsi+108h]
 * 0000000140BCF0E7: mov     rcx, r15
 * 0000000140BCF0EA: call    KeGuardDispatchICall
 * 0000000140BCF0EF: mov     rax, [rsi+3A8h]
 * 0000000140BCF0F6: mov     rcx, r13
 * 0000000140BCF0F9: call    KeGuardDispatchICall
 * 0000000140BCF0FE: mov     r15d, [rsp+9D0h+var_958]
 * 0000000140BCF103: mov     eax, 8000h
 * 0000000140BCF108: add     [rsi+848h], eax
 * 0000000140BCF10E: mov     rcx, [rsp+9D0h+var_968]
 * 0000000140BCF113: test    rcx, rcx
 * 0000000140BCF116: jz      short loc_140BCF124
 * 0000000140BCF118: mov     rax, [rsi+1F0h]
 * 0000000140BCF11F: call    KeGuardDispatchICall
 * 0000000140BCF124: shl     r15d, 8
 * 0000000140BCF128: add     [rsi+848h], r15d
 * 0000000140BCF12F: jmp     loc_140BC4F9B
 * 0000000140BCF134: mov     ecx, r10d
 * 0000000140BCF137: sub     ecx, 29h ; ')'
 * 0000000140BCF13A: jz      loc_140BCC6C5
 * 0000000140BCF140: sub     ecx, 1
 * 0000000140BCF143: jz      loc_140BCC6C5
 * 0000000140BCF149: sub     ecx, 1
 * 0000000140BCF14C: jz      loc_140BD14C9
 * 0000000140BCF152: sub     ecx, 1
 * 0000000140BCF155: jz      loc_140BD0B26
 * 0000000140BCF15B: sub     ecx, 2
 * 0000000140BCF15E: jz      loc_140BD0A28
 * 0000000140BCF164: sub     ecx, 1
 * 0000000140BCF167: jz      loc_140BD074B
 * 0000000140BCF16D: cmp     ecx, 1
 * 0000000140BCF170: jz      loc_140BD03A3
 * 0000000140BCF176: sub     r10d, 2
 * 0000000140BCF17A: jz      loc_140BCFC59
 * 0000000140BCF180: sub     r10d, 1
 * 0000000140BCF184: jz      loc_140BCF78F
 * 0000000140BCF18A: cmp     r10d, 14h
 * 0000000140BCF18E: jz      loc_140BCF275
 * 0000000140BCF194: cmp     [rsi+918h], r15d
 * 0000000140BCF19B: jnz     loc_140BC4FAF
 * 0000000140BCF1A1: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BCF1AB: add     rax, rsi
 * 0000000140BCF1AE: mov     [rsi+920h], rax
 * 0000000140BCF1B5: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BCF1BF: add     rax, r13
 * 0000000140BCF1C2: mov     [rsi+928h], rax
 * 0000000140BCF1C9: mov     qword ptr [rsi+930h], 101h
 * 0000000140BCF1D4: mov     [rsi+938h], r15
 * 0000000140BCF1DB: mov     [rsi+918h], ebx
 * 0000000140BCF1E1: mov     ecx, [rsi+9D8h]
 * 0000000140BCF1E7: bt      ecx, 1Dh
 * 0000000140BCF1EB: jb      loc_140BC4FAF
 * 0000000140BCF1F1: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCF1FB: jz      loc_140BC4FAF
 * 0000000140BCF201: test    bl, cl
 * 0000000140BCF203: jz      loc_140BC4FAF
 * 0000000140BCF209: mov     ecx, [rsi+0A74h]
 * 0000000140BCF20F: mov     eax, [rsi+804h]
 * 0000000140BCF215: mov     r10, [rsi+838h]
 * 0000000140BCF21C: sub     eax, ecx
 * 0000000140BCF21E: mov     r8, [rsi+0A78h]
 * 0000000140BCF225: lea     rdx, [rcx+rsi]
 * 0000000140BCF229: mov     ecx, eax
 * 0000000140BCF22B: shr     rcx, 3
 * 0000000140BCF22F: lea     r9, [rdx+rcx*8]
 * 0000000140BCF233: jmp     short loc_140BCF256
 * 0000000140BCF235: xor     [rdx], r8
 * 0000000140BCF238: mov     rax, [rdx]
 * 0000000140BCF23B: movzx   ecx, r8b
 * 0000000140BCF23F: xor     rax, r10
 * 0000000140BCF242: and     ecx, 3Fh
 * 0000000140BCF245: ror     r8, cl
 * 0000000140BCF248: add     r8, rax
 * 0000000140BCF24B: xor     r8, 0EFAh
 * 0000000140BCF252: add     rdx, 8
 * 0000000140BCF256: cmp     rdx, r9
 * 0000000140BCF259: jnz     short loc_140BCF235
 * 0000000140BCF25B: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCF263: cmp     r8, [rsi+0A80h]
 * 0000000140BCF26A: jz      loc_140BC4FAF
 * 0000000140BCF270: jmp     loc_140BCBD80
 * 0000000140BCF275: mov     edx, [r13+28h]
 * 0000000140BCF279: lea     rcx, [rbp+8D0h+var_2C0]
 * 0000000140BCF280: mov     rax, [rsi+1B0h]
 * 0000000140BCF287: call    KeGuardDispatchICall
 * 0000000140BCF28C: mov     rax, [rsi+1E0h]
 * 0000000140BCF293: lea     rdx, [rbp+8D0h+var_2B0]
 * 0000000140BCF29A: lea     rcx, [rbp+8D0h+var_2C0]
 * 0000000140BCF2A1: call    KeGuardDispatchICall
 * 0000000140BCF2A6: mov     rax, [rsi+0A58h]
 * 0000000140BCF2AD: test    rax, rax
 * 0000000140BCF2B0: jz      short loc_140BCF2BA
 * 0000000140BCF2B2: mov     ebx, [rax+320h]
 * 0000000140BCF2B8: jmp     short loc_140BCF2CB
 * 0000000140BCF2BA: mov     ecx, 832h
 * 0000000140BCF2BF: rdmsr
 * 0000000140BCF2C1: shl     rdx, 20h
 * 0000000140BCF2C5: or      rax, rdx
 * 0000000140BCF2C8: mov     rbx, rax
 * 0000000140BCF2CB: mov     rax, [rsi+0A58h]
 * 0000000140BCF2D2: test    rax, rax
 * 0000000140BCF2D5: jz      short loc_140BCF2E0
 * 0000000140BCF2D7: mov     r14d, [rax+340h]
 * 0000000140BCF2DE: jmp     short loc_140BCF2F1
 * 0000000140BCF2E0: mov     ecx, 834h
 * 0000000140BCF2E5: rdmsr
 * 0000000140BCF2E7: shl     rdx, 20h
 * 0000000140BCF2EB: or      rax, rdx
 * 0000000140BCF2EE: mov     r14, rax
 * 0000000140BCF2F1: mov     rax, [rsi+1A8h]
 * 0000000140BCF2F8: lea     rcx, [rbp+8D0h+var_2B0]
 * 0000000140BCF2FF: call    KeGuardDispatchICall
 * 0000000140BCF304: mov     ecx, 10h
 * 0000000140BCF309: test    [rsi+89Bh], cl
 * 0000000140BCF30F: jz      loc_140BCF458
 * 0000000140BCF315: cli
 * 0000000140BCF316: mov     rdx, [rsi+900h]
 * 0000000140BCF31D: mov     r8d, 26h ; '&'
 * 0000000140BCF323: mov     ecx, 130h
 * 0000000140BCF328: mov     rax, rdx
 * 0000000140BCF32B: lea     r9d, [r8-25h]
 * 0000000140BCF32F: mov     [rax], r15
 * 0000000140BCF332: add     ecx, 0FFFFFFF8h
 * 0000000140BCF335: add     rax, 8
 * 0000000140BCF339: sub     r8, r9
 * 0000000140BCF33C: jnz     short loc_140BCF32F
 * 0000000140BCF33E: test    ecx, ecx
 * 0000000140BCF340: jz      short loc_140BCF353
 * 0000000140BCF342: mov     r8d, 0FFFFFFFFh
 * 0000000140BCF348: mov     [rax], r15b
 * 0000000140BCF34B: add     rax, r9
 * 0000000140BCF34E: add     ecx, r8d
 * 0000000140BCF351: jnz     short loc_140BCF348
 * 0000000140BCF353: movups  xmm0, xmmword ptr [rsi+868h]
 * 0000000140BCF35A: mov     eax, 12Fh
 * 0000000140BCF35F: movdqu  xmmword ptr [rdx+10h], xmm0
 * 0000000140BCF364: movups  xmm1, xmmword ptr [rsi+878h]
 * 0000000140BCF36B: movdqu  xmmword ptr [rdx+20h], xmm1
 * 0000000140BCF370: movups  xmm0, xmmword ptr [rsi+888h]
 * 0000000140BCF377: movdqu  xmmword ptr [rdx+120h], xmm0
 * 0000000140BCF37F: mov     word ptr [rbp+8D0h+var_770], ax
 * 0000000140BCF386: lea     rax, [rsi+898h]
 * 0000000140BCF38D: mov     [rbp+162h], rdx
 * 0000000140BCF394: mov     rcx, rax
 * 0000000140BCF397: mov     [rdx+10h], ax
 * 0000000140BCF39B: shr     rcx, 10h
 * 0000000140BCF39F: mov     [rbp+8D0h+var_510], rax
 * 0000000140BCF3A6: shr     rax, 20h
 * 0000000140BCF3AA: mov     [rdx+16h], cx
 * 0000000140BCF3AE: mov     [rdx+18h], eax
 * 0000000140BCF3B1: sidt    fword ptr [rbp+8D0h+var_640]
 * 0000000140BCF3B8: lidt    fword ptr [rbp+8D0h+var_770]
 * 0000000140BCF3BF: test    dword ptr [rsi+9DCh], 20000h
 * 0000000140BCF3C9: jnz     short loc_140BCF40D
 * 0000000140BCF3CB: mov     rdx, gs:20h
 * 0000000140BCF3D4: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140BCF3DE: mov     rax, [rsi+4B8h]
 * 0000000140BCF3E5: add     rcx, rsi
 * 0000000140BCF3E8: mov     [rax], rcx
 * 0000000140BCF3EB: mov     rax, [rsi+4C0h]
 * 0000000140BCF3F2: mov     [rax], rdx
 * 0000000140BCF3F5: mov     rax, [rsi+4C8h]
 * 0000000140BCF3FC: mov     [rax], r15
 * 0000000140BCF3FF: mov     rax, [rsi+4D0h]
 * 0000000140BCF406: mov     qword ptr [rax], 115h
 * 0000000140BCF40D: call    KiErrata361Present
 * 0000000140BCF412: test    dword ptr [rsi+9DCh], 20000h
 * 0000000140BCF41C: jnz     short loc_140BCF450
 * 0000000140BCF41E: mov     rax, [rsi+4B8h]
 * 0000000140BCF425: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140BCF42F: mov     [rax], rcx
 * 0000000140BCF432: mov     rax, [rsi+4C0h]
 * 0000000140BCF439: mov     [rax], r15
 * 0000000140BCF43C: mov     rax, [rsi+4C8h]
 * 0000000140BCF443: mov     [rax], r15
 * 0000000140BCF446: mov     rax, [rsi+4D0h]
 * 0000000140BCF44D: mov     [rax], r15
 * 0000000140BCF450: lidt    fword ptr [rbp+8D0h+var_640]
 * 0000000140BCF457: sti
 * 0000000140BCF458: mov     eax, [r13+1Ch]
 * 0000000140BCF45C: mov     r8d, [r13+18h]
 * 0000000140BCF460: and     eax, ebx
 * 0000000140BCF462: cmp     eax, r8d
 * 0000000140BCF465: jnz     short loc_140BCF492
 * 0000000140BCF467: bt      ebx, 10h
 * 0000000140BCF46B: jb      loc_140BCF5E9
 * 0000000140BCF471: movzx   ecx, bl
 * 0000000140BCF474: sub     ecx, 0D1h
 * 0000000140BCF47A: jz      loc_140BCF5E9
 * 0000000140BCF480: sub     ecx, 2Ch ; ','
 * 0000000140BCF483: jz      loc_140BCF5E9
 * 0000000140BCF489: cmp     ecx, 1
 * 0000000140BCF48C: jz      loc_140BCF5E9
 * 0000000140BCF492: mov     edx, [r13+28h]
 * 0000000140BCF496: mov     rax, 32000000000h
 * 0000000140BCF4A0: shl     rdx, 30h
 * 0000000140BCF4A4: or      rdx, r8
 * 0000000140BCF4A7: or      rdx, rax
 * 0000000140BCF4AA: cmp     [rsi+918h], r15d
 * 0000000140BCF4B1: jnz     loc_140BCF5E9
 * 0000000140BCF4B7: mov     rax, [rsi+588h]
 * 0000000140BCF4BE: mov     ecx, ebx
 * 0000000140BCF4C0: xor     rcx, r8
 * 0000000140BCF4C3: mov     [rax+18h], rcx
 * 0000000140BCF4C7: cmp     [rsi+918h], r15d
 * 0000000140BCF4CE: jnz     loc_140BCF5E9
 * 0000000140BCF4D4: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140BCF4DE: mov     r9, 0B3B74BDEE4453415h
 * 0000000140BCF4E8: mov     ebx, 1
 * 0000000140BCF4ED: lea     rax, [rsi+r10]
 * 0000000140BCF4F1: mov     [rsi+920h], rax
 * 0000000140BCF4F8: lea     rax, [r9+r13]
 * 0000000140BCF4FC: mov     [rsi+928h], rax
 * 0000000140BCF503: movsxd  rax, dword ptr [r13+0]
 * 0000000140BCF507: mov     [rsi+930h], rax
 * 0000000140BCF50E: mov     [rsi+938h], rdx
 * 0000000140BCF515: mov     [rsi+918h], ebx
 * 0000000140BCF51B: mov     ecx, [rsi+9D8h]
 * 0000000140BCF521: bt      ecx, 1Dh
 * 0000000140BCF525: jb      loc_140BCF602
 * 0000000140BCF52B: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCF535: jz      loc_140BCF602
 * 0000000140BCF53B: test    bl, cl
 * 0000000140BCF53D: jz      loc_140BCF602
 * 0000000140BCF543: mov     ecx, [rsi+0A74h]
 * 0000000140BCF549: mov     eax, [rsi+804h]
 * 0000000140BCF54F: mov     r10, [rsi+838h]
 * 0000000140BCF556: sub     eax, ecx
 * 0000000140BCF558: mov     r8, [rsi+0A78h]
 * 0000000140BCF55F: lea     rdx, [rcx+rsi]
 * 0000000140BCF563: mov     ecx, eax
 * 0000000140BCF565: shr     rcx, 3
 * 0000000140BCF569: lea     r9, [rdx+rcx*8]
 * 0000000140BCF56D: jmp     short loc_140BCF590
 * 0000000140BCF56F: xor     [rdx], r8
 * 0000000140BCF572: mov     rax, [rdx]
 * 0000000140BCF575: movzx   ecx, r8b
 * 0000000140BCF579: xor     rax, r10
 * 0000000140BCF57C: and     ecx, 3Fh
 * 0000000140BCF57F: ror     r8, cl
 * 0000000140BCF582: add     r8, rax
 * 0000000140BCF585: xor     r8, 0EFAh
 * 0000000140BCF58C: add     rdx, 8
 * 0000000140BCF590: cmp     rdx, r9
 * 0000000140BCF593: jnz     short loc_140BCF56F
 * 0000000140BCF595: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCF59D: cmp     r8, [rsi+0A80h]
 * 0000000140BCF5A4: jz      short loc_140BCF5EE
 * 0000000140BCF5A6: mov     ecx, [rsi+804h]
 * 0000000140BCF5AC: mov     rax, [rsi+588h]
 * 0000000140BCF5B3: mov     [rax], rsi
 * 0000000140BCF5B6: mov     [rax+10h], ecx
 * 0000000140BCF5B9: mov     rcx, [rsi+0A80h]
 * 0000000140BCF5C0: cmp     [rsi+918h], r15d
 * 0000000140BCF5C7: jnz     short loc_140BCF5D7
 * 0000000140BCF5C9: mov     rax, [rsi+588h]
 * 0000000140BCF5D0: xor     rcx, r8
 * 0000000140BCF5D3: mov     [rax+18h], rcx
 * 0000000140BCF5D7: xor     edx, edx
 * 0000000140BCF5D9: mov     r9d, 100h
 * 0000000140BCF5DF: mov     rcx, rsi
 * 0000000140BCF5E2: call    sub_140BDA384
 * 0000000140BCF5E7: jmp     short loc_140BCF5EE
 * 0000000140BCF5E9: mov     ebx, 1
 * 0000000140BCF5EE: mov     r9, 0B3B74BDEE4453415h
 * 0000000140BCF5F8: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140BCF602: mov     eax, [r13+24h]
 * 0000000140BCF606: mov     r8d, [r13+20h]
 * 0000000140BCF60A: and     eax, r14d
 * 0000000140BCF60D: cmp     eax, r8d
 * 0000000140BCF610: jnz     short loc_140BCF63F
 * 0000000140BCF612: bt      r14d, 10h
 * 0000000140BCF617: jb      loc_140BCF77F
 * 0000000140BCF61D: movzx   ecx, r14b
 * 0000000140BCF621: sub     ecx, 0D1h
 * 0000000140BCF627: jz      loc_140BCF77F
 * 0000000140BCF62D: sub     ecx, 2Ch ; ','
 * 0000000140BCF630: jz      loc_140BCF77F
 * 0000000140BCF636: cmp     ecx, 1
 * 0000000140BCF639: jz      loc_140BCF77F
 * 0000000140BCF63F: mov     edx, [r13+28h]
 * 0000000140BCF643: mov     rax, 34000000000h
 * 0000000140BCF64D: shl     rdx, 30h
 * 0000000140BCF651: or      rdx, r8
 * 0000000140BCF654: or      rdx, rax
 * 0000000140BCF657: cmp     [rsi+918h], r15d
 * 0000000140BCF65E: jnz     loc_140BCF77F
 * 0000000140BCF664: mov     eax, r14d
 * 0000000140BCF667: mov     rcx, r8
 * 0000000140BCF66A: xor     rcx, rax
 * 0000000140BCF66D: mov     rax, [rsi+588h]
 * 0000000140BCF674: mov     [rax+18h], rcx
 * 0000000140BCF678: cmp     [rsi+918h], r15d
 * 0000000140BCF67F: jnz     loc_140BCF77F
 * 0000000140BCF685: lea     rax, [rsi+r10]
 * 0000000140BCF689: mov     [rsi+920h], rax
 * 0000000140BCF690: lea     rax, [r9+r13]
 * 0000000140BCF694: mov     [rsi+928h], rax
 * 0000000140BCF69B: movsxd  rax, dword ptr [r13+0]
 * 0000000140BCF69F: mov     [rsi+930h], rax
 * 0000000140BCF6A6: mov     [rsi+938h], rdx
 * 0000000140BCF6AD: mov     [rsi+918h], ebx
 * 0000000140BCF6B3: mov     ecx, [rsi+9D8h]
 * 0000000140BCF6B9: bt      ecx, 1Dh
 * 0000000140BCF6BD: jb      loc_140BCF77F
 * 0000000140BCF6C3: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCF6CD: jz      loc_140BCF77F
 * 0000000140BCF6D3: test    bl, cl
 * 0000000140BCF6D5: jz      loc_140BCF77F
 * 0000000140BCF6DB: mov     ecx, [rsi+0A74h]
 * 0000000140BCF6E1: mov     eax, [rsi+804h]
 * 0000000140BCF6E7: mov     r10, [rsi+838h]
 * 0000000140BCF6EE: sub     eax, ecx
 * 0000000140BCF6F0: mov     r8, [rsi+0A78h]
 * 0000000140BCF6F7: lea     rdx, [rcx+rsi]
 * 0000000140BCF6FB: mov     ecx, eax
 * 0000000140BCF6FD: shr     rcx, 3
 * 0000000140BCF701: lea     r9, [rdx+rcx*8]
 * 0000000140BCF705: jmp     short loc_140BCF728
 * 0000000140BCF707: xor     [rdx], r8
 * 0000000140BCF70A: mov     rax, [rdx]
 * 0000000140BCF70D: movzx   ecx, r8b
 * 0000000140BCF711: xor     rax, r10
 * 0000000140BCF714: and     ecx, 3Fh
 * 0000000140BCF717: ror     r8, cl
 * 0000000140BCF71A: add     r8, rax
 * 0000000140BCF71D: xor     r8, 0EFAh
 * 0000000140BCF724: add     rdx, 8
 * 0000000140BCF728: cmp     rdx, r9
 * 0000000140BCF72B: jnz     short loc_140BCF707
 * 0000000140BCF72D: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCF735: cmp     r8, [rsi+0A80h]
 * 0000000140BCF73C: jz      short loc_140BCF77F
 * 0000000140BCF73E: mov     ecx, [rsi+804h]
 * 0000000140BCF744: mov     rax, [rsi+588h]
 * 0000000140BCF74B: mov     [rax], rsi
 * 0000000140BCF74E: mov     [rax+10h], ecx
 * 0000000140BCF751: mov     rcx, [rsi+0A80h]
 * 0000000140BCF758: cmp     [rsi+918h], r15d
 * 0000000140BCF75F: jnz     short loc_140BCF76F
 * 0000000140BCF761: mov     rax, [rsi+588h]
 * 0000000140BCF768: xor     rcx, r8
 * 0000000140BCF76B: mov     [rax+18h], rcx
 * 0000000140BCF76F: xor     edx, edx
 * 0000000140BCF771: mov     r9d, 100h
 * 0000000140BCF777: mov     rcx, rsi
 * 0000000140BCF77A: call    sub_140BDA384
 * 0000000140BCF77F: mov     eax, 8000h
 * 0000000140BCF784: add     [rsi+848h], eax
 * 0000000140BCF78A: jmp     loc_140BD0398
 * 0000000140BCF78F: mov     edx, [r13+28h]
 * 0000000140BCF793: lea     rcx, [rbp+8D0h+var_2A0]
 * 0000000140BCF79A: mov     rax, [rsi+1B0h]
 * 0000000140BCF7A1: call    KeGuardDispatchICall
 * 0000000140BCF7A6: mov     rax, [rsi+1E0h]
 * 0000000140BCF7AD: lea     rdx, [rbp+8D0h+var_290]
 * 0000000140BCF7B4: lea     rcx, [rbp+8D0h+var_2A0]
 * 0000000140BCF7BB: call    KeGuardDispatchICall
 * 0000000140BCF7C0: lea     rdx, [rbp+8D0h+var_1F0]
 * 0000000140BCF7C7: lea     rcx, [rbp+8D0h+var_7C8]
 * 0000000140BCF7CE: call    KiGetGdtIdt
 * 0000000140BCF7D3: mov     r15, [rbp+8D0h+var_7C6]
 * 0000000140BCF7DA: mov     ecx, 2
 * 0000000140BCF7DF: mov     r14d, [r13+10h]
 * 0000000140BCF7E3: test    [rsi+89Bh], cl
 * 0000000140BCF7E9: jz      loc_140BCF917
 * 0000000140BCF7EF: mov     rdx, [rsi+900h]
 * 0000000140BCF7F6: mov     ecx, 130h
 * 0000000140BCF7FB: mov     rax, rdx
 * 0000000140BCF7FE: mov     r8d, 26h ; '&'
 * 0000000140BCF804: xor     r12d, r12d
 * 0000000140BCF807: mov     [rax], r12
 * 0000000140BCF80A: add     ecx, 0FFFFFFF8h
 * 0000000140BCF80D: add     rax, 8
 * 0000000140BCF811: sub     r8, rbx
 * 0000000140BCF814: jnz     short loc_140BCF807
 * 0000000140BCF816: test    ecx, ecx
 * 0000000140BCF818: jz      short loc_140BCF82B
 * 0000000140BCF81A: mov     r8d, 0FFFFFFFFh
 * 0000000140BCF820: mov     [rax], r12b
 * 0000000140BCF823: add     rax, rbx
 * 0000000140BCF826: add     ecx, r8d
 * 0000000140BCF829: jnz     short loc_140BCF820
 * 0000000140BCF82B: movups  xmm0, xmmword ptr [rsi+868h]
 * 0000000140BCF832: mov     eax, 12Fh
 * 0000000140BCF837: movdqu  xmmword ptr [rdx+10h], xmm0
 * 0000000140BCF83C: movups  xmm1, xmmword ptr [rsi+878h]
 * 0000000140BCF843: movdqu  xmmword ptr [rdx+20h], xmm1
 * 0000000140BCF848: movups  xmm0, xmmword ptr [rsi+888h]
 * 0000000140BCF84F: movdqu  xmmword ptr [rdx+120h], xmm0
 * 0000000140BCF857: mov     word ptr [rbp+8D0h+var_760], ax
 * 0000000140BCF85E: lea     rax, [rsi+898h]
 * 0000000140BCF865: mov     [rbp+172h], rdx
 * 0000000140BCF86C: mov     rcx, rax
 * 0000000140BCF86F: mov     [rdx+10h], ax
 * 0000000140BCF873: shr     rcx, 10h
 * 0000000140BCF877: mov     [rbp+8D0h+var_508], rax
 * 0000000140BCF87E: shr     rax, 20h
 * 0000000140BCF882: mov     [rdx+16h], cx
 * 0000000140BCF886: mov     [rdx+18h], eax
 * 0000000140BCF889: cli
 * 0000000140BCF88A: sidt    fword ptr [rbp+8D0h+var_678]
 * 0000000140BCF891: lidt    fword ptr [rbp+8D0h+var_760]
 * 0000000140BCF898: mov     dr7, r12
 * 0000000140BCF89C: lea     rax, [rsi+89Eh]
 * 0000000140BCF8A3: mov     [rdx+10h], ax
 * 0000000140BCF8A7: mov     rcx, rax
 * 0000000140BCF8AA: shr     rcx, 10h
 * 0000000140BCF8AE: shr     rax, 20h
 * 0000000140BCF8B2: mov     [rdx+16h], cx
 * 0000000140BCF8B6: mov     [rdx+18h], eax
 * 0000000140BCF8B9: test    byte ptr [rsi+89Bh], 20h
 * 0000000140BCF8C0: jnz     short loc_140BCF8D0
 * 0000000140BCF8C2: call    KiErrata704Present
 * 0000000140BCF8C7: mov     [rsi+908h], rax
 * 0000000140BCF8CE: jmp     short loc_140BCF901
 * 0000000140BCF8D0: lea     rbx, [rsi+8CAh]
 * 0000000140BCF8D7: call    KiGetSs
 * 0000000140BCF8DC: mov     [rbx], ax
 * 0000000140BCF8DF: mov     dr0, rbx
 * 0000000140BCF8E2: mov     eax, 70001h
 * 0000000140BCF8E7: mov     dr7, rax
 * 0000000140BCF8EA: mov     rcx, rbx
 * 0000000140BCF8ED: call    KiErrataSkx55Present
 * 0000000140BCF8F2: mov     [rsi+908h], rax
 * 0000000140BCF8F9: mov     dr7, r12
 * 0000000140BCF8FD: mov     dr0, r12
 * 0000000140BCF901: mov     eax, gs:1A4h
 * 0000000140BCF909: mov     [rsi+910h], eax
 * 0000000140BCF90F: lidt    fword ptr [rbp+8D0h+var_678]
 * 0000000140BCF916: sti
 * 0000000140BCF917: call    KiGetLdtr
 * 0000000140BCF91C: movzx   r12d, ax
 * 0000000140BCF920: call    KiGetTr
 * 0000000140BCF925: add     [rsi+848h], r14d
 * 0000000140BCF92C: lea     rcx, [r15+r14]
 * 0000000140BCF930: mov     r10d, [rsi+834h]
 * 0000000140BCF937: mov     r8, r15
 * 0000000140BCF93A: mov     r11, [rsi+838h]
 * 0000000140BCF941: movzx   r13d, ax
 * 0000000140BCF945: mov     rax, r15
 * 0000000140BCF948: cmp     r15, rcx
 * 0000000140BCF94B: jnb     short loc_140BCF95D
 * 0000000140BCF94D: mov     edx, 40h ; '@'
 * 0000000140BCF952: prefetchnta byte ptr [rax]
 * 0000000140BCF955: add     rax, rdx
 * 0000000140BCF958: cmp     rax, rcx
 * 0000000140BCF95B: jb      short loc_140BCF952
 * 0000000140BCF95D: mov     r9d, r14d
 * 0000000140BCF960: mov     rbx, r11
 * 0000000140BCF963: shr     r9d, 7
 * 0000000140BCF967: mov     edx, 1
 * 0000000140BCF96C: test    r9d, r9d
 * 0000000140BCF96F: jz      short loc_140BCF9E1
 * 0000000140BCF971: mov     esi, 0FFFFFFFFh
 * 0000000140BCF976: mov     rdi, 7010008004002001h
 * 0000000140BCF980: mov     eax, 8
 * 0000000140BCF985: xor     rbx, [r8]
 * 0000000140BCF988: mov     ecx, r10d
 * 0000000140BCF98B: rol     rbx, cl
 * 0000000140BCF98E: xor     rbx, [r8+8]
 * 0000000140BCF992: add     r8, 10h
 * 0000000140BCF996: rol     rbx, cl
 * 0000000140BCF999: sub     rax, rdx
 * 0000000140BCF99C: jnz     short loc_140BCF985
 * 0000000140BCF99E: mov     rcx, r8
 * 0000000140BCF9A1: sub     rcx, r15
 * 0000000140BCF9A4: xor     rcx, r11
 * 0000000140BCF9A7: mov     rax, rcx
 * 0000000140BCF9AA: rol     rax, 11h
 * 0000000140BCF9AE: xor     rcx, rax
 * 0000000140BCF9B1: mov     rax, rdi
 * 0000000140BCF9B4: mul     rcx
 * 0000000140BCF9B7: xor     eax, edx
 * 0000000140BCF9B9: mov     [rbp+8D0h+var_500], rdx
 * 0000000140BCF9C0: xor     r10d, eax
 * 0000000140BCF9C3: mov     edx, 1
 * 0000000140BCF9C8: and     r10d, 3Fh
 * 0000000140BCF9CC: cmovz   r10d, edx
 * 0000000140BCF9D0: add     r9d, esi
 * 0000000140BCF9D3: jnz     short loc_140BCF980
 * 0000000140BCF9D5: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BCF9DA: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BCF9E1: and     r14d, 7Fh
 * 0000000140BCF9E5: cmp     r14d, 8
 * 0000000140BCF9E9: jb      short loc_140BCFA08
 * 0000000140BCF9EB: mov     eax, r14d
 * 0000000140BCF9EE: shr     rax, 3
 * 0000000140BCF9F2: xor     rbx, [r8]
 * 0000000140BCF9F5: mov     ecx, r10d
 * 0000000140BCF9F8: rol     rbx, cl
 * 0000000140BCF9FB: add     r8, 8
 * 0000000140BCF9FF: add     r14d, 0FFFFFFF8h
 * 0000000140BCFA03: sub     rax, rdx
 * 0000000140BCFA06: jnz     short loc_140BCF9F2
 * 0000000140BCFA08: xor     r15d, r15d
 * 0000000140BCFA0B: test    r14d, r14d
 * 0000000140BCFA0E: jz      short loc_140BCFA2F
 * 0000000140BCFA10: mov     esi, 0FFFFFFFFh
 * 0000000140BCFA15: movzx   eax, byte ptr [r8]
 * 0000000140BCFA19: mov     ecx, r10d
 * 0000000140BCFA1C: xor     rbx, rax
 * 0000000140BCFA1F: add     r8, rdx
 * 0000000140BCFA22: rol     rbx, cl
 * 0000000140BCFA25: add     r14d, esi
 * 0000000140BCFA28: jnz     short loc_140BCFA15
 * 0000000140BCFA2A: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BCFA2F: mov     rax, rbx
 * 0000000140BCFA32: jmp     short loc_140BCFA36
 * 0000000140BCFA34: xor     ebx, eax
 * 0000000140BCFA36: shr     rax, 1Fh
 * 0000000140BCFA3A: test    rax, rax
 * 0000000140BCFA3D: jnz     short loc_140BCFA34
 * 0000000140BCFA3F: mov     rax, [rsi+1A8h]
 * 0000000140BCFA46: lea     rcx, [rbp+8D0h+var_290]
 * 0000000140BCFA4D: btr     ebx, 1Fh
 * 0000000140BCFA51: call    KeGuardDispatchICall
 * 0000000140BCFA56: mov     r9, [rsp+9D0h+var_980]
 * 0000000140BCFA5B: mov     r11d, 40h ; '@'
 * 0000000140BCFA61: cmp     ebx, [r9+14h]
 * 0000000140BCFA65: jnz     short loc_140BCFA85
 * 0000000140BCFA67: movzx   eax, word ptr [r9+2Ch]
 * 0000000140BCFA6C: cmp     [rbp+8D0h+var_7C8], ax
 * 0000000140BCFA73: jnz     short loc_140BCFA85
 * 0000000140BCFA75: test    r12w, r12w
 * 0000000140BCFA79: jnz     short loc_140BCFA85
 * 0000000140BCFA7B: cmp     r13w, r11w
 * 0000000140BCFA7F: jz      loc_140BCFC44
 * 0000000140BCFA85: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BCFA8F: jz      short loc_140BCFADF
 * 0000000140BCFA91: mov     rcx, [rsi+0AC8h]
 * 0000000140BCFA98: mov     edx, 30h ; '0'
 * 0000000140BCFA9D: lea     r8d, [rdx-2Ah]
 * 0000000140BCFAA1: lea     r10d, [rdx-2Fh]
 * 0000000140BCFAA5: mov     rax, [r9]
 * 0000000140BCFAA8: add     edx, 0FFFFFFF8h
 * 0000000140BCFAAB: mov     [rcx], rax
 * 0000000140BCFAAE: add     r9, 8
 * 0000000140BCFAB2: add     rcx, 8
 * 0000000140BCFAB6: sub     r8, r10
 * 0000000140BCFAB9: jnz     short loc_140BCFAA5
 * 0000000140BCFABB: test    edx, edx
 * 0000000140BCFABD: jz      short loc_140BCFAD8
 * 0000000140BCFABF: mov     esi, 0FFFFFFFFh
 * 0000000140BCFAC4: mov     al, [r9]
 * 0000000140BCFAC7: add     r9, r10
 * 0000000140BCFACA: mov     [rcx], al
 * 0000000140BCFACC: add     rcx, r10
 * 0000000140BCFACF: add     edx, esi
 * 0000000140BCFAD1: jnz     short loc_140BCFAC4
 * 0000000140BCFAD3: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BCFAD8: mov     r9, [rsi+0AC8h]
 * 0000000140BCFADF: mov     rax, [rbp+8D0h+var_7C6]
 * 0000000140BCFAE6: mov     edx, ebx
 * 0000000140BCFAE8: mov     [r9+18h], rax
 * 0000000140BCFAEC: mov     [r9+20h], rdx
 * 0000000140BCFAF0: test    r12w, r12w
 * 0000000140BCFAF4: jz      short loc_140BCFAFC
 * 0000000140BCFAF6: mov     [r9+18h], r12
 * 0000000140BCFAFA: jmp     short loc_140BCFB06
 * 0000000140BCFAFC: cmp     r13w, r11w
 * 0000000140BCFB00: jz      short loc_140BCFB06
 * 0000000140BCFB02: mov     [r9+18h], r13
 * 0000000140BCFB06: mov     ecx, [r9+14h]
 * 0000000140BCFB0A: cmp     [rsi+918h], r15d
 * 0000000140BCFB11: jnz     short loc_140BCFB21
 * 0000000140BCFB13: mov     rax, [rsi+588h]
 * 0000000140BCFB1A: xor     rcx, rdx
 * 0000000140BCFB1D: mov     [rax+18h], rcx
 * 0000000140BCFB21: mov     ebx, 1
 * 0000000140BCFB26: mov     rcx, [r9+8]
 * 0000000140BCFB2A: cmp     [rsi+918h], r15d
 * 0000000140BCFB31: jnz     loc_140BCFC49
 * 0000000140BCFB37: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BCFB41: add     rax, rsi
 * 0000000140BCFB44: mov     [rsi+920h], rax
 * 0000000140BCFB4B: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BCFB55: add     rax, r9
 * 0000000140BCFB58: mov     [rsi+928h], rax
 * 0000000140BCFB5F: movsxd  rax, dword ptr [r9]
 * 0000000140BCFB62: mov     [rsi+930h], rax
 * 0000000140BCFB69: mov     [rsi+938h], rcx
 * 0000000140BCFB70: mov     [rsi+918h], ebx
 * 0000000140BCFB76: mov     ecx, [rsi+9D8h]
 * 0000000140BCFB7C: bt      ecx, 1Dh
 * 0000000140BCFB80: jb      loc_140BCFC49
 * 0000000140BCFB86: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BCFB90: jz      loc_140BCFC49
 * 0000000140BCFB96: test    bl, cl
 * 0000000140BCFB98: jz      loc_140BCFC49
 * 0000000140BCFB9E: mov     ecx, [rsi+0A74h]
 * 0000000140BCFBA4: mov     eax, [rsi+804h]
 * 0000000140BCFBAA: mov     r10, [rsi+838h]
 * 0000000140BCFBB1: sub     eax, ecx
 * 0000000140BCFBB3: mov     r8, [rsi+0A78h]
 * 0000000140BCFBBA: lea     rdx, [rcx+rsi]
 * 0000000140BCFBBE: mov     ecx, eax
 * 0000000140BCFBC0: shr     rcx, 3
 * 0000000140BCFBC4: lea     r9, [rdx+rcx*8]
 * 0000000140BCFBC8: jmp     short loc_140BCFBEB
 * 0000000140BCFBCA: xor     [rdx], r8
 * 0000000140BCFBCD: mov     rax, [rdx]
 * 0000000140BCFBD0: movzx   ecx, r8b
 * 0000000140BCFBD4: xor     rax, r10
 * 0000000140BCFBD7: and     ecx, 3Fh
 * 0000000140BCFBDA: ror     r8, cl
 * 0000000140BCFBDD: add     r8, rax
 * 0000000140BCFBE0: xor     r8, 0EFAh
 * 0000000140BCFBE7: add     rdx, 8
 * 0000000140BCFBEB: cmp     rdx, r9
 * 0000000140BCFBEE: jnz     short loc_140BCFBCA
 * 0000000140BCFBF0: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BCFBF8: cmp     r8, [rsi+0A80h]
 * 0000000140BCFBFF: jz      short loc_140BCFC49
 * 0000000140BCFC01: mov     ecx, [rsi+804h]
 * 0000000140BCFC07: mov     rax, [rsi+588h]
 * 0000000140BCFC0E: mov     [rax], rsi
 * 0000000140BCFC11: mov     [rax+10h], ecx
 * 0000000140BCFC14: mov     rcx, [rsi+0A80h]
 * 0000000140BCFC1B: cmp     [rsi+918h], r15d
 * 0000000140BCFC22: jnz     short loc_140BCFC32
 * 0000000140BCFC24: mov     rax, [rsi+588h]
 * 0000000140BCFC2B: xor     rcx, r8
 * 0000000140BCFC2E: mov     [rax+18h], rcx
 * 0000000140BCFC32: xor     edx, edx
 * 0000000140BCFC34: mov     r9d, 100h
 * 0000000140BCFC3A: mov     rcx, rsi
 * 0000000140BCFC3D: call    sub_140BDA384
 * 0000000140BCFC42: jmp     short loc_140BCFC49
 * 0000000140BCFC44: mov     ebx, 1
 * 0000000140BCFC49: mov     ecx, 8000h
 * 0000000140BCFC4E: add     [rsi+848h], ecx
 * 0000000140BCFC54: jmp     loc_140BC5B5D
 * 0000000140BCFC59: mov     edx, [r13+28h]
 * 0000000140BCFC5D: lea     rcx, [rbp+8D0h+var_280]
 * 0000000140BCFC64: mov     rax, [rsi+1B0h]
 * 0000000140BCFC6B: mov     [rbp+8D0h+var_928], r15d
 * 0000000140BCFC6F: call    KeGuardDispatchICall
 * 0000000140BCFC74: mov     rax, [rsi+1E0h]
 * 0000000140BCFC7B: lea     rdx, [rbp+8D0h+var_270]
 * 0000000140BCFC82: lea     rcx, [rbp+8D0h+var_280]
 * 0000000140BCFC89: call    KeGuardDispatchICall
 * 0000000140BCFC8E: lea     rdx, [rbp+8D0h+var_750]
 * 0000000140BCFC95: lea     rcx, [rbp+8D0h+var_1E0]
 * 0000000140BCFC9C: call    KiGetGdtIdt
 * 0000000140BCFCA1: mov     rcx, [rbp+8D0h+var_74E]
 * 0000000140BCFCA8: mov     edi, r15d
 * 0000000140BCFCAB: mov     [rbp+8D0h+var_950], rcx
 * 0000000140BCFCAF: add     rcx, 4
 * 0000000140BCFCB3: mov     [rsp+9D0h+var_978], rcx
 * 0000000140BCFCB8: jmp     short loc_140BCFCBD
 * 0000000140BCFCBA: xor     r15d, r15d
 * 0000000140BCFCBD: mov     rax, [rsi+8E8h]
 * 0000000140BCFCC4: mov     r9, r15
 * 0000000140BCFCC7: mov     [rbp+8D0h+var_878], rax
 * 0000000140BCFCCB: mov     r14, r15
 * 0000000140BCFCCE: mov     r8, [rsi+8F0h]
 * 0000000140BCFCD5: mov     r12d, [rsi+8CCh]
 * 0000000140BCFCDC: mov     r13d, [rsi+8D0h]
 * 0000000140BCFCE3: mov     [rsp+9D0h+var_968], r8
 * 0000000140BCFCE8: mov     [rsp+9D0h+var_960], r15
 * 0000000140BCFCED: mov     [rbp+8D0h+var_940], r15
 * 0000000140BCFCF1: mov     r15, cr8
 * 0000000140BCFCF5: mov     eax, 0Fh
 * 0000000140BCFCFA: mov     cr8, rax
 * 0000000140BCFCFE: movzx   eax, word ptr [rcx-4]
 * 0000000140BCFD02: movzx   r10d, word ptr [rcx]
 * 0000000140BCFD06: mov     word ptr [rbp+8D0h+var_8A8], ax
 * 0000000140BCFD0A: movzx   eax, word ptr [rcx+2]
 * 0000000140BCFD0E: mov     word ptr [rbp+8D0h+var_8A8+2], ax
 * 0000000140BCFD12: mov     eax, [rcx+4]
 * 0000000140BCFD15: mov     rcx, [rsi+628h]
 * 0000000140BCFD1C: mov     dword ptr [rbp+8D0h+var_8A8+4], eax
 * 0000000140BCFD1F: mov     rbx, [rbp+8D0h+var_8A8]
 * 0000000140BCFD23: mov     eax, edi
 * 0000000140BCFD25: mov     word ptr [rbp+8D0h+arg_8], r10w
 * 0000000140BCFD2D: lea     rdx, [rcx+rax*8]
 * 0000000140BCFD31: cmp     rbx, rdx
 * 0000000140BCFD34: jnz     short loc_140BCFD9A
 * 0000000140BCFD36: mov     eax, 6000h
 * 0000000140BCFD3B: test    ax, r10w
 * 0000000140BCFD3F: jz      short loc_140BCFD4E
 * 0000000140BCFD41: movzx   eax, r15b
 * 0000000140BCFD45: mov     cr8, rax
 * 0000000140BCFD49: jmp     loc_140BD010F
 * 0000000140BCFD4E: mov     rax, [rsi+470h]
 * 0000000140BCFD55: mov     ecx, edi
 * 0000000140BCFD57: call    KeGuardDispatchICall
 * 0000000140BCFD5C: mov     r14, [rax]
 * 0000000140BCFD5F: test    r14, r14
 * 0000000140BCFD62: jz      short loc_140BCFD8B
 * 0000000140BCFD64: mov     r12, [r12+r14]
 * 0000000140BCFD68: mov     [rsp+9D0h+var_960], r12
 * 0000000140BCFD6D: cmp     edi, 30h ; '0'
 * 0000000140BCFD70: jnb     short loc_140BCFD7F
 * 0000000140BCFD72: movzx   eax, r15b
 * 0000000140BCFD76: mov     cr8, rax
 * 0000000140BCFD7A: jmp     loc_140BD010A
 * 0000000140BCFD7F: mov     r13, [r13+r14+0]
 * 0000000140BCFD84: mov     r8, [rsp+9D0h+var_968]
 * 0000000140BCFD89: jmp     short loc_140BCFDA2
 * 0000000140BCFD8B: mov     r8, [rsp+9D0h+var_968]
 * 0000000140BCFD90: or      r14, 0FFFFFFFFFFFFFFFFh
 * 0000000140BCFD94: mov     r13, [rbp+8D0h+var_940]
 * 0000000140BCFD98: jmp     short loc_140BCFD9D
 * 0000000140BCFD9A: mov     r13, r9
 * 0000000140BCFD9D: mov     r12, [rsp+9D0h+var_960]
 * 0000000140BCFDA2: movzx   eax, r15b
 * 0000000140BCFDA6: mov     cr8, rax
 * 0000000140BCFDAA: test    r14, r14
 * 0000000140BCFDAD: jnz     short loc_140BCFDF5
 * 0000000140BCFDAF: mov     rdx, [rbp+8D0h+var_878]
 * 0000000140BCFDB3: cmp     rbx, rdx
 * 0000000140BCFDB6: jb      loc_140BD010A
 * 0000000140BCFDBC: cmp     rbx, r8
 * 0000000140BCFDBF: ja      loc_140BD010A
 * 0000000140BCFDC5: mov     r8d, dword ptr [rbp+8D0h+var_8A8]
 * 0000000140BCFDC9: mov     rcx, [rsi+8F8h]
 * 0000000140BCFDD0: sub     r8d, edx
 * 0000000140BCFDD3: mov     rax, [rsi+220h]
 * 0000000140BCFDDA: call    KeGuardDispatchICall
 * 0000000140BCFDDF: test    rax, rax
 * 0000000140BCFDE2: jz      loc_140BD010A
 * 0000000140BCFDE8: test    dword ptr [rax+24h], 2000000h
 * 0000000140BCFDEF: jnz     loc_140BD010A
 * 0000000140BCFDF5: mov     rcx, [rsp+9D0h+var_978]
 * 0000000140BCFDFA: mov     eax, 10h
 * 0000000140BCFDFF: cmp     [rcx-2], ax
 * 0000000140BCFE03: jnz     loc_140BD010A
 * 0000000140BCFE09: movzx   ecx, word ptr [rcx]
 * 0000000140BCFE0C: mov     edx, 1F00h
 * 0000000140BCFE11: movzx   eax, cx
 * 0000000140BCFE14: and     ax, dx
 * 0000000140BCFE17: mov     edx, 0E00h
 * 0000000140BCFE1C: cmp     ax, dx
 * 0000000140BCFE1F: jnz     loc_140BD010A
 * 0000000140BCFE25: bt      cx, 0Fh
 * 0000000140BCFE2A: jnb     loc_140BD010A
 * 0000000140BCFE30: mov     rax, [rsi+270h]
 * 0000000140BCFE37: lea     rdx, [rbp+8D0h+var_878]
 * 0000000140BCFE3B: xor     r8d, r8d
 * 0000000140BCFE3E: mov     rcx, rbx
 * 0000000140BCFE41: call    KeGuardDispatchICall
 * 0000000140BCFE46: test    rax, rax
 * 0000000140BCFE49: jz      loc_140BD0077
 * 0000000140BCFE4F: mov     eax, [rax]
 * 0000000140BCFE51: mov     rcx, [rbp+8D0h+var_878]
 * 0000000140BCFE55: add     rax, rcx
 * 0000000140BCFE58: cmp     rax, rbx
 * 0000000140BCFE5B: jnz     loc_140BD0077
 * 0000000140BCFE61: cmp     rcx, [rsi+8E8h]
 * 0000000140BCFE68: jnz     loc_140BD0077
 * 0000000140BCFE6E: test    r14, r14
 * 0000000140BCFE71: jnz     loc_140BD0080
 * 0000000140BCFE77: xor     r13d, r13d
 * 0000000140BCFE7A: mov     rcx, [rsp+9D0h+var_978]
 * 0000000140BCFE7F: inc     edi
 * 0000000140BCFE81: add     rcx, 10h
 * 0000000140BCFE85: mov     [rsp+9D0h+var_978], rcx
 * 0000000140BCFE8A: cmp     edi, 0FFh
 * 0000000140BCFE90: jbe     loc_140BCFCBA
 * 0000000140BCFE96: mov     ecx, 1
 * 0000000140BCFE9B: test    [rsi+89Bh], cl
 * 0000000140BCFEA1: jz      loc_140BCFF71
 * 0000000140BCFEA7: cli
 * 0000000140BCFEA8: mov     r14d, 0C0000082h
 * 0000000140BCFEAE: mov     ecx, r14d
 * 0000000140BCFEB1: rdmsr
 * 0000000140BCFEB3: shl     rdx, 20h
 * 0000000140BCFEB7: or      rax, rdx
 * 0000000140BCFEBA: lea     rdx, [rsi+89Ah]
 * 0000000140BCFEC1: mov     rbx, rax
 * 0000000140BCFEC4: mov     rax, rdx
 * 0000000140BCFEC7: shr     rdx, 20h
 * 0000000140BCFECB: wrmsr
 * 0000000140BCFECD: bt      dword ptr [rsi+9DCh], 11h
 * 0000000140BCFED5: jb      short loc_140BCFF19
 * 0000000140BCFED7: mov     rdx, gs:20h
 * 0000000140BCFEE0: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140BCFEEA: mov     rax, [rsi+4B8h]
 * 0000000140BCFEF1: add     rcx, rsi
 * 0000000140BCFEF4: mov     [rax], rcx
 * 0000000140BCFEF7: mov     rax, [rsi+4C0h]
 * 0000000140BCFEFE: mov     [rax], rdx
 * 0000000140BCFF01: mov     rax, [rsi+4C8h]
 * 0000000140BCFF08: mov     [rax], r14
 * 0000000140BCFF0B: mov     rax, [rsi+4D0h]
 * 0000000140BCFF12: mov     qword ptr [rax], 112h
 * 0000000140BCFF19: lea     rax, [rsi+89Ch]
 * 0000000140BCFF20: call    KeGuardDispatchICall
 * 0000000140BCFF25: bt      dword ptr [rsi+9DCh], 11h
 * 0000000140BCFF2D: jb      short loc_140BCFF61
 * 0000000140BCFF2F: mov     rax, [rsi+4B8h]
 * 0000000140BCFF36: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140BCFF40: mov     [rax], rcx
 * 0000000140BCFF43: mov     rax, [rsi+4C0h]
 * 0000000140BCFF4A: mov     [rax], r13
 * 0000000140BCFF4D: mov     rax, [rsi+4C8h]
 * 0000000140BCFF54: mov     [rax], r13
 * 0000000140BCFF57: mov     rax, [rsi+4D0h]
 * 0000000140BCFF5E: mov     [rax], r13
 * 0000000140BCFF61: mov     rdx, rbx
 * 0000000140BCFF64: mov     rax, rbx
 * 0000000140BCFF67: shr     rdx, 20h
 * 0000000140BCFF6B: mov     ecx, r14d
 * 0000000140BCFF6E: wrmsr
 * 0000000140BCFF70: sti
 * 0000000140BCFF71: mov     r14, [rbp+8D0h+var_950]
 * 0000000140BCFF75: add     dword ptr [rsi+848h], 350h
 * 0000000140BCFF7F: mov     r8, r14
 * 0000000140BCFF82: mov     r9d, [rsi+834h]
 * 0000000140BCFF89: mov     rax, r14
 * 0000000140BCFF8C: mov     r11, [rsi+838h]
 * 0000000140BCFF93: lea     rcx, [r14+350h]
 * 0000000140BCFF9A: cmp     r14, rcx
 * 0000000140BCFF9D: jnb     short loc_140BCFFAF
 * 0000000140BCFF9F: mov     edx, 40h ; '@'
 * 0000000140BCFFA4: prefetchnta byte ptr [rax]
 * 0000000140BCFFA7: add     rax, rdx
 * 0000000140BCFFAA: cmp     rax, rcx
 * 0000000140BCFFAD: jb      short loc_140BCFFA4
 * 0000000140BCFFAF: mov     r12d, 6
 * 0000000140BCFFB5: mov     rbx, r11
 * 0000000140BCFFB8: mov     r10d, r12d
 * 0000000140BCFFBB: mov     esi, 0FFFFFFFFh
 * 0000000140BCFFC0: mov     rdi, 7010008004002001h
 * 0000000140BCFFCA: lea     r15d, [r12-5]
 * 0000000140BCFFCF: mov     eax, 8
 * 0000000140BCFFD4: xor     rbx, [r8]
 * 0000000140BCFFD7: mov     ecx, r9d
 * 0000000140BCFFDA: rol     rbx, cl
 * 0000000140BCFFDD: xor     rbx, [r8+8]
 * 0000000140BCFFE1: add     r8, 10h
 * 0000000140BCFFE5: rol     rbx, cl
 * 0000000140BCFFE8: sub     rax, r15
 * 0000000140BCFFEB: jnz     short loc_140BCFFD4
 * 0000000140BCFFED: mov     rcx, r8
 * 0000000140BCFFF0: sub     rcx, r14
 * 0000000140BCFFF3: xor     rcx, r11
 * 0000000140BCFFF6: mov     rax, rcx
 * 0000000140BCFFF9: rol     rax, 11h
 * 0000000140BCFFFD: xor     rcx, rax
 * 0000000140BD0000: mov     rax, rdi
 * 0000000140BD0003: mul     rcx
 * 0000000140BD0006: xor     r9d, edx
 * 0000000140BD0009: mov     [rbp+8D0h+var_4F8], rdx
 * 0000000140BD0010: xor     r9d, eax
 * 0000000140BD0013: and     r9d, 3Fh
 * 0000000140BD0017: cmovz   r9d, r15d
 * 0000000140BD001B: add     r10d, esi
 * 0000000140BD001E: jnz     short loc_140BCFFCF
 * 0000000140BD0020: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BD0025: lea     edx, [r10+50h]
 * 0000000140BD0029: mov     r15d, [rbp+8D0h+var_928]
 * 0000000140BD002D: lea     eax, [rdx-46h]
 * 0000000140BD0030: lea     r10d, [rdx-4Fh]
 * 0000000140BD0034: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BD003B: xor     rbx, [r8]
 * 0000000140BD003E: mov     ecx, r9d
 * 0000000140BD0041: rol     rbx, cl
 * 0000000140BD0044: add     r8, 8
 * 0000000140BD0048: add     edx, 0FFFFFFF8h
 * 0000000140BD004B: sub     rax, r10
 * 0000000140BD004E: jnz     short loc_140BD003B
 * 0000000140BD0050: mov     r11d, 0FFFFFFFFh
 * 0000000140BD0056: test    edx, edx
 * 0000000140BD0058: jz      short loc_140BD006F
 * 0000000140BD005A: movzx   eax, byte ptr [r8]
 * 0000000140BD005E: mov     ecx, r9d
 * 0000000140BD0061: xor     rbx, rax
 * 0000000140BD0064: add     r8, r10
 * 0000000140BD0067: rol     rbx, cl
 * 0000000140BD006A: add     edx, r11d
 * 0000000140BD006D: jnz     short loc_140BD005A
 * 0000000140BD006F: mov     rax, rbx
 * 0000000140BD0072: jmp     loc_140BD0148
 * 0000000140BD0077: test    r14, r14
 * 0000000140BD007A: jz      loc_140BD010A
 * 0000000140BD0080: mov     eax, 6000h
 * 0000000140BD0085: test    word ptr [rbp+8D0h+arg_8], ax
 * 0000000140BD008C: jnz     short loc_140BD010A
 * 0000000140BD008E: cmp     r14, 0FFFFFFFFFFFFFFFFh
 * 0000000140BD0092: jz      loc_140BCFE77
 * 0000000140BD0098: mov     rax, [rsi+270h]
 * 0000000140BD009F: lea     rdx, [rbp+8D0h+var_878]
 * 0000000140BD00A3: xor     r8d, r8d
 * 0000000140BD00A6: mov     rcx, r12
 * 0000000140BD00A9: call    KeGuardDispatchICall
 * 0000000140BD00AE: test    rax, rax
 * 0000000140BD00B1: jz      short loc_140BD010A
 * 0000000140BD00B3: mov     eax, [rax]
 * 0000000140BD00B5: mov     rdx, [rbp+8D0h+var_878]
 * 0000000140BD00B9: add     rax, rdx
 * 0000000140BD00BC: cmp     rax, r12
 * 0000000140BD00BF: jnz     short loc_140BD010A
 * 0000000140BD00C1: cmp     rdx, [rsi+8E8h]
 * 0000000140BD00C8: jnz     short loc_140BD010A
 * 0000000140BD00CA: mov     rcx, [rsi+8F8h]
 * 0000000140BD00D1: mov     r8d, r12d
 * 0000000140BD00D4: mov     rax, [rsi+220h]
 * 0000000140BD00DB: sub     r8d, edx
 * 0000000140BD00DE: call    KeGuardDispatchICall
 * 0000000140BD00E3: test    rax, rax
 * 0000000140BD00E6: jz      short loc_140BD010A
 * 0000000140BD00E8: test    dword ptr [rax+24h], 2000000h
 * 0000000140BD00EF: jnz     short loc_140BD010A
 * 0000000140BD00F1: cmp     edi, 0FEh
 * 0000000140BD00F7: jnz     loc_140BCFE77
 * 0000000140BD00FD: cmp     r13, [rsi+8D8h]
 * 0000000140BD0104: jz      loc_140BCFE77
 * 0000000140BD010A: mov     r9, [rsp+9D0h+var_960]
 * 0000000140BD010F: mov     rax, [rsi+588h]
 * 0000000140BD0116: xor     r13d, r13d
 * 0000000140BD0119: mov     [rax], rbx
 * 0000000140BD011C: mov     dword ptr [rax+10h], 80h
 * 0000000140BD0123: test    r9, r9
 * 0000000140BD0126: jz      short loc_140BD013A
 * 0000000140BD0128: mov     rax, [rsi+588h]
 * 0000000140BD012F: mov     [rax+8], r9
 * 0000000140BD0133: mov     dword ptr [rax+14h], 80h
 * 0000000140BD013A: mov     [rbp+8D0h+var_928], 1
 * 0000000140BD0141: jmp     loc_140BCFE7A
 * 0000000140BD0146: xor     ebx, eax
 * 0000000140BD0148: shr     rax, 1Fh
 * 0000000140BD014C: test    rax, rax
 * 0000000140BD014F: jnz     short loc_140BD0146
 * 0000000140BD0151: lea     rdx, [r14+0E10h]
 * 0000000140BD0158: btr     ebx, 1Fh
 * 0000000140BD015C: lea     ecx, [rax+10h]
 * 0000000140BD015F: mov     rax, rdx
 * 0000000140BD0162: add     [rsi+848h], ecx
 * 0000000140BD0168: lea     rcx, [rdx+10h]
 * 0000000140BD016C: mov     r9d, [rsi+834h]
 * 0000000140BD0173: mov     r14, [rsi+838h]
 * 0000000140BD017A: cmp     rdx, rcx
 * 0000000140BD017D: jnb     short loc_140BD0190
 * 0000000140BD017F: mov     r8d, 40h ; '@'
 * 0000000140BD0185: prefetchnta byte ptr [rax]
 * 0000000140BD0188: add     rax, r8
 * 0000000140BD018B: cmp     rax, rcx
 * 0000000140BD018E: jb      short loc_140BD0185
 * 0000000140BD0190: mov     eax, 2
 * 0000000140BD0195: lea     r8d, [rax+0Eh]
 * 0000000140BD0199: xor     r14, [rdx]
 * 0000000140BD019C: mov     ecx, r9d
 * 0000000140BD019F: rol     r14, cl
 * 0000000140BD01A2: add     rdx, 8
 * 0000000140BD01A6: add     r8d, 0FFFFFFF8h
 * 0000000140BD01AA: sub     rax, r10
 * 0000000140BD01AD: jnz     short loc_140BD0199
 * 0000000140BD01AF: test    r8d, r8d
 * 0000000140BD01B2: jz      short loc_140BD01C8
 * 0000000140BD01B4: movzx   eax, byte ptr [rdx]
 * 0000000140BD01B7: mov     ecx, r9d
 * 0000000140BD01BA: xor     r14, rax
 * 0000000140BD01BD: add     rdx, r10
 * 0000000140BD01C0: rol     r14, cl
 * 0000000140BD01C3: add     r8d, r11d
 * 0000000140BD01C6: jnz     short loc_140BD01B4
 * 0000000140BD01C8: mov     rax, r14
 * 0000000140BD01CB: jmp     short loc_140BD01D0
 * 0000000140BD01CD: xor     r14d, eax
 * 0000000140BD01D0: shr     rax, 1Fh
 * 0000000140BD01D4: test    rax, rax
 * 0000000140BD01D7: jnz     short loc_140BD01CD
 * 0000000140BD01D9: mov     rax, [rsi+1A8h]
 * 0000000140BD01E0: lea     rcx, [rbp+8D0h+var_270]
 * 0000000140BD01E7: btr     r14d, 1Fh
 * 0000000140BD01EC: call    KeGuardDispatchICall
 * 0000000140BD01F1: mov     r8, [rsp+9D0h+var_980]
 * 0000000140BD01F6: mov     edx, [r8+14h]
 * 0000000140BD01FA: cmp     ebx, edx
 * 0000000140BD01FC: jnz     short loc_140BD021E
 * 0000000140BD01FE: mov     eax, r14d
 * 0000000140BD0201: cmp     rax, [r8+18h]
 * 0000000140BD0205: jnz     short loc_140BD021E
 * 0000000140BD0207: movzx   eax, word ptr [r8+2Ch]
 * 0000000140BD020C: cmp     [rbp+8D0h+var_750], ax
 * 0000000140BD0213: jnz     short loc_140BD021E
 * 0000000140BD0215: test    r15d, r15d
 * 0000000140BD0218: jz      loc_140BD0387
 * 0000000140BD021E: test    r15d, r15d
 * 0000000140BD0221: jnz     short loc_140BD0261
 * 0000000140BD0223: mov     eax, r14d
 * 0000000140BD0226: xor     r15d, r15d
 * 0000000140BD0229: cmp     rax, [r8+18h]
 * 0000000140BD022D: jnz     short loc_140BD024A
 * 0000000140BD022F: cmp     [rsi+918h], r15d
 * 0000000140BD0236: jnz     short loc_140BD0264
 * 0000000140BD0238: mov     ecx, ebx
 * 0000000140BD023A: xor     rcx, rdx
 * 0000000140BD023D: mov     rax, [rsi+588h]
 * 0000000140BD0244: mov     [rax+18h], rcx
 * 0000000140BD0248: jmp     short loc_140BD0264
 * 0000000140BD024A: mov     eax, [r8+18h]
 * 0000000140BD024E: cmp     [rsi+918h], r15d
 * 0000000140BD0255: jnz     short loc_140BD0264
 * 0000000140BD0257: mov     ecx, eax
 * 0000000140BD0259: mov     eax, r14d
 * 0000000140BD025C: xor     rcx, rax
 * 0000000140BD025F: jmp     short loc_140BD023D
 * 0000000140BD0261: xor     r15d, r15d
 * 0000000140BD0264: mov     ebx, 1
 * 0000000140BD0269: mov     rcx, [r8+8]
 * 0000000140BD026D: cmp     [rsi+918h], r15d
 * 0000000140BD0274: jnz     loc_140BD038E
 * 0000000140BD027A: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BD0284: add     rax, rsi
 * 0000000140BD0287: mov     [rsi+920h], rax
 * 0000000140BD028E: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BD0298: add     rax, r8
 * 0000000140BD029B: mov     [rsi+928h], rax
 * 0000000140BD02A2: movsxd  rax, dword ptr [r8]
 * 0000000140BD02A5: mov     [rsi+930h], rax
 * 0000000140BD02AC: mov     [rsi+938h], rcx
 * 0000000140BD02B3: mov     [rsi+918h], ebx
 * 0000000140BD02B9: mov     ecx, [rsi+9D8h]
 * 0000000140BD02BF: bt      ecx, 1Dh
 * 0000000140BD02C3: jb      loc_140BD038E
 * 0000000140BD02C9: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BD02D3: jz      loc_140BD038E
 * 0000000140BD02D9: test    bl, cl
 * 0000000140BD02DB: jz      loc_140BD038E
 * 0000000140BD02E1: mov     ecx, [rsi+0A74h]
 * 0000000140BD02E7: mov     eax, [rsi+804h]
 * 0000000140BD02ED: mov     r11, [rsi+838h]
 * 0000000140BD02F4: sub     eax, ecx
 * 0000000140BD02F6: mov     r8, [rsi+0A78h]
 * 0000000140BD02FD: lea     r9, [rcx+rsi]
 * 0000000140BD0301: mov     ecx, eax
 * 0000000140BD0303: shr     rcx, 3
 * 0000000140BD0307: lea     r10, [r9+rcx*8]
 * 0000000140BD030B: jmp     short loc_140BD032E
 * 0000000140BD030D: xor     [r9], r8
 * 0000000140BD0310: mov     rax, r11
 * 0000000140BD0313: xor     rax, [r9]
 * 0000000140BD0316: movzx   ecx, r8b
 * 0000000140BD031A: and     ecx, 3Fh
 * 0000000140BD031D: ror     r8, cl
 * 0000000140BD0320: add     r8, rax
 * 0000000140BD0323: xor     r8, 0EFAh
 * 0000000140BD032A: add     r9, 8
 * 0000000140BD032E: cmp     r9, r10
 * 0000000140BD0331: jnz     short loc_140BD030D
 * 0000000140BD0333: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BD033B: cmp     r8, [rsi+0A80h]
 * 0000000140BD0342: jz      short loc_140BD038E
 * 0000000140BD0344: mov     ecx, [rsi+804h]
 * 0000000140BD034A: mov     rax, [rsi+588h]
 * 0000000140BD0351: mov     [rax], rsi
 * 0000000140BD0354: mov     [rax+10h], ecx
 * 0000000140BD0357: mov     rcx, [rsi+0A80h]
 * 0000000140BD035E: cmp     [rsi+918h], r15d
 * 0000000140BD0365: jnz     short loc_140BD0375
 * 0000000140BD0367: mov     rax, [rsi+588h]
 * 0000000140BD036E: xor     rcx, r8
 * 0000000140BD0371: mov     [rax+18h], rcx
 * 0000000140BD0375: xor     edx, edx
 * 0000000140BD0377: mov     r9d, 100h
 * 0000000140BD037D: mov     rcx, rsi
 * 0000000140BD0380: call    sub_140BDA384
 * 0000000140BD0385: jmp     short loc_140BD038E
 * 0000000140BD0387: xor     r15d, r15d
 * 0000000140BD038A: lea     ebx, [r15+1]
 * 0000000140BD038E: add     dword ptr [rsi+848h], 10000h
 * 0000000140BD0398: mov     r11d, 1000h
 * 0000000140BD039E: jmp     loc_140BC4FAF
 * 0000000140BD03A3: cmp     [r13+10h], r15d
 * 0000000140BD03A7: jz      loc_140BC4FAF
 * 0000000140BD03AD: test    dword ptr [rsi+9DCh], 4000h
 * 0000000140BD03B7: jz      short loc_140BD03D8
 * 0000000140BD03B9: mov     rcx, [rsi+4D8h]
 * 0000000140BD03C0: cli
 * 0000000140BD03C1: mov     eax, [rsi+9D8h]
 * 0000000140BD03C7: shr     eax, 9
 * 0000000140BD03CA: and     eax, 1Fh
 * 0000000140BD03CD: lock bts [rcx], eax
 * 0000000140BD03D1: jnb     short loc_140BD03D8
 * 0000000140BD03D3: sti
 * 0000000140BD03D4: pause
 * 0000000140BD03D6: jmp     short loc_140BD03C0
 * 0000000140BD03D8: mov     r14, [r13+8]
 * 0000000140BD03DC: mov     r8d, [r13+10h]
 * 0000000140BD03E0: mov     r9, r14
 * 0000000140BD03E3: add     [rsi+848h], r8d
 * 0000000140BD03EA: mov     rax, r14
 * 0000000140BD03ED: mov     r11d, [rsi+834h]
 * 0000000140BD03F4: mov     r15, [rsi+838h]
 * 0000000140BD03FB: lea     rcx, [r14+r8]
 * 0000000140BD03FF: cmp     r14, rcx
 * 0000000140BD0402: jnb     short loc_140BD0414
 * 0000000140BD0404: mov     edx, 40h ; '@'
 * 0000000140BD0409: prefetchnta byte ptr [rax]
 * 0000000140BD040C: add     rax, rdx
 * 0000000140BD040F: cmp     rax, rcx
 * 0000000140BD0412: jb      short loc_140BD0409
 * 0000000140BD0414: mov     r10d, r8d
 * 0000000140BD0417: mov     rbx, r15
 * 0000000140BD041A: shr     r10d, 7
 * 0000000140BD041E: mov     edx, 1
 * 0000000140BD0423: mov     r12d, 0FFFFFFFFh
 * 0000000140BD0429: test    r10d, r10d
 * 0000000140BD042C: jz      short loc_140BD0492
 * 0000000140BD042E: mov     rsi, 7010008004002001h
 * 0000000140BD0438: mov     eax, 8
 * 0000000140BD043D: xor     rbx, [r9]
 * 0000000140BD0440: mov     ecx, r11d
 * 0000000140BD0443: rol     rbx, cl
 * 0000000140BD0446: xor     rbx, [r9+8]
 * 0000000140BD044A: add     r9, 10h
 * 0000000140BD044E: rol     rbx, cl
 * 0000000140BD0451: sub     rax, rdx
 * 0000000140BD0454: jnz     short loc_140BD043D
 * 0000000140BD0456: mov     rcx, r9
 * 0000000140BD0459: sub     rcx, r14
 * 0000000140BD045C: xor     rcx, r15
 * 0000000140BD045F: mov     rax, rcx
 * 0000000140BD0462: rol     rax, 11h
 * 0000000140BD0466: xor     rcx, rax
 * 0000000140BD0469: mov     rax, rsi
 * 0000000140BD046C: mul     rcx
 * 0000000140BD046F: mov     [rbp+8D0h+var_4F0], rdx
 * 0000000140BD0476: xor     edx, eax
 * 0000000140BD0478: xor     r11d, edx
 * 0000000140BD047B: mov     edx, 1
 * 0000000140BD0480: and     r11d, 3Fh
 * 0000000140BD0484: cmovz   r11d, edx
 * 0000000140BD0488: add     r10d, r12d
 * 0000000140BD048B: jnz     short loc_140BD0438
 * 0000000140BD048D: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BD0492: and     r8d, 7Fh
 * 0000000140BD0496: cmp     r8d, 8
 * 0000000140BD049A: jb      short loc_140BD04B9
 * 0000000140BD049C: mov     eax, r8d
 * 0000000140BD049F: shr     rax, 3
 * 0000000140BD04A3: xor     rbx, [r9]
 * 0000000140BD04A6: mov     ecx, r11d
 * 0000000140BD04A9: rol     rbx, cl
 * 0000000140BD04AC: add     r9, 8
 * 0000000140BD04B0: add     r8d, 0FFFFFFF8h
 * 0000000140BD04B4: sub     rax, rdx
 * 0000000140BD04B7: jnz     short loc_140BD04A3
 * 0000000140BD04B9: xor     r15d, r15d
 * 0000000140BD04BC: test    r8d, r8d
 * 0000000140BD04BF: jz      short loc_140BD04D6
 * 0000000140BD04C1: movzx   eax, byte ptr [r9]
 * 0000000140BD04C5: mov     ecx, r11d
 * 0000000140BD04C8: xor     rbx, rax
 * 0000000140BD04CB: add     r9, rdx
 * 0000000140BD04CE: rol     rbx, cl
 * 0000000140BD04D1: add     r8d, r12d
 * 0000000140BD04D4: jnz     short loc_140BD04C1
 * 0000000140BD04D6: mov     rax, rbx
 * 0000000140BD04D9: jmp     short loc_140BD04DD
 * 0000000140BD04DB: xor     ebx, eax
 * 0000000140BD04DD: shr     rax, 1Fh
 * 0000000140BD04E1: test    rax, rax
 * 0000000140BD04E4: jnz     short loc_140BD04DB
 * 0000000140BD04E6: btr     ebx, 1Fh
 * 0000000140BD04EA: mov     r12d, r15d
 * 0000000140BD04ED: cmp     ebx, [r13+14h]
 * 0000000140BD04F1: jz      loc_140BD070E
 * 0000000140BD04F7: cmp     [r13+0], r15d
 * 0000000140BD04FB: jnz     short loc_140BD0505
 * 0000000140BD04FD: cmp     [r13+18h], r15d
 * 0000000140BD0501: cmovnz  r12d, edx
 * 0000000140BD0505: mov     ecx, [r13+10h]
 * 0000000140BD0509: mov     rdx, [r13+8]
 * 0000000140BD050D: test    rcx, rcx
 * 0000000140BD0510: jz      loc_140BD05CD
 * 0000000140BD0516: mov     eax, [rsi+9DCh]
 * 0000000140BD051C: mov     r8d, 40h ; '@'
 * 0000000140BD0522: test    r8b, al
 * 0000000140BD0525: jz      loc_140BD05CD
 * 0000000140BD052B: mov     r15, cr8
 * 0000000140BD052F: lea     eax, [r8-3Eh]
 * 0000000140BD0533: mov     cr8, rax
 * 0000000140BD0537: mov     r14, rdx
 * 0000000140BD053A: lea     rax, [rcx-1]
 * 0000000140BD053E: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140BD0545: add     rax, rdx
 * 0000000140BD0548: or      rax, 0FFFh
 * 0000000140BD054E: mov     [rbp+8D0h+var_950], rax
 * 0000000140BD0552: lea     r13, [r14-1]
 * 0000000140BD0556: mov     rax, [rsi+468h]
 * 0000000140BD055D: xor     edx, edx
 * 0000000140BD055F: mov     rcx, r14
 * 0000000140BD0562: call    KeGuardDispatchICall
 * 0000000140BD0567: cmp     eax, 0C000022Dh
 * 0000000140BD056C: jnz     short loc_140BD0593
 * 0000000140BD056E: test    r12d, r12d
 * 0000000140BD0571: jnz     short loc_140BD05BD
 * 0000000140BD0573: lea     eax, [r12+1]
 * 0000000140BD0578: cmp     r15b, al
 * 0000000140BD057B: ja      short loc_140BD0597
 * 0000000140BD057D: movzx   eax, r15b
 * 0000000140BD0581: mov     cr8, rax
 * 0000000140BD0585: mov     al, [r14]
 * 0000000140BD0588: lea     eax, [r12+2]
 * 0000000140BD058D: mov     cr8, rax
 * 0000000140BD0591: jmp     short loc_140BD0556
 * 0000000140BD0593: test    eax, eax
 * 0000000140BD0595: js      short loc_140BD05BD
 * 0000000140BD0597: mov     r11d, 1000h
 * 0000000140BD059D: add     r14, r11
 * 0000000140BD05A0: add     r13, r11
 * 0000000140BD05A3: cmp     r13, [rbp+8D0h+var_950]
 * 0000000140BD05A7: jnz     short loc_140BD0556
 * 0000000140BD05A9: movzx   eax, r15b
 * 0000000140BD05AD: mov     cr8, rax
 * 0000000140BD05B1: xor     r15d, r15d
 * 0000000140BD05B4: lea     ebx, [r15+1]
 * 0000000140BD05B8: jmp     loc_140BD0719
 * 0000000140BD05BD: movzx   eax, r15b
 * 0000000140BD05C1: mov     cr8, rax
 * 0000000140BD05C5: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BD05CA: xor     r15d, r15d
 * 0000000140BD05CD: mov     eax, [r13+14h]
 * 0000000140BD05D1: cmp     [rsi+918h], r15d
 * 0000000140BD05D8: jnz     short loc_140BD05EA
 * 0000000140BD05DA: mov     ecx, ebx
 * 0000000140BD05DC: xor     rcx, rax
 * 0000000140BD05DF: mov     rax, [rsi+588h]
 * 0000000140BD05E6: mov     [rax+18h], rcx
 * 0000000140BD05EA: mov     ebx, 1
 * 0000000140BD05EF: mov     rcx, [r13+8]
 * 0000000140BD05F3: cmp     [rsi+918h], r15d
 * 0000000140BD05FA: jnz     loc_140BD0713
 * 0000000140BD0600: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BD060A: add     rax, rsi
 * 0000000140BD060D: mov     [rsi+920h], rax
 * 0000000140BD0614: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BD061E: add     rax, r13
 * 0000000140BD0621: mov     [rsi+928h], rax
 * 0000000140BD0628: movsxd  rax, dword ptr [r13+0]
 * 0000000140BD062C: mov     [rsi+930h], rax
 * 0000000140BD0633: mov     [rsi+938h], rcx
 * 0000000140BD063A: mov     [rsi+918h], ebx
 * 0000000140BD0640: mov     ecx, [rsi+9D8h]
 * 0000000140BD0646: bt      ecx, 1Dh
 * 0000000140BD064A: jb      loc_140BD0713
 * 0000000140BD0650: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BD065A: jz      loc_140BD0713
 * 0000000140BD0660: test    bl, cl
 * 0000000140BD0662: jz      loc_140BD0713
 * 0000000140BD0668: mov     ecx, [rsi+0A74h]
 * 0000000140BD066E: mov     eax, [rsi+804h]
 * 0000000140BD0674: mov     r10, [rsi+838h]
 * 0000000140BD067B: sub     eax, ecx
 * 0000000140BD067D: mov     r8, [rsi+0A78h]
 * 0000000140BD0684: lea     rdx, [rcx+rsi]
 * 0000000140BD0688: mov     ecx, eax
 * 0000000140BD068A: shr     rcx, 3
 * 0000000140BD068E: lea     r9, [rdx+rcx*8]
 * 0000000140BD0692: jmp     short loc_140BD06B5
 * 0000000140BD0694: xor     [rdx], r8
 * 0000000140BD0697: mov     rax, [rdx]
 * 0000000140BD069A: movzx   ecx, r8b
 * 0000000140BD069E: xor     rax, r10
 * 0000000140BD06A1: and     ecx, 3Fh
 * 0000000140BD06A4: ror     r8, cl
 * 0000000140BD06A7: add     r8, rax
 * 0000000140BD06AA: xor     r8, 0EFAh
 * 0000000140BD06B1: add     rdx, 8
 * 0000000140BD06B5: cmp     rdx, r9
 * 0000000140BD06B8: jnz     short loc_140BD0694
 * 0000000140BD06BA: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BD06C2: cmp     r8, [rsi+0A80h]
 * 0000000140BD06C9: jz      short loc_140BD0713
 * 0000000140BD06CB: mov     ecx, [rsi+804h]
 * 0000000140BD06D1: mov     rax, [rsi+588h]
 * 0000000140BD06D8: mov     [rax], rsi
 * 0000000140BD06DB: mov     [rax+10h], ecx
 * 0000000140BD06DE: mov     rcx, [rsi+0A80h]
 * 0000000140BD06E5: cmp     [rsi+918h], r15d
 * 0000000140BD06EC: jnz     short loc_140BD06FC
 * 0000000140BD06EE: mov     rax, [rsi+588h]
 * 0000000140BD06F5: xor     rcx, r8
 * 0000000140BD06F8: mov     [rax+18h], rcx
 * 0000000140BD06FC: xor     edx, edx
 * 0000000140BD06FE: mov     r9d, 100h
 * 0000000140BD0704: mov     rcx, rsi
 * 0000000140BD0707: call    sub_140BDA384
 * 0000000140BD070C: jmp     short loc_140BD0713
 * 0000000140BD070E: mov     ebx, 1
 * 0000000140BD0713: mov     r11d, 1000h
 * 0000000140BD0719: test    dword ptr [rsi+9DCh], 4000h
 * 0000000140BD0723: jz      loc_140BC4FA9
 * 0000000140BD0729: mov     ecx, [rsi+9D8h]
 * 0000000140BD072F: mov     eax, ebx
 * 0000000140BD0731: mov     rdx, [rsi+4D8h]
 * 0000000140BD0738: shr     ecx, 9
 * 0000000140BD073B: and     ecx, 1Fh
 * 0000000140BD073E: shl     eax, cl
 * 0000000140BD0740: not     eax
 * 0000000140BD0742: lock and [rdx], eax
 * 0000000140BD0745: sti
 * 0000000140BD0746: jmp     loc_140BC4FA9
 * 0000000140BD074B: mov     rcx, gs:20h
 * 0000000140BD0754: mov     rax, [rsi+658h]
 * 0000000140BD075B: mov     rcx, [rax+rcx]
 * 0000000140BD075F: mov     rax, [rsi+698h]
 * 0000000140BD0766: add     rcx, [rsi+6B8h]
 * 0000000140BD076D: mov     rcx, [rcx+rax]
 * 0000000140BD0771: mov     [rbp+8D0h+var_8E8], rcx
 * 0000000140BD0775: mov     rax, [rsi+490h]
 * 0000000140BD077C: call    KeGuardDispatchICall
 * 0000000140BD0781: mov     r9d, 0FFFFFFFFh
 * 0000000140BD0787: mov     r14, rax
 * 0000000140BD078A: cmp     rax, r9
 * 0000000140BD078D: jnz     loc_140BD08C6
 * 0000000140BD0793: mov     [rbp+8D0h+var_8E8], r15
 * 0000000140BD0797: mov     rcx, [rsi+9D0h]
 * 0000000140BD079E: test    rcx, rcx
 * 0000000140BD07A1: jz      short loc_140BD07C9
 * 0000000140BD07A3: mov     rax, [rsi+480h]
 * 0000000140BD07AA: lea     rdx, [rbp+8D0h+var_8E8]
 * 0000000140BD07AE: call    KeGuardDispatchICall
 * 0000000140BD07B3: test    eax, eax
 * 0000000140BD07B5: jns     short loc_140BD07C0
 * 0000000140BD07B7: mov     rax, r15
 * 0000000140BD07BA: mov     [rbp+8D0h+var_8E8], rax
 * 0000000140BD07BE: jmp     short loc_140BD07C4
 * 0000000140BD07C0: mov     rax, [rbp+8D0h+var_8E8]
 * 0000000140BD07C4: test    rax, rax
 * 0000000140BD07C7: jnz     short loc_140BD07DB
 * 0000000140BD07C9: mov     rax, [rsi+3C0h]
 * 0000000140BD07D0: xor     ecx, ecx
 * 0000000140BD07D2: call    KeGuardDispatchICall
 * 0000000140BD07D7: mov     [rbp+8D0h+var_8E8], rax
 * 0000000140BD07DB: mov     [rsi+9D0h], r15
 * 0000000140BD07E2: mov     ebx, r15d
 * 0000000140BD07E5: mov     rcx, [rbp+8D0h+var_8E8]
 * 0000000140BD07E9: test    rcx, rcx
 * 0000000140BD07EC: jz      loc_140BD08B3
 * 0000000140BD07F2: mov     rax, [rsi+3A0h]
 * 0000000140BD07F9: inc     ebx
 * 0000000140BD07FB: call    KeGuardDispatchICall
 * 0000000140BD0800: test    eax, eax
 * 0000000140BD0802: js      short loc_140BD085F
 * 0000000140BD0804: mov     rax, [rsi+438h]
 * 0000000140BD080B: lea     rdx, [rbp+8D0h+var_A8]
 * 0000000140BD0812: mov     rcx, [rbp+8D0h+var_8E8]
 * 0000000140BD0816: call    KeGuardDispatchICall
 * 0000000140BD081B: mov     rax, [rsi+490h]
 * 0000000140BD0822: call    KeGuardDispatchICall
 * 0000000140BD0827: mov     r14, rax
 * 0000000140BD082A: lea     rcx, [rbp+8D0h+var_A8]
 * 0000000140BD0831: mov     rax, [rsi+440h]
 * 0000000140BD0838: call    KeGuardDispatchICall
 * 0000000140BD083D: mov     rax, [rsi+3A8h]
 * 0000000140BD0844: mov     rcx, [rbp+8D0h+var_8E8]
 * 0000000140BD0848: call    KeGuardDispatchICall
 * 0000000140BD084D: mov     eax, 0FFFFFFFFh
 * 0000000140BD0852: cmp     r14, rax
 * 0000000140BD0855: jnz     short loc_140BD0881
 * 0000000140BD0857: cmp     ebx, 100h
 * 0000000140BD085D: ja      short loc_140BD0881
 * 0000000140BD085F: mov     rax, [rsi+3C0h]
 * 0000000140BD0866: mov     rcx, [rbp+8D0h+var_8E8]
 * 0000000140BD086A: call    KeGuardDispatchICall
 * 0000000140BD086F: mov     [rbp+8D0h+var_8E8], rax
 * 0000000140BD0873: mov     rcx, rax
 * 0000000140BD0876: test    rax, rax
 * 0000000140BD0879: jnz     loc_140BD07F2
 * 0000000140BD087F: jmp     short loc_140BD08B3
 * 0000000140BD0881: mov     rax, [rsi+488h]
 * 0000000140BD0888: mov     rcx, [rbp+8D0h+var_8E8]
 * 0000000140BD088C: call    KeGuardDispatchICall
 * 0000000140BD0891: mov     [rsi+9D0h], rax
 * 0000000140BD0898: mov     rax, [rsi+1F0h]
 * 0000000140BD089F: mov     rcx, [rbp+8D0h+var_8E8]
 * 0000000140BD08A3: call    KeGuardDispatchICall
 * 0000000140BD08A8: mov     r9d, 0FFFFFFFFh
 * 0000000140BD08AE: cmp     r14, r9
 * 0000000140BD08B1: jnz     short loc_140BD08C1
 * 0000000140BD08B3: shl     ebx, 0Ch
 * 0000000140BD08B6: add     [rsi+848h], ebx
 * 0000000140BD08BC: jmp     loc_140BC5D97
 * 0000000140BD08C1: mov     ebx, 1
 * 0000000140BD08C6: bt      dword ptr [rsi+9D8h], 1Dh
 * 0000000140BD08CE: jnb     short loc_140BD0912
 * 0000000140BD08D0: mov     rcx, [rsi+0AC8h]
 * 0000000140BD08D7: mov     edx, 30h ; '0'
 * 0000000140BD08DC: mov     r8, r12
 * 0000000140BD08DF: mov     rax, [r13+0]
 * 0000000140BD08E3: add     edx, 0FFFFFFF8h
 * 0000000140BD08E6: mov     [rcx], rax
 * 0000000140BD08E9: add     r13, 8
 * 0000000140BD08ED: add     rcx, 8
 * 0000000140BD08F1: sub     r8, rbx
 * 0000000140BD08F4: jnz     short loc_140BD08DF
 * 0000000140BD08F6: test    edx, edx
 * 0000000140BD08F8: jz      short loc_140BD090B
 * 0000000140BD08FA: mov     al, [r13+0]
 * 0000000140BD08FE: add     r13, rbx
 * 0000000140BD0901: mov     [rcx], al
 * 0000000140BD0903: add     rcx, rbx
 * 0000000140BD0906: add     edx, r9d
 * 0000000140BD0909: jnz     short loc_140BD08FA
 * 0000000140BD090B: mov     r13, [rsi+0AC8h]
 * 0000000140BD0912: mov     [r13+18h], r14
 * 0000000140BD0916: mov     rcx, [rbp+8D0h+var_8E8]
 * 0000000140BD091A: cmp     [rsi+918h], r15d
 * 0000000140BD0921: jnz     loc_140BD0398
 * 0000000140BD0927: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BD0931: add     rax, rsi
 * 0000000140BD0934: mov     [rsi+920h], rax
 * 0000000140BD093B: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BD0945: add     rax, r13
 * 0000000140BD0948: mov     [rsi+928h], rax
 * 0000000140BD094F: movsxd  rax, dword ptr [r13+0]
 * 0000000140BD0953: mov     [rsi+930h], rax
 * 0000000140BD095A: mov     [rsi+938h], rcx
 * 0000000140BD0961: mov     [rsi+918h], ebx
 * 0000000140BD0967: mov     ecx, [rsi+9D8h]
 * 0000000140BD096D: bt      ecx, 1Dh
 * 0000000140BD0971: jb      loc_140BD0398
 * 0000000140BD0977: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BD0981: jz      loc_140BD0398
 * 0000000140BD0987: test    bl, cl
 * 0000000140BD0989: jz      loc_140BD0398
 * 0000000140BD098F: mov     ecx, [rsi+0A74h]
 * 0000000140BD0995: mov     eax, [rsi+804h]
 * 0000000140BD099B: mov     r10, [rsi+838h]
 * 0000000140BD09A2: sub     eax, ecx
 * 0000000140BD09A4: mov     r8, [rsi+0A78h]
 * 0000000140BD09AB: lea     rdx, [rcx+rsi]
 * 0000000140BD09AF: mov     ecx, eax
 * 0000000140BD09B1: shr     rcx, 3
 * 0000000140BD09B5: lea     r9, [rdx+rcx*8]
 * 0000000140BD09B9: jmp     short loc_140BD09DC
 * 0000000140BD09BB: xor     [rdx], r8
 * 0000000140BD09BE: mov     rax, [rdx]
 * 0000000140BD09C1: movzx   ecx, r8b
 * 0000000140BD09C5: xor     rax, r10
 * 0000000140BD09C8: and     ecx, 3Fh
 * 0000000140BD09CB: ror     r8, cl
 * 0000000140BD09CE: add     r8, rax
 * 0000000140BD09D1: xor     r8, 0EFAh
 * 0000000140BD09D8: add     rdx, 8
 * 0000000140BD09DC: cmp     rdx, r9
 * 0000000140BD09DF: jnz     short loc_140BD09BB
 * 0000000140BD09E1: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BD09E9: cmp     r8, [rsi+0A80h]
 * 0000000140BD09F0: jz      loc_140BD0398
 * 0000000140BD09F6: mov     rax, [rsi+588h]
 * 0000000140BD09FD: mov     ecx, [rsi+804h]
 * 0000000140BD0A03: mov     [rax], rsi
 * 0000000140BD0A06: mov     [rax+10h], ecx
 * 0000000140BD0A09: mov     rax, [rsi+0A80h]
 * 0000000140BD0A10: cmp     [rsi+918h], r15d
 * 0000000140BD0A17: jnz     loc_140BCBDB1
 * 0000000140BD0A1D: mov     rcx, r8
 * 0000000140BD0A20: xor     rcx, rax
 * 0000000140BD0A23: jmp     loc_140BCBDA6
 * 0000000140BD0A28: mov     eax, [rsi+850h]
 * 0000000140BD0A2E: test    bl, al
 * 0000000140BD0A30: jnz     loc_140BC4FAF
 * 0000000140BD0A36: mov     rax, [rsi+188h]
 * 0000000140BD0A3D: mov     r14d, r15d
 * 0000000140BD0A40: mov     r15, [rsi+540h]
 * 0000000140BD0A47: call    KeGuardDispatchICall
 * 0000000140BD0A4C: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BD0A56: jnz     short loc_140BD0A67
 * 0000000140BD0A58: mov     ecx, [rsi+978h]
 * 0000000140BD0A5E: cmp     ecx, 7
 * 0000000140BD0A61: jnb     short loc_140BD0A67
 * 0000000140BD0A63: shl     bl, cl
 * 0000000140BD0A65: jmp     short loc_140BD0A7E
 * 0000000140BD0A67: mov     rax, [rsi+138h]
 * 0000000140BD0A6E: xor     edx, edx
 * 0000000140BD0A70: mov     rcx, [rsi+0A48h]
 * 0000000140BD0A77: call    KeGuardDispatchICall
 * 0000000140BD0A7C: mov     bl, 80h
 * 0000000140BD0A7E: mov     rax, [rsi+148h]
 * 0000000140BD0A85: xor     edx, edx
 * 0000000140BD0A87: mov     rcx, r15
 * 0000000140BD0A8A: call    KeGuardDispatchICall
 * 0000000140BD0A8F: cmp     bl, 80h
 * 0000000140BD0A92: jz      short loc_140BD0AD3
 * 0000000140BD0A94: mov     r8, [rsi+518h]
 * 0000000140BD0A9B: mov     rdx, [r8]
 * 0000000140BD0A9E: cmp     rdx, r8
 * 0000000140BD0AA1: jz      short loc_140BD0AE8
 * 0000000140BD0AA3: not     bl
 * 0000000140BD0AA5: mov     edi, 1
 * 0000000140BD0AAA: mov     rax, [rsi+6C8h]
 * 0000000140BD0AB1: mov     rcx, rdx
 * 0000000140BD0AB4: sub     rcx, [rsi+6E0h]
 * 0000000140BD0ABB: lock and [rcx+rax], bl
 * 0000000140BD0ABF: mov     rdx, [rdx]
 * 0000000140BD0AC2: add     r14d, edi
 * 0000000140BD0AC5: cmp     rdx, r8
 * 0000000140BD0AC8: jnz     short loc_140BD0AAA
 * 0000000140BD0ACA: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BD0AD1: jmp     short loc_140BD0AE8
 * 0000000140BD0AD3: mov     rax, [rsi+140h]
 * 0000000140BD0ADA: xor     edx, edx
 * 0000000140BD0ADC: mov     rcx, [rsi+0A48h]
 * 0000000140BD0AE3: call    KeGuardDispatchICall
 * 0000000140BD0AE8: mov     rcx, [rsi+540h]
 * 0000000140BD0AEF: xor     edx, edx
 * 0000000140BD0AF1: mov     rax, [rsi+150h]
 * 0000000140BD0AF8: call    KeGuardDispatchICall
 * 0000000140BD0AFD: mov     rax, [rsi+190h]
 * 0000000140BD0B04: call    KeGuardDispatchICall
 * 0000000140BD0B09: shl     r14d, 7
 * 0000000140BD0B0D: mov     r11d, 1000h
 * 0000000140BD0B13: add     [rsi+848h], r14d
 * 0000000140BD0B1A: xor     r15d, r15d
 * 0000000140BD0B1D: lea     ebx, [r15+1]
 * 0000000140BD0B21: jmp     loc_140BC4FAF
 * 0000000140BD0B26: mov     r14, [r13+8]
 * 0000000140BD0B2A: mov     r12, rsi
 * 0000000140BD0B2D: mov     r8d, [r13+10h]
 * 0000000140BD0B31: mov     r9, r14
 * 0000000140BD0B34: add     [rsi+848h], r8d
 * 0000000140BD0B3B: mov     rax, r14
 * 0000000140BD0B3E: mov     r10d, [rsi+834h]
 * 0000000140BD0B45: mov     r15, [rsi+838h]
 * 0000000140BD0B4C: lea     rcx, [r14+r8]
 * 0000000140BD0B50: cmp     r14, rcx
 * 0000000140BD0B53: jnb     short loc_140BD0B65
 * 0000000140BD0B55: mov     edx, 40h ; '@'
 * 0000000140BD0B5A: prefetchnta byte ptr [rax]
 * 0000000140BD0B5D: add     rax, rdx
 * 0000000140BD0B60: cmp     rax, rcx
 * 0000000140BD0B63: jb      short loc_140BD0B5A
 * 0000000140BD0B65: mov     r11d, r8d
 * 0000000140BD0B68: mov     rbx, r15
 * 0000000140BD0B6B: shr     r11d, 7
 * 0000000140BD0B6F: mov     edx, 1
 * 0000000140BD0B74: mov     r13d, 0FFFFFFFFh
 * 0000000140BD0B7A: test    r11d, r11d
 * 0000000140BD0B7D: jz      short loc_140BD0BE4
 * 0000000140BD0B7F: mov     rsi, 7010008004002001h
 * 0000000140BD0B89: mov     eax, 8
 * 0000000140BD0B8E: xor     rbx, [r9]
 * 0000000140BD0B91: mov     ecx, r10d
 * 0000000140BD0B94: rol     rbx, cl
 * 0000000140BD0B97: xor     rbx, [r9+8]
 * 0000000140BD0B9B: add     r9, 10h
 * 0000000140BD0B9F: rol     rbx, cl
 * 0000000140BD0BA2: sub     rax, rdx
 * 0000000140BD0BA5: jnz     short loc_140BD0B8E
 * 0000000140BD0BA7: mov     rcx, r9
 * 0000000140BD0BAA: sub     rcx, r14
 * 0000000140BD0BAD: xor     rcx, r15
 * 0000000140BD0BB0: mov     rax, rcx
 * 0000000140BD0BB3: rol     rax, 11h
 * 0000000140BD0BB7: xor     rcx, rax
 * 0000000140BD0BBA: mov     rax, rsi
 * 0000000140BD0BBD: mul     rcx
 * 0000000140BD0BC0: xor     r10d, edx
 * 0000000140BD0BC3: mov     [rbp+8D0h+var_4E8], rdx
 * 0000000140BD0BCA: xor     r10d, eax
 * 0000000140BD0BCD: mov     edx, 1
 * 0000000140BD0BD2: and     r10d, 3Fh
 * 0000000140BD0BD6: cmovz   r10d, edx
 * 0000000140BD0BDA: add     r11d, r13d
 * 0000000140BD0BDD: jnz     short loc_140BD0B89
 * 0000000140BD0BDF: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BD0BE4: and     r8d, 7Fh
 * 0000000140BD0BE8: cmp     r8d, 8
 * 0000000140BD0BEC: jb      short loc_140BD0C0B
 * 0000000140BD0BEE: mov     eax, r8d
 * 0000000140BD0BF1: shr     rax, 3
 * 0000000140BD0BF5: xor     rbx, [r9]
 * 0000000140BD0BF8: mov     ecx, r10d
 * 0000000140BD0BFB: rol     rbx, cl
 * 0000000140BD0BFE: add     r9, 8
 * 0000000140BD0C02: add     r8d, 0FFFFFFF8h
 * 0000000140BD0C06: sub     rax, rdx
 * 0000000140BD0C09: jnz     short loc_140BD0BF5
 * 0000000140BD0C0B: xor     r15d, r15d
 * 0000000140BD0C0E: test    r8d, r8d
 * 0000000140BD0C11: jz      short loc_140BD0C28
 * 0000000140BD0C13: movzx   eax, byte ptr [r9]
 * 0000000140BD0C17: mov     ecx, r10d
 * 0000000140BD0C1A: xor     rbx, rax
 * 0000000140BD0C1D: add     r9, rdx
 * 0000000140BD0C20: rol     rbx, cl
 * 0000000140BD0C23: add     r8d, r13d
 * 0000000140BD0C26: jnz     short loc_140BD0C13
 * 0000000140BD0C28: mov     rax, rbx
 * 0000000140BD0C2B: jmp     short loc_140BD0C2F
 * 0000000140BD0C2D: xor     ebx, eax
 * 0000000140BD0C2F: shr     rax, 1Fh
 * 0000000140BD0C33: test    rax, rax
 * 0000000140BD0C36: jnz     short loc_140BD0C2D
 * 0000000140BD0C38: mov     r14, [rsp+9D0h+var_980]
 * 0000000140BD0C3D: btr     ebx, 1Fh
 * 0000000140BD0C41: mov     r13d, r15d
 * 0000000140BD0C44: cmp     ebx, [r14+14h]
 * 0000000140BD0C48: jz      loc_140BD0E75
 * 0000000140BD0C4E: cmp     [r14], r15d
 * 0000000140BD0C51: jnz     short loc_140BD0C5B
 * 0000000140BD0C53: cmp     [r14+18h], r15d
 * 0000000140BD0C57: cmovnz  r13d, edx
 * 0000000140BD0C5B: mov     ecx, [r14+10h]
 * 0000000140BD0C5F: mov     rdx, [r14+8]
 * 0000000140BD0C63: test    rcx, rcx
 * 0000000140BD0C66: jz      loc_140BD0D35
 * 0000000140BD0C6C: mov     eax, [rsi+9DCh]
 * 0000000140BD0C72: mov     r8d, 40h ; '@'
 * 0000000140BD0C78: test    r8b, al
 * 0000000140BD0C7B: jz      loc_140BD0D35
 * 0000000140BD0C81: mov     r15, cr8
 * 0000000140BD0C85: lea     eax, [r8-3Eh]
 * 0000000140BD0C89: mov     cr8, rax
 * 0000000140BD0C8D: mov     r14, rdx
 * 0000000140BD0C90: lea     rax, [rcx-1]
 * 0000000140BD0C94: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140BD0C9B: add     rax, rdx
 * 0000000140BD0C9E: or      rax, 0FFFh
 * 0000000140BD0CA4: mov     [rbp+8D0h+var_950], rax
 * 0000000140BD0CA8: lea     rax, [r14-1]
 * 0000000140BD0CAC: mov     [rsp+9D0h+var_978], rax
 * 0000000140BD0CB1: mov     rax, [rsi+468h]
 * 0000000140BD0CB8: xor     edx, edx
 * 0000000140BD0CBA: mov     rcx, r14
 * 0000000140BD0CBD: call    KeGuardDispatchICall
 * 0000000140BD0CC2: cmp     eax, 0C000022Dh
 * 0000000140BD0CC7: jnz     short loc_140BD0CEC
 * 0000000140BD0CC9: test    r13d, r13d
 * 0000000140BD0CCC: jnz     short loc_140BD0D25
 * 0000000140BD0CCE: lea     eax, [r13+1]
 * 0000000140BD0CD2: cmp     r15b, al
 * 0000000140BD0CD5: ja      short loc_140BD0CF0
 * 0000000140BD0CD7: movzx   eax, r15b
 * 0000000140BD0CDB: mov     cr8, rax
 * 0000000140BD0CDF: mov     al, [r14]
 * 0000000140BD0CE2: lea     eax, [r13+2]
 * 0000000140BD0CE6: mov     cr8, rax
 * 0000000140BD0CEA: jmp     short loc_140BD0CB1
 * 0000000140BD0CEC: test    eax, eax
 * 0000000140BD0CEE: js      short loc_140BD0D25
 * 0000000140BD0CF0: mov     rax, [rsp+9D0h+var_978]
 * 0000000140BD0CF5: mov     r11d, 1000h
 * 0000000140BD0CFB: add     rax, r11
 * 0000000140BD0CFE: add     r14, r11
 * 0000000140BD0D01: mov     [rsp+9D0h+var_978], rax
 * 0000000140BD0D06: cmp     rax, [rbp+8D0h+var_950]
 * 0000000140BD0D0A: jnz     short loc_140BD0CB1
 * 0000000140BD0D0C: movzx   eax, r15b
 * 0000000140BD0D10: mov     cr8, rax
 * 0000000140BD0D14: mov     r14, [rsp+9D0h+var_980]
 * 0000000140BD0D19: xor     r15d, r15d
 * 0000000140BD0D1C: lea     ebx, [r15+1]
 * 0000000140BD0D20: jmp     loc_140BD0E80
 * 0000000140BD0D25: movzx   eax, r15b
 * 0000000140BD0D29: mov     cr8, rax
 * 0000000140BD0D2D: mov     r14, [rsp+9D0h+var_980]
 * 0000000140BD0D32: xor     r15d, r15d
 * 0000000140BD0D35: mov     eax, [r14+14h]
 * 0000000140BD0D39: cmp     [rsi+918h], r15d
 * 0000000140BD0D40: jnz     short loc_140BD0D52
 * 0000000140BD0D42: mov     ecx, ebx
 * 0000000140BD0D44: xor     rcx, rax
 * 0000000140BD0D47: mov     rax, [rsi+588h]
 * 0000000140BD0D4E: mov     [rax+18h], rcx
 * 0000000140BD0D52: mov     ebx, 1
 * 0000000140BD0D57: mov     rcx, [r14+8]
 * 0000000140BD0D5B: cmp     [rsi+918h], r15d
 * 0000000140BD0D62: jnz     loc_140BD0E7A
 * 0000000140BD0D68: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BD0D72: add     rax, rsi
 * 0000000140BD0D75: mov     [rsi+920h], rax
 * 0000000140BD0D7C: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BD0D86: add     rax, r14
 * 0000000140BD0D89: mov     [rsi+928h], rax
 * 0000000140BD0D90: movsxd  rax, dword ptr [r14]
 * 0000000140BD0D93: mov     [rsi+930h], rax
 * 0000000140BD0D9A: mov     [rsi+938h], rcx
 * 0000000140BD0DA1: mov     [rsi+918h], ebx
 * 0000000140BD0DA7: mov     ecx, [rsi+9D8h]
 * 0000000140BD0DAD: bt      ecx, 1Dh
 * 0000000140BD0DB1: jb      loc_140BD0E7A
 * 0000000140BD0DB7: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BD0DC1: jz      loc_140BD0E7A
 * 0000000140BD0DC7: test    bl, cl
 * 0000000140BD0DC9: jz      loc_140BD0E7A
 * 0000000140BD0DCF: mov     ecx, [rsi+0A74h]
 * 0000000140BD0DD5: mov     eax, [rsi+804h]
 * 0000000140BD0DDB: mov     r10, [rsi+838h]
 * 0000000140BD0DE2: sub     eax, ecx
 * 0000000140BD0DE4: mov     r8, [rsi+0A78h]
 * 0000000140BD0DEB: lea     rdx, [rcx+rsi]
 * 0000000140BD0DEF: mov     ecx, eax
 * 0000000140BD0DF1: shr     rcx, 3
 * 0000000140BD0DF5: lea     r9, [rdx+rcx*8]
 * 0000000140BD0DF9: jmp     short loc_140BD0E1C
 * 0000000140BD0DFB: xor     [rdx], r8
 * 0000000140BD0DFE: mov     rax, [rdx]
 * 0000000140BD0E01: movzx   ecx, r8b
 * 0000000140BD0E05: xor     rax, r10
 * 0000000140BD0E08: and     ecx, 3Fh
 * 0000000140BD0E0B: ror     r8, cl
 * 0000000140BD0E0E: add     r8, rax
 * 0000000140BD0E11: xor     r8, 0EFAh
 * 0000000140BD0E18: add     rdx, 8
 * 0000000140BD0E1C: cmp     rdx, r9
 * 0000000140BD0E1F: jnz     short loc_140BD0DFB
 * 0000000140BD0E21: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BD0E29: cmp     r8, [rsi+0A80h]
 * 0000000140BD0E30: jz      short loc_140BD0E7A
 * 0000000140BD0E32: mov     ecx, [rsi+804h]
 * 0000000140BD0E38: mov     rax, [rsi+588h]
 * 0000000140BD0E3F: mov     [rax], rsi
 * 0000000140BD0E42: mov     [rax+10h], ecx
 * 0000000140BD0E45: mov     rcx, [rsi+0A80h]
 * 0000000140BD0E4C: cmp     [rsi+918h], r15d
 * 0000000140BD0E53: jnz     short loc_140BD0E63
 * 0000000140BD0E55: mov     rax, [rsi+588h]
 * 0000000140BD0E5C: xor     rcx, r8
 * 0000000140BD0E5F: mov     [rax+18h], rcx
 * 0000000140BD0E63: xor     edx, edx
 * 0000000140BD0E65: mov     r9d, 100h
 * 0000000140BD0E6B: mov     rcx, rsi
 * 0000000140BD0E6E: call    sub_140BDA384
 * 0000000140BD0E73: jmp     short loc_140BD0E7A
 * 0000000140BD0E75: mov     ebx, 1
 * 0000000140BD0E7A: mov     r11d, 1000h
 * 0000000140BD0E80: mov     eax, [r14+20h]
 * 0000000140BD0E84: test    bl, al
 * 0000000140BD0E86: jz      loc_140BC4FA9
 * 0000000140BD0E8C: mov     rbx, [r14+18h]
 * 0000000140BD0E90: mov     rax, [rsi+208h]
 * 0000000140BD0E97: mov     rcx, rbx
 * 0000000140BD0E9A: mov     [rbp+8D0h+var_950], rbx
 * 0000000140BD0E9E: call    KeGuardDispatchICall
 * 0000000140BD0EA3: mov     r11d, 1000h
 * 0000000140BD0EA9: movzx   r15d, word ptr [rax+14h]
 * 0000000140BD0EAE: add     r15, 18h
 * 0000000140BD0EB2: add     r15, rax
 * 0000000140BD0EB5: movzx   eax, word ptr [rax+6]
 * 0000000140BD0EB9: lea     rcx, [rax+rax*4]
 * 0000000140BD0EBD: lea     rax, [r15+rcx*8]
 * 0000000140BD0EC1: cmp     r15, rax
 * 0000000140BD0EC4: jz      loc_140BC4FA1
 * 0000000140BD0ECA: mov     r13d, [rsi+844h]
 * 0000000140BD0ED1: xor     edx, edx
 * 0000000140BD0ED3: test    r13d, r13d
 * 0000000140BD0ED6: jnz     short loc_140BD0EE2
 * 0000000140BD0ED8: mov     [rsi+844h], r11d
 * 0000000140BD0EDF: mov     r13d, r11d
 * 0000000140BD0EE2: cmp     rbx, [rsi+5E0h]
 * 0000000140BD0EE9: jz      short loc_140BD0F02
 * 0000000140BD0EEB: cmp     rbx, [rsi+5E8h]
 * 0000000140BD0EF2: jz      short loc_140BD0F02
 * 0000000140BD0EF4: mov     dword ptr [rbp+8D0h+arg_8], edx
 * 0000000140BD0EFA: mov     r14d, 1
 * 0000000140BD0F00: jmp     short loc_140BD0F0F
 * 0000000140BD0F02: mov     r14d, 1
 * 0000000140BD0F08: mov     dword ptr [rbp+8D0h+arg_8], r14d
 * 0000000140BD0F0F: mov     esi, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BD0F15: mov     rdi, rax
 * 0000000140BD0F18: mov     ecx, [r15+10h]
 * 0000000140BD0F1C: mov     eax, [r15+8]
 * 0000000140BD0F20: cmp     ecx, eax
 * 0000000140BD0F22: mov     r10d, [r15+0Ch]
 * 0000000140BD0F26: cmovbe  ecx, eax
 * 0000000140BD0F29: lea     ebx, [r10+0FFFh]
 * 0000000140BD0F30: add     ebx, ecx
 * 0000000140BD0F32: and     ebx, 0FFFFF000h
 * 0000000140BD0F38: mov     dword ptr [rsp+9D0h+var_960], ebx
 * 0000000140BD0F3C: cmp     r13d, ebx
 * 0000000140BD0F3F: jnb     loc_140BD1039
 * 0000000140BD0F45: test    dword ptr [r15+24h], 2000000h
 * 0000000140BD0F4D: jnz     loc_140BD1036
 * 0000000140BD0F53: mov     eax, [r15]
 * 0000000140BD0F56: cmp     eax, 54494E49h
 * 0000000140BD0F5B: jnz     short loc_140BD0FC5
 * 0000000140BD0F5D: cmp     dword ptr [r15+4], 4742444Bh
 * 0000000140BD0F65: jz      loc_140BD1036
 * 0000000140BD0F6B: cmp     eax, 41525245h
 * 0000000140BD0F70: jnz     short loc_140BD0F82
 * 0000000140BD0F72: mov     eax, 4154h
 * 0000000140BD0F77: cmp     [r15+4], ax
 * 0000000140BD0F7C: jz      loc_140BD1036
 * 0000000140BD0F82: test    r12, r12
 * 0000000140BD0F85: jz      short loc_140BD0FF1
 * 0000000140BD0F87: mov     rax, [r12+958h]
 * 0000000140BD0F8F: mov     rdx, [r12+950h]
 * 0000000140BD0F97: mov     qword ptr [rbp+8D0h+var_730+8], rax
 * 0000000140BD0F9E: mov     rax, [r12+960h]
 * 0000000140BD0FA6: mov     qword ptr [rbp+8D0h+var_720], rax
 * 0000000140BD0FAD: mov     rax, [r12+968h]
 * 0000000140BD0FB5: mov     qword ptr [rbp+8D0h+var_720+8], rax
 * 0000000140BD0FBC: mov     qword ptr [rbp+8D0h+var_730], rdx
 * 0000000140BD0FC3: jmp     short loc_140BD1012
 * 0000000140BD0FC5: cmp     eax, 45474150h
 * 0000000140BD0FCA: jnz     short loc_140BD0F6B
 * 0000000140BD0FCC: movzx   eax, word ptr [r15+4]
 * 0000000140BD0FD1: mov     ecx, 7877h
 * 0000000140BD0FD6: cmp     ax, cx
 * 0000000140BD0FD9: jz      short loc_140BD1036
 * 0000000140BD0FDB: mov     ecx, 7277h
 * 0000000140BD0FE0: cmp     ax, cx
 * 0000000140BD0FE3: jz      short loc_140BD1036
 * 0000000140BD0FE5: mov     ecx, 7777h
 * 0000000140BD0FEA: cmp     ax, cx
 * 0000000140BD0FED: jnz     short loc_140BD0F82
 * 0000000140BD0FEF: jmp     short loc_140BD1036
 * 0000000140BD0FF1: movups  xmm1, xmmword ptr cs:VfExcludeSections
 * 0000000140BD0FF8: movups  xmm0, xmmword ptr cs:off_140E0A0D8; "INIT"
 * 0000000140BD0FFF: movups  [rbp+8D0h+var_730], xmm1
 * 0000000140BD1006: movups  [rbp+8D0h+var_720], xmm0
 * 0000000140BD100D: movq    rdx, xmm1
 * 0000000140BD1012: mov     r9d, 7
 * 0000000140BD1018: mov     r8, r15
 * 0000000140BD101B: mov     cl, [r8]
 * 0000000140BD101E: add     r8, r14
 * 0000000140BD1021: mov     al, [rdx]
 * 0000000140BD1023: add     rdx, r14
 * 0000000140BD1026: cmp     cl, al
 * 0000000140BD1028: jnz     short loc_140BD107A
 * 0000000140BD102A: mov     eax, 0FFFFFFFFh
 * 0000000140BD102F: add     r9d, eax
 * 0000000140BD1032: jnz     short loc_140BD101B
 * 0000000140BD1034: xor     edx, edx
 * 0000000140BD1036: mov     r13d, ebx
 * 0000000140BD1039: add     r15, 28h ; '('
 * 0000000140BD103D: mov     r14d, 1
 * 0000000140BD1043: cmp     r15, rdi
 * 0000000140BD1046: jnz     loc_140BD0F18
 * 0000000140BD104C: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BD1051: cmp     r15, rdi
 * 0000000140BD1054: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BD105B: jnz     loc_140BD14BC
 * 0000000140BD1061: cmp     r13d, ebx
 * 0000000140BD1064: jb      loc_140BD14BC
 * 0000000140BD106A: xor     r15d, r15d
 * 0000000140BD106D: mov     [r12+844h], r15d
 * 0000000140BD1075: jmp     loc_140BC4FA4
 * 0000000140BD107A: mov     r8, qword ptr [rbp+8D0h+var_730+8]
 * 0000000140BD1081: mov     edx, 8
 * 0000000140BD1086: mov     r9, r15
 * 0000000140BD1089: mov     rcx, [r9]
 * 0000000140BD108C: add     r9, 8
 * 0000000140BD1090: mov     rax, [r8]
 * 0000000140BD1093: add     r8, 8
 * 0000000140BD1097: cmp     rcx, rax
 * 0000000140BD109A: jnz     short loc_140BD10C6
 * 0000000140BD109C: add     edx, 0FFFFFFF8h
 * 0000000140BD109F: cmp     edx, 8
 * 0000000140BD10A2: jnb     short loc_140BD1089
 * 0000000140BD10A4: test    edx, edx
 * 0000000140BD10A6: jz      short loc_140BD1034
 * 0000000140BD10A8: mov     cl, [r9]
 * 0000000140BD10AB: add     r9, r14
 * 0000000140BD10AE: mov     al, [r8]
 * 0000000140BD10B1: add     r8, r14
 * 0000000140BD10B4: cmp     cl, al
 * 0000000140BD10B6: jnz     short loc_140BD10C6
 * 0000000140BD10B8: mov     eax, 0FFFFFFFFh
 * 0000000140BD10BD: add     edx, eax
 * 0000000140BD10BF: jnz     short loc_140BD10A8
 * 0000000140BD10C1: jmp     loc_140BD1034
 * 0000000140BD10C6: mov     rdx, qword ptr [rbp+8D0h+var_720]
 * 0000000140BD10CD: mov     r9d, 4
 * 0000000140BD10D3: mov     r8, r15
 * 0000000140BD10D6: mov     cl, [r8]
 * 0000000140BD10D9: add     r8, r14
 * 0000000140BD10DC: mov     al, [rdx]
 * 0000000140BD10DE: add     rdx, r14
 * 0000000140BD10E1: cmp     cl, al
 * 0000000140BD10E3: jnz     short loc_140BD10F4
 * 0000000140BD10E5: mov     eax, 0FFFFFFFFh
 * 0000000140BD10EA: add     r9d, eax
 * 0000000140BD10ED: jnz     short loc_140BD10D6
 * 0000000140BD10EF: jmp     loc_140BD1034
 * 0000000140BD10F4: mov     rdx, qword ptr [rbp+8D0h+var_720+8]
 * 0000000140BD10FB: mov     r9d, 6
 * 0000000140BD1101: mov     r8, r15
 * 0000000140BD1104: mov     cl, [r8]
 * 0000000140BD1107: add     r8, r14
 * 0000000140BD110A: mov     al, [rdx]
 * 0000000140BD110C: add     rdx, r14
 * 0000000140BD110F: cmp     cl, al
 * 0000000140BD1111: jnz     short loc_140BD1122
 * 0000000140BD1113: mov     eax, 0FFFFFFFFh
 * 0000000140BD1118: add     r9d, eax
 * 0000000140BD111B: jnz     short loc_140BD1104
 * 0000000140BD111D: jmp     loc_140BD1034
 * 0000000140BD1122: mov     eax, [r15+24h]
 * 0000000140BD1126: xor     edx, edx
 * 0000000140BD1128: test    eax, eax
 * 0000000140BD112A: js      loc_140BD1036
 * 0000000140BD1130: bt      eax, 1Dh
 * 0000000140BD1134: jnb     loc_140BD1036
 * 0000000140BD113A: test    esi, esi
 * 0000000140BD113C: jz      short loc_140BD1151
 * 0000000140BD113E: mov     eax, [r15]
 * 0000000140BD1141: cmp     eax, 2E656461h
 * 0000000140BD1146: jz      short loc_140BD1151
 * 0000000140BD1148: cmp     eax, 45474150h
 * 0000000140BD114D: cmovnz  r14d, edx
 * 0000000140BD1151: cmp     r13d, r10d
 * 0000000140BD1154: cmovb   r13d, r10d
 * 0000000140BD1158: mov     ebx, r13d
 * 0000000140BD115B: add     rbx, [rbp+8D0h+var_950]
 * 0000000140BD115F: test    byte ptr [r12+89Bh], 4
 * 0000000140BD1168: jz      short loc_140BD11D7
 * 0000000140BD116A: mov     ecx, 0FFFFFFFFh
 * 0000000140BD116F: mov     eax, ecx
 * 0000000140BD1171: xbegin  $+6
 * 0000000140BD1177: cmp     eax, ecx
 * 0000000140BD1179: jnz     short loc_140BD1182
 * 0000000140BD117B: mov     al, [rbx]
 * 0000000140BD117D: xend
 * 0000000140BD1180: jmp     short loc_140BD11B6
 * 0000000140BD1182: rdtsc
 * 0000000140BD1184: shl     rdx, 20h
 * 0000000140BD1188: or      rax, rdx
 * 0000000140BD118B: mov     rcx, rax
 * 0000000140BD118E: ror     rax, 3
 * 0000000140BD1192: xor     rcx, rax
 * 0000000140BD1195: mov     rax, 7010008004002001h
 * 0000000140BD119F: mul     rcx
 * 0000000140BD11A2: mov     [rbp+8D0h+var_4E0], rdx
 * 0000000140BD11A9: xor     dl, al
 * 0000000140BD11AB: mov     eax, 0Fh
 * 0000000140BD11B0: test    al, dl
 * 0000000140BD11B2: jz      short loc_140BD11D5
 * 0000000140BD11B4: xor     edx, edx
 * 0000000140BD11B6: mov     r8d, 1
 * 0000000140BD11BC: add     [r12+85Ch], r8d
 * 0000000140BD11C4: add     dword ptr [r12+848h], 100h
 * 0000000140BD11D0: jmp     loc_140BD1365
 * 0000000140BD11D5: xor     edx, edx
 * 0000000140BD11D7: test    r14d, r14d
 * 0000000140BD11DA: jz      loc_140BD1390
 * 0000000140BD11E0: mov     rax, [r12+450h]
 * 0000000140BD11E8: lea     rcx, [rbp+8D0h+var_630]
 * 0000000140BD11EF: mov     rdx, rbx
 * 0000000140BD11F2: call    KeGuardDispatchICall
 * 0000000140BD11F7: xor     edx, edx
 * 0000000140BD11F9: test    eax, eax
 * 0000000140BD11FB: jns     loc_140BD1400
 * 0000000140BD1201: cmp     eax, 0C0000005h
 * 0000000140BD1206: jnz     loc_140BD135F
 * 0000000140BD120C: mov     rcx, [rsp+9D0h+var_980]
 * 0000000140BD1211: mov     eax, [rcx+20h]
 * 0000000140BD1214: test    al, 4
 * 0000000140BD1216: jz      short loc_140BD1222
 * 0000000140BD1218: cmp     [r15+24h], edx
 * 0000000140BD121C: jge     loc_140BD135F
 * 0000000140BD1222: cmp     [r12+918h], edx
 * 0000000140BD122A: jnz     loc_140BD135F
 * 0000000140BD1230: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BD123A: mov     r8d, 1
 * 0000000140BD1240: add     rax, r12
 * 0000000140BD1243: mov     [r12+920h], rax
 * 0000000140BD124B: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BD1255: add     rax, rcx
 * 0000000140BD1258: mov     [r12+928h], rax
 * 0000000140BD1260: movsxd  rax, dword ptr [rcx]
 * 0000000140BD1263: mov     [r12+930h], rax
 * 0000000140BD126B: mov     [r12+938h], rbx
 * 0000000140BD1273: mov     [r12+918h], r8d
 * 0000000140BD127B: mov     ecx, [r12+9D8h]
 * 0000000140BD1283: bt      ecx, 1Dh
 * 0000000140BD1287: jb      loc_140BD135F
 * 0000000140BD128D: test    dword ptr [r12+9DCh], 200000h
 * 0000000140BD1299: jz      loc_140BD135F
 * 0000000140BD129F: test    r8b, cl
 * 0000000140BD12A2: jz      loc_140BD135F
 * 0000000140BD12A8: mov     ecx, [r12+0A74h]
 * 0000000140BD12B0: mov     eax, [r12+804h]
 * 0000000140BD12B8: mov     r10, [r12+838h]
 * 0000000140BD12C0: sub     eax, ecx
 * 0000000140BD12C2: mov     r8, [r12+0A78h]
 * 0000000140BD12CA: lea     rdx, [rcx+r12]
 * 0000000140BD12CE: mov     ecx, eax
 * 0000000140BD12D0: shr     rcx, 3
 * 0000000140BD12D4: lea     r9, [rdx+rcx*8]
 * 0000000140BD12D8: jmp     short loc_140BD12FB
 * 0000000140BD12DA: xor     [rdx], r8
 * 0000000140BD12DD: mov     rax, [rdx]
 * 0000000140BD12E0: movzx   ecx, r8b
 * 0000000140BD12E4: xor     rax, r10
 * 0000000140BD12E7: and     ecx, 3Fh
 * 0000000140BD12EA: ror     r8, cl
 * 0000000140BD12ED: add     r8, rax
 * 0000000140BD12F0: xor     r8, 0EFAh
 * 0000000140BD12F7: add     rdx, 8
 * 0000000140BD12FB: cmp     rdx, r9
 * 0000000140BD12FE: jnz     short loc_140BD12DA
 * 0000000140BD1300: btr     dword ptr [r12+9DCh], 15h
 * 0000000140BD130A: cmp     r8, [r12+0A80h]
 * 0000000140BD1312: jz      short loc_140BD135D
 * 0000000140BD1314: mov     rax, [r12+588h]
 * 0000000140BD131C: mov     ecx, [r12+804h]
 * 0000000140BD1324: mov     [rax], r12
 * 0000000140BD1327: mov     [rax+10h], ecx
 * 0000000140BD132A: xor     eax, eax
 * 0000000140BD132C: mov     rcx, [r12+0A80h]
 * 0000000140BD1334: cmp     [r12+918h], eax
 * 0000000140BD133C: jnz     short loc_140BD134D
 * 0000000140BD133E: mov     rax, [r12+588h]
 * 0000000140BD1346: xor     rcx, r8
 * 0000000140BD1349: mov     [rax+18h], rcx
 * 0000000140BD134D: xor     edx, edx
 * 0000000140BD134F: mov     r9d, 100h
 * 0000000140BD1355: mov     rcx, r12
 * 0000000140BD1358: call    sub_140BDA384
 * 0000000140BD135D: xor     edx, edx
 * 0000000140BD135F: mov     r11d, 1000h
 * 0000000140BD1365: mov     ebx, dword ptr [rsp+9D0h+var_960]
 * 0000000140BD1369: add     r13d, r11d
 * 0000000140BD136C: mov     eax, [r12+84Ch]
 * 0000000140BD1374: cmp     r13d, ebx
 * 0000000140BD1377: jnb     loc_140BD14A9
 * 0000000140BD137D: cmp     [r12+848h], eax
 * 0000000140BD1385: jl      loc_140BD1158
 * 0000000140BD138B: jmp     loc_140BD104C
 * 0000000140BD1390: mov     r8d, 0FFFh
 * 0000000140BD1396: mov     [rbp+8D0h+var_630], rdx
 * 0000000140BD139D: mov     [rbp+8D0h+var_626], dx
 * 0000000140BD13A4: mov     rax, rbx
 * 0000000140BD13A7: and     rax, r8
 * 0000000140BD13AA: mov     [rbp+8D0h+var_608], r11d
 * 0000000140BD13B1: add     rax, 1FFFh
 * 0000000140BD13B7: mov     rcx, rbx
 * 0000000140BD13BA: shr     rax, 0Ch
 * 0000000140BD13BE: add     ax, 6
 * 0000000140BD13C2: shl     ax, 3
 * 0000000140BD13C6: mov     [rbp+8D0h+var_628], ax
 * 0000000140BD13CD: mov     rax, rbx
 * 0000000140BD13D0: and     rax, 0FFFFFFFFFFFFF000h
 * 0000000140BD13D6: mov     [rbp+8D0h+var_610], rax
 * 0000000140BD13DD: mov     eax, ebx
 * 0000000140BD13DF: and     eax, r8d
 * 0000000140BD13E2: mov     [rbp+8D0h+var_604], eax
 * 0000000140BD13E8: mov     rax, [r12+458h]
 * 0000000140BD13F0: call    KeGuardDispatchICall
 * 0000000140BD13F5: shr     rax, 0Ch
 * 0000000140BD13F9: mov     [rbp+8D0h+var_600], rax
 * 0000000140BD1400: mov     eax, 1
 * 0000000140BD1405: add     [r12+860h], eax
 * 0000000140BD140D: mov     eax, [rbp+8D0h+var_604]
 * 0000000140BD1413: add     rax, [rbp+8D0h+var_610]
 * 0000000140BD141A: mov     [r12+0AB0h], rax
 * 0000000140BD1422: mov     rax, [rsp+9D0h+var_980]
 * 0000000140BD1427: mov     [r12+0AA8h], rax
 * 0000000140BD142F: mov     rbx, cr8
 * 0000000140BD1433: mov     eax, 2
 * 0000000140BD1438: mov     cr8, rax
 * 0000000140BD143C: mov     rdx, [r12+5F0h]
 * 0000000140BD1444: lea     rcx, [r12+0A88h]
 * 0000000140BD144C: xor     r8d, r8d
 * 0000000140BD144F: mov     edx, [rdx]
 * 0000000140BD1451: call    RtlInitMinimalBarrier
 * 0000000140BD1456: mov     ecx, [r12+814h]
 * 0000000140BD145E: mov     rdx, r12
 * 0000000140BD1461: mov     rax, [r12+448h]
 * 0000000140BD1469: add     rcx, r12
 * 0000000140BD146C: call    KeGuardDispatchICall
 * 0000000140BD1471: mov     r12, rax
 * 0000000140BD1474: movzx   eax, bl
 * 0000000140BD1477: mov     cr8, rax
 * 0000000140BD147B: xor     edx, edx
 * 0000000140BD147D: test    r14d, r14d
 * 0000000140BD1480: jz      short loc_140BD1498
 * 0000000140BD1482: mov     rax, [r12+460h]
 * 0000000140BD148A: lea     rcx, [rbp+8D0h+var_630]
 * 0000000140BD1491: call    KeGuardDispatchICall
 * 0000000140BD1496: xor     edx, edx
 * 0000000140BD1498: add     dword ptr [r12+848h], 14000h
 * 0000000140BD14A4: jmp     loc_140BD135F
 * 0000000140BD14A9: cmp     [r12+848h], eax
 * 0000000140BD14B1: jge     loc_140BD104C
 * 0000000140BD14B7: jmp     loc_140BD1039
 * 0000000140BD14BC: mov     [r12+844h], r13d
 * 0000000140BD14C4: jmp     loc_140BC4FA1
 * 0000000140BD14C9: cmp     [rsi+844h], r15d
 * 0000000140BD14D0: jnz     loc_140BD1810
 * 0000000140BD14D6: mov     r14, [r13+8]
 * 0000000140BD14DA: mov     r8d, [r13+10h]
 * 0000000140BD14DE: mov     r9, r14
 * 0000000140BD14E1: add     [rsi+848h], r8d
 * 0000000140BD14E8: mov     rax, r14
 * 0000000140BD14EB: mov     r10d, [rsi+834h]
 * 0000000140BD14F2: mov     r15, [rsi+838h]
 * 0000000140BD14F9: lea     rcx, [r14+r8]
 * 0000000140BD14FD: cmp     r14, rcx
 * 0000000140BD1500: jnb     short loc_140BD1512
 * 0000000140BD1502: mov     edx, 40h ; '@'
 * 0000000140BD1507: prefetchnta byte ptr [rax]
 * 0000000140BD150A: add     rax, rdx
 * 0000000140BD150D: cmp     rax, rcx
 * 0000000140BD1510: jb      short loc_140BD1507
 * 0000000140BD1512: mov     r11d, r8d
 * 0000000140BD1515: mov     rbx, r15
 * 0000000140BD1518: shr     r11d, 7
 * 0000000140BD151C: mov     edx, 1
 * 0000000140BD1521: mov     r12d, 0FFFFFFFFh
 * 0000000140BD1527: test    r11d, r11d
 * 0000000140BD152A: jz      short loc_140BD1591
 * 0000000140BD152C: mov     rsi, 7010008004002001h
 * 0000000140BD1536: mov     eax, 8
 * 0000000140BD153B: xor     rbx, [r9]
 * 0000000140BD153E: mov     ecx, r10d
 * 0000000140BD1541: rol     rbx, cl
 * 0000000140BD1544: xor     rbx, [r9+8]
 * 0000000140BD1548: add     r9, 10h
 * 0000000140BD154C: rol     rbx, cl
 * 0000000140BD154F: sub     rax, rdx
 * 0000000140BD1552: jnz     short loc_140BD153B
 * 0000000140BD1554: mov     rcx, r9
 * 0000000140BD1557: sub     rcx, r14
 * 0000000140BD155A: xor     rcx, r15
 * 0000000140BD155D: mov     rax, rcx
 * 0000000140BD1560: rol     rax, 11h
 * 0000000140BD1564: xor     rcx, rax
 * 0000000140BD1567: mov     rax, rsi
 * 0000000140BD156A: mul     rcx
 * 0000000140BD156D: xor     r10d, eax
 * 0000000140BD1570: mov     [rbp+8D0h+var_4D8], rdx
 * 0000000140BD1577: xor     r10d, edx
 * 0000000140BD157A: mov     edx, 1
 * 0000000140BD157F: and     r10d, 3Fh
 * 0000000140BD1583: cmovz   r10d, edx
 * 0000000140BD1587: add     r11d, r12d
 * 0000000140BD158A: jnz     short loc_140BD1536
 * 0000000140BD158C: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BD1591: and     r8d, 7Fh
 * 0000000140BD1595: cmp     r8d, 8
 * 0000000140BD1599: jb      short loc_140BD15B8
 * 0000000140BD159B: mov     eax, r8d
 * 0000000140BD159E: shr     rax, 3
 * 0000000140BD15A2: xor     rbx, [r9]
 * 0000000140BD15A5: mov     ecx, r10d
 * 0000000140BD15A8: rol     rbx, cl
 * 0000000140BD15AB: add     r9, 8
 * 0000000140BD15AF: add     r8d, 0FFFFFFF8h
 * 0000000140BD15B3: sub     rax, rdx
 * 0000000140BD15B6: jnz     short loc_140BD15A2
 * 0000000140BD15B8: xor     r15d, r15d
 * 0000000140BD15BB: test    r8d, r8d
 * 0000000140BD15BE: jz      short loc_140BD15D5
 * 0000000140BD15C0: movzx   eax, byte ptr [r9]
 * 0000000140BD15C4: mov     ecx, r10d
 * 0000000140BD15C7: xor     rbx, rax
 * 0000000140BD15CA: add     r9, rdx
 * 0000000140BD15CD: rol     rbx, cl
 * 0000000140BD15D0: add     r8d, r12d
 * 0000000140BD15D3: jnz     short loc_140BD15C0
 * 0000000140BD15D5: mov     rax, rbx
 * 0000000140BD15D8: jmp     short loc_140BD15DC
 * 0000000140BD15DA: xor     ebx, eax
 * 0000000140BD15DC: shr     rax, 1Fh
 * 0000000140BD15E0: test    rax, rax
 * 0000000140BD15E3: jnz     short loc_140BD15DA
 * 0000000140BD15E5: btr     ebx, 1Fh
 * 0000000140BD15E9: mov     r12d, r15d
 * 0000000140BD15EC: cmp     ebx, [r13+14h]
 * 0000000140BD15F0: jz      loc_140BD180C
 * 0000000140BD15F6: cmp     [r13+0], r15d
 * 0000000140BD15FA: jnz     short loc_140BD1604
 * 0000000140BD15FC: cmp     [r13+18h], r15d
 * 0000000140BD1600: cmovnz  r12d, edx
 * 0000000140BD1604: mov     ecx, [r13+10h]
 * 0000000140BD1608: mov     rdx, [r13+8]
 * 0000000140BD160C: test    rcx, rcx
 * 0000000140BD160F: jz      loc_140BD16CD
 * 0000000140BD1615: mov     eax, [rsi+9DCh]
 * 0000000140BD161B: mov     r8d, 40h ; '@'
 * 0000000140BD1621: test    r8b, al
 * 0000000140BD1624: jz      loc_140BD16CD
 * 0000000140BD162A: mov     r15, cr8
 * 0000000140BD162E: lea     eax, [r8-3Eh]
 * 0000000140BD1632: mov     cr8, rax
 * 0000000140BD1636: mov     r14, rdx
 * 0000000140BD1639: lea     rax, [rcx-1]
 * 0000000140BD163D: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140BD1644: add     rax, rdx
 * 0000000140BD1647: or      rax, 0FFFh
 * 0000000140BD164D: mov     [rbp+8D0h+var_950], rax
 * 0000000140BD1651: lea     r13, [r14-1]
 * 0000000140BD1655: mov     rax, [rsi+468h]
 * 0000000140BD165C: xor     edx, edx
 * 0000000140BD165E: mov     rcx, r14
 * 0000000140BD1661: call    KeGuardDispatchICall
 * 0000000140BD1666: cmp     eax, 0C000022Dh
 * 0000000140BD166B: jnz     short loc_140BD1692
 * 0000000140BD166D: test    r12d, r12d
 * 0000000140BD1670: jnz     short loc_140BD16BD
 * 0000000140BD1672: lea     eax, [r12+1]
 * 0000000140BD1677: cmp     r15b, al
 * 0000000140BD167A: ja      short loc_140BD1696
 * 0000000140BD167C: movzx   eax, r15b
 * 0000000140BD1680: mov     cr8, rax
 * 0000000140BD1684: mov     al, [r14]
 * 0000000140BD1687: lea     eax, [r12+2]
 * 0000000140BD168C: mov     cr8, rax
 * 0000000140BD1690: jmp     short loc_140BD1655
 * 0000000140BD1692: test    eax, eax
 * 0000000140BD1694: js      short loc_140BD16BD
 * 0000000140BD1696: mov     r11d, 1000h
 * 0000000140BD169C: add     r14, r11
 * 0000000140BD169F: add     r13, r11
 * 0000000140BD16A2: cmp     r13, [rbp+8D0h+var_950]
 * 0000000140BD16A6: jnz     short loc_140BD1655
 * 0000000140BD16A8: movzx   eax, r15b
 * 0000000140BD16AC: mov     cr8, rax
 * 0000000140BD16B0: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BD16B5: xor     r15d, r15d
 * 0000000140BD16B8: jmp     loc_140BD180C
 * 0000000140BD16BD: movzx   eax, r15b
 * 0000000140BD16C1: mov     cr8, rax
 * 0000000140BD16C5: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BD16CA: xor     r15d, r15d
 * 0000000140BD16CD: mov     eax, [r13+14h]
 * 0000000140BD16D1: cmp     [rsi+918h], r15d
 * 0000000140BD16D8: jnz     short loc_140BD16EA
 * 0000000140BD16DA: mov     ecx, ebx
 * 0000000140BD16DC: xor     rcx, rax
 * 0000000140BD16DF: mov     rax, [rsi+588h]
 * 0000000140BD16E6: mov     [rax+18h], rcx
 * 0000000140BD16EA: mov     rcx, [r13+8]
 * 0000000140BD16EE: cmp     [rsi+918h], r15d
 * 0000000140BD16F5: jnz     loc_140BD180C
 * 0000000140BD16FB: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BD1705: mov     ebx, 1
 * 0000000140BD170A: add     rax, rsi
 * 0000000140BD170D: mov     [rsi+920h], rax
 * 0000000140BD1714: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BD171E: add     rax, r13
 * 0000000140BD1721: mov     [rsi+928h], rax
 * 0000000140BD1728: movsxd  rax, dword ptr [r13+0]
 * 0000000140BD172C: mov     [rsi+930h], rax
 * 0000000140BD1733: mov     [rsi+938h], rcx
 * 0000000140BD173A: mov     [rsi+918h], ebx
 * 0000000140BD1740: mov     ecx, [rsi+9D8h]
 * 0000000140BD1746: bt      ecx, 1Dh
 * 0000000140BD174A: jb      loc_140BD180C
 * 0000000140BD1750: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BD175A: jz      loc_140BD180C
 * 0000000140BD1760: test    bl, cl
 * 0000000140BD1762: jz      loc_140BD180C
 * 0000000140BD1768: mov     ecx, [rsi+0A74h]
 * 0000000140BD176E: mov     eax, [rsi+804h]
 * 0000000140BD1774: mov     r10, [rsi+838h]
 * 0000000140BD177B: sub     eax, ecx
 * 0000000140BD177D: mov     r8, [rsi+0A78h]
 * 0000000140BD1784: lea     rdx, [rcx+rsi]
 * 0000000140BD1788: mov     ecx, eax
 * 0000000140BD178A: shr     rcx, 3
 * 0000000140BD178E: lea     r9, [rdx+rcx*8]
 * 0000000140BD1792: jmp     short loc_140BD17B5
 * 0000000140BD1794: xor     [rdx], r8
 * 0000000140BD1797: mov     rax, [rdx]
 * 0000000140BD179A: movzx   ecx, r8b
 * 0000000140BD179E: xor     rax, r10
 * 0000000140BD17A1: and     ecx, 3Fh
 * 0000000140BD17A4: ror     r8, cl
 * 0000000140BD17A7: add     r8, rax
 * 0000000140BD17AA: xor     r8, 0EFAh
 * 0000000140BD17B1: add     rdx, 8
 * 0000000140BD17B5: cmp     rdx, r9
 * 0000000140BD17B8: jnz     short loc_140BD1794
 * 0000000140BD17BA: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BD17C2: cmp     r8, [rsi+0A80h]
 * 0000000140BD17C9: jz      short loc_140BD180C
 * 0000000140BD17CB: mov     ecx, [rsi+804h]
 * 0000000140BD17D1: mov     rax, [rsi+588h]
 * 0000000140BD17D8: mov     [rax], rsi
 * 0000000140BD17DB: mov     [rax+10h], ecx
 * 0000000140BD17DE: mov     rcx, [rsi+0A80h]
 * 0000000140BD17E5: cmp     [rsi+918h], r15d
 * 0000000140BD17EC: jnz     short loc_140BD17FC
 * 0000000140BD17EE: mov     rax, [rsi+588h]
 * 0000000140BD17F5: xor     rcx, r8
 * 0000000140BD17F8: mov     [rax+18h], rcx
 * 0000000140BD17FC: xor     edx, edx
 * 0000000140BD17FE: mov     r9d, 100h
 * 0000000140BD1804: mov     rcx, rsi
 * 0000000140BD1807: call    sub_140BDA384
 * 0000000140BD180C: mov     r10d, [rbp+8D0h+var_948]
 * 0000000140BD1810: mov     r9, [r13+8]
 * 0000000140BD1814: mov     r8d, [rsi+844h]
 * 0000000140BD181B: mov     ecx, [r13+10h]
 * 0000000140BD181F: mov     [rbp+8D0h+var_900], r9
 * 0000000140BD1823: lea     rax, [r8+r8*2]
 * 0000000140BD1827: lea     r14, [r9+rax*4]
 * 0000000140BD182B: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140BD1835: mul     rcx
 * 0000000140BD1838: mov     [rbp+8D0h+var_940], r14
 * 0000000140BD183C: shr     rdx, 3
 * 0000000140BD1840: lea     rax, [rdx+rdx*2]
 * 0000000140BD1844: lea     r12, [r9+rax*4]
 * 0000000140BD1848: mov     [rsp+9D0h+var_978], r12
 * 0000000140BD184D: lea     r12, ds:30h[r8*4]
 * 0000000140BD1855: add     r12, r13
 * 0000000140BD1858: mov     [rsp+9D0h+var_968], r12
 * 0000000140BD185D: cmp     r14, [rsp+9D0h+var_978]
 * 0000000140BD1862: jz      loc_140BD1FA7
 * 0000000140BD1868: mov     rdi, [rsp+9D0h+var_978]
 * 0000000140BD186D: cmp     [r12], r15d
 * 0000000140BD1871: jl      loc_140BD1DDC
 * 0000000140BD1877: mov     eax, [r14]
 * 0000000140BD187A: mov     ebx, [r14+4]
 * 0000000140BD187E: mov     r15d, eax
 * 0000000140BD1881: add     r15, [r13+20h]
 * 0000000140BD1885: sub     ebx, eax
 * 0000000140BD1887: mov     [rbp+8D0h+var_950], r15
 * 0000000140BD188B: cmp     r10d, 2Bh ; '+'
 * 0000000140BD188F: jz      loc_140BD19B8
 * 0000000140BD1895: add     [rsi+848h], ebx
 * 0000000140BD189B: mov     r8, r15
 * 0000000140BD189E: mov     r9d, [rsi+834h]
 * 0000000140BD18A5: mov     rax, r15
 * 0000000140BD18A8: mov     r11, [rsi+838h]
 * 0000000140BD18AF: mov     ecx, ebx
 * 0000000140BD18B1: add     rcx, r15
 * 0000000140BD18B4: cmp     r15, rcx
 * 0000000140BD18B7: jnb     short loc_140BD18C9
 * 0000000140BD18B9: mov     edx, 40h ; '@'
 * 0000000140BD18BE: prefetchnta byte ptr [rax]
 * 0000000140BD18C1: add     rax, rdx
 * 0000000140BD18C4: cmp     rax, rcx
 * 0000000140BD18C7: jb      short loc_140BD18BE
 * 0000000140BD18C9: mov     r10d, ebx
 * 0000000140BD18CC: mov     r13, r11
 * 0000000140BD18CF: shr     r10d, 7
 * 0000000140BD18D3: test    r10d, r10d
 * 0000000140BD18D6: jz      short loc_140BD194D
 * 0000000140BD18D8: mov     edi, 1
 * 0000000140BD18DD: mov     rsi, 7010008004002001h
 * 0000000140BD18E7: mov     r12d, 0FFFFFFFFh
 * 0000000140BD18ED: mov     eax, 8
 * 0000000140BD18F2: xor     r13, [r8]
 * 0000000140BD18F5: mov     ecx, r9d
 * 0000000140BD18F8: rol     r13, cl
 * 0000000140BD18FB: xor     r13, [r8+8]
 * 0000000140BD18FF: add     r8, 10h
 * 0000000140BD1903: rol     r13, cl
 * 0000000140BD1906: sub     rax, rdi
 * 0000000140BD1909: jnz     short loc_140BD18F2
 * 0000000140BD190B: mov     rcx, r8
 * 0000000140BD190E: sub     rcx, r15
 * 0000000140BD1911: xor     rcx, r11
 * 0000000140BD1914: mov     rax, rcx
 * 0000000140BD1917: rol     rax, 11h
 * 0000000140BD191B: xor     rcx, rax
 * 0000000140BD191E: mov     rax, rsi
 * 0000000140BD1921: mul     rcx
 * 0000000140BD1924: xor     r9d, edx
 * 0000000140BD1927: mov     [rbp+8D0h+var_4D0], rdx
 * 0000000140BD192E: xor     r9d, eax
 * 0000000140BD1931: and     r9d, 3Fh
 * 0000000140BD1935: cmovz   r9d, edi
 * 0000000140BD1939: add     r10d, r12d
 * 0000000140BD193C: jnz     short loc_140BD18ED
 * 0000000140BD193E: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BD1943: mov     r12, [rsp+9D0h+var_968]
 * 0000000140BD1948: mov     rdi, [rsp+9D0h+var_978]
 * 0000000140BD194D: mov     edx, ebx
 * 0000000140BD194F: mov     r10d, 1
 * 0000000140BD1955: and     edx, 7Fh
 * 0000000140BD1958: cmp     edx, 8
 * 0000000140BD195B: jb      short loc_140BD1978
 * 0000000140BD195D: mov     eax, edx
 * 0000000140BD195F: shr     rax, 3
 * 0000000140BD1963: xor     r13, [r8]
 * 0000000140BD1966: mov     ecx, r9d
 * 0000000140BD1969: rol     r13, cl
 * 0000000140BD196C: add     r8, 8
 * 0000000140BD1970: add     edx, 0FFFFFFF8h
 * 0000000140BD1973: sub     rax, r10
 * 0000000140BD1976: jnz     short loc_140BD1963
 * 0000000140BD1978: xor     r11d, r11d
 * 0000000140BD197B: test    edx, edx
 * 0000000140BD197D: jz      short loc_140BD199D
 * 0000000140BD197F: mov     edi, 0FFFFFFFFh
 * 0000000140BD1984: movzx   eax, byte ptr [r8]
 * 0000000140BD1988: mov     ecx, r9d
 * 0000000140BD198B: xor     r13, rax
 * 0000000140BD198E: add     r8, r10
 * 0000000140BD1991: rol     r13, cl
 * 0000000140BD1994: add     edx, edi
 * 0000000140BD1996: jnz     short loc_140BD1984
 * 0000000140BD1998: mov     rdi, [rsp+9D0h+var_978]
 * 0000000140BD199D: mov     rax, r13
 * 0000000140BD19A0: jmp     short loc_140BD19A5
 * 0000000140BD19A2: xor     r13d, eax
 * 0000000140BD19A5: shr     rax, 1Fh
 * 0000000140BD19A9: test    rax, rax
 * 0000000140BD19AC: jnz     short loc_140BD19A2
 * 0000000140BD19AE: btr     r13d, 1Fh
 * 0000000140BD19B3: jmp     loc_140BD1D23
 * 0000000140BD19B8: mov     r8d, ebx
 * 0000000140BD19BB: mov     rdx, r15
 * 0000000140BD19BE: mov     rcx, rsi
 * 0000000140BD19C1: call    sub_140BDA680
 * 0000000140BD19C6: mov     r13d, eax
 * 0000000140BD19C9: xor     r11d, r11d
 * 0000000140BD19CC: mov     eax, [rsi+848h]
 * 0000000140BD19D2: lea     ecx, [rax+rbx*8]
 * 0000000140BD19D5: mov     [rsi+848h], ecx
 * 0000000140BD19DB: test    dword ptr [rsi+9DCh], 800h
 * 0000000140BD19E5: jz      loc_140BD1D23
 * 0000000140BD19EB: mov     al, [r15-1]
 * 0000000140BD19EF: cmp     byte ptr [r15-6], 4Ch ; 'L'
 * 0000000140BD19F4: jnz     loc_140BD1BF7
 * 0000000140BD19FA: cmp     byte ptr [r15-5], 87h
 * 0000000140BD19FF: jnz     loc_140BD1BF7
 * 0000000140BD1A05: cmp     [r15-4], r11b
 * 0000000140BD1A09: jnz     loc_140BD1BF7
 * 0000000140BD1A0F: cmp     byte ptr [r15-3], 98h
 * 0000000140BD1A14: jnz     loc_140BD1BF7
 * 0000000140BD1A1A: cmp     byte ptr [r15-2], 0C3h
 * 0000000140BD1A1F: jnz     loc_140BD1BF7
 * 0000000140BD1A25: cmp     al, 90h
 * 0000000140BD1A27: jz      short loc_140BD1A31
 * 0000000140BD1A29: cmp     al, 0F1h
 * 0000000140BD1A2B: jnz     loc_140BD1BF7
 * 0000000140BD1A31: mov     rcx, [rsi+4D8h]
 * 0000000140BD1A38: cli
 * 0000000140BD1A39: mov     eax, [rsi+9D8h]
 * 0000000140BD1A3F: shr     eax, 9
 * 0000000140BD1A42: and     eax, 1Fh
 * 0000000140BD1A45: lock bts [rcx], eax
 * 0000000140BD1A49: jnb     short loc_140BD1A50
 * 0000000140BD1A4B: sti
 * 0000000140BD1A4C: pause
 * 0000000140BD1A4E: jmp     short loc_140BD1A38
 * 0000000140BD1A50: mov     rdx, [rsi+900h]
 * 0000000140BD1A57: mov     r8d, 26h ; '&'
 * 0000000140BD1A5D: mov     ecx, 130h
 * 0000000140BD1A62: mov     rax, rdx
 * 0000000140BD1A65: lea     r9d, [r8-25h]
 * 0000000140BD1A69: mov     [rax], r11
 * 0000000140BD1A6C: add     ecx, 0FFFFFFF8h
 * 0000000140BD1A6F: add     rax, 8
 * 0000000140BD1A73: sub     r8, r9
 * 0000000140BD1A76: jnz     short loc_140BD1A69
 * 0000000140BD1A78: test    ecx, ecx
 * 0000000140BD1A7A: jz      short loc_140BD1A8D
 * 0000000140BD1A7C: mov     r8d, 0FFFFFFFFh
 * 0000000140BD1A82: mov     [rax], r11b
 * 0000000140BD1A85: add     rax, r9
 * 0000000140BD1A88: add     ecx, r8d
 * 0000000140BD1A8B: jnz     short loc_140BD1A82
 * 0000000140BD1A8D: movups  xmm0, xmmword ptr [rsi+868h]
 * 0000000140BD1A94: mov     eax, 12Fh
 * 0000000140BD1A99: movdqu  xmmword ptr [rdx+10h], xmm0
 * 0000000140BD1A9E: movups  xmm1, xmmword ptr [rsi+878h]
 * 0000000140BD1AA5: movdqu  xmmword ptr [rdx+20h], xmm1
 * 0000000140BD1AAA: movups  xmm0, xmmword ptr [rsi+888h]
 * 0000000140BD1AB1: movdqu  xmmword ptr [rdx+120h], xmm0
 * 0000000140BD1AB9: mov     word ptr [rbp+8D0h+var_740], ax
 * 0000000140BD1AC0: lea     rax, [rsi+8ACh]
 * 0000000140BD1AC7: mov     [rbp+192h], rdx
 * 0000000140BD1ACE: mov     rcx, rax
 * 0000000140BD1AD1: mov     [rdx+10h], ax
 * 0000000140BD1AD5: shr     rcx, 10h
 * 0000000140BD1AD9: mov     [rbp+8D0h+var_4C8], rax
 * 0000000140BD1AE0: shr     rax, 20h
 * 0000000140BD1AE4: mov     [rdx+16h], cx
 * 0000000140BD1AE8: mov     [rdx+18h], eax
 * 0000000140BD1AEB: sidt    fword ptr [rbp+8D0h+var_688]
 * 0000000140BD1AF2: lidt    fword ptr [rbp+8D0h+var_740]
 * 0000000140BD1AF9: mov     byte ptr [r15-1], 0F1h
 * 0000000140BD1AFE: mov     al, [r15-1]
 * 0000000140BD1B02: cmp     al, 0F1h
 * 0000000140BD1B04: jnz     loc_140BD1BB0
 * 0000000140BD1B0A: test    dword ptr [rsi+9DCh], 20000h
 * 0000000140BD1B14: jnz     short loc_140BD1B58
 * 0000000140BD1B16: mov     rdx, gs:20h
 * 0000000140BD1B1F: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140BD1B29: mov     rax, [rsi+4B8h]
 * 0000000140BD1B30: add     rcx, rsi
 * 0000000140BD1B33: mov     [rax], rcx
 * 0000000140BD1B36: mov     rax, [rsi+4C0h]
 * 0000000140BD1B3D: mov     [rax], rdx
 * 0000000140BD1B40: mov     rax, [rsi+4C8h]
 * 0000000140BD1B47: mov     [rax], r15
 * 0000000140BD1B4A: mov     rax, [rsi+4D0h]
 * 0000000140BD1B51: mov     qword ptr [rax], 113h
 * 0000000140BD1B58: lea     rax, [r15-1]
 * 0000000140BD1B5C: call    KeGuardDispatchICall
 * 0000000140BD1B61: xor     r11d, r11d
 * 0000000140BD1B64: test    dword ptr [rsi+9DCh], 20000h
 * 0000000140BD1B6E: jnz     short loc_140BD1BA2
 * 0000000140BD1B70: mov     rax, [rsi+4B8h]
 * 0000000140BD1B77: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140BD1B81: mov     [rax], rcx
 * 0000000140BD1B84: mov     rax, [rsi+4C0h]
 * 0000000140BD1B8B: mov     [rax], r11
 * 0000000140BD1B8E: mov     rax, [rsi+4C8h]
 * 0000000140BD1B95: mov     [rax], r11
 * 0000000140BD1B98: mov     rax, [rsi+4D0h]
 * 0000000140BD1B9F: mov     [rax], r11
 * 0000000140BD1BA2: mov     al, [r15-1]
 * 0000000140BD1BA6: mov     r9d, 1
 * 0000000140BD1BAC: cmp     al, 0F1h
 * 0000000140BD1BAE: jz      short loc_140BD1BB5
 * 0000000140BD1BB0: mov     r8d, r11d
 * 0000000140BD1BB3: jmp     short loc_140BD1BC7
 * 0000000140BD1BB5: mov     byte ptr [r15-1], 90h
 * 0000000140BD1BBA: mov     r8d, r9d
 * 0000000140BD1BBD: mov     al, [r15-1]
 * 0000000140BD1BC1: cmp     al, 90h
 * 0000000140BD1BC3: cmovnz  r8d, r11d
 * 0000000140BD1BC7: lidt    fword ptr [rbp+8D0h+var_688]
 * 0000000140BD1BCE: mov     ecx, [rsi+9D8h]
 * 0000000140BD1BD4: mov     eax, r9d
 * 0000000140BD1BD7: mov     rdx, [rsi+4D8h]
 * 0000000140BD1BDE: shr     ecx, 9
 * 0000000140BD1BE1: and     ecx, 1Fh
 * 0000000140BD1BE4: shl     eax, cl
 * 0000000140BD1BE6: not     eax
 * 0000000140BD1BE8: lock and [rdx], eax
 * 0000000140BD1BEB: sti
 * 0000000140BD1BEC: test    r8d, r8d
 * 0000000140BD1BEF: jnz     loc_140BD1D23
 * 0000000140BD1BF5: jmp     short loc_140BD1BFD
 * 0000000140BD1BF7: mov     r9d, 1
 * 0000000140BD1BFD: cmp     [rsi+918h], r11d
 * 0000000140BD1C04: jnz     loc_140BD1D23
 * 0000000140BD1C0A: mov     rcx, [rsp+9D0h+var_980]
 * 0000000140BD1C0F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BD1C19: add     rax, rsi
 * 0000000140BD1C1C: mov     [rsi+920h], rax
 * 0000000140BD1C23: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BD1C2D: add     rax, rcx
 * 0000000140BD1C30: mov     [rsi+928h], rax
 * 0000000140BD1C37: movsxd  rax, dword ptr [rcx]
 * 0000000140BD1C3A: mov     [rsi+930h], rax
 * 0000000140BD1C41: lea     rax, [r15-6]
 * 0000000140BD1C45: mov     [rsi+938h], rax
 * 0000000140BD1C4C: mov     [rsi+918h], r9d
 * 0000000140BD1C53: mov     ecx, [rsi+9D8h]
 * 0000000140BD1C59: bt      ecx, 1Dh
 * 0000000140BD1C5D: jb      loc_140BD1D23
 * 0000000140BD1C63: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BD1C6D: jz      loc_140BD1D23
 * 0000000140BD1C73: test    r9b, cl
 * 0000000140BD1C76: jz      loc_140BD1D23
 * 0000000140BD1C7C: mov     ecx, [rsi+0A74h]
 * 0000000140BD1C82: mov     eax, [rsi+804h]
 * 0000000140BD1C88: mov     r10, [rsi+838h]
 * 0000000140BD1C8F: sub     eax, ecx
 * 0000000140BD1C91: mov     r8, [rsi+0A78h]
 * 0000000140BD1C98: lea     rdx, [rcx+rsi]
 * 0000000140BD1C9C: mov     ecx, eax
 * 0000000140BD1C9E: shr     rcx, 3
 * 0000000140BD1CA2: lea     r9, [rdx+rcx*8]
 * 0000000140BD1CA6: jmp     short loc_140BD1CC9
 * 0000000140BD1CA8: xor     [rdx], r8
 * 0000000140BD1CAB: mov     rax, [rdx]
 * 0000000140BD1CAE: movzx   ecx, r8b
 * 0000000140BD1CB2: xor     rax, r10
 * 0000000140BD1CB5: and     ecx, 3Fh
 * 0000000140BD1CB8: ror     r8, cl
 * 0000000140BD1CBB: add     r8, rax
 * 0000000140BD1CBE: xor     r8, 0EFAh
 * 0000000140BD1CC5: add     rdx, 8
 * 0000000140BD1CC9: cmp     rdx, r9
 * 0000000140BD1CCC: jnz     short loc_140BD1CA8
 * 0000000140BD1CCE: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BD1CD6: cmp     r8, [rsi+0A80h]
 * 0000000140BD1CDD: jz      short loc_140BD1D23
 * 0000000140BD1CDF: mov     ecx, [rsi+804h]
 * 0000000140BD1CE5: mov     rax, [rsi+588h]
 * 0000000140BD1CEC: mov     [rax], rsi
 * 0000000140BD1CEF: mov     [rax+10h], ecx
 * 0000000140BD1CF2: mov     rcx, [rsi+0A80h]
 * 0000000140BD1CF9: cmp     [rsi+918h], r11d
 * 0000000140BD1D00: jnz     short loc_140BD1D10
 * 0000000140BD1D02: mov     rax, [rsi+588h]
 * 0000000140BD1D09: xor     rcx, r8
 * 0000000140BD1D0C: mov     [rax+18h], rcx
 * 0000000140BD1D10: xor     edx, edx
 * 0000000140BD1D12: mov     r9d, 100h
 * 0000000140BD1D18: mov     rcx, rsi
 * 0000000140BD1D1B: call    sub_140BDA384
 * 0000000140BD1D20: xor     r11d, r11d
 * 0000000140BD1D23: mov     eax, [r12]
 * 0000000140BD1D27: btr     eax, 1Fh
 * 0000000140BD1D2B: cmp     r13d, eax
 * 0000000140BD1D2E: jz      loc_140BD1DD4
 * 0000000140BD1D34: mov     ecx, ebx
 * 0000000140BD1D36: test    ebx, ebx
 * 0000000140BD1D38: jz      loc_140BD1E52
 * 0000000140BD1D3E: mov     eax, [rsi+9DCh]
 * 0000000140BD1D44: mov     edx, 40h ; '@'
 * 0000000140BD1D49: test    dl, al
 * 0000000140BD1D4B: jz      loc_140BD1E52
 * 0000000140BD1D51: mov     r14, cr8
 * 0000000140BD1D55: mov     rbx, r15
 * 0000000140BD1D58: lea     r12, [r15-1]
 * 0000000140BD1D5C: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140BD1D63: add     r12, rcx
 * 0000000140BD1D66: or      r12, 0FFFh
 * 0000000140BD1D6D: lea     r15, [rbx-1]
 * 0000000140BD1D71: mov     eax, 2
 * 0000000140BD1D76: mov     cr8, rax
 * 0000000140BD1D7A: mov     rax, [rsi+468h]
 * 0000000140BD1D81: xor     edx, edx
 * 0000000140BD1D83: mov     rcx, rbx
 * 0000000140BD1D86: call    KeGuardDispatchICall
 * 0000000140BD1D8B: cmp     eax, 0C000022Dh
 * 0000000140BD1D90: jnz     short loc_140BD1DA8
 * 0000000140BD1D92: mov     eax, 1
 * 0000000140BD1D97: cmp     r14b, al
 * 0000000140BD1D9A: ja      short loc_140BD1DB3
 * 0000000140BD1D9C: movzx   eax, r14b
 * 0000000140BD1DA0: mov     cr8, rax
 * 0000000140BD1DA4: mov     al, [rbx]
 * 0000000140BD1DA6: jmp     short loc_140BD1D71
 * 0000000140BD1DA8: xor     r11d, r11d
 * 0000000140BD1DAB: test    eax, eax
 * 0000000140BD1DAD: js      loc_140BD1E3D
 * 0000000140BD1DB3: mov     eax, 1000h
 * 0000000140BD1DB8: add     rbx, rax
 * 0000000140BD1DBB: add     r15, rax
 * 0000000140BD1DBE: cmp     r15, r12
 * 0000000140BD1DC1: jnz     short loc_140BD1D7A
 * 0000000140BD1DC3: movzx   eax, r14b
 * 0000000140BD1DC7: mov     cr8, rax
 * 0000000140BD1DCB: mov     r14, [rbp+8D0h+var_940]
 * 0000000140BD1DCF: mov     r12, [rsp+9D0h+var_968]
 * 0000000140BD1DD4: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BD1DD9: xor     r15d, r15d
 * 0000000140BD1DDC: add     r12, 4
 * 0000000140BD1DE0: add     r14, 0Ch
 * 0000000140BD1DE4: mov     [rsp+9D0h+var_968], r12
 * 0000000140BD1DE9: mov     [rbp+8D0h+var_940], r14
 * 0000000140BD1DED: cmp     r14, rdi
 * 0000000140BD1DF0: jnb     short loc_140BD1E08
 * 0000000140BD1DF2: mov     eax, [rsi+84Ch]
 * 0000000140BD1DF8: mov     r10d, [rbp+8D0h+var_948]
 * 0000000140BD1DFC: cmp     [rsi+848h], eax
 * 0000000140BD1E02: jl      loc_140BD186D
 * 0000000140BD1E08: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BD1E0F: cmp     r14, [rsp+9D0h+var_978]
 * 0000000140BD1E14: jz      loc_140BD1FA7
 * 0000000140BD1E1A: sub     r14, [rbp+8D0h+var_900]
 * 0000000140BD1E1E: mov     rax, 2AAAAAAAAAAAAAABh
 * 0000000140BD1E28: imul    r14
 * 0000000140BD1E2B: sar     rdx, 1
 * 0000000140BD1E2E: mov     rax, rdx
 * 0000000140BD1E31: shr     rax, 3Fh
 * 0000000140BD1E35: add     rdx, rax
 * 0000000140BD1E38: jmp     loc_140BD21C2
 * 0000000140BD1E3D: movzx   eax, r14b
 * 0000000140BD1E41: mov     cr8, rax
 * 0000000140BD1E45: mov     r15, [rbp+8D0h+var_950]
 * 0000000140BD1E49: mov     r14, [rbp+8D0h+var_940]
 * 0000000140BD1E4D: mov     r12, [rsp+9D0h+var_968]
 * 0000000140BD1E52: mov     eax, [r12]
 * 0000000140BD1E56: btr     eax, 1Fh
 * 0000000140BD1E5A: cmp     [rsi+918h], r11d
 * 0000000140BD1E61: jnz     loc_140BD1DD4
 * 0000000140BD1E67: mov     ecx, r13d
 * 0000000140BD1E6A: xor     rcx, rax
 * 0000000140BD1E6D: mov     rax, [rsi+588h]
 * 0000000140BD1E74: mov     [rax+18h], rcx
 * 0000000140BD1E78: cmp     [rsi+918h], r11d
 * 0000000140BD1E7F: jnz     loc_140BD1DD4
 * 0000000140BD1E85: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BD1E8A: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BD1E94: add     rax, rsi
 * 0000000140BD1E97: mov     ebx, 1
 * 0000000140BD1E9C: mov     [rsi+920h], rax
 * 0000000140BD1EA3: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BD1EAD: add     rax, r13
 * 0000000140BD1EB0: mov     [rsi+928h], rax
 * 0000000140BD1EB7: movsxd  rax, dword ptr [r13+0]
 * 0000000140BD1EBB: mov     [rsi+930h], rax
 * 0000000140BD1EC2: mov     [rsi+938h], r15
 * 0000000140BD1EC9: mov     [rsi+918h], ebx
 * 0000000140BD1ECF: mov     ecx, [rsi+9D8h]
 * 0000000140BD1ED5: bt      ecx, 1Dh
 * 0000000140BD1ED9: jb      loc_140BD1DD9
 * 0000000140BD1EDF: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BD1EE9: jz      loc_140BD1DD9
 * 0000000140BD1EEF: test    bl, cl
 * 0000000140BD1EF1: jz      loc_140BD1DD9
 * 0000000140BD1EF7: mov     ecx, [rsi+0A74h]
 * 0000000140BD1EFD: mov     eax, [rsi+804h]
 * 0000000140BD1F03: mov     r10, [rsi+838h]
 * 0000000140BD1F0A: sub     eax, ecx
 * 0000000140BD1F0C: mov     r8, [rsi+0A78h]
 * 0000000140BD1F13: lea     rdx, [rcx+rsi]
 * 0000000140BD1F17: mov     ecx, eax
 * 0000000140BD1F19: shr     rcx, 3
 * 0000000140BD1F1D: lea     r9, [rdx+rcx*8]
 * 0000000140BD1F21: jmp     short loc_140BD1F44
 * 0000000140BD1F23: xor     [rdx], r8
 * 0000000140BD1F26: mov     rax, [rdx]
 * 0000000140BD1F29: movzx   ecx, r8b
 * 0000000140BD1F2D: xor     rax, r10
 * 0000000140BD1F30: and     ecx, 3Fh
 * 0000000140BD1F33: ror     r8, cl
 * 0000000140BD1F36: add     r8, rax
 * 0000000140BD1F39: xor     r8, 0EFAh
 * 0000000140BD1F40: add     rdx, 8
 * 0000000140BD1F44: cmp     rdx, r9
 * 0000000140BD1F47: jnz     short loc_140BD1F23
 * 0000000140BD1F49: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BD1F51: cmp     r8, [rsi+0A80h]
 * 0000000140BD1F58: jz      loc_140BD1DD9
 * 0000000140BD1F5E: mov     ecx, [rsi+804h]
 * 0000000140BD1F64: xor     r15d, r15d
 * 0000000140BD1F67: mov     rax, [rsi+588h]
 * 0000000140BD1F6E: mov     [rax], rsi
 * 0000000140BD1F71: mov     [rax+10h], ecx
 * 0000000140BD1F74: mov     rcx, [rsi+0A80h]
 * 0000000140BD1F7B: cmp     [rsi+918h], r15d
 * 0000000140BD1F82: jnz     short loc_140BD1F92
 * 0000000140BD1F84: mov     rax, [rsi+588h]
 * 0000000140BD1F8B: xor     rcx, r8
 * 0000000140BD1F8E: mov     [rax+18h], rcx
 * 0000000140BD1F92: xor     edx, edx
 * 0000000140BD1F94: mov     r9d, 100h
 * 0000000140BD1F9A: mov     rcx, rsi
 * 0000000140BD1F9D: call    sub_140BDA384
 * 0000000140BD1FA2: jmp     loc_140BD1DDC
 * 0000000140BD1FA7: mov     rcx, [rsi+538h]
 * 0000000140BD1FAE: mov     rbx, cr8
 * 0000000140BD1FB2: mov     eax, 0Fh
 * 0000000140BD1FB7: mov     cr8, rax
 * 0000000140BD1FBB: mov     rax, [rsi+160h]
 * 0000000140BD1FC2: call    KeGuardDispatchICall
 * 0000000140BD1FC7: mov     rax, [rsi+620h]
 * 0000000140BD1FCE: mov     rcx, [rax]
 * 0000000140BD1FD1: mov     eax, [rcx]
 * 0000000140BD1FD3: lea     r15, [rcx+10h]
 * 0000000140BD1FD7: mov     r14b, [rcx+0Ch]
 * 0000000140BD1FDB: lea     rcx, [rax+rax*2]
 * 0000000140BD1FDF: lea     r12, [r15+rcx*8]
 * 0000000140BD1FE3: mov     edx, 18h
 * 0000000140BD1FE8: lea     r8, [r13+18h]
 * 0000000140BD1FEC: mov     r9, r15
 * 0000000140BD1FEF: mov     rcx, [r9]
 * 0000000140BD1FF2: add     r9, 8
 * 0000000140BD1FF6: mov     rax, [r8]
 * 0000000140BD1FF9: add     r8, 8
 * 0000000140BD1FFD: cmp     rcx, rax
 * 0000000140BD2000: jnz     short loc_140BD202F
 * 0000000140BD2002: add     edx, 0FFFFFFF8h
 * 0000000140BD2005: cmp     edx, 8
 * 0000000140BD2008: jnb     short loc_140BD1FEF
 * 0000000140BD200A: test    edx, edx
 * 0000000140BD200C: jz      short loc_140BD2038
 * 0000000140BD200E: mov     r11d, 1
 * 0000000140BD2014: mov     cl, [r9]
 * 0000000140BD2017: add     r9, r11
 * 0000000140BD201A: mov     al, [r8]
 * 0000000140BD201D: add     r8, r11
 * 0000000140BD2020: cmp     cl, al
 * 0000000140BD2022: jnz     short loc_140BD202F
 * 0000000140BD2024: mov     eax, 0FFFFFFFFh
 * 0000000140BD2029: add     edx, eax
 * 0000000140BD202B: jnz     short loc_140BD2014
 * 0000000140BD202D: jmp     short loc_140BD2038
 * 0000000140BD202F: add     r15, 18h
 * 0000000140BD2033: cmp     r15, r12
 * 0000000140BD2036: jb      short loc_140BD1FE3
 * 0000000140BD2038: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BD203D: mov     rcx, [rsi+538h]
 * 0000000140BD2044: mov     rax, [rsi+1A0h]
 * 0000000140BD204B: call    KeGuardDispatchICall
 * 0000000140BD2050: movzx   eax, bl
 * 0000000140BD2053: mov     cr8, rax
 * 0000000140BD2057: xor     r11d, r11d
 * 0000000140BD205A: test    r14b, r14b
 * 0000000140BD205D: jz      loc_140BD21D2
 * 0000000140BD2063: mov     eax, [rsi+9DCh]
 * 0000000140BD2069: lea     ecx, [r11+10h]
 * 0000000140BD206D: test    cl, al
 * 0000000140BD206F: jz      loc_140BD21B1
 * 0000000140BD2075: cmp     [rsi+918h], r11d
 * 0000000140BD207C: jnz     loc_140BD21B1
 * 0000000140BD2082: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BD208C: add     rax, rsi
 * 0000000140BD208F: mov     [rsi+920h], rax
 * 0000000140BD2096: test    r13, r13
 * 0000000140BD2099: jz      short loc_140BD20AA
 * 0000000140BD209B: mov     rcx, 0B3B74BDEE4453415h
 * 0000000140BD20A5: add     rcx, r13
 * 0000000140BD20A8: jmp     short loc_140BD20AD
 * 0000000140BD20AA: mov     rcx, r11
 * 0000000140BD20AD: mov     [rsi+928h], rcx
 * 0000000140BD20B4: mov     rcx, rsi
 * 0000000140BD20B7: mov     edx, 930h
 * 0000000140BD20BC: test    r13, r13
 * 0000000140BD20BF: jz      short loc_140BD20C7
 * 0000000140BD20C1: movsxd  rax, dword ptr [r13+0]
 * 0000000140BD20C5: jmp     short loc_140BD20CA
 * 0000000140BD20C7: mov     rax, r11
 * 0000000140BD20CA: mov     [rdx+rcx], rax
 * 0000000140BD20CE: mov     ebx, 1
 * 0000000140BD20D3: mov     [rsi+938h], rbx
 * 0000000140BD20DA: mov     [rsi+918h], ebx
 * 0000000140BD20E0: mov     ecx, [rsi+9D8h]
 * 0000000140BD20E6: bt      ecx, 1Dh
 * 0000000140BD20EA: jb      loc_140BD21B6
 * 0000000140BD20F0: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BD20FA: jz      loc_140BD21B6
 * 0000000140BD2100: test    bl, cl
 * 0000000140BD2102: jz      loc_140BD21B6
 * 0000000140BD2108: mov     ecx, [rsi+0A74h]
 * 0000000140BD210E: mov     eax, [rsi+804h]
 * 0000000140BD2114: mov     r10, [rsi+838h]
 * 0000000140BD211B: sub     eax, ecx
 * 0000000140BD211D: mov     r8, [rsi+0A78h]
 * 0000000140BD2124: lea     rdx, [rcx+rsi]
 * 0000000140BD2128: mov     ecx, eax
 * 0000000140BD212A: shr     rcx, 3
 * 0000000140BD212E: lea     r9, [rdx+rcx*8]
 * 0000000140BD2132: jmp     short loc_140BD2155
 * 0000000140BD2134: xor     [rdx], r8
 * 0000000140BD2137: mov     rax, [rdx]
 * 0000000140BD213A: movzx   ecx, r8b
 * 0000000140BD213E: xor     rax, r10
 * 0000000140BD2141: and     ecx, 3Fh
 * 0000000140BD2144: ror     r8, cl
 * 0000000140BD2147: add     r8, rax
 * 0000000140BD214A: xor     r8, 0EFAh
 * 0000000140BD2151: add     rdx, 8
 * 0000000140BD2155: cmp     rdx, r9
 * 0000000140BD2158: jnz     short loc_140BD2134
 * 0000000140BD215A: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BD2162: cmp     r8, [rsi+0A80h]
 * 0000000140BD2169: jz      short loc_140BD21B6
 * 0000000140BD216B: mov     ecx, [rsi+804h]
 * 0000000140BD2171: mov     rax, [rsi+588h]
 * 0000000140BD2178: mov     [rax], rsi
 * 0000000140BD217B: mov     [rax+10h], ecx
 * 0000000140BD217E: mov     rcx, [rsi+0A80h]
 * 0000000140BD2185: cmp     [rsi+918h], r11d
 * 0000000140BD218C: jnz     short loc_140BD219C
 * 0000000140BD218E: mov     rax, [rsi+588h]
 * 0000000140BD2195: xor     rcx, r8
 * 0000000140BD2198: mov     [rax+18h], rcx
 * 0000000140BD219C: xor     edx, edx
 * 0000000140BD219E: mov     r9d, 100h
 * 0000000140BD21A4: mov     rcx, rsi
 * 0000000140BD21A7: call    sub_140BDA384
 * 0000000140BD21AC: xor     r11d, r11d
 * 0000000140BD21AF: jmp     short loc_140BD21B6
 * 0000000140BD21B1: mov     ebx, 1
 * 0000000140BD21B6: cmp     [r13+18h], rbx
 * 0000000140BD21BA: jnz     short loc_140BD21D7
 * 0000000140BD21BC: xor     r15d, r15d
 * 0000000140BD21BF: mov     edx, r15d
 * 0000000140BD21C2: mov     ecx, 844h
 * 0000000140BD21C7: mov     rax, rsi
 * 0000000140BD21CA: mov     [rcx+rax], edx
 * 0000000140BD21CD: jmp     loc_140BC5B58
 * 0000000140BD21D2: mov     ebx, 1
 * 0000000140BD21D7: cmp     r15, r12
 * 0000000140BD21DA: jnz     short loc_140BD21BC
 * 0000000140BD21DC: cmp     [rsi+918h], r11d
 * 0000000140BD21E3: jnz     short loc_140BD21BC
 * 0000000140BD21E5: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BD21EF: add     rax, rsi
 * 0000000140BD21F2: mov     [rsi+920h], rax
 * 0000000140BD21F9: test    r13, r13
 * 0000000140BD21FC: jz      short loc_140BD220D
 * 0000000140BD21FE: mov     rcx, 0B3B74BDEE4453415h
 * 0000000140BD2208: add     rcx, r13
 * 0000000140BD220B: jmp     short loc_140BD2210
 * 0000000140BD220D: mov     rcx, r11
 * 0000000140BD2210: mov     [rsi+928h], rcx
 * 0000000140BD2217: mov     rcx, rsi
 * 0000000140BD221A: mov     edx, 930h
 * 0000000140BD221F: test    r13, r13
 * 0000000140BD2222: jz      short loc_140BD222A
 * 0000000140BD2224: movsxd  rax, dword ptr [r13+0]
 * 0000000140BD2228: jmp     short loc_140BD222D
 * 0000000140BD222A: mov     rax, r11
 * 0000000140BD222D: mov     [rcx+rdx], rax
 * 0000000140BD2231: mov     [rsi+938h], r15
 * 0000000140BD2238: mov     [rsi+918h], ebx
 * 0000000140BD223E: mov     ecx, [rsi+9D8h]
 * 0000000140BD2244: bt      ecx, 1Dh
 * 0000000140BD2248: jb      loc_140BD21BC
 * 0000000140BD224E: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BD2258: jz      loc_140BD21BC
 * 0000000140BD225E: test    bl, cl
 * 0000000140BD2260: jz      loc_140BD21BC
 * 0000000140BD2266: mov     ecx, [rsi+0A74h]
 * 0000000140BD226C: mov     eax, [rsi+804h]
 * 0000000140BD2272: mov     r10, [rsi+838h]
 * 0000000140BD2279: sub     eax, ecx
 * 0000000140BD227B: mov     r8, [rsi+0A78h]
 * 0000000140BD2282: lea     rdx, [rcx+rsi]
 * 0000000140BD2286: mov     ecx, eax
 * 0000000140BD2288: shr     rcx, 3
 * 0000000140BD228C: lea     r9, [rdx+rcx*8]
 * 0000000140BD2290: jmp     short loc_140BD22B3
 * 0000000140BD2292: xor     [rdx], r8
 * 0000000140BD2295: mov     rax, [rdx]
 * 0000000140BD2298: movzx   ecx, r8b
 * 0000000140BD229C: xor     rax, r10
 * 0000000140BD229F: and     ecx, 3Fh
 * 0000000140BD22A2: ror     r8, cl
 * 0000000140BD22A5: add     r8, rax
 * 0000000140BD22A8: xor     r8, 0EFAh
 * 0000000140BD22AF: add     rdx, 8
 * 0000000140BD22B3: cmp     rdx, r9
 * 0000000140BD22B6: jnz     short loc_140BD2292
 * 0000000140BD22B8: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BD22C0: xor     r15d, r15d
 * 0000000140BD22C3: cmp     r8, [rsi+0A80h]
 * 0000000140BD22CA: jz      loc_140BD21BF
 * 0000000140BD22D0: mov     ecx, [rsi+804h]
 * 0000000140BD22D6: mov     rax, [rsi+588h]
 * 0000000140BD22DD: mov     [rax], rsi
 * 0000000140BD22E0: mov     [rax+10h], ecx
 * 0000000140BD22E3: mov     rcx, [rsi+0A80h]
 * 0000000140BD22EA: cmp     [rsi+918h], r15d
 * 0000000140BD22F1: jnz     short loc_140BD2301
 * 0000000140BD22F3: mov     rax, [rsi+588h]
 * 0000000140BD22FA: xor     rcx, r8
 * 0000000140BD22FD: mov     [rax+18h], rcx
 * 0000000140BD2301: xor     edx, edx
 * 0000000140BD2303: mov     r9d, 100h
 * 0000000140BD2309: mov     rcx, rsi
 * 0000000140BD230C: call    sub_140BDA384
 * 0000000140BD2311: jmp     loc_140BD21BF
 * 0000000140BD2316: mov     edx, 0FFFFFFFFh
 * 0000000140BD231B: and     r9d, 7Fh
 * 0000000140BD231F: mov     ebx, 1
 * 0000000140BD2324: cmp     r9d, 8
 * 0000000140BD2328: jb      short loc_140BD2347
 * 0000000140BD232A: mov     eax, r9d
 * 0000000140BD232D: shr     rax, 3
 * 0000000140BD2331: xor     r8, [r10]
 * 0000000140BD2334: mov     ecx, r14d
 * 0000000140BD2337: rol     r8, cl
 * 0000000140BD233A: add     r10, 8
 * 0000000140BD233E: add     r9d, 0FFFFFFF8h
 * 0000000140BD2342: sub     rax, rbx
 * 0000000140BD2345: jnz     short loc_140BD2331
 * 0000000140BD2347: xor     r15d, r15d
 * 0000000140BD234A: test    r9d, r9d
 * 0000000140BD234D: jz      short loc_140BD2364
 * 0000000140BD234F: movzx   eax, byte ptr [r10]
 * 0000000140BD2353: mov     ecx, r14d
 * 0000000140BD2356: xor     r8, rax
 * 0000000140BD2359: add     r10, rbx
 * 0000000140BD235C: rol     r8, cl
 * 0000000140BD235F: add     r9d, edx
 * 0000000140BD2362: jnz     short loc_140BD234F
 * 0000000140BD2364: mov     rcx, [r13+18h]
 * 0000000140BD2368: cmp     r8, rcx
 * 0000000140BD236B: jz      loc_140BD0398
 * 0000000140BD2371: cmp     [rsi+918h], r15d
 * 0000000140BD2378: jnz     short loc_140BD2388
 * 0000000140BD237A: mov     rax, [rsi+588h]
 * 0000000140BD2381: xor     rcx, r8
 * 0000000140BD2384: mov     [rax+18h], rcx
 * 0000000140BD2388: mov     ecx, [r13+20h]
 * 0000000140BD238C: add     rcx, rsi
 * 0000000140BD238F: cmp     [rsi+918h], r15d
 * 0000000140BD2396: jnz     loc_140BD0398
 * 0000000140BD239C: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BD23A6: add     rax, rsi
 * 0000000140BD23A9: mov     [rsi+920h], rax
 * 0000000140BD23B0: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BD23BA: add     rax, r13
 * 0000000140BD23BD: mov     [rsi+928h], rax
 * 0000000140BD23C4: movsxd  rax, dword ptr [r13+0]
 * 0000000140BD23C8: mov     [rsi+930h], rax
 * 0000000140BD23CF: mov     [rsi+938h], rcx
 * 0000000140BD23D6: mov     [rsi+918h], ebx
 * 0000000140BD23DC: mov     ecx, [rsi+9D8h]
 * 0000000140BD23E2: bt      ecx, 1Dh
 * 0000000140BD23E6: jb      loc_140BD0398
 * 0000000140BD23EC: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BD23F6: jz      loc_140BD0398
 * 0000000140BD23FC: test    bl, cl
 * 0000000140BD23FE: jz      loc_140BD0398
 * 0000000140BD2404: mov     ecx, [rsi+0A74h]
 * 0000000140BD240A: mov     eax, [rsi+804h]
 * 0000000140BD2410: mov     r10, [rsi+838h]
 * 0000000140BD2417: sub     eax, ecx
 * 0000000140BD2419: mov     r8, [rsi+0A78h]
 * 0000000140BD2420: lea     rdx, [rcx+rsi]
 * 0000000140BD2424: mov     ecx, eax
 * 0000000140BD2426: shr     rcx, 3
 * 0000000140BD242A: lea     r9, [rdx+rcx*8]
 * 0000000140BD242E: jmp     short loc_140BD2451
 * 0000000140BD2430: xor     [rdx], r8
 * 0000000140BD2433: mov     rax, [rdx]
 * 0000000140BD2436: movzx   ecx, r8b
 * 0000000140BD243A: xor     rax, r10
 * 0000000140BD243D: and     ecx, 3Fh
 * 0000000140BD2440: ror     r8, cl
 * 0000000140BD2443: add     r8, rax
 * 0000000140BD2446: xor     r8, 0EFAh
 * 0000000140BD244D: add     rdx, 8
 * 0000000140BD2451: cmp     rdx, r9
 * 0000000140BD2454: jnz     short loc_140BD2430
 * 0000000140BD2456: jmp     loc_140BCBD6B
 * 0000000140BD245B: mov     r11d, 1000h
 * 0000000140BD2461: jmp     loc_140BC4FA4
 * 0000000140BD2466: mov     [rsi+840h], ecx
 * 0000000140BD246C: cmp     [rbp+8D0h+var_8E0], r15d
 * 0000000140BD2470: jz      short loc_140BD24E1
 * 0000000140BD2472: mov     rcx, gs:20h
 * 0000000140BD247B: mov     rax, [rsi+658h]
 * 0000000140BD2482: mov     rdx, [rax+rcx]
 * 0000000140BD2486: lea     rcx, [rbp+8D0h+var_260]
 * 0000000140BD248D: mov     rax, [rsi+698h]
 * 0000000140BD2494: add     rdx, [rsi+6B8h]
 * 0000000140BD249B: mov     rbx, [rdx+rax]
 * 0000000140BD249F: mov     rax, [rsi+1A8h]
 * 0000000140BD24A6: call    KeGuardDispatchICall
 * 0000000140BD24AB: mov     rax, [rsi+440h]
 * 0000000140BD24B2: lea     rcx, [rbp+8D0h+var_78]
 * 0000000140BD24B9: call    KeGuardDispatchICall
 * 0000000140BD24BE: mov     rax, [rsi+3A8h]
 * 0000000140BD24C5: mov     rcx, rbx
 * 0000000140BD24C8: call    KeGuardDispatchICall
 * 0000000140BD24CD: mov     rax, [rsi+3B8h]
 * 0000000140BD24D4: mov     rcx, rbx
 * 0000000140BD24D7: call    KeGuardDispatchICall
 * 0000000140BD24DC: mov     ebx, 1
 * 0000000140BD24E1: mov     eax, [rsi+9D8h]
 * 0000000140BD24E7: mov     ecx, 400004h
 * 0000000140BD24EC: and     eax, ecx
 * 0000000140BD24EE: cmp     eax, ecx
 * 0000000140BD24F0: jnz     loc_140BD298F
 * 0000000140BD24F6: mov     r10, [rsi+0AB8h]
 * 0000000140BD24FD: mov     ecx, 2
 * 0000000140BD2502: mov     eax, [rsi+9DCh]
 * 0000000140BD2508: mov     r14d, [rsi+804h]
 * 0000000140BD250F: mov     r11, [rsi+0A40h]
 * 0000000140BD2516: mov     r12d, [rsi+828h]
 * 0000000140BD251D: mov     [rbp+8D0h+arg_8], r10
 * 0000000140BD2524: test    cl, al
 * 0000000140BD2526: jz      short loc_140BD252F
 * 0000000140BD2528: mov     r11, [rsi+5D0h]
 * 0000000140BD252F: mov     rax, [rsi+2C8h]
 * 0000000140BD2536: mov     r9, [rsi+170h]
 * 0000000140BD253D: mov     [rbp+8D0h+var_8D8], rax
 * 0000000140BD2541: mov     rax, [rsi+340h]
 * 0000000140BD2548: mov     [rbp+8D0h+var_8F0], rax
 * 0000000140BD254C: mov     [rbp+8D0h+var_950], r9
 * 0000000140BD2550: rdtsc
 * 0000000140BD2552: shl     rdx, 20h
 * 0000000140BD2556: mov     r13, 7010008004002001h
 * 0000000140BD2560: or      rax, rdx
 * 0000000140BD2563: mov     r8, rdi
 * 0000000140BD2566: mov     rcx, rax
 * 0000000140BD2569: ror     rax, 3
 * 0000000140BD256D: xor     rcx, rax
 * 0000000140BD2570: mov     rax, r13
 * 0000000140BD2573: mul     rcx
 * 0000000140BD2576: mov     rcx, rdx
 * 0000000140BD2579: mov     [rbp+8D0h+var_4B8], rdx
 * 0000000140BD2580: xor     rcx, rax
 * 0000000140BD2583: mov     rax, 0ABCC77118461CEFDh
 * 0000000140BD258D: mul     rcx
 * 0000000140BD2590: shr     rdx, 1Ah
 * 0000000140BD2594: imul    rax, rdx, 5F5E100h
 * 0000000140BD259B: sub     rcx, rax
 * 0000000140BD259E: sub     r8, rcx
 * 0000000140BD25A1: mov     [rbp+8D0h+var_850], r8
 * 0000000140BD25A8: test    dword ptr [rsi+9D8h], 2000000h
 * 0000000140BD25B2: jz      loc_140BD2652
 * 0000000140BD25B8: rdtsc
 * 0000000140BD25BA: shl     rdx, 20h
 * 0000000140BD25BE: or      rax, rdx
 * 0000000140BD25C1: mov     rcx, rax
 * 0000000140BD25C4: ror     rax, 3
 * 0000000140BD25C8: xor     rcx, rax
 * 0000000140BD25CB: mov     rax, r13
 * 0000000140BD25CE: mul     rcx
 * 0000000140BD25D1: mov     rcx, rdx
 * 0000000140BD25D4: mov     [rbp+8D0h+var_4B0], rdx
 * 0000000140BD25DB: xor     rcx, rax
 * 0000000140BD25DE: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 0000000140BD25E8: mul     rcx
 * 0000000140BD25EB: shr     rdx, 3
 * 0000000140BD25EF: lea     rax, [rdx+rdx*4]
 * 0000000140BD25F3: add     rax, rax
 * 0000000140BD25F6: sub     rcx, rax
 * 0000000140BD25F9: mov     eax, 2
 * 0000000140BD25FE: cmp     rcx, rax
 * 0000000140BD2601: jnb     short loc_140BD2652
 * 0000000140BD2603: rdtsc
 * 0000000140BD2605: shl     rdx, 20h
 * 0000000140BD2609: or      rax, rdx
 * 0000000140BD260C: mov     rcx, rax
 * 0000000140BD260F: ror     rax, 3
 * 0000000140BD2613: xor     rcx, rax
 * 0000000140BD2616: mov     rax, r13
 * 0000000140BD2619: mul     rcx
 * 0000000140BD261C: mov     rcx, rdx
 * 0000000140BD261F: mov     [rbp+8D0h+var_4A8], rdx
 * 0000000140BD2626: xor     rcx, rax
 * 0000000140BD2629: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 0000000140BD2633: mul     rcx
 * 0000000140BD2636: shr     rdx, 3
 * 0000000140BD263A: lea     rax, [rdx+rdx*4]
 * 0000000140BD263E: add     rax, rax
 * 0000000140BD2641: sub     rcx, rax
 * 0000000140BD2644: add     rcx, rbx
 * 0000000140BD2647: imul    rcx, r8
 * 0000000140BD264B: mov     [rbp+8D0h+var_850], rcx
 * 0000000140BD2652: mov     eax, [rsi+9D8h]
 * 0000000140BD2658: mov     r8d, 1
 * 0000000140BD265E: test    r8b, al
 * 0000000140BD2661: mov     rbx, r15
 * 0000000140BD2664: cmovz   r14d, r12d
 * 0000000140BD2668: lea     ecx, [r8+3Fh]
 * 0000000140BD266C: test    cl, al
 * 0000000140BD266E: jnz     short loc_140BD267B
 * 0000000140BD2670: xor     r8d, r8d
 * 0000000140BD2673: mov     r13d, r8d
 * 0000000140BD2676: jmp     loc_140BD274E
 * 0000000140BD267B: mov     r13d, r8d
 * 0000000140BD267E: rdtsc
 * 0000000140BD2680: shl     rdx, 20h
 * 0000000140BD2684: mov     r15, rsi
 * 0000000140BD2687: or      rax, rdx
 * 0000000140BD268A: mov     rcx, rax
 * 0000000140BD268D: ror     rax, 3
 * 0000000140BD2691: xor     rcx, rax
 * 0000000140BD2694: mov     rax, 7010008004002001h
 * 0000000140BD269E: mul     rcx
 * 0000000140BD26A1: mov     ecx, 15Dh
 * 0000000140BD26A6: mov     rbx, rdx
 * 0000000140BD26A9: mov     [rbp+8D0h+var_4A0], rdx
 * 0000000140BD26B0: xor     rbx, rax
 * 0000000140BD26B3: lea     rax, [rsi+0AE0h]
 * 0000000140BD26BA: mov     r9, rbx
 * 0000000140BD26BD: xor     r15, rbx
 * 0000000140BD26C0: xor     [rax], r9
 * 0000000140BD26C3: lea     rax, [rax-8]
 * 0000000140BD26C7: ror     r9, cl
 * 0000000140BD26CA: sub     ecx, r8d
 * 0000000140BD26CD: jnz     short loc_140BD26C0
 * 0000000140BD26CF: lea     r8, [r12-0AE8h]
 * 0000000140BD26D7: shr     r8, 3
 * 0000000140BD26DB: test    r8d, r8d
 * 0000000140BD26DE: jz      short loc_140BD2720
 * 0000000140BD26E0: movsxd  r10, r8d
 * 0000000140BD26E3: add     rsi, 0AE0h
 * 0000000140BD26EA: mov     rdi, r13
 * 0000000140BD26ED: lea     r10, [rsi+r10*8]
 * 0000000140BD26F1: mov     rdx, [r10]
 * 0000000140BD26F4: lea     rax, [r15+r15]
 * 0000000140BD26F8: mov     ecx, r8d
 * 0000000140BD26FB: lea     r10, [r10-8]
 * 0000000140BD26FF: ror     rdx, cl
 * 0000000140BD2702: mov     r15, rdx
 * 0000000140BD2705: xor     r15, rax
 * 0000000140BD2708: sub     r8d, edi
 * 0000000140BD270B: jnz     short loc_140BD26F1
 * 0000000140BD270D: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BD2712: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BD2719: mov     r10, [rbp+8D0h+arg_8]
 * 0000000140BD2720: mov     ecx, r14d
 * 0000000140BD2723: lea     rdx, [rsi+r12]
 * 0000000140BD2727: sub     ecx, r12d
 * 0000000140BD272A: shr     ecx, 3
 * 0000000140BD272D: test    ecx, ecx
 * 0000000140BD272F: jz      short loc_140BD274A
 * 0000000140BD2731: lea     rdx, [rdx+rcx*8]
 * 0000000140BD2735: mov     rax, r13
 * 0000000140BD2738: add     rdx, 0FFFFFFFFFFFFFFF8h
 * 0000000140BD273C: xor     [rdx], r9
 * 0000000140BD273F: lea     rdx, [rdx-8]
 * 0000000140BD2743: ror     r9, cl
 * 0000000140BD2746: sub     ecx, eax
 * 0000000140BD2748: jnz     short loc_140BD273C
 * 0000000140BD274A: mov     r9, [rbp+8D0h+var_950]
 * 0000000140BD274E: test    r10, r10
 * 0000000140BD2751: jz      short loc_140BD2770
 * 0000000140BD2753: mov     rax, [rbp+8D0h+var_8F0]
 * 0000000140BD2757: lea     r8, [rbp+8D0h+var_850]
 * 0000000140BD275E: mov     edx, r14d
 * 0000000140BD2761: mov     [rsp+9D0h+BugCheckParameter4], r10
 * 0000000140BD2766: mov     rcx, rsi
 * 0000000140BD2769: call    KeGuardDispatchICall
 * 0000000140BD276E: jmp     short loc_140BD27A8
 * 0000000140BD2770: xor     edx, edx
 * 0000000140BD2772: test    r11, r11
 * 0000000140BD2775: jnz     short loc_140BD278A
 * 0000000140BD2777: lea     r8, [rbp+8D0h+var_850]
 * 0000000140BD277E: xor     ecx, ecx
 * 0000000140BD2780: mov     rax, r9
 * 0000000140BD2783: call    KeGuardDispatchICall
 * 0000000140BD2788: jmp     short loc_140BD27A8
 * 0000000140BD278A: lea     rax, [rbp+8D0h+var_850]
 * 0000000140BD2791: xor     r9d, r9d
 * 0000000140BD2794: mov     [rsp+9D0h+BugCheckParameter4], rax
 * 0000000140BD2799: xor     r8d, r8d
 * 0000000140BD279C: mov     rax, [rbp+8D0h+var_8D8]
 * 0000000140BD27A0: mov     rcx, r11
 * 0000000140BD27A3: call    KeGuardDispatchICall
 * 0000000140BD27A8: xor     r11d, r11d
 * 0000000140BD27AB: test    r13d, r13d
 * 0000000140BD27AE: lea     r13d, [r11+1]
 * 0000000140BD27B2: jz      loc_140BD298A
 * 0000000140BD27B8: mov     r9, rsi
 * 0000000140BD27BB: lea     rax, [rsi+0AE0h]
 * 0000000140BD27C2: xor     r9, rbx
 * 0000000140BD27C5: mov     ecx, 15Dh
 * 0000000140BD27CA: xor     [rax], rbx
 * 0000000140BD27CD: lea     rax, [rax-8]
 * 0000000140BD27D1: ror     rbx, cl
 * 0000000140BD27D4: sub     ecx, r13d
 * 0000000140BD27D7: jnz     short loc_140BD27CA
 * 0000000140BD27D9: lea     r8, [r12-0AE8h]
 * 0000000140BD27E1: shr     r8, 3
 * 0000000140BD27E5: test    r8d, r8d
 * 0000000140BD27E8: jz      short loc_140BD2814
 * 0000000140BD27EA: movsxd  r10, r8d
 * 0000000140BD27ED: add     r10, 15Ch
 * 0000000140BD27F4: lea     r10, [rsi+r10*8]
 * 0000000140BD27F8: mov     rdx, [r10]
 * 0000000140BD27FB: lea     rax, [r9+r9]
 * 0000000140BD27FF: mov     ecx, r8d
 * 0000000140BD2802: lea     r10, [r10-8]
 * 0000000140BD2806: ror     rdx, cl
 * 0000000140BD2809: mov     r9, rdx
 * 0000000140BD280C: xor     r9, rax
 * 0000000140BD280F: sub     r8d, r13d
 * 0000000140BD2812: jnz     short loc_140BD27F8
 * 0000000140BD2814: sub     r14d, r12d
 * 0000000140BD2817: lea     rcx, [rsi+r12]
 * 0000000140BD281B: shr     r14d, 3
 * 0000000140BD281F: test    r14d, r14d
 * 0000000140BD2822: jz      short loc_140BD2840
 * 0000000140BD2824: mov     edx, r14d
 * 0000000140BD2827: dec     rdx
 * 0000000140BD282A: lea     rdx, [rcx+rdx*8]
 * 0000000140BD282E: xor     [rdx], rbx
 * 0000000140BD2831: mov     ecx, r14d
 * 0000000140BD2834: ror     rbx, cl
 * 0000000140BD2837: lea     rdx, [rdx-8]
 * 0000000140BD283B: sub     r14d, r13d
 * 0000000140BD283E: jnz     short loc_140BD282E
 * 0000000140BD2840: cmp     r9, r15
 * 0000000140BD2843: jz      loc_140BD298A
 * 0000000140BD2849: mov     rax, [rsi+588h]
 * 0000000140BD2850: mov     ecx, [rsi+804h]
 * 0000000140BD2856: mov     [rax], rsi
 * 0000000140BD2859: mov     [rax+10h], ecx
 * 0000000140BD285C: cmp     [rsi+918h], r11d
 * 0000000140BD2863: jnz     short loc_140BD2876
 * 0000000140BD2865: mov     rax, [rsi+588h]
 * 0000000140BD286C: mov     rcx, r9
 * 0000000140BD286F: xor     rcx, r15
 * 0000000140BD2872: mov     [rax+18h], rcx
 * 0000000140BD2876: xor     r15d, r15d
 * 0000000140BD2879: mov     r14, 0A3A03F5891C8B4E8h
 * 0000000140BD2883: cmp     [rsi+918h], r15d
 * 0000000140BD288A: jnz     loc_140BD299F
 * 0000000140BD2890: lea     rax, [rsi+r14]
 * 0000000140BD2894: mov     [rsi+920h], rax
 * 0000000140BD289B: mov     [rsi+928h], r15
 * 0000000140BD28A2: mov     qword ptr [rsi+930h], 10Eh
 * 0000000140BD28AD: mov     [rsi+938h], r9
 * 0000000140BD28B4: mov     [rsi+918h], r13d
 * 0000000140BD28BB: mov     ecx, [rsi+9D8h]
 * 0000000140BD28C1: bt      ecx, 1Dh
 * 0000000140BD28C5: jb      loc_140BD299F
 * 0000000140BD28CB: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BD28D5: jz      loc_140BD299F
 * 0000000140BD28DB: test    r13b, cl
 * 0000000140BD28DE: jz      loc_140BD299F
 * 0000000140BD28E4: mov     ecx, [rsi+0A74h]
 * 0000000140BD28EA: mov     eax, [rsi+804h]
 * 0000000140BD28F0: mov     r10, [rsi+838h]
 * 0000000140BD28F7: sub     eax, ecx
 * 0000000140BD28F9: mov     r8, [rsi+0A78h]
 * 0000000140BD2900: lea     rdx, [rcx+rsi]
 * 0000000140BD2904: mov     ecx, eax
 * 0000000140BD2906: shr     rcx, 3
 * 0000000140BD290A: lea     r9, [rdx+rcx*8]
 * 0000000140BD290E: jmp     short loc_140BD2931
 * 0000000140BD2910: xor     [rdx], r8
 * 0000000140BD2913: mov     rax, [rdx]
 * 0000000140BD2916: movzx   ecx, r8b
 * 0000000140BD291A: xor     rax, r10
 * 0000000140BD291D: and     ecx, 3Fh
 * 0000000140BD2920: ror     r8, cl
 * 0000000140BD2923: add     r8, rax
 * 0000000140BD2926: xor     r8, 0EFAh
 * 0000000140BD292D: add     rdx, 8
 * 0000000140BD2931: cmp     rdx, r9
 * 0000000140BD2934: jnz     short loc_140BD2910
 * 0000000140BD2936: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BD293E: cmp     r8, [rsi+0A80h]
 * 0000000140BD2945: jz      short loc_140BD299F
 * 0000000140BD2947: mov     ecx, [rsi+804h]
 * 0000000140BD294D: mov     rax, [rsi+588h]
 * 0000000140BD2954: mov     [rax], rsi
 * 0000000140BD2957: mov     [rax+10h], ecx
 * 0000000140BD295A: mov     rcx, [rsi+0A80h]
 * 0000000140BD2961: cmp     [rsi+918h], r15d
 * 0000000140BD2968: jnz     short loc_140BD2978
 * 0000000140BD296A: mov     rax, [rsi+588h]
 * 0000000140BD2971: xor     rcx, r8
 * 0000000140BD2974: mov     [rax+18h], rcx
 * 0000000140BD2978: xor     edx, edx
 * 0000000140BD297A: mov     r9d, 100h
 * 0000000140BD2980: mov     rcx, rsi
 * 0000000140BD2983: call    sub_140BDA384
 * 0000000140BD2988: jmp     short loc_140BD299F
 * 0000000140BD298A: xor     r15d, r15d
 * 0000000140BD298D: jmp     short loc_140BD2995
 * 0000000140BD298F: mov     r13d, 1
 * 0000000140BD2995: mov     r14, 0A3A03F5891C8B4E8h
 * 0000000140BD299F: test    dword ptr [rsi+9D8h], 1000000h
 * 0000000140BD29A9: jz      loc_140BD2AEE
 * 0000000140BD29AF: mov     rbx, [rsi+9E0h]
 * 0000000140BD29B6: mov     rax, [rsi+390h]
 * 0000000140BD29BD: mov     rcx, rbx
 * 0000000140BD29C0: call    KeGuardDispatchICall
 * 0000000140BD29C5: test    eax, eax
 * 0000000140BD29C7: jz      loc_140BD2AD2
 * 0000000140BD29CD: cmp     [rsi+918h], r15d
 * 0000000140BD29D4: jnz     loc_140BD2AD2
 * 0000000140BD29DA: lea     rax, [rsi+r14]
 * 0000000140BD29DE: mov     [rsi+920h], rax
 * 0000000140BD29E5: mov     [rsi+928h], r15
 * 0000000140BD29EC: mov     qword ptr [rsi+930h], 110h
 * 0000000140BD29F7: mov     [rsi+938h], r15
 * 0000000140BD29FE: mov     [rsi+918h], r13d
 * 0000000140BD2A05: mov     ecx, [rsi+9D8h]
 * 0000000140BD2A0B: bt      ecx, 1Dh
 * 0000000140BD2A0F: jb      loc_140BD2AD2
 * 0000000140BD2A15: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BD2A1F: jz      loc_140BD2AD2
 * 0000000140BD2A25: test    r13b, cl
 * 0000000140BD2A28: jz      loc_140BD2AD2
 * 0000000140BD2A2E: mov     ecx, [rsi+0A74h]
 * 0000000140BD2A34: mov     eax, [rsi+804h]
 * 0000000140BD2A3A: mov     r10, [rsi+838h]
 * 0000000140BD2A41: sub     eax, ecx
 * 0000000140BD2A43: mov     r8, [rsi+0A78h]
 * 0000000140BD2A4A: lea     rdx, [rcx+rsi]
 * 0000000140BD2A4E: mov     ecx, eax
 * 0000000140BD2A50: shr     rcx, 3
 * 0000000140BD2A54: lea     r9, [rdx+rcx*8]
 * 0000000140BD2A58: jmp     short loc_140BD2A7B
 * 0000000140BD2A5A: xor     [rdx], r8
 * 0000000140BD2A5D: mov     rax, [rdx]
 * 0000000140BD2A60: movzx   ecx, r8b
 * 0000000140BD2A64: xor     rax, r10
 * 0000000140BD2A67: and     ecx, 3Fh
 * 0000000140BD2A6A: ror     r8, cl
 * 0000000140BD2A6D: add     r8, rax
 * 0000000140BD2A70: xor     r8, 0EFAh
 * 0000000140BD2A77: add     rdx, 8
 * 0000000140BD2A7B: cmp     rdx, r9
 * 0000000140BD2A7E: jnz     short loc_140BD2A5A
 * 0000000140BD2A80: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BD2A88: cmp     r8, [rsi+0A80h]
 * 0000000140BD2A8F: jz      short loc_140BD2AD2
 * 0000000140BD2A91: mov     ecx, [rsi+804h]
 * 0000000140BD2A97: mov     rax, [rsi+588h]
 * 0000000140BD2A9E: mov     [rax], rsi
 * 0000000140BD2AA1: mov     [rax+10h], ecx
 * 0000000140BD2AA4: mov     rcx, [rsi+0A80h]
 * 0000000140BD2AAB: cmp     [rsi+918h], r15d
 * 0000000140BD2AB2: jnz     short loc_140BD2AC2
 * 0000000140BD2AB4: mov     rax, [rsi+588h]
 * 0000000140BD2ABB: xor     rcx, r8
 * 0000000140BD2ABE: mov     [rax+18h], rcx
 * 0000000140BD2AC2: xor     edx, edx
 * 0000000140BD2AC4: mov     r9d, 100h
 * 0000000140BD2ACA: mov     rcx, rsi
 * 0000000140BD2ACD: call    sub_140BDA384
 * 0000000140BD2AD2: mov     rax, [rsi+388h]
 * 0000000140BD2AD9: lea     rdx, sub_140BDC550
 * 0000000140BD2AE0: xor     r9d, r9d
 * 0000000140BD2AE3: mov     r8, rsi
 * 0000000140BD2AE6: mov     rcx, rbx
 * 0000000140BD2AE9: call    KeGuardDispatchICall
 * 0000000140BD2AEE: mov     ecx, [rsi+9D8h]
 * 0000000140BD2AF4: bt      ecx, 1Dh
 * 0000000140BD2AF8: jb      loc_140BD2BAC
 * 0000000140BD2AFE: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BD2B08: jnz     loc_140BD2BAC
 * 0000000140BD2B0E: mov     rbx, 7010008004002001h
 * 0000000140BD2B18: test    r13b, cl
 * 0000000140BD2B1B: jz      loc_140BD2BB6
 * 0000000140BD2B21: mov     ecx, [rsi+0A74h]
 * 0000000140BD2B27: mov     eax, [rsi+804h]
 * 0000000140BD2B2D: mov     r11, [rsi+838h]
 * 0000000140BD2B34: sub     eax, ecx
 * 0000000140BD2B36: lea     r9, [rcx+rsi]
 * 0000000140BD2B3A: mov     ecx, eax
 * 0000000140BD2B3C: shr     rcx, 3
 * 0000000140BD2B40: lea     r10, [r9+rcx*8]
 * 0000000140BD2B44: rdtsc
 * 0000000140BD2B46: shl     rdx, 20h
 * 0000000140BD2B4A: or      rax, rdx
 * 0000000140BD2B4D: mov     rcx, rax
 * 0000000140BD2B50: ror     rax, 3
 * 0000000140BD2B54: xor     rcx, rax
 * 0000000140BD2B57: mov     rax, rbx
 * 0000000140BD2B5A: mul     rcx
 * 0000000140BD2B5D: mov     [rbp+8D0h+var_498], rdx
 * 0000000140BD2B64: xor     rdx, rax
 * 0000000140BD2B67: mov     [rsi+0A78h], rdx
 * 0000000140BD2B6E: jmp     short loc_140BD2B96
 * 0000000140BD2B70: mov     r8, [r9]
 * 0000000140BD2B73: mov     rax, rdx
 * 0000000140BD2B76: movzx   ecx, dl
 * 0000000140BD2B79: xor     rax, r8
 * 0000000140BD2B7C: and     ecx, 3Fh
 * 0000000140BD2B7F: mov     [r9], rax
 * 0000000140BD2B82: ror     rdx, cl
 * 0000000140BD2B85: xor     r8, r11
 * 0000000140BD2B88: add     rdx, r8
 * 0000000140BD2B8B: xor     rdx, 0EFAh
 * 0000000140BD2B92: add     r9, 8
 * 0000000140BD2B96: cmp     r9, r10
 * 0000000140BD2B99: jnz     short loc_140BD2B70
 * 0000000140BD2B9B: bts     dword ptr [rsi+9DCh], 15h
 * 0000000140BD2BA3: mov     [rsi+0A80h], rdx
 * 0000000140BD2BAA: jmp     short loc_140BD2BB6
 * 0000000140BD2BAC: mov     rbx, 7010008004002001h
 * 0000000140BD2BB6: test    dword ptr [rsi+9DCh], 100h
 * 0000000140BD2BC0: jz      short loc_140BD2BCD
 * 0000000140BD2BC2: mov     rax, [rbp+8D0h+var_8D0]
 * 0000000140BD2BC6: mov     [rbp+8D8h], rax
 * 0000000140BD2BCD: mov     r8d, [rsi+9D8h]
 * 0000000140BD2BD4: bt      r8d, 11h
 * 0000000140BD2BD9: jnb     loc_140BD2D31
 * 0000000140BD2BDF: rdtsc
 * 0000000140BD2BE1: shl     rdx, 20h
 * 0000000140BD2BE5: or      rax, rdx
 * 0000000140BD2BE8: mov     rcx, rax
 * 0000000140BD2BEB: mov     rdx, rax
 * 0000000140BD2BEE: ror     rcx, 3
 * 0000000140BD2BF2: mov     rax, rbx
 * 0000000140BD2BF5: xor     rdx, rcx
 * 0000000140BD2BF8: mul     rdx
 * 0000000140BD2BFB: mov     rcx, rdx
 * 0000000140BD2BFE: mov     [rbp+8D0h+var_490], rdx
 * 0000000140BD2C05: xor     rcx, rax
 * 0000000140BD2C08: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 0000000140BD2C12: mul     rcx
 * 0000000140BD2C15: shr     rdx, 3
 * 0000000140BD2C19: lea     rax, [rdx+rdx*4]
 * 0000000140BD2C1D: add     rax, rax
 * 0000000140BD2C20: sub     rcx, rax
 * 0000000140BD2C23: mov     eax, 2
 * 0000000140BD2C28: cmp     rcx, rax
 * 0000000140BD2C2B: jnb     loc_140BD2D31
 * 0000000140BD2C31: cmp     [rsi+918h], r15d
 * 0000000140BD2C38: jnz     loc_140BD2D31
 * 0000000140BD2C3E: lea     rax, [rsi+r14]
 * 0000000140BD2C42: mov     [rsi+920h], rax
 * 0000000140BD2C49: mov     [rsi+928h], r15
 * 0000000140BD2C50: mov     qword ptr [rsi+930h], 108h
 * 0000000140BD2C5B: mov     [rsi+938h], r15
 * 0000000140BD2C62: mov     [rsi+918h], r13d
 * 0000000140BD2C69: bt      r8d, 1Dh
 * 0000000140BD2C6E: jb      loc_140BD2D31
 * 0000000140BD2C74: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BD2C7E: jz      loc_140BD2D31
 * 0000000140BD2C84: test    r13b, r8b
 * 0000000140BD2C87: jz      loc_140BD2D31
 * 0000000140BD2C8D: mov     ecx, [rsi+0A74h]
 * 0000000140BD2C93: mov     eax, [rsi+804h]
 * 0000000140BD2C99: mov     r10, [rsi+838h]
 * 0000000140BD2CA0: sub     eax, ecx
 * 0000000140BD2CA2: mov     r8, [rsi+0A78h]
 * 0000000140BD2CA9: lea     rdx, [rcx+rsi]
 * 0000000140BD2CAD: mov     ecx, eax
 * 0000000140BD2CAF: shr     rcx, 3
 * 0000000140BD2CB3: lea     r9, [rdx+rcx*8]
 * 0000000140BD2CB7: jmp     short loc_140BD2CDA
 * 0000000140BD2CB9: xor     [rdx], r8
 * 0000000140BD2CBC: mov     rax, [rdx]
 * 0000000140BD2CBF: movzx   ecx, r8b
 * 0000000140BD2CC3: xor     rax, r10
 * 0000000140BD2CC6: and     ecx, 3Fh
 * 0000000140BD2CC9: ror     r8, cl
 * 0000000140BD2CCC: add     r8, rax
 * 0000000140BD2CCF: xor     r8, 0EFAh
 * 0000000140BD2CD6: add     rdx, 8
 * 0000000140BD2CDA: cmp     rdx, r9
 * 0000000140BD2CDD: jnz     short loc_140BD2CB9
 * 0000000140BD2CDF: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BD2CE7: cmp     r8, [rsi+0A80h]
 * 0000000140BD2CEE: jz      short loc_140BD2D31
 * 0000000140BD2CF0: mov     ecx, [rsi+804h]
 * 0000000140BD2CF6: mov     rax, [rsi+588h]
 * 0000000140BD2CFD: mov     [rax], rsi
 * 0000000140BD2D00: mov     [rax+10h], ecx
 * 0000000140BD2D03: mov     rcx, [rsi+0A80h]
 * 0000000140BD2D0A: cmp     [rsi+918h], r15d
 * 0000000140BD2D11: jnz     short loc_140BD2D21
 * 0000000140BD2D13: mov     rax, [rsi+588h]
 * 0000000140BD2D1A: xor     rcx, r8
 * 0000000140BD2D1D: mov     [rax+18h], rcx
 * 0000000140BD2D21: xor     edx, edx
 * 0000000140BD2D23: mov     r9d, 100h
 * 0000000140BD2D29: mov     rcx, rsi
 * 0000000140BD2D2C: call    sub_140BDA384
 * 0000000140BD2D31: mov     eax, [rsi+9D8h]
 * 0000000140BD2D37: bt      eax, 1Dh
 * 0000000140BD2D3B: jb      short loc_140BD2DB1
 * 0000000140BD2D3D: bt      eax, 0Eh
 * 0000000140BD2D41: jb      short loc_140BD2DB1
 * 0000000140BD2D43: lea     rcx, [rsi+918h]
 * 0000000140BD2D4A: cmp     [rcx], r15d
 * 0000000140BD2D4D: jz      short loc_140BD2DB1
 * 0000000140BD2D4F: mov     rdx, [rbp+8D0h+arg_0]
 * 0000000140BD2D56: test    dword ptr [rdx+9D8h], 4000h
 * 0000000140BD2D60: jnz     short loc_140BD2D6B
 * 0000000140BD2D62: cmp     [rdx+918h], r15d
 * 0000000140BD2D69: jnz     short loc_140BD2DB1
 * 0000000140BD2D6B: mov     r8d, 28h ; '('
 * 0000000140BD2D71: add     rdx, 918h
 * 0000000140BD2D78: lea     r9d, [r8-23h]
 * 0000000140BD2D7C: mov     rax, [rcx]
 * 0000000140BD2D7F: add     r8d, 0FFFFFFF8h
 * 0000000140BD2D83: mov     [rdx], rax
 * 0000000140BD2D86: add     rcx, 8
 * 0000000140BD2D8A: add     rdx, 8
 * 0000000140BD2D8E: sub     r9, r13
 * 0000000140BD2D91: jnz     short loc_140BD2D7C
 * 0000000140BD2D93: test    r8d, r8d
 * 0000000140BD2D96: jz      short loc_140BD2DB1
 * 0000000140BD2D98: mov     esi, 0FFFFFFFFh
 * 0000000140BD2D9D: mov     al, [rcx]
 * 0000000140BD2D9F: add     rcx, r13
 * 0000000140BD2DA2: mov     [rdx], al
 * 0000000140BD2DA4: add     rdx, r13
 * 0000000140BD2DA7: add     r8d, esi
 * 0000000140BD2DAA: jnz     short loc_140BD2D9D
 * 0000000140BD2DAC: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BD2DB1: test    dword ptr [rsi+9D8h], 4000h
 * 0000000140BD2DBB: jnz     short loc_140BD2DCA
 * 0000000140BD2DBD: cmp     [rsi+918h], r15d
 * 0000000140BD2DC4: jnz     loc_140BD394B
 * 0000000140BD2DCA: mov     eax, [rsi+0A70h]
 * 0000000140BD2DD0: test    eax, eax
 * 0000000140BD2DD2: jz      loc_140BD394B
 * 0000000140BD2DD8: lea     r14, [rsi+rax]
 * 0000000140BD2DDC: mov     r11, [r14+8]
 * 0000000140BD2DE0: mov     [rsp+9D0h+var_968], r14
 * 0000000140BD2DE5: test    r11, r11
 * 0000000140BD2DE8: jz      loc_140BD316B
 * 0000000140BD2DEE: mov     r9d, [r14+10h]
 * 0000000140BD2DF2: mov     r8, r11
 * 0000000140BD2DF5: add     [rsi+848h], r9d
 * 0000000140BD2DFC: mov     rax, r11
 * 0000000140BD2DFF: mov     r10d, [rsi+834h]
 * 0000000140BD2E06: mov     r12, [rsi+838h]
 * 0000000140BD2E0D: lea     rcx, [r11+r9]
 * 0000000140BD2E11: cmp     r11, rcx
 * 0000000140BD2E14: jnb     short loc_140BD2E26
 * 0000000140BD2E16: mov     edx, 40h ; '@'
 * 0000000140BD2E1B: prefetchnta byte ptr [rax]
 * 0000000140BD2E1E: add     rax, rdx
 * 0000000140BD2E21: cmp     rax, rcx
 * 0000000140BD2E24: jb      short loc_140BD2E1B
 * 0000000140BD2E26: mov     r15d, r9d
 * 0000000140BD2E29: mov     rbx, r12
 * 0000000140BD2E2C: shr     r15d, 7
 * 0000000140BD2E30: test    r15d, r15d
 * 0000000140BD2E33: jz      short loc_140BD2E9C
 * 0000000140BD2E35: mov     rsi, 7010008004002001h
 * 0000000140BD2E3F: mov     eax, 8
 * 0000000140BD2E44: xor     rbx, [r8]
 * 0000000140BD2E47: mov     ecx, r10d
 * 0000000140BD2E4A: rol     rbx, cl
 * 0000000140BD2E4D: xor     rbx, [r8+8]
 * 0000000140BD2E51: add     r8, 10h
 * 0000000140BD2E55: rol     rbx, cl
 * 0000000140BD2E58: sub     rax, r13
 * 0000000140BD2E5B: jnz     short loc_140BD2E44
 * 0000000140BD2E5D: mov     rcx, r8
 * 0000000140BD2E60: sub     rcx, r11
 * 0000000140BD2E63: xor     rcx, r12
 * 0000000140BD2E66: mov     rax, rcx
 * 0000000140BD2E69: rol     rax, 11h
 * 0000000140BD2E6D: xor     rcx, rax
 * 0000000140BD2E70: mov     rax, rsi
 * 0000000140BD2E73: mul     rcx
 * 0000000140BD2E76: xor     r10d, eax
 * 0000000140BD2E79: mov     [rbp+8D0h+var_488], rdx
 * 0000000140BD2E80: xor     r10d, edx
 * 0000000140BD2E83: mov     edx, 0FFFFFFFFh
 * 0000000140BD2E88: and     r10d, 3Fh
 * 0000000140BD2E8C: cmovz   r10d, r13d
 * 0000000140BD2E90: add     r15d, edx
 * 0000000140BD2E93: jnz     short loc_140BD2E3F
 * 0000000140BD2E95: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BD2E9A: jmp     short loc_140BD2EA1
 * 0000000140BD2E9C: mov     edx, 0FFFFFFFFh
 * 0000000140BD2EA1: and     r9d, 7Fh
 * 0000000140BD2EA5: cmp     r9d, 8
 * 0000000140BD2EA9: jb      short loc_140BD2EC8
 * 0000000140BD2EAB: mov     eax, r9d
 * 0000000140BD2EAE: shr     rax, 3
 * 0000000140BD2EB2: xor     rbx, [r8]
 * 0000000140BD2EB5: mov     ecx, r10d
 * 0000000140BD2EB8: rol     rbx, cl
 * 0000000140BD2EBB: add     r8, 8
 * 0000000140BD2EBF: add     r9d, 0FFFFFFF8h
 * 0000000140BD2EC3: sub     rax, r13
 * 0000000140BD2EC6: jnz     short loc_140BD2EB2
 * 0000000140BD2EC8: xor     r15d, r15d
 * 0000000140BD2ECB: test    r9d, r9d
 * 0000000140BD2ECE: jz      short loc_140BD2EE5
 * 0000000140BD2ED0: movzx   eax, byte ptr [r8]
 * 0000000140BD2ED4: mov     ecx, r10d
 * 0000000140BD2ED7: xor     rbx, rax
 * 0000000140BD2EDA: add     r8, r13
 * 0000000140BD2EDD: rol     rbx, cl
 * 0000000140BD2EE0: add     r9d, edx
 * 0000000140BD2EE3: jnz     short loc_140BD2ED0
 * 0000000140BD2EE5: mov     rax, rbx
 * 0000000140BD2EE8: jmp     short loc_140BD2EEC
 * 0000000140BD2EEA: xor     ebx, eax
 * 0000000140BD2EEC: shr     rax, 1Fh
 * 0000000140BD2EF0: test    rax, rax
 * 0000000140BD2EF3: jnz     short loc_140BD2EEA
 * 0000000140BD2EF5: btr     ebx, 1Fh
 * 0000000140BD2EF9: mov     r12d, r15d
 * 0000000140BD2EFC: cmp     ebx, [r14+14h]
 * 0000000140BD2F00: jz      loc_140BD3128
 * 0000000140BD2F06: cmp     [r14], r15d
 * 0000000140BD2F09: jnz     short loc_140BD2F13
 * 0000000140BD2F0B: cmp     [r14+18h], r15d
 * 0000000140BD2F0F: cmovnz  r12d, r13d
 * 0000000140BD2F13: mov     ecx, [r14+10h]
 * 0000000140BD2F17: mov     rdx, [r14+8]
 * 0000000140BD2F1B: test    rcx, rcx
 * 0000000140BD2F1E: jz      loc_140BD2FEA
 * 0000000140BD2F24: mov     eax, [rsi+9DCh]
 * 0000000140BD2F2A: mov     r8d, 40h ; '@'
 * 0000000140BD2F30: test    r8b, al
 * 0000000140BD2F33: jz      loc_140BD2FEA
 * 0000000140BD2F39: mov     r13, cr8
 * 0000000140BD2F3D: lea     eax, [r8-3Eh]
 * 0000000140BD2F41: mov     cr8, rax
 * 0000000140BD2F45: mov     r15, rdx
 * 0000000140BD2F48: lea     rax, [rcx-1]
 * 0000000140BD2F4C: and     r15, 0FFFFFFFFFFFFF000h
 * 0000000140BD2F53: add     rax, rdx
 * 0000000140BD2F56: or      rax, 0FFFh
 * 0000000140BD2F5C: mov     [rbp+8D0h+var_950], rax
 * 0000000140BD2F60: lea     rax, [r15-1]
 * 0000000140BD2F64: mov     [rbp+8D0h+arg_8], rax
 * 0000000140BD2F6B: mov     rax, [rsi+468h]
 * 0000000140BD2F72: xor     edx, edx
 * 0000000140BD2F74: mov     rcx, r15
 * 0000000140BD2F77: call    KeGuardDispatchICall
 * 0000000140BD2F7C: cmp     eax, 0C000022Dh
 * 0000000140BD2F81: jnz     short loc_140BD2FAC
 * 0000000140BD2F83: test    r12d, r12d
 * 0000000140BD2F86: jnz     short loc_140BD2FDF
 * 0000000140BD2F88: lea     eax, [r12+1]
 * 0000000140BD2F8D: cmp     r13b, al
 * 0000000140BD2F90: ja      short loc_140BD2FB0
 * 0000000140BD2F92: movzx   eax, r13b
 * 0000000140BD2F96: mov     cr8, rax
 * 0000000140BD2F9A: mov     al, [r15]
 * 0000000140BD2F9D: mov     rax, cr8
 * 0000000140BD2FA1: lea     eax, [r12+2]
 * 0000000140BD2FA6: mov     cr8, rax
 * 0000000140BD2FAA: jmp     short loc_140BD2F6B
 * 0000000140BD2FAC: test    eax, eax
 * 0000000140BD2FAE: js      short loc_140BD2FDF
 * 0000000140BD2FB0: mov     rax, [rbp+8D0h+arg_8]
 * 0000000140BD2FB7: mov     ecx, 1000h
 * 0000000140BD2FBC: add     rax, rcx
 * 0000000140BD2FBF: add     r15, rcx
 * 0000000140BD2FC2: mov     [rbp+8D0h+arg_8], rax
 * 0000000140BD2FC9: cmp     rax, [rbp+8D0h+var_950]
 * 0000000140BD2FCD: jnz     short loc_140BD2F6B
 * 0000000140BD2FCF: movzx   eax, r13b
 * 0000000140BD2FD3: mov     cr8, rax
 * 0000000140BD2FD7: xor     r15d, r15d
 * 0000000140BD2FDA: jmp     loc_140BD3128
 * 0000000140BD2FDF: movzx   eax, r13b
 * 0000000140BD2FE3: mov     cr8, rax
 * 0000000140BD2FE7: xor     r15d, r15d
 * 0000000140BD2FEA: mov     eax, [r14+14h]
 * 0000000140BD2FEE: cmp     [rsi+918h], r15d
 * 0000000140BD2FF5: jnz     short loc_140BD3007
 * 0000000140BD2FF7: mov     ecx, ebx
 * 0000000140BD2FF9: xor     rcx, rax
 * 0000000140BD2FFC: mov     rax, [rsi+588h]
 * 0000000140BD3003: mov     [rax+18h], rcx
 * 0000000140BD3007: mov     rcx, [r14+8]
 * 0000000140BD300B: cmp     [rsi+918h], r15d
 * 0000000140BD3012: jnz     loc_140BD3128
 * 0000000140BD3018: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BD3022: mov     edx, 1
 * 0000000140BD3027: add     rax, rsi
 * 0000000140BD302A: mov     [rsi+920h], rax
 * 0000000140BD3031: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BD303B: add     rax, r14
 * 0000000140BD303E: mov     [rsi+928h], rax
 * 0000000140BD3045: movsxd  rax, dword ptr [r14]
 * 0000000140BD3048: mov     [rsi+930h], rax
 * 0000000140BD304F: mov     [rsi+938h], rcx
 * 0000000140BD3056: mov     [rsi+918h], edx
 * 0000000140BD305C: mov     ecx, [rsi+9D8h]
 * 0000000140BD3062: bt      ecx, 1Dh
 * 0000000140BD3066: jb      loc_140BD3128
 * 0000000140BD306C: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BD3076: jz      loc_140BD3128
 * 0000000140BD307C: test    dl, cl
 * 0000000140BD307E: jz      loc_140BD3128
 * 0000000140BD3084: mov     ecx, [rsi+0A74h]
 * 0000000140BD308A: mov     eax, [rsi+804h]
 * 0000000140BD3090: mov     r10, [rsi+838h]
 * 0000000140BD3097: sub     eax, ecx
 * 0000000140BD3099: mov     r8, [rsi+0A78h]
 * 0000000140BD30A0: lea     rdx, [rcx+rsi]
 * 0000000140BD30A4: mov     ecx, eax
 * 0000000140BD30A6: shr     rcx, 3
 * 0000000140BD30AA: lea     r9, [rdx+rcx*8]
 * 0000000140BD30AE: jmp     short loc_140BD30D1
 * 0000000140BD30B0: xor     [rdx], r8
 * 0000000140BD30B3: mov     rax, [rdx]
 * 0000000140BD30B6: movzx   ecx, r8b
 * 0000000140BD30BA: xor     rax, r10
 * 0000000140BD30BD: and     ecx, 3Fh
 * 0000000140BD30C0: ror     r8, cl
 * 0000000140BD30C3: add     r8, rax
 * 0000000140BD30C6: xor     r8, 0EFAh
 * 0000000140BD30CD: add     rdx, 8
 * 0000000140BD30D1: cmp     rdx, r9
 * 0000000140BD30D4: jnz     short loc_140BD30B0
 * 0000000140BD30D6: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BD30DE: cmp     r8, [rsi+0A80h]
 * 0000000140BD30E5: jz      short loc_140BD3128
 * 0000000140BD30E7: mov     ecx, [rsi+804h]
 * 0000000140BD30ED: mov     rax, [rsi+588h]
 * 0000000140BD30F4: mov     [rax], rsi
 * 0000000140BD30F7: mov     [rax+10h], ecx
 * 0000000140BD30FA: mov     rcx, [rsi+0A80h]
 * 0000000140BD3101: cmp     [rsi+918h], r15d
 * 0000000140BD3108: jnz     short loc_140BD3118
 * 0000000140BD310A: mov     rax, [rsi+588h]
 * 0000000140BD3111: xor     rcx, r8
 * 0000000140BD3114: mov     [rax+18h], rcx
 * 0000000140BD3118: xor     edx, edx
 * 0000000140BD311A: mov     r9d, 100h
 * 0000000140BD3120: mov     rcx, rsi
 * 0000000140BD3123: call    sub_140BDA384
 * 0000000140BD3128: mov     rcx, [r14+18h]
 * 0000000140BD312C: mov     rax, [rsi+108h]
 * 0000000140BD3133: call    KeGuardDispatchICall
 * 0000000140BD3138: mov     [r14+8], r15
 * 0000000140BD313C: mov     [r14+10h], r15d
 * 0000000140BD3140: mov     eax, [rsi+848h]
 * 0000000140BD3146: mov     [rsi+848h], eax
 * 0000000140BD314C: mov     rcx, [rsi+838h]
 * 0000000140BD3153: mov     rax, rcx
 * 0000000140BD3156: jmp     short loc_140BD315A
 * 0000000140BD3158: xor     ecx, eax
 * 0000000140BD315A: shr     rax, 1Fh
 * 0000000140BD315E: test    rax, rax
 * 0000000140BD3161: jnz     short loc_140BD3158
 * 0000000140BD3163: btr     ecx, 1Fh
 * 0000000140BD3167: mov     [r14+14h], ecx
 * 0000000140BD316B: rdtsc
 * 0000000140BD316D: shl     rdx, 20h
 * 0000000140BD3171: mov     r8, 7010008004002001h
 * 0000000140BD317B: or      rax, rdx
 * 0000000140BD317E: mov     rcx, rax
 * 0000000140BD3181: ror     rax, 3
 * 0000000140BD3185: xor     rcx, rax
 * 0000000140BD3188: mov     rax, r8
 * 0000000140BD318B: mul     rcx
 * 0000000140BD318E: mov     rcx, rdx
 * 0000000140BD3191: mov     [rbp+8D0h+var_480], rdx
 * 0000000140BD3198: xor     rcx, rax
 * 0000000140BD319B: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140BD31A5: mul     rcx
 * 0000000140BD31A8: shr     rdx, 1
 * 0000000140BD31AB: lea     rax, [rdx+rdx*2]
 * 0000000140BD31AF: cmp     rcx, rax
 * 0000000140BD31B2: jnz     loc_140BD3CE8
 * 0000000140BD31B8: lea     r12, [r14+18h]
 * 0000000140BD31BC: rdtsc
 * 0000000140BD31BE: shl     rdx, 20h
 * 0000000140BD31C2: or      rax, rdx
 * 0000000140BD31C5: mov     rcx, rax
 * 0000000140BD31C8: ror     rax, 3
 * 0000000140BD31CC: xor     rcx, rax
 * 0000000140BD31CF: mov     rax, r8
 * 0000000140BD31D2: mul     rcx
 * 0000000140BD31D5: mov     rbx, rdx
 * 0000000140BD31D8: mov     [rbp+8D0h+var_478], rdx
 * 0000000140BD31DF: xor     ebx, eax
 * 0000000140BD31E1: and     ebx, 7FFh
 * 0000000140BD31E7: rdtsc
 * 0000000140BD31E9: shl     rdx, 20h
 * 0000000140BD31ED: or      rax, rdx
 * 0000000140BD31F0: mov     rcx, rax
 * 0000000140BD31F3: ror     rax, 3
 * 0000000140BD31F7: xor     rcx, rax
 * 0000000140BD31FA: mov     rax, r8
 * 0000000140BD31FD: mul     rcx
 * 0000000140BD3200: lea     r8d, [rbx+1]
 * 0000000140BD3204: xor     rax, rdx
 * 0000000140BD3207: mov     [rbp+8D0h+var_470], rdx
 * 0000000140BD320E: xor     edx, edx
 * 0000000140BD3210: div     r8
 * 0000000140BD3213: mov     eax, [rsi+9D8h]
 * 0000000140BD3219: mov     r8d, [rsi+830h]
 * 0000000140BD3220: and     eax, 8000000h
 * 0000000140BD3225: neg     eax
 * 0000000140BD3227: mov     r15, rdx
 * 0000000140BD322A: mov     rax, [rsi+100h]
 * 0000000140BD3231: lea     edx, [rbx+0AE8h]
 * 0000000140BD3237: sbb     rcx, rcx
 * 0000000140BD323A: and     rcx, 0FFFFFFFFFFFFFFC0h
 * 0000000140BD323E: add     rcx, 82h
 * 0000000140BD3245: call    KeGuardDispatchICall
 * 0000000140BD324A: mov     r11, rax
 * 0000000140BD324D: test    rax, rax
 * 0000000140BD3250: jnz     short loc_140BD3260
 * 0000000140BD3252: lea     ebx, [rax+1]
 * 0000000140BD3255: add     [rsi+0A60h], ebx
 * 0000000140BD325B: jmp     loc_140BD3953
 * 0000000140BD3260: mov     r9d, r15d
 * 0000000140BD3263: mov     r8, r11
 * 0000000140BD3266: cmp     r15d, 8
 * 0000000140BD326A: jb      short loc_140BD32BE
 * 0000000140BD326C: mov     r10d, r15d
 * 0000000140BD326F: mov     esi, 1
 * 0000000140BD3274: shr     r10, 3
 * 0000000140BD3278: mov     r12, 7010008004002001h
 * 0000000140BD3282: rdtsc
 * 0000000140BD3284: shl     rdx, 20h
 * 0000000140BD3288: add     r9d, 0FFFFFFF8h
 * 0000000140BD328C: or      rax, rdx
 * 0000000140BD328F: mov     rcx, rax
 * 0000000140BD3292: ror     rax, 3
 * 0000000140BD3296: xor     rcx, rax
 * 0000000140BD3299: mov     rax, r12
 * 0000000140BD329C: mul     rcx
 * 0000000140BD329F: mov     [rbp+8D0h+var_468], rdx
 * 0000000140BD32A6: xor     rdx, rax
 * 0000000140BD32A9: mov     [r8], rdx
 * 0000000140BD32AC: add     r8, 8
 * 0000000140BD32B0: sub     r10, rsi
 * 0000000140BD32B3: jnz     short loc_140BD3282
 * 0000000140BD32B5: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BD32BA: lea     r12, [r14+18h]
 * 0000000140BD32BE: mov     r10d, 1
 * 0000000140BD32C4: test    r9d, r9d
 * 0000000140BD32C7: jz      short loc_140BD3307
 * 0000000140BD32C9: rdtsc
 * 0000000140BD32CB: shl     rdx, 20h
 * 0000000140BD32CF: or      rax, rdx
 * 0000000140BD32D2: mov     rcx, rax
 * 0000000140BD32D5: ror     rax, 3
 * 0000000140BD32D9: xor     rcx, rax
 * 0000000140BD32DC: mov     rax, 7010008004002001h
 * 0000000140BD32E6: mul     rcx
 * 0000000140BD32E9: mov     [rbp+8D0h+var_460], rdx
 * 0000000140BD32F0: xor     rdx, rax
 * 0000000140BD32F3: mov     eax, 0FFFFFFFFh
 * 0000000140BD32F8: mov     [r8], dl
 * 0000000140BD32FB: add     r8, r10
 * 0000000140BD32FE: shr     rdx, 8
 * 0000000140BD3302: add     r9d, eax
 * 0000000140BD3305: jnz     short loc_140BD32F8
 * 0000000140BD3307: mov     r8d, r15d
 * 0000000140BD330A: sub     ebx, r15d
 * 0000000140BD330D: add     r8, 0AE8h
 * 0000000140BD3314: add     r8, r11
 * 0000000140BD3317: cmp     ebx, 8
 * 0000000140BD331A: jb      short loc_140BD3364
 * 0000000140BD331C: mov     r9d, ebx
 * 0000000140BD331F: mov     r14, 7010008004002001h
 * 0000000140BD3329: shr     r9, 3
 * 0000000140BD332D: rdtsc
 * 0000000140BD332F: shl     rdx, 20h
 * 0000000140BD3333: add     ebx, 0FFFFFFF8h
 * 0000000140BD3336: or      rax, rdx
 * 0000000140BD3339: mov     rcx, rax
 * 0000000140BD333C: ror     rax, 3
 * 0000000140BD3340: xor     rcx, rax
 * 0000000140BD3343: mov     rax, r14
 * 0000000140BD3346: mul     rcx
 * 0000000140BD3349: mov     [rbp+8D0h+var_458], rdx
 * 0000000140BD3350: xor     rdx, rax
 * 0000000140BD3353: mov     [r8], rdx
 * 0000000140BD3356: add     r8, 8
 * 0000000140BD335A: sub     r9, r10
 * 0000000140BD335D: jnz     short loc_140BD332D
 * 0000000140BD335F: mov     r14, [rsp+9D0h+var_968]
 * 0000000140BD3364: test    ebx, ebx
 * 0000000140BD3366: jz      short loc_140BD33A5
 * 0000000140BD3368: rdtsc
 * 0000000140BD336A: shl     rdx, 20h
 * 0000000140BD336E: or      rax, rdx
 * 0000000140BD3371: mov     rcx, rax
 * 0000000140BD3374: ror     rax, 3
 * 0000000140BD3378: xor     rcx, rax
 * 0000000140BD337B: mov     rax, 7010008004002001h
 * 0000000140BD3385: mul     rcx
 * 0000000140BD3388: mov     [rbp+8D0h+var_450], rdx
 * 0000000140BD338F: xor     rdx, rax
 * 0000000140BD3392: mov     eax, 0FFFFFFFFh
 * 0000000140BD3397: mov     [r8], dl
 * 0000000140BD339A: add     r8, r10
 * 0000000140BD339D: shr     rdx, 8
 * 0000000140BD33A1: add     ebx, eax
 * 0000000140BD33A3: jnz     short loc_140BD3397
 * 0000000140BD33A5: test    r12, r12
 * 0000000140BD33A8: jz      short loc_140BD33AE
 * 0000000140BD33AA: mov     [r12], r11
 * 0000000140BD33AE: mov     ecx, r15d
 * 0000000140BD33B1: add     rcx, r11
 * 0000000140BD33B4: xor     r11d, r11d
 * 0000000140BD33B7: test    rcx, rcx
 * 0000000140BD33BA: jz      loc_140BD394E
 * 0000000140BD33C0: mov     r10d, 0AE8h
 * 0000000140BD33C6: mov     [r14+8], rcx
 * 0000000140BD33CA: mov     rdx, rsi
 * 0000000140BD33CD: mov     [r14+10h], r10d
 * 0000000140BD33D1: mov     r8d, r10d
 * 0000000140BD33D4: lea     r12d, [r11+1]
 * 0000000140BD33D8: mov     r9, rcx
 * 0000000140BD33DB: mov     esi, 15Dh
 * 0000000140BD33E0: mov     rax, [rdx]
 * 0000000140BD33E3: add     r8d, 0FFFFFFF8h
 * 0000000140BD33E7: mov     [rcx], rax
 * 0000000140BD33EA: add     rdx, 8
 * 0000000140BD33EE: add     rcx, 8
 * 0000000140BD33F2: sub     rsi, r12
 * 0000000140BD33F5: jnz     short loc_140BD33E0
 * 0000000140BD33F7: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BD33FC: test    r8d, r8d
 * 0000000140BD33FF: jz      short loc_140BD3416
 * 0000000140BD3401: mov     r14d, 0FFFFFFFFh
 * 0000000140BD3407: mov     al, [rdx]
 * 0000000140BD3409: add     rdx, r12
 * 0000000140BD340C: mov     [rcx], al
 * 0000000140BD340E: add     rcx, r12
 * 0000000140BD3411: add     r8d, r14d
 * 0000000140BD3414: jnz     short loc_140BD3407
 * 0000000140BD3416: mov     r13d, [r9+9D8h]
 * 0000000140BD341D: mov     r14, 7010008004002001h
 * 0000000140BD3427: bts     r13d, 12h
 * 0000000140BD342C: mov     [r9+9D8h], r13d
 * 0000000140BD3433: and     r13d, 0FFFFFFFEh
 * 0000000140BD3437: mov     [r9+804h], r10d
 * 0000000140BD343E: mov     [r9+828h], r10d
 * 0000000140BD3445: mov     [r9+9D8h], r13d
 * 0000000140BD344C: mov     [r9+0A74h], r10d
 * 0000000140BD3453: mov     eax, [r9+97Ch]
 * 0000000140BD345A: mov     dword ptr [rsp+9D0h+var_960], eax
 * 0000000140BD345E: mov     rax, [r9+4E0h]
 * 0000000140BD3465: mov     [rbp+8D0h+var_8D8], rax
 * 0000000140BD3469: mov     rax, [r9+5B8h]
 * 0000000140BD3470: mov     [rbp+8D0h+var_8F0], rax
 * 0000000140BD3474: mov     dword ptr [r9+0C4h], 144h
 * 0000000140BD347F: rdtsc
 * 0000000140BD3481: shl     rdx, 20h
 * 0000000140BD3485: or      rax, rdx
 * 0000000140BD3488: mov     rcx, rax
 * 0000000140BD348B: ror     rax, 3
 * 0000000140BD348F: xor     rcx, rax
 * 0000000140BD3492: mov     rax, r14
 * 0000000140BD3495: mul     rcx
 * 0000000140BD3498: mov     r15, rdx
 * 0000000140BD349B: mov     [rbp+8D0h+var_448], rdx
 * 0000000140BD34A2: xor     r15, rax
 * 0000000140BD34A5: jz      short loc_140BD347F
 * 0000000140BD34A7: mov     rax, [r9+7D8h]
 * 0000000140BD34AE: lea     rcx, [r9+7B8h]
 * 0000000140BD34B5: mov     r14, [rsp+9D0h+var_968]
 * 0000000140BD34BA: lea     rdx, [rbp+8D0h+var_128]
 * 0000000140BD34C1: mov     r11d, 20h ; ' '
 * 0000000140BD34C7: mov     [rbp+8D0h+var_8D0], rax
 * 0000000140BD34CB: mov     eax, [r9+848h]
 * 0000000140BD34D2: mov     r8d, r11d
 * 0000000140BD34D5: mov     dword ptr [rbp+8D0h+arg_8], eax
 * 0000000140BD34DB: lea     ebx, [r11-1Ch]
 * 0000000140BD34DF: mov     r10d, ebx
 * 0000000140BD34E2: mov     rax, [rcx]
 * 0000000140BD34E5: add     r8d, 0FFFFFFF8h
 * 0000000140BD34E9: mov     [rdx], rax
 * 0000000140BD34EC: add     rcx, 8
 * 0000000140BD34F0: add     rdx, 8
 * 0000000140BD34F4: sub     r10, r12
 * 0000000140BD34F7: jnz     short loc_140BD34E2
 * 0000000140BD34F9: test    r8d, r8d
 * 0000000140BD34FC: jz      short loc_140BD3517
 * 0000000140BD34FE: mov     esi, 0FFFFFFFFh
 * 0000000140BD3503: mov     al, [rcx]
 * 0000000140BD3505: add     rcx, r12
 * 0000000140BD3508: mov     [rdx], al
 * 0000000140BD350A: add     rdx, r12
 * 0000000140BD350D: add     r8d, esi
 * 0000000140BD3510: jnz     short loc_140BD3503
 * 0000000140BD3512: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BD3517: mov     [r9+7D8h], r10
 * 0000000140BD351E: lea     rax, [r9+7B8h]
 * 0000000140BD3525: mov     [r9+848h], r10d
 * 0000000140BD352C: mov     ecx, r11d
 * 0000000140BD352F: mov     rdx, rbx
 * 0000000140BD3532: mov     [rax], r10
 * 0000000140BD3535: add     ecx, 0FFFFFFF8h
 * 0000000140BD3538: add     rax, 8
 * 0000000140BD353C: sub     rdx, r12
 * 0000000140BD353F: jnz     short loc_140BD3532
 * 0000000140BD3541: test    ecx, ecx
 * 0000000140BD3543: jz      short loc_140BD3554
 * 0000000140BD3545: mov     edx, 0FFFFFFFFh
 * 0000000140BD354A: mov     [rax], r10b
 * 0000000140BD354D: add     rax, r12
 * 0000000140BD3550: add     ecx, edx
 * 0000000140BD3552: jnz     short loc_140BD354A
 * 0000000140BD3554: mov     r11d, [r9+804h]
 * 0000000140BD355B: mov     r10, r9
 * 0000000140BD355E: add     [r9+848h], r11d
 * 0000000140BD3565: mov     rax, r9
 * 0000000140BD3568: mov     ebx, [r9+834h]
 * 0000000140BD356F: mov     r8, [r9+838h]
 * 0000000140BD3576: lea     rcx, [r9+r11]
 * 0000000140BD357A: cmp     r9, rcx
 * 0000000140BD357D: jnb     short loc_140BD358F
 * 0000000140BD357F: mov     edx, 40h ; '@'
 * 0000000140BD3584: prefetchnta byte ptr [rax]
 * 0000000140BD3587: add     rax, rdx
 * 0000000140BD358A: cmp     rax, rcx
 * 0000000140BD358D: jb      short loc_140BD3584
 * 0000000140BD358F: mov     r12d, r11d
 * 0000000140BD3592: mov     edx, 1
 * 0000000140BD3597: shr     r12d, 7
 * 0000000140BD359B: test    r12d, r12d
 * 0000000140BD359E: jz      short loc_140BD3615
 * 0000000140BD35A0: mov     rdi, r8
 * 0000000140BD35A3: mov     rsi, 7010008004002001h
 * 0000000140BD35AD: mov     r14d, 0FFFFFFFFh
 * 0000000140BD35B3: mov     eax, 8
 * 0000000140BD35B8: xor     r8, [r10]
 * 0000000140BD35BB: mov     ecx, ebx
 * 0000000140BD35BD: rol     r8, cl
 * 0000000140BD35C0: xor     r8, [r10+8]
 * 0000000140BD35C4: add     r10, 10h
 * 0000000140BD35C8: rol     r8, cl
 * 0000000140BD35CB: sub     rax, rdx
 * 0000000140BD35CE: jnz     short loc_140BD35B8
 * 0000000140BD35D0: mov     rcx, r10
 * 0000000140BD35D3: sub     rcx, r9
 * 0000000140BD35D6: xor     rcx, rdi
 * 0000000140BD35D9: mov     rax, rcx
 * 0000000140BD35DC: rol     rax, 11h
 * 0000000140BD35E0: xor     rcx, rax
 * 0000000140BD35E3: mov     rax, rsi
 * 0000000140BD35E6: mul     rcx
 * 0000000140BD35E9: xor     ebx, edx
 * 0000000140BD35EB: mov     [rbp+8D0h+var_440], rdx
 * 0000000140BD35F2: xor     ebx, eax
 * 0000000140BD35F4: mov     edx, 1
 * 0000000140BD35F9: and     ebx, 3Fh
 * 0000000140BD35FC: cmovz   ebx, edx
 * 0000000140BD35FF: add     r12d, r14d
 * 0000000140BD3602: jnz     short loc_140BD35B3
 * 0000000140BD3604: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BD3609: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BD3610: mov     r14, [rsp+9D0h+var_968]
 * 0000000140BD3615: and     r11d, 7Fh
 * 0000000140BD3619: cmp     r11d, 8
 * 0000000140BD361D: jb      short loc_140BD363B
 * 0000000140BD361F: mov     eax, r11d
 * 0000000140BD3622: shr     rax, 3
 * 0000000140BD3626: xor     r8, [r10]
 * 0000000140BD3629: mov     ecx, ebx
 * 0000000140BD362B: rol     r8, cl
 * 0000000140BD362E: add     r10, 8
 * 0000000140BD3632: add     r11d, 0FFFFFFF8h
 * 0000000140BD3636: sub     rax, rdx
 * 0000000140BD3639: jnz     short loc_140BD3626
 * 0000000140BD363B: xor     r12d, r12d
 * 0000000140BD363E: test    r11d, r11d
 * 0000000140BD3641: jz      short loc_140BD3661
 * 0000000140BD3643: mov     esi, 0FFFFFFFFh
 * 0000000140BD3648: movzx   eax, byte ptr [r10]
 * 0000000140BD364C: mov     ecx, ebx
 * 0000000140BD364E: xor     r8, rax
 * 0000000140BD3651: add     r10, rdx
 * 0000000140BD3654: rol     r8, cl
 * 0000000140BD3657: add     r11d, esi
 * 0000000140BD365A: jnz     short loc_140BD3648
 * 0000000140BD365C: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BD3661: mov     ecx, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BD3667: lea     rdx, [r9+7B8h]
 * 0000000140BD366E: mov     rax, [rbp+8D0h+var_8D0]
 * 0000000140BD3672: mov     r10d, 20h ; ' '
 * 0000000140BD3678: mov     [r9+7D8h], rax
 * 0000000140BD367F: add     [r9+848h], ecx
 * 0000000140BD3686: lea     rcx, [rbp+8D0h+var_128]
 * 0000000140BD368D: lea     ebx, [r10-1Fh]
 * 0000000140BD3691: lea     r11d, [r10-1Ch]
 * 0000000140BD3695: mov     rax, [rcx]
 * 0000000140BD3698: add     r10d, 0FFFFFFF8h
 * 0000000140BD369C: mov     [rdx], rax
 * 0000000140BD369F: add     rcx, 8
 * 0000000140BD36A3: add     rdx, 8
 * 0000000140BD36A7: sub     r11, rbx
 * 0000000140BD36AA: jnz     short loc_140BD3695
 * 0000000140BD36AC: test    r10d, r10d
 * 0000000140BD36AF: jz      short loc_140BD36CB
 * 0000000140BD36B1: mov     r14d, 0FFFFFFFFh
 * 0000000140BD36B7: mov     al, [rcx]
 * 0000000140BD36B9: add     rcx, rbx
 * 0000000140BD36BC: mov     [rdx], al
 * 0000000140BD36BE: add     rdx, rbx
 * 0000000140BD36C1: add     r10d, r14d
 * 0000000140BD36C4: jnz     short loc_140BD36B7
 * 0000000140BD36C6: mov     r14, [rsp+9D0h+var_968]
 * 0000000140BD36CB: mov     [r9+7D8h], r8
 * 0000000140BD36D2: test    dword ptr [r9+9D8h], 20000000h
 * 0000000140BD36DD: jnz     loc_140BD381E
 * 0000000140BD36E3: mov     rax, r9
 * 0000000140BD36E6: mov     ecx, r12d
 * 0000000140BD36E9: xor     [rax], r15
 * 0000000140BD36EC: add     ecx, ebx
 * 0000000140BD36EE: add     rax, 8
 * 0000000140BD36F2: cmp     ecx, 19h
 * 0000000140BD36F5: jb      short loc_140BD36E9
 * 0000000140BD36F7: add     rax, 0A18h
 * 0000000140BD36FD: mov     ecx, 144h
 * 0000000140BD3702: xor     [rax], r15
 * 0000000140BD3705: lea     rdx, [rbp+8D0h+var_798]
 * 0000000140BD370C: ror     r15, cl
 * 0000000140BD370F: lea     rax, [rax-8]
 * 0000000140BD3713: mov     [rbp+8D0h+var_798], r15
 * 0000000140BD371A: and     r15d, 3Fh
 * 0000000140BD371E: btc     [rdx], r15
 * 0000000140BD3722: sub     ecx, ebx
 * 0000000140BD3724: jz      short loc_140BD372F
 * 0000000140BD3726: mov     r15, [rbp+8D0h+var_798]
 * 0000000140BD372D: jmp     short loc_140BD3702
 * 0000000140BD372F: rdtsc
 * 0000000140BD3731: shl     rdx, 20h
 * 0000000140BD3735: or      rax, rdx
 * 0000000140BD3738: mov     rcx, rax
 * 0000000140BD373B: ror     rax, 3
 * 0000000140BD373F: xor     rcx, rax
 * 0000000140BD3742: mov     rax, 7010008004002001h
 * 0000000140BD374C: mul     rcx
 * 0000000140BD374F: mov     rcx, rdx
 * 0000000140BD3752: mov     [rbp+8D0h+var_438], rdx
 * 0000000140BD3759: xor     rcx, rax
 * 0000000140BD375C: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140BD3766: mul     rcx
 * 0000000140BD3769: shr     rdx, 1
 * 0000000140BD376C: lea     rax, [rdx+rdx*2]
 * 0000000140BD3770: cmp     rcx, rax
 * 0000000140BD3773: jnz     loc_140BD381E
 * 0000000140BD3779: mov     r15d, dword ptr [rsp+9D0h+var_960]
 * 0000000140BD377E: mov     ecx, r9d
 * 0000000140BD3781: mov     rdi, [rbp+8D0h+var_8D8]
 * 0000000140BD3785: mov     r10, r9
 * 0000000140BD3788: mov     r11d, r12d
 * 0000000140BD378B: ror     r10, cl
 * 0000000140BD378E: mov     r12, [rbp+8D0h+var_8F0]
 * 0000000140BD3792: mov     rbx, r9
 * 0000000140BD3795: mov     r14d, 1
 * 0000000140BD379B: mov     eax, r11d
 * 0000000140BD379E: add     rax, rbx
 * 0000000140BD37A1: sub     [r9], rax
 * 0000000140BD37A4: mov     rcx, [r9]
 * 0000000140BD37A7: bt      r13d, 8
 * 0000000140BD37AC: jb      short loc_140BD37C5
 * 0000000140BD37AE: mov     rax, rdi
 * 0000000140BD37B1: xor     rax, rcx
 * 0000000140BD37B4: mov     ecx, r12d
 * 0000000140BD37B7: bswap   rax
 * 0000000140BD37BA: xor     rax, r10
 * 0000000140BD37BD: ror     rax, cl
 * 0000000140BD37C0: xor     rax, r12
 * 0000000140BD37C3: jmp     short loc_140BD37CB
 * 0000000140BD37C5: mov     rax, r10
 * 0000000140BD37C8: xor     rax, rcx
 * 0000000140BD37CB: mov     rcx, r9
 * 0000000140BD37CE: mov     edx, 0C8h
 * 0000000140BD37D3: sub     edx, r11d
 * 0000000140BD37D6: mov     [rcx], rax
 * 0000000140BD37D9: mov     ecx, [r9]
 * 0000000140BD37DC: mov     r8d, ecx
 * 0000000140BD37DF: mov     eax, r11d
 * 0000000140BD37E2: not     ecx
 * 0000000140BD37E4: xor     rdx, rax
 * 0000000140BD37E7: xor     r8d, 0EFAh
 * 0000000140BD37EE: ror     rdx, cl
 * 0000000140BD37F1: add     r9, 8
 * 0000000140BD37F5: xor     r10, rdx
 * 0000000140BD37F8: mov     cl, r8b
 * 0000000140BD37FB: rol     r10, cl
 * 0000000140BD37FE: add     r11d, r14d
 * 0000000140BD3801: add     r10, rbx
 * 0000000140BD3804: xor     r10, r15
 * 0000000140BD3807: cmp     r11d, 19h
 * 0000000140BD380B: jb      short loc_140BD379B
 * 0000000140BD380D: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BD3812: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BD3819: mov     r14, [rsp+9D0h+var_968]
 * 0000000140BD381E: mov     r15, [r14+8]
 * 0000000140BD3822: mov     r10d, [r14+10h]
 * 0000000140BD3826: mov     r9, r15
 * 0000000140BD3829: add     [rsi+848h], r10d
 * 0000000140BD3830: mov     rax, r15
 * 0000000140BD3833: mov     r11d, [rsi+834h]
 * 0000000140BD383A: mov     r12, [rsi+838h]
 * 0000000140BD3841: lea     rcx, [r15+r10]
 * 0000000140BD3845: cmp     r15, rcx
 * 0000000140BD3848: jnb     short loc_140BD385A
 * 0000000140BD384A: mov     edx, 40h ; '@'
 * 0000000140BD384F: prefetchnta byte ptr [rax]
 * 0000000140BD3852: add     rax, rdx
 * 0000000140BD3855: cmp     rax, rcx
 * 0000000140BD3858: jb      short loc_140BD384F
 * 0000000140BD385A: mov     ebx, r10d
 * 0000000140BD385D: mov     r8, r12
 * 0000000140BD3860: shr     ebx, 7
 * 0000000140BD3863: test    ebx, ebx
 * 0000000140BD3865: jz      short loc_140BD38D8
 * 0000000140BD3867: mov     rsi, 7010008004002001h
 * 0000000140BD3871: mov     r13d, 1
 * 0000000140BD3877: mov     r14d, 0FFFFFFFFh
 * 0000000140BD387D: mov     eax, 8
 * 0000000140BD3882: xor     r8, [r9]
 * 0000000140BD3885: mov     ecx, r11d
 * 0000000140BD3888: rol     r8, cl
 * 0000000140BD388B: xor     r8, [r9+8]
 * 0000000140BD388F: add     r9, 10h
 * 0000000140BD3893: rol     r8, cl
 * 0000000140BD3896: sub     rax, r13
 * 0000000140BD3899: jnz     short loc_140BD3882
 * 0000000140BD389B: mov     rcx, r9
 * 0000000140BD389E: sub     rcx, r15
 * 0000000140BD38A1: xor     rcx, r12
 * 0000000140BD38A4: mov     rax, rcx
 * 0000000140BD38A7: rol     rax, 11h
 * 0000000140BD38AB: xor     rcx, rax
 * 0000000140BD38AE: mov     rax, rsi
 * 0000000140BD38B1: mul     rcx
 * 0000000140BD38B4: xor     r11d, edx
 * 0000000140BD38B7: mov     [rbp+8D0h+var_430], rdx
 * 0000000140BD38BE: xor     r11d, eax
 * 0000000140BD38C1: and     r11d, 3Fh
 * 0000000140BD38C5: cmovz   r11d, r13d
 * 0000000140BD38C9: add     ebx, r14d
 * 0000000140BD38CC: jnz     short loc_140BD387D
 * 0000000140BD38CE: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BD38D3: mov     r14, [rsp+9D0h+var_968]
 * 0000000140BD38D8: and     r10d, 7Fh
 * 0000000140BD38DC: mov     ebx, 1
 * 0000000140BD38E1: cmp     r10d, 8
 * 0000000140BD38E5: jb      short loc_140BD3904
 * 0000000140BD38E7: mov     eax, r10d
 * 0000000140BD38EA: shr     rax, 3
 * 0000000140BD38EE: xor     r8, [r9]
 * 0000000140BD38F1: mov     ecx, r11d
 * 0000000140BD38F4: rol     r8, cl
 * 0000000140BD38F7: add     r9, 8
 * 0000000140BD38FB: add     r10d, 0FFFFFFF8h
 * 0000000140BD38FF: sub     rax, rbx
 * 0000000140BD3902: jnz     short loc_140BD38EE
 * 0000000140BD3904: test    r10d, r10d
 * 0000000140BD3907: jz      short loc_140BD3928
 * 0000000140BD3909: mov     esi, 0FFFFFFFFh
 * 0000000140BD390E: movzx   eax, byte ptr [r9]
 * 0000000140BD3912: mov     ecx, r11d
 * 0000000140BD3915: xor     r8, rax
 * 0000000140BD3918: add     r9, rbx
 * 0000000140BD391B: rol     r8, cl
 * 0000000140BD391E: add     r10d, esi
 * 0000000140BD3921: jnz     short loc_140BD390E
 * 0000000140BD3923: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BD3928: mov     rax, r8
 * 0000000140BD392B: shr     rax, 1Fh
 * 0000000140BD392F: xor     r11d, r11d
 * 0000000140BD3932: jmp     short loc_140BD393B
 * 0000000140BD3934: xor     r8d, eax
 * 0000000140BD3937: shr     rax, 1Fh
 * 0000000140BD393B: test    rax, rax
 * 0000000140BD393E: jnz     short loc_140BD3934
 * 0000000140BD3940: btr     r8d, 1Fh
 * 0000000140BD3945: mov     [r14+14h], r8d
 * 0000000140BD3949: jmp     short loc_140BD3953
 * 0000000140BD394B: xor     r11d, r11d
 * 0000000140BD394E: mov     ebx, 1
 * 0000000140BD3953: mov     r8, 7010008004002001h
 * 0000000140BD395D: mov     r12d, [rsi+9D8h]
 * 0000000140BD3964: mov     dword ptr [rbp+8D0h+arg_8], r11d
 * 0000000140BD396B: mov     [rsp+9D0h+var_978], r11
 * 0000000140BD3970: mov     dword ptr [rsp+9D0h+var_960], r12d
 * 0000000140BD3975: bt      r12d, 1Dh
 * 0000000140BD397A: jb      loc_140BD4026
 * 0000000140BD3980: mov     r13, [rbp+8D0h+arg_0]
 * 0000000140BD3987: cmp     rsi, r13
 * 0000000140BD398A: jnz     loc_140BD409B
 * 0000000140BD3990: bt      r12d, 0Eh
 * 0000000140BD3995: jb      short loc_140BD39A4
 * 0000000140BD3997: cmp     [rsi+918h], r11d
 * 0000000140BD399E: jnz     loc_140BD3E15
 * 0000000140BD39A4: mov     r8d, [r13+944h]
 * 0000000140BD39AB: mov     rcx, r13
 * 0000000140BD39AE: mov     edx, [r13+804h]
 * 0000000140BD39B5: call    sub_140BD9AF8
 * 0000000140BD39BA: xor     r14d, r14d
 * 0000000140BD39BD: mov     rsi, rax
 * 0000000140BD39C0: test    rax, rax
 * 0000000140BD39C3: jz      loc_140BD3E18
 * 0000000140BD39C9: mov     ecx, [rsi+97Ch]
 * 0000000140BD39CF: mov     r13d, [rsi+9D8h]
 * 0000000140BD39D6: mov     r15d, [rsi+0A74h]
 * 0000000140BD39DD: mov     rax, [rax+7E8h]
 * 0000000140BD39E4: add     r15d, 0FFFFFF38h
 * 0000000140BD39EB: mov     [rbp+8D0h+var_8F8], ecx
 * 0000000140BD39EE: mov     rcx, [rsi+4E0h]
 * 0000000140BD39F5: mov     [rbp+8D0h+var_8F0], rcx
 * 0000000140BD39F9: mov     rcx, [rsi+5B8h]
 * 0000000140BD3A00: shr     r15d, 3
 * 0000000140BD3A04: mov     dword ptr [rbp+8D0h+arg_8], r13d
 * 0000000140BD3A0B: mov     r13, 7010008004002001h
 * 0000000140BD3A15: mov     [rbp+8D0h+var_8D0], rcx
 * 0000000140BD3A19: mov     [rsp+9D0h+var_978], rax
 * 0000000140BD3A1E: mov     [rsi+0C4h], r15d
 * 0000000140BD3A25: rdtsc
 * 0000000140BD3A27: shl     rdx, 20h
 * 0000000140BD3A2B: or      rax, rdx
 * 0000000140BD3A2E: mov     rcx, rax
 * 0000000140BD3A31: ror     rax, 3
 * 0000000140BD3A35: xor     rcx, rax
 * 0000000140BD3A38: mov     rax, r13
 * 0000000140BD3A3B: mul     rcx
 * 0000000140BD3A3E: mov     rbx, rdx
 * 0000000140BD3A41: mov     [rbp+8D0h+var_428], rdx
 * 0000000140BD3A48: xor     rbx, rax
 * 0000000140BD3A4B: jz      short loc_140BD3A25
 * 0000000140BD3A4D: mov     rax, [rsi+7D8h]
 * 0000000140BD3A54: lea     rcx, [rsi+7B8h]
 * 0000000140BD3A5B: mov     r13d, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BD3A62: lea     rdx, [rbp+8D0h+var_108]
 * 0000000140BD3A69: mov     r10d, 20h ; ' '
 * 0000000140BD3A6F: mov     [rbp+8D0h+var_950], rax
 * 0000000140BD3A73: mov     eax, [rsi+848h]
 * 0000000140BD3A79: mov     r8d, r10d
 * 0000000140BD3A7C: mov     dword ptr [rsp+9D0h+var_960], eax
 * 0000000140BD3A80: lea     r11d, [r10-1Ch]
 * 0000000140BD3A84: mov     r9d, r11d
 * 0000000140BD3A87: lea     r12d, [r10-1Fh]
 * 0000000140BD3A8B: mov     rax, [rcx]
 * 0000000140BD3A8E: add     r8d, 0FFFFFFF8h
 * 0000000140BD3A92: mov     [rdx], rax
 * 0000000140BD3A95: add     rcx, 8
 * 0000000140BD3A99: add     rdx, 8
 * 0000000140BD3A9D: sub     r9, r12
 * 0000000140BD3AA0: jnz     short loc_140BD3A8B
 * 0000000140BD3AA2: test    r8d, r8d
 * 0000000140BD3AA5: jz      short loc_140BD3AC3
 * 0000000140BD3AA7: mov     r13d, 0FFFFFFFFh
 * 0000000140BD3AAD: mov     al, [rcx]
 * 0000000140BD3AAF: add     rcx, r12
 * 0000000140BD3AB2: mov     [rdx], al
 * 0000000140BD3AB4: add     rdx, r12
 * 0000000140BD3AB7: add     r8d, r13d
 * 0000000140BD3ABA: jnz     short loc_140BD3AAD
 * 0000000140BD3ABC: mov     r13d, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BD3AC3: mov     [rsi+7D8h], r14
 * 0000000140BD3ACA: lea     rax, [rsi+7B8h]
 * 0000000140BD3AD1: mov     [rsi+848h], r14d
 * 0000000140BD3AD8: mov     ecx, r10d
 * 0000000140BD3ADB: mov     rdx, r11
 * 0000000140BD3ADE: mov     [rax], r14
 * 0000000140BD3AE1: add     ecx, 0FFFFFFF8h
 * 0000000140BD3AE4: add     rax, 8
 * 0000000140BD3AE8: sub     rdx, r12
 * 0000000140BD3AEB: jnz     short loc_140BD3ADE
 * 0000000140BD3AED: mov     edx, 0FFFFFFFFh
 * 0000000140BD3AF2: test    ecx, ecx
 * 0000000140BD3AF4: jz      short loc_140BD3B00
 * 0000000140BD3AF6: mov     [rax], r14b
 * 0000000140BD3AF9: add     rax, r12
 * 0000000140BD3AFC: add     ecx, edx
 * 0000000140BD3AFE: jnz     short loc_140BD3AF6
 * 0000000140BD3B00: mov     r10d, [rsi+804h]
 * 0000000140BD3B07: mov     r9, rsi
 * 0000000140BD3B0A: add     [rsi+848h], r10d
 * 0000000140BD3B11: mov     rax, rsi
 * 0000000140BD3B14: mov     r11d, [rsi+834h]
 * 0000000140BD3B1B: mov     r12, [rsi+838h]
 * 0000000140BD3B22: lea     rcx, [rsi+r10]
 * 0000000140BD3B26: cmp     rsi, rcx
 * 0000000140BD3B29: jnb     short loc_140BD3B3C
 * 0000000140BD3B2B: mov     r8d, 40h ; '@'
 * 0000000140BD3B31: prefetchnta byte ptr [rax]
 * 0000000140BD3B34: add     rax, r8
 * 0000000140BD3B37: cmp     rax, rcx
 * 0000000140BD3B3A: jb      short loc_140BD3B31
 * 0000000140BD3B3C: mov     r14d, r10d
 * 0000000140BD3B3F: mov     r8, r12
 * 0000000140BD3B42: shr     r14d, 7
 * 0000000140BD3B46: test    r14d, r14d
 * 0000000140BD3B49: jz      short loc_140BD3BBE
 * 0000000140BD3B4B: mov     edi, 1
 * 0000000140BD3B50: mov     r13, 7010008004002001h
 * 0000000140BD3B5A: mov     eax, 8
 * 0000000140BD3B5F: xor     r8, [r9]
 * 0000000140BD3B62: mov     ecx, r11d
 * 0000000140BD3B65: rol     r8, cl
 * 0000000140BD3B68: xor     r8, [r9+8]
 * 0000000140BD3B6C: add     r9, 10h
 * 0000000140BD3B70: rol     r8, cl
 * 0000000140BD3B73: sub     rax, rdi
 * 0000000140BD3B76: jnz     short loc_140BD3B5F
 * 0000000140BD3B78: mov     rcx, r9
 * 0000000140BD3B7B: sub     rcx, rsi
 * 0000000140BD3B7E: xor     rcx, r12
 * 0000000140BD3B81: mov     rax, rcx
 * 0000000140BD3B84: rol     rax, 11h
 * 0000000140BD3B88: xor     rcx, rax
 * 0000000140BD3B8B: mov     rax, r13
 * 0000000140BD3B8E: mul     rcx
 * 0000000140BD3B91: xor     r11d, edx
 * 0000000140BD3B94: mov     [rbp+8D0h+var_420], rdx
 * 0000000140BD3B9B: xor     r11d, eax
 * 0000000140BD3B9E: mov     edx, 0FFFFFFFFh
 * 0000000140BD3BA3: and     r11d, 3Fh
 * 0000000140BD3BA7: cmovz   r11d, edi
 * 0000000140BD3BAB: add     r14d, edx
 * 0000000140BD3BAE: jnz     short loc_140BD3B5A
 * 0000000140BD3BB0: mov     r13d, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BD3BB7: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BD3BBE: and     r10d, 7Fh
 * 0000000140BD3BC2: mov     r12d, 1
 * 0000000140BD3BC8: cmp     r10d, 8
 * 0000000140BD3BCC: jb      short loc_140BD3BEB
 * 0000000140BD3BCE: mov     eax, r10d
 * 0000000140BD3BD1: shr     rax, 3
 * 0000000140BD3BD5: xor     r8, [r9]
 * 0000000140BD3BD8: mov     ecx, r11d
 * 0000000140BD3BDB: rol     r8, cl
 * 0000000140BD3BDE: add     r9, 8
 * 0000000140BD3BE2: add     r10d, 0FFFFFFF8h
 * 0000000140BD3BE6: sub     rax, r12
 * 0000000140BD3BE9: jnz     short loc_140BD3BD5
 * 0000000140BD3BEB: xor     r14d, r14d
 * 0000000140BD3BEE: test    r10d, r10d
 * 0000000140BD3BF1: jz      short loc_140BD3C08
 * 0000000140BD3BF3: movzx   eax, byte ptr [r9]
 * 0000000140BD3BF7: mov     ecx, r11d
 * 0000000140BD3BFA: xor     r8, rax
 * 0000000140BD3BFD: add     r9, r12
 * 0000000140BD3C00: rol     r8, cl
 * 0000000140BD3C03: add     r10d, edx
 * 0000000140BD3C06: jnz     short loc_140BD3BF3
 * 0000000140BD3C08: mov     ecx, dword ptr [rsp+9D0h+var_960]
 * 0000000140BD3C0C: lea     rdx, [rsi+7B8h]
 * 0000000140BD3C13: mov     rax, [rbp+8D0h+var_950]
 * 0000000140BD3C17: mov     r9d, 4
 * 0000000140BD3C1D: mov     [rsi+7D8h], rax
 * 0000000140BD3C24: add     [rsi+848h], ecx
 * 0000000140BD3C2A: lea     rcx, [rbp+8D0h+var_108]
 * 0000000140BD3C31: lea     r10d, [r9+1Ch]
 * 0000000140BD3C35: mov     rax, [rcx]
 * 0000000140BD3C38: add     r10d, 0FFFFFFF8h
 * 0000000140BD3C3C: mov     [rdx], rax
 * 0000000140BD3C3F: add     rcx, 8
 * 0000000140BD3C43: add     rdx, 8
 * 0000000140BD3C47: sub     r9, r12
 * 0000000140BD3C4A: jnz     short loc_140BD3C35
 * 0000000140BD3C4C: test    r10d, r10d
 * 0000000140BD3C4F: jz      short loc_140BD3C6D
 * 0000000140BD3C51: mov     r13d, 0FFFFFFFFh
 * 0000000140BD3C57: mov     al, [rcx]
 * 0000000140BD3C59: add     rcx, r12
 * 0000000140BD3C5C: mov     [rdx], al
 * 0000000140BD3C5E: add     rdx, r12
 * 0000000140BD3C61: add     r10d, r13d
 * 0000000140BD3C64: jnz     short loc_140BD3C57
 * 0000000140BD3C66: mov     r13d, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BD3C6D: mov     [rsi+7D8h], r8
 * 0000000140BD3C74: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BD3C7E: jnz     loc_140BD3E09
 * 0000000140BD3C84: mov     rcx, rsi
 * 0000000140BD3C87: mov     eax, r14d
 * 0000000140BD3C8A: mov     r11d, 19h
 * 0000000140BD3C90: xor     [rcx], rbx
 * 0000000140BD3C93: add     eax, r12d
 * 0000000140BD3C96: lea     rcx, [rcx+8]
 * 0000000140BD3C9A: cmp     eax, r11d
 * 0000000140BD3C9D: jb      short loc_140BD3C90
 * 0000000140BD3C9F: mov     [rbp+8D0h+var_800], rbx
 * 0000000140BD3CA6: mov     r8d, r15d
 * 0000000140BD3CA9: test    r15d, r15d
 * 0000000140BD3CAC: jz      short loc_140BD3CF4
 * 0000000140BD3CAE: mov     edx, r15d
 * 0000000140BD3CB1: dec     rdx
 * 0000000140BD3CB4: lea     rdx, [rcx+rdx*8]
 * 0000000140BD3CB8: xor     [rdx], rbx
 * 0000000140BD3CBB: lea     rax, [rbp+8D0h+var_800]
 * 0000000140BD3CC2: mov     ecx, r8d
 * 0000000140BD3CC5: lea     rdx, [rdx-8]
 * 0000000140BD3CC9: ror     rbx, cl
 * 0000000140BD3CCC: mov     [rbp+8D0h+var_800], rbx
 * 0000000140BD3CD3: and     ebx, 3Fh
 * 0000000140BD3CD6: btc     [rax], rbx
 * 0000000140BD3CDA: sub     r8d, r12d
 * 0000000140BD3CDD: jz      short loc_140BD3CF4
 * 0000000140BD3CDF: mov     rbx, [rbp+8D0h+var_800]
 * 0000000140BD3CE6: jmp     short loc_140BD3CB8
 * 0000000140BD3CE8: xor     r11d, r11d
 * 0000000140BD3CEB: lea     ebx, [r11+1]
 * 0000000140BD3CEF: jmp     loc_140BD395D
 * 0000000140BD3CF4: bt      r13d, 12h
 * 0000000140BD3CF9: jnb     short loc_140BD3D49
 * 0000000140BD3CFB: rdtsc
 * 0000000140BD3CFD: shl     rdx, 20h
 * 0000000140BD3D01: or      rax, rdx
 * 0000000140BD3D04: mov     rcx, rax
 * 0000000140BD3D07: mov     rdx, rax
 * 0000000140BD3D0A: ror     rcx, 3
 * 0000000140BD3D0E: mov     rax, 7010008004002001h
 * 0000000140BD3D18: xor     rdx, rcx
 * 0000000140BD3D1B: mul     rdx
 * 0000000140BD3D1E: mov     rcx, rdx
 * 0000000140BD3D21: mov     [rbp+8D0h+var_418], rdx
 * 0000000140BD3D28: xor     rcx, rax
 * 0000000140BD3D2B: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140BD3D35: mul     rcx
 * 0000000140BD3D38: shr     rdx, 1
 * 0000000140BD3D3B: lea     rax, [rdx+rdx*2]
 * 0000000140BD3D3F: cmp     rcx, rax
 * 0000000140BD3D42: jz      short loc_140BD3D52
 * 0000000140BD3D44: jmp     loc_140BD3E09
 * 0000000140BD3D49: test    r13b, r13b
 * 0000000140BD3D4C: js      loc_140BD3E09
 * 0000000140BD3D52: mov     r12, [rbp+8D0h+var_8D0]
 * 0000000140BD3D56: mov     ecx, esi
 * 0000000140BD3D58: mov     rdi, [rbp+8D0h+var_8F0]
 * 0000000140BD3D5C: mov     r9, rsi
 * 0000000140BD3D5F: mov     ebx, r11d
 * 0000000140BD3D62: ror     r9, cl
 * 0000000140BD3D65: mov     r11d, r14d
 * 0000000140BD3D68: mov     r10, rsi
 * 0000000140BD3D6B: mov     r14d, [rbp+8D0h+var_8F8]
 * 0000000140BD3D6F: mov     eax, r11d
 * 0000000140BD3D72: add     rax, rsi
 * 0000000140BD3D75: sub     [r10], rax
 * 0000000140BD3D78: mov     rcx, [r10]
 * 0000000140BD3D7B: bt      r13d, 8
 * 0000000140BD3D80: jb      short loc_140BD3D99
 * 0000000140BD3D82: mov     rax, rdi
 * 0000000140BD3D85: xor     rax, rcx
 * 0000000140BD3D88: mov     ecx, r12d
 * 0000000140BD3D8B: bswap   rax
 * 0000000140BD3D8E: xor     rax, r9
 * 0000000140BD3D91: ror     rax, cl
 * 0000000140BD3D94: xor     rax, r12
 * 0000000140BD3D97: jmp     short loc_140BD3D9F
 * 0000000140BD3D99: mov     rax, r9
 * 0000000140BD3D9C: xor     rax, rcx
 * 0000000140BD3D9F: mov     rcx, r10
 * 0000000140BD3DA2: mov     edx, 0C8h
 * 0000000140BD3DA7: sub     edx, r11d
 * 0000000140BD3DAA: mov     [rcx], rax
 * 0000000140BD3DAD: mov     ecx, [r10]
 * 0000000140BD3DB0: mov     r8d, ecx
 * 0000000140BD3DB3: mov     eax, r11d
 * 0000000140BD3DB6: not     ecx
 * 0000000140BD3DB8: xor     rdx, rax
 * 0000000140BD3DBB: xor     r8d, 0EFAh
 * 0000000140BD3DC2: ror     rdx, cl
 * 0000000140BD3DC5: lea     eax, [r11+1]
 * 0000000140BD3DC9: xor     r9, rdx
 * 0000000140BD3DCC: mov     cl, r8b
 * 0000000140BD3DCF: rol     r9, cl
 * 0000000140BD3DD2: add     r10, 8
 * 0000000140BD3DD6: add     r9, rsi
 * 0000000140BD3DD9: mov     r11d, eax
 * 0000000140BD3DDC: xor     r9, r14
 * 0000000140BD3DDF: cmp     eax, 19h
 * 0000000140BD3DE2: jnz     short loc_140BD3DF3
 * 0000000140BD3DE4: bt      r13d, 12h
 * 0000000140BD3DE9: lea     eax, [r11-19h]
 * 0000000140BD3DED: cmovnb  eax, r15d
 * 0000000140BD3DF1: add     ebx, eax
 * 0000000140BD3DF3: cmp     r11d, ebx
 * 0000000140BD3DF6: jb      loc_140BD3D6F
 * 0000000140BD3DFC: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BD3E03: mov     r12d, 1
 * 0000000140BD3E09: mov     dword ptr [rbp+8D0h+arg_8], r12d
 * 0000000140BD3E10: jmp     loc_140BD44BB
 * 0000000140BD3E15: xor     r14d, r14d
 * 0000000140BD3E18: mov     r10d, 20h ; ' '
 * 0000000140BD3E1E: mov     [r13+0C4h], ebx
 * 0000000140BD3E25: mov     r15, [r13+7D8h]
 * 0000000140BD3E2C: lea     rcx, [r13+7B8h]
 * 0000000140BD3E33: mov     r12d, [r13+848h]
 * 0000000140BD3E3A: lea     rdx, [rbp+8D0h+var_E8]
 * 0000000140BD3E41: mov     rsi, r13
 * 0000000140BD3E44: mov     [rbp+8D0h+var_950], r15
 * 0000000140BD3E48: lea     r11d, [r10-1Ch]
 * 0000000140BD3E4C: mov     dword ptr [rsp+9D0h+var_960], r12d
 * 0000000140BD3E51: mov     r9d, r11d
 * 0000000140BD3E54: mov     r8d, r10d
 * 0000000140BD3E57: mov     rax, [rcx]
 * 0000000140BD3E5A: add     r8d, 0FFFFFFF8h
 * 0000000140BD3E5E: mov     [rdx], rax
 * 0000000140BD3E61: add     rcx, 8
 * 0000000140BD3E65: add     rdx, 8
 * 0000000140BD3E69: sub     r9, rbx
 * 0000000140BD3E6C: jnz     short loc_140BD3E57
 * 0000000140BD3E6E: mov     r9d, 0FFFFFFFFh
 * 0000000140BD3E74: test    r8d, r8d
 * 0000000140BD3E77: jz      short loc_140BD3E88
 * 0000000140BD3E79: mov     al, [rcx]
 * 0000000140BD3E7B: add     rcx, rbx
 * 0000000140BD3E7E: mov     [rdx], al
 * 0000000140BD3E80: add     rdx, rbx
 * 0000000140BD3E83: add     r8d, r9d
 * 0000000140BD3E86: jnz     short loc_140BD3E79
 * 0000000140BD3E88: mov     [r13+7D8h], r14
 * 0000000140BD3E8F: lea     rax, [r13+7B8h]
 * 0000000140BD3E96: mov     [r13+848h], r14d
 * 0000000140BD3E9D: mov     ecx, r10d
 * 0000000140BD3EA0: mov     rdx, r11
 * 0000000140BD3EA3: mov     [rax], r14
 * 0000000140BD3EA6: add     ecx, 0FFFFFFF8h
 * 0000000140BD3EA9: add     rax, 8
 * 0000000140BD3EAD: sub     rdx, rbx
 * 0000000140BD3EB0: jnz     short loc_140BD3EA3
 * 0000000140BD3EB2: test    ecx, ecx
 * 0000000140BD3EB4: jz      short loc_140BD3EC1
 * 0000000140BD3EB6: mov     [rax], r14b
 * 0000000140BD3EB9: add     rax, rbx
 * 0000000140BD3EBC: add     ecx, r9d
 * 0000000140BD3EBF: jnz     short loc_140BD3EB6
 * 0000000140BD3EC1: mov     r11d, [r13+804h]
 * 0000000140BD3EC8: mov     r9, r13
 * 0000000140BD3ECB: add     [r13+848h], r11d
 * 0000000140BD3ED2: mov     rax, r13
 * 0000000140BD3ED5: mov     r10d, [r13+834h]
 * 0000000140BD3EDC: mov     r14, [r13+838h]
 * 0000000140BD3EE3: lea     rcx, [r11+r13]
 * 0000000140BD3EE7: cmp     r13, rcx
 * 0000000140BD3EEA: jnb     short loc_140BD3EFC
 * 0000000140BD3EEC: mov     edx, 40h ; '@'
 * 0000000140BD3EF1: prefetchnta byte ptr [rax]
 * 0000000140BD3EF4: add     rax, rdx
 * 0000000140BD3EF7: cmp     rax, rcx
 * 0000000140BD3EFA: jb      short loc_140BD3EF1
 * 0000000140BD3EFC: mov     ebx, r11d
 * 0000000140BD3EFF: mov     r8, r14
 * 0000000140BD3F02: shr     ebx, 7
 * 0000000140BD3F05: test    ebx, ebx
 * 0000000140BD3F07: jz      short loc_140BD3F7F
 * 0000000140BD3F09: mov     edi, 1
 * 0000000140BD3F0E: mov     r12d, 0FFFFFFFFh
 * 0000000140BD3F14: mov     r15, 7010008004002001h
 * 0000000140BD3F1E: mov     eax, 8
 * 0000000140BD3F23: xor     r8, [r9]
 * 0000000140BD3F26: mov     ecx, r10d
 * 0000000140BD3F29: rol     r8, cl
 * 0000000140BD3F2C: xor     r8, [r9+8]
 * 0000000140BD3F30: add     r9, 10h
 * 0000000140BD3F34: rol     r8, cl
 * 0000000140BD3F37: sub     rax, rdi
 * 0000000140BD3F3A: jnz     short loc_140BD3F23
 * 0000000140BD3F3C: mov     rcx, r9
 * 0000000140BD3F3F: sub     rcx, r13
 * 0000000140BD3F42: xor     rcx, r14
 * 0000000140BD3F45: mov     rax, rcx
 * 0000000140BD3F48: rol     rax, 11h
 * 0000000140BD3F4C: xor     rcx, rax
 * 0000000140BD3F4F: mov     rax, r15
 * 0000000140BD3F52: mul     rcx
 * 0000000140BD3F55: xor     r10d, edx
 * 0000000140BD3F58: mov     [rbp+8D0h+var_410], rdx
 * 0000000140BD3F5F: xor     r10d, eax
 * 0000000140BD3F62: and     r10d, 3Fh
 * 0000000140BD3F66: cmovz   r10d, edi
 * 0000000140BD3F6A: add     ebx, r12d
 * 0000000140BD3F6D: jnz     short loc_140BD3F1E
 * 0000000140BD3F6F: mov     r15, [rbp+8D0h+var_950]
 * 0000000140BD3F73: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BD3F7A: mov     r12d, dword ptr [rsp+9D0h+var_960]
 * 0000000140BD3F7F: and     r11d, 7Fh
 * 0000000140BD3F83: mov     ebx, 1
 * 0000000140BD3F88: cmp     r11d, 8
 * 0000000140BD3F8C: jb      short loc_140BD3FAB
 * 0000000140BD3F8E: mov     eax, r11d
 * 0000000140BD3F91: shr     rax, 3
 * 0000000140BD3F95: xor     r8, [r9]
 * 0000000140BD3F98: mov     ecx, r10d
 * 0000000140BD3F9B: rol     r8, cl
 * 0000000140BD3F9E: add     r9, 8
 * 0000000140BD3FA2: add     r11d, 0FFFFFFF8h
 * 0000000140BD3FA6: sub     rax, rbx
 * 0000000140BD3FA9: jnz     short loc_140BD3F95
 * 0000000140BD3FAB: mov     r14d, 0FFFFFFFFh
 * 0000000140BD3FB1: test    r11d, r11d
 * 0000000140BD3FB4: jz      short loc_140BD3FCB
 * 0000000140BD3FB6: movzx   eax, byte ptr [r9]
 * 0000000140BD3FBA: mov     ecx, r10d
 * 0000000140BD3FBD: xor     r8, rax
 * 0000000140BD3FC0: add     r9, rbx
 * 0000000140BD3FC3: rol     r8, cl
 * 0000000140BD3FC6: add     r11d, r14d
 * 0000000140BD3FC9: jnz     short loc_140BD3FB6
 * 0000000140BD3FCB: mov     r9d, 4
 * 0000000140BD3FD1: mov     [r13+7D8h], r15
 * 0000000140BD3FD8: add     [r13+848h], r12d
 * 0000000140BD3FDF: lea     rcx, [rbp+8D0h+var_E8]
 * 0000000140BD3FE6: lea     rdx, [r13+7B8h]
 * 0000000140BD3FED: lea     r10d, [r9+1Ch]
 * 0000000140BD3FF1: mov     rax, [rcx]
 * 0000000140BD3FF4: add     r10d, 0FFFFFFF8h
 * 0000000140BD3FF8: mov     [rdx], rax
 * 0000000140BD3FFB: add     rcx, 8
 * 0000000140BD3FFF: add     rdx, 8
 * 0000000140BD4003: sub     r9, rbx
 * 0000000140BD4006: jnz     short loc_140BD3FF1
 * 0000000140BD4008: xor     r11d, r11d
 * 0000000140BD400B: test    r10d, r10d
 * 0000000140BD400E: jz      short loc_140BD401F
 * 0000000140BD4010: mov     al, [rcx]
 * 0000000140BD4012: add     rcx, rbx
 * 0000000140BD4015: mov     [rdx], al
 * 0000000140BD4017: add     rdx, rbx
 * 0000000140BD401A: add     r10d, r14d
 * 0000000140BD401D: jnz     short loc_140BD4010
 * 0000000140BD401F: mov     [r13+7D8h], r8
 * 0000000140BD4026: mov     r14d, [rsi+9D8h]
 * 0000000140BD402D: mov     r15, r11
 * 0000000140BD4030: bt      r14d, 1Dh
 * 0000000140BD4035: jb      loc_140BD4558
 * 0000000140BD403B: test    r14b, r14b
 * 0000000140BD403E: js      loc_140BD4542
 * 0000000140BD4044: mov     eax, [rsi+97Ch]
 * 0000000140BD404A: mov     ecx, esi
 * 0000000140BD404C: mov     r12, [rsi+5B8h]
 * 0000000140BD4053: mov     r9, rsi
 * 0000000140BD4056: mov     r13, [rsi+4E0h]
 * 0000000140BD405D: mov     r10, rsi
 * 0000000140BD4060: ror     r9, cl
 * 0000000140BD4063: mov     ebx, r11d
 * 0000000140BD4066: mov     [rbp+8D0h+var_950], rax
 * 0000000140BD406A: mov     rcx, [r10]
 * 0000000140BD406D: sub     rcx, r11
 * 0000000140BD4070: sub     rcx, rsi
 * 0000000140BD4073: mov     [r10], rcx
 * 0000000140BD4076: bt      r14d, 8
 * 0000000140BD407B: jb      loc_140BD44F3
 * 0000000140BD4081: mov     rax, r13
 * 0000000140BD4084: xor     rax, rcx
 * 0000000140BD4087: mov     ecx, r12d
 * 0000000140BD408A: bswap   rax
 * 0000000140BD408D: xor     rax, r9
 * 0000000140BD4090: ror     rax, cl
 * 0000000140BD4093: xor     rax, r12
 * 0000000140BD4096: jmp     loc_140BD44F9
 * 0000000140BD409B: mov     ecx, [rsi+97Ch]
 * 0000000140BD40A1: mov     r15d, [rsi+0A74h]
 * 0000000140BD40A8: mov     rax, [rsi+7E8h]
 * 0000000140BD40AF: add     r15d, 0FFFFFF38h
 * 0000000140BD40B6: mov     [rbp+8D0h+var_8F8], ecx
 * 0000000140BD40B9: mov     rcx, [rsi+4E0h]
 * 0000000140BD40C0: mov     [rbp+8D0h+var_8F0], rcx
 * 0000000140BD40C4: mov     rcx, [rsi+5B8h]
 * 0000000140BD40CB: shr     r15d, 3
 * 0000000140BD40CF: mov     [rbp+8D0h+var_8D0], rcx
 * 0000000140BD40D3: mov     [rsp+9D0h+var_978], rax
 * 0000000140BD40D8: mov     [rsi+0C4h], r15d
 * 0000000140BD40DF: rdtsc
 * 0000000140BD40E1: shl     rdx, 20h
 * 0000000140BD40E5: or      rax, rdx
 * 0000000140BD40E8: mov     rcx, rax
 * 0000000140BD40EB: mov     rdx, rax
 * 0000000140BD40EE: ror     rcx, 3
 * 0000000140BD40F2: mov     rax, r8
 * 0000000140BD40F5: xor     rdx, rcx
 * 0000000140BD40F8: mul     rdx
 * 0000000140BD40FB: mov     rbx, rdx
 * 0000000140BD40FE: mov     [rbp+8D0h+var_408], rdx
 * 0000000140BD4105: xor     rbx, rax
 * 0000000140BD4108: jz      short loc_140BD40DF
 * 0000000140BD410A: mov     rax, [rsi+7D8h]
 * 0000000140BD4111: lea     rcx, [rsi+7B8h]
 * 0000000140BD4118: mov     r10d, 20h ; ' '
 * 0000000140BD411E: mov     [rbp+8D0h+var_950], rax
 * 0000000140BD4122: mov     eax, [rsi+848h]
 * 0000000140BD4128: lea     rdx, [rbp+8D0h+var_C8]
 * 0000000140BD412F: mov     dword ptr [rbp+8D0h+arg_8], eax
 * 0000000140BD4135: mov     r8d, r10d
 * 0000000140BD4138: mov     r13d, 0FFFFFFF8h
 * 0000000140BD413E: lea     r11d, [r10-1Ch]
 * 0000000140BD4142: mov     r9d, r11d
 * 0000000140BD4145: lea     r14d, [r10-1Fh]
 * 0000000140BD4149: mov     rax, [rcx]
 * 0000000140BD414C: add     r8d, r13d
 * 0000000140BD414F: mov     [rdx], rax
 * 0000000140BD4152: add     rcx, 8
 * 0000000140BD4156: add     rdx, 8
 * 0000000140BD415A: sub     r9, r14
 * 0000000140BD415D: jnz     short loc_140BD4149
 * 0000000140BD415F: test    r8d, r8d
 * 0000000140BD4162: jz      short loc_140BD417D
 * 0000000140BD4164: mov     esi, 0FFFFFFFFh
 * 0000000140BD4169: mov     al, [rcx]
 * 0000000140BD416B: add     rcx, r14
 * 0000000140BD416E: mov     [rdx], al
 * 0000000140BD4170: add     rdx, r14
 * 0000000140BD4173: add     r8d, esi
 * 0000000140BD4176: jnz     short loc_140BD4169
 * 0000000140BD4178: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BD417D: mov     [rsi+7D8h], r9
 * 0000000140BD4184: lea     rax, [rsi+7B8h]
 * 0000000140BD418B: mov     [rsi+848h], r9d
 * 0000000140BD4192: mov     ecx, r10d
 * 0000000140BD4195: mov     rdx, r11
 * 0000000140BD4198: mov     [rax], r9
 * 0000000140BD419B: add     ecx, r13d
 * 0000000140BD419E: add     rax, 8
 * 0000000140BD41A2: sub     rdx, r14
 * 0000000140BD41A5: jnz     short loc_140BD4198
 * 0000000140BD41A7: mov     edx, 0FFFFFFFFh
 * 0000000140BD41AC: test    ecx, ecx
 * 0000000140BD41AE: jz      short loc_140BD41BA
 * 0000000140BD41B0: mov     [rax], r9b
 * 0000000140BD41B3: add     rax, r14
 * 0000000140BD41B6: add     ecx, edx
 * 0000000140BD41B8: jnz     short loc_140BD41B0
 * 0000000140BD41BA: mov     r11d, [rsi+804h]
 * 0000000140BD41C1: mov     r9, rsi
 * 0000000140BD41C4: add     [rsi+848h], r11d
 * 0000000140BD41CB: mov     rax, rsi
 * 0000000140BD41CE: mov     r10d, [rsi+834h]
 * 0000000140BD41D5: mov     r13, [rsi+838h]
 * 0000000140BD41DC: lea     rcx, [rsi+r11]
 * 0000000140BD41E0: cmp     rsi, rcx
 * 0000000140BD41E3: jnb     short loc_140BD41F6
 * 0000000140BD41E5: mov     r8d, 40h ; '@'
 * 0000000140BD41EB: prefetchnta byte ptr [rax]
 * 0000000140BD41EE: add     rax, r8
 * 0000000140BD41F1: cmp     rax, rcx
 * 0000000140BD41F4: jb      short loc_140BD41EB
 * 0000000140BD41F6: mov     r14d, r11d
 * 0000000140BD41F9: mov     r8, r13
 * 0000000140BD41FC: shr     r14d, 7
 * 0000000140BD4200: test    r14d, r14d
 * 0000000140BD4203: jz      short loc_140BD4276
 * 0000000140BD4205: mov     edi, 1
 * 0000000140BD420A: mov     r12, 7010008004002001h
 * 0000000140BD4214: mov     eax, 8
 * 0000000140BD4219: xor     r8, [r9]
 * 0000000140BD421C: mov     ecx, r10d
 * 0000000140BD421F: rol     r8, cl
 * 0000000140BD4222: xor     r8, [r9+8]
 * 0000000140BD4226: add     r9, 10h
 * 0000000140BD422A: rol     r8, cl
 * 0000000140BD422D: sub     rax, rdi
 * 0000000140BD4230: jnz     short loc_140BD4219
 * 0000000140BD4232: mov     rcx, r9
 * 0000000140BD4235: sub     rcx, rsi
 * 0000000140BD4238: xor     rcx, r13
 * 0000000140BD423B: mov     rax, rcx
 * 0000000140BD423E: rol     rax, 11h
 * 0000000140BD4242: xor     rcx, rax
 * 0000000140BD4245: mov     rax, r12
 * 0000000140BD4248: mul     rcx
 * 0000000140BD424B: xor     r10d, edx
 * 0000000140BD424E: mov     [rbp+8D0h+var_400], rdx
 * 0000000140BD4255: xor     r10d, eax
 * 0000000140BD4258: mov     edx, 0FFFFFFFFh
 * 0000000140BD425D: and     r10d, 3Fh
 * 0000000140BD4261: cmovz   r10d, edi
 * 0000000140BD4265: add     r14d, edx
 * 0000000140BD4268: jnz     short loc_140BD4214
 * 0000000140BD426A: mov     r12d, dword ptr [rsp+9D0h+var_960]
 * 0000000140BD426F: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BD4276: and     r11d, 7Fh
 * 0000000140BD427A: mov     r13d, 1
 * 0000000140BD4280: cmp     r11d, 8
 * 0000000140BD4284: jb      short loc_140BD42A3
 * 0000000140BD4286: mov     eax, r11d
 * 0000000140BD4289: shr     rax, 3
 * 0000000140BD428D: xor     r8, [r9]
 * 0000000140BD4290: mov     ecx, r10d
 * 0000000140BD4293: rol     r8, cl
 * 0000000140BD4296: add     r9, 8
 * 0000000140BD429A: add     r11d, 0FFFFFFF8h
 * 0000000140BD429E: sub     rax, r13
 * 0000000140BD42A1: jnz     short loc_140BD428D
 * 0000000140BD42A3: xor     r14d, r14d
 * 0000000140BD42A6: test    r11d, r11d
 * 0000000140BD42A9: jz      short loc_140BD42C0
 * 0000000140BD42AB: movzx   eax, byte ptr [r9]
 * 0000000140BD42AF: mov     ecx, r10d
 * 0000000140BD42B2: xor     r8, rax
 * 0000000140BD42B5: add     r9, r13
 * 0000000140BD42B8: rol     r8, cl
 * 0000000140BD42BB: add     r11d, edx
 * 0000000140BD42BE: jnz     short loc_140BD42AB
 * 0000000140BD42C0: mov     ecx, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BD42C6: lea     rdx, [rsi+7B8h]
 * 0000000140BD42CD: mov     rax, [rbp+8D0h+var_950]
 * 0000000140BD42D1: mov     r9d, 4
 * 0000000140BD42D7: mov     [rsi+7D8h], rax
 * 0000000140BD42DE: add     [rsi+848h], ecx
 * 0000000140BD42E4: lea     rcx, [rbp+8D0h+var_C8]
 * 0000000140BD42EB: lea     r10d, [r9+1Ch]
 * 0000000140BD42EF: mov     rax, [rcx]
 * 0000000140BD42F2: add     r10d, 0FFFFFFF8h
 * 0000000140BD42F6: mov     [rdx], rax
 * 0000000140BD42F9: add     rcx, 8
 * 0000000140BD42FD: add     rdx, 8
 * 0000000140BD4301: sub     r9, r13
 * 0000000140BD4304: jnz     short loc_140BD42EF
 * 0000000140BD4306: test    r10d, r10d
 * 0000000140BD4309: jz      short loc_140BD4324
 * 0000000140BD430B: mov     esi, 0FFFFFFFFh
 * 0000000140BD4310: mov     al, [rcx]
 * 0000000140BD4312: add     rcx, r13
 * 0000000140BD4315: mov     [rdx], al
 * 0000000140BD4317: add     rdx, r13
 * 0000000140BD431A: add     r10d, esi
 * 0000000140BD431D: jnz     short loc_140BD4310
 * 0000000140BD431F: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BD4324: mov     [rsi+7D8h], r8
 * 0000000140BD432B: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BD4335: jnz     loc_140BD44B4
 * 0000000140BD433B: mov     rcx, rsi
 * 0000000140BD433E: mov     eax, r14d
 * 0000000140BD4341: mov     r11d, 19h
 * 0000000140BD4347: xor     [rcx], rbx
 * 0000000140BD434A: add     eax, r13d
 * 0000000140BD434D: lea     rcx, [rcx+8]
 * 0000000140BD4351: cmp     eax, r11d
 * 0000000140BD4354: jb      short loc_140BD4347
 * 0000000140BD4356: mov     [rbp+8D0h+var_7F8], rbx
 * 0000000140BD435D: mov     r8d, r15d
 * 0000000140BD4360: test    r15d, r15d
 * 0000000140BD4363: jz      short loc_140BD439F
 * 0000000140BD4365: mov     edx, r15d
 * 0000000140BD4368: dec     rdx
 * 0000000140BD436B: lea     rdx, [rcx+rdx*8]
 * 0000000140BD436F: xor     [rdx], rbx
 * 0000000140BD4372: lea     rax, [rbp+8D0h+var_7F8]
 * 0000000140BD4379: mov     ecx, r8d
 * 0000000140BD437C: lea     rdx, [rdx-8]
 * 0000000140BD4380: ror     rbx, cl
 * 0000000140BD4383: mov     [rbp+8D0h+var_7F8], rbx
 * 0000000140BD438A: and     ebx, 3Fh
 * 0000000140BD438D: btc     [rax], rbx
 * 0000000140BD4391: sub     r8d, r13d
 * 0000000140BD4394: jz      short loc_140BD439F
 * 0000000140BD4396: mov     rbx, [rbp+8D0h+var_7F8]
 * 0000000140BD439D: jmp     short loc_140BD436F
 * 0000000140BD439F: bt      r12d, 12h
 * 0000000140BD43A4: jnb     short loc_140BD43F4
 * 0000000140BD43A6: rdtsc
 * 0000000140BD43A8: shl     rdx, 20h
 * 0000000140BD43AC: or      rax, rdx
 * 0000000140BD43AF: mov     rcx, rax
 * 0000000140BD43B2: mov     rdx, rax
 * 0000000140BD43B5: ror     rcx, 3
 * 0000000140BD43B9: mov     rax, 7010008004002001h
 * 0000000140BD43C3: xor     rdx, rcx
 * 0000000140BD43C6: mul     rdx
 * 0000000140BD43C9: mov     rcx, rdx
 * 0000000140BD43CC: mov     [rbp+8D0h+var_3F8], rdx
 * 0000000140BD43D3: xor     rcx, rax
 * 0000000140BD43D6: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140BD43E0: mul     rcx
 * 0000000140BD43E3: shr     rdx, 1
 * 0000000140BD43E6: lea     rax, [rdx+rdx*2]
 * 0000000140BD43EA: cmp     rcx, rax
 * 0000000140BD43ED: jz      short loc_140BD43FD
 * 0000000140BD43EF: jmp     loc_140BD44B4
 * 0000000140BD43F4: test    r12b, r12b
 * 0000000140BD43F7: js      loc_140BD44B4
 * 0000000140BD43FD: mov     r13, [rbp+8D0h+var_8D0]
 * 0000000140BD4401: mov     ecx, esi
 * 0000000140BD4403: mov     rdi, [rbp+8D0h+var_8F0]
 * 0000000140BD4407: mov     r9, rsi
 * 0000000140BD440A: mov     ebx, r11d
 * 0000000140BD440D: ror     r9, cl
 * 0000000140BD4410: mov     r11d, r14d
 * 0000000140BD4413: mov     r10, rsi
 * 0000000140BD4416: mov     r14d, [rbp+8D0h+var_8F8]
 * 0000000140BD441A: mov     eax, r11d
 * 0000000140BD441D: add     rax, rsi
 * 0000000140BD4420: sub     [r10], rax
 * 0000000140BD4423: mov     rcx, [r10]
 * 0000000140BD4426: bt      r12d, 8
 * 0000000140BD442B: jb      short loc_140BD4444
 * 0000000140BD442D: mov     rax, rdi
 * 0000000140BD4430: xor     rax, rcx
 * 0000000140BD4433: mov     ecx, r13d
 * 0000000140BD4436: bswap   rax
 * 0000000140BD4439: xor     rax, r9
 * 0000000140BD443C: ror     rax, cl
 * 0000000140BD443F: xor     rax, r13
 * 0000000140BD4442: jmp     short loc_140BD444A
 * 0000000140BD4444: mov     rax, r9
 * 0000000140BD4447: xor     rax, rcx
 * 0000000140BD444A: mov     rcx, r10
 * 0000000140BD444D: mov     edx, 0C8h
 * 0000000140BD4452: sub     edx, r11d
 * 0000000140BD4455: mov     [rcx], rax
 * 0000000140BD4458: mov     ecx, [r10]
 * 0000000140BD445B: mov     r8d, ecx
 * 0000000140BD445E: mov     eax, r11d
 * 0000000140BD4461: not     ecx
 * 0000000140BD4463: xor     rdx, rax
 * 0000000140BD4466: xor     r8d, 0EFAh
 * 0000000140BD446D: ror     rdx, cl
 * 0000000140BD4470: lea     eax, [r11+1]
 * 0000000140BD4474: xor     r9, rdx
 * 0000000140BD4477: mov     cl, r8b
 * 0000000140BD447A: rol     r9, cl
 * 0000000140BD447D: add     r10, 8
 * 0000000140BD4481: add     r9, rsi
 * 0000000140BD4484: mov     r11d, eax
 * 0000000140BD4487: xor     r9, r14
 * 0000000140BD448A: cmp     eax, 19h
 * 0000000140BD448D: jnz     short loc_140BD449E
 * 0000000140BD448F: bt      r12d, 12h
 * 0000000140BD4494: lea     eax, [r11-19h]
 * 0000000140BD4498: cmovnb  eax, r15d
 * 0000000140BD449C: add     ebx, eax
 * 0000000140BD449E: cmp     r11d, ebx
 * 0000000140BD44A1: jb      loc_140BD441A
 * 0000000140BD44A7: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BD44AE: mov     r13d, 1
 * 0000000140BD44B4: mov     dword ptr [rbp+8D0h+arg_8], r13d
 * 0000000140BD44BB: rdtsc
 * 0000000140BD44BD: shl     rdx, 20h
 * 0000000140BD44C1: mov     rbx, 7010008004002001h
 * 0000000140BD44CB: or      rax, rdx
 * 0000000140BD44CE: mov     rcx, rax
 * 0000000140BD44D1: mov     rdx, rax
 * 0000000140BD44D4: ror     rcx, 3
 * 0000000140BD44D8: mov     rax, rbx
 * 0000000140BD44DB: xor     rdx, rcx
 * 0000000140BD44DE: mul     rdx
 * 0000000140BD44E1: mov     r15, rax
 * 0000000140BD44E4: mov     [rbp+8D0h+var_3F0], rdx
 * 0000000140BD44EB: xor     r15, rdx
 * 0000000140BD44EE: xor     r11d, r11d
 * 0000000140BD44F1: jmp     short loc_140BD4562
 * 0000000140BD44F3: mov     rax, r9
 * 0000000140BD44F6: xor     rax, rcx
 * 0000000140BD44F9: mov     rcx, r10
 * 0000000140BD44FC: mov     edx, 0C8h
 * 0000000140BD4501: sub     edx, ebx
 * 0000000140BD4503: xor     rdx, r11
 * 0000000140BD4506: mov     [rcx], rax
 * 0000000140BD4509: mov     eax, 1
 * 0000000140BD450E: mov     ecx, [r10]
 * 0000000140BD4511: add     ebx, eax
 * 0000000140BD4513: mov     r8d, ecx
 * 0000000140BD4516: add     r10, 8
 * 0000000140BD451A: not     ecx
 * 0000000140BD451C: xor     r8d, 0EFAh
 * 0000000140BD4523: ror     rdx, cl
 * 0000000140BD4526: add     r11, rax
 * 0000000140BD4529: xor     r9, rdx
 * 0000000140BD452C: mov     cl, r8b
 * 0000000140BD452F: rol     r9, cl
 * 0000000140BD4532: add     r9, rsi
 * 0000000140BD4535: xor     r9, [rbp+8D0h+var_950]
 * 0000000140BD4539: cmp     ebx, 19h
 * 0000000140BD453C: jb      loc_140BD406A
 * 0000000140BD4542: mov     rax, [rsi+278h]
 * 0000000140BD4549: lea     rcx, [rsi+820h]
 * 0000000140BD4550: call    KeGuardDispatchICall
 * 0000000140BD4555: xor     r11d, r11d
 * 0000000140BD4558: mov     rbx, 7010008004002001h
 * 0000000140BD4562: mov     r12, [rbp+8D0h+arg_0]
 * 0000000140BD4569: test    dword ptr [r12+9D8h], 8000000h
 * 0000000140BD4575: mov     r14, [r12+7F8h]
 * 0000000140BD457D: jz      short loc_140BD45B8
 * 0000000140BD457F: rdtsc
 * 0000000140BD4581: shl     rdx, 20h
 * 0000000140BD4585: or      rax, rdx
 * 0000000140BD4588: mov     rcx, rax
 * 0000000140BD458B: mov     rdx, rax
 * 0000000140BD458E: ror     rcx, 3
 * 0000000140BD4592: mov     rax, rbx
 * 0000000140BD4595: xor     rdx, rcx
 * 0000000140BD4598: mul     rdx
 * 0000000140BD459B: mov     r14, rdx
 * 0000000140BD459E: mov     [rbp+8D0h+var_3E8], rdx
 * 0000000140BD45A5: xor     r14, rax
 * 0000000140BD45A8: and     r14, 0Fh
 * 0000000140BD45AC: shl     r14, 4
 * 0000000140BD45B0: add     r14, [r12+5C8h]
 * 0000000140BD45B8: mov     r13d, 28h ; '('
 * 0000000140BD45BE: lea     rcx, [r12+918h]
 * 0000000140BD45C6: mov     r8d, r13d
 * 0000000140BD45C9: lea     rdx, [rbp+8D0h+var_668]
 * 0000000140BD45D0: lea     r9d, [r13-23h]
 * 0000000140BD45D4: lea     r10d, [r13-27h]
 * 0000000140BD45D8: mov     rax, [rcx]
 * 0000000140BD45DB: add     r8d, 0FFFFFFF8h
 * 0000000140BD45DF: mov     [rdx], rax
 * 0000000140BD45E2: add     rcx, 8
 * 0000000140BD45E6: add     rdx, 8
 * 0000000140BD45EA: sub     r9, r10
 * 0000000140BD45ED: jnz     short loc_140BD45D8
 * 0000000140BD45EF: test    r8d, r8d
 * 0000000140BD45F2: jz      short loc_140BD4610
 * 0000000140BD45F4: mov     r12d, 0FFFFFFFFh
 * 0000000140BD45FA: mov     al, [rcx]
 * 0000000140BD45FC: add     rcx, r10
 * 0000000140BD45FF: mov     [rdx], al
 * 0000000140BD4601: add     rdx, r10
 * 0000000140BD4604: add     r8d, r12d
 * 0000000140BD4607: jnz     short loc_140BD45FA
 * 0000000140BD4609: mov     r12, [rbp+8D0h+arg_0]
 * 0000000140BD4610: mov     eax, [r12+9D8h]
 * 0000000140BD4618: bt      eax, 0Eh
 * 0000000140BD461C: jb      short loc_140BD462C
 * 0000000140BD461E: cmp     [r12+918h], r11d
 * 0000000140BD4626: jnz     loc_140BD4EA8
 * 0000000140BD462C: bt      eax, 1Dh
 * 0000000140BD4630: jb      loc_140BD542F
 * 0000000140BD4636: mov     al, [r12+940h]
 * 0000000140BD463E: mov     r9, r15
 * 0000000140BD4641: sub     al, r10b
 * 0000000140BD4644: xor     r9, rsi
 * 0000000140BD4647: movzx   r11d, al
 * 0000000140BD464B: mov     r8d, 3Fh ; '?'
 * 0000000140BD4651: sub     r8d, r11d
 * 0000000140BD4654: rdtsc
 * 0000000140BD4656: shl     rdx, 20h
 * 0000000140BD465A: mov     r12, 7010008004002001h
 * 0000000140BD4664: or      rax, rdx
 * 0000000140BD4667: mov     rcx, rax
 * 0000000140BD466A: mov     rdx, rax
 * 0000000140BD466D: ror     rcx, 3
 * 0000000140BD4671: mov     rax, rbx
 * 0000000140BD4674: xor     rdx, rcx
 * 0000000140BD4677: mov     ebx, r8d
 * 0000000140BD467A: mul     rdx
 * 0000000140BD467D: mov     [rbp+8D0h+var_3E0], rdx
 * 0000000140BD4684: xor     rax, rdx
 * 0000000140BD4687: xor     edx, edx
 * 0000000140BD4689: div     rbx
 * 0000000140BD468C: lea     r10d, [r11+rdx]
 * 0000000140BD4690: rdtsc
 * 0000000140BD4692: shl     rdx, 20h
 * 0000000140BD4696: or      rax, rdx
 * 0000000140BD4699: mov     rcx, rax
 * 0000000140BD469C: mov     r8, rax
 * 0000000140BD469F: ror     rcx, 3
 * 0000000140BD46A3: mov     rax, r12
 * 0000000140BD46A6: xor     r8, rcx
 * 0000000140BD46A9: mul     r8
 * 0000000140BD46AC: xor     rax, rdx
 * 0000000140BD46AF: mov     [rbp+8D0h+var_3D8], rdx
 * 0000000140BD46B6: xor     edx, edx
 * 0000000140BD46B8: div     rbx
 * 0000000140BD46BB: add     edx, r11d
 * 0000000140BD46BE: cmp     edx, r10d
 * 0000000140BD46C1: jz      short loc_140BD4690
 * 0000000140BD46C3: mov     r12, [rbp+8D0h+arg_0]
 * 0000000140BD46CA: xor     r11d, r11d
 * 0000000140BD46CD: mov     eax, r10d
 * 0000000140BD46D0: bts     r9, rax
 * 0000000140BD46D4: mov     eax, edx
 * 0000000140BD46D6: btr     r9, rax
 * 0000000140BD46DA: cmp     dword ptr [r12+944h], 3
 * 0000000140BD46E3: mov     rbx, [r12+7B0h]
 * 0000000140BD46EB: mov     rsi, [r12+7A8h]
 * 0000000140BD46F3: jnz     loc_140BD488B
 * 0000000140BD46F9: mov     r12, [rsp+9D0h+var_978]
 * 0000000140BD46FE: test    r12, r12
 * 0000000140BD4701: jz      loc_140BD4884
 * 0000000140BD4707: mov     rcx, [rbp+8D0h+arg_0]
 * 0000000140BD470E: mov     rax, [rcx+370h]
 * 0000000140BD4715: mov     byte ptr [rbx], 13h
 * 0000000140BD4718: mov     byte ptr [rbx+1], 1
 * 0000000140BD471C: mov     [rbx+2], r11w
 * 0000000140BD4721: mov     [rbx+18h], rax
 * 0000000140BD4725: mov     [rbx+20h], r12
 * 0000000140BD4729: mov     [rbx+38h], r11
 * 0000000140BD472D: mov     [rbx+10h], r11
 * 0000000140BD4731: mov     [rbx+28h], r9
 * 0000000140BD4735: mov     rax, [rcx+360h]
 * 0000000140BD473C: mov     rcx, [r12+8]
 * 0000000140BD4741: mov     r8, [r12]
 * 0000000140BD4745: mov     edx, [r12+10h]
 * 0000000140BD474A: call    KeGuardDispatchICall
 * 0000000140BD474F: mov     r9, [r12]
 * 0000000140BD4753: mov     rcx, r12
 * 0000000140BD4756: rol     rcx, 11h
 * 0000000140BD475A: mov     r10, 7010008004002001h
 * 0000000140BD4764: xor     rcx, r12
 * 0000000140BD4767: mov     rax, r10
 * 0000000140BD476A: mul     rcx
 * 0000000140BD476D: mov     ecx, 4
 * 0000000140BD4772: mov     [rbp+8D0h+var_3D0], rdx
 * 0000000140BD4779: xor     rdx, rax
 * 0000000140BD477C: lea     rax, [r12+18h]
 * 0000000140BD4781: mov     r8, rdx
 * 0000000140BD4784: xor     r11d, r11d
 * 0000000140BD4787: lea     r12d, [rcx-3]
 * 0000000140BD478B: xor     [rax], r8
 * 0000000140BD478E: lea     rax, [rax-8]
 * 0000000140BD4792: rol     r8, cl
 * 0000000140BD4795: sub     ecx, r12d
 * 0000000140BD4798: jnz     short loc_140BD478B
 * 0000000140BD479A: and     dl, 0Fh
 * 0000000140BD479D: cmp     dl, 7
 * 0000000140BD47A0: jnb     short loc_140BD4808
 * 0000000140BD47A2: mov     rax, r10
 * 0000000140BD47A5: mov     rcx, r9
 * 0000000140BD47A8: rol     rcx, 11h
 * 0000000140BD47AC: mov     r10d, 6
 * 0000000140BD47B2: xor     rcx, r9
 * 0000000140BD47B5: mul     rcx
 * 0000000140BD47B8: mov     [rbp+8D0h+var_3C8], rdx
 * 0000000140BD47BF: xor     rdx, rax
 * 0000000140BD47C2: add     r8, rdx
 * 0000000140BD47C5: lea     rax, [r9+28h]
 * 0000000140BD47C9: movsx   edx, word ptr [r9+8]
 * 0000000140BD47CE: xor     [rax], r8
 * 0000000140BD47D1: mov     ecx, r10d
 * 0000000140BD47D4: rol     r8, cl
 * 0000000140BD47D7: lea     rax, [rax-8]
 * 0000000140BD47DB: sub     r10d, r12d
 * 0000000140BD47DE: jnz     short loc_140BD47CE
 * 0000000140BD47E0: sub     rdx, 30h ; '0'
 * 0000000140BD47E4: shr     rdx, 3
 * 0000000140BD47E8: test    edx, edx
 * 0000000140BD47EA: jz      short loc_140BD4808
 * 0000000140BD47EC: movsxd  r10, edx
 * 0000000140BD47EF: add     r10, 5
 * 0000000140BD47F3: lea     r10, [r9+r10*8]
 * 0000000140BD47F7: xor     [r10], r8
 * 0000000140BD47FA: mov     ecx, edx
 * 0000000140BD47FC: rol     r8, cl
 * 0000000140BD47FF: lea     r10, [r10-8]
 * 0000000140BD4803: sub     edx, r12d
 * 0000000140BD4806: jnz     short loc_140BD47F7
 * 0000000140BD4808: mov     r12, [rbp+8D0h+arg_0]
 * 0000000140BD480F: mov     r8d, 1
 * 0000000140BD4815: mov     [rbx+40h], r15
 * 0000000140BD4819: mov     eax, [r12+9D8h]
 * 0000000140BD4821: test    al, al
 * 0000000140BD4823: jns     loc_140BD48B2
 * 0000000140BD4829: lea     r10, [r14-48h]
 * 0000000140BD482D: mov     [r10+40h], rbx
 * 0000000140BD4831: rdtsc
 * 0000000140BD4833: shl     rdx, 20h
 * 0000000140BD4837: mov     r14, 7010008004002001h
 * 0000000140BD4841: or      rax, rdx
 * 0000000140BD4844: mov     rcx, rax
 * 0000000140BD4847: mov     rdx, rax
 * 0000000140BD484A: ror     rcx, 3
 * 0000000140BD484E: mov     rax, r14
 * 0000000140BD4851: xor     rdx, rcx
 * 0000000140BD4854: mov     ecx, 19h
 * 0000000140BD4859: mul     rdx
 * 0000000140BD485C: mov     [rbp+8D0h+var_3C0], rdx
 * 0000000140BD4863: xor     rdx, rax
 * 0000000140BD4866: lea     rax, [r10+48h]
 * 0000000140BD486A: xor     [rax], rdx
 * 0000000140BD486D: lea     rax, [rax+8]
 * 0000000140BD4871: sub     rcx, r8
 * 0000000140BD4874: jnz     short loc_140BD486A
 * 0000000140BD4876: mov     dword ptr [r10+48h], 48513148h
 * 0000000140BD487E: mov     [r10+20h], rdx
 * 0000000140BD4882: jmp     short loc_140BD48BF
 * 0000000140BD4884: mov     r12, [rbp+8D0h+arg_0]
 * 0000000140BD488B: mov     byte ptr [rbx], 13h
 * 0000000140BD488E: mov     r8d, 1
 * 0000000140BD4894: mov     [rbx+1], r8b
 * 0000000140BD4898: mov     [rbx+2], r11w
 * 0000000140BD489D: mov     [rbx+18h], r14
 * 0000000140BD48A1: mov     [rbx+20h], r9
 * 0000000140BD48A5: mov     [rbx+38h], r11
 * 0000000140BD48A9: mov     [rbx+10h], r11
 * 0000000140BD48AD: jmp     loc_140BD4815
 * 0000000140BD48B2: mov     r10, rbx
 * 0000000140BD48B5: mov     r14, 7010008004002001h
 * 0000000140BD48BF: mov     rdx, [r12+0AE0h]
 * 0000000140BD48C7: test    rdx, rdx
 * 0000000140BD48CA: jz      loc_140BD4951
 * 0000000140BD48D0: mov     rdx, [rdx+20h]
 * 0000000140BD48D4: mov     eax, 0E04C2400h
 * 0000000140BD48D9: mov     rcx, rdx
 * 0000000140BD48DC: mov     r14d, 0Fh
 * 0000000140BD48E2: xor     rcx, rax
 * 0000000140BD48E5: shr     rcx, 4
 * 0000000140BD48E9: xor     rcx, rdx
 * 0000000140BD48EC: shr     rcx, 4
 * 0000000140BD48F0: xor     rcx, [r12+588h]
 * 0000000140BD48F8: mov     r9b, cl
 * 0000000140BD48FB: mov     r11, rcx
 * 0000000140BD48FE: and     r9b, r14b
 * 0000000140BD4901: jnz     short loc_140BD4906
 * 0000000140BD4903: mov     r9b, r8b
 * 0000000140BD4906: mov     r8, rcx
 * 0000000140BD4909: and     r8, r14
 * 0000000140BD490C: add     r8, rdx
 * 0000000140BD490F: mov     rdx, [r8]
 * 0000000140BD4912: mov     rax, rdx
 * 0000000140BD4915: xor     rax, 1DF400h
 * 0000000140BD491B: shr     rax, 4
 * 0000000140BD491F: xor     rax, rdx
 * 0000000140BD4922: shr     rax, 4
 * 0000000140BD4926: xor     rcx, rax
 * 0000000140BD4929: add     r9b, 0FFh
 * 0000000140BD492D: jnz     short loc_140BD4906
 * 0000000140BD492F: mov     r14, 7010008004002001h
 * 0000000140BD4939: bt      r11, 0Ch
 * 0000000140BD493E: jnb     short loc_140BD4943
 * 0000000140BD4940: xor     r10, r11
 * 0000000140BD4943: mov     [r8], r10
 * 0000000140BD4946: xor     r11d, r11d
 * 0000000140BD4949: mov     r10, [r12+0AE0h]
 * 0000000140BD4951: lock or [rsp+9D0h+var_9D0], r11d
 * 0000000140BD4956: mov     ecx, [r12+858h]
 * 0000000140BD495E: test    ecx, ecx
 * 0000000140BD4960: jz      loc_140BD4DF9
 * 0000000140BD4966: sub     ecx, 1
 * 0000000140BD4969: jz      loc_140BD4DE0
 * 0000000140BD496F: sub     ecx, 1
 * 0000000140BD4972: jz      loc_140BD4DCC
 * 0000000140BD4978: sub     ecx, 1
 * 0000000140BD497B: jz      loc_140BD4C0F
 * 0000000140BD4981: cmp     ecx, 1
 * 0000000140BD4984: jz      loc_140BD4A0C
 * 0000000140BD498A: mov     r8, [r12+9E0h]
 * 0000000140BD4992: mov     [r8+48h], r10
 * 0000000140BD4996: lock or [rsp+9D0h+var_9D0], r11d
 * 0000000140BD499B: rdtsc
 * 0000000140BD499D: shl     rdx, 20h
 * 0000000140BD49A1: or      rax, rdx
 * 0000000140BD49A4: mov     rcx, rax
 * 0000000140BD49A7: mov     rdx, rax
 * 0000000140BD49AA: ror     rcx, 3
 * 0000000140BD49AE: mov     rax, r14
 * 0000000140BD49B1: xor     rdx, rcx
 * 0000000140BD49B4: mul     rdx
 * 0000000140BD49B7: mov     rcx, rdx
 * 0000000140BD49BA: mov     [rbp+8D0h+var_2C8], rdx
 * 0000000140BD49C1: xor     rcx, rax
 * 0000000140BD49C4: mov     rax, 0ABCC77118461CEFDh
 * 0000000140BD49CE: mul     rcx
 * 0000000140BD49D1: shr     rdx, 1Ah
 * 0000000140BD49D5: imul    rax, rdx, 5F5E100h
 * 0000000140BD49DC: sub     rcx, rax
 * 0000000140BD49DF: mov     rax, 0D6BF94D5E57A42BDh
 * 0000000140BD49E9: add     rcx, 47868C00h
 * 0000000140BD49F0: imul    rcx
 * 0000000140BD49F3: add     rdx, rcx
 * 0000000140BD49F6: sar     rdx, 17h
 * 0000000140BD49FA: mov     rax, rdx
 * 0000000140BD49FD: shr     rax, 3Fh
 * 0000000140BD4A01: add     rdx, rax
 * 0000000140BD4A04: mov     [r8], edx
 * 0000000140BD4A07: jmp     loc_140BD4EA2
 * 0000000140BD4A0C: mov     r8, [r12+0A28h]
 * 0000000140BD4A14: xor     r9d, r9d
 * 0000000140BD4A17: mov     rcx, [r12+0A38h]
 * 0000000140BD4A1F: mov     rdx, rbx
 * 0000000140BD4A22: mov     rax, [r12+0A30h]
 * 0000000140BD4A2A: mov     rdi, [r12+9E0h]
 * 0000000140BD4A32: mov     byte ptr [r8], 12h
 * 0000000140BD4A36: mov     byte ptr [r8+2], 58h ; 'X'
 * 0000000140BD4A3B: mov     [r8+50h], r11b
 * 0000000140BD4A3F: mov     [r8+8], rdi
 * 0000000140BD4A43: mov     [r8+20h], rax
 * 0000000140BD4A47: mov     [r8+28h], r11
 * 0000000140BD4A4B: mov     [r8+30h], rcx
 * 0000000140BD4A4F: mov     [r8+51h], r11b
 * 0000000140BD4A53: mov     [r8+38h], r11
 * 0000000140BD4A57: mov     [r8+52h], r11b
 * 0000000140BD4A5B: xor     r8d, r8d
 * 0000000140BD4A5E: mov     rax, [r12+2C0h]
 * 0000000140BD4A66: mov     rcx, [r12+0A28h]
 * 0000000140BD4A6E: call    KeGuardDispatchICall
 * 0000000140BD4A73: xor     r11d, r11d
 * 0000000140BD4A76: test    al, al
 * 0000000140BD4A78: jnz     loc_140BD4EA2
 * 0000000140BD4A7E: lea     r10d, [r11+1]
 * 0000000140BD4A82: cmp     [r12+918h], r11d
 * 0000000140BD4A8A: jnz     loc_140BD4BB2
 * 0000000140BD4A90: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BD4A9A: add     rax, r12
 * 0000000140BD4A9D: mov     [r12+920h], rax
 * 0000000140BD4AA5: mov     [r12+928h], r11
 * 0000000140BD4AAD: mov     qword ptr [r12+930h], 104h
 * 0000000140BD4AB9: mov     [r12+938h], rdi
 * 0000000140BD4AC1: mov     [r12+918h], r10d
 * 0000000140BD4AC9: mov     ecx, [r12+9D8h]
 * 0000000140BD4AD1: bt      ecx, 1Dh
 * 0000000140BD4AD5: jb      loc_140BD4BB2
 * 0000000140BD4ADB: test    dword ptr [r12+9DCh], 200000h
 * 0000000140BD4AE7: jz      loc_140BD4BB2
 * 0000000140BD4AED: test    r10b, cl
 * 0000000140BD4AF0: jz      loc_140BD4BB2
 * 0000000140BD4AF6: mov     ecx, [r12+0A74h]
 * 0000000140BD4AFE: mov     eax, [r12+804h]
 * 0000000140BD4B06: mov     r10, [r12+838h]
 * 0000000140BD4B0E: sub     eax, ecx
 * 0000000140BD4B10: mov     r8, [r12+0A78h]
 * 0000000140BD4B18: lea     rdx, [rcx+r12]
 * 0000000140BD4B1C: mov     ecx, eax
 * 0000000140BD4B1E: shr     rcx, 3
 * 0000000140BD4B22: lea     r9, [rdx+rcx*8]
 * 0000000140BD4B26: jmp     short loc_140BD4B49
 * 0000000140BD4B28: xor     [rdx], r8
 * 0000000140BD4B2B: mov     rax, [rdx]
 * 0000000140BD4B2E: movzx   ecx, r8b
 * 0000000140BD4B32: xor     rax, r10
 * 0000000140BD4B35: and     ecx, 3Fh
 * 0000000140BD4B38: ror     r8, cl
 * 0000000140BD4B3B: add     r8, rax
 * 0000000140BD4B3E: xor     r8, 0EFAh
 * 0000000140BD4B45: add     rdx, 8
 * 0000000140BD4B49: cmp     rdx, r9
 * 0000000140BD4B4C: jnz     short loc_140BD4B28
 * 0000000140BD4B4E: btr     dword ptr [r12+9DCh], 15h
 * 0000000140BD4B58: cmp     r8, [r12+0A80h]
 * 0000000140BD4B60: jz      short loc_140BD4BAC
 * 0000000140BD4B62: mov     ecx, [r12+804h]
 * 0000000140BD4B6A: mov     rax, [r12+588h]
 * 0000000140BD4B72: mov     [rax], r12
 * 0000000140BD4B75: mov     [rax+10h], ecx
 * 0000000140BD4B78: mov     rcx, [r12+0A80h]
 * 0000000140BD4B80: cmp     [r12+918h], r11d
 * 0000000140BD4B88: jnz     short loc_140BD4B99
 * 0000000140BD4B8A: mov     rax, [r12+588h]
 * 0000000140BD4B92: xor     rcx, r8
 * 0000000140BD4B95: mov     [rax+18h], rcx
 * 0000000140BD4B99: xor     edx, edx
 * 0000000140BD4B9B: mov     r9d, 100h
 * 0000000140BD4BA1: mov     rcx, r12
 * 0000000140BD4BA4: call    sub_140BDA384
 * 0000000140BD4BA9: xor     r11d, r11d
 * 0000000140BD4BAC: mov     r10d, 1
 * 0000000140BD4BB2: lea     rcx, [r12+918h]
 * 0000000140BD4BBA: mov     r12d, 5
 * 0000000140BD4BC0: lea     rdx, [rbp+8D0h+var_668]
 * 0000000140BD4BC7: mov     rax, [rcx]
 * 0000000140BD4BCA: add     r13d, 0FFFFFFF8h
 * 0000000140BD4BCE: mov     [rdx], rax
 * 0000000140BD4BD1: add     rcx, 8
 * 0000000140BD4BD5: add     rdx, 8
 * 0000000140BD4BD9: sub     r12, r10
 * 0000000140BD4BDC: jnz     short loc_140BD4BC7
 * 0000000140BD4BDE: mov     r12, [rbp+8D0h+arg_0]
 * 0000000140BD4BE5: test    r13d, r13d
 * 0000000140BD4BE8: jz      loc_140BD4EA8
 * 0000000140BD4BEE: mov     r12d, 0FFFFFFFFh
 * 0000000140BD4BF4: mov     al, [rcx]
 * 0000000140BD4BF6: add     rcx, r10
 * 0000000140BD4BF9: mov     [rdx], al
 * 0000000140BD4BFB: add     rdx, r10
 * 0000000140BD4BFE: add     r13d, r12d
 * 0000000140BD4C01: jnz     short loc_140BD4BF4
 * 0000000140BD4C03: mov     r12, [rbp+8D0h+arg_0]
 * 0000000140BD4C0A: jmp     loc_140BD4EA8
 * 0000000140BD4C0F: mov     rdi, [r12+9E0h]
 * 0000000140BD4C17: mov     r10d, 1
 * 0000000140BD4C1D: mov     rax, [r12+6A8h]
 * 0000000140BD4C25: mov     rcx, [rdi+rax]
 * 0000000140BD4C29: test    rcx, rcx
 * 0000000140BD4C2C: jz      loc_140BD4DB6
 * 0000000140BD4C32: cmp     [r12+918h], r11d
 * 0000000140BD4C3A: jnz     loc_140BD4D62
 * 0000000140BD4C40: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BD4C4A: add     rax, r12
 * 0000000140BD4C4D: mov     [r12+920h], rax
 * 0000000140BD4C55: mov     [r12+928h], r11
 * 0000000140BD4C5D: mov     qword ptr [r12+930h], 104h
 * 0000000140BD4C69: mov     [r12+938h], rcx
 * 0000000140BD4C71: mov     [r12+918h], r10d
 * 0000000140BD4C79: mov     ecx, [r12+9D8h]
 * 0000000140BD4C81: bt      ecx, 1Dh
 * 0000000140BD4C85: jb      loc_140BD4D62
 * 0000000140BD4C8B: test    dword ptr [r12+9DCh], 200000h
 * 0000000140BD4C97: jz      loc_140BD4D62
 * 0000000140BD4C9D: test    r10b, cl
 * 0000000140BD4CA0: jz      loc_140BD4D62
 * 0000000140BD4CA6: mov     ecx, [r12+0A74h]
 * 0000000140BD4CAE: mov     eax, [r12+804h]
 * 0000000140BD4CB6: mov     r10, [r12+838h]
 * 0000000140BD4CBE: sub     eax, ecx
 * 0000000140BD4CC0: mov     r8, [r12+0A78h]
 * 0000000140BD4CC8: lea     rdx, [rcx+r12]
 * 0000000140BD4CCC: mov     ecx, eax
 * 0000000140BD4CCE: shr     rcx, 3
 * 0000000140BD4CD2: lea     r9, [rdx+rcx*8]
 * 0000000140BD4CD6: jmp     short loc_140BD4CF9
 * 0000000140BD4CD8: xor     [rdx], r8
 * 0000000140BD4CDB: mov     rax, [rdx]
 * 0000000140BD4CDE: movzx   ecx, r8b
 * 0000000140BD4CE2: xor     rax, r10
 * 0000000140BD4CE5: and     ecx, 3Fh
 * 0000000140BD4CE8: ror     r8, cl
 * 0000000140BD4CEB: add     r8, rax
 * 0000000140BD4CEE: xor     r8, 0EFAh
 * 0000000140BD4CF5: add     rdx, 8
 * 0000000140BD4CF9: cmp     rdx, r9
 * 0000000140BD4CFC: jnz     short loc_140BD4CD8
 * 0000000140BD4CFE: btr     dword ptr [r12+9DCh], 15h
 * 0000000140BD4D08: cmp     r8, [r12+0A80h]
 * 0000000140BD4D10: jz      short loc_140BD4D5C
 * 0000000140BD4D12: mov     ecx, [r12+804h]
 * 0000000140BD4D1A: mov     rax, [r12+588h]
 * 0000000140BD4D22: mov     [rax], r12
 * 0000000140BD4D25: mov     [rax+10h], ecx
 * 0000000140BD4D28: mov     rcx, [r12+0A80h]
 * 0000000140BD4D30: cmp     [r12+918h], r11d
 * 0000000140BD4D38: jnz     short loc_140BD4D49
 * 0000000140BD4D3A: mov     rax, [r12+588h]
 * 0000000140BD4D42: xor     rcx, r8
 * 0000000140BD4D45: mov     [rax+18h], rcx
 * 0000000140BD4D49: xor     edx, edx
 * 0000000140BD4D4B: mov     r9d, 100h
 * 0000000140BD4D51: mov     rcx, r12
 * 0000000140BD4D54: call    sub_140BDA384
 * 0000000140BD4D59: xor     r11d, r11d
 * 0000000140BD4D5C: mov     r10d, 1
 * 0000000140BD4D62: lea     rcx, [r12+918h]
 * 0000000140BD4D6A: mov     r12d, 5
 * 0000000140BD4D70: lea     rdx, [rbp+8D0h+var_668]
 * 0000000140BD4D77: mov     rax, [rcx]
 * 0000000140BD4D7A: add     r13d, 0FFFFFFF8h
 * 0000000140BD4D7E: mov     [rdx], rax
 * 0000000140BD4D81: add     rcx, 8
 * 0000000140BD4D85: add     rdx, 8
 * 0000000140BD4D89: sub     r12, r10
 * 0000000140BD4D8C: jnz     short loc_140BD4D77
 * 0000000140BD4D8E: mov     r12, [rbp+8D0h+arg_0]
 * 0000000140BD4D95: test    r13d, r13d
 * 0000000140BD4D98: jz      short loc_140BD4DB6
 * 0000000140BD4D9A: mov     r12d, 0FFFFFFFFh
 * 0000000140BD4DA0: mov     al, [rcx]
 * 0000000140BD4DA2: add     rcx, r10
 * 0000000140BD4DA5: mov     [rdx], al
 * 0000000140BD4DA7: add     rdx, r10
 * 0000000140BD4DAA: add     r13d, r12d
 * 0000000140BD4DAD: jnz     short loc_140BD4DA0
 * 0000000140BD4DAF: mov     r12, [rbp+8D0h+arg_0]
 * 0000000140BD4DB6: lock or [rsp+9D0h+var_9D0], r11d
 * 0000000140BD4DBB: mov     rax, [r12+6A8h]
 * 0000000140BD4DC3: mov     [rdi+rax], rbx
 * 0000000140BD4DC7: jmp     loc_140BD4EA8
 * 0000000140BD4DCC: mov     rax, [r12+7E0h]
 * 0000000140BD4DD4: mov     [rax+80h], r10
 * 0000000140BD4DDB: jmp     loc_140BD4EA2
 * 0000000140BD4DE0: mov     rcx, [r12+7E0h]
 * 0000000140BD4DE8: mov     rax, [r12+638h]
 * 0000000140BD4DF0: mov     [rcx+rax], r10
 * 0000000140BD4DF4: jmp     loc_140BD4EA2
 * 0000000140BD4DF9: rdtsc
 * 0000000140BD4DFB: shl     rdx, 20h
 * 0000000140BD4DFF: or      rax, rdx
 * 0000000140BD4E02: mov     rcx, rax
 * 0000000140BD4E05: mov     rdx, rax
 * 0000000140BD4E08: ror     rcx, 3
 * 0000000140BD4E0C: mov     rax, r14
 * 0000000140BD4E0F: xor     rdx, rcx
 * 0000000140BD4E12: mul     rdx
 * 0000000140BD4E15: mov     rcx, rdx
 * 0000000140BD4E18: mov     [rbp+8D0h+var_3B0], rdx
 * 0000000140BD4E1F: xor     rcx, rax
 * 0000000140BD4E22: mov     rax, 0ABCC77118461CEFDh
 * 0000000140BD4E2C: mul     rcx
 * 0000000140BD4E2F: shr     rdx, 1Ah
 * 0000000140BD4E33: imul    rax, rdx, 5F5E100h
 * 0000000140BD4E3A: sub     rcx, rax
 * 0000000140BD4E3D: sub     rdi, rcx
 * 0000000140BD4E40: rdtsc
 * 0000000140BD4E42: shl     rdx, 20h
 * 0000000140BD4E46: xor     r8d, r8d
 * 0000000140BD4E49: or      rax, rdx
 * 0000000140BD4E4C: mov     [rsp+9D0h+BugCheckParameter4], r10
 * 0000000140BD4E51: mov     rcx, rax
 * 0000000140BD4E54: mov     rdx, rax
 * 0000000140BD4E57: ror     rcx, 3
 * 0000000140BD4E5B: mov     rax, r14
 * 0000000140BD4E5E: xor     rdx, rcx
 * 0000000140BD4E61: mov     rcx, rsi
 * 0000000140BD4E64: mul     rdx
 * 0000000140BD4E67: mov     r9, rdx
 * 0000000140BD4E6A: mov     [rbp+8D0h+var_3A8], rdx
 * 0000000140BD4E71: xor     r9, rax
 * 0000000140BD4E74: mov     rax, 346DC5D63886594Bh
 * 0000000140BD4E7E: mul     r9
 * 0000000140BD4E81: shr     rdx, 0Bh
 * 0000000140BD4E85: imul    rax, rdx, 2710h
 * 0000000140BD4E8C: mov     rdx, rdi
 * 0000000140BD4E8F: sub     r9, rax
 * 0000000140BD4E92: mov     rax, [r12+1E8h]
 * 0000000140BD4E9A: call    KeGuardDispatchICall
 * 0000000140BD4E9F: xor     r11d, r11d
 * 0000000140BD4EA2: mov     r10d, 1
 * 0000000140BD4EA8: cmp     [rbp+8D0h+var_668], r11d
 * 0000000140BD4EAF: jz      loc_140BD542F
 * 0000000140BD4EB5: mov     r9d, [r12+9D8h]
 * 0000000140BD4EBD: bt      r9d, 0Eh
 * 0000000140BD4EC2: jb      loc_140BD542F
 * 0000000140BD4EC8: mov     rdi, [rbp+8D0h+var_650]
 * 0000000140BD4ECF: mov     rsi, [rbp+8D0h+var_648]
 * 0000000140BD4ED6: mov     r14, [rbp+8D0h+var_658]
 * 0000000140BD4EDD: mov     r15, [rbp+8D0h+var_660]
 * 0000000140BD4EE4: mov     [rbp+8D0h+var_900], rdi
 * 0000000140BD4EE8: mov     [rbp+8D0h+var_920], rsi
 * 0000000140BD4EEC: mov     [rbp+8D0h+var_910], r14
 * 0000000140BD4EF0: mov     [rbp+8D0h+var_930], r15
 * 0000000140BD4EF4: mov     rax, cr8
 * 0000000140BD4EF8: mov     ecx, 2
 * 0000000140BD4EFD: cmp     al, cl
 * 0000000140BD4EFF: jnb     short loc_140BD4F11
 * 0000000140BD4F01: mov     rax, cr8
 * 0000000140BD4F05: mov     cr8, rcx
 * 0000000140BD4F09: mov     r9d, [r12+9D8h]
 * 0000000140BD4F11: mov     r8, gs:20h
 * 0000000140BD4F1A: mov     rax, [r12+640h]
 * 0000000140BD4F22: mov     rcx, gs:20h
 * 0000000140BD4F2B: mov     r13, [r8+rax]
 * 0000000140BD4F2F: mov     rax, [r12+648h]
 * 0000000140BD4F37: mov     [rsp+9D0h+var_968], r13
 * 0000000140BD4F3C: mov     rdx, [rax+r8]
 * 0000000140BD4F40: mov     rax, [r12+658h]
 * 0000000140BD4F48: add     rdx, [r12+788h]
 * 0000000140BD4F50: mov     rbx, [rcx+rax]
 * 0000000140BD4F54: lea     rax, [rbp+8D0h+var_848]
 * 0000000140BD4F5B: mov     [rbp+8D0h+var_940], rbx
 * 0000000140BD4F5F: cmp     rax, r13
 * 0000000140BD4F62: ja      short loc_140BD4F7E
 * 0000000140BD4F64: mov     eax, [r12+5FCh]
 * 0000000140BD4F6C: mov     rcx, r13
 * 0000000140BD4F6F: sub     rcx, rax
 * 0000000140BD4F72: lea     rax, [rbp+8D0h+var_848]
 * 0000000140BD4F79: cmp     rax, rcx
 * 0000000140BD4F7C: jnb     short loc_140BD4FCD
 * 0000000140BD4F7E: mov     rax, [r12+650h]
 * 0000000140BD4F86: cmp     [r8+rax], r11b
 * 0000000140BD4F8A: jz      short loc_140BD4FBC
 * 0000000140BD4F8C: lea     rax, [rbp+8D0h+var_848]
 * 0000000140BD4F93: cmp     rax, rdx
 * 0000000140BD4F96: ja      short loc_140BD4FBC
 * 0000000140BD4F98: mov     eax, [r12+5F8h]
 * 0000000140BD4FA0: mov     rcx, rdx
 * 0000000140BD4FA3: sub     rcx, rax
 * 0000000140BD4FA6: lea     rax, [rbp+8D0h+var_848]
 * 0000000140BD4FAD: cmp     rax, rcx
 * 0000000140BD4FB0: jb      short loc_140BD4FBC
 * 0000000140BD4FB2: mov     r13, rdx
 * 0000000140BD4FB5: mov     [rsp+9D0h+var_968], rdx
 * 0000000140BD4FBA: jmp     short loc_140BD4FCD
 * 0000000140BD4FBC: mov     rax, [r12+688h]
 * 0000000140BD4FC4: mov     r13, [rbx+rax]
 * 0000000140BD4FC8: mov     [rsp+9D0h+var_968], r13
 * 0000000140BD4FCD: bt      r9d, 1Ah
 * 0000000140BD4FD2: jb      loc_140BD5658
 * 0000000140BD4FD8: test    dword ptr [r12+9DCh], 400000h
 * 0000000140BD4FE4: mov     [rbp+8D0h+var_908], r11
 * 0000000140BD4FE8: jnz     short loc_140BD4FFC
 * 0000000140BD4FEA: mov     rcx, cr0
 * 0000000140BD4FED: mov     rax, rcx
 * 0000000140BD4FF0: mov     [rbp+8D0h+var_908], rcx
 * 0000000140BD4FF4: btr     rax, 10h
 * 0000000140BD4FF9: mov     cr0, rax
 * 0000000140BD4FFC: mov     edi, [r12+0AE8h]
 * 0000000140BD5004: lea     rbx, [r12+0AF0h]
 * 0000000140BD500C: shl     rdi, 4
 * 0000000140BD5010: mov     edx, r11d
 * 0000000140BD5013: add     rdi, rbx
 * 0000000140BD5016: mov     [rsp+9D0h+var_978], rbx
 * 0000000140BD501B: mov     r9, rdi
 * 0000000140BD501E: mov     [rbp+8D0h+var_8F0], rdi
 * 0000000140BD5022: mov     [rbp+8D0h+var_8A8], rdi
 * 0000000140BD5026: cmp     [r12+0AECh], r11d
 * 0000000140BD502E: jbe     short loc_140BD5079
 * 0000000140BD5030: mov     esi, 10h
 * 0000000140BD5035: mov     rcx, [r9]
 * 0000000140BD5038: mov     rax, [r9+8]
 * 0000000140BD503C: mov     [rcx], rax
 * 0000000140BD503F: mov     rcx, cr4
 * 0000000140BD5042: test    rcx, 20080h
 * 0000000140BD5049: jz      short loc_140BD505B
 * 0000000140BD504B: mov     rax, rcx
 * 0000000140BD504E: btc     rax, 7
 * 0000000140BD5053: mov     cr4, rax
 * 0000000140BD5056: mov     cr4, rcx
 * 0000000140BD5059: jmp     short loc_140BD5061
 * 0000000140BD505B: mov     rax, cr3
 * 0000000140BD505E: mov     cr3, rax
 * 0000000140BD5061: add     r9, rsi
 * 0000000140BD5064: add     edx, r10d
 * 0000000140BD5067: cmp     edx, [r12+0AECh]
 * 0000000140BD506F: jb      short loc_140BD5035
 * 0000000140BD5071: mov     rsi, [rbp+8D0h+var_920]
 * 0000000140BD5075: mov     [rbp+8D0h+var_8A8], r9
 * 0000000140BD5079: mov     rcx, 7FFFFFFFF8h
 * 0000000140BD5083: cmp     rbx, rdi
 * 0000000140BD5086: jnb     loc_140BD52F7
 * 0000000140BD508C: mov     r13d, 4
 * 0000000140BD5092: test    dword ptr [r12+9DCh], 400000h
 * 0000000140BD509E: mov     esi, [rbx+8]
 * 0000000140BD50A1: mov     r8, [rbx]
 * 0000000140BD50A4: mov     dword ptr [rbp+8D0h+arg_8], esi
 * 0000000140BD50AA: jnz     short loc_140BD5109
 * 0000000140BD50AC: mov     edx, esi
 * 0000000140BD50AE: mov     rcx, r9
 * 0000000140BD50B1: cmp     esi, 8
 * 0000000140BD50B4: jb      short loc_140BD50DC
 * 0000000140BD50B6: mov     r10d, esi
 * 0000000140BD50B9: mov     edi, 1
 * 0000000140BD50BE: shr     r10, 3
 * 0000000140BD50C2: mov     rax, [rcx]
 * 0000000140BD50C5: add     edx, 0FFFFFFF8h
 * 0000000140BD50C8: mov     [r8], rax
 * 0000000140BD50CB: add     rcx, 8
 * 0000000140BD50CF: add     r8, 8
 * 0000000140BD50D3: sub     r10, rdi
 * 0000000140BD50D6: jnz     short loc_140BD50C2
 * 0000000140BD50D8: mov     rdi, [rbp+8D0h+var_8F0]
 * 0000000140BD50DC: test    edx, edx
 * 0000000140BD50DE: jz      loc_140BD52C1
 * 0000000140BD50E4: sub     r8, rcx
 * 0000000140BD50E7: mov     ebx, 0FFFFFFFFh
 * 0000000140BD50EC: mov     r10d, 1
 * 0000000140BD50F2: mov     al, [rcx]
 * 0000000140BD50F4: mov     [rcx+r8], al
 * 0000000140BD50F8: add     rcx, r10
 * 0000000140BD50FB: add     edx, ebx
 * 0000000140BD50FD: jnz     short loc_140BD50F2
 * 0000000140BD50FF: mov     rbx, [rsp+9D0h+var_978]
 * 0000000140BD5104: jmp     loc_140BD52C1
 * 0000000140BD5109: mov     rcx, r8
 * 0000000140BD510C: mov     [rbp+8D0h+var_8D8], r9
 * 0000000140BD5110: and     ecx, 0FFFh
 * 0000000140BD5116: lea     rdx, [rsi+0FFFh]
 * 0000000140BD511D: add     rdx, rcx
 * 0000000140BD5120: mov     r12d, esi
 * 0000000140BD5123: shr     rdx, 0Ch
 * 0000000140BD5127: test    edx, edx
 * 0000000140BD5129: jz      loc_140BD52BA
 * 0000000140BD512F: mov     rdi, [rbp+8D0h+arg_0]
 * 0000000140BD5136: mov     esi, 20080h
 * 0000000140BD513B: mov     eax, edx
 * 0000000140BD513D: mov     r9, 7FFFFFFFF8h
 * 0000000140BD5147: mov     [rbp+8D0h+var_8D0], rax
 * 0000000140BD514B: mov     r14d, 1
 * 0000000140BD5151: mov     r11, [rdi+5D8h]
 * 0000000140BD5158: lea     rcx, [rbp+8D0h+var_1D0]
 * 0000000140BD515F: mov     rax, r8
 * 0000000140BD5162: mov     rdx, r13
 * 0000000140BD5165: shr     rax, 9
 * 0000000140BD5169: mov     r10d, r13d
 * 0000000140BD516C: and     rax, r9
 * 0000000140BD516F: add     rax, r11
 * 0000000140BD5172: mov     [rcx], rax
 * 0000000140BD5175: lea     rcx, [rcx+8]
 * 0000000140BD5179: shr     rax, 9
 * 0000000140BD517D: and     rax, r9
 * 0000000140BD5180: add     rax, r11
 * 0000000140BD5183: sub     rdx, r14
 * 0000000140BD5186: jnz     short loc_140BD5172
 * 0000000140BD5188: mov     eax, 0FFFFFFFFh
 * 0000000140BD518D: add     r10d, eax
 * 0000000140BD5190: jz      short loc_140BD51A4
 * 0000000140BD5192: mov     rax, [rbp+r10*8+8D0h+var_1D0]
 * 0000000140BD519A: mov     ecx, [rax]
 * 0000000140BD519C: shr     cl, 7
 * 0000000140BD519F: test    r14b, cl
 * 0000000140BD51A2: jz      short loc_140BD5188
 * 0000000140BD51A4: mov     r15, [rbp+r10*8+8D0h+var_1D0]
 * 0000000140BD51AC: mov     [rbp+8D0h+var_950], r15
 * 0000000140BD51B0: mov     rax, [r15]
 * 0000000140BD51B3: or      rax, 62h
 * 0000000140BD51B7: mov     [r15], rax
 * 0000000140BD51BA: mov     rdx, cr4
 * 0000000140BD51BD: test    rsi, rdx
 * 0000000140BD51C0: jz      short loc_140BD51D2
 * 0000000140BD51C2: mov     rcx, rdx
 * 0000000140BD51C5: btc     rcx, 7
 * 0000000140BD51CA: mov     cr4, rcx
 * 0000000140BD51CD: mov     cr4, rdx
 * 0000000140BD51D0: jmp     short loc_140BD51D8
 * 0000000140BD51D2: mov     rcx, cr3
 * 0000000140BD51D5: mov     cr3, rcx
 * 0000000140BD51D8: mov     edx, 1000h
 * 0000000140BD51DD: mov     ecx, r8d
 * 0000000140BD51E0: and     ecx, 0FFFh
 * 0000000140BD51E6: mov     r10d, r12d
 * 0000000140BD51E9: sub     edx, ecx
 * 0000000140BD51EB: mov     r11, r8
 * 0000000140BD51EE: cmp     edx, r12d
 * 0000000140BD51F1: cmovb   r10d, edx
 * 0000000140BD51F5: mov     rdx, [rbp+8D0h+var_8D8]
 * 0000000140BD51F9: mov     r14d, r10d
 * 0000000140BD51FC: cmp     r10d, 8
 * 0000000140BD5200: jb      short loc_140BD5234
 * 0000000140BD5202: mov     r15d, r10d
 * 0000000140BD5205: mov     r9d, 1
 * 0000000140BD520B: shr     r15, 3
 * 0000000140BD520F: mov     rcx, [rdx]
 * 0000000140BD5212: add     r14d, 0FFFFFFF8h
 * 0000000140BD5216: mov     [r11], rcx
 * 0000000140BD5219: add     rdx, 8
 * 0000000140BD521D: add     r11, 8
 * 0000000140BD5221: sub     r15, r9
 * 0000000140BD5224: jnz     short loc_140BD520F
 * 0000000140BD5226: mov     r15, [rbp+8D0h+var_950]
 * 0000000140BD522A: mov     r9, 7FFFFFFFF8h
 * 0000000140BD5234: test    r14d, r14d
 * 0000000140BD5237: jz      short loc_140BD5266
 * 0000000140BD5239: sub     r11, rdx
 * 0000000140BD523C: mov     edi, 0FFFFFFFFh
 * 0000000140BD5241: mov     r9d, 1
 * 0000000140BD5247: mov     cl, [rdx]
 * 0000000140BD5249: mov     [rdx+r11], cl
 * 0000000140BD524D: add     rdx, r9
 * 0000000140BD5250: add     r14d, edi
 * 0000000140BD5253: jnz     short loc_140BD5247
 * 0000000140BD5255: mov     rdi, [rbp+8D0h+arg_0]
 * 0000000140BD525C: mov     r9, 7FFFFFFFF8h
 * 0000000140BD5266: mov     ecx, r10d
 * 0000000140BD5269: add     [rbp+8D0h+var_8D8], rcx
 * 0000000140BD526D: add     r8, rcx
 * 0000000140BD5270: sub     r12d, r10d
 * 0000000140BD5273: mov     [r15], rax
 * 0000000140BD5276: mov     rcx, cr4
 * 0000000140BD5279: test    rsi, rcx
 * 0000000140BD527C: jz      short loc_140BD528E
 * 0000000140BD527E: mov     rax, rcx
 * 0000000140BD5281: btc     rax, 7
 * 0000000140BD5286: mov     cr4, rax
 * 0000000140BD5289: mov     cr4, rcx
 * 0000000140BD528C: jmp     short loc_140BD5294
 * 0000000140BD528E: mov     rax, cr3
 * 0000000140BD5291: mov     cr3, rax
 * 0000000140BD5294: mov     r14d, 1
 * 0000000140BD529A: sub     [rbp+8D0h+var_8D0], r14
 * 0000000140BD529E: jnz     loc_140BD5151
 * 0000000140BD52A4: mov     r9, [rbp+8D0h+var_8A8]
 * 0000000140BD52A8: xor     r11d, r11d
 * 0000000140BD52AB: mov     rbx, [rsp+9D0h+var_978]
 * 0000000140BD52B0: mov     rdi, [rbp+8D0h+var_8F0]
 * 0000000140BD52B4: mov     esi, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BD52BA: mov     r12, [rbp+8D0h+arg_0]
 * 0000000140BD52C1: add     rbx, 10h
 * 0000000140BD52C5: mov     eax, esi
 * 0000000140BD52C7: add     r9, rax
 * 0000000140BD52CA: mov     [rsp+9D0h+var_978], rbx
 * 0000000140BD52CF: mov     [rbp+8D0h+var_8A8], r9
 * 0000000140BD52D3: cmp     rbx, rdi
 * 0000000140BD52D6: jb      loc_140BD5092
 * 0000000140BD52DC: mov     r13, [rsp+9D0h+var_968]
 * 0000000140BD52E1: mov     rcx, 7FFFFFFFF8h
 * 0000000140BD52EB: mov     rsi, [rbp+8D0h+var_920]
 * 0000000140BD52EF: mov     r14, [rbp+8D0h+var_910]
 * 0000000140BD52F3: mov     r15, [rbp+8D0h+var_930]
 * 0000000140BD52F7: test    dword ptr [r12+9DCh], 400000h
 * 0000000140BD5303: jnz     short loc_140BD531C
 * 0000000140BD5305: mov     rax, [r12+228h]
 * 0000000140BD530D: mov     byte ptr [rax], 0C3h
 * 0000000140BD5310: mov     rax, [rbp+8D0h+var_908]
 * 0000000140BD5314: mov     cr0, rax
 * 0000000140BD5317: jmp     loc_140BD5650
 * 0000000140BD531C: mov     [rbp+8D0h+arg_18], 0C3h
 * 0000000140BD5323: lea     r8, [rbp+8D0h+arg_18]
 * 0000000140BD532A: mov     r9, [r12+228h]
 * 0000000140BD5332: mov     r11d, 4
 * 0000000140BD5338: mov     rdx, [r12+5D8h]
 * 0000000140BD5340: mov     rax, r9
 * 0000000140BD5343: shr     rax, 9
 * 0000000140BD5347: mov     r10d, r11d
 * 0000000140BD534A: and     rax, rcx
 * 0000000140BD534D: mov     rbx, 7FFFFFFFF8h
 * 0000000140BD5357: add     rax, rdx
 * 0000000140BD535A: lea     rcx, [rbp+8D0h+var_1B0]
 * 0000000140BD5361: lea     edi, [r11-3]
 * 0000000140BD5365: mov     [rcx], rax
 * 0000000140BD5368: lea     rcx, [rcx+8]
 * 0000000140BD536C: shr     rax, 9
 * 0000000140BD5370: and     rax, rbx
 * 0000000140BD5373: add     rax, rdx
 * 0000000140BD5376: sub     r11, rdi
 * 0000000140BD5379: jnz     short loc_140BD5365
 * 0000000140BD537B: mov     eax, 0FFFFFFFFh
 * 0000000140BD5380: add     r10d, eax
 * 0000000140BD5383: jz      short loc_140BD5397
 * 0000000140BD5385: mov     rax, [rbp+r10*8+8D0h+var_1B0]
 * 0000000140BD538D: mov     ecx, [rax]
 * 0000000140BD538F: shr     cl, 7
 * 0000000140BD5392: test    dil, cl
 * 0000000140BD5395: jz      short loc_140BD537B
 * 0000000140BD5397: mov     r11, [rbp+r10*8+8D0h+var_1B0]
 * 0000000140BD539F: mov     rax, [r11]
 * 0000000140BD53A2: or      rax, 62h
 * 0000000140BD53A6: mov     [r11], rax
 * 0000000140BD53A9: mov     rdx, cr4
 * 0000000140BD53AC: mov     ebx, 20080h
 * 0000000140BD53B1: test    rbx, rdx
 * 0000000140BD53B4: jz      short loc_140BD53C6
 * 0000000140BD53B6: mov     rcx, rdx
 * 0000000140BD53B9: btc     rcx, 7
 * 0000000140BD53BE: mov     cr4, rcx
 * 0000000140BD53C1: mov     cr4, rdx
 * 0000000140BD53C4: jmp     short loc_140BD53CC
 * 0000000140BD53C6: mov     rcx, cr3
 * 0000000140BD53C9: mov     cr3, rcx
 * 0000000140BD53CC: mov     ecx, r9d
 * 0000000140BD53CF: mov     r10d, 1000h
 * 0000000140BD53D5: and     ecx, 0FFFh
 * 0000000140BD53DB: mov     edx, edi
 * 0000000140BD53DD: sub     r10d, ecx
 * 0000000140BD53E0: cmp     r10d, edi
 * 0000000140BD53E3: cmovb   edx, r10d
 * 0000000140BD53E7: cmp     edx, 8
 * 0000000140BD53EA: jb      short loc_140BD5409
 * 0000000140BD53EC: mov     r10d, edx
 * 0000000140BD53EF: shr     r10, 3
 * 0000000140BD53F3: mov     rcx, [r8]
 * 0000000140BD53F6: add     edx, 0FFFFFFF8h
 * 0000000140BD53F9: mov     [r9], rcx
 * 0000000140BD53FC: add     r8, 8
 * 0000000140BD5400: add     r9, 8
 * 0000000140BD5404: sub     r10, rdi
 * 0000000140BD5407: jnz     short loc_140BD53F3
 * 0000000140BD5409: test    edx, edx
 * 0000000140BD540B: jz      loc_140BD562F
 * 0000000140BD5411: sub     r9, r8
 * 0000000140BD5414: mov     r15d, 0FFFFFFFFh
 * 0000000140BD541A: mov     cl, [r8]
 * 0000000140BD541D: mov     [r8+r9], cl
 * 0000000140BD5421: add     r8, rdi
 * 0000000140BD5424: add     edx, r15d
 * 0000000140BD5427: jz      loc_140BD562B
 * 0000000140BD542D: jmp     short loc_140BD541A
 * 0000000140BD542F: test    dword ptr [r12+9D8h], 20000000h
 * 0000000140BD543B: jnz     short loc_140BD5499
 * 0000000140BD543D: cmp     dword ptr [rbp+8D0h+arg_8], r11d
 * 0000000140BD5444: jz      short loc_140BD5499
 * 0000000140BD5446: mov     ecx, [r12+944h]
 * 0000000140BD544E: sub     ecx, 1
 * 0000000140BD5451: jz      short loc_140BD546E
 * 0000000140BD5453: mov     eax, 2
 * 0000000140BD5458: cmp     ecx, eax
 * 0000000140BD545A: jnz     short loc_140BD5499
 * 0000000140BD545C: mov     rax, [r12+368h]
 * 0000000140BD5464: mov     [r12+108h], rax
 * 0000000140BD546C: jmp     short loc_140BD5499
 * 0000000140BD546E: add     qword ptr [r12+7E8h], 0FFFFFFFFFFFFFFF8h
 * 0000000140BD5477: mov     rcx, [r12+7E8h]
 * 0000000140BD547F: mov     edx, [rcx]
 * 0000000140BD5481: mov     [r12+7F0h], edx
 * 0000000140BD5489: mov     rcx, [r12+238h]
 * 0000000140BD5491: mov     [r12+108h], rcx
 * 0000000140BD5499: mov     rax, r12
 * 0000000140BD549C: add     rsp, 998h
 * 0000000140BD54A3: pop     r15
 * 0000000140BD54A5: pop     r14
 * 0000000140BD54A7: pop     r13
 * 0000000140BD54A9: pop     r12
 * 0000000140BD54AB: pop     rdi
 * 0000000140BD54AC: pop     rsi
 * 0000000140BD54AD: pop     rbx
 * 0000000140BD54AE: pop     rbp
 * 0000000140BD54AF: retn
 * 0000000140BD54B1: mov     r9d, 5; BugCheckParameter3
 * 0000000140BD54B7: mov     [rbp+8D0h+var_82C], 0E8000009h
 * 0000000140BD54C1: mov     ecx, [rbp+8D0h+var_82C]
 * 0000000140BD54C7: mov     r8, rbx; BugCheckParameter2
 * 0000000140BD54CA: rol     ecx, 65h; BugCheckCode
 * 0000000140BD54CD: mov     [rsp+9D0h+BugCheckParameter4], r13; BugCheckParameter4
 * 0000000140BD54D2: lea     edx, [r9+5]; BugCheckParameter1
 * 0000000140BD54D6: call    KeBugCheckEx
 * 0000000140BD54DC: mov     r9d, 7; BugCheckParameter3
 * 0000000140BD54E2: mov     [rbp+8D0h+var_828], 0E8000009h
 * 0000000140BD54EC: mov     ecx, [rbp+8D0h+var_828]
 * 0000000140BD54F2: mov     r8, r15; BugCheckParameter2
 * 0000000140BD54F5: rol     ecx, 65h; BugCheckCode
 * 0000000140BD54F8: mov     [rsp+9D0h+BugCheckParameter4], r13; BugCheckParameter4
 * 0000000140BD54FD: lea     edx, [r9+3]; BugCheckParameter1
 * 0000000140BD5501: call    KeBugCheckEx
 * 0000000140BD5507: xor     r9d, r9d; BugCheckParameter3
 * 0000000140BD550A: mov     [rbp+8D0h+var_824], 0E8000009h
 * 0000000140BD5514: mov     ecx, [rbp+8D0h+var_824]
 * 0000000140BD551A: mov     r8, r14; BugCheckParameter2
 * 0000000140BD551D: rol     ecx, 65h; BugCheckCode
 * 0000000140BD5520: mov     [rsp+9D0h+BugCheckParameter4], r11; BugCheckParameter4
 * 0000000140BD5525: lea     edx, [r9+0Ah]; BugCheckParameter1
 * 0000000140BD5529: call    KeBugCheckEx
 * 0000000140BD552F: mov     r9d, 1; BugCheckParameter3
 * 0000000140BD5535: mov     [rbp+8D0h+var_80C], 0E8000009h
 * 0000000140BD553F: mov     ecx, [rbp+8D0h+var_80C]
 * 0000000140BD5545: mov     r8, r14; BugCheckParameter2
 * 0000000140BD5548: rol     ecx, 65h; BugCheckCode
 * 0000000140BD554B: mov     [rsp+9D0h+BugCheckParameter4], r15; BugCheckParameter4
 * 0000000140BD5550: lea     edx, [r9+9]; BugCheckParameter1
 * 0000000140BD5554: call    KeBugCheckEx
 * 0000000140BD555A: mov     r9d, eax; BugCheckParameter3
 * 0000000140BD555D: mov     r8, r14; BugCheckParameter2
 * 0000000140BD5560: xor     eax, eax
 * 0000000140BD5562: mov     [rbp+8D0h+var_7F0], 0E8000009h
 * 0000000140BD556C: mov     ecx, [rbp+8D0h+var_7F0]
 * 0000000140BD5572: rol     ecx, 65h; BugCheckCode
 * 0000000140BD5575: mov     [rsp+9D0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140BD557A: lea     edx, [rax+0Ah]; BugCheckParameter1
 * 0000000140BD557D: call    KeBugCheckEx
 * 0000000140BD5583: mov     r9d, eax; BugCheckParameter3
 * 0000000140BD5586: xor     eax, eax
 * 0000000140BD5588: mov     [rbp+8D0h+var_7E8], 0E8000009h
 * 0000000140BD5592: mov     ecx, [rbp+8D0h+var_7E8]
 * 0000000140BD5598: rol     ecx, 65h; BugCheckCode
 * 0000000140BD559B: lea     edx, [rax+0Ah]; BugCheckParameter1
 * 0000000140BD559E: mov     [rsp+9D0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140BD55A3: call    KeBugCheckEx
 * 0000000140BD55A9: mov     r9d, 2; BugCheckParameter3
 * 0000000140BD55AF: mov     [rbp+8D0h+var_7E4], 0E8000009h
 * 0000000140BD55B9: mov     ecx, [rbp+8D0h+var_7E4]
 * 0000000140BD55BF: mov     r8, r14; BugCheckParameter2
 * 0000000140BD55C2: rol     ecx, 65h; BugCheckCode
 * 0000000140BD55C5: mov     [rsp+9D0h+BugCheckParameter4], r15; BugCheckParameter4
 * 0000000140BD55CA: lea     edx, [r9+8]; BugCheckParameter1
 * 0000000140BD55CE: call    KeBugCheckEx
 * 0000000140BD55D4: mov     r9d, 3; BugCheckParameter3
 * 0000000140BD55DA: mov     [rbp+8D0h+var_7EC], 0E8000009h
 * 0000000140BD55E4: mov     ecx, [rbp+8D0h+var_7EC]
 * 0000000140BD55EA: mov     r8, r14; BugCheckParameter2
 * 0000000140BD55ED: rol     ecx, 65h; BugCheckCode
 * 0000000140BD55F0: mov     [rsp+9D0h+BugCheckParameter4], r11; BugCheckParameter4
 * 0000000140BD55F5: lea     edx, [r9+7]; BugCheckParameter1
 * 0000000140BD55F9: call    KeBugCheckEx
 * 0000000140BD55FF: mov     r8, [rbp+8D0h+var_910]; BugCheckParameter2
 * 0000000140BD5603: mov     r9d, 6; BugCheckParameter3
 * 0000000140BD5609: mov     [rbp+8D0h+var_810], 0E8000009h
 * 0000000140BD5613: mov     ecx, [rbp+8D0h+var_810]
 * 0000000140BD5619: rol     ecx, 65h; BugCheckCode
 * 0000000140BD561C: lea     edx, [r9+4]; BugCheckParameter1
 * 0000000140BD5620: mov     [rsp+9D0h+BugCheckParameter4], r10; BugCheckParameter4
 * 0000000140BD5625: call    KeBugCheckEx
 * 0000000140BD562B: mov     r15, [rbp+8D0h+var_930]
 * 0000000140BD562F: mov     [r11], rax
 * 0000000140BD5632: mov     rcx, cr4
 * 0000000140BD5635: test    rbx, rcx
 * 0000000140BD5638: jz      short loc_140BD564A
 * 0000000140BD563A: mov     rax, rcx
 * 0000000140BD563D: btc     rax, 7
 * 0000000140BD5642: mov     cr4, rax
 * 0000000140BD5645: mov     cr4, rcx
 * 0000000140BD5648: jmp     short loc_140BD5650
 * 0000000140BD564A: mov     rax, cr3
 * 0000000140BD564D: mov     cr3, rax
 * 0000000140BD5650: mov     rbx, [rbp+8D0h+var_940]
 * 0000000140BD5654: mov     rdi, [rbp+8D0h+var_900]
 * 0000000140BD5658: xor     r9d, r9d
 * 0000000140BD565B: cmp     [r12+948h], r9d
 * 0000000140BD5663: jz      short loc_140BD5679
 * 0000000140BD5665: mov     rax, cr8
 * 0000000140BD5669: lea     ecx, [r9+2]
 * 0000000140BD566D: cmp     al, cl
 * 0000000140BD566F: jnb     short loc_140BD5679
 * 0000000140BD5671: mov     rax, cr8
 * 0000000140BD5675: mov     cr8, rcx
 * 0000000140BD5679: mov     ecx, [r12+948h]
 * 0000000140BD5681: test    ecx, ecx
 * 0000000140BD5683: jz      loc_140BD5753
 * 0000000140BD5689: sub     ecx, 1
 * 0000000140BD568C: jz      loc_140BD5745
 * 0000000140BD5692: sub     ecx, 1
 * 0000000140BD5695: jz      loc_140BD573B
 * 0000000140BD569B: sub     ecx, 1
 * 0000000140BD569E: jz      loc_140BD5731
 * 0000000140BD56A4: sub     ecx, 1
 * 0000000140BD56A7: jz      short loc_140BD56F1
 * 0000000140BD56A9: cmp     ecx, 1
 * 0000000140BD56AC: jz      short loc_140BD56C8
 * 0000000140BD56AE: mov     rax, [r12+5B0h]
 * 0000000140BD56B6: mov     ecx, 1
 * 0000000140BD56BB: lock or [rax+340h], rcx
 * 0000000140BD56C3: jmp     loc_140BD5753
 * 0000000140BD56C8: mov     rcx, gs:20h
 * 0000000140BD56D1: mov     rax, [r12+658h]
 * 0000000140BD56D9: mov     edx, [r12+9D8h]
 * 0000000140BD56E1: shr     edx, 9
 * 0000000140BD56E4: and     edx, 1Fh
 * 0000000140BD56E7: mov     rcx, [rax+rcx]
 * 0000000140BD56EB: lock bts [rcx], edx
 * 0000000140BD56EF: jmp     short loc_140BD5753
 * 0000000140BD56F1: mov     rcx, gs:20h
 * 0000000140BD56FA: mov     rax, [r12+658h]
 * 0000000140BD5702: mov     r8d, [r12+9D8h]
 * 0000000140BD570A: shr     r8d, 9
 * 0000000140BD570E: and     r8d, 1Fh
 * 0000000140BD5712: mov     rcx, [rax+rcx]
 * 0000000140BD5716: add     rcx, [r12+6B8h]
 * 0000000140BD571E: mov     rax, [r12+698h]
 * 0000000140BD5726: mov     rdx, [rcx+rax]
 * 0000000140BD572A: lock bts [rdx], r8d
 * 0000000140BD572F: jmp     short loc_140BD5753
 * 0000000140BD5731: mov     rax, [r12+558h]
 * 0000000140BD5739: jmp     short loc_140BD574D
 * 0000000140BD573B: mov     rax, [r12+550h]
 * 0000000140BD5743: jmp     short loc_140BD574D
 * 0000000140BD5745: mov     rax, [r12+540h]
 * 0000000140BD574D: lock bts qword ptr [rax], 0
 * 0000000140BD5753: mov     rax, [r12+6A0h]
 * 0000000140BD575B: mov     [rbx+rax], r9
 * 0000000140BD575F: mov     rax, [r12+6B0h]
 * 0000000140BD5767: mov     [rbx+rax], r9
 * 0000000140BD576B: mov     rcx, [r12+168h]
 * 0000000140BD5773: call    KeGuardCheckICall
 * 0000000140BD5778: lea     rax, [r13-8]
 * 0000000140BD577C: mov     r9, rsi
 * 0000000140BD577F: mov     [rsp+9D0h+var_9A0], rax
 * 0000000140BD5784: mov     r8, r14
 * 0000000140BD5787: mov     rax, [r12+168h]
 * 0000000140BD578F: mov     rdx, r15
 * 0000000140BD5792: mov     [rsp+9D0h+var_9A8], rax
 * 0000000140BD5797: mov     ecx, 109h
 * 0000000140BD579C: mov     [rsp+9D0h+BugCheckParameter4], rdi
 * 0000000140BD57A1: call    SdbpCheckDll
 */
