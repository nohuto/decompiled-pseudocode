/*
 * XREFs of WPP_RECORDER_SF_PP @ 0x140048F64
 * Callers:
 *     IoControl_WdfEvtIoDeviceControl @ 0x14002BA00 (IoControl_WdfEvtIoDeviceControl.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_PP @ 0x140048F64
 * Reason: Hex-Rays returned no pseudocode for 0x140048F64
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140048F64: mov     r11, rsp
 * 0000000140048F67: mov     [r11+8], rbx
 * 0000000140048F6B: mov     [r11+10h], rsi
 * 0000000140048F6F: push    rdi
 * 0000000140048F70: sub     rsp, 50h
 * 0000000140048F74: mov     rbx, rcx
 * 0000000140048F77: mov     esi, 0Ch
 * 0000000140048F7C: mov     rcx, cs:WPP_GLOBAL_Control
 * 0000000140048F83: lea     edi, [rsi-4]
 * 0000000140048F86: mov     eax, [rcx+2Ch]
 * 0000000140048F89: test    al, 10h
 * 0000000140048F8B: jz      short loc_140048FCD
 * 0000000140048F8D: cmp     byte ptr [rcx+29h], 3
 * 0000000140048F91: jb      short loc_140048FCD
 * 0000000140048F93: and     qword ptr [r11-18h], 0
 * 0000000140048F98: lea     rdx, [r11+38h]
 * 0000000140048F9C: mov     rax, cs:pfnWppTraceMessage
 * 0000000140048FA3: lea     r8, WPP_f5d171e210703c9bf22dbf511a7fd9e0_Traceguids
 * 0000000140048FAA: mov     rcx, [rcx+18h]
 * 0000000140048FAE: mov     r9d, esi
 * 0000000140048FB1: mov     [r11-20h], rdi
 * 0000000140048FB5: mov     [r11-28h], rdx
 * 0000000140048FB9: lea     rdx, [r11+30h]
 * 0000000140048FBD: mov     [r11-30h], rdi
 * 0000000140048FC1: mov     [r11-38h], rdx
 * 0000000140048FC5: lea     edx, [rsi+1Fh]
 * 0000000140048FC8: call    _guard_dispatch_icall
 * 0000000140048FCD: and     [rsp+58h+var_10], 0
 * 0000000140048FD3: lea     rax, [rsp+58h+arg_30]
 * 0000000140048FDB: mov     [rsp+58h+var_18], rdi
 * 0000000140048FE0: lea     r9, WPP_f5d171e210703c9bf22dbf511a7fd9e0_Traceguids
 * 0000000140048FE7: mov     [rsp+58h+var_20], rax
 * 0000000140048FEC: mov     edx, 3
 * 0000000140048FF1: lea     rax, [rsp+58h+arg_28]
 * 0000000140048FF9: mov     [rsp+58h+var_28], rdi
 * 0000000140048FFE: mov     [rsp+58h+var_30], rax
 * 0000000140049003: mov     rcx, rbx
 * 0000000140049006: mov     [rsp+58h+var_38], si
 * 000000014004900B: lea     r8d, [rdx+2]
 * 000000014004900F: call    cs:__imp_WppAutoLogTrace
 * 0000000140049016: nop     dword ptr [rax+rax+00h]
 * 000000014004901B: mov     rbx, [rsp+58h+arg_0]
 * 0000000140049020: mov     rsi, [rsp+58h+arg_8]
 * 0000000140049025: add     rsp, 50h
 * 0000000140049029: pop     rdi
 * 000000014004902A: retn
 */
