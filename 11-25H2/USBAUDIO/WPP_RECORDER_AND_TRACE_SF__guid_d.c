/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF__guid_d @ 0x140005440
 * Callers:
 *     PropertyGetBoolean @ 0x14003D110 (PropertyGetBoolean.c)
 *     PropertyGetDbLevel @ 0x14003D620 (PropertyGetDbLevel.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C680 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF__guid_d @ 0x140005440
 * Reason: Hex-Rays returned no pseudocode for 0x140005440
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140005440: mov     [rsp+arg_0], rbx
 * 0000000140005445: mov     [rsp+arg_8], rbp
 * 000000014000544A: mov     [rsp+arg_10], rsi
 * 000000014000544F: push    rdi
 * 0000000140005450: sub     rsp, 50h
 * 0000000140005454: mov     rbx, [rsp+58h+arg_40]
 * 000000014000545C: mov     rbp, r9
 * 000000014000545F: movzx   edi, [rsp+58h+arg_30]
 * 0000000140005467: mov     sil, r8b
 * 000000014000546A: test    dl, dl
 * 000000014000546C: jnz     short loc_1400054D4
 * 000000014000546E: test    sil, sil
 * 0000000140005471: jz      short loc_1400054BE
 * 0000000140005473: and     [rsp+58h+var_10], 0
 * 0000000140005479: lea     rax, [rsp+58h+arg_48]
 * 0000000140005481: mov     [rsp+58h+var_18], 4
 * 000000014000548A: lea     r9, WPP_b83ba1dee83736acd1729b525419a2d7_Traceguids
 * 0000000140005491: mov     [rsp+58h+var_20], rax
 * 0000000140005496: xor     edx, edx
 * 0000000140005498: mov     [rsp+58h+var_28], 10h
 * 00000001400054A1: mov     rcx, rbp
 * 00000001400054A4: mov     [rsp+58h+var_30], rbx
 * 00000001400054A9: mov     word ptr [rsp+58h+var_38], di
 * 00000001400054AE: lea     r8d, [rdx+0Ah]
 * 00000001400054B2: call    cs:__imp_WppAutoLogTrace
 * 00000001400054B9: nop     dword ptr [rax+rax+00h]
 * 00000001400054BE: mov     rbx, [rsp+58h+arg_0]
 * 00000001400054C3: mov     rbp, [rsp+58h+arg_8]
 * 00000001400054C8: mov     rsi, [rsp+58h+arg_10]
 * 00000001400054CD: add     rsp, 50h
 * 00000001400054D1: pop     rdi
 * 00000001400054D2: retn
 * 00000001400054D4: and     [rsp+58h+var_18], 0
 * 00000001400054DA: lea     rdx, [rsp+58h+arg_48]
 * 00000001400054E2: mov     rax, cs:pfnWppTraceMessage
 * 00000001400054E9: lea     r8, WPP_b83ba1dee83736acd1729b525419a2d7_Traceguids
 * 00000001400054F0: mov     [rsp+58h+var_20], 4
 * 00000001400054F9: mov     r9d, edi
 * 00000001400054FC: mov     [rsp+58h+var_28], rdx
 * 0000000140005501: mov     edx, 2Bh ; '+'
 * 0000000140005506: mov     [rsp+58h+var_30], 10h
 * 000000014000550F: mov     [rsp+58h+var_38], rbx
 * 0000000140005514: call    _guard_dispatch_icall
 * 0000000140005519: jmp     loc_14000546E
 */
