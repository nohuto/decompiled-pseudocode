/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_ii @ 0x140278888
 * Callers:
 *     ?FindEntryByTime@@YAPEAUtagINPUTTRANSFORMENTRY@@PEAUtagINPUTTRANSFORMLIST@@PEAU1@_K@Z @ 0x14019D5C4 (-FindEntryByTime@@YAPEAUtagINPUTTRANSFORMENTRY@@PEAUtagINPUTTRANSFORMLIST@@PEAU1@_K@Z.c)
 *     xxxInjectTouchInput @ 0x140234EBC (xxxInjectTouchInput.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_ii @ 0x140278888
 * Reason: Hex-Rays returned no pseudocode for 0x140278888
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140278888: mov     r11, rsp
 * 000000014027888B: mov     [r11+8], rbx
 * 000000014027888F: mov     [r11+10h], rbp
 * 0000000140278893: mov     [r11+18h], rsi
 * 0000000140278897: push    rdi
 * 0000000140278898: sub     rsp, 50h
 * 000000014027889C: movzx   ebx, [rsp+58h+arg_30]
 * 00000001402788A4: mov     rsi, r9
 * 00000001402788A7: mov     dil, r8b
 * 00000001402788AA: mov     ebp, 8
 * 00000001402788AF: test    dl, dl
 * 00000001402788B1: jz      short loc_1402788EA
 * 00000001402788B3: and     qword ptr [r11-18h], 0
 * 00000001402788B8: lea     rdx, [r11+50h]
 * 00000001402788BC: mov     rax, cs:pfnWppTraceMessage
 * 00000001402788C3: mov     r9d, ebx
 * 00000001402788C6: mov     r8, [rsp+58h+arg_38]
 * 00000001402788CE: mov     [r11-20h], rbp
 * 00000001402788D2: mov     [r11-28h], rdx
 * 00000001402788D6: lea     rdx, [r11+48h]
 * 00000001402788DA: mov     [r11-30h], rbp
 * 00000001402788DE: mov     [r11-38h], rdx
 * 00000001402788E2: lea     edx, [rbp+23h]
 * 00000001402788E5: call    _guard_dispatch_icall
 * 00000001402788EA: test    dil, dil
 * 00000001402788ED: jz      short loc_140278943
 * 00000001402788EF: and     [rsp+58h+var_10], 0
 * 00000001402788F5: lea     rax, [rsp+58h+arg_48]
 * 00000001402788FD: mov     r9, [rsp+58h+arg_38]
 * 0000000140278905: mov     r8d, 14h
 * 000000014027890B: movzx   edx, [rsp+58h+arg_20]
 * 0000000140278913: mov     rcx, rsi
 * 0000000140278916: mov     [rsp+58h+var_18], rbp
 * 000000014027891B: mov     [rsp+58h+var_20], rax
 * 0000000140278920: lea     rax, [rsp+58h+arg_40]
 * 0000000140278928: mov     [rsp+58h+var_28], rbp
 * 000000014027892D: mov     [rsp+58h+var_30], rax
 * 0000000140278932: mov     [rsp+58h+var_38], bx
 * 0000000140278937: call    cs:__imp_WppAutoLogTrace
 * 000000014027893E: nop     dword ptr [rax+rax+00h]
 * 0000000140278943: mov     rbx, [rsp+58h+arg_0]
 * 0000000140278948: mov     rbp, [rsp+58h+arg_8]
 * 000000014027894D: mov     rsi, [rsp+58h+arg_10]
 * 0000000140278952: add     rsp, 50h
 * 0000000140278956: pop     rdi
 * 0000000140278957: retn
 */
