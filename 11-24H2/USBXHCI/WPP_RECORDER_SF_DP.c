/*
 * XREFs of WPP_RECORDER_SF_DP @ 0x140055790
 * Callers:
 *     SecureChannel_SendRequestSynchronously @ 0x14001AD7C (SecureChannel_SendRequestSynchronously.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DP @ 0x140055790
 * Reason: Hex-Rays returned no pseudocode for 0x140055790
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140055790: mov     r11, rsp
 * 0000000140055793: mov     [r11+8], rbx
 * 0000000140055797: push    rbp
 * 0000000140055798: sub     rsp, 50h
 * 000000014005579C: mov     rbx, rcx
 * 000000014005579F: mov     ebp, 0Fh
 * 00000001400557A4: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001400557AB: test    dword ptr [rcx+2Ch], 40000h
 * 00000001400557B2: jz      short loc_1400557FC
 * 00000001400557B4: cmp     byte ptr [rcx+29h], 2
 * 00000001400557B8: jb      short loc_1400557FC
 * 00000001400557BA: and     qword ptr [r11-18h], 0
 * 00000001400557BF: lea     rdx, [r11+38h]
 * 00000001400557C3: mov     rax, cs:pfnWppTraceMessage
 * 00000001400557CA: lea     r8, WPP_6c69e57299f2371bca16af19cce5473c_Traceguids
 * 00000001400557D1: mov     rcx, [rcx+18h]
 * 00000001400557D5: mov     r9d, ebp
 * 00000001400557D8: mov     qword ptr [r11-20h], 8
 * 00000001400557E0: mov     [r11-28h], rdx
 * 00000001400557E4: lea     rdx, [r11+30h]
 * 00000001400557E8: mov     qword ptr [r11-30h], 4
 * 00000001400557F0: mov     [r11-38h], rdx
 * 00000001400557F4: lea     edx, [rbp+1Ch]
 * 00000001400557F7: call    _guard_dispatch_icall
 * 00000001400557FC: and     [rsp+58h+var_10], 0
 * 0000000140055802: lea     rax, [rsp+58h+arg_30]
 * 000000014005580A: mov     [rsp+58h+var_18], 8
 * 0000000140055813: lea     r9, WPP_6c69e57299f2371bca16af19cce5473c_Traceguids
 * 000000014005581A: mov     [rsp+58h+var_20], rax
 * 000000014005581F: mov     edx, 2
 * 0000000140055824: lea     rax, [rsp+58h+arg_28]
 * 000000014005582C: mov     [rsp+58h+var_28], 4
 * 0000000140055835: mov     [rsp+58h+var_30], rax
 * 000000014005583A: mov     rcx, rbx
 * 000000014005583D: mov     [rsp+58h+var_38], bp
 * 0000000140055842: lea     r8d, [rdx+11h]
 * 0000000140055846: call    cs:__imp_WppAutoLogTrace
 * 000000014005584D: nop     dword ptr [rax+rax+00h]
 * 0000000140055852: mov     rbx, [rsp+58h+arg_0]
 * 0000000140055857: add     rsp, 50h
 * 000000014005585B: pop     rbp
 * 000000014005585C: retn
 */
