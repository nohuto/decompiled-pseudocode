/*
 * XREFs of NtRaiseException @ 0x1406AA880
 * Callers:
 *     <none>
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14025F5D0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiRaiseException @ 0x1403E6450 (KiRaiseException.c)
 *     KiUpdateStibpPairing @ 0x1403EB760 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1404FBC10 (KiRestoreDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405BF250 (KiCopyCounters.c)
 *     NtRaiseException @ 0x1406AA880 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x1406AAFC0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406AF860 (KiInitiateUserApc.c)
 */

/*
 * Hex-Rays decompilation failed for NtRaiseException @ 0x1406AA880
 * Reason: Hex-Rays returned no pseudocode for 0x1406AA880
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406AA880: mov     rbx, [rbp+0C0h]
 * 00000001406AA887: mov     rdi, [rbp+0C8h]
 * 00000001406AA88E: mov     rsi, [rbp+0D0h]
 * 00000001406AA895: xor     eax, eax
 * 00000001406AA897: mov     [rbp-50h], rax
 * 00000001406AA89B: sub     rsp, 138h
 * 00000001406AA8A2: lea     rax, [rsp+138h+var_38]
 * 00000001406AA8AA: movaps  [rsp+138h+var_108], xmm6
 * 00000001406AA8AF: movaps  [rsp+138h+var_F8], xmm7
 * 00000001406AA8B4: movaps  [rsp+138h+var_E8], xmm8
 * 00000001406AA8BA: movaps  [rsp+138h+var_D8], xmm9
 * 00000001406AA8C0: movaps  [rsp+138h+var_C8], xmm10
 * 00000001406AA8C6: movaps  xmmword ptr [rax-80h], xmm11
 * 00000001406AA8CB: movaps  xmmword ptr [rax-70h], xmm12
 * 00000001406AA8D0: movaps  xmmword ptr [rax-60h], xmm13
 * 00000001406AA8D5: movaps  xmmword ptr [rax-50h], xmm14
 * 00000001406AA8DA: movaps  xmmword ptr [rax-40h], xmm15
 * 00000001406AA8DF: mov     [rax], rbx
 * 00000001406AA8E2: mov     [rax+8], rdi
 * 00000001406AA8E6: mov     [rax+10h], rsi
 * 00000001406AA8EA: mov     [rax+18h], r12
 * 00000001406AA8EE: mov     [rax+20h], r13
 * 00000001406AA8F2: mov     [rax+28h], r14
 * 00000001406AA8F6: mov     [rax+30h], r15
 * 00000001406AA8FA: mov     rax, [rbp+0E8h]
 * 00000001406AA901: mov     [rbp+50h], rax
 * 00000001406AA905: mov     [rsp+138h+var_118], r8b
 * 00000001406AA90A: mov     r8, rsp
 * 00000001406AA90D: lea     r9, [rbp-80h]
 * 00000001406AA911: call    KiRaiseException
 * 00000001406AA916: test    eax, eax
 * 00000001406AA918: jnz     loc_1406AAD03
 * 00000001406AA91E: test    byte ptr [rbp+0F0h], 1
 * 00000001406AA925: jnz     short loc_1406AA947
 * 00000001406AA927: mov     rbx, gs:188h
 * 00000001406AA930: mov     rdx, [rbp+0B8h]
 * 00000001406AA937: mov     [rbx+90h], rdx
 * 00000001406AA93E: mov     dl, [rbp-58h]
 * 00000001406AA941: mov     [rbx+232h], dl
 * 00000001406AA947: lea     rcx, [rsp+138h+var_38]
 * 00000001406AA94F: movaps  xmm6, [rsp+138h+var_108]
 * 00000001406AA954: movaps  xmm7, [rsp+138h+var_F8]
 * 00000001406AA959: movaps  xmm8, [rsp+138h+var_E8]
 * 00000001406AA95F: movaps  xmm9, [rsp+138h+var_D8]
 * 00000001406AA965: movaps  xmm10, [rsp+138h+var_C8]
 * 00000001406AA96B: movaps  xmm11, xmmword ptr [rcx-80h]
 * 00000001406AA970: movaps  xmm12, xmmword ptr [rcx-70h]
 * 00000001406AA975: movaps  xmm13, xmmword ptr [rcx-60h]
 * 00000001406AA97A: movaps  xmm14, xmmword ptr [rcx-50h]
 * 00000001406AA97F: movaps  xmm15, xmmword ptr [rcx-40h]
 * 00000001406AA984: mov     rbx, [rcx]
 * 00000001406AA987: mov     rdi, [rcx+8]
 * 00000001406AA98B: mov     rsi, [rcx+10h]
 * 00000001406AA98F: mov     r12, [rcx+18h]
 * 00000001406AA993: mov     r13, [rcx+20h]
 * 00000001406AA997: mov     r14, [rcx+28h]
 * 00000001406AA99B: mov     r15, [rcx+30h]
 * 00000001406AA99F: cli
 * 00000001406AA9A0: xor     ecx, ecx
 * 00000001406AA9A2: rdsspq  rcx
 * 00000001406AA9A7: test    rcx, rcx
 * 00000001406AA9AA: jz      short loc_1406AA9B6
 * 00000001406AA9AC: mov     ecx, 1
 * 00000001406AA9B1: incsspq rcx
 * 00000001406AA9B6: test    byte ptr [rbp+0F0h], 1
 * 00000001406AA9BD: jz      loc_1406AACB8
 * 00000001406AA9C3: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406AA9CA: jz      short loc_1406AA9CF
 * 00000001406AA9CC: stac
 * 00000001406AA9CF: mov     rcx, gs:188h
 * 00000001406AA9D8: test    byte ptr [rcx+0C2h], 3
 * 00000001406AA9DF: jz      short loc_1406AA9FC
 * 00000001406AA9E1: mov     ecx, 1
 * 00000001406AA9E6: mov     cr8, rcx
 * 00000001406AA9EA: sti
 * 00000001406AA9EB: call    KiInitiateUserApc
 * 00000001406AA9F0: cli
 * 00000001406AA9F1: mov     ecx, 0
 * 00000001406AA9F6: mov     cr8, rcx
 * 00000001406AA9FA: jmp     short loc_1406AA9CF
 * 00000001406AA9FC: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406AAA01: test    eax, eax
 * 00000001406AAA03: mov     rax, [rbp-50h]
 * 00000001406AAA07: jnz     short loc_1406AA9CF
 * 00000001406AAA09: test    byte ptr gs:860h, 2
 * 00000001406AAA12: jz      short loc_1406AAA1B
 * 00000001406AAA14: xor     ecx, ecx
 * 00000001406AAA16: call    KiUpdateStibpPairing
 * 00000001406AAA1B: mov     rcx, gs:188h
 * 00000001406AAA24: test    dword ptr [rcx], 8000000h
 * 00000001406AAA2A: jz      short loc_1406AAA31
 * 00000001406AAA2C: call    KiRestoreSetContextState
 * 00000001406AAA31: mov     rcx, gs:188h
 * 00000001406AAA3A: test    dword ptr [rcx], 10000h
 * 00000001406AAA40: jz      short loc_1406AAA56
 * 00000001406AAA42: test    byte ptr [rcx+2], 1
 * 00000001406AAA46: jz      short loc_1406AAA56
 * 00000001406AAA48: call    KiCopyCounters
 * 00000001406AAA4D: mov     rcx, gs:188h
 * 00000001406AAA56: ldmxcsr dword ptr [rbp-54h]
 * 00000001406AAA5A: cmp     word ptr [rbp+80h], 0
 * 00000001406AAA62: jz      short loc_1406AAA69
 * 00000001406AAA64: call    KiRestoreDebugRegisterState
 * 00000001406AAA69: mov     rcx, gs:188h
 * 00000001406AAA72: bt      dword ptr [rcx+74h], 16h
 * 00000001406AAA77: jnb     short loc_1406AAAA3
 * 00000001406AAA79: xor     ecx, ecx
 * 00000001406AAA7B: rdsspq  rcx
 * 00000001406AAA80: mov     r8, gs:9D28h
 * 00000001406AAA89: add     r8, 8
 * 00000001406AAA8D: cmp     rcx, r8
 * 00000001406AAA90: jnz     short loc_1406AAAA3
 * 00000001406AAA92: mov     rcx, gs:9D20h
 * 00000001406AAA9B: rstorssp qword ptr [rcx]
 * 00000001406AAA9F: saveprevssp
 * 00000001406AAAA3: mov     byte ptr gs:85Eh, 0
 * 00000001406AAAAC: movzx   eax, word ptr gs:86Ch
 * 00000001406AAAB5: cmp     gs:866h, ax
 * 00000001406AAABE: jz      short loc_1406AAAD2
 * 00000001406AAAC0: mov     gs:866h, ax
 * 00000001406AAAC9: mov     ecx, 48h ; 'H'
 * 00000001406AAACE: xor     edx, edx
 * 00000001406AAAD0: wrmsr
 * 00000001406AAAD2: btr     word ptr gs:858h, 2
 * 00000001406AAADD: jnb     short loc_1406AAAED
 * 00000001406AAADF: mov     eax, 1
 * 00000001406AAAE4: xor     edx, edx
 * 00000001406AAAE6: mov     ecx, 49h ; 'I'
 * 00000001406AAAEB: wrmsr
 * 00000001406AAAED: btr     word ptr gs:858h, 5
 * 00000001406AAAF8: jnb     loc_1406AAC35
 * 00000001406AAAFE: call    loc_1406AAC11
 * 00000001406AAB03: add     rsp, 8
 * 00000001406AAB07: call    loc_1406AAC1A
 * 00000001406AAB0C: add     rsp, 8
 * 00000001406AAB10: call    loc_1406AAB03
 * 00000001406AAB15: add     rsp, 8
 * 00000001406AAB19: call    loc_1406AAB0C
 * 00000001406AAB1E: add     rsp, 8
 * 00000001406AAB22: call    loc_1406AAB15
 * 00000001406AAB27: add     rsp, 8
 * 00000001406AAB2B: call    loc_1406AAB1E
 * 00000001406AAB30: add     rsp, 8
 * 00000001406AAB34: call    loc_1406AAB27
 * 00000001406AAB39: add     rsp, 8
 * 00000001406AAB3D: call    loc_1406AAB30
 * 00000001406AAB42: add     rsp, 8
 * 00000001406AAB46: call    loc_1406AAB39
 * 00000001406AAB4B: add     rsp, 8
 * 00000001406AAB4F: call    loc_1406AAB42
 * 00000001406AAB54: add     rsp, 8
 * 00000001406AAB58: call    loc_1406AAB4B
 * 00000001406AAB5D: add     rsp, 8
 * 00000001406AAB61: call    loc_1406AAB54
 * 00000001406AAB66: add     rsp, 8
 * 00000001406AAB6A: call    loc_1406AAB5D
 * 00000001406AAB6F: add     rsp, 8
 * 00000001406AAB73: call    loc_1406AAB66
 * 00000001406AAB78: add     rsp, 8
 * 00000001406AAB7C: call    loc_1406AAB6F
 * 00000001406AAB81: add     rsp, 8
 * 00000001406AAB85: call    loc_1406AAB78
 * 00000001406AAB8A: add     rsp, 8
 * 00000001406AAB8E: call    loc_1406AAB81
 * 00000001406AAB93: add     rsp, 8
 * 00000001406AAB97: call    loc_1406AAB8A
 * 00000001406AAB9C: add     rsp, 8
 * 00000001406AABA0: call    loc_1406AAB93
 * 00000001406AABA5: add     rsp, 8
 * 00000001406AABA9: call    loc_1406AAB9C
 * 00000001406AABAE: add     rsp, 8
 * 00000001406AABB2: call    loc_1406AABA5
 * 00000001406AABB7: add     rsp, 8
 * 00000001406AABBB: call    loc_1406AABAE
 * 00000001406AABC0: add     rsp, 8
 * 00000001406AABC4: call    loc_1406AABB7
 * 00000001406AABC9: add     rsp, 8
 * 00000001406AABCD: call    loc_1406AABC0
 * 00000001406AABD2: add     rsp, 8
 * 00000001406AABD6: call    loc_1406AABC9
 * 00000001406AABDB: add     rsp, 8
 * 00000001406AABDF: call    loc_1406AABD2
 * 00000001406AABE4: add     rsp, 8
 * 00000001406AABE8: call    loc_1406AABDB
 * 00000001406AABED: add     rsp, 8
 * 00000001406AABF1: call    loc_1406AABE4
 * 00000001406AABF6: add     rsp, 8
 * 00000001406AABFA: call    loc_1406AABED
 * 00000001406AABFF: add     rsp, 8
 * 00000001406AAC03: call    loc_1406AABF6
 * 00000001406AAC08: add     rsp, 8
 * 00000001406AAC0C: call    loc_1406AABFF
 * 00000001406AAC11: add     rsp, 8
 * 00000001406AAC15: call    loc_1406AAC08
 * 00000001406AAC1A: add     rsp, 8
 * 00000001406AAC1E: mov     eax, 0DADAh
 * 00000001406AAC23: test    byte ptr gs:85Ch, 8
 * 00000001406AAC2C: jz      short loc_1406AAC35
 * 00000001406AAC2E: mov     al, 20h ; ' '
 * 00000001406AAC30: incsspq rax
 * 00000001406AAC35: test    word ptr gs:858h, 100h
 * 00000001406AAC40: jz      short loc_1406AAC4E
 * 00000001406AAC42: xor     eax, eax
 * 00000001406AAC44: xor     edx, edx
 * 00000001406AAC46: mov     ecx, 1
 * 00000001406AAC4B: div     rcx
 * 00000001406AAC4E: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406AAC52: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406AAC56: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406AAC5A: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406AAC5E: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406AAC62: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406AAC66: mov     r11, [rbp-20h]
 * 00000001406AAC6A: mov     r10, [rbp-28h]
 * 00000001406AAC6E: mov     r9, [rbp-30h]
 * 00000001406AAC72: mov     r8, [rbp-38h]
 * 00000001406AAC76: mov     rdx, [rbp-40h]
 * 00000001406AAC7A: mov     rcx, [rbp-48h]
 * 00000001406AAC7E: mov     rax, [rbp-50h]
 * 00000001406AAC82: mov     rsp, rbp
 * 00000001406AAC85: mov     rbp, [rbp+0D8h]
 * 00000001406AAC8C: add     rsp, 0E8h
 * 00000001406AAC93: test    cs:KiKvaShadow, 1
 * 00000001406AAC9A: jz      short loc_1406AACA1
 * 00000001406AAC9C: jmp     KiKernelExit
 * 00000001406AACA1: test    word ptr gs:858h, 200h
 * 00000001406AACAC: jz      short loc_1406AACB3
 * 00000001406AACAE: verw    [rsp-1E8h+arg_200]
 * 00000001406AACB3: swapgs
 * 00000001406AACB6: iretq
 * 00000001406AACB8: ldmxcsr dword ptr [rbp-54h]
 * 00000001406AACBC: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406AACC0: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406AACC4: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406AACC8: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406AACCC: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406AACD0: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406AACD4: mov     r11, [rbp-20h]
 * 00000001406AACD8: mov     r10, [rbp-28h]
 * 00000001406AACDC: mov     r9, [rbp-30h]
 * 00000001406AACE0: mov     r8, [rbp-38h]
 * 00000001406AACE4: mov     rdx, [rbp-40h]
 * 00000001406AACE8: mov     rcx, [rbp-48h]
 * 00000001406AACEC: mov     rax, [rbp-50h]
 * 00000001406AACF0: mov     rsp, rbp
 * 00000001406AACF3: mov     rbp, [rbp+0D8h]
 * 00000001406AACFA: add     rsp, 0E8h
 * 00000001406AAD01: iretq
 * 00000001406AAD03: lea     rcx, [rsp+138h+var_38]
 * 00000001406AAD0B: movaps  xmm6, [rsp+138h+var_108]
 * 00000001406AAD10: movaps  xmm7, [rsp+138h+var_F8]
 * 00000001406AAD15: movaps  xmm8, [rsp+138h+var_E8]
 * 00000001406AAD1B: movaps  xmm9, [rsp+138h+var_D8]
 * 00000001406AAD21: movaps  xmm10, [rsp+138h+var_C8]
 * 00000001406AAD27: movaps  xmm11, xmmword ptr [rcx-80h]
 * 00000001406AAD2C: movaps  xmm12, xmmword ptr [rcx-70h]
 * 00000001406AAD31: movaps  xmm13, xmmword ptr [rcx-60h]
 * 00000001406AAD36: movaps  xmm14, xmmword ptr [rcx-50h]
 * 00000001406AAD3B: movaps  xmm15, xmmword ptr [rcx-40h]
 * 00000001406AAD40: mov     rbx, [rcx]
 * 00000001406AAD43: mov     rdi, [rcx+8]
 * 00000001406AAD47: mov     rsi, [rcx+10h]
 * 00000001406AAD4B: mov     r12, [rcx+18h]
 * 00000001406AAD4F: mov     r13, [rcx+20h]
 * 00000001406AAD53: mov     r14, [rcx+28h]
 * 00000001406AAD57: mov     r15, [rcx+30h]
 * 00000001406AAD5B: add     rsp, 138h
 * 00000001406AAD62: retn
 */
