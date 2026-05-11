/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_ii @ 0x140008E00
 * Callers:
 *     USBType1RenderBytePosition @ 0x140001010 (USBType1RenderBytePosition.c)
 *     USBCaptureBytePosition @ 0x140001530 (USBCaptureBytePosition.c)
 *     PropertyGetAudioPositionEx @ 0x14003AC90 (PropertyGetAudioPositionEx.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C680 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_ii @ 0x140008E00
 * Reason: Hex-Rays returned no pseudocode for 0x140008E00
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140008E00: mov     r11, rsp
 * 0000000140008E03: mov     [r11+8], rbx
 * 0000000140008E07: mov     [r11+10h], rbp
 * 0000000140008E0B: mov     [r11+18h], rsi
 * 0000000140008E0F: push    rdi
 * 0000000140008E10: sub     rsp, 50h
 * 0000000140008E14: movzx   ebx, [rsp+58h+arg_30]
 * 0000000140008E1C: mov     rsi, r9
 * 0000000140008E1F: mov     dil, r8b
 * 0000000140008E22: mov     ebp, 8
 * 0000000140008E27: test    dl, dl
 * 0000000140008E29: jz      short loc_140008E62
 * 0000000140008E2B: and     qword ptr [r11-18h], 0
 * 0000000140008E30: lea     rdx, [r11+50h]
 * 0000000140008E34: mov     rax, cs:pfnWppTraceMessage
 * 0000000140008E3B: mov     r9d, ebx
 * 0000000140008E3E: mov     r8, [rsp+58h+arg_38]
 * 0000000140008E46: mov     [r11-20h], rbp
 * 0000000140008E4A: mov     [r11-28h], rdx
 * 0000000140008E4E: lea     rdx, [r11+48h]
 * 0000000140008E52: mov     [r11-30h], rbp
 * 0000000140008E56: mov     [r11-38h], rdx
 * 0000000140008E5A: lea     edx, [rbp+23h]
 * 0000000140008E5D: call    _guard_dispatch_icall
 * 0000000140008E62: test    dil, dil
 * 0000000140008E65: jz      short loc_140008EB3
 * 0000000140008E67: and     [rsp+58h+var_10], 0
 * 0000000140008E6D: lea     rax, [rsp+58h+arg_48]
 * 0000000140008E75: mov     r9, [rsp+58h+arg_38]
 * 0000000140008E7D: xor     edx, edx
 * 0000000140008E7F: mov     [rsp+58h+var_18], rbp
 * 0000000140008E84: mov     rcx, rsi
 * 0000000140008E87: mov     [rsp+58h+var_20], rax
 * 0000000140008E8C: lea     rax, [rsp+58h+arg_40]
 * 0000000140008E94: mov     [rsp+58h+var_28], rbp
 * 0000000140008E99: mov     [rsp+58h+var_30], rax
 * 0000000140008E9E: lea     r8d, [rdx+3]
 * 0000000140008EA2: mov     [rsp+58h+var_38], bx
 * 0000000140008EA7: call    cs:__imp_WppAutoLogTrace
 * 0000000140008EAE: nop     dword ptr [rax+rax+00h]
 * 0000000140008EB3: mov     rbx, [rsp+58h+arg_0]
 * 0000000140008EB8: mov     rbp, [rsp+58h+arg_8]
 * 0000000140008EBD: mov     rsi, [rsp+58h+arg_10]
 * 0000000140008EC2: add     rsp, 50h
 * 0000000140008EC6: pop     rdi
 * 0000000140008EC7: retn
 */
