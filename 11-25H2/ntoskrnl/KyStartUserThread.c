/*
 * XREFs of KyStartUserThread @ 0x1406A0B40
 * Callers:
 *     <none>
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x140429DB0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404F9580 (KiSaveDebugRegisterState.c)
 *     KyStartUserThread @ 0x1406A0B40 (KyStartUserThread.c)
 *     KxStartUserThread @ 0x1406A0EA0 (KxStartUserThread.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406B4440 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KyStartUserThread @ 0x1406A0B40
 * Reason: Hex-Rays returned no pseudocode for 0x1406A0B40
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406A0B40: sub     rsp, 8
 * 00000001406A0B44: push    rbp
 * 00000001406A0B45: sub     rsp, 158h
 * 00000001406A0B4C: lea     rbp, [rsp+80h]
 * 00000001406A0B54: mov     [rbp+0E8h+var_13D], 1
 * 00000001406A0B58: mov     [rbp+0E8h+var_138], rax
 * 00000001406A0B5C: mov     [rbp+0E8h+var_130], rcx
 * 00000001406A0B60: mov     [rbp+0E8h+var_128], rdx
 * 00000001406A0B64: mov     [rbp+0E8h+var_120], r8
 * 00000001406A0B68: mov     [rbp+0E8h+var_118], r9
 * 00000001406A0B6C: mov     [rbp+0E8h+var_110], r10
 * 00000001406A0B70: mov     [rbp+0E8h+var_108], r11
 * 00000001406A0B74: test    [rbp+0E8h+arg_0], 1
 * 00000001406A0B7B: jnz     short loc_1406A0BB5
 * 00000001406A0B7D: xor     edx, edx
 * 00000001406A0B7F: rdsspq  rdx
 * 00000001406A0B84: mov     [rbp+0E8h+var_90], rdx
 * 00000001406A0B88: lfence
 * 00000001406A0B8B: test    byte ptr gs:858h, 1
 * 00000001406A0B94: jnz     short loc_1406A0B9E
 * 00000001406A0B96: lfence
 * 00000001406A0B99: jmp     loc_1406A0E26
 * 00000001406A0B9E: movzx   eax, word ptr gs:866h
 * 00000001406A0BA7: mov     ecx, 48h ; 'H'
 * 00000001406A0BAC: xor     edx, edx
 * 00000001406A0BAE: wrmsr
 * 00000001406A0BB0: jmp     loc_1406A0E26
 * 00000001406A0BB5: test    cs:KiKvaShadow, 1
 * 00000001406A0BBC: jnz     short loc_1406A0BC1
 * 00000001406A0BBE: swapgs
 * 00000001406A0BC1: lfence
 * 00000001406A0BC4: mov     rcx, gs:9D28h
 * 00000001406A0BCD: test    rcx, rcx
 * 00000001406A0BD0: jz      short loc_1406A0BF1
 * 00000001406A0BD2: rdsspq  rdx
 * 00000001406A0BD7: mov     r10, gs:9D20h
 * 00000001406A0BE0: add     r10, 8
 * 00000001406A0BE4: cmp     rdx, r10
 * 00000001406A0BE7: jnz     short loc_1406A0BF1
 * 00000001406A0BE9: rstorssp qword ptr [rcx]
 * 00000001406A0BED: saveprevssp
 * 00000001406A0BF1: mov     r10, gs:188h
 * 00000001406A0BFA: mov     rcx, gs:188h
 * 00000001406A0C03: mov     rcx, [rcx+220h]
 * 00000001406A0C0A: mov     rcx, [rcx+760h]
 * 00000001406A0C11: mov     gs:850h, rcx
 * 00000001406A0C1A: mov     cx, gs:862h
 * 00000001406A0C23: mov     gs:864h, cx
 * 00000001406A0C2C: mov     cl, gs:858h
 * 00000001406A0C34: mov     gs:85Ah, cl
 * 00000001406A0C3C: movzx   eax, word ptr gs:868h
 * 00000001406A0C45: cmp     gs:866h, ax
 * 00000001406A0C4E: jz      short loc_1406A0C62
 * 00000001406A0C50: mov     gs:866h, ax
 * 00000001406A0C59: mov     ecx, 48h ; 'H'
 * 00000001406A0C5E: xor     edx, edx
 * 00000001406A0C60: wrmsr
 * 00000001406A0C62: movzx   edx, byte ptr gs:858h
 * 00000001406A0C6B: test    edx, 8
 * 00000001406A0C71: jz      short loc_1406A0C8A
 * 00000001406A0C73: mov     eax, 1
 * 00000001406A0C78: xor     edx, edx
 * 00000001406A0C7A: mov     ecx, 49h ; 'I'
 * 00000001406A0C7F: wrmsr
 * 00000001406A0C81: movzx   edx, byte ptr gs:858h
 * 00000001406A0C8A: test    edx, 2
 * 00000001406A0C90: jz      loc_1406A0DCD
 * 00000001406A0C96: call    loc_1406A0DA9
 * 00000001406A0C9B: add     rsp, 8
 * 00000001406A0C9F: call    loc_1406A0DB2
 * 00000001406A0CA4: add     rsp, 8
 * 00000001406A0CA8: call    loc_1406A0C9B
 * 00000001406A0CAD: add     rsp, 8
 * 00000001406A0CB1: call    loc_1406A0CA4
 * 00000001406A0CB6: add     rsp, 8
 * 00000001406A0CBA: call    loc_1406A0CAD
 * 00000001406A0CBF: add     rsp, 8
 * 00000001406A0CC3: call    loc_1406A0CB6
 * 00000001406A0CC8: add     rsp, 8
 * 00000001406A0CCC: call    loc_1406A0CBF
 * 00000001406A0CD1: add     rsp, 8
 * 00000001406A0CD5: call    loc_1406A0CC8
 * 00000001406A0CDA: add     rsp, 8
 * 00000001406A0CDE: call    loc_1406A0CD1
 * 00000001406A0CE3: add     rsp, 8
 * 00000001406A0CE7: call    loc_1406A0CDA
 * 00000001406A0CEC: add     rsp, 8
 * 00000001406A0CF0: call    loc_1406A0CE3
 * 00000001406A0CF5: add     rsp, 8
 * 00000001406A0CF9: call    loc_1406A0CEC
 * 00000001406A0CFE: add     rsp, 8
 * 00000001406A0D02: call    loc_1406A0CF5
 * 00000001406A0D07: add     rsp, 8
 * 00000001406A0D0B: call    loc_1406A0CFE
 * 00000001406A0D10: add     rsp, 8
 * 00000001406A0D14: call    loc_1406A0D07
 * 00000001406A0D19: add     rsp, 8
 * 00000001406A0D1D: call    loc_1406A0D10
 * 00000001406A0D22: add     rsp, 8
 * 00000001406A0D26: call    loc_1406A0D19
 * 00000001406A0D2B: add     rsp, 8
 * 00000001406A0D2F: call    loc_1406A0D22
 * 00000001406A0D34: add     rsp, 8
 * 00000001406A0D38: call    loc_1406A0D2B
 * 00000001406A0D3D: add     rsp, 8
 * 00000001406A0D41: call    loc_1406A0D34
 * 00000001406A0D46: add     rsp, 8
 * 00000001406A0D4A: call    loc_1406A0D3D
 * 00000001406A0D4F: add     rsp, 8
 * 00000001406A0D53: call    loc_1406A0D46
 * 00000001406A0D58: add     rsp, 8
 * 00000001406A0D5C: call    loc_1406A0D4F
 * 00000001406A0D61: add     rsp, 8
 * 00000001406A0D65: call    loc_1406A0D58
 * 00000001406A0D6A: add     rsp, 8
 * 00000001406A0D6E: call    loc_1406A0D61
 * 00000001406A0D73: add     rsp, 8
 * 00000001406A0D77: call    loc_1406A0D6A
 * 00000001406A0D7C: add     rsp, 8
 * 00000001406A0D80: call    loc_1406A0D73
 * 00000001406A0D85: add     rsp, 8
 * 00000001406A0D89: call    loc_1406A0D7C
 * 00000001406A0D8E: add     rsp, 8
 * 00000001406A0D92: call    loc_1406A0D85
 * 00000001406A0D97: add     rsp, 8
 * 00000001406A0D9B: call    loc_1406A0D8E
 * 00000001406A0DA0: add     rsp, 8
 * 00000001406A0DA4: call    loc_1406A0D97
 * 00000001406A0DA9: add     rsp, 8
 * 00000001406A0DAD: call    loc_1406A0DA0
 * 00000001406A0DB2: add     rsp, 8
 * 00000001406A0DB6: mov     eax, 0DADAh
 * 00000001406A0DBB: test    byte ptr gs:85Ch, 8
 * 00000001406A0DC4: jz      short loc_1406A0DCD
 * 00000001406A0DC6: mov     al, 20h ; ' '
 * 00000001406A0DC8: incsspq rax
 * 00000001406A0DCD: test    edx, 80h
 * 00000001406A0DD3: jz      short loc_1406A0DDD
 * 00000001406A0DD5: lfence
 * 00000001406A0DD8: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406A0DDD: lfence
 * 00000001406A0DE0: mov     byte ptr gs:85Eh, 0
 * 00000001406A0DE9: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406A0DF0: jz      short loc_1406A0E11
 * 00000001406A0DF2: mov     ecx, 6A7h
 * 00000001406A0DF7: rdmsr
 * 00000001406A0DF9: cmp     edx, 0
 * 00000001406A0DFC: jz      short loc_1406A0E11
 * 00000001406A0DFE: mov     ecx, edx
 * 00000001406A0E00: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406A0E06: cmp     edx, ecx
 * 00000001406A0E08: jz      short loc_1406A0E11
 * 00000001406A0E0A: mov     ecx, 6A7h
 * 00000001406A0E0F: wrmsr
 * 00000001406A0E11: test    byte ptr [r10+3], 3
 * 00000001406A0E16: mov     [rbp+0E8h+var_68], 0
 * 00000001406A0E1F: jz      short loc_1406A0E26
 * 00000001406A0E21: call    KiSaveDebugRegisterState
 * 00000001406A0E26: cld
 * 00000001406A0E27: stmxcsr [rbp+0E8h+var_13C]
 * 00000001406A0E2B: ldmxcsr dword ptr gs:180h
 * 00000001406A0E34: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001406A0E38: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001406A0E3C: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001406A0E40: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001406A0E44: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001406A0E48: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001406A0E4C: test    [rbp+0E8h+arg_0], 1
 * 00000001406A0E53: jz      short loc_1406A0E5A
 * 00000001406A0E55: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406A0E5A: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406A0E61: jz      short loc_1406A0E6F
 * 00000001406A0E63: test    [rbp+0E8h+arg_0], 1
 * 00000001406A0E6A: jz      short loc_1406A0E6F
 * 00000001406A0E6C: stac
 * 00000001406A0E6F: test    [rbp+0E8h+arg_8], 200h
 * 00000001406A0E79: jz      short loc_1406A0E7C
 * 00000001406A0E7B: sti
 * 00000001406A0E7C: call    KxStartUserThread
 * 00000001406A0E81: nop     word ptr [rax+rax+00000000h]
 * 00000001406A0E90: nop
 * 00000001406A0E91: retn
 */
