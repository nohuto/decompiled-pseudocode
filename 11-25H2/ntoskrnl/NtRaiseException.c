/*
 * XREFs of NtRaiseException @ 0x14069F5B0
 * Callers:
 *     <none>
 * Callees:
 *     KiRaiseException @ 0x140263A30 (KiRaiseException.c)
 *     KiUpdateStibpPairing @ 0x1403E3F50 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403EF6C0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiRestoreDebugRegisterState @ 0x1404F9500 (KiRestoreDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405BB410 (KiCopyCounters.c)
 *     NtRaiseException @ 0x14069F5B0 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x14069FCF0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406A4590 (KiInitiateUserApc.c)
 */

/*
 * Hex-Rays decompilation failed for NtRaiseException @ 0x14069F5B0
 * Reason: Hex-Rays returned no pseudocode for 0x14069F5B0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014069F5B0: mov     rbx, [rbp+0C0h]
 * 000000014069F5B7: mov     rdi, [rbp+0C8h]
 * 000000014069F5BE: mov     rsi, [rbp+0D0h]
 * 000000014069F5C5: xor     eax, eax
 * 000000014069F5C7: mov     [rbp-50h], rax
 * 000000014069F5CB: sub     rsp, 138h
 * 000000014069F5D2: lea     rax, [rsp+138h+var_38]
 * 000000014069F5DA: movaps  [rsp+138h+var_108], xmm6
 * 000000014069F5DF: movaps  [rsp+138h+var_F8], xmm7
 * 000000014069F5E4: movaps  [rsp+138h+var_E8], xmm8
 * 000000014069F5EA: movaps  [rsp+138h+var_D8], xmm9
 * 000000014069F5F0: movaps  [rsp+138h+var_C8], xmm10
 * 000000014069F5F6: movaps  xmmword ptr [rax-80h], xmm11
 * 000000014069F5FB: movaps  xmmword ptr [rax-70h], xmm12
 * 000000014069F600: movaps  xmmword ptr [rax-60h], xmm13
 * 000000014069F605: movaps  xmmword ptr [rax-50h], xmm14
 * 000000014069F60A: movaps  xmmword ptr [rax-40h], xmm15
 * 000000014069F60F: mov     [rax], rbx
 * 000000014069F612: mov     [rax+8], rdi
 * 000000014069F616: mov     [rax+10h], rsi
 * 000000014069F61A: mov     [rax+18h], r12
 * 000000014069F61E: mov     [rax+20h], r13
 * 000000014069F622: mov     [rax+28h], r14
 * 000000014069F626: mov     [rax+30h], r15
 * 000000014069F62A: mov     rax, [rbp+0E8h]
 * 000000014069F631: mov     [rbp+50h], rax
 * 000000014069F635: mov     [rsp+138h+var_118], r8b
 * 000000014069F63A: mov     r8, rsp
 * 000000014069F63D: lea     r9, [rbp-80h]
 * 000000014069F641: call    KiRaiseException
 * 000000014069F646: test    eax, eax
 * 000000014069F648: jnz     loc_14069FA33
 * 000000014069F64E: test    byte ptr [rbp+0F0h], 1
 * 000000014069F655: jnz     short loc_14069F677
 * 000000014069F657: mov     rbx, gs:188h
 * 000000014069F660: mov     rdx, [rbp+0B8h]
 * 000000014069F667: mov     [rbx+90h], rdx
 * 000000014069F66E: mov     dl, [rbp-58h]
 * 000000014069F671: mov     [rbx+232h], dl
 * 000000014069F677: lea     rcx, [rsp+138h+var_38]
 * 000000014069F67F: movaps  xmm6, [rsp+138h+var_108]
 * 000000014069F684: movaps  xmm7, [rsp+138h+var_F8]
 * 000000014069F689: movaps  xmm8, [rsp+138h+var_E8]
 * 000000014069F68F: movaps  xmm9, [rsp+138h+var_D8]
 * 000000014069F695: movaps  xmm10, [rsp+138h+var_C8]
 * 000000014069F69B: movaps  xmm11, xmmword ptr [rcx-80h]
 * 000000014069F6A0: movaps  xmm12, xmmword ptr [rcx-70h]
 * 000000014069F6A5: movaps  xmm13, xmmword ptr [rcx-60h]
 * 000000014069F6AA: movaps  xmm14, xmmword ptr [rcx-50h]
 * 000000014069F6AF: movaps  xmm15, xmmword ptr [rcx-40h]
 * 000000014069F6B4: mov     rbx, [rcx]
 * 000000014069F6B7: mov     rdi, [rcx+8]
 * 000000014069F6BB: mov     rsi, [rcx+10h]
 * 000000014069F6BF: mov     r12, [rcx+18h]
 * 000000014069F6C3: mov     r13, [rcx+20h]
 * 000000014069F6C7: mov     r14, [rcx+28h]
 * 000000014069F6CB: mov     r15, [rcx+30h]
 * 000000014069F6CF: cli
 * 000000014069F6D0: xor     ecx, ecx
 * 000000014069F6D2: rdsspq  rcx
 * 000000014069F6D7: test    rcx, rcx
 * 000000014069F6DA: jz      short loc_14069F6E6
 * 000000014069F6DC: mov     ecx, 1
 * 000000014069F6E1: incsspq rcx
 * 000000014069F6E6: test    byte ptr [rbp+0F0h], 1
 * 000000014069F6ED: jz      loc_14069F9E8
 * 000000014069F6F3: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014069F6FA: jz      short loc_14069F6FF
 * 000000014069F6FC: stac
 * 000000014069F6FF: mov     rcx, gs:188h
 * 000000014069F708: test    byte ptr [rcx+0C2h], 3
 * 000000014069F70F: jz      short loc_14069F72C
 * 000000014069F711: mov     ecx, 1
 * 000000014069F716: mov     cr8, rcx
 * 000000014069F71A: sti
 * 000000014069F71B: call    KiInitiateUserApc
 * 000000014069F720: cli
 * 000000014069F721: mov     ecx, 0
 * 000000014069F726: mov     cr8, rcx
 * 000000014069F72A: jmp     short loc_14069F6FF
 * 000000014069F72C: call    KiSynchronizeUserIsolationDomainEntry
 * 000000014069F731: test    eax, eax
 * 000000014069F733: mov     rax, [rbp-50h]
 * 000000014069F737: jnz     short loc_14069F6FF
 * 000000014069F739: test    byte ptr gs:860h, 2
 * 000000014069F742: jz      short loc_14069F74B
 * 000000014069F744: xor     ecx, ecx
 * 000000014069F746: call    KiUpdateStibpPairing
 * 000000014069F74B: mov     rcx, gs:188h
 * 000000014069F754: test    dword ptr [rcx], 8000000h
 * 000000014069F75A: jz      short loc_14069F761
 * 000000014069F75C: call    KiRestoreSetContextState
 * 000000014069F761: mov     rcx, gs:188h
 * 000000014069F76A: test    dword ptr [rcx], 10000h
 * 000000014069F770: jz      short loc_14069F786
 * 000000014069F772: test    byte ptr [rcx+2], 1
 * 000000014069F776: jz      short loc_14069F786
 * 000000014069F778: call    KiCopyCounters
 * 000000014069F77D: mov     rcx, gs:188h
 * 000000014069F786: ldmxcsr dword ptr [rbp-54h]
 * 000000014069F78A: cmp     word ptr [rbp+80h], 0
 * 000000014069F792: jz      short loc_14069F799
 * 000000014069F794: call    KiRestoreDebugRegisterState
 * 000000014069F799: mov     rcx, gs:188h
 * 000000014069F7A2: bt      dword ptr [rcx+74h], 16h
 * 000000014069F7A7: jnb     short loc_14069F7D3
 * 000000014069F7A9: xor     ecx, ecx
 * 000000014069F7AB: rdsspq  rcx
 * 000000014069F7B0: mov     r8, gs:9D28h
 * 000000014069F7B9: add     r8, 8
 * 000000014069F7BD: cmp     rcx, r8
 * 000000014069F7C0: jnz     short loc_14069F7D3
 * 000000014069F7C2: mov     rcx, gs:9D20h
 * 000000014069F7CB: rstorssp qword ptr [rcx]
 * 000000014069F7CF: saveprevssp
 * 000000014069F7D3: mov     byte ptr gs:85Eh, 0
 * 000000014069F7DC: movzx   eax, word ptr gs:86Ch
 * 000000014069F7E5: cmp     gs:866h, ax
 * 000000014069F7EE: jz      short loc_14069F802
 * 000000014069F7F0: mov     gs:866h, ax
 * 000000014069F7F9: mov     ecx, 48h ; 'H'
 * 000000014069F7FE: xor     edx, edx
 * 000000014069F800: wrmsr
 * 000000014069F802: btr     word ptr gs:858h, 2
 * 000000014069F80D: jnb     short loc_14069F81D
 * 000000014069F80F: mov     eax, 1
 * 000000014069F814: xor     edx, edx
 * 000000014069F816: mov     ecx, 49h ; 'I'
 * 000000014069F81B: wrmsr
 * 000000014069F81D: btr     word ptr gs:858h, 5
 * 000000014069F828: jnb     loc_14069F965
 * 000000014069F82E: call    loc_14069F941
 * 000000014069F833: add     rsp, 8
 * 000000014069F837: call    loc_14069F94A
 * 000000014069F83C: add     rsp, 8
 * 000000014069F840: call    loc_14069F833
 * 000000014069F845: add     rsp, 8
 * 000000014069F849: call    loc_14069F83C
 * 000000014069F84E: add     rsp, 8
 * 000000014069F852: call    loc_14069F845
 * 000000014069F857: add     rsp, 8
 * 000000014069F85B: call    loc_14069F84E
 * 000000014069F860: add     rsp, 8
 * 000000014069F864: call    loc_14069F857
 * 000000014069F869: add     rsp, 8
 * 000000014069F86D: call    loc_14069F860
 * 000000014069F872: add     rsp, 8
 * 000000014069F876: call    loc_14069F869
 * 000000014069F87B: add     rsp, 8
 * 000000014069F87F: call    loc_14069F872
 * 000000014069F884: add     rsp, 8
 * 000000014069F888: call    loc_14069F87B
 * 000000014069F88D: add     rsp, 8
 * 000000014069F891: call    loc_14069F884
 * 000000014069F896: add     rsp, 8
 * 000000014069F89A: call    loc_14069F88D
 * 000000014069F89F: add     rsp, 8
 * 000000014069F8A3: call    loc_14069F896
 * 000000014069F8A8: add     rsp, 8
 * 000000014069F8AC: call    loc_14069F89F
 * 000000014069F8B1: add     rsp, 8
 * 000000014069F8B5: call    loc_14069F8A8
 * 000000014069F8BA: add     rsp, 8
 * 000000014069F8BE: call    loc_14069F8B1
 * 000000014069F8C3: add     rsp, 8
 * 000000014069F8C7: call    loc_14069F8BA
 * 000000014069F8CC: add     rsp, 8
 * 000000014069F8D0: call    loc_14069F8C3
 * 000000014069F8D5: add     rsp, 8
 * 000000014069F8D9: call    loc_14069F8CC
 * 000000014069F8DE: add     rsp, 8
 * 000000014069F8E2: call    loc_14069F8D5
 * 000000014069F8E7: add     rsp, 8
 * 000000014069F8EB: call    loc_14069F8DE
 * 000000014069F8F0: add     rsp, 8
 * 000000014069F8F4: call    loc_14069F8E7
 * 000000014069F8F9: add     rsp, 8
 * 000000014069F8FD: call    loc_14069F8F0
 * 000000014069F902: add     rsp, 8
 * 000000014069F906: call    loc_14069F8F9
 * 000000014069F90B: add     rsp, 8
 * 000000014069F90F: call    loc_14069F902
 * 000000014069F914: add     rsp, 8
 * 000000014069F918: call    loc_14069F90B
 * 000000014069F91D: add     rsp, 8
 * 000000014069F921: call    loc_14069F914
 * 000000014069F926: add     rsp, 8
 * 000000014069F92A: call    loc_14069F91D
 * 000000014069F92F: add     rsp, 8
 * 000000014069F933: call    loc_14069F926
 * 000000014069F938: add     rsp, 8
 * 000000014069F93C: call    loc_14069F92F
 * 000000014069F941: add     rsp, 8
 * 000000014069F945: call    loc_14069F938
 * 000000014069F94A: add     rsp, 8
 * 000000014069F94E: mov     eax, 0DADAh
 * 000000014069F953: test    byte ptr gs:85Ch, 8
 * 000000014069F95C: jz      short loc_14069F965
 * 000000014069F95E: mov     al, 20h ; ' '
 * 000000014069F960: incsspq rax
 * 000000014069F965: test    word ptr gs:858h, 100h
 * 000000014069F970: jz      short loc_14069F97E
 * 000000014069F972: xor     eax, eax
 * 000000014069F974: xor     edx, edx
 * 000000014069F976: mov     ecx, 1
 * 000000014069F97B: div     rcx
 * 000000014069F97E: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014069F982: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014069F986: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014069F98A: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014069F98E: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014069F992: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014069F996: mov     r11, [rbp-20h]
 * 000000014069F99A: mov     r10, [rbp-28h]
 * 000000014069F99E: mov     r9, [rbp-30h]
 * 000000014069F9A2: mov     r8, [rbp-38h]
 * 000000014069F9A6: mov     rdx, [rbp-40h]
 * 000000014069F9AA: mov     rcx, [rbp-48h]
 * 000000014069F9AE: mov     rax, [rbp-50h]
 * 000000014069F9B2: mov     rsp, rbp
 * 000000014069F9B5: mov     rbp, [rbp+0D8h]
 * 000000014069F9BC: add     rsp, 0E8h
 * 000000014069F9C3: test    cs:KiKvaShadow, 1
 * 000000014069F9CA: jz      short loc_14069F9D1
 * 000000014069F9CC: jmp     KiKernelExit
 * 000000014069F9D1: test    word ptr gs:858h, 200h
 * 000000014069F9DC: jz      short loc_14069F9E3
 * 000000014069F9DE: verw    [rsp-1E8h+arg_200]
 * 000000014069F9E3: swapgs
 * 000000014069F9E6: iretq
 * 000000014069F9E8: ldmxcsr dword ptr [rbp-54h]
 * 000000014069F9EC: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014069F9F0: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014069F9F4: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014069F9F8: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014069F9FC: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014069FA00: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014069FA04: mov     r11, [rbp-20h]
 * 000000014069FA08: mov     r10, [rbp-28h]
 * 000000014069FA0C: mov     r9, [rbp-30h]
 * 000000014069FA10: mov     r8, [rbp-38h]
 * 000000014069FA14: mov     rdx, [rbp-40h]
 * 000000014069FA18: mov     rcx, [rbp-48h]
 * 000000014069FA1C: mov     rax, [rbp-50h]
 * 000000014069FA20: mov     rsp, rbp
 * 000000014069FA23: mov     rbp, [rbp+0D8h]
 * 000000014069FA2A: add     rsp, 0E8h
 * 000000014069FA31: iretq
 * 000000014069FA33: lea     rcx, [rsp+138h+var_38]
 * 000000014069FA3B: movaps  xmm6, [rsp+138h+var_108]
 * 000000014069FA40: movaps  xmm7, [rsp+138h+var_F8]
 * 000000014069FA45: movaps  xmm8, [rsp+138h+var_E8]
 * 000000014069FA4B: movaps  xmm9, [rsp+138h+var_D8]
 * 000000014069FA51: movaps  xmm10, [rsp+138h+var_C8]
 * 000000014069FA57: movaps  xmm11, xmmword ptr [rcx-80h]
 * 000000014069FA5C: movaps  xmm12, xmmword ptr [rcx-70h]
 * 000000014069FA61: movaps  xmm13, xmmword ptr [rcx-60h]
 * 000000014069FA66: movaps  xmm14, xmmword ptr [rcx-50h]
 * 000000014069FA6B: movaps  xmm15, xmmword ptr [rcx-40h]
 * 000000014069FA70: mov     rbx, [rcx]
 * 000000014069FA73: mov     rdi, [rcx+8]
 * 000000014069FA77: mov     rsi, [rcx+10h]
 * 000000014069FA7B: mov     r12, [rcx+18h]
 * 000000014069FA7F: mov     r13, [rcx+20h]
 * 000000014069FA83: mov     r14, [rcx+28h]
 * 000000014069FA87: mov     r15, [rcx+30h]
 * 000000014069FA8B: add     rsp, 138h
 * 000000014069FA92: retn
 */
