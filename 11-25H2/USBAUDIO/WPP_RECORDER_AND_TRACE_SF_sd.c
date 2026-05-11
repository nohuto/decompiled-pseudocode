/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_sd @ 0x14000D9F0
 * Callers:
 *     USBHwLogStartFailure @ 0x14002DBBC (USBHwLogStartFailure.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C680 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_sd @ 0x14000D9F0
 * Reason: Hex-Rays returned no pseudocode for 0x14000D9F0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014000D9F0: mov     rax, rsp
 * 000000014000D9F3: mov     [rax+8], rbx
 * 000000014000D9F7: mov     [rax+10h], rbp
 * 000000014000D9FB: mov     [rax+18h], rsi
 * 000000014000D9FF: mov     [rax+20h], rdi
 * 000000014000DA03: push    r13
 * 000000014000DA05: sub     rsp, 50h
 * 000000014000DA09: mov     rdi, [rsp+58h+arg_40]
 * 000000014000DA11: lea     r13, aNull; "NULL"
 * 000000014000DA18: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 000000014000DA1C: mov     rbp, r9
 * 000000014000DA1F: mov     sil, r8b
 * 000000014000DA22: mov     r10, rcx
 * 000000014000DA25: lea     r9d, [rbx+33h]
 * 000000014000DA29: test    dl, dl
 * 000000014000DA2B: jz      short loc_14000DA99
 * 000000014000DA2D: test    rdi, rdi
 * 000000014000DA30: jz      short loc_14000DA43
 * 000000014000DA32: mov     rdx, rbx
 * 000000014000DA35: inc     rdx
 * 000000014000DA38: cmp     byte ptr [rdi+rdx], 0
 * 000000014000DA3C: jnz     short loc_14000DA35
 * 000000014000DA3E: inc     rdx
 * 000000014000DA41: jmp     short loc_14000DA48
 * 000000014000DA43: mov     edx, 5
 * 000000014000DA48: mov     rax, cs:pfnWppTraceMessage
 * 000000014000DA4F: lea     r8, [rsp+58h+arg_48]
 * 000000014000DA57: test    rdi, rdi
 * 000000014000DA5A: mov     rcx, rdi
 * 000000014000DA5D: cmovz   rcx, r13
 * 000000014000DA61: and     [rsp+58h+var_18], 0
 * 000000014000DA67: mov     [rsp+58h+var_20], 4
 * 000000014000DA70: mov     [rsp+58h+var_28], r8
 * 000000014000DA75: lea     r8, WPP_490aebbb81ea3ea14d3300aab47ed862_Traceguids
 * 000000014000DA7C: mov     [rsp+58h+var_30], rdx
 * 000000014000DA81: mov     edx, 2Bh ; '+'
 * 000000014000DA86: mov     [rsp+58h+var_38], rcx
 * 000000014000DA8B: mov     rcx, r10
 * 000000014000DA8E: call    _guard_dispatch_icall
 * 000000014000DA93: mov     r9d, 32h ; '2'
 * 000000014000DA99: test    sil, sil
 * 000000014000DA9C: jz      short loc_14000DB05
 * 000000014000DA9E: test    rdi, rdi
 * 000000014000DAA1: jz      short loc_14000DAB1
 * 000000014000DAA3: inc     rbx
 * 000000014000DAA6: cmp     byte ptr [rdi+rbx], 0
 * 000000014000DAAA: jnz     short loc_14000DAA3
 * 000000014000DAAC: inc     rbx
 * 000000014000DAAF: jmp     short loc_14000DAB6
 * 000000014000DAB1: mov     ebx, 5
 * 000000014000DAB6: test    rdi, rdi
 * 000000014000DAB9: lea     rax, [rsp+58h+arg_48]
 * 000000014000DAC1: mov     rcx, rbp
 * 000000014000DAC4: cmovz   rdi, r13
 * 000000014000DAC8: and     [rsp+58h+var_10], 0
 * 000000014000DACE: mov     [rsp+58h+var_18], 4
 * 000000014000DAD7: xor     edx, edx
 * 000000014000DAD9: mov     [rsp+58h+var_20], rax
 * 000000014000DADE: mov     [rsp+58h+var_28], rbx
 * 000000014000DAE3: mov     [rsp+58h+var_30], rdi
 * 000000014000DAE8: mov     word ptr [rsp+58h+var_38], r9w
 * 000000014000DAEE: lea     r8d, [rdx+8]
 * 000000014000DAF2: lea     r9, WPP_490aebbb81ea3ea14d3300aab47ed862_Traceguids
 * 000000014000DAF9: call    cs:__imp_WppAutoLogTrace
 * 000000014000DB00: nop     dword ptr [rax+rax+00h]
 * 000000014000DB05: mov     rbx, [rsp+58h+arg_0]
 * 000000014000DB0A: mov     rbp, [rsp+58h+arg_8]
 * 000000014000DB0F: mov     rsi, [rsp+58h+arg_10]
 * 000000014000DB14: mov     rdi, [rsp+58h+arg_18]
 * 000000014000DB19: add     rsp, 50h
 * 000000014000DB1D: pop     r13
 * 000000014000DB1F: retn
 */
