/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_di @ 0x14000D704
 * Callers:
 *     USBType1RenderBytePosition @ 0x140001010 (USBType1RenderBytePosition.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001BB50 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_di @ 0x14000D704
 * Reason: Hex-Rays returned no pseudocode for 0x14000D704
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014000D704: mov     r11, rsp
 * 000000014000D707: mov     [r11+8], rbx
 * 000000014000D70B: mov     [r11+10h], rdi
 * 000000014000D70F: push    r14
 * 000000014000D711: sub     rsp, 50h
 * 000000014000D715: mov     rdi, r9
 * 000000014000D718: mov     bl, r8b
 * 000000014000D71B: mov     r14d, 0Bh
 * 000000014000D721: test    dl, dl
 * 000000014000D723: jz      short loc_14000D764
 * 000000014000D725: and     qword ptr [r11-18h], 0
 * 000000014000D72A: lea     rdx, [r11+50h]
 * 000000014000D72E: mov     rax, cs:pfnWppTraceMessage
 * 000000014000D735: lea     r8, WPP_f0d25a81eb873d2c4a08e4f8b28fc432_Traceguids
 * 000000014000D73C: mov     qword ptr [r11-20h], 8
 * 000000014000D744: mov     r9d, r14d
 * 000000014000D747: mov     [r11-28h], rdx
 * 000000014000D74B: lea     rdx, [r11+48h]
 * 000000014000D74F: mov     qword ptr [r11-30h], 4
 * 000000014000D757: mov     [r11-38h], rdx
 * 000000014000D75B: lea     edx, [r14+20h]
 * 000000014000D75F: call    _guard_dispatch_icall
 * 000000014000D764: test    bl, bl
 * 000000014000D766: jz      short loc_14000D7BC
 * 000000014000D768: and     [rsp+58h+var_10], 0
 * 000000014000D76E: lea     rax, [rsp+58h+arg_48]
 * 000000014000D776: mov     [rsp+58h+var_18], 8
 * 000000014000D77F: lea     r9, WPP_f0d25a81eb873d2c4a08e4f8b28fc432_Traceguids
 * 000000014000D786: mov     [rsp+58h+var_20], rax
 * 000000014000D78B: xor     edx, edx
 * 000000014000D78D: lea     rax, [rsp+58h+arg_40]
 * 000000014000D795: mov     [rsp+58h+var_28], 4
 * 000000014000D79E: mov     [rsp+58h+var_30], rax
 * 000000014000D7A3: mov     rcx, rdi
 * 000000014000D7A6: mov     [rsp+58h+var_38], r14w
 * 000000014000D7AC: lea     r8d, [rdx+3]
 * 000000014000D7B0: call    cs:__imp_WppAutoLogTrace
 * 000000014000D7B7: nop     dword ptr [rax+rax+00h]
 * 000000014000D7BC: mov     rbx, [rsp+58h+arg_0]
 * 000000014000D7C1: mov     rdi, [rsp+58h+arg_8]
 * 000000014000D7C6: add     rsp, 50h
 * 000000014000D7CA: pop     r14
 * 000000014000D7CC: retn
 */
