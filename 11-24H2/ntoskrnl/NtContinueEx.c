/*
 * XREFs of NtContinueEx @ 0x1406AB390
 * Callers:
 *     NtContinue @ 0x1406AB380 (NtContinue.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14028FBE0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiContinueEx @ 0x1403D4630 (KiContinueEx.c)
 *     KiUpdateStibpPairing @ 0x1403DFC10 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1404F94D0 (KiRestoreDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405BC880 (KiCopyCounters.c)
 *     NtContinueEx @ 0x1406AB390 (NtContinueEx.c)
 *     KiRestoreSetContextState @ 0x1406ABF60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406B0800 (KiInitiateUserApc.c)
 */

/*
 * Hex-Rays decompilation failed for NtContinueEx @ 0x1406AB390
 * Reason: Hex-Rays returned no pseudocode for 0x1406AB390
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406AB390: mov     rbx, [rbp+0C0h]
 * 00000001406AB397: mov     rdi, [rbp+0C8h]
 * 00000001406AB39E: mov     rsi, [rbp+0D0h]
 * 00000001406AB3A5: xor     eax, eax
 * 00000001406AB3A7: mov     [rbp-50h], rax
 * 00000001406AB3AB: sub     rsp, 138h
 * 00000001406AB3B2: lea     rax, [rsp+138h+var_38]
 * 00000001406AB3BA: movaps  [rsp+138h+var_108], xmm6
 * 00000001406AB3BF: movaps  [rsp+138h+var_F8], xmm7
 * 00000001406AB3C4: movaps  [rsp+138h+var_E8], xmm8
 * 00000001406AB3CA: movaps  [rsp+138h+var_D8], xmm9
 * 00000001406AB3D0: movaps  [rsp+138h+var_C8], xmm10
 * 00000001406AB3D6: movaps  xmmword ptr [rax-80h], xmm11
 * 00000001406AB3DB: movaps  xmmword ptr [rax-70h], xmm12
 * 00000001406AB3E0: movaps  xmmword ptr [rax-60h], xmm13
 * 00000001406AB3E5: movaps  xmmword ptr [rax-50h], xmm14
 * 00000001406AB3EA: movaps  xmmword ptr [rax-40h], xmm15
 * 00000001406AB3EF: mov     [rax], rbx
 * 00000001406AB3F2: mov     [rax+8], rdi
 * 00000001406AB3F6: mov     [rax+10h], rsi
 * 00000001406AB3FA: mov     [rax+18h], r12
 * 00000001406AB3FE: mov     [rax+20h], r13
 * 00000001406AB402: mov     [rax+28h], r14
 * 00000001406AB406: mov     [rax+30h], r15
 * 00000001406AB40A: mov     r8, rsp
 * 00000001406AB40D: lea     r9, [rbp-80h]
 * 00000001406AB411: call    KiContinueEx
 * 00000001406AB416: test    eax, eax
 * 00000001406AB418: jle     loc_1406AB803
 * 00000001406AB41E: mov     rcx, gs:188h
 * 00000001406AB427: test    byte ptr [rbp+0F0h], 1
 * 00000001406AB42E: jnz     short loc_1406AB447
 * 00000001406AB430: mov     rdx, [rbp+0B8h]
 * 00000001406AB437: mov     [rcx+90h], rdx
 * 00000001406AB43E: mov     dl, [rbp-58h]
 * 00000001406AB441: mov     [rcx+232h], dl
 * 00000001406AB447: lea     rcx, [rsp+138h+var_38]
 * 00000001406AB44F: movaps  xmm6, [rsp+138h+var_108]
 * 00000001406AB454: movaps  xmm7, [rsp+138h+var_F8]
 * 00000001406AB459: movaps  xmm8, [rsp+138h+var_E8]
 * 00000001406AB45F: movaps  xmm9, [rsp+138h+var_D8]
 * 00000001406AB465: movaps  xmm10, [rsp+138h+var_C8]
 * 00000001406AB46B: movaps  xmm11, xmmword ptr [rcx-80h]
 * 00000001406AB470: movaps  xmm12, xmmword ptr [rcx-70h]
 * 00000001406AB475: movaps  xmm13, xmmword ptr [rcx-60h]
 * 00000001406AB47A: movaps  xmm14, xmmword ptr [rcx-50h]
 * 00000001406AB47F: movaps  xmm15, xmmword ptr [rcx-40h]
 * 00000001406AB484: mov     rbx, [rcx]
 * 00000001406AB487: mov     rdi, [rcx+8]
 * 00000001406AB48B: mov     rsi, [rcx+10h]
 * 00000001406AB48F: mov     r12, [rcx+18h]
 * 00000001406AB493: mov     r13, [rcx+20h]
 * 00000001406AB497: mov     r14, [rcx+28h]
 * 00000001406AB49B: mov     r15, [rcx+30h]
 * 00000001406AB49F: cli
 * 00000001406AB4A0: xor     ecx, ecx
 * 00000001406AB4A2: rdsspq  rcx
 * 00000001406AB4A7: test    rcx, rcx
 * 00000001406AB4AA: jz      short loc_1406AB4B6
 * 00000001406AB4AC: mov     ecx, 1
 * 00000001406AB4B1: incsspq rcx
 * 00000001406AB4B6: test    byte ptr [rbp+0F0h], 1
 * 00000001406AB4BD: jz      loc_1406AB7B8
 * 00000001406AB4C3: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406AB4CA: jz      short loc_1406AB4CF
 * 00000001406AB4CC: stac
 * 00000001406AB4CF: mov     rcx, gs:188h
 * 00000001406AB4D8: test    byte ptr [rcx+0C2h], 3
 * 00000001406AB4DF: jz      short loc_1406AB4FC
 * 00000001406AB4E1: mov     ecx, 1
 * 00000001406AB4E6: mov     cr8, rcx
 * 00000001406AB4EA: sti
 * 00000001406AB4EB: call    KiInitiateUserApc
 * 00000001406AB4F0: cli
 * 00000001406AB4F1: mov     ecx, 0
 * 00000001406AB4F6: mov     cr8, rcx
 * 00000001406AB4FA: jmp     short loc_1406AB4CF
 * 00000001406AB4FC: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406AB501: test    eax, eax
 * 00000001406AB503: mov     rax, [rbp-50h]
 * 00000001406AB507: jnz     short loc_1406AB4CF
 * 00000001406AB509: test    byte ptr gs:860h, 2
 * 00000001406AB512: jz      short loc_1406AB51B
 * 00000001406AB514: xor     ecx, ecx
 * 00000001406AB516: call    KiUpdateStibpPairing
 * 00000001406AB51B: mov     rcx, gs:188h
 * 00000001406AB524: test    dword ptr [rcx], 8000000h
 * 00000001406AB52A: jz      short loc_1406AB531
 * 00000001406AB52C: call    KiRestoreSetContextState
 * 00000001406AB531: mov     rcx, gs:188h
 * 00000001406AB53A: test    dword ptr [rcx], 10000h
 * 00000001406AB540: jz      short loc_1406AB556
 * 00000001406AB542: test    byte ptr [rcx+2], 1
 * 00000001406AB546: jz      short loc_1406AB556
 * 00000001406AB548: call    KiCopyCounters
 * 00000001406AB54D: mov     rcx, gs:188h
 * 00000001406AB556: ldmxcsr dword ptr [rbp-54h]
 * 00000001406AB55A: cmp     word ptr [rbp+80h], 0
 * 00000001406AB562: jz      short loc_1406AB569
 * 00000001406AB564: call    KiRestoreDebugRegisterState
 * 00000001406AB569: mov     rcx, gs:188h
 * 00000001406AB572: bt      dword ptr [rcx+74h], 16h
 * 00000001406AB577: jnb     short loc_1406AB5A3
 * 00000001406AB579: xor     ecx, ecx
 * 00000001406AB57B: rdsspq  rcx
 * 00000001406AB580: mov     r8, gs:9D28h
 * 00000001406AB589: add     r8, 8
 * 00000001406AB58D: cmp     rcx, r8
 * 00000001406AB590: jnz     short loc_1406AB5A3
 * 00000001406AB592: mov     rcx, gs:9D20h
 * 00000001406AB59B: rstorssp qword ptr [rcx]
 * 00000001406AB59F: saveprevssp
 * 00000001406AB5A3: mov     byte ptr gs:85Eh, 0
 * 00000001406AB5AC: movzx   eax, word ptr gs:86Ch
 * 00000001406AB5B5: cmp     gs:866h, ax
 * 00000001406AB5BE: jz      short loc_1406AB5D2
 * 00000001406AB5C0: mov     gs:866h, ax
 * 00000001406AB5C9: mov     ecx, 48h ; 'H'
 * 00000001406AB5CE: xor     edx, edx
 * 00000001406AB5D0: wrmsr
 * 00000001406AB5D2: btr     word ptr gs:858h, 2
 * 00000001406AB5DD: jnb     short loc_1406AB5ED
 * 00000001406AB5DF: mov     eax, 1
 * 00000001406AB5E4: xor     edx, edx
 * 00000001406AB5E6: mov     ecx, 49h ; 'I'
 * 00000001406AB5EB: wrmsr
 * 00000001406AB5ED: btr     word ptr gs:858h, 5
 * 00000001406AB5F8: jnb     loc_1406AB735
 * 00000001406AB5FE: call    loc_1406AB711
 * 00000001406AB603: add     rsp, 8
 * 00000001406AB607: call    loc_1406AB71A
 * 00000001406AB60C: add     rsp, 8
 * 00000001406AB610: call    loc_1406AB603
 * 00000001406AB615: add     rsp, 8
 * 00000001406AB619: call    loc_1406AB60C
 * 00000001406AB61E: add     rsp, 8
 * 00000001406AB622: call    loc_1406AB615
 * 00000001406AB627: add     rsp, 8
 * 00000001406AB62B: call    loc_1406AB61E
 * 00000001406AB630: add     rsp, 8
 * 00000001406AB634: call    loc_1406AB627
 * 00000001406AB639: add     rsp, 8
 * 00000001406AB63D: call    loc_1406AB630
 * 00000001406AB642: add     rsp, 8
 * 00000001406AB646: call    loc_1406AB639
 * 00000001406AB64B: add     rsp, 8
 * 00000001406AB64F: call    loc_1406AB642
 * 00000001406AB654: add     rsp, 8
 * 00000001406AB658: call    loc_1406AB64B
 * 00000001406AB65D: add     rsp, 8
 * 00000001406AB661: call    loc_1406AB654
 * 00000001406AB666: add     rsp, 8
 * 00000001406AB66A: call    loc_1406AB65D
 * 00000001406AB66F: add     rsp, 8
 * 00000001406AB673: call    loc_1406AB666
 * 00000001406AB678: add     rsp, 8
 * 00000001406AB67C: call    loc_1406AB66F
 * 00000001406AB681: add     rsp, 8
 * 00000001406AB685: call    loc_1406AB678
 * 00000001406AB68A: add     rsp, 8
 * 00000001406AB68E: call    loc_1406AB681
 * 00000001406AB693: add     rsp, 8
 * 00000001406AB697: call    loc_1406AB68A
 * 00000001406AB69C: add     rsp, 8
 * 00000001406AB6A0: call    loc_1406AB693
 * 00000001406AB6A5: add     rsp, 8
 * 00000001406AB6A9: call    loc_1406AB69C
 * 00000001406AB6AE: add     rsp, 8
 * 00000001406AB6B2: call    loc_1406AB6A5
 * 00000001406AB6B7: add     rsp, 8
 * 00000001406AB6BB: call    loc_1406AB6AE
 * 00000001406AB6C0: add     rsp, 8
 * 00000001406AB6C4: call    loc_1406AB6B7
 * 00000001406AB6C9: add     rsp, 8
 * 00000001406AB6CD: call    loc_1406AB6C0
 * 00000001406AB6D2: add     rsp, 8
 * 00000001406AB6D6: call    loc_1406AB6C9
 * 00000001406AB6DB: add     rsp, 8
 * 00000001406AB6DF: call    loc_1406AB6D2
 * 00000001406AB6E4: add     rsp, 8
 * 00000001406AB6E8: call    loc_1406AB6DB
 * 00000001406AB6ED: add     rsp, 8
 * 00000001406AB6F1: call    loc_1406AB6E4
 * 00000001406AB6F6: add     rsp, 8
 * 00000001406AB6FA: call    loc_1406AB6ED
 * 00000001406AB6FF: add     rsp, 8
 * 00000001406AB703: call    loc_1406AB6F6
 * 00000001406AB708: add     rsp, 8
 * 00000001406AB70C: call    loc_1406AB6FF
 * 00000001406AB711: add     rsp, 8
 * 00000001406AB715: call    loc_1406AB708
 * 00000001406AB71A: add     rsp, 8
 * 00000001406AB71E: mov     eax, 0DADAh
 * 00000001406AB723: test    byte ptr gs:85Ch, 8
 * 00000001406AB72C: jz      short loc_1406AB735
 * 00000001406AB72E: mov     al, 20h ; ' '
 * 00000001406AB730: incsspq rax
 * 00000001406AB735: test    word ptr gs:858h, 100h
 * 00000001406AB740: jz      short loc_1406AB74E
 * 00000001406AB742: xor     eax, eax
 * 00000001406AB744: xor     edx, edx
 * 00000001406AB746: mov     ecx, 1
 * 00000001406AB74B: div     rcx
 * 00000001406AB74E: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406AB752: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406AB756: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406AB75A: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406AB75E: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406AB762: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406AB766: mov     r11, [rbp-20h]
 * 00000001406AB76A: mov     r10, [rbp-28h]
 * 00000001406AB76E: mov     r9, [rbp-30h]
 * 00000001406AB772: mov     r8, [rbp-38h]
 * 00000001406AB776: mov     rdx, [rbp-40h]
 * 00000001406AB77A: mov     rcx, [rbp-48h]
 * 00000001406AB77E: mov     rax, [rbp-50h]
 * 00000001406AB782: mov     rsp, rbp
 * 00000001406AB785: mov     rbp, [rbp+0D8h]
 * 00000001406AB78C: add     rsp, 0E8h
 * 00000001406AB793: test    cs:KiKvaShadow, 1
 * 00000001406AB79A: jz      short loc_1406AB7A1
 * 00000001406AB79C: jmp     KiKernelExit
 * 00000001406AB7A1: test    word ptr gs:858h, 200h
 * 00000001406AB7AC: jz      short loc_1406AB7B3
 * 00000001406AB7AE: verw    [rsp-1E8h+arg_200]
 * 00000001406AB7B3: swapgs
 * 00000001406AB7B6: iretq
 * 00000001406AB7B8: ldmxcsr dword ptr [rbp-54h]
 * 00000001406AB7BC: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406AB7C0: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406AB7C4: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406AB7C8: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406AB7CC: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406AB7D0: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406AB7D4: mov     r11, [rbp-20h]
 * 00000001406AB7D8: mov     r10, [rbp-28h]
 * 00000001406AB7DC: mov     r9, [rbp-30h]
 * 00000001406AB7E0: mov     r8, [rbp-38h]
 * 00000001406AB7E4: mov     rdx, [rbp-40h]
 * 00000001406AB7E8: mov     rcx, [rbp-48h]
 * 00000001406AB7EC: mov     rax, [rbp-50h]
 * 00000001406AB7F0: mov     rsp, rbp
 * 00000001406AB7F3: mov     rbp, [rbp+0D8h]
 * 00000001406AB7FA: add     rsp, 0E8h
 * 00000001406AB801: iretq
 * 00000001406AB803: add     rsp, 138h
 * 00000001406AB80A: retn
 */
