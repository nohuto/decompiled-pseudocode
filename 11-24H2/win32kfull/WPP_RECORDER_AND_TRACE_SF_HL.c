/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_HL @ 0x14028BE98
 * Callers:
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1400A6748 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_HL @ 0x14028BE98
 * Reason: Hex-Rays returned no pseudocode for 0x14028BE98
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014028BE98: mov     r11, rsp
 * 000000014028BE9B: mov     [r11+8], rbx
 * 000000014028BE9F: mov     [r11+10h], rdi
 * 000000014028BEA3: push    r14
 * 000000014028BEA5: sub     rsp, 50h
 * 000000014028BEA9: mov     rdi, r9
 * 000000014028BEAC: mov     bl, r8b
 * 000000014028BEAF: mov     r14d, 19h
 * 000000014028BEB5: test    dl, dl
 * 000000014028BEB7: jz      short loc_14028BEF8
 * 000000014028BEB9: and     qword ptr [r11-18h], 0
 * 000000014028BEBE: lea     rdx, [r11+50h]
 * 000000014028BEC2: mov     rax, cs:pfnWppTraceMessage
 * 000000014028BEC9: lea     r8, WPP_498cb4b0a6fe38d4bf1a8d41cfaba51a_Traceguids
 * 000000014028BED0: mov     qword ptr [r11-20h], 4
 * 000000014028BED8: mov     r9d, r14d
 * 000000014028BEDB: mov     [r11-28h], rdx
 * 000000014028BEDF: lea     rdx, [r11+48h]
 * 000000014028BEE3: mov     qword ptr [r11-30h], 2
 * 000000014028BEEB: mov     [r11-38h], rdx
 * 000000014028BEEF: lea     edx, [r14+12h]
 * 000000014028BEF3: call    _guard_dispatch_icall
 * 000000014028BEF8: test    bl, bl
 * 000000014028BEFA: jz      short loc_14028BF53
 * 000000014028BEFC: and     [rsp+58h+var_10], 0
 * 000000014028BF02: lea     rax, [rsp+58h+arg_48]
 * 000000014028BF0A: mov     [rsp+58h+var_18], 4
 * 000000014028BF13: lea     r9, WPP_498cb4b0a6fe38d4bf1a8d41cfaba51a_Traceguids
 * 000000014028BF1A: mov     [rsp+58h+var_20], rax
 * 000000014028BF1F: mov     edx, 4
 * 000000014028BF24: lea     rax, [rsp+58h+arg_40]
 * 000000014028BF2C: mov     [rsp+58h+var_28], 2
 * 000000014028BF35: mov     [rsp+58h+var_30], rax
 * 000000014028BF3A: mov     rcx, rdi
 * 000000014028BF3D: mov     [rsp+58h+var_38], r14w
 * 000000014028BF43: lea     r8d, [rdx+6]
 * 000000014028BF47: call    cs:__imp_WppAutoLogTrace
 * 000000014028BF4E: nop     dword ptr [rax+rax+00h]
 * 000000014028BF53: mov     rbx, [rsp+58h+arg_0]
 * 000000014028BF58: mov     rdi, [rsp+58h+arg_8]
 * 000000014028BF5D: add     rsp, 50h
 * 000000014028BF61: pop     r14
 * 000000014028BF63: retn
 */
