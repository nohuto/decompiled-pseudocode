/*
 * XREFs of WPP_RECORDER_SF_qqq @ 0x1C00066C0
 * Callers:
 *     MouseClassCreate @ 0x1C00037F0 (MouseClassCreate.c)
 *     MouseClassClose @ 0x1C00042B0 (MouseClassClose.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1C0006B20 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqq @ 0x1C00066C0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00066C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00066C0: mov     r11, rsp
 * 00000001C00066C3: mov     [r11+8], rbx
 * 00000001C00066C7: mov     [r11+10h], rbp
 * 00000001C00066CB: push    rdi
 * 00000001C00066CC: sub     rsp, 60h
 * 00000001C00066D0: mov     rdi, rcx
 * 00000001C00066D3: movzx   ebx, r9w
 * 00000001C00066D7: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00066DE: mov     ebp, 8
 * 00000001C00066E3: mov     eax, [rcx+2Ch]
 * 00000001C00066E6: test    al, 2
 * 00000001C00066E8: jz      short loc_1C0006736
 * 00000001C00066EA: cmp     byte ptr [rcx+29h], 2
 * 00000001C00066EE: jb      short loc_1C0006736
 * 00000001C00066F0: and     qword ptr [r11-18h], 0
 * 00000001C00066F5: lea     rdx, [r11+40h]
 * 00000001C00066F9: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0006700: lea     r8, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0006707: mov     rcx, [rcx+18h]
 * 00000001C000670B: mov     r9d, ebx
 * 00000001C000670E: mov     [r11-20h], rbp
 * 00000001C0006712: mov     [r11-28h], rdx
 * 00000001C0006716: lea     rdx, [r11+38h]
 * 00000001C000671A: mov     [r11-30h], rbp
 * 00000001C000671E: mov     [r11-38h], rdx
 * 00000001C0006722: lea     rdx, [r11+30h]
 * 00000001C0006726: mov     [r11-40h], rbp
 * 00000001C000672A: mov     [r11-48h], rdx
 * 00000001C000672E: lea     edx, [rbp+23h]
 * 00000001C0006731: call    _guard_dispatch_icall
 * 00000001C0006736: and     [rsp+68h+var_10], 0
 * 00000001C000673C: lea     rax, [rsp+68h+arg_38]
 * 00000001C0006744: mov     [rsp+68h+var_18], rbp
 * 00000001C0006749: lea     r9, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0006750: mov     [rsp+68h+var_20], rax
 * 00000001C0006755: mov     edx, 2
 * 00000001C000675A: mov     [rsp+68h+var_28], rbp
 * 00000001C000675F: lea     rax, [rsp+68h+arg_30]
 * 00000001C0006767: mov     [rsp+68h+var_30], rax
 * 00000001C000676C: mov     r8d, edx
 * 00000001C000676F: lea     rax, [rsp+68h+arg_28]
 * 00000001C0006777: mov     [rsp+68h+var_38], rbp
 * 00000001C000677C: mov     [rsp+68h+var_40], rax
 * 00000001C0006781: mov     rcx, rdi
 * 00000001C0006784: mov     [rsp+68h+var_48], bx
 * 00000001C0006789: call    cs:__imp_WppAutoLogTrace
 * 00000001C0006790: nop     dword ptr [rax+rax+00h]
 * 00000001C0006795: mov     rbx, [rsp+68h+arg_0]
 * 00000001C000679A: mov     rbp, [rsp+68h+arg_8]
 * 00000001C000679F: add     rsp, 60h
 * 00000001C00067A3: pop     rdi
 * 00000001C00067A4: retn
 */
