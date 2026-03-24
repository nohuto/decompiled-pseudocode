/*
 * XREFs of WPP_RECORDER_SF_D @ 0x1C0005CFC
 * Callers:
 *     MouConfiguration @ 0x1C0011A90 (MouConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1C0006B20 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_D @ 0x1C0005CFC
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005CFC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005CFC: mov     r11, rsp
 * 00000001C0005CFF: mov     [r11+8], rbx
 * 00000001C0005D03: push    rsi
 * 00000001C0005D04: sub     rsp, 40h
 * 00000001C0005D08: mov     rbx, rcx
 * 00000001C0005D0B: mov     esi, 41h ; 'A'
 * 00000001C0005D10: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0005D17: mov     eax, [rcx+2Ch]
 * 00000001C0005D1A: test    al, 1
 * 00000001C0005D1C: jz      short loc_1C0005D56
 * 00000001C0005D1E: cmp     byte ptr [rcx+29h], 4
 * 00000001C0005D22: jb      short loc_1C0005D56
 * 00000001C0005D24: and     qword ptr [r11-18h], 0
 * 00000001C0005D29: lea     rdx, [r11+30h]
 * 00000001C0005D2D: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0005D34: lea     r8, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0005D3B: mov     rcx, [rcx+18h]
 * 00000001C0005D3F: mov     r9d, esi
 * 00000001C0005D42: mov     qword ptr [r11-20h], 4
 * 00000001C0005D4A: mov     [r11-28h], rdx
 * 00000001C0005D4E: lea     edx, [rsi-16h]
 * 00000001C0005D51: call    _guard_dispatch_icall
 * 00000001C0005D56: and     [rsp+48h+var_10], 0
 * 00000001C0005D5C: lea     rax, [rsp+48h+arg_28]
 * 00000001C0005D61: mov     edx, 4
 * 00000001C0005D66: mov     [rsp+48h+var_18], 4
 * 00000001C0005D6F: mov     [rsp+48h+var_20], rax
 * 00000001C0005D74: lea     r9, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0005D7B: mov     rcx, rbx
 * 00000001C0005D7E: mov     [rsp+48h+var_28], si
 * 00000001C0005D83: lea     r8d, [rdx-3]
 * 00000001C0005D87: call    cs:__imp_WppAutoLogTrace
 * 00000001C0005D8E: nop     dword ptr [rax+rax+00h]
 * 00000001C0005D93: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0005D98: add     rsp, 40h
 * 00000001C0005D9C: pop     rsi
 * 00000001C0005D9D: retn
 */
