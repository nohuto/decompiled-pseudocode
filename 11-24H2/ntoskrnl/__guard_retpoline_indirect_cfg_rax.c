/*
 * XREFs of __guard_retpoline_indirect_cfg_rax @ 0x140BC02C0
 * Callers:
 *     <none>
 * Callees:
 *     __guard_retpoline_indirect_cfg_rax @ 0x140BC02C0 (__guard_retpoline_indirect_cfg_rax.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_indirect_cfg_rax @ 0x140BC02C0
 * Reason: Hex-Rays returned no pseudocode for 0x140BC02C0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140BC02C0: mov     r11, offset _guard_icall_bitmap
 * 0000000140BC02CA: mov     r11, [r11]
 * 0000000140BC02CD: test    rax, rax
 * 0000000140BC02D0: jge     loc_140BC0378
 * 0000000140BC02D6: test    r11, r11
 * 0000000140BC02D9: jz      short __guard_retpoline_indirect_rax
 * 0000000140BC02DB: mov     r10, rax
 * 0000000140BC02DE: shr     r10, 9
 * 0000000140BC02E2: mov     r11, [r11+r10*8]
 * 0000000140BC02E6: mov     r10, rax
 * 0000000140BC02E9: shr     r10, 3
 * 0000000140BC02ED: test    al, 0Fh
 * 0000000140BC02EF: jnz     loc_140BC0361
 * 0000000140BC02F5: bt      r11, r10
 * 0000000140BC02F9: jnb     loc_140BC0378
 * 0000000140BC02FF: nop
 * 0000000140BC0300: mov     r11, offset _retpoline_image_bitmap
 * 0000000140BC030A: mov     r11, [r11]
 * 0000000140BC030D: test    r11, r11
 * 0000000140BC0310: jz      short loc_140BC035B
 * 0000000140BC0312: mov     r10, rax
 * 0000000140BC0315: shr     r10, 10h
 * 0000000140BC0319: bt      [r11], r10
 * 0000000140BC031D: jnb     short loc_140BC0345
 * 0000000140BC031F: call    loc_140BC0340
 * 0000000140BC0324: int     3; Trap to Debugger
 * 0000000140BC0340: mov     [rsp+0], rax
 * 0000000140BC0344: retn
 * 0000000140BC0345: or      byte ptr gs:85Eh, 1
 * 0000000140BC034E: test    byte ptr gs:85Eh, 2
 * 0000000140BC0357: jnz     short loc_140BC035B
 * 0000000140BC0359: jmp     short __guard_retpoline_exit_indirect_rax
 * 0000000140BC035B: lfence
 * 0000000140BC035E: jmp     rax
 * 0000000140BC0361: btr     r10, 0
 * 0000000140BC0366: bt      r11, r10
 * 0000000140BC036A: jnb     short loc_140BC0378
 * 0000000140BC036C: or      r10, 1
 * 0000000140BC0370: bt      r11, r10
 * 0000000140BC0374: jnb     short loc_140BC0378
 * 0000000140BC0376: jmp     short __guard_retpoline_indirect_rax
 * 0000000140BC0378: mov     rcx, rax
 * 0000000140BC037B: mov     rax, offset _guard_icall_bugcheck
 * 0000000140BC0385: call    loc_140BC03A0
 * 0000000140BC038A: int     3; Trap to Debugger
 * 0000000140BC03A0: mov     [rsp+0], rax
 * 0000000140BC03A4: retn
 */
