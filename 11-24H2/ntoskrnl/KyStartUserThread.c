/*
 * XREFs of KyStartUserThread @ 0x1406ACDB0
 * Callers:
 *     <none>
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x14040ED30 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404F9550 (KiSaveDebugRegisterState.c)
 *     KyStartUserThread @ 0x1406ACDB0 (KyStartUserThread.c)
 *     KxStartUserThread @ 0x1406AD110 (KxStartUserThread.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406C0640 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KyStartUserThread @ 0x1406ACDB0
 * Reason: Hex-Rays returned no pseudocode for 0x1406ACDB0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406ACDB0: sub     rsp, 8
 * 00000001406ACDB4: push    rbp
 * 00000001406ACDB5: sub     rsp, 158h
 * 00000001406ACDBC: lea     rbp, [rsp+80h]
 * 00000001406ACDC4: mov     [rbp+0E8h+var_13D], 1
 * 00000001406ACDC8: mov     [rbp+0E8h+var_138], rax
 * 00000001406ACDCC: mov     [rbp+0E8h+var_130], rcx
 * 00000001406ACDD0: mov     [rbp+0E8h+var_128], rdx
 * 00000001406ACDD4: mov     [rbp+0E8h+var_120], r8
 * 00000001406ACDD8: mov     [rbp+0E8h+var_118], r9
 * 00000001406ACDDC: mov     [rbp+0E8h+var_110], r10
 * 00000001406ACDE0: mov     [rbp+0E8h+var_108], r11
 * 00000001406ACDE4: test    [rbp+0E8h+arg_0], 1
 * 00000001406ACDEB: jnz     short loc_1406ACE25
 * 00000001406ACDED: xor     edx, edx
 * 00000001406ACDEF: rdsspq  rdx
 * 00000001406ACDF4: mov     [rbp+0E8h+var_90], rdx
 * 00000001406ACDF8: lfence
 * 00000001406ACDFB: test    byte ptr gs:858h, 1
 * 00000001406ACE04: jnz     short loc_1406ACE0E
 * 00000001406ACE06: lfence
 * 00000001406ACE09: jmp     loc_1406AD096
 * 00000001406ACE0E: movzx   eax, word ptr gs:866h
 * 00000001406ACE17: mov     ecx, 48h ; 'H'
 * 00000001406ACE1C: xor     edx, edx
 * 00000001406ACE1E: wrmsr
 * 00000001406ACE20: jmp     loc_1406AD096
 * 00000001406ACE25: test    cs:KiKvaShadow, 1
 * 00000001406ACE2C: jnz     short loc_1406ACE31
 * 00000001406ACE2E: swapgs
 * 00000001406ACE31: lfence
 * 00000001406ACE34: mov     rcx, gs:9D28h
 * 00000001406ACE3D: test    rcx, rcx
 * 00000001406ACE40: jz      short loc_1406ACE61
 * 00000001406ACE42: rdsspq  rdx
 * 00000001406ACE47: mov     r10, gs:9D20h
 * 00000001406ACE50: add     r10, 8
 * 00000001406ACE54: cmp     rdx, r10
 * 00000001406ACE57: jnz     short loc_1406ACE61
 * 00000001406ACE59: rstorssp qword ptr [rcx]
 * 00000001406ACE5D: saveprevssp
 * 00000001406ACE61: mov     r10, gs:188h
 * 00000001406ACE6A: mov     rcx, gs:188h
 * 00000001406ACE73: mov     rcx, [rcx+220h]
 * 00000001406ACE7A: mov     rcx, [rcx+760h]
 * 00000001406ACE81: mov     gs:850h, rcx
 * 00000001406ACE8A: mov     cx, gs:862h
 * 00000001406ACE93: mov     gs:864h, cx
 * 00000001406ACE9C: mov     cl, gs:858h
 * 00000001406ACEA4: mov     gs:85Ah, cl
 * 00000001406ACEAC: movzx   eax, word ptr gs:868h
 * 00000001406ACEB5: cmp     gs:866h, ax
 * 00000001406ACEBE: jz      short loc_1406ACED2
 * 00000001406ACEC0: mov     gs:866h, ax
 * 00000001406ACEC9: mov     ecx, 48h ; 'H'
 * 00000001406ACECE: xor     edx, edx
 * 00000001406ACED0: wrmsr
 * 00000001406ACED2: movzx   edx, byte ptr gs:858h
 * 00000001406ACEDB: test    edx, 8
 * 00000001406ACEE1: jz      short loc_1406ACEFA
 * 00000001406ACEE3: mov     eax, 1
 * 00000001406ACEE8: xor     edx, edx
 * 00000001406ACEEA: mov     ecx, 49h ; 'I'
 * 00000001406ACEEF: wrmsr
 * 00000001406ACEF1: movzx   edx, byte ptr gs:858h
 * 00000001406ACEFA: test    edx, 2
 * 00000001406ACF00: jz      loc_1406AD03D
 * 00000001406ACF06: call    loc_1406AD019
 * 00000001406ACF0B: add     rsp, 8
 * 00000001406ACF0F: call    loc_1406AD022
 * 00000001406ACF14: add     rsp, 8
 * 00000001406ACF18: call    loc_1406ACF0B
 * 00000001406ACF1D: add     rsp, 8
 * 00000001406ACF21: call    loc_1406ACF14
 * 00000001406ACF26: add     rsp, 8
 * 00000001406ACF2A: call    loc_1406ACF1D
 * 00000001406ACF2F: add     rsp, 8
 * 00000001406ACF33: call    loc_1406ACF26
 * 00000001406ACF38: add     rsp, 8
 * 00000001406ACF3C: call    loc_1406ACF2F
 * 00000001406ACF41: add     rsp, 8
 * 00000001406ACF45: call    loc_1406ACF38
 * 00000001406ACF4A: add     rsp, 8
 * 00000001406ACF4E: call    loc_1406ACF41
 * 00000001406ACF53: add     rsp, 8
 * 00000001406ACF57: call    loc_1406ACF4A
 * 00000001406ACF5C: add     rsp, 8
 * 00000001406ACF60: call    loc_1406ACF53
 * 00000001406ACF65: add     rsp, 8
 * 00000001406ACF69: call    loc_1406ACF5C
 * 00000001406ACF6E: add     rsp, 8
 * 00000001406ACF72: call    loc_1406ACF65
 * 00000001406ACF77: add     rsp, 8
 * 00000001406ACF7B: call    loc_1406ACF6E
 * 00000001406ACF80: add     rsp, 8
 * 00000001406ACF84: call    loc_1406ACF77
 * 00000001406ACF89: add     rsp, 8
 * 00000001406ACF8D: call    loc_1406ACF80
 * 00000001406ACF92: add     rsp, 8
 * 00000001406ACF96: call    loc_1406ACF89
 * 00000001406ACF9B: add     rsp, 8
 * 00000001406ACF9F: call    loc_1406ACF92
 * 00000001406ACFA4: add     rsp, 8
 * 00000001406ACFA8: call    loc_1406ACF9B
 * 00000001406ACFAD: add     rsp, 8
 * 00000001406ACFB1: call    loc_1406ACFA4
 * 00000001406ACFB6: add     rsp, 8
 * 00000001406ACFBA: call    loc_1406ACFAD
 * 00000001406ACFBF: add     rsp, 8
 * 00000001406ACFC3: call    loc_1406ACFB6
 * 00000001406ACFC8: add     rsp, 8
 * 00000001406ACFCC: call    loc_1406ACFBF
 * 00000001406ACFD1: add     rsp, 8
 * 00000001406ACFD5: call    loc_1406ACFC8
 * 00000001406ACFDA: add     rsp, 8
 * 00000001406ACFDE: call    loc_1406ACFD1
 * 00000001406ACFE3: add     rsp, 8
 * 00000001406ACFE7: call    loc_1406ACFDA
 * 00000001406ACFEC: add     rsp, 8
 * 00000001406ACFF0: call    loc_1406ACFE3
 * 00000001406ACFF5: add     rsp, 8
 * 00000001406ACFF9: call    loc_1406ACFEC
 * 00000001406ACFFE: add     rsp, 8
 * 00000001406AD002: call    loc_1406ACFF5
 * 00000001406AD007: add     rsp, 8
 * 00000001406AD00B: call    loc_1406ACFFE
 * 00000001406AD010: add     rsp, 8
 * 00000001406AD014: call    loc_1406AD007
 * 00000001406AD019: add     rsp, 8
 * 00000001406AD01D: call    loc_1406AD010
 * 00000001406AD022: add     rsp, 8
 * 00000001406AD026: mov     eax, 0DADAh
 * 00000001406AD02B: test    byte ptr gs:85Ch, 8
 * 00000001406AD034: jz      short loc_1406AD03D
 * 00000001406AD036: mov     al, 20h ; ' '
 * 00000001406AD038: incsspq rax
 * 00000001406AD03D: test    edx, 80h
 * 00000001406AD043: jz      short loc_1406AD04D
 * 00000001406AD045: lfence
 * 00000001406AD048: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406AD04D: lfence
 * 00000001406AD050: mov     byte ptr gs:85Eh, 0
 * 00000001406AD059: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406AD060: jz      short loc_1406AD081
 * 00000001406AD062: mov     ecx, 6A7h
 * 00000001406AD067: rdmsr
 * 00000001406AD069: cmp     edx, 0
 * 00000001406AD06C: jz      short loc_1406AD081
 * 00000001406AD06E: mov     ecx, edx
 * 00000001406AD070: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406AD076: cmp     edx, ecx
 * 00000001406AD078: jz      short loc_1406AD081
 * 00000001406AD07A: mov     ecx, 6A7h
 * 00000001406AD07F: wrmsr
 * 00000001406AD081: test    byte ptr [r10+3], 3
 * 00000001406AD086: mov     [rbp+0E8h+var_68], 0
 * 00000001406AD08F: jz      short loc_1406AD096
 * 00000001406AD091: call    KiSaveDebugRegisterState
 * 00000001406AD096: cld
 * 00000001406AD097: stmxcsr [rbp+0E8h+var_13C]
 * 00000001406AD09B: ldmxcsr dword ptr gs:180h
 * 00000001406AD0A4: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001406AD0A8: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001406AD0AC: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001406AD0B0: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001406AD0B4: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001406AD0B8: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001406AD0BC: test    [rbp+0E8h+arg_0], 1
 * 00000001406AD0C3: jz      short loc_1406AD0CA
 * 00000001406AD0C5: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406AD0CA: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406AD0D1: jz      short loc_1406AD0DF
 * 00000001406AD0D3: test    [rbp+0E8h+arg_0], 1
 * 00000001406AD0DA: jz      short loc_1406AD0DF
 * 00000001406AD0DC: stac
 * 00000001406AD0DF: test    [rbp+0E8h+arg_8], 200h
 * 00000001406AD0E9: jz      short loc_1406AD0EC
 * 00000001406AD0EB: sti
 * 00000001406AD0EC: call    KxStartUserThread
 * 00000001406AD0F1: nop     word ptr [rax+rax+00000000h]
 * 00000001406AD100: nop
 * 00000001406AD101: retn
 */
