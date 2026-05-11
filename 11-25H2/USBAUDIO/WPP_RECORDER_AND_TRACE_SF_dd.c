/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_dD @ 0x14000E68C
 * Callers:
 *     USBCaptureCompleteCallback @ 0x140003A50 (USBCaptureCompleteCallback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C680 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_dD @ 0x14000E68C
 * Reason: Hex-Rays returned no pseudocode for 0x14000E68C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014000E68C: mov     r11, rsp
 * 000000014000E68F: mov     [r11+8], rbx
 * 000000014000E693: mov     [r11+10h], rbp
 * 000000014000E697: mov     [r11+18h], rsi
 * 000000014000E69B: push    rdi
 * 000000014000E69C: sub     rsp, 50h
 * 000000014000E6A0: mov     ebp, 0Ch
 * 000000014000E6A5: mov     rdi, r9
 * 000000014000E6A8: mov     bl, r8b
 * 000000014000E6AB: lea     esi, [rbp-8]
 * 000000014000E6AE: test    dl, dl
 * 000000014000E6B0: jz      short loc_14000E6E8
 * 000000014000E6B2: and     qword ptr [r11-18h], 0
 * 000000014000E6B7: lea     rdx, [r11+50h]
 * 000000014000E6BB: mov     rax, cs:pfnWppTraceMessage
 * 000000014000E6C2: lea     r8, WPP_f8dfd6848d2138a27d5dceb541a753eb_Traceguids
 * 000000014000E6C9: mov     [r11-20h], rsi
 * 000000014000E6CD: mov     r9d, ebp
 * 000000014000E6D0: mov     [r11-28h], rdx
 * 000000014000E6D4: lea     rdx, [r11+48h]
 * 000000014000E6D8: mov     [r11-30h], rsi
 * 000000014000E6DC: mov     [r11-38h], rdx
 * 000000014000E6E0: lea     edx, [rbp+1Fh]
 * 000000014000E6E3: call    _guard_dispatch_icall
 * 000000014000E6E8: test    bl, bl
 * 000000014000E6EA: jz      short loc_14000E737
 * 000000014000E6EC: and     [rsp+58h+var_10], 0
 * 000000014000E6F2: lea     rax, [rsp+58h+arg_48]
 * 000000014000E6FA: mov     [rsp+58h+var_18], rsi
 * 000000014000E6FF: lea     r9, WPP_f8dfd6848d2138a27d5dceb541a753eb_Traceguids
 * 000000014000E706: mov     [rsp+58h+var_20], rax
 * 000000014000E70B: xor     edx, edx
 * 000000014000E70D: lea     rax, [rsp+58h+arg_40]
 * 000000014000E715: mov     [rsp+58h+var_28], rsi
 * 000000014000E71A: mov     [rsp+58h+var_30], rax
 * 000000014000E71F: mov     rcx, rdi
 * 000000014000E722: mov     [rsp+58h+var_38], bp
 * 000000014000E727: lea     r8d, [rdx+3]
 * 000000014000E72B: call    cs:__imp_WppAutoLogTrace
 * 000000014000E732: nop     dword ptr [rax+rax+00h]
 * 000000014000E737: mov     rbx, [rsp+58h+arg_0]
 * 000000014000E73C: mov     rbp, [rsp+58h+arg_8]
 * 000000014000E741: mov     rsi, [rsp+58h+arg_10]
 * 000000014000E746: add     rsp, 50h
 * 000000014000E74A: pop     rdi
 * 000000014000E74B: retn
 */
