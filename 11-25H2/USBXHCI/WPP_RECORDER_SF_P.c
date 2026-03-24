/*
 * XREFs of WPP_RECORDER_SF_P @ 0x140044B80
 * Callers:
 *     Controller_ExecuteDSMToSendPORTSCValues @ 0x1400313C0 (Controller_ExecuteDSMToSendPORTSCValues.c)
 *     Controller_AllocateIrqlTrackingArray @ 0x14003FF84 (Controller_AllocateIrqlTrackingArray.c)
 *     Controller_RetrieveUrsData @ 0x1400785BC (Controller_RetrieveUrsData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_P @ 0x140044B80
 * Reason: Hex-Rays returned no pseudocode for 0x140044B80
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140044B80: mov     r11, rsp
 * 0000000140044B83: mov     [r11+8], rbx
 * 0000000140044B87: push    rdi
 * 0000000140044B88: sub     rsp, 40h
 * 0000000140044B8C: mov     rdi, rcx
 * 0000000140044B8F: movzx   ebx, r9w
 * 0000000140044B93: mov     rcx, cs:WPP_GLOBAL_Control
 * 0000000140044B9A: mov     eax, [rcx+2Ch]
 * 0000000140044B9D: test    al, 8
 * 0000000140044B9F: jz      short loc_140044BDB
 * 0000000140044BA1: cmp     byte ptr [rcx+29h], 2
 * 0000000140044BA5: jb      short loc_140044BDB
 * 0000000140044BA7: and     qword ptr [r11-18h], 0
 * 0000000140044BAC: lea     rdx, [r11+30h]
 * 0000000140044BB0: mov     rax, cs:pfnWppTraceMessage
 * 0000000140044BB7: lea     r8, WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids
 * 0000000140044BBE: mov     rcx, [rcx+18h]
 * 0000000140044BC2: mov     r9d, ebx
 * 0000000140044BC5: mov     qword ptr [r11-20h], 8
 * 0000000140044BCD: mov     [r11-28h], rdx
 * 0000000140044BD1: mov     edx, 2Bh ; '+'
 * 0000000140044BD6: call    _guard_dispatch_icall
 * 0000000140044BDB: and     [rsp+48h+var_10], 0
 * 0000000140044BE1: lea     rax, [rsp+48h+arg_28]
 * 0000000140044BE6: mov     edx, 2
 * 0000000140044BEB: mov     [rsp+48h+var_18], 8
 * 0000000140044BF4: mov     [rsp+48h+var_20], rax
 * 0000000140044BF9: lea     r9, WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids
 * 0000000140044C00: mov     rcx, rdi
 * 0000000140044C03: mov     [rsp+48h+var_28], bx
 * 0000000140044C08: lea     r8d, [rdx+2]
 * 0000000140044C0C: call    cs:__imp_WppAutoLogTrace
 * 0000000140044C13: nop     dword ptr [rax+rax+00h]
 * 0000000140044C18: mov     rbx, [rsp+48h+arg_0]
 * 0000000140044C1D: add     rsp, 40h
 * 0000000140044C21: pop     rdi
 * 0000000140044C22: retn
 */
