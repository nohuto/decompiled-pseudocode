/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_ii @ 0x1400088B0
 * Callers:
 *     USBType1RenderBytePosition @ 0x140001010 (USBType1RenderBytePosition.c)
 *     USBCaptureBytePosition @ 0x140001530 (USBCaptureBytePosition.c)
 *     PropertyGetAudioPositionEx @ 0x14003A980 (PropertyGetAudioPositionEx.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001BB50 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_ii @ 0x1400088B0
 * Reason: Hex-Rays returned no pseudocode for 0x1400088B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400088B0: mov     r11, rsp
 * 00000001400088B3: mov     [r11+8], rbx
 * 00000001400088B7: mov     [r11+10h], rbp
 * 00000001400088BB: mov     [r11+18h], rsi
 * 00000001400088BF: push    rdi
 * 00000001400088C0: sub     rsp, 50h
 * 00000001400088C4: movzx   ebx, [rsp+58h+arg_30]
 * 00000001400088CC: mov     rsi, r9
 * 00000001400088CF: mov     dil, r8b
 * 00000001400088D2: mov     ebp, 8
 * 00000001400088D7: test    dl, dl
 * 00000001400088D9: jz      short loc_140008912
 * 00000001400088DB: and     qword ptr [r11-18h], 0
 * 00000001400088E0: lea     rdx, [r11+50h]
 * 00000001400088E4: mov     rax, cs:pfnWppTraceMessage
 * 00000001400088EB: mov     r9d, ebx
 * 00000001400088EE: mov     r8, [rsp+58h+arg_38]
 * 00000001400088F6: mov     [r11-20h], rbp
 * 00000001400088FA: mov     [r11-28h], rdx
 * 00000001400088FE: lea     rdx, [r11+48h]
 * 0000000140008902: mov     [r11-30h], rbp
 * 0000000140008906: mov     [r11-38h], rdx
 * 000000014000890A: lea     edx, [rbp+23h]
 * 000000014000890D: call    _guard_dispatch_icall
 * 0000000140008912: test    dil, dil
 * 0000000140008915: jz      short loc_140008963
 * 0000000140008917: and     [rsp+58h+var_10], 0
 * 000000014000891D: lea     rax, [rsp+58h+arg_48]
 * 0000000140008925: mov     r9, [rsp+58h+arg_38]
 * 000000014000892D: xor     edx, edx
 * 000000014000892F: mov     [rsp+58h+var_18], rbp
 * 0000000140008934: mov     rcx, rsi
 * 0000000140008937: mov     [rsp+58h+var_20], rax
 * 000000014000893C: lea     rax, [rsp+58h+arg_40]
 * 0000000140008944: mov     [rsp+58h+var_28], rbp
 * 0000000140008949: mov     [rsp+58h+var_30], rax
 * 000000014000894E: lea     r8d, [rdx+3]
 * 0000000140008952: mov     [rsp+58h+var_38], bx
 * 0000000140008957: call    cs:__imp_WppAutoLogTrace
 * 000000014000895E: nop     dword ptr [rax+rax+00h]
 * 0000000140008963: mov     rbx, [rsp+58h+arg_0]
 * 0000000140008968: mov     rbp, [rsp+58h+arg_8]
 * 000000014000896D: mov     rsi, [rsp+58h+arg_10]
 * 0000000140008972: add     rsp, 50h
 * 0000000140008976: pop     rdi
 * 0000000140008977: retn
 */
