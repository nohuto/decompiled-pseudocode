/*
 * XREFs of WPP_RECORDER_SF_P @ 0x14004467C
 * Callers:
 *     Controller_ExecuteDSMToSendPORTSCValues @ 0x140030570 (Controller_ExecuteDSMToSendPORTSCValues.c)
 *     Controller_AllocateIrqlTrackingArray @ 0x14003F8D4 (Controller_AllocateIrqlTrackingArray.c)
 *     Controller_RetrieveUrsData @ 0x1400782D0 (Controller_RetrieveUrsData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_P @ 0x14004467C
 * Reason: Hex-Rays returned no pseudocode for 0x14004467C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014004467C: mov     r11, rsp
 * 000000014004467F: mov     [r11+8], rbx
 * 0000000140044683: push    rdi
 * 0000000140044684: sub     rsp, 40h
 * 0000000140044688: mov     rdi, rcx
 * 000000014004468B: movzx   ebx, r9w
 * 000000014004468F: mov     rcx, cs:WPP_GLOBAL_Control
 * 0000000140044696: mov     eax, [rcx+2Ch]
 * 0000000140044699: test    al, 8
 * 000000014004469B: jz      short loc_1400446D7
 * 000000014004469D: cmp     byte ptr [rcx+29h], 2
 * 00000001400446A1: jb      short loc_1400446D7
 * 00000001400446A3: and     qword ptr [r11-18h], 0
 * 00000001400446A8: lea     rdx, [r11+30h]
 * 00000001400446AC: mov     rax, cs:pfnWppTraceMessage
 * 00000001400446B3: lea     r8, WPP_aa3f12a561783a7e2659a97375f632db_Traceguids
 * 00000001400446BA: mov     rcx, [rcx+18h]
 * 00000001400446BE: mov     r9d, ebx
 * 00000001400446C1: mov     qword ptr [r11-20h], 8
 * 00000001400446C9: mov     [r11-28h], rdx
 * 00000001400446CD: mov     edx, 2Bh ; '+'
 * 00000001400446D2: call    _guard_dispatch_icall
 * 00000001400446D7: and     [rsp+48h+var_10], 0
 * 00000001400446DD: lea     rax, [rsp+48h+arg_28]
 * 00000001400446E2: mov     edx, 2
 * 00000001400446E7: mov     [rsp+48h+var_18], 8
 * 00000001400446F0: mov     [rsp+48h+var_20], rax
 * 00000001400446F5: lea     r9, WPP_aa3f12a561783a7e2659a97375f632db_Traceguids
 * 00000001400446FC: mov     rcx, rdi
 * 00000001400446FF: mov     [rsp+48h+var_28], bx
 * 0000000140044704: lea     r8d, [rdx+2]
 * 0000000140044708: call    cs:__imp_WppAutoLogTrace
 * 000000014004470F: nop     dword ptr [rax+rax+00h]
 * 0000000140044714: mov     rbx, [rsp+48h+arg_0]
 * 0000000140044719: add     rsp, 40h
 * 000000014004471D: pop     rdi
 * 000000014004471E: retn
 */
