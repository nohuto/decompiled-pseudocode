/*
 * XREFs of WPP_RECORDER_SF_qqL @ 0x1C0004620
 * Callers:
 *     MouseClassReadCopyData @ 0x1C0002230 (MouseClassReadCopyData.c)
 *     MouseClassDeviceControl @ 0x1C000F310 (MouseClassDeviceControl.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1C0006B20 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqL @ 0x1C0004620
 * Reason: Hex-Rays returned no pseudocode for 0x1C0004620
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0004620: mov     [rsp+arg_0], rbx
 * 00000001C0004625: mov     [rsp+arg_8], rbp
 * 00000001C000462A: mov     [rsp+arg_10], rsi
 * 00000001C000462F: mov     [rsp+arg_18], rdi
 * 00000001C0004634: push    r14
 * 00000001C0004636: sub     rsp, 60h
 * 00000001C000463A: mov     ebx, r8d
 * 00000001C000463D: mov     r14, rcx
 * 00000001C0004640: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0004647: mov     edi, r8d
 * 00000001C000464A: shr     rdi, 10h
 * 00000001C000464E: lea     r11d, [rbx-1]
 * 00000001C0004652: movzx   ebp, r9w
 * 00000001C0004656: mov     r8d, r11d
 * 00000001C0004659: movzx   esi, dl
 * 00000001C000465C: shr     r8, 5
 * 00000001C0004660: and     r11d, 1Fh
 * 00000001C0004664: and     r8d, 7FFh
 * 00000001C000466B: lea     rax, [rdi+rdi*4]
 * 00000001C000466F: lea     r10, [r8+rax*4]
 * 00000001C0004673: mov     eax, [rcx+r10*4+2Ch]
 * 00000001C0004678: bt      eax, r11d
 * 00000001C000467C: jb      loc_1C0004709
 * 00000001C0004682: mov     [rsp+68h+var_10], 0
 * 00000001C000468B: lea     rax, [rsp+68h+arg_38]
 * 00000001C0004693: mov     [rsp+68h+var_18], 4
 * 00000001C000469C: lea     r9, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C00046A3: mov     [rsp+68h+var_20], rax
 * 00000001C00046A8: mov     r8d, ebx
 * 00000001C00046AB: mov     [rsp+68h+var_28], 8
 * 00000001C00046B4: lea     rax, [rsp+68h+arg_30]
 * 00000001C00046BC: mov     [rsp+68h+var_30], rax
 * 00000001C00046C1: mov     edx, esi
 * 00000001C00046C3: lea     rax, [rsp+68h+arg_28]
 * 00000001C00046CB: mov     [rsp+68h+var_38], 8
 * 00000001C00046D4: mov     [rsp+68h+var_40], rax
 * 00000001C00046D9: mov     rcx, r14
 * 00000001C00046DC: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C00046E1: call    cs:__imp_WppAutoLogTrace
 * 00000001C00046E8: nop     dword ptr [rax+rax+00h]
 * 00000001C00046ED: lea     r11, [rsp+68h+var_8]
 * 00000001C00046F2: mov     rbx, [r11+10h]
 * 00000001C00046F6: mov     rbp, [r11+18h]
 * 00000001C00046FA: mov     rsi, [r11+20h]
 * 00000001C00046FE: mov     rdi, [r11+28h]
 * 00000001C0004702: mov     rsp, r11
 * 00000001C0004705: pop     r14
 * 00000001C0004707: retn
 * 00000001C0004709: lea     rax, [rdi+rdi*4]
 * 00000001C000470D: shl     rax, 4
 * 00000001C0004711: add     rcx, rax
 * 00000001C0004714: cmp     [rcx+29h], sil
 * 00000001C0004718: jb      loc_1C0004682
 * 00000001C000471E: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0004725: lea     rdx, [rsp+68h+arg_38]
 * 00000001C000472D: mov     rcx, [rcx+18h]
 * 00000001C0004731: lea     r8, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0004738: mov     [rsp+68h+var_18], 0
 * 00000001C0004741: mov     r9d, ebp
 * 00000001C0004744: mov     [rsp+68h+var_20], 4
 * 00000001C000474D: mov     [rsp+68h+var_28], rdx
 * 00000001C0004752: lea     rdx, [rsp+68h+arg_30]
 * 00000001C000475A: mov     [rsp+68h+var_30], 8
 * 00000001C0004763: mov     [rsp+68h+var_38], rdx
 * 00000001C0004768: lea     rdx, [rsp+68h+arg_28]
 * 00000001C0004770: mov     [rsp+68h+var_40], 8
 * 00000001C0004779: mov     [rsp+68h+var_48], rdx
 * 00000001C000477E: mov     edx, 2Bh ; '+'
 * 00000001C0004783: call    _guard_dispatch_icall
 * 00000001C0004788: jmp     loc_1C0004682
 */
