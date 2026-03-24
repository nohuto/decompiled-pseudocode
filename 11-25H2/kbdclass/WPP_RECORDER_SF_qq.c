/*
 * XREFs of WPP_RECORDER_SF_qq @ 0x1C0002F10
 * Callers:
 *     KeyboardClassSetLedsComplete @ 0x1C00010F0 (KeyboardClassSetLedsComplete.c)
 *     KeyboardClassPowerComplete @ 0x1C00018B0 (KeyboardClassPowerComplete.c)
 *     KeyboardClassCancelPendingIrpLeds @ 0x1C0001B70 (KeyboardClassCancelPendingIrpLeds.c)
 *     KeyboardClassRead @ 0x1C0002920 (KeyboardClassRead.c)
 *     KeyboardClassReadCopyData @ 0x1C0002C70 (KeyboardClassReadCopyData.c)
 *     KeyboardClassPower @ 0x1C00031A0 (KeyboardClassPower.c)
 *     KeyboardClassCreate @ 0x1C00039B0 (KeyboardClassCreate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1C00072D0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qq @ 0x1C0002F10
 * Reason: Hex-Rays returned no pseudocode for 0x1C0002F10
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0002F10: mov     [rsp+arg_0], rbx
 * 00000001C0002F15: mov     [rsp+arg_8], rbp
 * 00000001C0002F1A: mov     [rsp+arg_10], rsi
 * 00000001C0002F1F: push    rdi
 * 00000001C0002F20: sub     rsp, 50h
 * 00000001C0002F24: mov     ebx, r8d
 * 00000001C0002F27: mov     rbp, rcx
 * 00000001C0002F2A: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0002F31: mov     r11d, r8d
 * 00000001C0002F34: shr     r11, 10h
 * 00000001C0002F38: lea     r10d, [rbx-1]
 * 00000001C0002F3C: movzx   esi, r9w
 * 00000001C0002F40: mov     r8d, r10d
 * 00000001C0002F43: movzx   edi, dl
 * 00000001C0002F46: shr     r8, 5
 * 00000001C0002F4A: and     r10d, 1Fh
 * 00000001C0002F4E: and     r8d, 7FFh
 * 00000001C0002F55: lea     rax, [r11+r11*4]
 * 00000001C0002F59: lea     rax, [r8+rax*4]
 * 00000001C0002F5D: mov     eax, [rcx+rax*4+2Ch]
 * 00000001C0002F61: bt      eax, r10d
 * 00000001C0002F65: jb      short loc_1C0002FD2
 * 00000001C0002F67: mov     [rsp+58h+var_10], 0
 * 00000001C0002F70: lea     rax, [rsp+58h+arg_30]
 * 00000001C0002F78: mov     [rsp+58h+var_18], 8
 * 00000001C0002F81: lea     r9, WPP_1b6d0084df9f3ca48f318fdd34bf6db2_Traceguids
 * 00000001C0002F88: mov     [rsp+58h+var_20], rax
 * 00000001C0002F8D: mov     r8d, ebx
 * 00000001C0002F90: lea     rax, [rsp+58h+arg_28]
 * 00000001C0002F98: mov     [rsp+58h+var_28], 8
 * 00000001C0002FA1: mov     [rsp+58h+var_30], rax
 * 00000001C0002FA6: mov     edx, edi
 * 00000001C0002FA8: mov     rcx, rbp
 * 00000001C0002FAB: mov     word ptr [rsp+58h+var_38], si
 * 00000001C0002FB0: call    cs:__imp_WppAutoLogTrace
 * 00000001C0002FB7: nop     dword ptr [rax+rax+00h]
 * 00000001C0002FBC: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0002FC1: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0002FC6: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0002FCB: add     rsp, 50h
 * 00000001C0002FCF: pop     rdi
 * 00000001C0002FD0: retn
 * 00000001C0002FD2: lea     rax, [r11+r11*4]
 * 00000001C0002FD6: shl     rax, 4
 * 00000001C0002FDA: add     rcx, rax
 * 00000001C0002FDD: cmp     [rcx+29h], dil
 * 00000001C0002FE1: jb      short loc_1C0002F67
 * 00000001C0002FE3: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0002FEA: lea     rdx, [rsp+58h+arg_30]
 * 00000001C0002FF2: mov     rcx, [rcx+18h]
 * 00000001C0002FF6: lea     r8, WPP_1b6d0084df9f3ca48f318fdd34bf6db2_Traceguids
 * 00000001C0002FFD: mov     [rsp+58h+var_18], 0
 * 00000001C0003006: mov     r9d, esi
 * 00000001C0003009: mov     [rsp+58h+var_20], 8
 * 00000001C0003012: mov     [rsp+58h+var_28], rdx
 * 00000001C0003017: lea     rdx, [rsp+58h+arg_28]
 * 00000001C000301F: mov     [rsp+58h+var_30], 8
 * 00000001C0003028: mov     [rsp+58h+var_38], rdx
 * 00000001C000302D: mov     edx, 2Bh ; '+'
 * 00000001C0003032: call    _guard_dispatch_icall
 * 00000001C0003037: jmp     loc_1C0002F67
 */
