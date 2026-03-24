/*
 * XREFs of WPP_RECORDER_SF_qL @ 0x1C00029E0
 * Callers:
 *     MouseClassServiceCallback @ 0x1C00018A0 (MouseClassServiceCallback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1C0006B20 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qL @ 0x1C00029E0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00029E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00029E0: mov     r11, rsp
 * 00000001C00029E3: mov     [r11+8], rbx
 * 00000001C00029E7: mov     [r11+10h], rsi
 * 00000001C00029EB: push    rdi
 * 00000001C00029EC: sub     rsp, 50h
 * 00000001C00029F0: mov     rbx, rcx
 * 00000001C00029F3: xor     edi, edi
 * 00000001C00029F5: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00029FC: mov     esi, 35h ; '5'
 * 00000001C0002A01: mov     eax, [rcx+2Ch]
 * 00000001C0002A04: test    al, 4
 * 00000001C0002A06: jz      short loc_1C0002A4F
 * 00000001C0002A08: cmp     byte ptr [rcx+29h], 5
 * 00000001C0002A0C: jb      short loc_1C0002A4F
 * 00000001C0002A0E: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0002A15: lea     rdx, [r11+38h]
 * 00000001C0002A19: mov     rcx, [rcx+18h]
 * 00000001C0002A1D: lea     r8, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0002A24: mov     [r11-18h], rdi
 * 00000001C0002A28: mov     r9d, esi
 * 00000001C0002A2B: mov     qword ptr [r11-20h], 4
 * 00000001C0002A33: mov     [r11-28h], rdx
 * 00000001C0002A37: lea     rdx, [r11+30h]
 * 00000001C0002A3B: mov     qword ptr [r11-30h], 8
 * 00000001C0002A43: mov     [r11-38h], rdx
 * 00000001C0002A47: lea     edx, [rsi-0Ah]
 * 00000001C0002A4A: call    _guard_dispatch_icall
 * 00000001C0002A4F: mov     [rsp+58h+var_10], rdi
 * 00000001C0002A54: lea     rax, [rsp+58h+arg_30]
 * 00000001C0002A5C: mov     [rsp+58h+var_18], 4
 * 00000001C0002A65: lea     r9, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0002A6C: mov     [rsp+58h+var_20], rax
 * 00000001C0002A71: mov     edx, 5
 * 00000001C0002A76: lea     rax, [rsp+58h+arg_28]
 * 00000001C0002A7E: mov     [rsp+58h+var_28], 8
 * 00000001C0002A87: mov     [rsp+58h+var_30], rax
 * 00000001C0002A8C: mov     rcx, rbx
 * 00000001C0002A8F: mov     [rsp+58h+var_38], si
 * 00000001C0002A94: lea     r8d, [rdx-2]
 * 00000001C0002A98: call    cs:__imp_WppAutoLogTrace
 * 00000001C0002A9F: nop     dword ptr [rax+rax+00h]
 * 00000001C0002AA4: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0002AA9: mov     rsi, [rsp+58h+arg_8]
 * 00000001C0002AAE: add     rsp, 50h
 * 00000001C0002AB2: pop     rdi
 * 00000001C0002AB3: retn
 */
