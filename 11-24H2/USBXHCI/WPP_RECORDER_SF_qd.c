/*
 * XREFs of WPP_RECORDER_SF_qD @ 0x14002B6C0
 * Callers:
 *     RootHub_DumpPortData @ 0x14000CF98 (RootHub_DumpPortData.c)
 *     IoControl_WdfEvtIoDeviceControl @ 0x14002BA00 (IoControl_WdfEvtIoDeviceControl.c)
 *     Register_ParseCapabilityRegister @ 0x14007D158 (Register_ParseCapabilityRegister.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qD @ 0x14002B6C0
 * Reason: Hex-Rays returned no pseudocode for 0x14002B6C0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014002B6C0: mov     [rsp+arg_0], rbx
 * 000000014002B6C5: mov     [rsp+arg_8], rbp
 * 000000014002B6CA: mov     [rsp+arg_10], rsi
 * 000000014002B6CF: push    rdi
 * 000000014002B6D0: sub     rsp, 50h
 * 000000014002B6D4: mov     esi, r8d
 * 000000014002B6D7: mov     rbp, rcx
 * 000000014002B6DA: mov     ebx, r8d
 * 000000014002B6DD: shr     rbx, 10h
 * 000000014002B6E1: movzx   edi, r9w
 * 000000014002B6E5: lea     r11d, [rsi-1]
 * 000000014002B6E9: mov     edx, r11d
 * 000000014002B6EC: and     r11d, 1Fh
 * 000000014002B6F0: shr     rdx, 5
 * 000000014002B6F4: lea     rax, [rbx+rbx*4]
 * 000000014002B6F8: and     edx, 7FFh
 * 000000014002B6FE: lea     r10, [rdx+rax*4]
 * 000000014002B702: mov     edx, r11d
 * 000000014002B705: mov     r11, cs:WPP_GLOBAL_Control
 * 000000014002B70C: mov     eax, [r11+r10*4+2Ch]
 * 000000014002B711: bt      eax, edx
 * 000000014002B714: jb      short loc_14002B782
 * 000000014002B716: and     [rsp+58h+var_10], 0
 * 000000014002B71C: lea     rax, [rsp+58h+arg_30]
 * 000000014002B724: mov     r9, [rsp+58h+arg_20]
 * 000000014002B72C: mov     r8d, esi
 * 000000014002B72F: mov     [rsp+58h+var_18], 4
 * 000000014002B738: mov     edx, 4
 * 000000014002B73D: mov     [rsp+58h+var_20], rax
 * 000000014002B742: mov     rcx, rbp
 * 000000014002B745: lea     rax, [rsp+58h+arg_28]
 * 000000014002B74D: mov     [rsp+58h+var_28], 8
 * 000000014002B756: mov     [rsp+58h+var_30], rax
 * 000000014002B75B: mov     word ptr [rsp+58h+var_38], di
 * 000000014002B760: call    cs:__imp_WppAutoLogTrace
 * 000000014002B767: nop     dword ptr [rax+rax+00h]
 * 000000014002B76C: mov     rbx, [rsp+58h+arg_0]
 * 000000014002B771: mov     rbp, [rsp+58h+arg_8]
 * 000000014002B776: mov     rsi, [rsp+58h+arg_10]
 * 000000014002B77B: add     rsp, 50h
 * 000000014002B77F: pop     rdi
 * 000000014002B780: retn
 * 000000014002B782: lea     rcx, [rbx+rbx*4]
 * 000000014002B786: add     rcx, rcx
 * 000000014002B789: cmp     byte ptr [r11+rcx*8+29h], 4
 * 000000014002B78F: jb      short loc_14002B716
 * 000000014002B791: and     [rsp+58h+var_18], 0
 * 000000014002B797: lea     rdx, [rsp+58h+arg_30]
 * 000000014002B79F: mov     rax, cs:pfnWppTraceMessage
 * 000000014002B7A6: mov     r9d, edi
 * 000000014002B7A9: mov     r8, [rsp+58h+arg_20]
 * 000000014002B7B1: mov     rcx, [r11+rcx*8+18h]
 * 000000014002B7B6: mov     [rsp+58h+var_20], 4
 * 000000014002B7BF: mov     [rsp+58h+var_28], rdx
 * 000000014002B7C4: lea     rdx, [rsp+58h+arg_28]
 * 000000014002B7CC: mov     [rsp+58h+var_30], 8
 * 000000014002B7D5: mov     [rsp+58h+var_38], rdx
 * 000000014002B7DA: mov     edx, 2Bh ; '+'
 * 000000014002B7DF: call    _guard_dispatch_icall
 * 000000014002B7E4: jmp     loc_14002B716
 */
