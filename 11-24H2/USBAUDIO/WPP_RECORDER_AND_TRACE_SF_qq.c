/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qq @ 0x14000C6A8
 * Callers:
 *     ?CloseAllPinInstances@CSidebandDevice@@UEAAJXZ @ 0x14000ED30 (-CloseAllPinInstances@CSidebandDevice@@UEAAJXZ.c)
 *     DeviceRequestPowerUp @ 0x14004007C (DeviceRequestPowerUp.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001BB50 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qq @ 0x14000C6A8
 * Reason: Hex-Rays returned no pseudocode for 0x14000C6A8
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014000C6A8: mov     r11, rsp
 * 000000014000C6AB: mov     [r11+8], rbx
 * 000000014000C6AF: mov     [r11+10h], rbp
 * 000000014000C6B3: mov     [r11+18h], rsi
 * 000000014000C6B7: push    rdi
 * 000000014000C6B8: sub     rsp, 50h
 * 000000014000C6BC: movzx   ebx, [rsp+58h+arg_30]
 * 000000014000C6C4: mov     rsi, r9
 * 000000014000C6C7: mov     dil, r8b
 * 000000014000C6CA: mov     ebp, 8
 * 000000014000C6CF: test    dl, dl
 * 000000014000C6D1: jz      short loc_14000C70A
 * 000000014000C6D3: and     qword ptr [r11-18h], 0
 * 000000014000C6D8: lea     rdx, [r11+50h]
 * 000000014000C6DC: mov     rax, cs:pfnWppTraceMessage
 * 000000014000C6E3: mov     r9d, ebx
 * 000000014000C6E6: mov     r8, [rsp+58h+arg_38]
 * 000000014000C6EE: mov     [r11-20h], rbp
 * 000000014000C6F2: mov     [r11-28h], rdx
 * 000000014000C6F6: lea     rdx, [r11+48h]
 * 000000014000C6FA: mov     [r11-30h], rbp
 * 000000014000C6FE: mov     [r11-38h], rdx
 * 000000014000C702: lea     edx, [rbp+23h]
 * 000000014000C705: call    _guard_dispatch_icall
 * 000000014000C70A: test    dil, dil
 * 000000014000C70D: jz      short loc_14000C75F
 * 000000014000C70F: and     [rsp+58h+var_10], 0
 * 000000014000C715: lea     rax, [rsp+58h+arg_48]
 * 000000014000C71D: mov     r9, [rsp+58h+arg_38]
 * 000000014000C725: xor     edx, edx
 * 000000014000C727: mov     r8d, [rsp+58h+arg_28]
 * 000000014000C72F: mov     rcx, rsi
 * 000000014000C732: mov     [rsp+58h+var_18], rbp
 * 000000014000C737: mov     [rsp+58h+var_20], rax
 * 000000014000C73C: lea     rax, [rsp+58h+arg_40]
 * 000000014000C744: mov     [rsp+58h+var_28], rbp
 * 000000014000C749: mov     [rsp+58h+var_30], rax
 * 000000014000C74E: mov     [rsp+58h+var_38], bx
 * 000000014000C753: call    cs:__imp_WppAutoLogTrace
 * 000000014000C75A: nop     dword ptr [rax+rax+00h]
 * 000000014000C75F: mov     rbx, [rsp+58h+arg_0]
 * 000000014000C764: mov     rbp, [rsp+58h+arg_8]
 * 000000014000C769: mov     rsi, [rsp+58h+arg_10]
 * 000000014000C76E: add     rsp, 50h
 * 000000014000C772: pop     rdi
 * 000000014000C773: retn
 */
