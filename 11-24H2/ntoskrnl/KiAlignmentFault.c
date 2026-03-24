/*
 * XREFs of KiAlignmentFault @ 0x1406BA740
 * Callers:
 *     KiAlignmentFaultShadow @ 0x140BBB940 (KiAlignmentFaultShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x14041B1F0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404FBC90 (KiSaveDebugRegisterState.c)
 *     KiAlignmentFault @ 0x1406BA740 (KiAlignmentFault.c)
 *     KiExceptionDispatch @ 0x1406BED00 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406BF740 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiAlignmentFault @ 0x1406BA740
 * Reason: Hex-Rays returned no pseudocode for 0x1406BA740
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406BA740: push    rbp
 * 00000001406BA741: sub     rsp, 158h
 * 00000001406BA748: lea     rbp, [rsp+80h]
 * 00000001406BA750: mov     [rbp+0D8h+var_12D], 1
 * 00000001406BA754: mov     [rbp+0D8h+var_128], rax
 * 00000001406BA758: mov     [rbp+0D8h+var_120], rcx
 * 00000001406BA75C: mov     [rbp+0D8h+var_118], rdx
 * 00000001406BA760: mov     [rbp+0D8h+var_110], r8
 * 00000001406BA764: mov     [rbp+0D8h+var_108], r9
 * 00000001406BA768: mov     [rbp+0D8h+var_100], r10
 * 00000001406BA76C: mov     [rbp+0D8h+var_F8], r11
 * 00000001406BA770: test    [rbp+0D8h+arg_8], 1
 * 00000001406BA777: jnz     short loc_1406BA7B1
 * 00000001406BA779: xor     edx, edx
 * 00000001406BA77B: rdsspq  rdx
 * 00000001406BA780: mov     [rbp+0D8h+var_80], rdx
 * 00000001406BA784: lfence
 * 00000001406BA787: test    byte ptr gs:858h, 1
 * 00000001406BA790: jnz     short loc_1406BA79A
 * 00000001406BA792: lfence
 * 00000001406BA795: jmp     loc_1406BAA22
 * 00000001406BA79A: movzx   eax, word ptr gs:866h
 * 00000001406BA7A3: mov     ecx, 48h ; 'H'
 * 00000001406BA7A8: xor     edx, edx
 * 00000001406BA7AA: wrmsr
 * 00000001406BA7AC: jmp     loc_1406BAA22
 * 00000001406BA7B1: test    cs:KiKvaShadow, 1
 * 00000001406BA7B8: jnz     short loc_1406BA7BD
 * 00000001406BA7BA: swapgs
 * 00000001406BA7BD: lfence
 * 00000001406BA7C0: mov     rcx, gs:9D28h
 * 00000001406BA7C9: test    rcx, rcx
 * 00000001406BA7CC: jz      short loc_1406BA7ED
 * 00000001406BA7CE: rdsspq  rdx
 * 00000001406BA7D3: mov     r10, gs:9D20h
 * 00000001406BA7DC: add     r10, 8
 * 00000001406BA7E0: cmp     rdx, r10
 * 00000001406BA7E3: jnz     short loc_1406BA7ED
 * 00000001406BA7E5: rstorssp qword ptr [rcx]
 * 00000001406BA7E9: saveprevssp
 * 00000001406BA7ED: mov     r10, gs:188h
 * 00000001406BA7F6: mov     rcx, gs:188h
 * 00000001406BA7FF: mov     rcx, [rcx+220h]
 * 00000001406BA806: mov     rcx, [rcx+760h]
 * 00000001406BA80D: mov     gs:850h, rcx
 * 00000001406BA816: mov     cx, gs:862h
 * 00000001406BA81F: mov     gs:864h, cx
 * 00000001406BA828: mov     cl, gs:858h
 * 00000001406BA830: mov     gs:85Ah, cl
 * 00000001406BA838: movzx   eax, word ptr gs:868h
 * 00000001406BA841: cmp     gs:866h, ax
 * 00000001406BA84A: jz      short loc_1406BA85E
 * 00000001406BA84C: mov     gs:866h, ax
 * 00000001406BA855: mov     ecx, 48h ; 'H'
 * 00000001406BA85A: xor     edx, edx
 * 00000001406BA85C: wrmsr
 * 00000001406BA85E: movzx   edx, byte ptr gs:858h
 * 00000001406BA867: test    edx, 8
 * 00000001406BA86D: jz      short loc_1406BA886
 * 00000001406BA86F: mov     eax, 1
 * 00000001406BA874: xor     edx, edx
 * 00000001406BA876: mov     ecx, 49h ; 'I'
 * 00000001406BA87B: wrmsr
 * 00000001406BA87D: movzx   edx, byte ptr gs:858h
 * 00000001406BA886: test    edx, 2
 * 00000001406BA88C: jz      loc_1406BA9C9
 * 00000001406BA892: call    loc_1406BA9A5
 * 00000001406BA897: add     rsp, 8
 * 00000001406BA89B: call    loc_1406BA9AE
 * 00000001406BA8A0: add     rsp, 8
 * 00000001406BA8A4: call    loc_1406BA897
 * 00000001406BA8A9: add     rsp, 8
 * 00000001406BA8AD: call    loc_1406BA8A0
 * 00000001406BA8B2: add     rsp, 8
 * 00000001406BA8B6: call    loc_1406BA8A9
 * 00000001406BA8BB: add     rsp, 8
 * 00000001406BA8BF: call    loc_1406BA8B2
 * 00000001406BA8C4: add     rsp, 8
 * 00000001406BA8C8: call    loc_1406BA8BB
 * 00000001406BA8CD: add     rsp, 8
 * 00000001406BA8D1: call    loc_1406BA8C4
 * 00000001406BA8D6: add     rsp, 8
 * 00000001406BA8DA: call    loc_1406BA8CD
 * 00000001406BA8DF: add     rsp, 8
 * 00000001406BA8E3: call    loc_1406BA8D6
 * 00000001406BA8E8: add     rsp, 8
 * 00000001406BA8EC: call    loc_1406BA8DF
 * 00000001406BA8F1: add     rsp, 8
 * 00000001406BA8F5: call    loc_1406BA8E8
 * 00000001406BA8FA: add     rsp, 8
 * 00000001406BA8FE: call    loc_1406BA8F1
 * 00000001406BA903: add     rsp, 8
 * 00000001406BA907: call    loc_1406BA8FA
 * 00000001406BA90C: add     rsp, 8
 * 00000001406BA910: call    loc_1406BA903
 * 00000001406BA915: add     rsp, 8
 * 00000001406BA919: call    loc_1406BA90C
 * 00000001406BA91E: add     rsp, 8
 * 00000001406BA922: call    loc_1406BA915
 * 00000001406BA927: add     rsp, 8
 * 00000001406BA92B: call    loc_1406BA91E
 * 00000001406BA930: add     rsp, 8
 * 00000001406BA934: call    loc_1406BA927
 * 00000001406BA939: add     rsp, 8
 * 00000001406BA93D: call    loc_1406BA930
 * 00000001406BA942: add     rsp, 8
 * 00000001406BA946: call    loc_1406BA939
 * 00000001406BA94B: add     rsp, 8
 * 00000001406BA94F: call    loc_1406BA942
 * 00000001406BA954: add     rsp, 8
 * 00000001406BA958: call    loc_1406BA94B
 * 00000001406BA95D: add     rsp, 8
 * 00000001406BA961: call    loc_1406BA954
 * 00000001406BA966: add     rsp, 8
 * 00000001406BA96A: call    loc_1406BA95D
 * 00000001406BA96F: add     rsp, 8
 * 00000001406BA973: call    loc_1406BA966
 * 00000001406BA978: add     rsp, 8
 * 00000001406BA97C: call    loc_1406BA96F
 * 00000001406BA981: add     rsp, 8
 * 00000001406BA985: call    loc_1406BA978
 * 00000001406BA98A: add     rsp, 8
 * 00000001406BA98E: call    loc_1406BA981
 * 00000001406BA993: add     rsp, 8
 * 00000001406BA997: call    loc_1406BA98A
 * 00000001406BA99C: add     rsp, 8
 * 00000001406BA9A0: call    loc_1406BA993
 * 00000001406BA9A5: add     rsp, 8
 * 00000001406BA9A9: call    loc_1406BA99C
 * 00000001406BA9AE: add     rsp, 8
 * 00000001406BA9B2: mov     eax, 0DADAh
 * 00000001406BA9B7: test    byte ptr gs:85Ch, 8
 * 00000001406BA9C0: jz      short loc_1406BA9C9
 * 00000001406BA9C2: mov     al, 20h ; ' '
 * 00000001406BA9C4: incsspq rax
 * 00000001406BA9C9: test    edx, 80h
 * 00000001406BA9CF: jz      short loc_1406BA9D9
 * 00000001406BA9D1: lfence
 * 00000001406BA9D4: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406BA9D9: lfence
 * 00000001406BA9DC: mov     byte ptr gs:85Eh, 0
 * 00000001406BA9E5: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406BA9EC: jz      short loc_1406BAA0D
 * 00000001406BA9EE: mov     ecx, 6A7h
 * 00000001406BA9F3: rdmsr
 * 00000001406BA9F5: cmp     edx, 0
 * 00000001406BA9F8: jz      short loc_1406BAA0D
 * 00000001406BA9FA: mov     ecx, edx
 * 00000001406BA9FC: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406BAA02: cmp     edx, ecx
 * 00000001406BAA04: jz      short loc_1406BAA0D
 * 00000001406BAA06: mov     ecx, 6A7h
 * 00000001406BAA0B: wrmsr
 * 00000001406BAA0D: test    byte ptr [r10+3], 3
 * 00000001406BAA12: mov     [rbp+0D8h+var_58], 0
 * 00000001406BAA1B: jz      short loc_1406BAA22
 * 00000001406BAA1D: call    KiSaveDebugRegisterState
 * 00000001406BAA22: cld
 * 00000001406BAA23: stmxcsr [rbp+0D8h+var_12C]
 * 00000001406BAA27: ldmxcsr dword ptr gs:180h
 * 00000001406BAA30: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001406BAA34: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001406BAA38: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001406BAA3C: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001406BAA40: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001406BAA44: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001406BAA48: test    [rbp+0D8h+arg_8], 1
 * 00000001406BAA4F: jz      short loc_1406BAA56
 * 00000001406BAA51: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406BAA56: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406BAA5D: jz      short loc_1406BAA6B
 * 00000001406BAA5F: test    [rbp+0D8h+arg_8], 1
 * 00000001406BAA66: jz      short loc_1406BAA6B
 * 00000001406BAA68: stac
 * 00000001406BAA6B: mov     eax, [rbp+0E0h]
 * 00000001406BAA71: test    [rbp+0D8h+arg_10], 200h
 * 00000001406BAA7B: jz      short loc_1406BAA7E
 * 00000001406BAA7D: sti
 * 00000001406BAA7E: mov     ecx, 80000002h
 * 00000001406BAA83: xor     edx, edx
 * 00000001406BAA85: mov     r8, [rbp+0D8h+arg_0]
 * 00000001406BAA8C: call    KiExceptionDispatch
 * 00000001406BAA91: nop
 * 00000001406BAA92: retn
 */
