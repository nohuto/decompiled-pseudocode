/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_dq @ 0x1400188F4
 * Callers:
 *     ?GetMutePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1400154D4 (-GetMutePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSidetoneVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1400159EC (-GetSidetoneVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1400166DC (-GetVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001BB50 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_dq @ 0x1400188F4
 * Reason: Hex-Rays returned no pseudocode for 0x1400188F4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400188F4: mov     r11, rsp
 * 00000001400188F7: mov     [r11+8], rbx
 * 00000001400188FB: mov     [r11+10h], rsi
 * 00000001400188FF: push    rdi
 * 0000000140018900: sub     rsp, 50h
 * 0000000140018904: movzx   ebx, [rsp+58h+arg_30]
 * 000000014001890C: mov     rsi, r9
 * 000000014001890F: mov     dil, r8b
 * 0000000140018912: test    dl, dl
 * 0000000140018914: jz      short loc_140018956
 * 0000000140018916: and     qword ptr [r11-18h], 0
 * 000000014001891B: lea     rdx, [r11+50h]
 * 000000014001891F: mov     rax, cs:pfnWppTraceMessage
 * 0000000140018926: lea     r8, WPP_e329219d3dc83e7ef4f1a166489f6e61_Traceguids
 * 000000014001892D: mov     qword ptr [r11-20h], 8
 * 0000000140018935: mov     r9d, ebx
 * 0000000140018938: mov     [r11-28h], rdx
 * 000000014001893C: lea     rdx, [r11+48h]
 * 0000000140018940: mov     qword ptr [r11-30h], 4
 * 0000000140018948: mov     [r11-38h], rdx
 * 000000014001894C: mov     edx, 2Bh ; '+'
 * 0000000140018951: call    _guard_dispatch_icall
 * 0000000140018956: test    dil, dil
 * 0000000140018959: jz      short loc_1400189AE
 * 000000014001895B: and     [rsp+58h+var_10], 0
 * 0000000140018961: lea     rax, [rsp+58h+arg_48]
 * 0000000140018969: mov     [rsp+58h+var_18], 8
 * 0000000140018972: lea     r9, WPP_e329219d3dc83e7ef4f1a166489f6e61_Traceguids
 * 0000000140018979: mov     [rsp+58h+var_20], rax
 * 000000014001897E: xor     edx, edx
 * 0000000140018980: lea     rax, [rsp+58h+arg_40]
 * 0000000140018988: mov     [rsp+58h+var_28], 4
 * 0000000140018991: mov     [rsp+58h+var_30], rax
 * 0000000140018996: mov     rcx, rsi
 * 0000000140018999: mov     [rsp+58h+var_38], bx
 * 000000014001899E: lea     r8d, [rdx+9]
 * 00000001400189A2: call    cs:__imp_WppAutoLogTrace
 * 00000001400189A9: nop     dword ptr [rax+rax+00h]
 * 00000001400189AE: mov     rbx, [rsp+58h+arg_0]
 * 00000001400189B3: mov     rsi, [rsp+58h+arg_8]
 * 00000001400189B8: add     rsp, 50h
 * 00000001400189BC: pop     rdi
 * 00000001400189BD: retn
 */
