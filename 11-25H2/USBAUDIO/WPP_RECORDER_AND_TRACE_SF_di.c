/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_di @ 0x14000E014
 * Callers:
 *     USBType1RenderBytePosition @ 0x140001010 (USBType1RenderBytePosition.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C680 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_di @ 0x14000E014
 * Reason: Hex-Rays returned no pseudocode for 0x14000E014
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014000E014: mov     r11, rsp
 * 000000014000E017: mov     [r11+8], rbx
 * 000000014000E01B: mov     [r11+10h], rdi
 * 000000014000E01F: push    r14
 * 000000014000E021: sub     rsp, 50h
 * 000000014000E025: mov     rdi, r9
 * 000000014000E028: mov     bl, r8b
 * 000000014000E02B: mov     r14d, 0Bh
 * 000000014000E031: test    dl, dl
 * 000000014000E033: jz      short loc_14000E074
 * 000000014000E035: and     qword ptr [r11-18h], 0
 * 000000014000E03A: lea     rdx, [r11+50h]
 * 000000014000E03E: mov     rax, cs:pfnWppTraceMessage
 * 000000014000E045: lea     r8, WPP_f0d25a81eb873d2c4a08e4f8b28fc432_Traceguids
 * 000000014000E04C: mov     qword ptr [r11-20h], 8
 * 000000014000E054: mov     r9d, r14d
 * 000000014000E057: mov     [r11-28h], rdx
 * 000000014000E05B: lea     rdx, [r11+48h]
 * 000000014000E05F: mov     qword ptr [r11-30h], 4
 * 000000014000E067: mov     [r11-38h], rdx
 * 000000014000E06B: lea     edx, [r14+20h]
 * 000000014000E06F: call    _guard_dispatch_icall
 * 000000014000E074: test    bl, bl
 * 000000014000E076: jz      short loc_14000E0CC
 * 000000014000E078: and     [rsp+58h+var_10], 0
 * 000000014000E07E: lea     rax, [rsp+58h+arg_48]
 * 000000014000E086: mov     [rsp+58h+var_18], 8
 * 000000014000E08F: lea     r9, WPP_f0d25a81eb873d2c4a08e4f8b28fc432_Traceguids
 * 000000014000E096: mov     [rsp+58h+var_20], rax
 * 000000014000E09B: xor     edx, edx
 * 000000014000E09D: lea     rax, [rsp+58h+arg_40]
 * 000000014000E0A5: mov     [rsp+58h+var_28], 4
 * 000000014000E0AE: mov     [rsp+58h+var_30], rax
 * 000000014000E0B3: mov     rcx, rdi
 * 000000014000E0B6: mov     [rsp+58h+var_38], r14w
 * 000000014000E0BC: lea     r8d, [rdx+3]
 * 000000014000E0C0: call    cs:__imp_WppAutoLogTrace
 * 000000014000E0C7: nop     dword ptr [rax+rax+00h]
 * 000000014000E0CC: mov     rbx, [rsp+58h+arg_0]
 * 000000014000E0D1: mov     rdi, [rsp+58h+arg_8]
 * 000000014000E0D6: add     rsp, 50h
 * 000000014000E0DA: pop     r14
 * 000000014000E0DC: retn
 */
