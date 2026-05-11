/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF__guid_d @ 0x140005210
 * Callers:
 *     PropertyGetBoolean @ 0x14003C9B0 (PropertyGetBoolean.c)
 *     PropertyGetDbLevel @ 0x14003CEC0 (PropertyGetDbLevel.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001BB50 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF__guid_d @ 0x140005210
 * Reason: Hex-Rays returned no pseudocode for 0x140005210
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140005210: mov     [rsp+arg_0], rbx
 * 0000000140005215: mov     [rsp+arg_8], rbp
 * 000000014000521A: mov     [rsp+arg_10], rsi
 * 000000014000521F: push    rdi
 * 0000000140005220: sub     rsp, 50h
 * 0000000140005224: mov     rbx, [rsp+58h+arg_40]
 * 000000014000522C: mov     rbp, r9
 * 000000014000522F: movzx   edi, [rsp+58h+arg_30]
 * 0000000140005237: mov     sil, r8b
 * 000000014000523A: test    dl, dl
 * 000000014000523C: jnz     short loc_1400052A4
 * 000000014000523E: test    sil, sil
 * 0000000140005241: jz      short loc_14000528E
 * 0000000140005243: and     [rsp+58h+var_10], 0
 * 0000000140005249: lea     rax, [rsp+58h+arg_48]
 * 0000000140005251: mov     [rsp+58h+var_18], 4
 * 000000014000525A: lea     r9, WPP_b83ba1dee83736acd1729b525419a2d7_Traceguids
 * 0000000140005261: mov     [rsp+58h+var_20], rax
 * 0000000140005266: xor     edx, edx
 * 0000000140005268: mov     [rsp+58h+var_28], 10h
 * 0000000140005271: mov     rcx, rbp
 * 0000000140005274: mov     [rsp+58h+var_30], rbx
 * 0000000140005279: mov     word ptr [rsp+58h+var_38], di
 * 000000014000527E: lea     r8d, [rdx+0Ah]
 * 0000000140005282: call    cs:__imp_WppAutoLogTrace
 * 0000000140005289: nop     dword ptr [rax+rax+00h]
 * 000000014000528E: mov     rbx, [rsp+58h+arg_0]
 * 0000000140005293: mov     rbp, [rsp+58h+arg_8]
 * 0000000140005298: mov     rsi, [rsp+58h+arg_10]
 * 000000014000529D: add     rsp, 50h
 * 00000001400052A1: pop     rdi
 * 00000001400052A2: retn
 * 00000001400052A4: and     [rsp+58h+var_18], 0
 * 00000001400052AA: lea     rdx, [rsp+58h+arg_48]
 * 00000001400052B2: mov     rax, cs:pfnWppTraceMessage
 * 00000001400052B9: lea     r8, WPP_b83ba1dee83736acd1729b525419a2d7_Traceguids
 * 00000001400052C0: mov     [rsp+58h+var_20], 4
 * 00000001400052C9: mov     r9d, edi
 * 00000001400052CC: mov     [rsp+58h+var_28], rdx
 * 00000001400052D1: mov     edx, 2Bh ; '+'
 * 00000001400052D6: mov     [rsp+58h+var_30], 10h
 * 00000001400052DF: mov     [rsp+58h+var_38], rbx
 * 00000001400052E4: call    _guard_dispatch_icall
 * 00000001400052E9: jmp     loc_14000523E
 */
