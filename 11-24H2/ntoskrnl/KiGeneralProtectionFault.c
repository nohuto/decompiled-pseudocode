/*
 * XREFs of KiGeneralProtectionFault @ 0x1406BA6C0
 * Callers:
 *     KiGeneralProtectionFaultShadow @ 0x140BBD7C0 (KiGeneralProtectionFaultShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x14040ED30 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404F9550 (KiSaveDebugRegisterState.c)
 *     KiGeneralProtectionFault @ 0x1406BA6C0 (KiGeneralProtectionFault.c)
 *     KiExceptionDispatch @ 0x1406BFC00 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406C0640 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiGeneralProtectionFault @ 0x1406BA6C0
 * Reason: Hex-Rays returned no pseudocode for 0x1406BA6C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406BA6C0: push    rbp
 * 00000001406BA6C1: sub     rsp, 158h
 * 00000001406BA6C8: lea     rbp, [rsp+80h]
 * 00000001406BA6D0: mov     [rbp+0D8h+var_12D], 1
 * 00000001406BA6D4: mov     [rbp+0D8h+var_128], rax
 * 00000001406BA6D8: mov     [rbp+0D8h+var_120], rcx
 * 00000001406BA6DC: mov     [rbp+0D8h+var_118], rdx
 * 00000001406BA6E0: mov     [rbp+0D8h+var_110], r8
 * 00000001406BA6E4: mov     [rbp+0D8h+var_108], r9
 * 00000001406BA6E8: mov     [rbp+0D8h+var_100], r10
 * 00000001406BA6EC: mov     [rbp+0D8h+var_F8], r11
 * 00000001406BA6F0: test    [rbp+0D8h+arg_8], 1
 * 00000001406BA6F7: jnz     short loc_1406BA731
 * 00000001406BA6F9: xor     edx, edx
 * 00000001406BA6FB: rdsspq  rdx
 * 00000001406BA700: mov     [rbp+0D8h+var_80], rdx
 * 00000001406BA704: lfence
 * 00000001406BA707: test    byte ptr gs:858h, 1
 * 00000001406BA710: jnz     short loc_1406BA71A
 * 00000001406BA712: lfence
 * 00000001406BA715: jmp     loc_1406BA9A2
 * 00000001406BA71A: movzx   eax, word ptr gs:866h
 * 00000001406BA723: mov     ecx, 48h ; 'H'
 * 00000001406BA728: xor     edx, edx
 * 00000001406BA72A: wrmsr
 * 00000001406BA72C: jmp     loc_1406BA9A2
 * 00000001406BA731: test    cs:KiKvaShadow, 1
 * 00000001406BA738: jnz     short loc_1406BA73D
 * 00000001406BA73A: swapgs
 * 00000001406BA73D: lfence
 * 00000001406BA740: mov     rcx, gs:9D28h
 * 00000001406BA749: test    rcx, rcx
 * 00000001406BA74C: jz      short loc_1406BA76D
 * 00000001406BA74E: rdsspq  rdx
 * 00000001406BA753: mov     r10, gs:9D20h
 * 00000001406BA75C: add     r10, 8
 * 00000001406BA760: cmp     rdx, r10
 * 00000001406BA763: jnz     short loc_1406BA76D
 * 00000001406BA765: rstorssp qword ptr [rcx]
 * 00000001406BA769: saveprevssp
 * 00000001406BA76D: mov     r10, gs:188h
 * 00000001406BA776: mov     rcx, gs:188h
 * 00000001406BA77F: mov     rcx, [rcx+220h]
 * 00000001406BA786: mov     rcx, [rcx+760h]
 * 00000001406BA78D: mov     gs:850h, rcx
 * 00000001406BA796: mov     cx, gs:862h
 * 00000001406BA79F: mov     gs:864h, cx
 * 00000001406BA7A8: mov     cl, gs:858h
 * 00000001406BA7B0: mov     gs:85Ah, cl
 * 00000001406BA7B8: movzx   eax, word ptr gs:868h
 * 00000001406BA7C1: cmp     gs:866h, ax
 * 00000001406BA7CA: jz      short loc_1406BA7DE
 * 00000001406BA7CC: mov     gs:866h, ax
 * 00000001406BA7D5: mov     ecx, 48h ; 'H'
 * 00000001406BA7DA: xor     edx, edx
 * 00000001406BA7DC: wrmsr
 * 00000001406BA7DE: movzx   edx, byte ptr gs:858h
 * 00000001406BA7E7: test    edx, 8
 * 00000001406BA7ED: jz      short loc_1406BA806
 * 00000001406BA7EF: mov     eax, 1
 * 00000001406BA7F4: xor     edx, edx
 * 00000001406BA7F6: mov     ecx, 49h ; 'I'
 * 00000001406BA7FB: wrmsr
 * 00000001406BA7FD: movzx   edx, byte ptr gs:858h
 * 00000001406BA806: test    edx, 2
 * 00000001406BA80C: jz      loc_1406BA949
 * 00000001406BA812: call    loc_1406BA925
 * 00000001406BA817: add     rsp, 8
 * 00000001406BA81B: call    loc_1406BA92E
 * 00000001406BA820: add     rsp, 8
 * 00000001406BA824: call    loc_1406BA817
 * 00000001406BA829: add     rsp, 8
 * 00000001406BA82D: call    loc_1406BA820
 * 00000001406BA832: add     rsp, 8
 * 00000001406BA836: call    loc_1406BA829
 * 00000001406BA83B: add     rsp, 8
 * 00000001406BA83F: call    loc_1406BA832
 * 00000001406BA844: add     rsp, 8
 * 00000001406BA848: call    loc_1406BA83B
 * 00000001406BA84D: add     rsp, 8
 * 00000001406BA851: call    loc_1406BA844
 * 00000001406BA856: add     rsp, 8
 * 00000001406BA85A: call    loc_1406BA84D
 * 00000001406BA85F: add     rsp, 8
 * 00000001406BA863: call    loc_1406BA856
 * 00000001406BA868: add     rsp, 8
 * 00000001406BA86C: call    loc_1406BA85F
 * 00000001406BA871: add     rsp, 8
 * 00000001406BA875: call    loc_1406BA868
 * 00000001406BA87A: add     rsp, 8
 * 00000001406BA87E: call    loc_1406BA871
 * 00000001406BA883: add     rsp, 8
 * 00000001406BA887: call    loc_1406BA87A
 * 00000001406BA88C: add     rsp, 8
 * 00000001406BA890: call    loc_1406BA883
 * 00000001406BA895: add     rsp, 8
 * 00000001406BA899: call    loc_1406BA88C
 * 00000001406BA89E: add     rsp, 8
 * 00000001406BA8A2: call    loc_1406BA895
 * 00000001406BA8A7: add     rsp, 8
 * 00000001406BA8AB: call    loc_1406BA89E
 * 00000001406BA8B0: add     rsp, 8
 * 00000001406BA8B4: call    loc_1406BA8A7
 * 00000001406BA8B9: add     rsp, 8
 * 00000001406BA8BD: call    loc_1406BA8B0
 * 00000001406BA8C2: add     rsp, 8
 * 00000001406BA8C6: call    loc_1406BA8B9
 * 00000001406BA8CB: add     rsp, 8
 * 00000001406BA8CF: call    loc_1406BA8C2
 * 00000001406BA8D4: add     rsp, 8
 * 00000001406BA8D8: call    loc_1406BA8CB
 * 00000001406BA8DD: add     rsp, 8
 * 00000001406BA8E1: call    loc_1406BA8D4
 * 00000001406BA8E6: add     rsp, 8
 * 00000001406BA8EA: call    loc_1406BA8DD
 * 00000001406BA8EF: add     rsp, 8
 * 00000001406BA8F3: call    loc_1406BA8E6
 * 00000001406BA8F8: add     rsp, 8
 * 00000001406BA8FC: call    loc_1406BA8EF
 * 00000001406BA901: add     rsp, 8
 * 00000001406BA905: call    loc_1406BA8F8
 * 00000001406BA90A: add     rsp, 8
 * 00000001406BA90E: call    loc_1406BA901
 * 00000001406BA913: add     rsp, 8
 * 00000001406BA917: call    loc_1406BA90A
 * 00000001406BA91C: add     rsp, 8
 * 00000001406BA920: call    loc_1406BA913
 * 00000001406BA925: add     rsp, 8
 * 00000001406BA929: call    loc_1406BA91C
 * 00000001406BA92E: add     rsp, 8
 * 00000001406BA932: mov     eax, 0DADAh
 * 00000001406BA937: test    byte ptr gs:85Ch, 8
 * 00000001406BA940: jz      short loc_1406BA949
 * 00000001406BA942: mov     al, 20h ; ' '
 * 00000001406BA944: incsspq rax
 * 00000001406BA949: test    edx, 80h
 * 00000001406BA94F: jz      short loc_1406BA959
 * 00000001406BA951: lfence
 * 00000001406BA954: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406BA959: lfence
 * 00000001406BA95C: mov     byte ptr gs:85Eh, 0
 * 00000001406BA965: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406BA96C: jz      short loc_1406BA98D
 * 00000001406BA96E: mov     ecx, 6A7h
 * 00000001406BA973: rdmsr
 * 00000001406BA975: cmp     edx, 0
 * 00000001406BA978: jz      short loc_1406BA98D
 * 00000001406BA97A: mov     ecx, edx
 * 00000001406BA97C: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406BA982: cmp     edx, ecx
 * 00000001406BA984: jz      short loc_1406BA98D
 * 00000001406BA986: mov     ecx, 6A7h
 * 00000001406BA98B: wrmsr
 * 00000001406BA98D: test    byte ptr [r10+3], 3
 * 00000001406BA992: mov     [rbp+0D8h+var_58], 0
 * 00000001406BA99B: jz      short loc_1406BA9A2
 * 00000001406BA99D: call    KiSaveDebugRegisterState
 * 00000001406BA9A2: cld
 * 00000001406BA9A3: stmxcsr [rbp+0D8h+var_12C]
 * 00000001406BA9A7: ldmxcsr dword ptr gs:180h
 * 00000001406BA9B0: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001406BA9B4: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001406BA9B8: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001406BA9BC: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001406BA9C0: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001406BA9C4: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001406BA9C8: test    [rbp+0D8h+arg_8], 1
 * 00000001406BA9CF: jz      short loc_1406BA9D6
 * 00000001406BA9D1: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406BA9D6: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406BA9DD: jz      short loc_1406BA9EB
 * 00000001406BA9DF: test    [rbp+0D8h+arg_8], 1
 * 00000001406BA9E6: jz      short loc_1406BA9EB
 * 00000001406BA9E8: stac
 * 00000001406BA9EB: mov     eax, [rbp+0E0h]
 * 00000001406BA9F1: test    [rbp+0D8h+arg_10], 200h
 * 00000001406BA9FB: jz      short loc_1406BA9FE
 * 00000001406BA9FD: sti
 * 00000001406BA9FE: mov     ecx, 10000001h
 * 00000001406BAA03: mov     edx, 2
 * 00000001406BAA08: mov     r9d, [rbp+0E0h]
 * 00000001406BAA0F: and     r9d, 0FFFFh
 * 00000001406BAA16: xor     r10, r10
 * 00000001406BAA19: mov     r8, [rbp+0D8h+arg_0]
 * 00000001406BAA20: call    KiExceptionDispatch
 * 00000001406BAA25: nop
 * 00000001406BAA26: retn
 */
