/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_s @ 0x140014D84
 * Callers:
 *     ?GetDeviceContainerId@CSidebandDevice@@AEAAJPEAU_GUID@@@Z @ 0x1400102B0 (-GetDeviceContainerId@CSidebandDevice@@AEAAJPEAU_GUID@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C680 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_s @ 0x140014D84
 * Reason: Hex-Rays returned no pseudocode for 0x140014D84
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140014D84: mov     [rsp+arg_0], rbx
 * 0000000140014D89: mov     [rsp+arg_8], rbp
 * 0000000140014D8E: mov     [rsp+arg_10], rsi
 * 0000000140014D93: push    rdi
 * 0000000140014D94: push    r12
 * 0000000140014D96: push    r13
 * 0000000140014D98: sub     rsp, 40h
 * 0000000140014D9C: mov     rdi, [rsp+58h+arg_40]
 * 0000000140014DA4: lea     r12, aNull; "NULL"
 * 0000000140014DAB: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 0000000140014DAF: mov     rbp, r9
 * 0000000140014DB2: mov     sil, r8b
 * 0000000140014DB5: mov     r11, rcx
 * 0000000140014DB8: lea     r13d, [rbx+21h]
 * 0000000140014DBC: test    dl, dl
 * 0000000140014DBE: jz      short loc_140014E16
 * 0000000140014DC0: mov     r10, cs:pfnWppTraceMessage
 * 0000000140014DC7: test    rdi, rdi
 * 0000000140014DCA: jz      short loc_140014DDD
 * 0000000140014DCC: mov     rax, rbx
 * 0000000140014DCF: inc     rax
 * 0000000140014DD2: cmp     byte ptr [rdi+rax], 0
 * 0000000140014DD6: jnz     short loc_140014DCF
 * 0000000140014DD8: inc     rax
 * 0000000140014DDB: jmp     short loc_140014DE2
 * 0000000140014DDD: mov     eax, 5
 * 0000000140014DE2: test    rdi, rdi
 * 0000000140014DE5: lea     r8, WPP_592256b5268d334857c14222035d4fc6_Traceguids
 * 0000000140014DEC: mov     rcx, rdi
 * 0000000140014DEF: mov     r9d, r13d
 * 0000000140014DF2: cmovz   rcx, r12
 * 0000000140014DF6: mov     edx, 2Bh ; '+'
 * 0000000140014DFB: and     [rsp+58h+var_28], 0
 * 0000000140014E01: mov     [rsp+58h+var_30], rax
 * 0000000140014E06: mov     rax, r10
 * 0000000140014E09: mov     [rsp+58h+var_38], rcx
 * 0000000140014E0E: mov     rcx, r11
 * 0000000140014E11: call    _guard_dispatch_icall
 * 0000000140014E16: test    sil, sil
 * 0000000140014E19: jz      short loc_140014E6C
 * 0000000140014E1B: test    rdi, rdi
 * 0000000140014E1E: jz      short loc_140014E2E
 * 0000000140014E20: inc     rbx
 * 0000000140014E23: cmp     byte ptr [rdi+rbx], 0
 * 0000000140014E27: jnz     short loc_140014E20
 * 0000000140014E29: inc     rbx
 * 0000000140014E2C: jmp     short loc_140014E33
 * 0000000140014E2E: mov     ebx, 5
 * 0000000140014E33: test    rdi, rdi
 * 0000000140014E36: lea     r9, WPP_592256b5268d334857c14222035d4fc6_Traceguids
 * 0000000140014E3D: mov     rcx, rbp
 * 0000000140014E40: cmovz   rdi, r12
 * 0000000140014E44: and     [rsp+58h+var_20], 0
 * 0000000140014E4A: xor     edx, edx
 * 0000000140014E4C: mov     [rsp+58h+var_28], rbx
 * 0000000140014E51: mov     [rsp+58h+var_30], rdi
 * 0000000140014E56: mov     word ptr [rsp+58h+var_38], r13w
 * 0000000140014E5C: lea     r8d, [rdx+9]
 * 0000000140014E60: call    cs:__imp_WppAutoLogTrace
 * 0000000140014E67: nop     dword ptr [rax+rax+00h]
 * 0000000140014E6C: mov     rbx, [rsp+58h+arg_0]
 * 0000000140014E71: mov     rbp, [rsp+58h+arg_8]
 * 0000000140014E76: mov     rsi, [rsp+58h+arg_10]
 * 0000000140014E7B: add     rsp, 40h
 * 0000000140014E7F: pop     r13
 * 0000000140014E81: pop     r12
 * 0000000140014E83: pop     rdi
 * 0000000140014E84: retn
 */
