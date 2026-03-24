/*
 * XREFs of __guard_retpoline_exit_indirect_rax @ 0x140BBE3C0
 * Callers:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     __guard_retpoline_indirect_cfg_rax @ 0x140BBE2C0 (__guard_retpoline_indirect_cfg_rax.c)
 * Callees:
 *     EtwTraceRetpolineExit @ 0x14064DE00 (EtwTraceRetpolineExit.c)
 *     __guard_retpoline_exit @ 0x140BBE5A0 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_exit_indirect_rax @ 0x140BBE3C0
 * Reason: Hex-Rays returned no pseudocode for 0x140BBE3C0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140BBE3C0: sub     rsp, 48h
 * 0000000140BBE3C4: call    __guard_retpoline_exit
 * 0000000140BBE3C9: lfence
 * 0000000140BBE3CC: mov     r10, (offset xmmword_140FC5B10+4)
 * 0000000140BBE3D6: mov     r10d, [r10]
 * 0000000140BBE3D9: test    r10d, 2
 * 0000000140BBE3E0: jz      short loc_140BBE423
 * 0000000140BBE3E2: mov     [rsp+48h+var_28], rax
 * 0000000140BBE3E7: mov     [rsp+48h+var_20], rcx
 * 0000000140BBE3EC: mov     [rsp+48h+var_18], rdx
 * 0000000140BBE3F1: mov     [rsp+48h+var_10], r8
 * 0000000140BBE3F6: mov     [rsp+48h+var_8], r9
 * 0000000140BBE3FB: mov     rcx, rax
 * 0000000140BBE3FE: mov     rax, offset EtwTraceRetpolineExit
 * 0000000140BBE408: call    rax ; EtwTraceRetpolineExit
 * 0000000140BBE40A: mov     rax, [rsp+48h+var_28]
 * 0000000140BBE40F: mov     rcx, [rsp+48h+var_20]
 * 0000000140BBE414: mov     rdx, [rsp+48h+var_18]
 * 0000000140BBE419: mov     r8, [rsp+48h+var_10]
 * 0000000140BBE41E: mov     r9, [rsp+48h+var_8]
 * 0000000140BBE423: add     rsp, 48h
 * 0000000140BBE427: jmp     rax
 */
