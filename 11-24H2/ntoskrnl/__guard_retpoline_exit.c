/*
 * XREFs of __guard_retpoline_exit @ 0x140BC05A0
 * Callers:
 *     KeExitRetpoline @ 0x14045517C (KeExitRetpoline.c)
 *     __guard_retpoline_exit_indirect_rax @ 0x140BC03C0 (__guard_retpoline_exit_indirect_rax.c)
 *     __guard_retpoline_import_r10 @ 0x140BC0440 (__guard_retpoline_import_r10.c)
 * Callees:
 *     __guard_retpoline_exit @ 0x140BC05A0 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_exit @ 0x140BC05A0
 * Reason: Hex-Rays returned no pseudocode for 0x140BC05A0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140BC05A0: pushfq
 * 0000000140BC05A2: sub     rsp, 18h
 * 0000000140BC05A6: mov     [rsp+20h+var_20], rax
 * 0000000140BC05AA: mov     [rsp+20h+var_18], rcx
 * 0000000140BC05AF: mov     [rsp+20h+var_10], rdx
 * 0000000140BC05B4: cli
 * 0000000140BC05B5: movzx   eax, word ptr gs:864h
 * 0000000140BC05BE: cmp     gs:866h, ax
 * 0000000140BC05C7: jz      short loc_140BC05DB
 * 0000000140BC05C9: mov     gs:866h, ax
 * 0000000140BC05D2: mov     ecx, 48h ; 'H'
 * 0000000140BC05D7: xor     edx, edx
 * 0000000140BC05D9: wrmsr
 * 0000000140BC05DB: movzx   edx, byte ptr gs:85Ah
 * 0000000140BC05E4: test    edx, 10h
 * 0000000140BC05EA: jz      short loc_140BC0603
 * 0000000140BC05EC: mov     eax, 1
 * 0000000140BC05F1: xor     edx, edx
 * 0000000140BC05F3: mov     ecx, 49h ; 'I'
 * 0000000140BC05F8: wrmsr
 * 0000000140BC05FA: movzx   edx, byte ptr gs:85Ah
 * 0000000140BC0603: test    edx, 40h
 * 0000000140BC0609: jz      loc_140BC0746
 * 0000000140BC060F: call    loc_140BC0722
 * 0000000140BC0614: add     rsp, 8
 * 0000000140BC0618: call    loc_140BC072B
 * 0000000140BC061D: add     rsp, 8
 * 0000000140BC0621: call    loc_140BC0614
 * 0000000140BC0626: add     rsp, 8
 * 0000000140BC062A: call    loc_140BC061D
 * 0000000140BC062F: add     rsp, 8
 * 0000000140BC0633: call    loc_140BC0626
 * 0000000140BC0638: add     rsp, 8
 * 0000000140BC063C: call    loc_140BC062F
 * 0000000140BC0641: add     rsp, 8
 * 0000000140BC0645: call    loc_140BC0638
 * 0000000140BC064A: add     rsp, 8
 * 0000000140BC064E: call    loc_140BC0641
 * 0000000140BC0653: add     rsp, 8
 * 0000000140BC0657: call    loc_140BC064A
 * 0000000140BC065C: add     rsp, 8
 * 0000000140BC0660: call    loc_140BC0653
 * 0000000140BC0665: add     rsp, 8
 * 0000000140BC0669: call    loc_140BC065C
 * 0000000140BC066E: add     rsp, 8
 * 0000000140BC0672: call    loc_140BC0665
 * 0000000140BC0677: add     rsp, 8
 * 0000000140BC067B: call    loc_140BC066E
 * 0000000140BC0680: add     rsp, 8
 * 0000000140BC0684: call    loc_140BC0677
 * 0000000140BC0689: add     rsp, 8
 * 0000000140BC068D: call    loc_140BC0680
 * 0000000140BC0692: add     rsp, 8
 * 0000000140BC0696: call    loc_140BC0689
 * 0000000140BC069B: add     rsp, 8
 * 0000000140BC069F: call    loc_140BC0692
 * 0000000140BC06A4: add     rsp, 8
 * 0000000140BC06A8: call    loc_140BC069B
 * 0000000140BC06AD: add     rsp, 8
 * 0000000140BC06B1: call    loc_140BC06A4
 * 0000000140BC06B6: add     rsp, 8
 * 0000000140BC06BA: call    loc_140BC06AD
 * 0000000140BC06BF: add     rsp, 8
 * 0000000140BC06C3: call    loc_140BC06B6
 * 0000000140BC06C8: add     rsp, 8
 * 0000000140BC06CC: call    loc_140BC06BF
 * 0000000140BC06D1: add     rsp, 8
 * 0000000140BC06D5: call    loc_140BC06C8
 * 0000000140BC06DA: add     rsp, 8
 * 0000000140BC06DE: call    loc_140BC06D1
 * 0000000140BC06E3: add     rsp, 8
 * 0000000140BC06E7: call    loc_140BC06DA
 * 0000000140BC06EC: add     rsp, 8
 * 0000000140BC06F0: call    loc_140BC06E3
 * 0000000140BC06F5: add     rsp, 8
 * 0000000140BC06F9: call    loc_140BC06EC
 * 0000000140BC06FE: add     rsp, 8
 * 0000000140BC0702: call    loc_140BC06F5
 * 0000000140BC0707: add     rsp, 8
 * 0000000140BC070B: call    loc_140BC06FE
 * 0000000140BC0710: add     rsp, 8
 * 0000000140BC0714: call    loc_140BC0707
 * 0000000140BC0719: add     rsp, 8
 * 0000000140BC071D: call    loc_140BC0710
 * 0000000140BC0722: add     rsp, 8
 * 0000000140BC0726: call    loc_140BC0719
 * 0000000140BC072B: add     rsp, 8
 * 0000000140BC072F: mov     eax, 0DADAh
 * 0000000140BC0734: test    byte ptr gs:85Ch, 8
 * 0000000140BC073D: jz      short loc_140BC0746
 * 0000000140BC073F: mov     al, 20h ; ' '
 * 0000000140BC0741: incsspq rax
 * 0000000140BC0746: lfence
 * 0000000140BC0749: or      byte ptr gs:85Eh, 2
 * 0000000140BC0752: bt      [rsp-0E0h+arg_F0], 9
 * 0000000140BC0759: jnb     short loc_140BC075C
 * 0000000140BC075B: sti
 * 0000000140BC075C: mov     rax, [rsp-0E0h+arg_D8]
 * 0000000140BC0760: mov     rcx, [rsp-0E0h+arg_E0]
 * 0000000140BC0765: mov     rdx, [rsp-0E0h+arg_E8]
 * 0000000140BC076A: add     rsp, 20h
 * 0000000140BC076E: retn
 */
