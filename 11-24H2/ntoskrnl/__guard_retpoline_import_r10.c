/*
 * XREFs of __guard_retpoline_import_r10 @ 0x140BBE440
 * Callers:
 *     <none>
 * Callees:
 *     __guard_retpoline_import_r10_log_event @ 0x140BBE520 (__guard_retpoline_import_r10_log_event.c)
 *     __guard_retpoline_exit @ 0x140BBE5A0 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_import_r10 @ 0x140BBE440
 * Reason: Hex-Rays returned no pseudocode for 0x140BBE440
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140BBE440: sub     rsp, 18h
 * 0000000140BBE444: mov     [rsp+18h+var_18], rax
 * 0000000140BBE448: mov     [rsp+18h+var_10], r11
 * 0000000140BBE44D: mov     r11, offset _retpoline_image_bitmap
 * 0000000140BBE457: mov     r11, [r11]
 * 0000000140BBE45A: test    r11, r11
 * 0000000140BBE45D: jz      short loc_140BBE4AF
 * 0000000140BBE45F: mov     rax, r10
 * 0000000140BBE462: shr     rax, 10h
 * 0000000140BBE466: bt      [r11], rax
 * 0000000140BBE46A: jnb     short loc_140BBE47B
 * 0000000140BBE46C: mov     rax, [rsp+18h+var_18]
 * 0000000140BBE470: mov     r11, [rsp+18h+var_10]
 * 0000000140BBE475: add     rsp, 18h
 * 0000000140BBE479: jmp     short __guard_retpoline_import_r10_do_retpoline
 * 0000000140BBE47B: or      byte ptr gs:85Eh, 1
 * 0000000140BBE484: test    byte ptr gs:85Eh, 2
 * 0000000140BBE48D: jnz     short loc_140BBE4AF
 * 0000000140BBE48F: call    __guard_retpoline_exit
 * 0000000140BBE494: mov     r11, (offset xmmword_140FC5B10+4)
 * 0000000140BBE49E: mov     r11d, [r11]
 * 0000000140BBE4A1: test    r11d, 2
 * 0000000140BBE4A8: jz      short loc_140BBE4AF
 * 0000000140BBE4AA: call    __guard_retpoline_import_r10_log_event
 * 0000000140BBE4AF: lfence
 * 0000000140BBE4B2: mov     rax, [rsp+18h+var_18]
 * 0000000140BBE4B6: mov     r11, [rsp+18h+var_10]
 * 0000000140BBE4BB: add     rsp, 18h
 * 0000000140BBE4BF: jmp     r10
 */
