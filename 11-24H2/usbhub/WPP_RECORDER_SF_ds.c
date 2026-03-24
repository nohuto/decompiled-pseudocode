/*
 * XREFs of WPP_RECORDER_SF_ds @ 0x1400561E8
 * Callers:
 *     UsbhExceptionTrace @ 0x1400343AC (UsbhExceptionTrace.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140060F80 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ds @ 0x1400561E8
 * Reason: Hex-Rays returned no pseudocode for 0x1400561E8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400561E8: mov     rax, rsp
 * 00000001400561EB: mov     [rax+8], rbx
 * 00000001400561EF: mov     [rax+10h], rsi
 * 00000001400561F3: mov     [rax+18h], rdi
 * 00000001400561F7: mov     [rax+20h], r12
 * 00000001400561FB: push    r13
 * 00000001400561FD: sub     rsp, 50h
 * 0000000140056201: mov     rax, cs:WPP_GLOBAL_Control
 * 0000000140056208: lea     r12, aNull; "NULL"
 * 000000014005620F: mov     rdi, [rsp+58h+arg_30]
 * 0000000140056217: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 000000014005621B: mov     rsi, rcx
 * 000000014005621E: mov     edx, [rax+2Ch]
 * 0000000140056221: lea     r13d, [rbx+0Dh]
 * 0000000140056225: test    dl, 1
 * 0000000140056228: jz      short loc_14005629B
 * 000000014005622A: test    rdi, rdi
 * 000000014005622D: jz      short loc_140056240
 * 000000014005622F: mov     rdx, rbx
 * 0000000140056232: inc     rdx
 * 0000000140056235: cmp     byte ptr [rdi+rdx], 0
 * 0000000140056239: jnz     short loc_140056232
 * 000000014005623B: inc     rdx
 * 000000014005623E: jmp     short loc_140056245
 * 0000000140056240: mov     edx, 5
 * 0000000140056245: mov     rax, cs:pfnWppTraceMessage
 * 000000014005624C: lea     r8, WPP_5d29ce81e5593e4cedbd7d1112d44f7d_Traceguids
 * 0000000140056253: test    rdi, rdi
 * 0000000140056256: mov     rcx, rdi
 * 0000000140056259: mov     r9d, r13d
 * 000000014005625C: cmovz   rcx, r12
 * 0000000140056260: and     [rsp+58h+var_18], 0
 * 0000000140056266: mov     [rsp+58h+var_20], rdx
 * 000000014005626B: mov     edx, 2Bh ; '+'
 * 0000000140056270: mov     [rsp+58h+var_28], rcx
 * 0000000140056275: lea     rcx, [rsp+58h+arg_28]
 * 000000014005627D: mov     [rsp+58h+var_30], 4
 * 0000000140056286: mov     [rsp+58h+var_38], rcx
 * 000000014005628B: mov     rcx, cs:WPP_GLOBAL_Control
 * 0000000140056292: mov     rcx, [rcx+18h]
 * 0000000140056296: call    _guard_dispatch_icall
 * 000000014005629B: test    rdi, rdi
 * 000000014005629E: jz      short loc_1400562AE
 * 00000001400562A0: inc     rbx
 * 00000001400562A3: cmp     byte ptr [rdi+rbx], 0
 * 00000001400562A7: jnz     short loc_1400562A0
 * 00000001400562A9: inc     rbx
 * 00000001400562AC: jmp     short loc_1400562B3
 * 00000001400562AE: mov     ebx, 5
 * 00000001400562B3: test    rdi, rdi
 * 00000001400562B6: lea     rax, [rsp+58h+arg_28]
 * 00000001400562BE: lea     r9, WPP_5d29ce81e5593e4cedbd7d1112d44f7d_Traceguids
 * 00000001400562C5: mov     rcx, rsi
 * 00000001400562C8: cmovz   rdi, r12
 * 00000001400562CC: and     [rsp+58h+var_10], 0
 * 00000001400562D2: mov     [rsp+58h+var_18], rbx
 * 00000001400562D7: xor     edx, edx
 * 00000001400562D9: mov     [rsp+58h+var_20], rdi
 * 00000001400562DE: mov     [rsp+58h+var_28], 4
 * 00000001400562E7: mov     [rsp+58h+var_30], rax
 * 00000001400562EC: lea     r8d, [rdx+1]
 * 00000001400562F0: mov     word ptr [rsp+58h+var_38], r13w
 * 00000001400562F6: call    cs:__imp_WppAutoLogTrace
 * 00000001400562FD: nop     dword ptr [rax+rax+00h]
 * 0000000140056302: mov     rbx, [rsp+58h+arg_0]
 * 0000000140056307: mov     rsi, [rsp+58h+arg_8]
 * 000000014005630C: mov     rdi, [rsp+58h+arg_10]
 * 0000000140056311: mov     r12, [rsp+58h+arg_18]
 * 0000000140056316: add     rsp, 50h
 * 000000014005631A: pop     r13
 * 000000014005631C: retn
 */
