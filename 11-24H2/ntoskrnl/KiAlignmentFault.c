/*
 * XREFs of KiAlignmentFault @ 0x1406BB640
 * Callers:
 *     KiAlignmentFaultShadow @ 0x140BBD940 (KiAlignmentFaultShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x14040ED30 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404F9550 (KiSaveDebugRegisterState.c)
 *     KiAlignmentFault @ 0x1406BB640 (KiAlignmentFault.c)
 *     KiExceptionDispatch @ 0x1406BFC00 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406C0640 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiAlignmentFault @ 0x1406BB640
 * Reason: Hex-Rays returned no pseudocode for 0x1406BB640
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406BB640: push    rbp
 * 00000001406BB641: sub     rsp, 158h
 * 00000001406BB648: lea     rbp, [rsp+80h]
 * 00000001406BB650: mov     [rbp+0D8h+var_12D], 1
 * 00000001406BB654: mov     [rbp+0D8h+var_128], rax
 * 00000001406BB658: mov     [rbp+0D8h+var_120], rcx
 * 00000001406BB65C: mov     [rbp+0D8h+var_118], rdx
 * 00000001406BB660: mov     [rbp+0D8h+var_110], r8
 * 00000001406BB664: mov     [rbp+0D8h+var_108], r9
 * 00000001406BB668: mov     [rbp+0D8h+var_100], r10
 * 00000001406BB66C: mov     [rbp+0D8h+var_F8], r11
 * 00000001406BB670: test    [rbp+0D8h+arg_8], 1
 * 00000001406BB677: jnz     short loc_1406BB6B1
 * 00000001406BB679: xor     edx, edx
 * 00000001406BB67B: rdsspq  rdx
 * 00000001406BB680: mov     [rbp+0D8h+var_80], rdx
 * 00000001406BB684: lfence
 * 00000001406BB687: test    byte ptr gs:858h, 1
 * 00000001406BB690: jnz     short loc_1406BB69A
 * 00000001406BB692: lfence
 * 00000001406BB695: jmp     loc_1406BB922
 * 00000001406BB69A: movzx   eax, word ptr gs:866h
 * 00000001406BB6A3: mov     ecx, 48h ; 'H'
 * 00000001406BB6A8: xor     edx, edx
 * 00000001406BB6AA: wrmsr
 * 00000001406BB6AC: jmp     loc_1406BB922
 * 00000001406BB6B1: test    cs:KiKvaShadow, 1
 * 00000001406BB6B8: jnz     short loc_1406BB6BD
 * 00000001406BB6BA: swapgs
 * 00000001406BB6BD: lfence
 * 00000001406BB6C0: mov     rcx, gs:9D28h
 * 00000001406BB6C9: test    rcx, rcx
 * 00000001406BB6CC: jz      short loc_1406BB6ED
 * 00000001406BB6CE: rdsspq  rdx
 * 00000001406BB6D3: mov     r10, gs:9D20h
 * 00000001406BB6DC: add     r10, 8
 * 00000001406BB6E0: cmp     rdx, r10
 * 00000001406BB6E3: jnz     short loc_1406BB6ED
 * 00000001406BB6E5: rstorssp qword ptr [rcx]
 * 00000001406BB6E9: saveprevssp
 * 00000001406BB6ED: mov     r10, gs:188h
 * 00000001406BB6F6: mov     rcx, gs:188h
 * 00000001406BB6FF: mov     rcx, [rcx+220h]
 * 00000001406BB706: mov     rcx, [rcx+760h]
 * 00000001406BB70D: mov     gs:850h, rcx
 * 00000001406BB716: mov     cx, gs:862h
 * 00000001406BB71F: mov     gs:864h, cx
 * 00000001406BB728: mov     cl, gs:858h
 * 00000001406BB730: mov     gs:85Ah, cl
 * 00000001406BB738: movzx   eax, word ptr gs:868h
 * 00000001406BB741: cmp     gs:866h, ax
 * 00000001406BB74A: jz      short loc_1406BB75E
 * 00000001406BB74C: mov     gs:866h, ax
 * 00000001406BB755: mov     ecx, 48h ; 'H'
 * 00000001406BB75A: xor     edx, edx
 * 00000001406BB75C: wrmsr
 * 00000001406BB75E: movzx   edx, byte ptr gs:858h
 * 00000001406BB767: test    edx, 8
 * 00000001406BB76D: jz      short loc_1406BB786
 * 00000001406BB76F: mov     eax, 1
 * 00000001406BB774: xor     edx, edx
 * 00000001406BB776: mov     ecx, 49h ; 'I'
 * 00000001406BB77B: wrmsr
 * 00000001406BB77D: movzx   edx, byte ptr gs:858h
 * 00000001406BB786: test    edx, 2
 * 00000001406BB78C: jz      loc_1406BB8C9
 * 00000001406BB792: call    loc_1406BB8A5
 * 00000001406BB797: add     rsp, 8
 * 00000001406BB79B: call    loc_1406BB8AE
 * 00000001406BB7A0: add     rsp, 8
 * 00000001406BB7A4: call    loc_1406BB797
 * 00000001406BB7A9: add     rsp, 8
 * 00000001406BB7AD: call    loc_1406BB7A0
 * 00000001406BB7B2: add     rsp, 8
 * 00000001406BB7B6: call    loc_1406BB7A9
 * 00000001406BB7BB: add     rsp, 8
 * 00000001406BB7BF: call    loc_1406BB7B2
 * 00000001406BB7C4: add     rsp, 8
 * 00000001406BB7C8: call    loc_1406BB7BB
 * 00000001406BB7CD: add     rsp, 8
 * 00000001406BB7D1: call    loc_1406BB7C4
 * 00000001406BB7D6: add     rsp, 8
 * 00000001406BB7DA: call    loc_1406BB7CD
 * 00000001406BB7DF: add     rsp, 8
 * 00000001406BB7E3: call    loc_1406BB7D6
 * 00000001406BB7E8: add     rsp, 8
 * 00000001406BB7EC: call    loc_1406BB7DF
 * 00000001406BB7F1: add     rsp, 8
 * 00000001406BB7F5: call    loc_1406BB7E8
 * 00000001406BB7FA: add     rsp, 8
 * 00000001406BB7FE: call    loc_1406BB7F1
 * 00000001406BB803: add     rsp, 8
 * 00000001406BB807: call    loc_1406BB7FA
 * 00000001406BB80C: add     rsp, 8
 * 00000001406BB810: call    loc_1406BB803
 * 00000001406BB815: add     rsp, 8
 * 00000001406BB819: call    loc_1406BB80C
 * 00000001406BB81E: add     rsp, 8
 * 00000001406BB822: call    loc_1406BB815
 * 00000001406BB827: add     rsp, 8
 * 00000001406BB82B: call    loc_1406BB81E
 * 00000001406BB830: add     rsp, 8
 * 00000001406BB834: call    loc_1406BB827
 * 00000001406BB839: add     rsp, 8
 * 00000001406BB83D: call    loc_1406BB830
 * 00000001406BB842: add     rsp, 8
 * 00000001406BB846: call    loc_1406BB839
 * 00000001406BB84B: add     rsp, 8
 * 00000001406BB84F: call    loc_1406BB842
 * 00000001406BB854: add     rsp, 8
 * 00000001406BB858: call    loc_1406BB84B
 * 00000001406BB85D: add     rsp, 8
 * 00000001406BB861: call    loc_1406BB854
 * 00000001406BB866: add     rsp, 8
 * 00000001406BB86A: call    loc_1406BB85D
 * 00000001406BB86F: add     rsp, 8
 * 00000001406BB873: call    loc_1406BB866
 * 00000001406BB878: add     rsp, 8
 * 00000001406BB87C: call    loc_1406BB86F
 * 00000001406BB881: add     rsp, 8
 * 00000001406BB885: call    loc_1406BB878
 * 00000001406BB88A: add     rsp, 8
 * 00000001406BB88E: call    loc_1406BB881
 * 00000001406BB893: add     rsp, 8
 * 00000001406BB897: call    loc_1406BB88A
 * 00000001406BB89C: add     rsp, 8
 * 00000001406BB8A0: call    loc_1406BB893
 * 00000001406BB8A5: add     rsp, 8
 * 00000001406BB8A9: call    loc_1406BB89C
 * 00000001406BB8AE: add     rsp, 8
 * 00000001406BB8B2: mov     eax, 0DADAh
 * 00000001406BB8B7: test    byte ptr gs:85Ch, 8
 * 00000001406BB8C0: jz      short loc_1406BB8C9
 * 00000001406BB8C2: mov     al, 20h ; ' '
 * 00000001406BB8C4: incsspq rax
 * 00000001406BB8C9: test    edx, 80h
 * 00000001406BB8CF: jz      short loc_1406BB8D9
 * 00000001406BB8D1: lfence
 * 00000001406BB8D4: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406BB8D9: lfence
 * 00000001406BB8DC: mov     byte ptr gs:85Eh, 0
 * 00000001406BB8E5: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406BB8EC: jz      short loc_1406BB90D
 * 00000001406BB8EE: mov     ecx, 6A7h
 * 00000001406BB8F3: rdmsr
 * 00000001406BB8F5: cmp     edx, 0
 * 00000001406BB8F8: jz      short loc_1406BB90D
 * 00000001406BB8FA: mov     ecx, edx
 * 00000001406BB8FC: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406BB902: cmp     edx, ecx
 * 00000001406BB904: jz      short loc_1406BB90D
 * 00000001406BB906: mov     ecx, 6A7h
 * 00000001406BB90B: wrmsr
 * 00000001406BB90D: test    byte ptr [r10+3], 3
 * 00000001406BB912: mov     [rbp+0D8h+var_58], 0
 * 00000001406BB91B: jz      short loc_1406BB922
 * 00000001406BB91D: call    KiSaveDebugRegisterState
 * 00000001406BB922: cld
 * 00000001406BB923: stmxcsr [rbp+0D8h+var_12C]
 * 00000001406BB927: ldmxcsr dword ptr gs:180h
 * 00000001406BB930: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001406BB934: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001406BB938: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001406BB93C: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001406BB940: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001406BB944: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001406BB948: test    [rbp+0D8h+arg_8], 1
 * 00000001406BB94F: jz      short loc_1406BB956
 * 00000001406BB951: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406BB956: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406BB95D: jz      short loc_1406BB96B
 * 00000001406BB95F: test    [rbp+0D8h+arg_8], 1
 * 00000001406BB966: jz      short loc_1406BB96B
 * 00000001406BB968: stac
 * 00000001406BB96B: mov     eax, [rbp+0E0h]
 * 00000001406BB971: test    [rbp+0D8h+arg_10], 200h
 * 00000001406BB97B: jz      short loc_1406BB97E
 * 00000001406BB97D: sti
 * 00000001406BB97E: mov     ecx, 80000002h
 * 00000001406BB983: xor     edx, edx
 * 00000001406BB985: mov     r8, [rbp+0D8h+arg_0]
 * 00000001406BB98C: call    KiExceptionDispatch
 * 00000001406BB991: nop
 * 00000001406BB992: retn
 */
