/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_id @ 0x14000E0E4
 * Callers:
 *     USBType1RenderBytePosition @ 0x140001010 (USBType1RenderBytePosition.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C680 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_id @ 0x14000E0E4
 * Reason: Hex-Rays returned no pseudocode for 0x14000E0E4
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014000E0E4: mov     r11, rsp
 * 000000014000E0E7: mov     [r11+8], rbx
 * 000000014000E0EB: mov     [r11+10h], rdi
 * 000000014000E0EF: push    r14
 * 000000014000E0F1: sub     rsp, 50h
 * 000000014000E0F5: mov     rdi, r9
 * 000000014000E0F8: mov     bl, r8b
 * 000000014000E0FB: mov     r14d, 0Ch
 * 000000014000E101: test    dl, dl
 * 000000014000E103: jz      short loc_14000E144
 * 000000014000E105: and     qword ptr [r11-18h], 0
 * 000000014000E10A: lea     rdx, [r11+50h]
 * 000000014000E10E: mov     rax, cs:pfnWppTraceMessage
 * 000000014000E115: lea     r8, WPP_f0d25a81eb873d2c4a08e4f8b28fc432_Traceguids
 * 000000014000E11C: mov     qword ptr [r11-20h], 4
 * 000000014000E124: mov     r9d, r14d
 * 000000014000E127: mov     [r11-28h], rdx
 * 000000014000E12B: lea     rdx, [r11+48h]
 * 000000014000E12F: mov     qword ptr [r11-30h], 8
 * 000000014000E137: mov     [r11-38h], rdx
 * 000000014000E13B: lea     edx, [r14+1Fh]
 * 000000014000E13F: call    _guard_dispatch_icall
 * 000000014000E144: test    bl, bl
 * 000000014000E146: jz      short loc_14000E19C
 * 000000014000E148: and     [rsp+58h+var_10], 0
 * 000000014000E14E: lea     rax, [rsp+58h+arg_48]
 * 000000014000E156: mov     [rsp+58h+var_18], 4
 * 000000014000E15F: lea     r9, WPP_f0d25a81eb873d2c4a08e4f8b28fc432_Traceguids
 * 000000014000E166: mov     [rsp+58h+var_20], rax
 * 000000014000E16B: xor     edx, edx
 * 000000014000E16D: lea     rax, [rsp+58h+arg_40]
 * 000000014000E175: mov     [rsp+58h+var_28], 8
 * 000000014000E17E: mov     [rsp+58h+var_30], rax
 * 000000014000E183: mov     rcx, rdi
 * 000000014000E186: mov     [rsp+58h+var_38], r14w
 * 000000014000E18C: lea     r8d, [rdx+3]
 * 000000014000E190: call    cs:__imp_WppAutoLogTrace
 * 000000014000E197: nop     dword ptr [rax+rax+00h]
 * 000000014000E19C: mov     rbx, [rsp+58h+arg_0]
 * 000000014000E1A1: mov     rdi, [rsp+58h+arg_8]
 * 000000014000E1A6: add     rsp, 50h
 * 000000014000E1AA: pop     r14
 * 000000014000E1AC: retn
 */
