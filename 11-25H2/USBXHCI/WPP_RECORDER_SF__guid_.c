/*
 * XREFs of WPP_RECORDER_SF__guid_ @ 0x140036DA8
 * Callers:
 *     Controller_UcxEvtQueryUsbCapability @ 0x140033320 (Controller_UcxEvtQueryUsbCapability.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF__guid_ @ 0x140036DA8
 * Reason: Hex-Rays returned no pseudocode for 0x140036DA8
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140036DA8: mov     r11, rsp
 * 0000000140036DAB: mov     [r11+8], rbx
 * 0000000140036DAF: mov     [r11+10h], rdi
 * 0000000140036DB3: push    r14
 * 0000000140036DB5: sub     rsp, 40h
 * 0000000140036DB9: mov     rbx, [rsp+48h+arg_28]
 * 0000000140036DBE: mov     rdi, rcx
 * 0000000140036DC1: mov     rcx, cs:WPP_GLOBAL_Control
 * 0000000140036DC8: mov     r14d, 0D9h
 * 0000000140036DCE: mov     eax, [rcx+2Ch]
 * 0000000140036DD1: test    al, 8
 * 0000000140036DD3: jz      short loc_140036E0B
 * 0000000140036DD5: cmp     byte ptr [rcx+29h], 4
 * 0000000140036DD9: jb      short loc_140036E0B
 * 0000000140036DDB: and     qword ptr [r11-18h], 0
 * 0000000140036DE0: lea     r8, WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids
 * 0000000140036DE7: mov     rax, cs:pfnWppTraceMessage
 * 0000000140036DEE: mov     r9d, r14d
 * 0000000140036DF1: mov     rcx, [rcx+18h]
 * 0000000140036DF5: mov     edx, 2Bh ; '+'
 * 0000000140036DFA: mov     qword ptr [r11-20h], 10h
 * 0000000140036E02: mov     [r11-28h], rbx
 * 0000000140036E06: call    _guard_dispatch_icall
 * 0000000140036E0B: and     [rsp+48h+var_10], 0
 * 0000000140036E11: lea     r9, WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids
 * 0000000140036E18: mov     edx, 4
 * 0000000140036E1D: mov     [rsp+48h+var_18], 10h
 * 0000000140036E26: mov     [rsp+48h+var_20], rbx
 * 0000000140036E2B: mov     r8d, edx
 * 0000000140036E2E: mov     rcx, rdi
 * 0000000140036E31: mov     [rsp+48h+var_28], r14w
 * 0000000140036E37: call    cs:__imp_WppAutoLogTrace
 * 0000000140036E3E: nop     dword ptr [rax+rax+00h]
 * 0000000140036E43: mov     rbx, [rsp+48h+arg_0]
 * 0000000140036E48: mov     rdi, [rsp+48h+arg_8]
 * 0000000140036E4D: add     rsp, 40h
 * 0000000140036E51: pop     r14
 * 0000000140036E53: retn
 */
