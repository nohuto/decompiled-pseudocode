/*
 * XREFs of WPP_RECORDER_SF__guid_ @ 0x1400352FC
 * Callers:
 *     Controller_UcxEvtQueryUsbCapability @ 0x140036A80 (Controller_UcxEvtQueryUsbCapability.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF__guid_ @ 0x1400352FC
 * Reason: Hex-Rays returned no pseudocode for 0x1400352FC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400352FC: mov     r11, rsp
 * 00000001400352FF: mov     [r11+8], rbx
 * 0000000140035303: mov     [r11+10h], rsi
 * 0000000140035307: push    rdi
 * 0000000140035308: sub     rsp, 40h
 * 000000014003530C: mov     rdi, [rsp+48h+arg_28]
 * 0000000140035311: mov     rsi, rcx
 * 0000000140035314: mov     rcx, cs:WPP_GLOBAL_Control
 * 000000014003531B: movzx   ebx, r9w
 * 000000014003531F: mov     eax, [rcx+2Ch]
 * 0000000140035322: test    al, 8
 * 0000000140035324: jz      short loc_14003535C
 * 0000000140035326: cmp     byte ptr [rcx+29h], 4
 * 000000014003532A: jb      short loc_14003535C
 * 000000014003532C: and     qword ptr [r11-18h], 0
 * 0000000140035331: lea     r8, WPP_aa3f12a561783a7e2659a97375f632db_Traceguids
 * 0000000140035338: mov     rax, cs:pfnWppTraceMessage
 * 000000014003533F: mov     r9d, ebx
 * 0000000140035342: mov     rcx, [rcx+18h]
 * 0000000140035346: mov     edx, 2Bh ; '+'
 * 000000014003534B: mov     qword ptr [r11-20h], 10h
 * 0000000140035353: mov     [r11-28h], rdi
 * 0000000140035357: call    _guard_dispatch_icall
 * 000000014003535C: and     [rsp+48h+var_10], 0
 * 0000000140035362: lea     r9, WPP_aa3f12a561783a7e2659a97375f632db_Traceguids
 * 0000000140035369: mov     edx, 4
 * 000000014003536E: mov     [rsp+48h+var_18], 10h
 * 0000000140035377: mov     [rsp+48h+var_20], rdi
 * 000000014003537C: mov     r8d, edx
 * 000000014003537F: mov     rcx, rsi
 * 0000000140035382: mov     [rsp+48h+var_28], bx
 * 0000000140035387: call    cs:__imp_WppAutoLogTrace
 * 000000014003538E: nop     dword ptr [rax+rax+00h]
 * 0000000140035393: mov     rbx, [rsp+48h+arg_0]
 * 0000000140035398: mov     rsi, [rsp+48h+arg_8]
 * 000000014003539D: add     rsp, 40h
 * 00000001400353A1: pop     rdi
 * 00000001400353A2: retn
 */
