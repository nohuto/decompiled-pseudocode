/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_Ld @ 0x1402205EC
 * Callers:
 *     ?CreateTopologySnapshot@CMonitorTopology@@SAPEAV1@XZ @ 0x14024D2AC (-CreateTopologySnapshot@CMonitorTopology@@SAPEAV1@XZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_Ld @ 0x1402205EC
 * Reason: Hex-Rays returned no pseudocode for 0x1402205EC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402205EC: mov     r11, rsp
 * 00000001402205EF: mov     [r11+8], rbx
 * 00000001402205F3: mov     [r11+10h], rbp
 * 00000001402205F7: mov     [r11+18h], rsi
 * 00000001402205FB: push    rdi
 * 00000001402205FC: sub     rsp, 50h
 * 0000000140220600: mov     ebp, 0Fh
 * 0000000140220605: mov     rdi, r9
 * 0000000140220608: mov     bl, r8b
 * 000000014022060B: lea     esi, [rbp-0Bh]
 * 000000014022060E: test    dl, dl
 * 0000000140220610: jz      short loc_140220648
 * 0000000140220612: and     qword ptr [r11-18h], 0
 * 0000000140220617: lea     rdx, [r11+50h]
 * 000000014022061B: mov     rax, cs:pfnWppTraceMessage
 * 0000000140220622: lea     r8, WPP_f02a4a4a8b293b2feea165eb98bca231_Traceguids
 * 0000000140220629: mov     [r11-20h], rsi
 * 000000014022062D: mov     r9d, ebp
 * 0000000140220630: mov     [r11-28h], rdx
 * 0000000140220634: lea     rdx, [r11+48h]
 * 0000000140220638: mov     [r11-30h], rsi
 * 000000014022063C: mov     [r11-38h], rdx
 * 0000000140220640: lea     edx, [rbp+1Ch]
 * 0000000140220643: call    _guard_dispatch_icall
 * 0000000140220648: test    bl, bl
 * 000000014022064A: jz      short loc_140220699
 * 000000014022064C: and     [rsp+58h+var_10], 0
 * 0000000140220652: lea     rax, [rsp+58h+arg_48]
 * 000000014022065A: mov     [rsp+58h+var_18], rsi
 * 000000014022065F: lea     r9, WPP_f02a4a4a8b293b2feea165eb98bca231_Traceguids
 * 0000000140220666: mov     [rsp+58h+var_20], rax
 * 000000014022066B: mov     r8d, 7
 * 0000000140220671: lea     rax, [rsp+58h+arg_40]
 * 0000000140220679: mov     [rsp+58h+var_28], rsi
 * 000000014022067E: mov     [rsp+58h+var_30], rax
 * 0000000140220683: mov     edx, esi
 * 0000000140220685: mov     rcx, rdi
 * 0000000140220688: mov     [rsp+58h+var_38], bp
 * 000000014022068D: call    cs:__imp_WppAutoLogTrace
 * 0000000140220694: nop     dword ptr [rax+rax+00h]
 * 0000000140220699: mov     rbx, [rsp+58h+arg_0]
 * 000000014022069E: mov     rbp, [rsp+58h+arg_8]
 * 00000001402206A3: mov     rsi, [rsp+58h+arg_10]
 * 00000001402206A8: add     rsp, 50h
 * 00000001402206AC: pop     rdi
 * 00000001402206AD: retn
 */
