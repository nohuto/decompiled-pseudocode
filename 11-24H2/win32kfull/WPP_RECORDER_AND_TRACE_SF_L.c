/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_L @ 0x14028BF6C
 * Callers:
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1400A6748 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_L @ 0x14028BF6C
 * Reason: Hex-Rays returned no pseudocode for 0x14028BF6C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014028BF6C: mov     r11, rsp
 * 000000014028BF6F: mov     [r11+8], rbx
 * 000000014028BF73: mov     [r11+10h], rbp
 * 000000014028BF77: push    rdi
 * 000000014028BF78: sub     rsp, 40h
 * 000000014028BF7C: mov     rdi, r9
 * 000000014028BF7F: mov     bl, r8b
 * 000000014028BF82: mov     ebp, 1Bh
 * 000000014028BF87: test    dl, dl
 * 000000014028BF89: jz      short loc_14028BFB9
 * 000000014028BF8B: and     qword ptr [r11-18h], 0
 * 000000014028BF90: lea     rdx, [r11+48h]
 * 000000014028BF94: mov     rax, cs:pfnWppTraceMessage
 * 000000014028BF9B: lea     r8, WPP_498cb4b0a6fe38d4bf1a8d41cfaba51a_Traceguids
 * 000000014028BFA2: mov     qword ptr [r11-20h], 4
 * 000000014028BFAA: mov     r9d, ebp
 * 000000014028BFAD: mov     [r11-28h], rdx
 * 000000014028BFB1: lea     edx, [rbp+10h]
 * 000000014028BFB4: call    _guard_dispatch_icall
 * 000000014028BFB9: test    bl, bl
 * 000000014028BFBB: jz      short loc_14028BFFD
 * 000000014028BFBD: and     [rsp+48h+var_10], 0
 * 000000014028BFC3: lea     rax, [rsp+48h+arg_40]
 * 000000014028BFCB: mov     edx, 4
 * 000000014028BFD0: mov     [rsp+48h+var_18], 4
 * 000000014028BFD9: mov     [rsp+48h+var_20], rax
 * 000000014028BFDE: lea     r9, WPP_498cb4b0a6fe38d4bf1a8d41cfaba51a_Traceguids
 * 000000014028BFE5: mov     rcx, rdi
 * 000000014028BFE8: mov     [rsp+48h+var_28], bp
 * 000000014028BFED: lea     r8d, [rdx+6]
 * 000000014028BFF1: call    cs:__imp_WppAutoLogTrace
 * 000000014028BFF8: nop     dword ptr [rax+rax+00h]
 * 000000014028BFFD: mov     rbx, [rsp+48h+arg_0]
 * 000000014028C002: mov     rbp, [rsp+48h+arg_8]
 * 000000014028C007: add     rsp, 40h
 * 000000014028C00B: pop     rdi
 * 000000014028C00C: retn
 */
