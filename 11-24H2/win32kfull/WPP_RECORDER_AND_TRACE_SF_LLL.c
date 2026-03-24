/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_LLL @ 0x1400A70EC
 * Callers:
 *     ValidateDelegatePointerList @ 0x1400A6DC8 (ValidateDelegatePointerList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_LLL @ 0x1400A70EC
 * Reason: Hex-Rays returned no pseudocode for 0x1400A70EC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400A70EC: mov     [rsp+arg_0], rbx
 * 00000001400A70F1: mov     [rsp+arg_8], rbp
 * 00000001400A70F6: mov     [rsp+arg_10], rsi
 * 00000001400A70FB: push    rdi
 * 00000001400A70FC: sub     rsp, 60h
 * 00000001400A7100: movzx   edi, [rsp+68h+arg_30]
 * 00000001400A7108: mov     rsi, r9
 * 00000001400A710B: mov     bl, r8b
 * 00000001400A710E: mov     ebp, 4
 * 00000001400A7113: test    dl, dl
 * 00000001400A7115: jnz     short loc_1400A7191
 * 00000001400A7117: test    bl, bl
 * 00000001400A7119: jz      short loc_1400A717A
 * 00000001400A711B: and     [rsp+68h+var_10], 0
 * 00000001400A7121: lea     rax, [rsp+68h+arg_50]
 * 00000001400A7129: mov     [rsp+68h+var_18], rbp
 * 00000001400A712E: lea     r9, WPP_498cb4b0a6fe38d4bf1a8d41cfaba51a_Traceguids
 * 00000001400A7135: mov     [rsp+68h+var_20], rax
 * 00000001400A713A: mov     r8d, 0Ah
 * 00000001400A7140: mov     [rsp+68h+var_28], rbp
 * 00000001400A7145: lea     rax, [rsp+68h+arg_48]
 * 00000001400A714D: mov     [rsp+68h+var_30], rax
 * 00000001400A7152: mov     edx, ebp
 * 00000001400A7154: lea     rax, [rsp+68h+arg_40]
 * 00000001400A715C: mov     [rsp+68h+var_38], rbp
 * 00000001400A7161: mov     [rsp+68h+var_40], rax
 * 00000001400A7166: mov     rcx, rsi
 * 00000001400A7169: mov     word ptr [rsp+68h+var_48], di
 * 00000001400A716E: call    cs:__imp_WppAutoLogTrace
 * 00000001400A7175: nop     dword ptr [rax+rax+00h]
 * 00000001400A717A: lea     r11, [rsp+68h+var_8]
 * 00000001400A717F: mov     rbx, [r11+10h]
 * 00000001400A7183: mov     rbp, [r11+18h]
 * 00000001400A7187: mov     rsi, [r11+20h]
 * 00000001400A718B: mov     rsp, r11
 * 00000001400A718E: pop     rdi
 * 00000001400A718F: retn
 * 00000001400A7191: and     [rsp+68h+var_18], 0
 * 00000001400A7197: lea     rdx, [rsp+68h+arg_50]
 * 00000001400A719F: mov     rax, cs:pfnWppTraceMessage
 * 00000001400A71A6: lea     r8, WPP_498cb4b0a6fe38d4bf1a8d41cfaba51a_Traceguids
 * 00000001400A71AD: mov     [rsp+68h+var_20], rbp
 * 00000001400A71B2: mov     r9d, edi
 * 00000001400A71B5: mov     [rsp+68h+var_28], rdx
 * 00000001400A71BA: lea     rdx, [rsp+68h+arg_48]
 * 00000001400A71C2: mov     [rsp+68h+var_30], rbp
 * 00000001400A71C7: mov     [rsp+68h+var_38], rdx
 * 00000001400A71CC: lea     rdx, [rsp+68h+arg_40]
 * 00000001400A71D4: mov     [rsp+68h+var_40], rbp
 * 00000001400A71D9: mov     [rsp+68h+var_48], rdx
 * 00000001400A71DE: mov     edx, 2Bh ; '+'
 * 00000001400A71E3: call    _guard_dispatch_icall
 * 00000001400A71E8: jmp     loc_1400A7117
 */
