/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_l @ 0x14000C288
 * Callers:
 *     DeviceStart @ 0x14002E730 (DeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C680 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_l @ 0x14000C288
 * Reason: Hex-Rays returned no pseudocode for 0x14000C288
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014000C288: mov     r11, rsp
 * 000000014000C28B: mov     [r11+8], rbx
 * 000000014000C28F: mov     [r11+10h], rbp
 * 000000014000C293: push    rdi
 * 000000014000C294: sub     rsp, 40h
 * 000000014000C298: mov     rdi, r9
 * 000000014000C29B: mov     bl, r8b
 * 000000014000C29E: mov     ebp, 19h
 * 000000014000C2A3: test    dl, dl
 * 000000014000C2A5: jz      short loc_14000C2D5
 * 000000014000C2A7: and     qword ptr [r11-18h], 0
 * 000000014000C2AC: lea     rdx, [r11+48h]
 * 000000014000C2B0: mov     rax, cs:pfnWppTraceMessage
 * 000000014000C2B7: lea     r8, WPP_2bfdcd6a21f130676fcfbe1f4e3a8945_Traceguids
 * 000000014000C2BE: mov     qword ptr [r11-20h], 4
 * 000000014000C2C6: mov     r9d, ebp
 * 000000014000C2C9: mov     [r11-28h], rdx
 * 000000014000C2CD: lea     edx, [rbp+12h]
 * 000000014000C2D0: call    _guard_dispatch_icall
 * 000000014000C2D5: test    bl, bl
 * 000000014000C2D7: jz      short loc_14000C316
 * 000000014000C2D9: and     [rsp+48h+var_10], 0
 * 000000014000C2DF: lea     rax, [rsp+48h+arg_40]
 * 000000014000C2E7: xor     edx, edx
 * 000000014000C2E9: mov     [rsp+48h+var_18], 4
 * 000000014000C2F2: mov     [rsp+48h+var_20], rax
 * 000000014000C2F7: lea     r9, WPP_2bfdcd6a21f130676fcfbe1f4e3a8945_Traceguids
 * 000000014000C2FE: mov     rcx, rdi
 * 000000014000C301: mov     [rsp+48h+var_28], bp
 * 000000014000C306: lea     r8d, [rdx+9]
 * 000000014000C30A: call    cs:__imp_WppAutoLogTrace
 * 000000014000C311: nop     dword ptr [rax+rax+00h]
 * 000000014000C316: mov     rbx, [rsp+48h+arg_0]
 * 000000014000C31B: mov     rbp, [rsp+48h+arg_8]
 * 000000014000C320: add     rsp, 40h
 * 000000014000C324: pop     rdi
 * 000000014000C325: retn
 */
