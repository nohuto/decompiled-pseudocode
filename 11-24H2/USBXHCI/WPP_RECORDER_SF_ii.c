/*
 * XREFs of WPP_RECORDER_SF_II @ 0x1400445AC
 * Callers:
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x140013E00 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x140042CD0 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1400433E0 (Controller_UcxEvtStopTrackingForTimeSync.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_II @ 0x1400445AC
 * Reason: Hex-Rays returned no pseudocode for 0x1400445AC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400445AC: mov     r11, rsp
 * 00000001400445AF: mov     [r11+8], rbx
 * 00000001400445B3: mov     [r11+10h], rsi
 * 00000001400445B7: push    rdi
 * 00000001400445B8: sub     rsp, 50h
 * 00000001400445BC: mov     rdi, rcx
 * 00000001400445BF: movzx   ebx, r9w
 * 00000001400445C3: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001400445CA: mov     esi, 8
 * 00000001400445CF: mov     eax, [rcx+2Ch]
 * 00000001400445D2: test    sil, al
 * 00000001400445D5: jz      short loc_140044617
 * 00000001400445D7: cmp     byte ptr [rcx+29h], 2
 * 00000001400445DB: jb      short loc_140044617
 * 00000001400445DD: and     qword ptr [r11-18h], 0
 * 00000001400445E2: lea     rdx, [r11+38h]
 * 00000001400445E6: mov     rax, cs:pfnWppTraceMessage
 * 00000001400445ED: lea     r8, WPP_aa3f12a561783a7e2659a97375f632db_Traceguids
 * 00000001400445F4: mov     rcx, [rcx+18h]
 * 00000001400445F8: mov     r9d, ebx
 * 00000001400445FB: mov     [r11-20h], rsi
 * 00000001400445FF: mov     [r11-28h], rdx
 * 0000000140044603: lea     rdx, [r11+30h]
 * 0000000140044607: mov     [r11-30h], rsi
 * 000000014004460B: mov     [r11-38h], rdx
 * 000000014004460F: lea     edx, [rsi+23h]
 * 0000000140044612: call    _guard_dispatch_icall
 * 0000000140044617: and     [rsp+58h+var_10], 0
 * 000000014004461D: lea     rax, [rsp+58h+arg_30]
 * 0000000140044625: mov     [rsp+58h+var_18], rsi
 * 000000014004462A: lea     r9, WPP_aa3f12a561783a7e2659a97375f632db_Traceguids
 * 0000000140044631: mov     [rsp+58h+var_20], rax
 * 0000000140044636: mov     edx, 2
 * 000000014004463B: lea     rax, [rsp+58h+arg_28]
 * 0000000140044643: mov     [rsp+58h+var_28], rsi
 * 0000000140044648: mov     [rsp+58h+var_30], rax
 * 000000014004464D: mov     rcx, rdi
 * 0000000140044650: mov     [rsp+58h+var_38], bx
 * 0000000140044655: lea     r8d, [rdx+2]
 * 0000000140044659: call    cs:__imp_WppAutoLogTrace
 * 0000000140044660: nop     dword ptr [rax+rax+00h]
 * 0000000140044665: mov     rbx, [rsp+58h+arg_0]
 * 000000014004466A: mov     rsi, [rsp+58h+arg_8]
 * 000000014004466F: add     rsp, 50h
 * 0000000140044673: pop     rdi
 * 0000000140044674: retn
 */
