/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_id @ 0x14000D7D4
 * Callers:
 *     USBType1RenderBytePosition @ 0x140001010 (USBType1RenderBytePosition.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001BB50 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_id @ 0x14000D7D4
 * Reason: Hex-Rays returned no pseudocode for 0x14000D7D4
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014000D7D4: mov     r11, rsp
 * 000000014000D7D7: mov     [r11+8], rbx
 * 000000014000D7DB: mov     [r11+10h], rdi
 * 000000014000D7DF: push    r14
 * 000000014000D7E1: sub     rsp, 50h
 * 000000014000D7E5: mov     rdi, r9
 * 000000014000D7E8: mov     bl, r8b
 * 000000014000D7EB: mov     r14d, 0Ch
 * 000000014000D7F1: test    dl, dl
 * 000000014000D7F3: jz      short loc_14000D834
 * 000000014000D7F5: and     qword ptr [r11-18h], 0
 * 000000014000D7FA: lea     rdx, [r11+50h]
 * 000000014000D7FE: mov     rax, cs:pfnWppTraceMessage
 * 000000014000D805: lea     r8, WPP_f0d25a81eb873d2c4a08e4f8b28fc432_Traceguids
 * 000000014000D80C: mov     qword ptr [r11-20h], 4
 * 000000014000D814: mov     r9d, r14d
 * 000000014000D817: mov     [r11-28h], rdx
 * 000000014000D81B: lea     rdx, [r11+48h]
 * 000000014000D81F: mov     qword ptr [r11-30h], 8
 * 000000014000D827: mov     [r11-38h], rdx
 * 000000014000D82B: lea     edx, [r14+1Fh]
 * 000000014000D82F: call    _guard_dispatch_icall
 * 000000014000D834: test    bl, bl
 * 000000014000D836: jz      short loc_14000D88C
 * 000000014000D838: and     [rsp+58h+var_10], 0
 * 000000014000D83E: lea     rax, [rsp+58h+arg_48]
 * 000000014000D846: mov     [rsp+58h+var_18], 4
 * 000000014000D84F: lea     r9, WPP_f0d25a81eb873d2c4a08e4f8b28fc432_Traceguids
 * 000000014000D856: mov     [rsp+58h+var_20], rax
 * 000000014000D85B: xor     edx, edx
 * 000000014000D85D: lea     rax, [rsp+58h+arg_40]
 * 000000014000D865: mov     [rsp+58h+var_28], 8
 * 000000014000D86E: mov     [rsp+58h+var_30], rax
 * 000000014000D873: mov     rcx, rdi
 * 000000014000D876: mov     [rsp+58h+var_38], r14w
 * 000000014000D87C: lea     r8d, [rdx+3]
 * 000000014000D880: call    cs:__imp_WppAutoLogTrace
 * 000000014000D887: nop     dword ptr [rax+rax+00h]
 * 000000014000D88C: mov     rbx, [rsp+58h+arg_0]
 * 000000014000D891: mov     rdi, [rsp+58h+arg_8]
 * 000000014000D896: add     rsp, 50h
 * 000000014000D89A: pop     r14
 * 000000014000D89C: retn
 */
