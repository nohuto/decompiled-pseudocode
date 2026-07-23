/*
 * XREFs of __guard_retpoline_import_r10 @ 0x140BC0440
 * Callers:
 *     <none>
 * Callees:
 *     __guard_retpoline_import_r10_log_event @ 0x140BC0520 (__guard_retpoline_import_r10_log_event.c)
 *     __guard_retpoline_exit @ 0x140BC05A0 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_import_r10 @ 0x140BC0440
 * Reason: Hex-Rays returned no pseudocode for 0x140BC0440
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140BC0440: sub     rsp, 18h
 * 0000000140BC0444: mov     [rsp+18h+var_18], rax
 * 0000000140BC0448: mov     [rsp+18h+var_10], r11
 * 0000000140BC044D: mov     r11, offset _retpoline_image_bitmap
 * 0000000140BC0457: mov     r11, [r11]
 * 0000000140BC045A: test    r11, r11
 * 0000000140BC045D: jz      short loc_140BC04AF
 * 0000000140BC045F: mov     rax, r10
 * 0000000140BC0462: shr     rax, 10h
 * 0000000140BC0466: bt      [r11], rax
 * 0000000140BC046A: jnb     short loc_140BC047B
 * 0000000140BC046C: mov     rax, [rsp+18h+var_18]
 * 0000000140BC0470: mov     r11, [rsp+18h+var_10]
 * 0000000140BC0475: add     rsp, 18h
 * 0000000140BC0479: jmp     short __guard_retpoline_import_r10_do_retpoline
 * 0000000140BC047B: or      byte ptr gs:85Eh, 1
 * 0000000140BC0484: test    byte ptr gs:85Eh, 2
 * 0000000140BC048D: jnz     short loc_140BC04AF
 * 0000000140BC048F: call    __guard_retpoline_exit
 * 0000000140BC0494: mov     r11, (offset xmmword_140FC6B50+4)
 * 0000000140BC049E: mov     r11d, [r11]
 * 0000000140BC04A1: test    r11d, 2
 * 0000000140BC04A8: jz      short loc_140BC04AF
 * 0000000140BC04AA: call    __guard_retpoline_import_r10_log_event
 * 0000000140BC04AF: lfence
 * 0000000140BC04B2: mov     rax, [rsp+18h+var_18]
 * 0000000140BC04B6: mov     r11, [rsp+18h+var_10]
 * 0000000140BC04BB: add     rsp, 18h
 * 0000000140BC04BF: jmp     r10
 */
