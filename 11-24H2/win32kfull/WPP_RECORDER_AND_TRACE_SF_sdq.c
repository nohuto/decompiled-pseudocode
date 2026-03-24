/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_sdq @ 0x1401E9270
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x140246D90 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_sdq @ 0x1401E9270
 * Reason: Hex-Rays returned no pseudocode for 0x1401E9270
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401E9270: mov     [rsp+arg_0], rbx
 * 00000001401E9275: mov     [rsp+arg_8], rdi
 * 00000001401E927A: mov     [rsp+arg_10], r12
 * 00000001401E927F: push    r15
 * 00000001401E9281: sub     rsp, 60h
 * 00000001401E9285: lea     r12, aNtusersetwindo; "NtUserSetWindowCompositionAttribute"
 * 00000001401E928C: mov     rdi, r9
 * 00000001401E928F: mov     bl, r8b
 * 00000001401E9292: mov     r15d, 1Ch
 * 00000001401E9298: test    dl, dl
 * 00000001401E929A: jnz     loc_1401E9321
 * 00000001401E92A0: test    bl, bl
 * 00000001401E92A2: jz      short loc_1401E9309
 * 00000001401E92A4: and     [rsp+68h+var_10], 0
 * 00000001401E92AA: lea     rax, [rsp+68h+arg_50]
 * 00000001401E92B2: mov     [rsp+68h+var_18], 8
 * 00000001401E92BB: lea     r9, WPP_50f270925f983674ef77b34f83514a3b_Traceguids
 * 00000001401E92C2: mov     [rsp+68h+var_20], rax
 * 00000001401E92C7: mov     edx, 3
 * 00000001401E92CC: mov     [rsp+68h+var_28], 4
 * 00000001401E92D5: lea     rax, [rsp+68h+arg_48]
 * 00000001401E92DD: mov     [rsp+68h+var_30], rax
 * 00000001401E92E2: mov     rcx, rdi
 * 00000001401E92E5: mov     [rsp+68h+var_38], 24h ; '$'
 * 00000001401E92EE: mov     [rsp+68h+var_40], r12
 * 00000001401E92F3: lea     r8d, [rdx-2]
 * 00000001401E92F7: mov     word ptr [rsp+68h+var_48], r15w
 * 00000001401E92FD: call    cs:__imp_WppAutoLogTrace
 * 00000001401E9304: nop     dword ptr [rax+rax+00h]
 * 00000001401E9309: lea     r11, [rsp+68h+var_8]
 * 00000001401E930E: mov     rbx, [r11+10h]
 * 00000001401E9312: mov     rdi, [r11+18h]
 * 00000001401E9316: mov     r12, [r11+20h]
 * 00000001401E931A: mov     rsp, r11
 * 00000001401E931D: pop     r15
 * 00000001401E931F: retn
 * 00000001401E9321: and     [rsp+68h+var_18], 0
 * 00000001401E9327: lea     rdx, [rsp+68h+arg_50]
 * 00000001401E932F: mov     rax, cs:pfnWppTraceMessage
 * 00000001401E9336: lea     r8, WPP_50f270925f983674ef77b34f83514a3b_Traceguids
 * 00000001401E933D: mov     [rsp+68h+var_20], 8
 * 00000001401E9346: mov     r9d, r15d
 * 00000001401E9349: mov     [rsp+68h+var_28], rdx
 * 00000001401E934E: lea     rdx, [rsp+68h+arg_48]
 * 00000001401E9356: mov     [rsp+68h+var_30], 4
 * 00000001401E935F: mov     [rsp+68h+var_38], rdx
 * 00000001401E9364: mov     edx, 2Bh ; '+'
 * 00000001401E9369: mov     [rsp+68h+var_40], 24h ; '$'
 * 00000001401E9372: mov     [rsp+68h+var_48], r12
 * 00000001401E9377: call    _guard_dispatch_icall
 * 00000001401E937C: jmp     loc_1401E92A0
 */
