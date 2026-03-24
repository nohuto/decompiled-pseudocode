/*
 * XREFs of WPP_RECORDER_SF_Ld @ 0x140055864
 * Callers:
 *     SecureChannel_SendRequestSynchronously @ 0x14001AD7C (SecureChannel_SendRequestSynchronously.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Ld @ 0x140055864
 * Reason: Hex-Rays returned no pseudocode for 0x140055864
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140055864: mov     r11, rsp
 * 0000000140055867: mov     [r11+8], rbx
 * 000000014005586B: mov     [r11+10h], rsi
 * 000000014005586F: push    rdi
 * 0000000140055870: sub     rsp, 50h
 * 0000000140055874: mov     rbx, rcx
 * 0000000140055877: mov     esi, 10h
 * 000000014005587C: mov     rcx, cs:WPP_GLOBAL_Control
 * 0000000140055883: lea     edi, [rsi-0Ch]
 * 0000000140055886: test    dword ptr [rcx+2Ch], 40000h
 * 000000014005588D: jz      short loc_1400558CF
 * 000000014005588F: cmp     byte ptr [rcx+29h], 2
 * 0000000140055893: jb      short loc_1400558CF
 * 0000000140055895: and     qword ptr [r11-18h], 0
 * 000000014005589A: lea     rdx, [r11+38h]
 * 000000014005589E: mov     rax, cs:pfnWppTraceMessage
 * 00000001400558A5: lea     r8, WPP_6c69e57299f2371bca16af19cce5473c_Traceguids
 * 00000001400558AC: mov     rcx, [rcx+18h]
 * 00000001400558B0: mov     r9d, esi
 * 00000001400558B3: mov     [r11-20h], rdi
 * 00000001400558B7: mov     [r11-28h], rdx
 * 00000001400558BB: lea     rdx, [r11+30h]
 * 00000001400558BF: mov     [r11-30h], rdi
 * 00000001400558C3: mov     [r11-38h], rdx
 * 00000001400558C7: lea     edx, [rsi+1Bh]
 * 00000001400558CA: call    _guard_dispatch_icall
 * 00000001400558CF: and     [rsp+58h+var_10], 0
 * 00000001400558D5: lea     rax, [rsp+58h+arg_30]
 * 00000001400558DD: mov     [rsp+58h+var_18], rdi
 * 00000001400558E2: lea     r9, WPP_6c69e57299f2371bca16af19cce5473c_Traceguids
 * 00000001400558E9: mov     [rsp+58h+var_20], rax
 * 00000001400558EE: mov     edx, 2
 * 00000001400558F3: lea     rax, [rsp+58h+arg_28]
 * 00000001400558FB: mov     [rsp+58h+var_28], rdi
 * 0000000140055900: mov     [rsp+58h+var_30], rax
 * 0000000140055905: mov     rcx, rbx
 * 0000000140055908: mov     [rsp+58h+var_38], si
 * 000000014005590D: lea     r8d, [rdx+11h]
 * 0000000140055911: call    cs:__imp_WppAutoLogTrace
 * 0000000140055918: nop     dword ptr [rax+rax+00h]
 * 000000014005591D: mov     rbx, [rsp+58h+arg_0]
 * 0000000140055922: mov     rsi, [rsp+58h+arg_8]
 * 0000000140055927: add     rsp, 50h
 * 000000014005592B: pop     rdi
 * 000000014005592C: retn
 */
