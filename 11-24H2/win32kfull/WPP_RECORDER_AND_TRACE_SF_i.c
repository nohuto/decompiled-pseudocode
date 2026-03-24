/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_i @ 0x140110BE8
 * Callers:
 *     ?ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z @ 0x140110108 (-ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_i @ 0x140110BE8
 * Reason: Hex-Rays returned no pseudocode for 0x140110BE8
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140110BE8: mov     [rsp+arg_0], rbx
 * 0000000140110BED: mov     [rsp+arg_8], rbp
 * 0000000140110BF2: push    rdi
 * 0000000140110BF3: sub     rsp, 40h
 * 0000000140110BF7: mov     rdi, r9
 * 0000000140110BFA: mov     bl, r8b
 * 0000000140110BFD: mov     ebp, 0Ch
 * 0000000140110C02: test    dl, dl
 * 0000000140110C04: jnz     short loc_140110C5B
 * 0000000140110C06: test    bl, bl
 * 0000000140110C08: jz      short loc_140110C4A
 * 0000000140110C0A: and     [rsp+48h+var_10], 0
 * 0000000140110C10: lea     rax, [rsp+48h+arg_40]
 * 0000000140110C18: mov     edx, 4
 * 0000000140110C1D: mov     [rsp+48h+var_18], 8
 * 0000000140110C26: mov     [rsp+48h+var_20], rax
 * 0000000140110C2B: lea     r9, WPP_c988c3f99a353e6ffe2381605806c7a5_Traceguids
 * 0000000140110C32: mov     rcx, rdi
 * 0000000140110C35: mov     word ptr [rsp+48h+var_28], bp
 * 0000000140110C3A: lea     r8d, [rdx+10h]
 * 0000000140110C3E: call    cs:__imp_WppAutoLogTrace
 * 0000000140110C45: nop     dword ptr [rax+rax+00h]
 * 0000000140110C4A: mov     rbx, [rsp+48h+arg_0]
 * 0000000140110C4F: mov     rbp, [rsp+48h+arg_8]
 * 0000000140110C54: add     rsp, 40h
 * 0000000140110C58: pop     rdi
 * 0000000140110C59: retn
 * 0000000140110C5B: and     [rsp+48h+var_18], 0
 * 0000000140110C61: lea     rdx, [rsp+48h+arg_40]
 * 0000000140110C69: mov     rax, cs:pfnWppTraceMessage
 * 0000000140110C70: lea     r8, WPP_c988c3f99a353e6ffe2381605806c7a5_Traceguids
 * 0000000140110C77: mov     [rsp+48h+var_20], 8
 * 0000000140110C80: mov     r9d, ebp
 * 0000000140110C83: mov     [rsp+48h+var_28], rdx
 * 0000000140110C88: mov     edx, 2Bh ; '+'
 * 0000000140110C8D: call    _guard_dispatch_icall
 * 0000000140110C92: jmp     loc_140110C06
 */
