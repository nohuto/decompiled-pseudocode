/*
 * XREFs of WPP_RECORDER_SF_qq @ 0x1C0002630
 * Callers:
 *     MouseClassPower @ 0x1C00010F0 (MouseClassPower.c)
 *     MouseClassRead @ 0x1C0001ED0 (MouseClassRead.c)
 *     MouseClassReadCopyData @ 0x1C0002230 (MouseClassReadCopyData.c)
 *     MouseClassCreate @ 0x1C00037F0 (MouseClassCreate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1C0006B20 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qq @ 0x1C0002630
 * Reason: Hex-Rays returned no pseudocode for 0x1C0002630
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0002630: mov     [rsp+arg_0], rbx
 * 00000001C0002635: mov     [rsp+arg_8], rbp
 * 00000001C000263A: mov     [rsp+arg_10], rsi
 * 00000001C000263F: push    rdi
 * 00000001C0002640: sub     rsp, 50h
 * 00000001C0002644: mov     ebx, r8d
 * 00000001C0002647: mov     rbp, rcx
 * 00000001C000264A: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0002651: mov     r11d, r8d
 * 00000001C0002654: shr     r11, 10h
 * 00000001C0002658: lea     r10d, [rbx-1]
 * 00000001C000265C: movzx   esi, r9w
 * 00000001C0002660: mov     r8d, r10d
 * 00000001C0002663: movzx   edi, dl
 * 00000001C0002666: shr     r8, 5
 * 00000001C000266A: and     r10d, 1Fh
 * 00000001C000266E: and     r8d, 7FFh
 * 00000001C0002675: lea     rax, [r11+r11*4]
 * 00000001C0002679: lea     rax, [r8+rax*4]
 * 00000001C000267D: mov     eax, [rcx+rax*4+2Ch]
 * 00000001C0002681: bt      eax, r10d
 * 00000001C0002685: jb      short loc_1C00026F2
 * 00000001C0002687: mov     [rsp+58h+var_10], 0
 * 00000001C0002690: lea     rax, [rsp+58h+arg_30]
 * 00000001C0002698: mov     [rsp+58h+var_18], 8
 * 00000001C00026A1: lea     r9, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C00026A8: mov     [rsp+58h+var_20], rax
 * 00000001C00026AD: mov     r8d, ebx
 * 00000001C00026B0: lea     rax, [rsp+58h+arg_28]
 * 00000001C00026B8: mov     [rsp+58h+var_28], 8
 * 00000001C00026C1: mov     [rsp+58h+var_30], rax
 * 00000001C00026C6: mov     edx, edi
 * 00000001C00026C8: mov     rcx, rbp
 * 00000001C00026CB: mov     word ptr [rsp+58h+var_38], si
 * 00000001C00026D0: call    cs:__imp_WppAutoLogTrace
 * 00000001C00026D7: nop     dword ptr [rax+rax+00h]
 * 00000001C00026DC: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00026E1: mov     rbp, [rsp+58h+arg_8]
 * 00000001C00026E6: mov     rsi, [rsp+58h+arg_10]
 * 00000001C00026EB: add     rsp, 50h
 * 00000001C00026EF: pop     rdi
 * 00000001C00026F0: retn
 * 00000001C00026F2: lea     rax, [r11+r11*4]
 * 00000001C00026F6: shl     rax, 4
 * 00000001C00026FA: add     rcx, rax
 * 00000001C00026FD: cmp     [rcx+29h], dil
 * 00000001C0002701: jb      short loc_1C0002687
 * 00000001C0002703: mov     rax, cs:pfnWppTraceMessage
 * 00000001C000270A: lea     rdx, [rsp+58h+arg_30]
 * 00000001C0002712: mov     rcx, [rcx+18h]
 * 00000001C0002716: lea     r8, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C000271D: mov     [rsp+58h+var_18], 0
 * 00000001C0002726: mov     r9d, esi
 * 00000001C0002729: mov     [rsp+58h+var_20], 8
 * 00000001C0002732: mov     [rsp+58h+var_28], rdx
 * 00000001C0002737: lea     rdx, [rsp+58h+arg_28]
 * 00000001C000273F: mov     [rsp+58h+var_30], 8
 * 00000001C0002748: mov     [rsp+58h+var_38], rdx
 * 00000001C000274D: mov     edx, 2Bh ; '+'
 * 00000001C0002752: call    _guard_dispatch_icall
 * 00000001C0002757: jmp     loc_1C0002687
 */
