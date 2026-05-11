/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_sd @ 0x14000D130
 * Callers:
 *     USBHwLogStartFailure @ 0x14002DBBC (USBHwLogStartFailure.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001BB50 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_sd @ 0x14000D130
 * Reason: Hex-Rays returned no pseudocode for 0x14000D130
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014000D130: mov     rax, rsp
 * 000000014000D133: mov     [rax+8], rbx
 * 000000014000D137: mov     [rax+10h], rbp
 * 000000014000D13B: mov     [rax+18h], rsi
 * 000000014000D13F: mov     [rax+20h], rdi
 * 000000014000D143: push    r13
 * 000000014000D145: sub     rsp, 50h
 * 000000014000D149: mov     rdi, [rsp+58h+arg_40]
 * 000000014000D151: lea     r13, aNull; "NULL"
 * 000000014000D158: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 000000014000D15C: mov     rbp, r9
 * 000000014000D15F: mov     sil, r8b
 * 000000014000D162: mov     r10, rcx
 * 000000014000D165: lea     r9d, [rbx+33h]
 * 000000014000D169: test    dl, dl
 * 000000014000D16B: jz      short loc_14000D1D9
 * 000000014000D16D: test    rdi, rdi
 * 000000014000D170: jz      short loc_14000D183
 * 000000014000D172: mov     rdx, rbx
 * 000000014000D175: inc     rdx
 * 000000014000D178: cmp     byte ptr [rdi+rdx], 0
 * 000000014000D17C: jnz     short loc_14000D175
 * 000000014000D17E: inc     rdx
 * 000000014000D181: jmp     short loc_14000D188
 * 000000014000D183: mov     edx, 5
 * 000000014000D188: mov     rax, cs:pfnWppTraceMessage
 * 000000014000D18F: lea     r8, [rsp+58h+arg_48]
 * 000000014000D197: test    rdi, rdi
 * 000000014000D19A: mov     rcx, rdi
 * 000000014000D19D: cmovz   rcx, r13
 * 000000014000D1A1: and     [rsp+58h+var_18], 0
 * 000000014000D1A7: mov     [rsp+58h+var_20], 4
 * 000000014000D1B0: mov     [rsp+58h+var_28], r8
 * 000000014000D1B5: lea     r8, WPP_490aebbb81ea3ea14d3300aab47ed862_Traceguids
 * 000000014000D1BC: mov     [rsp+58h+var_30], rdx
 * 000000014000D1C1: mov     edx, 2Bh ; '+'
 * 000000014000D1C6: mov     [rsp+58h+var_38], rcx
 * 000000014000D1CB: mov     rcx, r10
 * 000000014000D1CE: call    _guard_dispatch_icall
 * 000000014000D1D3: mov     r9d, 32h ; '2'
 * 000000014000D1D9: test    sil, sil
 * 000000014000D1DC: jz      short loc_14000D245
 * 000000014000D1DE: test    rdi, rdi
 * 000000014000D1E1: jz      short loc_14000D1F1
 * 000000014000D1E3: inc     rbx
 * 000000014000D1E6: cmp     byte ptr [rdi+rbx], 0
 * 000000014000D1EA: jnz     short loc_14000D1E3
 * 000000014000D1EC: inc     rbx
 * 000000014000D1EF: jmp     short loc_14000D1F6
 * 000000014000D1F1: mov     ebx, 5
 * 000000014000D1F6: test    rdi, rdi
 * 000000014000D1F9: lea     rax, [rsp+58h+arg_48]
 * 000000014000D201: mov     rcx, rbp
 * 000000014000D204: cmovz   rdi, r13
 * 000000014000D208: and     [rsp+58h+var_10], 0
 * 000000014000D20E: mov     [rsp+58h+var_18], 4
 * 000000014000D217: xor     edx, edx
 * 000000014000D219: mov     [rsp+58h+var_20], rax
 * 000000014000D21E: mov     [rsp+58h+var_28], rbx
 * 000000014000D223: mov     [rsp+58h+var_30], rdi
 * 000000014000D228: mov     word ptr [rsp+58h+var_38], r9w
 * 000000014000D22E: lea     r8d, [rdx+8]
 * 000000014000D232: lea     r9, WPP_490aebbb81ea3ea14d3300aab47ed862_Traceguids
 * 000000014000D239: call    cs:__imp_WppAutoLogTrace
 * 000000014000D240: nop     dword ptr [rax+rax+00h]
 * 000000014000D245: mov     rbx, [rsp+58h+arg_0]
 * 000000014000D24A: mov     rbp, [rsp+58h+arg_8]
 * 000000014000D24F: mov     rsi, [rsp+58h+arg_10]
 * 000000014000D254: mov     rdi, [rsp+58h+arg_18]
 * 000000014000D259: add     rsp, 50h
 * 000000014000D25D: pop     r13
 * 000000014000D25F: retn
 */
