/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_dD @ 0x14000DD7C
 * Callers:
 *     USBCaptureCompleteCallback @ 0x140003820 (USBCaptureCompleteCallback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001BB50 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_dD @ 0x14000DD7C
 * Reason: Hex-Rays returned no pseudocode for 0x14000DD7C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014000DD7C: mov     r11, rsp
 * 000000014000DD7F: mov     [r11+8], rbx
 * 000000014000DD83: mov     [r11+10h], rbp
 * 000000014000DD87: mov     [r11+18h], rsi
 * 000000014000DD8B: push    rdi
 * 000000014000DD8C: sub     rsp, 50h
 * 000000014000DD90: mov     ebp, 0Ch
 * 000000014000DD95: mov     rdi, r9
 * 000000014000DD98: mov     bl, r8b
 * 000000014000DD9B: lea     esi, [rbp-8]
 * 000000014000DD9E: test    dl, dl
 * 000000014000DDA0: jz      short loc_14000DDD8
 * 000000014000DDA2: and     qword ptr [r11-18h], 0
 * 000000014000DDA7: lea     rdx, [r11+50h]
 * 000000014000DDAB: mov     rax, cs:pfnWppTraceMessage
 * 000000014000DDB2: lea     r8, WPP_f8dfd6848d2138a27d5dceb541a753eb_Traceguids
 * 000000014000DDB9: mov     [r11-20h], rsi
 * 000000014000DDBD: mov     r9d, ebp
 * 000000014000DDC0: mov     [r11-28h], rdx
 * 000000014000DDC4: lea     rdx, [r11+48h]
 * 000000014000DDC8: mov     [r11-30h], rsi
 * 000000014000DDCC: mov     [r11-38h], rdx
 * 000000014000DDD0: lea     edx, [rbp+1Fh]
 * 000000014000DDD3: call    _guard_dispatch_icall
 * 000000014000DDD8: test    bl, bl
 * 000000014000DDDA: jz      short loc_14000DE27
 * 000000014000DDDC: and     [rsp+58h+var_10], 0
 * 000000014000DDE2: lea     rax, [rsp+58h+arg_48]
 * 000000014000DDEA: mov     [rsp+58h+var_18], rsi
 * 000000014000DDEF: lea     r9, WPP_f8dfd6848d2138a27d5dceb541a753eb_Traceguids
 * 000000014000DDF6: mov     [rsp+58h+var_20], rax
 * 000000014000DDFB: xor     edx, edx
 * 000000014000DDFD: lea     rax, [rsp+58h+arg_40]
 * 000000014000DE05: mov     [rsp+58h+var_28], rsi
 * 000000014000DE0A: mov     [rsp+58h+var_30], rax
 * 000000014000DE0F: mov     rcx, rdi
 * 000000014000DE12: mov     [rsp+58h+var_38], bp
 * 000000014000DE17: lea     r8d, [rdx+3]
 * 000000014000DE1B: call    cs:__imp_WppAutoLogTrace
 * 000000014000DE22: nop     dword ptr [rax+rax+00h]
 * 000000014000DE27: mov     rbx, [rsp+58h+arg_0]
 * 000000014000DE2C: mov     rbp, [rsp+58h+arg_8]
 * 000000014000DE31: mov     rsi, [rsp+58h+arg_10]
 * 000000014000DE36: add     rsp, 50h
 * 000000014000DE3A: pop     rdi
 * 000000014000DE3B: retn
 */
