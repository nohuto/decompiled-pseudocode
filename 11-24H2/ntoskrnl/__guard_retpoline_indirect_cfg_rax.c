/*
 * XREFs of __guard_retpoline_indirect_cfg_rax @ 0x140BBE2C0
 * Callers:
 *     <none>
 * Callees:
 *     __guard_retpoline_indirect_cfg_rax @ 0x140BBE2C0 (__guard_retpoline_indirect_cfg_rax.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_indirect_cfg_rax @ 0x140BBE2C0
 * Reason: Hex-Rays returned no pseudocode for 0x140BBE2C0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140BBE2C0: mov     r11, offset _guard_icall_bitmap
 * 0000000140BBE2CA: mov     r11, [r11]
 * 0000000140BBE2CD: test    rax, rax
 * 0000000140BBE2D0: jge     loc_140BBE378
 * 0000000140BBE2D6: test    r11, r11
 * 0000000140BBE2D9: jz      short __guard_retpoline_indirect_rax
 * 0000000140BBE2DB: mov     r10, rax
 * 0000000140BBE2DE: shr     r10, 9
 * 0000000140BBE2E2: mov     r11, [r11+r10*8]
 * 0000000140BBE2E6: mov     r10, rax
 * 0000000140BBE2E9: shr     r10, 3
 * 0000000140BBE2ED: test    al, 0Fh
 * 0000000140BBE2EF: jnz     loc_140BBE361
 * 0000000140BBE2F5: bt      r11, r10
 * 0000000140BBE2F9: jnb     loc_140BBE378
 * 0000000140BBE2FF: nop
 * 0000000140BBE300: mov     r11, offset _retpoline_image_bitmap
 * 0000000140BBE30A: mov     r11, [r11]
 * 0000000140BBE30D: test    r11, r11
 * 0000000140BBE310: jz      short loc_140BBE35B
 * 0000000140BBE312: mov     r10, rax
 * 0000000140BBE315: shr     r10, 10h
 * 0000000140BBE319: bt      [r11], r10
 * 0000000140BBE31D: jnb     short loc_140BBE345
 * 0000000140BBE31F: call    loc_140BBE340
 * 0000000140BBE324: int     3; Trap to Debugger
 * 0000000140BBE340: mov     [rsp+0], rax
 * 0000000140BBE344: retn
 * 0000000140BBE345: or      byte ptr gs:85Eh, 1
 * 0000000140BBE34E: test    byte ptr gs:85Eh, 2
 * 0000000140BBE357: jnz     short loc_140BBE35B
 * 0000000140BBE359: jmp     short __guard_retpoline_exit_indirect_rax
 * 0000000140BBE35B: lfence
 * 0000000140BBE35E: jmp     rax
 * 0000000140BBE361: btr     r10, 0
 * 0000000140BBE366: bt      r11, r10
 * 0000000140BBE36A: jnb     short loc_140BBE378
 * 0000000140BBE36C: or      r10, 1
 * 0000000140BBE370: bt      r11, r10
 * 0000000140BBE374: jnb     short loc_140BBE378
 * 0000000140BBE376: jmp     short __guard_retpoline_indirect_rax
 * 0000000140BBE378: mov     rcx, rax
 * 0000000140BBE37B: mov     rax, offset _guard_icall_bugcheck
 * 0000000140BBE385: call    loc_140BBE3A0
 * 0000000140BBE38A: int     3; Trap to Debugger
 * 0000000140BBE3A0: mov     [rsp+0], rax
 * 0000000140BBE3A4: retn
 */
