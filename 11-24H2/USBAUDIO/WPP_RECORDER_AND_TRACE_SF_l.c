/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_l @ 0x14000C3A8
 * Callers:
 *     DeviceStart @ 0x14002E730 (DeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001BB50 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_l @ 0x14000C3A8
 * Reason: Hex-Rays returned no pseudocode for 0x14000C3A8
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014000C3A8: mov     r11, rsp
 * 000000014000C3AB: mov     [r11+8], rbx
 * 000000014000C3AF: mov     [r11+10h], rbp
 * 000000014000C3B3: push    rdi
 * 000000014000C3B4: sub     rsp, 40h
 * 000000014000C3B8: mov     rdi, r9
 * 000000014000C3BB: mov     bl, r8b
 * 000000014000C3BE: mov     ebp, 19h
 * 000000014000C3C3: test    dl, dl
 * 000000014000C3C5: jz      short loc_14000C3F5
 * 000000014000C3C7: and     qword ptr [r11-18h], 0
 * 000000014000C3CC: lea     rdx, [r11+48h]
 * 000000014000C3D0: mov     rax, cs:pfnWppTraceMessage
 * 000000014000C3D7: lea     r8, WPP_36ecd4db00a936131fa2a547c127b75e_Traceguids
 * 000000014000C3DE: mov     qword ptr [r11-20h], 4
 * 000000014000C3E6: mov     r9d, ebp
 * 000000014000C3E9: mov     [r11-28h], rdx
 * 000000014000C3ED: lea     edx, [rbp+12h]
 * 000000014000C3F0: call    _guard_dispatch_icall
 * 000000014000C3F5: test    bl, bl
 * 000000014000C3F7: jz      short loc_14000C436
 * 000000014000C3F9: and     [rsp+48h+var_10], 0
 * 000000014000C3FF: lea     rax, [rsp+48h+arg_40]
 * 000000014000C407: xor     edx, edx
 * 000000014000C409: mov     [rsp+48h+var_18], 4
 * 000000014000C412: mov     [rsp+48h+var_20], rax
 * 000000014000C417: lea     r9, WPP_36ecd4db00a936131fa2a547c127b75e_Traceguids
 * 000000014000C41E: mov     rcx, rdi
 * 000000014000C421: mov     [rsp+48h+var_28], bp
 * 000000014000C426: lea     r8d, [rdx+9]
 * 000000014000C42A: call    cs:__imp_WppAutoLogTrace
 * 000000014000C431: nop     dword ptr [rax+rax+00h]
 * 000000014000C436: mov     rbx, [rsp+48h+arg_0]
 * 000000014000C43B: mov     rbp, [rsp+48h+arg_8]
 * 000000014000C440: add     rsp, 40h
 * 000000014000C444: pop     rdi
 * 000000014000C445: retn
 */
