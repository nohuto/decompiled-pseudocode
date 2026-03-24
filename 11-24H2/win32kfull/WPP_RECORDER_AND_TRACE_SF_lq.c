/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_lq @ 0x1402A3198
 * Callers:
 *     NtUserGetScrollBarInfo @ 0x1401AC9D0 (NtUserGetScrollBarInfo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_lq @ 0x1402A3198
 * Reason: Hex-Rays returned no pseudocode for 0x1402A3198
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402A3198: mov     r11, rsp
 * 00000001402A319B: mov     [r11+8], rbx
 * 00000001402A319F: mov     [r11+10h], rdi
 * 00000001402A31A3: push    r14
 * 00000001402A31A5: sub     rsp, 50h
 * 00000001402A31A9: mov     rdi, r9
 * 00000001402A31AC: mov     bl, r8b
 * 00000001402A31AF: mov     r14d, 11h
 * 00000001402A31B5: test    dl, dl
 * 00000001402A31B7: jz      short loc_1402A31F8
 * 00000001402A31B9: and     qword ptr [r11-18h], 0
 * 00000001402A31BE: lea     rdx, [r11+50h]
 * 00000001402A31C2: mov     rax, cs:pfnWppTraceMessage
 * 00000001402A31C9: lea     r8, WPP_50f270925f983674ef77b34f83514a3b_Traceguids
 * 00000001402A31D0: mov     qword ptr [r11-20h], 8
 * 00000001402A31D8: mov     r9d, r14d
 * 00000001402A31DB: mov     [r11-28h], rdx
 * 00000001402A31DF: lea     rdx, [r11+48h]
 * 00000001402A31E3: mov     qword ptr [r11-30h], 4
 * 00000001402A31EB: mov     [r11-38h], rdx
 * 00000001402A31EF: lea     edx, [r14+1Ah]
 * 00000001402A31F3: call    _guard_dispatch_icall
 * 00000001402A31F8: test    bl, bl
 * 00000001402A31FA: jz      short loc_1402A3253
 * 00000001402A31FC: and     [rsp+58h+var_10], 0
 * 00000001402A3202: lea     rax, [rsp+58h+arg_48]
 * 00000001402A320A: mov     [rsp+58h+var_18], 8
 * 00000001402A3213: lea     r9, WPP_50f270925f983674ef77b34f83514a3b_Traceguids
 * 00000001402A321A: mov     [rsp+58h+var_20], rax
 * 00000001402A321F: mov     edx, 2
 * 00000001402A3224: lea     rax, [rsp+58h+arg_40]
 * 00000001402A322C: mov     [rsp+58h+var_28], 4
 * 00000001402A3235: mov     [rsp+58h+var_30], rax
 * 00000001402A323A: mov     rcx, rdi
 * 00000001402A323D: mov     [rsp+58h+var_38], r14w
 * 00000001402A3243: lea     r8d, [rdx+7]
 * 00000001402A3247: call    cs:__imp_WppAutoLogTrace
 * 00000001402A324E: nop     dword ptr [rax+rax+00h]
 * 00000001402A3253: mov     rbx, [rsp+58h+arg_0]
 * 00000001402A3258: mov     rdi, [rsp+58h+arg_8]
 * 00000001402A325D: add     rsp, 50h
 * 00000001402A3261: pop     r14
 * 00000001402A3263: retn
 */
