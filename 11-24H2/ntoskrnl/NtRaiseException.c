/*
 * XREFs of NtRaiseException @ 0x1406AB820
 * Callers:
 *     <none>
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14028FBE0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiRaiseException @ 0x1403D3FF0 (KiRaiseException.c)
 *     KiUpdateStibpPairing @ 0x1403DFC10 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1404F94D0 (KiRestoreDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405BC880 (KiCopyCounters.c)
 *     NtRaiseException @ 0x1406AB820 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x1406ABF60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406B0800 (KiInitiateUserApc.c)
 */

/*
 * Hex-Rays decompilation failed for NtRaiseException @ 0x1406AB820
 * Reason: Hex-Rays returned no pseudocode for 0x1406AB820
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406AB820: mov     rbx, [rbp+0C0h]
 * 00000001406AB827: mov     rdi, [rbp+0C8h]
 * 00000001406AB82E: mov     rsi, [rbp+0D0h]
 * 00000001406AB835: xor     eax, eax
 * 00000001406AB837: mov     [rbp-50h], rax
 * 00000001406AB83B: sub     rsp, 138h
 * 00000001406AB842: lea     rax, [rsp+138h+var_38]
 * 00000001406AB84A: movaps  [rsp+138h+var_108], xmm6
 * 00000001406AB84F: movaps  [rsp+138h+var_F8], xmm7
 * 00000001406AB854: movaps  [rsp+138h+var_E8], xmm8
 * 00000001406AB85A: movaps  [rsp+138h+var_D8], xmm9
 * 00000001406AB860: movaps  [rsp+138h+var_C8], xmm10
 * 00000001406AB866: movaps  xmmword ptr [rax-80h], xmm11
 * 00000001406AB86B: movaps  xmmword ptr [rax-70h], xmm12
 * 00000001406AB870: movaps  xmmword ptr [rax-60h], xmm13
 * 00000001406AB875: movaps  xmmword ptr [rax-50h], xmm14
 * 00000001406AB87A: movaps  xmmword ptr [rax-40h], xmm15
 * 00000001406AB87F: mov     [rax], rbx
 * 00000001406AB882: mov     [rax+8], rdi
 * 00000001406AB886: mov     [rax+10h], rsi
 * 00000001406AB88A: mov     [rax+18h], r12
 * 00000001406AB88E: mov     [rax+20h], r13
 * 00000001406AB892: mov     [rax+28h], r14
 * 00000001406AB896: mov     [rax+30h], r15
 * 00000001406AB89A: mov     rax, [rbp+0E8h]
 * 00000001406AB8A1: mov     [rbp+50h], rax
 * 00000001406AB8A5: mov     [rsp+138h+var_118], r8b
 * 00000001406AB8AA: mov     r8, rsp
 * 00000001406AB8AD: lea     r9, [rbp-80h]
 * 00000001406AB8B1: call    KiRaiseException
 * 00000001406AB8B6: test    eax, eax
 * 00000001406AB8B8: jnz     loc_1406ABCA3
 * 00000001406AB8BE: test    byte ptr [rbp+0F0h], 1
 * 00000001406AB8C5: jnz     short loc_1406AB8E7
 * 00000001406AB8C7: mov     rbx, gs:188h
 * 00000001406AB8D0: mov     rdx, [rbp+0B8h]
 * 00000001406AB8D7: mov     [rbx+90h], rdx
 * 00000001406AB8DE: mov     dl, [rbp-58h]
 * 00000001406AB8E1: mov     [rbx+232h], dl
 * 00000001406AB8E7: lea     rcx, [rsp+138h+var_38]
 * 00000001406AB8EF: movaps  xmm6, [rsp+138h+var_108]
 * 00000001406AB8F4: movaps  xmm7, [rsp+138h+var_F8]
 * 00000001406AB8F9: movaps  xmm8, [rsp+138h+var_E8]
 * 00000001406AB8FF: movaps  xmm9, [rsp+138h+var_D8]
 * 00000001406AB905: movaps  xmm10, [rsp+138h+var_C8]
 * 00000001406AB90B: movaps  xmm11, xmmword ptr [rcx-80h]
 * 00000001406AB910: movaps  xmm12, xmmword ptr [rcx-70h]
 * 00000001406AB915: movaps  xmm13, xmmword ptr [rcx-60h]
 * 00000001406AB91A: movaps  xmm14, xmmword ptr [rcx-50h]
 * 00000001406AB91F: movaps  xmm15, xmmword ptr [rcx-40h]
 * 00000001406AB924: mov     rbx, [rcx]
 * 00000001406AB927: mov     rdi, [rcx+8]
 * 00000001406AB92B: mov     rsi, [rcx+10h]
 * 00000001406AB92F: mov     r12, [rcx+18h]
 * 00000001406AB933: mov     r13, [rcx+20h]
 * 00000001406AB937: mov     r14, [rcx+28h]
 * 00000001406AB93B: mov     r15, [rcx+30h]
 * 00000001406AB93F: cli
 * 00000001406AB940: xor     ecx, ecx
 * 00000001406AB942: rdsspq  rcx
 * 00000001406AB947: test    rcx, rcx
 * 00000001406AB94A: jz      short loc_1406AB956
 * 00000001406AB94C: mov     ecx, 1
 * 00000001406AB951: incsspq rcx
 * 00000001406AB956: test    byte ptr [rbp+0F0h], 1
 * 00000001406AB95D: jz      loc_1406ABC58
 * 00000001406AB963: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406AB96A: jz      short loc_1406AB96F
 * 00000001406AB96C: stac
 * 00000001406AB96F: mov     rcx, gs:188h
 * 00000001406AB978: test    byte ptr [rcx+0C2h], 3
 * 00000001406AB97F: jz      short loc_1406AB99C
 * 00000001406AB981: mov     ecx, 1
 * 00000001406AB986: mov     cr8, rcx
 * 00000001406AB98A: sti
 * 00000001406AB98B: call    KiInitiateUserApc
 * 00000001406AB990: cli
 * 00000001406AB991: mov     ecx, 0
 * 00000001406AB996: mov     cr8, rcx
 * 00000001406AB99A: jmp     short loc_1406AB96F
 * 00000001406AB99C: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406AB9A1: test    eax, eax
 * 00000001406AB9A3: mov     rax, [rbp-50h]
 * 00000001406AB9A7: jnz     short loc_1406AB96F
 * 00000001406AB9A9: test    byte ptr gs:860h, 2
 * 00000001406AB9B2: jz      short loc_1406AB9BB
 * 00000001406AB9B4: xor     ecx, ecx
 * 00000001406AB9B6: call    KiUpdateStibpPairing
 * 00000001406AB9BB: mov     rcx, gs:188h
 * 00000001406AB9C4: test    dword ptr [rcx], 8000000h
 * 00000001406AB9CA: jz      short loc_1406AB9D1
 * 00000001406AB9CC: call    KiRestoreSetContextState
 * 00000001406AB9D1: mov     rcx, gs:188h
 * 00000001406AB9DA: test    dword ptr [rcx], 10000h
 * 00000001406AB9E0: jz      short loc_1406AB9F6
 * 00000001406AB9E2: test    byte ptr [rcx+2], 1
 * 00000001406AB9E6: jz      short loc_1406AB9F6
 * 00000001406AB9E8: call    KiCopyCounters
 * 00000001406AB9ED: mov     rcx, gs:188h
 * 00000001406AB9F6: ldmxcsr dword ptr [rbp-54h]
 * 00000001406AB9FA: cmp     word ptr [rbp+80h], 0
 * 00000001406ABA02: jz      short loc_1406ABA09
 * 00000001406ABA04: call    KiRestoreDebugRegisterState
 * 00000001406ABA09: mov     rcx, gs:188h
 * 00000001406ABA12: bt      dword ptr [rcx+74h], 16h
 * 00000001406ABA17: jnb     short loc_1406ABA43
 * 00000001406ABA19: xor     ecx, ecx
 * 00000001406ABA1B: rdsspq  rcx
 * 00000001406ABA20: mov     r8, gs:9D28h
 * 00000001406ABA29: add     r8, 8
 * 00000001406ABA2D: cmp     rcx, r8
 * 00000001406ABA30: jnz     short loc_1406ABA43
 * 00000001406ABA32: mov     rcx, gs:9D20h
 * 00000001406ABA3B: rstorssp qword ptr [rcx]
 * 00000001406ABA3F: saveprevssp
 * 00000001406ABA43: mov     byte ptr gs:85Eh, 0
 * 00000001406ABA4C: movzx   eax, word ptr gs:86Ch
 * 00000001406ABA55: cmp     gs:866h, ax
 * 00000001406ABA5E: jz      short loc_1406ABA72
 * 00000001406ABA60: mov     gs:866h, ax
 * 00000001406ABA69: mov     ecx, 48h ; 'H'
 * 00000001406ABA6E: xor     edx, edx
 * 00000001406ABA70: wrmsr
 * 00000001406ABA72: btr     word ptr gs:858h, 2
 * 00000001406ABA7D: jnb     short loc_1406ABA8D
 * 00000001406ABA7F: mov     eax, 1
 * 00000001406ABA84: xor     edx, edx
 * 00000001406ABA86: mov     ecx, 49h ; 'I'
 * 00000001406ABA8B: wrmsr
 * 00000001406ABA8D: btr     word ptr gs:858h, 5
 * 00000001406ABA98: jnb     loc_1406ABBD5
 * 00000001406ABA9E: call    loc_1406ABBB1
 * 00000001406ABAA3: add     rsp, 8
 * 00000001406ABAA7: call    loc_1406ABBBA
 * 00000001406ABAAC: add     rsp, 8
 * 00000001406ABAB0: call    loc_1406ABAA3
 * 00000001406ABAB5: add     rsp, 8
 * 00000001406ABAB9: call    loc_1406ABAAC
 * 00000001406ABABE: add     rsp, 8
 * 00000001406ABAC2: call    loc_1406ABAB5
 * 00000001406ABAC7: add     rsp, 8
 * 00000001406ABACB: call    loc_1406ABABE
 * 00000001406ABAD0: add     rsp, 8
 * 00000001406ABAD4: call    loc_1406ABAC7
 * 00000001406ABAD9: add     rsp, 8
 * 00000001406ABADD: call    loc_1406ABAD0
 * 00000001406ABAE2: add     rsp, 8
 * 00000001406ABAE6: call    loc_1406ABAD9
 * 00000001406ABAEB: add     rsp, 8
 * 00000001406ABAEF: call    loc_1406ABAE2
 * 00000001406ABAF4: add     rsp, 8
 * 00000001406ABAF8: call    loc_1406ABAEB
 * 00000001406ABAFD: add     rsp, 8
 * 00000001406ABB01: call    loc_1406ABAF4
 * 00000001406ABB06: add     rsp, 8
 * 00000001406ABB0A: call    loc_1406ABAFD
 * 00000001406ABB0F: add     rsp, 8
 * 00000001406ABB13: call    loc_1406ABB06
 * 00000001406ABB18: add     rsp, 8
 * 00000001406ABB1C: call    loc_1406ABB0F
 * 00000001406ABB21: add     rsp, 8
 * 00000001406ABB25: call    loc_1406ABB18
 * 00000001406ABB2A: add     rsp, 8
 * 00000001406ABB2E: call    loc_1406ABB21
 * 00000001406ABB33: add     rsp, 8
 * 00000001406ABB37: call    loc_1406ABB2A
 * 00000001406ABB3C: add     rsp, 8
 * 00000001406ABB40: call    loc_1406ABB33
 * 00000001406ABB45: add     rsp, 8
 * 00000001406ABB49: call    loc_1406ABB3C
 * 00000001406ABB4E: add     rsp, 8
 * 00000001406ABB52: call    loc_1406ABB45
 * 00000001406ABB57: add     rsp, 8
 * 00000001406ABB5B: call    loc_1406ABB4E
 * 00000001406ABB60: add     rsp, 8
 * 00000001406ABB64: call    loc_1406ABB57
 * 00000001406ABB69: add     rsp, 8
 * 00000001406ABB6D: call    loc_1406ABB60
 * 00000001406ABB72: add     rsp, 8
 * 00000001406ABB76: call    loc_1406ABB69
 * 00000001406ABB7B: add     rsp, 8
 * 00000001406ABB7F: call    loc_1406ABB72
 * 00000001406ABB84: add     rsp, 8
 * 00000001406ABB88: call    loc_1406ABB7B
 * 00000001406ABB8D: add     rsp, 8
 * 00000001406ABB91: call    loc_1406ABB84
 * 00000001406ABB96: add     rsp, 8
 * 00000001406ABB9A: call    loc_1406ABB8D
 * 00000001406ABB9F: add     rsp, 8
 * 00000001406ABBA3: call    loc_1406ABB96
 * 00000001406ABBA8: add     rsp, 8
 * 00000001406ABBAC: call    loc_1406ABB9F
 * 00000001406ABBB1: add     rsp, 8
 * 00000001406ABBB5: call    loc_1406ABBA8
 * 00000001406ABBBA: add     rsp, 8
 * 00000001406ABBBE: mov     eax, 0DADAh
 * 00000001406ABBC3: test    byte ptr gs:85Ch, 8
 * 00000001406ABBCC: jz      short loc_1406ABBD5
 * 00000001406ABBCE: mov     al, 20h ; ' '
 * 00000001406ABBD0: incsspq rax
 * 00000001406ABBD5: test    word ptr gs:858h, 100h
 * 00000001406ABBE0: jz      short loc_1406ABBEE
 * 00000001406ABBE2: xor     eax, eax
 * 00000001406ABBE4: xor     edx, edx
 * 00000001406ABBE6: mov     ecx, 1
 * 00000001406ABBEB: div     rcx
 * 00000001406ABBEE: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406ABBF2: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406ABBF6: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406ABBFA: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406ABBFE: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406ABC02: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406ABC06: mov     r11, [rbp-20h]
 * 00000001406ABC0A: mov     r10, [rbp-28h]
 * 00000001406ABC0E: mov     r9, [rbp-30h]
 * 00000001406ABC12: mov     r8, [rbp-38h]
 * 00000001406ABC16: mov     rdx, [rbp-40h]
 * 00000001406ABC1A: mov     rcx, [rbp-48h]
 * 00000001406ABC1E: mov     rax, [rbp-50h]
 * 00000001406ABC22: mov     rsp, rbp
 * 00000001406ABC25: mov     rbp, [rbp+0D8h]
 * 00000001406ABC2C: add     rsp, 0E8h
 * 00000001406ABC33: test    cs:KiKvaShadow, 1
 * 00000001406ABC3A: jz      short loc_1406ABC41
 * 00000001406ABC3C: jmp     KiKernelExit
 * 00000001406ABC41: test    word ptr gs:858h, 200h
 * 00000001406ABC4C: jz      short loc_1406ABC53
 * 00000001406ABC4E: verw    [rsp-1E8h+arg_200]
 * 00000001406ABC53: swapgs
 * 00000001406ABC56: iretq
 * 00000001406ABC58: ldmxcsr dword ptr [rbp-54h]
 * 00000001406ABC5C: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406ABC60: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406ABC64: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406ABC68: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406ABC6C: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406ABC70: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406ABC74: mov     r11, [rbp-20h]
 * 00000001406ABC78: mov     r10, [rbp-28h]
 * 00000001406ABC7C: mov     r9, [rbp-30h]
 * 00000001406ABC80: mov     r8, [rbp-38h]
 * 00000001406ABC84: mov     rdx, [rbp-40h]
 * 00000001406ABC88: mov     rcx, [rbp-48h]
 * 00000001406ABC8C: mov     rax, [rbp-50h]
 * 00000001406ABC90: mov     rsp, rbp
 * 00000001406ABC93: mov     rbp, [rbp+0D8h]
 * 00000001406ABC9A: add     rsp, 0E8h
 * 00000001406ABCA1: iretq
 * 00000001406ABCA3: lea     rcx, [rsp+138h+var_38]
 * 00000001406ABCAB: movaps  xmm6, [rsp+138h+var_108]
 * 00000001406ABCB0: movaps  xmm7, [rsp+138h+var_F8]
 * 00000001406ABCB5: movaps  xmm8, [rsp+138h+var_E8]
 * 00000001406ABCBB: movaps  xmm9, [rsp+138h+var_D8]
 * 00000001406ABCC1: movaps  xmm10, [rsp+138h+var_C8]
 * 00000001406ABCC7: movaps  xmm11, xmmword ptr [rcx-80h]
 * 00000001406ABCCC: movaps  xmm12, xmmword ptr [rcx-70h]
 * 00000001406ABCD1: movaps  xmm13, xmmword ptr [rcx-60h]
 * 00000001406ABCD6: movaps  xmm14, xmmword ptr [rcx-50h]
 * 00000001406ABCDB: movaps  xmm15, xmmword ptr [rcx-40h]
 * 00000001406ABCE0: mov     rbx, [rcx]
 * 00000001406ABCE3: mov     rdi, [rcx+8]
 * 00000001406ABCE7: mov     rsi, [rcx+10h]
 * 00000001406ABCEB: mov     r12, [rcx+18h]
 * 00000001406ABCEF: mov     r13, [rcx+20h]
 * 00000001406ABCF3: mov     r14, [rcx+28h]
 * 00000001406ABCF7: mov     r15, [rcx+30h]
 * 00000001406ABCFB: add     rsp, 138h
 * 00000001406ABD02: retn
 */
