/*
 * XREFs of KiFastFailDispatch @ 0x1406C0140
 * Callers:
 *     KiBoundFault @ 0x1406B8340 (KiBoundFault.c)
 *     KiControlProtectionFault @ 0x1406BD340 (KiControlProtectionFault.c)
 *     KiRaiseSecurityCheckFailure @ 0x1406BDAC0 (KiRaiseSecurityCheckFailure.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14028FBE0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiDispatchException @ 0x1403D5EB0 (KiDispatchException.c)
 *     KiUpdateStibpPairing @ 0x1403DFC10 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1404F94D0 (KiRestoreDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405BC880 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x1406ABF60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406B0800 (KiInitiateUserApc.c)
 *     KiBugCheckDispatch @ 0x1406BFB80 (KiBugCheckDispatch.c)
 *     KiFastFailDispatch @ 0x1406C0140 (KiFastFailDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiFastFailDispatch @ 0x1406C0140
 * Reason: Hex-Rays returned no pseudocode for 0x1406C0140
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406C0140: sub     rsp, 1D8h
 * 00000001406C0147: lea     rax, [rsp+1D8h+var_D8]
 * 00000001406C014F: movaps  [rsp+1D8h+var_1A8], xmm6
 * 00000001406C0154: movaps  [rsp+1D8h+var_198], xmm7
 * 00000001406C0159: movaps  [rsp+1D8h+var_188], xmm8
 * 00000001406C015F: movaps  [rsp+1D8h+var_178], xmm9
 * 00000001406C0165: movaps  [rsp+1D8h+var_168], xmm10
 * 00000001406C016B: movaps  xmmword ptr [rax-80h], xmm11
 * 00000001406C0170: movaps  xmmword ptr [rax-70h], xmm12
 * 00000001406C0175: movaps  xmmword ptr [rax-60h], xmm13
 * 00000001406C017A: movaps  xmmword ptr [rax-50h], xmm14
 * 00000001406C017F: movaps  xmmword ptr [rax-40h], xmm15
 * 00000001406C0184: mov     [rax], rbx
 * 00000001406C0187: mov     [rax+8], rdi
 * 00000001406C018B: mov     [rax+10h], rsi
 * 00000001406C018F: mov     [rax+18h], r12
 * 00000001406C0193: mov     [rax+20h], r13
 * 00000001406C0197: mov     [rax+28h], r14
 * 00000001406C019B: mov     [rax+30h], r15
 * 00000001406C019F: lea     rax, [rsp+1D8h+ExceptionRecord]
 * 00000001406C01A7: mov     [rax], ecx
 * 00000001406C01A9: xor     ecx, ecx
 * 00000001406C01AB: mov     dword ptr [rax+4], 1
 * 00000001406C01B2: mov     [rax+8], rcx
 * 00000001406C01B6: mov     [rax+10h], r8
 * 00000001406C01BA: mov     [rax+18h], edx
 * 00000001406C01BD: mov     [rax+20h], r9
 * 00000001406C01C1: mov     [rax+28h], r10
 * 00000001406C01C5: mov     [rax+30h], r11
 * 00000001406C01C9: mov     r9b, [rbp+0F0h]
 * 00000001406C01D0: and     r9b, 1
 * 00000001406C01D4: cmp     r9b, 0
 * 00000001406C01D8: jnz     short loc_1406C01F2
 * 00000001406C01DA: mov     rdx, [rax+20h]
 * 00000001406C01DE: xor     r10, r10
 * 00000001406C01E1: mov     r9, rax
 * 00000001406C01E4: lea     r8, [rbp-80h]
 * 00000001406C01E8: mov     ecx, 139h
 * 00000001406C01ED: call    KiBugCheckDispatch
 * 00000001406C01F2: mov     [rsp+1D8h+var_1B8], 0; char
 * 00000001406C01F7: lea     r8, [rbp-80h]
 * 00000001406C01FB: mov     rdx, rsp
 * 00000001406C01FE: mov     rcx, rax; ExceptionRecord
 * 00000001406C0201: call    KiDispatchException
 * 00000001406C0206: lea     rcx, [rsp+1D8h+var_D8]
 * 00000001406C020E: movaps  xmm6, [rsp+1D8h+var_1A8]
 * 00000001406C0213: movaps  xmm7, [rsp+1D8h+var_198]
 * 00000001406C0218: movaps  xmm8, [rsp+1D8h+var_188]
 * 00000001406C021E: movaps  xmm9, [rsp+1D8h+var_178]
 * 00000001406C0224: movaps  xmm10, [rsp+1D8h+var_168]
 * 00000001406C022A: movaps  xmm11, xmmword ptr [rcx-80h]
 * 00000001406C022F: movaps  xmm12, xmmword ptr [rcx-70h]
 * 00000001406C0234: movaps  xmm13, xmmword ptr [rcx-60h]
 * 00000001406C0239: movaps  xmm14, xmmword ptr [rcx-50h]
 * 00000001406C023E: movaps  xmm15, xmmword ptr [rcx-40h]
 * 00000001406C0243: mov     rbx, [rcx]
 * 00000001406C0246: mov     rdi, [rcx+8]
 * 00000001406C024A: mov     rsi, [rcx+10h]
 * 00000001406C024E: mov     r12, [rcx+18h]
 * 00000001406C0252: mov     r13, [rcx+20h]
 * 00000001406C0256: mov     r14, [rcx+28h]
 * 00000001406C025A: mov     r15, [rcx+30h]
 * 00000001406C025E: cli
 * 00000001406C025F: xor     ecx, ecx
 * 00000001406C0261: rdsspq  rcx
 * 00000001406C0266: test    rcx, rcx
 * 00000001406C0269: jz      short loc_1406C0275
 * 00000001406C026B: mov     ecx, 1
 * 00000001406C0270: incsspq rcx
 * 00000001406C0275: test    byte ptr [rbp+0F0h], 1
 * 00000001406C027C: jz      loc_1406C0577
 * 00000001406C0282: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406C0289: jz      short loc_1406C028E
 * 00000001406C028B: stac
 * 00000001406C028E: mov     rcx, gs:188h
 * 00000001406C0297: test    byte ptr [rcx+0C2h], 3
 * 00000001406C029E: jz      short loc_1406C02BB
 * 00000001406C02A0: mov     ecx, 1
 * 00000001406C02A5: mov     cr8, rcx
 * 00000001406C02A9: sti
 * 00000001406C02AA: call    KiInitiateUserApc
 * 00000001406C02AF: cli
 * 00000001406C02B0: mov     ecx, 0
 * 00000001406C02B5: mov     cr8, rcx
 * 00000001406C02B9: jmp     short loc_1406C028E
 * 00000001406C02BB: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406C02C0: test    eax, eax
 * 00000001406C02C2: mov     rax, [rbp-50h]
 * 00000001406C02C6: jnz     short loc_1406C028E
 * 00000001406C02C8: test    byte ptr gs:860h, 2
 * 00000001406C02D1: jz      short loc_1406C02DA
 * 00000001406C02D3: xor     ecx, ecx
 * 00000001406C02D5: call    KiUpdateStibpPairing
 * 00000001406C02DA: mov     rcx, gs:188h
 * 00000001406C02E3: test    dword ptr [rcx], 8000000h
 * 00000001406C02E9: jz      short loc_1406C02F0
 * 00000001406C02EB: call    KiRestoreSetContextState
 * 00000001406C02F0: mov     rcx, gs:188h
 * 00000001406C02F9: test    dword ptr [rcx], 10000h
 * 00000001406C02FF: jz      short loc_1406C0315
 * 00000001406C0301: test    byte ptr [rcx+2], 1
 * 00000001406C0305: jz      short loc_1406C0315
 * 00000001406C0307: call    KiCopyCounters
 * 00000001406C030C: mov     rcx, gs:188h
 * 00000001406C0315: ldmxcsr dword ptr [rbp-54h]
 * 00000001406C0319: cmp     word ptr [rbp+80h], 0
 * 00000001406C0321: jz      short loc_1406C0328
 * 00000001406C0323: call    KiRestoreDebugRegisterState
 * 00000001406C0328: mov     rcx, gs:188h
 * 00000001406C0331: bt      dword ptr [rcx+74h], 16h
 * 00000001406C0336: jnb     short loc_1406C0362
 * 00000001406C0338: xor     ecx, ecx
 * 00000001406C033A: rdsspq  rcx
 * 00000001406C033F: mov     r8, gs:9D28h
 * 00000001406C0348: add     r8, 8
 * 00000001406C034C: cmp     rcx, r8
 * 00000001406C034F: jnz     short loc_1406C0362
 * 00000001406C0351: mov     rcx, gs:9D20h
 * 00000001406C035A: rstorssp qword ptr [rcx]
 * 00000001406C035E: saveprevssp
 * 00000001406C0362: mov     byte ptr gs:85Eh, 0
 * 00000001406C036B: movzx   eax, word ptr gs:86Ch
 * 00000001406C0374: cmp     gs:866h, ax
 * 00000001406C037D: jz      short loc_1406C0391
 * 00000001406C037F: mov     gs:866h, ax
 * 00000001406C0388: mov     ecx, 48h ; 'H'
 * 00000001406C038D: xor     edx, edx
 * 00000001406C038F: wrmsr
 * 00000001406C0391: btr     word ptr gs:858h, 2
 * 00000001406C039C: jnb     short loc_1406C03AC
 * 00000001406C039E: mov     eax, 1
 * 00000001406C03A3: xor     edx, edx
 * 00000001406C03A5: mov     ecx, 49h ; 'I'
 * 00000001406C03AA: wrmsr
 * 00000001406C03AC: btr     word ptr gs:858h, 5
 * 00000001406C03B7: jnb     loc_1406C04F4
 * 00000001406C03BD: call    loc_1406C04D0
 * 00000001406C03C2: add     rsp, 8
 * 00000001406C03C6: call    loc_1406C04D9
 * 00000001406C03CB: add     rsp, 8
 * 00000001406C03CF: call    loc_1406C03C2
 * 00000001406C03D4: add     rsp, 8
 * 00000001406C03D8: call    loc_1406C03CB
 * 00000001406C03DD: add     rsp, 8
 * 00000001406C03E1: call    loc_1406C03D4
 * 00000001406C03E6: add     rsp, 8
 * 00000001406C03EA: call    loc_1406C03DD
 * 00000001406C03EF: add     rsp, 8
 * 00000001406C03F3: call    loc_1406C03E6
 * 00000001406C03F8: add     rsp, 8
 * 00000001406C03FC: call    loc_1406C03EF
 * 00000001406C0401: add     rsp, 8
 * 00000001406C0405: call    loc_1406C03F8
 * 00000001406C040A: add     rsp, 8
 * 00000001406C040E: call    loc_1406C0401
 * 00000001406C0413: add     rsp, 8
 * 00000001406C0417: call    loc_1406C040A
 * 00000001406C041C: add     rsp, 8
 * 00000001406C0420: call    loc_1406C0413
 * 00000001406C0425: add     rsp, 8
 * 00000001406C0429: call    loc_1406C041C
 * 00000001406C042E: add     rsp, 8
 * 00000001406C0432: call    loc_1406C0425
 * 00000001406C0437: add     rsp, 8
 * 00000001406C043B: call    loc_1406C042E
 * 00000001406C0440: add     rsp, 8
 * 00000001406C0444: call    loc_1406C0437
 * 00000001406C0449: add     rsp, 8
 * 00000001406C044D: call    loc_1406C0440
 * 00000001406C0452: add     rsp, 8
 * 00000001406C0456: call    loc_1406C0449
 * 00000001406C045B: add     rsp, 8
 * 00000001406C045F: call    loc_1406C0452
 * 00000001406C0464: add     rsp, 8
 * 00000001406C0468: call    loc_1406C045B
 * 00000001406C046D: add     rsp, 8
 * 00000001406C0471: call    loc_1406C0464
 * 00000001406C0476: add     rsp, 8
 * 00000001406C047A: call    loc_1406C046D
 * 00000001406C047F: add     rsp, 8
 * 00000001406C0483: call    loc_1406C0476
 * 00000001406C0488: add     rsp, 8
 * 00000001406C048C: call    loc_1406C047F
 * 00000001406C0491: add     rsp, 8
 * 00000001406C0495: call    loc_1406C0488
 * 00000001406C049A: add     rsp, 8
 * 00000001406C049E: call    loc_1406C0491
 * 00000001406C04A3: add     rsp, 8
 * 00000001406C04A7: call    loc_1406C049A
 * 00000001406C04AC: add     rsp, 8
 * 00000001406C04B0: call    loc_1406C04A3
 * 00000001406C04B5: add     rsp, 8
 * 00000001406C04B9: call    loc_1406C04AC
 * 00000001406C04BE: add     rsp, 8
 * 00000001406C04C2: call    loc_1406C04B5
 * 00000001406C04C7: add     rsp, 8
 * 00000001406C04CB: call    loc_1406C04BE
 * 00000001406C04D0: add     rsp, 8
 * 00000001406C04D4: call    loc_1406C04C7
 * 00000001406C04D9: add     rsp, 8
 * 00000001406C04DD: mov     eax, 0DADAh
 * 00000001406C04E2: test    byte ptr gs:85Ch, 8
 * 00000001406C04EB: jz      short loc_1406C04F4
 * 00000001406C04ED: mov     al, 20h ; ' '
 * 00000001406C04EF: incsspq rax
 * 00000001406C04F4: test    word ptr gs:858h, 100h
 * 00000001406C04FF: jz      short loc_1406C050D
 * 00000001406C0501: xor     eax, eax
 * 00000001406C0503: xor     edx, edx
 * 00000001406C0505: mov     ecx, 1
 * 00000001406C050A: div     rcx
 * 00000001406C050D: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406C0511: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406C0515: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406C0519: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406C051D: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406C0521: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406C0525: mov     r11, [rbp-20h]
 * 00000001406C0529: mov     r10, [rbp-28h]
 * 00000001406C052D: mov     r9, [rbp-30h]
 * 00000001406C0531: mov     r8, [rbp-38h]
 * 00000001406C0535: mov     rdx, [rbp-40h]
 * 00000001406C0539: mov     rcx, [rbp-48h]
 * 00000001406C053D: mov     rax, [rbp-50h]
 * 00000001406C0541: mov     rsp, rbp
 * 00000001406C0544: mov     rbp, [rbp+0D8h]
 * 00000001406C054B: add     rsp, 0E8h
 * 00000001406C0552: test    cs:KiKvaShadow, 1
 * 00000001406C0559: jz      short loc_1406C0560
 * 00000001406C055B: jmp     KiKernelExit
 * 00000001406C0560: test    word ptr gs:858h, 200h
 * 00000001406C056B: jz      short loc_1406C0572
 * 00000001406C056D: verw    [rsp-1E8h+arg_200]
 * 00000001406C0572: swapgs
 * 00000001406C0575: iretq
 * 00000001406C0577: ldmxcsr dword ptr [rbp-54h]
 * 00000001406C057B: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406C057F: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406C0583: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406C0587: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406C058B: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406C058F: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406C0593: mov     r11, [rbp-20h]
 * 00000001406C0597: mov     r10, [rbp-28h]
 * 00000001406C059B: mov     r9, [rbp-30h]
 * 00000001406C059F: mov     r8, [rbp-38h]
 * 00000001406C05A3: mov     rdx, [rbp-40h]
 * 00000001406C05A7: mov     rcx, [rbp-48h]
 * 00000001406C05AB: mov     rax, [rbp-50h]
 * 00000001406C05AF: mov     rsp, rbp
 * 00000001406C05B2: mov     rbp, [rbp+0D8h]
 * 00000001406C05B9: add     rsp, 0E8h
 * 00000001406C05C0: iretq
 */
