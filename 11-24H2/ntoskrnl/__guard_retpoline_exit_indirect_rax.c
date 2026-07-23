/*
 * XREFs of __guard_retpoline_exit_indirect_rax @ 0x140BC03C0
 * Callers:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     __guard_retpoline_indirect_cfg_rax @ 0x140BC02C0 (__guard_retpoline_indirect_cfg_rax.c)
 * Callees:
 *     EtwTraceRetpolineExit @ 0x14064C410 (EtwTraceRetpolineExit.c)
 *     __guard_retpoline_exit @ 0x140BC05A0 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_exit_indirect_rax @ 0x140BC03C0
 * Reason: Hex-Rays returned no pseudocode for 0x140BC03C0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140BC03C0: sub     rsp, 48h
 * 0000000140BC03C4: call    __guard_retpoline_exit
 * 0000000140BC03C9: lfence
 * 0000000140BC03CC: mov     r10, (offset xmmword_140FC6B50+4)
 * 0000000140BC03D6: mov     r10d, [r10]
 * 0000000140BC03D9: test    r10d, 2
 * 0000000140BC03E0: jz      short loc_140BC0423
 * 0000000140BC03E2: mov     [rsp+48h+var_28], rax
 * 0000000140BC03E7: mov     [rsp+48h+var_20], rcx
 * 0000000140BC03EC: mov     [rsp+48h+var_18], rdx
 * 0000000140BC03F1: mov     [rsp+48h+var_10], r8
 * 0000000140BC03F6: mov     [rsp+48h+var_8], r9
 * 0000000140BC03FB: mov     rcx, rax
 * 0000000140BC03FE: mov     rax, offset EtwTraceRetpolineExit
 * 0000000140BC0408: call    rax ; EtwTraceRetpolineExit
 * 0000000140BC040A: mov     rax, [rsp+48h+var_28]
 * 0000000140BC040F: mov     rcx, [rsp+48h+var_20]
 * 0000000140BC0414: mov     rdx, [rsp+48h+var_18]
 * 0000000140BC0419: mov     r8, [rsp+48h+var_10]
 * 0000000140BC041E: mov     r9, [rsp+48h+var_8]
 * 0000000140BC0423: add     rsp, 48h
 * 0000000140BC0427: jmp     rax
 */
