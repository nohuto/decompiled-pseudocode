/*
 * XREFs of __guard_retpoline_exit @ 0x140BBE5A0
 * Callers:
 *     KeExitRetpoline @ 0x14046029C (KeExitRetpoline.c)
 *     __guard_retpoline_exit_indirect_rax @ 0x140BBE3C0 (__guard_retpoline_exit_indirect_rax.c)
 *     __guard_retpoline_import_r10 @ 0x140BBE440 (__guard_retpoline_import_r10.c)
 * Callees:
 *     __guard_retpoline_exit @ 0x140BBE5A0 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_exit @ 0x140BBE5A0
 * Reason: Hex-Rays returned no pseudocode for 0x140BBE5A0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140BBE5A0: pushfq
 * 0000000140BBE5A2: sub     rsp, 18h
 * 0000000140BBE5A6: mov     [rsp+20h+var_20], rax
 * 0000000140BBE5AA: mov     [rsp+20h+var_18], rcx
 * 0000000140BBE5AF: mov     [rsp+20h+var_10], rdx
 * 0000000140BBE5B4: cli
 * 0000000140BBE5B5: movzx   eax, word ptr gs:864h
 * 0000000140BBE5BE: cmp     gs:866h, ax
 * 0000000140BBE5C7: jz      short loc_140BBE5DB
 * 0000000140BBE5C9: mov     gs:866h, ax
 * 0000000140BBE5D2: mov     ecx, 48h ; 'H'
 * 0000000140BBE5D7: xor     edx, edx
 * 0000000140BBE5D9: wrmsr
 * 0000000140BBE5DB: movzx   edx, byte ptr gs:85Ah
 * 0000000140BBE5E4: test    edx, 10h
 * 0000000140BBE5EA: jz      short loc_140BBE603
 * 0000000140BBE5EC: mov     eax, 1
 * 0000000140BBE5F1: xor     edx, edx
 * 0000000140BBE5F3: mov     ecx, 49h ; 'I'
 * 0000000140BBE5F8: wrmsr
 * 0000000140BBE5FA: movzx   edx, byte ptr gs:85Ah
 * 0000000140BBE603: test    edx, 40h
 * 0000000140BBE609: jz      loc_140BBE746
 * 0000000140BBE60F: call    loc_140BBE722
 * 0000000140BBE614: add     rsp, 8
 * 0000000140BBE618: call    loc_140BBE72B
 * 0000000140BBE61D: add     rsp, 8
 * 0000000140BBE621: call    loc_140BBE614
 * 0000000140BBE626: add     rsp, 8
 * 0000000140BBE62A: call    loc_140BBE61D
 * 0000000140BBE62F: add     rsp, 8
 * 0000000140BBE633: call    loc_140BBE626
 * 0000000140BBE638: add     rsp, 8
 * 0000000140BBE63C: call    loc_140BBE62F
 * 0000000140BBE641: add     rsp, 8
 * 0000000140BBE645: call    loc_140BBE638
 * 0000000140BBE64A: add     rsp, 8
 * 0000000140BBE64E: call    loc_140BBE641
 * 0000000140BBE653: add     rsp, 8
 * 0000000140BBE657: call    loc_140BBE64A
 * 0000000140BBE65C: add     rsp, 8
 * 0000000140BBE660: call    loc_140BBE653
 * 0000000140BBE665: add     rsp, 8
 * 0000000140BBE669: call    loc_140BBE65C
 * 0000000140BBE66E: add     rsp, 8
 * 0000000140BBE672: call    loc_140BBE665
 * 0000000140BBE677: add     rsp, 8
 * 0000000140BBE67B: call    loc_140BBE66E
 * 0000000140BBE680: add     rsp, 8
 * 0000000140BBE684: call    loc_140BBE677
 * 0000000140BBE689: add     rsp, 8
 * 0000000140BBE68D: call    loc_140BBE680
 * 0000000140BBE692: add     rsp, 8
 * 0000000140BBE696: call    loc_140BBE689
 * 0000000140BBE69B: add     rsp, 8
 * 0000000140BBE69F: call    loc_140BBE692
 * 0000000140BBE6A4: add     rsp, 8
 * 0000000140BBE6A8: call    loc_140BBE69B
 * 0000000140BBE6AD: add     rsp, 8
 * 0000000140BBE6B1: call    loc_140BBE6A4
 * 0000000140BBE6B6: add     rsp, 8
 * 0000000140BBE6BA: call    loc_140BBE6AD
 * 0000000140BBE6BF: add     rsp, 8
 * 0000000140BBE6C3: call    loc_140BBE6B6
 * 0000000140BBE6C8: add     rsp, 8
 * 0000000140BBE6CC: call    loc_140BBE6BF
 * 0000000140BBE6D1: add     rsp, 8
 * 0000000140BBE6D5: call    loc_140BBE6C8
 * 0000000140BBE6DA: add     rsp, 8
 * 0000000140BBE6DE: call    loc_140BBE6D1
 * 0000000140BBE6E3: add     rsp, 8
 * 0000000140BBE6E7: call    loc_140BBE6DA
 * 0000000140BBE6EC: add     rsp, 8
 * 0000000140BBE6F0: call    loc_140BBE6E3
 * 0000000140BBE6F5: add     rsp, 8
 * 0000000140BBE6F9: call    loc_140BBE6EC
 * 0000000140BBE6FE: add     rsp, 8
 * 0000000140BBE702: call    loc_140BBE6F5
 * 0000000140BBE707: add     rsp, 8
 * 0000000140BBE70B: call    loc_140BBE6FE
 * 0000000140BBE710: add     rsp, 8
 * 0000000140BBE714: call    loc_140BBE707
 * 0000000140BBE719: add     rsp, 8
 * 0000000140BBE71D: call    loc_140BBE710
 * 0000000140BBE722: add     rsp, 8
 * 0000000140BBE726: call    loc_140BBE719
 * 0000000140BBE72B: add     rsp, 8
 * 0000000140BBE72F: mov     eax, 0DADAh
 * 0000000140BBE734: test    byte ptr gs:85Ch, 8
 * 0000000140BBE73D: jz      short loc_140BBE746
 * 0000000140BBE73F: mov     al, 20h ; ' '
 * 0000000140BBE741: incsspq rax
 * 0000000140BBE746: lfence
 * 0000000140BBE749: or      byte ptr gs:85Eh, 2
 * 0000000140BBE752: bt      [rsp-0E0h+arg_F0], 9
 * 0000000140BBE759: jnb     short loc_140BBE75C
 * 0000000140BBE75B: sti
 * 0000000140BBE75C: mov     rax, [rsp-0E0h+arg_D8]
 * 0000000140BBE760: mov     rcx, [rsp-0E0h+arg_E0]
 * 0000000140BBE765: mov     rdx, [rsp-0E0h+arg_E8]
 * 0000000140BBE76A: add     rsp, 20h
 * 0000000140BBE76E: retn
 */
