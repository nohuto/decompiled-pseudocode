/*
 * XREFs of WPP_RECORDER_SF_qL @ 0x1C00064C0
 * Callers:
 *     KeyboardClassServiceCallback @ 0x1C00022E0 (KeyboardClassServiceCallback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1C00072D0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qL @ 0x1C00064C0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00064C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00064C0: mov     r11, rsp
 * 00000001C00064C3: mov     [r11+8], rbx
 * 00000001C00064C7: push    rbp
 * 00000001C00064C8: sub     rsp, 50h
 * 00000001C00064CC: mov     rbx, rcx
 * 00000001C00064CF: mov     ebp, 36h ; '6'
 * 00000001C00064D4: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00064DB: mov     eax, [rcx+2Ch]
 * 00000001C00064DE: test    al, 4
 * 00000001C00064E0: jz      short loc_1C000652A
 * 00000001C00064E2: cmp     byte ptr [rcx+29h], 5
 * 00000001C00064E6: jb      short loc_1C000652A
 * 00000001C00064E8: and     qword ptr [r11-18h], 0
 * 00000001C00064ED: lea     rdx, [r11+38h]
 * 00000001C00064F1: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00064F8: lea     r8, WPP_1b6d0084df9f3ca48f318fdd34bf6db2_Traceguids
 * 00000001C00064FF: mov     rcx, [rcx+18h]
 * 00000001C0006503: mov     r9d, ebp
 * 00000001C0006506: mov     qword ptr [r11-20h], 4
 * 00000001C000650E: mov     [r11-28h], rdx
 * 00000001C0006512: lea     rdx, [r11+30h]
 * 00000001C0006516: mov     qword ptr [r11-30h], 8
 * 00000001C000651E: mov     [r11-38h], rdx
 * 00000001C0006522: lea     edx, [rbp-0Bh]
 * 00000001C0006525: call    _guard_dispatch_icall
 * 00000001C000652A: and     [rsp+58h+var_10], 0
 * 00000001C0006530: lea     rax, [rsp+58h+arg_30]
 * 00000001C0006538: mov     [rsp+58h+var_18], 4
 * 00000001C0006541: lea     r9, WPP_1b6d0084df9f3ca48f318fdd34bf6db2_Traceguids
 * 00000001C0006548: mov     [rsp+58h+var_20], rax
 * 00000001C000654D: mov     edx, 5
 * 00000001C0006552: lea     rax, [rsp+58h+arg_28]
 * 00000001C000655A: mov     [rsp+58h+var_28], 8
 * 00000001C0006563: mov     [rsp+58h+var_30], rax
 * 00000001C0006568: mov     rcx, rbx
 * 00000001C000656B: mov     [rsp+58h+var_38], bp
 * 00000001C0006570: lea     r8d, [rdx-2]
 * 00000001C0006574: call    cs:__imp_WppAutoLogTrace
 * 00000001C000657B: nop     dword ptr [rax+rax+00h]
 * 00000001C0006580: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0006585: add     rsp, 50h
 * 00000001C0006589: pop     rbp
 * 00000001C000658A: retn
 */
