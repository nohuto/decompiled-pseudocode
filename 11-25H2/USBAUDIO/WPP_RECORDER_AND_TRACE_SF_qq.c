/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qq @ 0x14000C584
 * Callers:
 *     ?CloseAllPinInstances@CSidebandDevice@@UEAAJXZ @ 0x14000F640 (-CloseAllPinInstances@CSidebandDevice@@UEAAJXZ.c)
 *     DeviceRequestPowerUp @ 0x14004083C (DeviceRequestPowerUp.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C680 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qq @ 0x14000C584
 * Reason: Hex-Rays returned no pseudocode for 0x14000C584
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014000C584: mov     r11, rsp
 * 000000014000C587: mov     [r11+8], rbx
 * 000000014000C58B: mov     [r11+10h], rbp
 * 000000014000C58F: mov     [r11+18h], rsi
 * 000000014000C593: push    rdi
 * 000000014000C594: sub     rsp, 50h
 * 000000014000C598: movzx   ebx, [rsp+58h+arg_30]
 * 000000014000C5A0: mov     rsi, r9
 * 000000014000C5A3: mov     dil, r8b
 * 000000014000C5A6: mov     ebp, 8
 * 000000014000C5AB: test    dl, dl
 * 000000014000C5AD: jz      short loc_14000C5E6
 * 000000014000C5AF: and     qword ptr [r11-18h], 0
 * 000000014000C5B4: lea     rdx, [r11+50h]
 * 000000014000C5B8: mov     rax, cs:pfnWppTraceMessage
 * 000000014000C5BF: mov     r9d, ebx
 * 000000014000C5C2: mov     r8, [rsp+58h+arg_38]
 * 000000014000C5CA: mov     [r11-20h], rbp
 * 000000014000C5CE: mov     [r11-28h], rdx
 * 000000014000C5D2: lea     rdx, [r11+48h]
 * 000000014000C5D6: mov     [r11-30h], rbp
 * 000000014000C5DA: mov     [r11-38h], rdx
 * 000000014000C5DE: lea     edx, [rbp+23h]
 * 000000014000C5E1: call    _guard_dispatch_icall
 * 000000014000C5E6: test    dil, dil
 * 000000014000C5E9: jz      short loc_14000C63B
 * 000000014000C5EB: and     [rsp+58h+var_10], 0
 * 000000014000C5F1: lea     rax, [rsp+58h+arg_48]
 * 000000014000C5F9: mov     r9, [rsp+58h+arg_38]
 * 000000014000C601: xor     edx, edx
 * 000000014000C603: mov     r8d, [rsp+58h+arg_28]
 * 000000014000C60B: mov     rcx, rsi
 * 000000014000C60E: mov     [rsp+58h+var_18], rbp
 * 000000014000C613: mov     [rsp+58h+var_20], rax
 * 000000014000C618: lea     rax, [rsp+58h+arg_40]
 * 000000014000C620: mov     [rsp+58h+var_28], rbp
 * 000000014000C625: mov     [rsp+58h+var_30], rax
 * 000000014000C62A: mov     [rsp+58h+var_38], bx
 * 000000014000C62F: call    cs:__imp_WppAutoLogTrace
 * 000000014000C636: nop     dword ptr [rax+rax+00h]
 * 000000014000C63B: mov     rbx, [rsp+58h+arg_0]
 * 000000014000C640: mov     rbp, [rsp+58h+arg_8]
 * 000000014000C645: mov     rsi, [rsp+58h+arg_10]
 * 000000014000C64A: add     rsp, 50h
 * 000000014000C64E: pop     rdi
 * 000000014000C64F: retn
 */
