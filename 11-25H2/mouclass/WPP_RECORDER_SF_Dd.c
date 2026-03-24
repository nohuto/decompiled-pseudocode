/*
 * XREFs of WPP_RECORDER_SF_Dd @ 0x1C0005DA8
 * Callers:
 *     MouConfiguration @ 0x1C0011A90 (MouConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1C0006B20 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Dd @ 0x1C0005DA8
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005DA8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005DA8: mov     r11, rsp
 * 00000001C0005DAB: mov     [r11+8], rbx
 * 00000001C0005DAF: mov     [r11+10h], rsi
 * 00000001C0005DB3: push    rdi
 * 00000001C0005DB4: sub     rsp, 50h
 * 00000001C0005DB8: mov     rbx, rcx
 * 00000001C0005DBB: mov     edi, 4
 * 00000001C0005DC0: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0005DC7: lea     esi, [rdi+3Eh]
 * 00000001C0005DCA: mov     eax, [rcx+2Ch]
 * 00000001C0005DCD: test    al, 1
 * 00000001C0005DCF: jz      short loc_1C0005E11
 * 00000001C0005DD1: cmp     [rcx+29h], dil
 * 00000001C0005DD5: jb      short loc_1C0005E11
 * 00000001C0005DD7: and     qword ptr [r11-18h], 0
 * 00000001C0005DDC: lea     rdx, [r11+38h]
 * 00000001C0005DE0: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0005DE7: lea     r8, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0005DEE: mov     rcx, [rcx+18h]
 * 00000001C0005DF2: mov     r9d, esi
 * 00000001C0005DF5: mov     [r11-20h], rdi
 * 00000001C0005DF9: mov     [r11-28h], rdx
 * 00000001C0005DFD: lea     rdx, [r11+30h]
 * 00000001C0005E01: mov     [r11-30h], rdi
 * 00000001C0005E05: mov     [r11-38h], rdx
 * 00000001C0005E09: lea     edx, [rdi+27h]
 * 00000001C0005E0C: call    _guard_dispatch_icall
 * 00000001C0005E11: and     [rsp+58h+var_10], 0
 * 00000001C0005E17: lea     rax, [rsp+58h+arg_30]
 * 00000001C0005E1F: mov     [rsp+58h+var_18], rdi
 * 00000001C0005E24: lea     r9, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0005E2B: mov     [rsp+58h+var_20], rax
 * 00000001C0005E30: mov     r8d, 1
 * 00000001C0005E36: lea     rax, [rsp+58h+arg_28]
 * 00000001C0005E3E: mov     [rsp+58h+var_28], rdi
 * 00000001C0005E43: mov     [rsp+58h+var_30], rax
 * 00000001C0005E48: mov     edx, edi
 * 00000001C0005E4A: mov     rcx, rbx
 * 00000001C0005E4D: mov     [rsp+58h+var_38], si
 * 00000001C0005E52: call    cs:__imp_WppAutoLogTrace
 * 00000001C0005E59: nop     dword ptr [rax+rax+00h]
 * 00000001C0005E5E: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0005E63: mov     rsi, [rsp+58h+arg_8]
 * 00000001C0005E68: add     rsp, 50h
 * 00000001C0005E6C: pop     rdi
 * 00000001C0005E6D: retn
 */
