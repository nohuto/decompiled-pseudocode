/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_dD @ 0x140149FF0
 * Callers:
 *     _anonymous_namespace_::SetMonitorDockThresholds @ 0x140149D44 (_anonymous_namespace_--SetMonitorDockThresholds.c)
 *     ?ApplyForegroundPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1401D1314 (-ApplyForegroundPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_dD @ 0x140149FF0
 * Reason: Hex-Rays returned no pseudocode for 0x140149FF0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140149FF0: mov     [rsp+arg_0], rbx
 * 0000000140149FF5: mov     [rsp+arg_8], rbp
 * 0000000140149FFA: mov     [rsp+arg_10], rsi
 * 0000000140149FFF: push    rdi
 * 000000014014A000: sub     rsp, 50h
 * 000000014014A004: movzx   ebx, [rsp+58h+arg_30]
 * 000000014014A00C: mov     rsi, r9
 * 000000014014A00F: mov     dil, r8b
 * 000000014014A012: mov     ebp, 4
 * 000000014014A017: test    dl, dl
 * 000000014014A019: jnz     short loc_14014A086
 * 000000014014A01B: test    dil, dil
 * 000000014014A01E: jz      short loc_14014A070
 * 000000014014A020: and     [rsp+58h+var_10], 0
 * 000000014014A026: lea     rax, [rsp+58h+arg_48]
 * 000000014014A02E: mov     r9, [rsp+58h+arg_38]
 * 000000014014A036: mov     edx, ebp
 * 000000014014A038: mov     r8d, [rsp+58h+arg_28]
 * 000000014014A040: mov     rcx, rsi
 * 000000014014A043: mov     [rsp+58h+var_18], rbp
 * 000000014014A048: mov     [rsp+58h+var_20], rax
 * 000000014014A04D: lea     rax, [rsp+58h+arg_40]
 * 000000014014A055: mov     [rsp+58h+var_28], rbp
 * 000000014014A05A: mov     [rsp+58h+var_30], rax
 * 000000014014A05F: mov     word ptr [rsp+58h+var_38], bx
 * 000000014014A064: call    cs:__imp_WppAutoLogTrace
 * 000000014014A06B: nop     dword ptr [rax+rax+00h]
 * 000000014014A070: mov     rbx, [rsp+58h+arg_0]
 * 000000014014A075: mov     rbp, [rsp+58h+arg_8]
 * 000000014014A07A: mov     rsi, [rsp+58h+arg_10]
 * 000000014014A07F: add     rsp, 50h
 * 000000014014A083: pop     rdi
 * 000000014014A084: retn
 * 000000014014A086: and     [rsp+58h+var_18], 0
 * 000000014014A08C: lea     rdx, [rsp+58h+arg_48]
 * 000000014014A094: mov     rax, cs:pfnWppTraceMessage
 * 000000014014A09B: mov     r9d, ebx
 * 000000014014A09E: mov     r8, [rsp+58h+arg_38]
 * 000000014014A0A6: mov     [rsp+58h+var_20], rbp
 * 000000014014A0AB: mov     [rsp+58h+var_28], rdx
 * 000000014014A0B0: lea     rdx, [rsp+58h+arg_40]
 * 000000014014A0B8: mov     [rsp+58h+var_30], rbp
 * 000000014014A0BD: mov     [rsp+58h+var_38], rdx
 * 000000014014A0C2: mov     edx, 2Bh ; '+'
 * 000000014014A0C7: call    _guard_dispatch_icall
 * 000000014014A0CC: jmp     loc_14014A01B
 */
