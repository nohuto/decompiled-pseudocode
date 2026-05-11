/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_dq @ 0x140019420
 * Callers:
 *     ?GetMutePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140016000 (-GetMutePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSidetoneVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140016518 (-GetSidetoneVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140017208 (-GetVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C680 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_dq @ 0x140019420
 * Reason: Hex-Rays returned no pseudocode for 0x140019420
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140019420: mov     r11, rsp
 * 0000000140019423: mov     [r11+8], rbx
 * 0000000140019427: mov     [r11+10h], rsi
 * 000000014001942B: push    rdi
 * 000000014001942C: sub     rsp, 50h
 * 0000000140019430: movzx   ebx, [rsp+58h+arg_30]
 * 0000000140019438: mov     rsi, r9
 * 000000014001943B: mov     dil, r8b
 * 000000014001943E: test    dl, dl
 * 0000000140019440: jz      short loc_140019482
 * 0000000140019442: and     qword ptr [r11-18h], 0
 * 0000000140019447: lea     rdx, [r11+50h]
 * 000000014001944B: mov     rax, cs:pfnWppTraceMessage
 * 0000000140019452: lea     r8, WPP_e329219d3dc83e7ef4f1a166489f6e61_Traceguids
 * 0000000140019459: mov     qword ptr [r11-20h], 8
 * 0000000140019461: mov     r9d, ebx
 * 0000000140019464: mov     [r11-28h], rdx
 * 0000000140019468: lea     rdx, [r11+48h]
 * 000000014001946C: mov     qword ptr [r11-30h], 4
 * 0000000140019474: mov     [r11-38h], rdx
 * 0000000140019478: mov     edx, 2Bh ; '+'
 * 000000014001947D: call    _guard_dispatch_icall
 * 0000000140019482: test    dil, dil
 * 0000000140019485: jz      short loc_1400194DA
 * 0000000140019487: and     [rsp+58h+var_10], 0
 * 000000014001948D: lea     rax, [rsp+58h+arg_48]
 * 0000000140019495: mov     [rsp+58h+var_18], 8
 * 000000014001949E: lea     r9, WPP_e329219d3dc83e7ef4f1a166489f6e61_Traceguids
 * 00000001400194A5: mov     [rsp+58h+var_20], rax
 * 00000001400194AA: xor     edx, edx
 * 00000001400194AC: lea     rax, [rsp+58h+arg_40]
 * 00000001400194B4: mov     [rsp+58h+var_28], 4
 * 00000001400194BD: mov     [rsp+58h+var_30], rax
 * 00000001400194C2: mov     rcx, rsi
 * 00000001400194C5: mov     [rsp+58h+var_38], bx
 * 00000001400194CA: lea     r8d, [rdx+9]
 * 00000001400194CE: call    cs:__imp_WppAutoLogTrace
 * 00000001400194D5: nop     dword ptr [rax+rax+00h]
 * 00000001400194DA: mov     rbx, [rsp+58h+arg_0]
 * 00000001400194DF: mov     rsi, [rsp+58h+arg_8]
 * 00000001400194E4: add     rsp, 50h
 * 00000001400194E8: pop     rdi
 * 00000001400194E9: retn
 */
