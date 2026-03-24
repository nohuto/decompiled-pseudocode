/*
 * XREFs of WPP_RECORDER_SF_dqs @ 0x14005D21C
 * Callers:
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4EnumPowerNodes @ 0x1400424F0 (ACPIDevicePowerProcessPhase1DeviceSubPhase4EnumPowerNodes.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqs @ 0x14005D21C
 * Reason: Hex-Rays returned no pseudocode for 0x14005D21C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014005D21C: mov     [rsp+arg_0], rbx
 * 000000014005D221: mov     [rsp+arg_8], rsi
 * 000000014005D226: mov     [rsp+arg_10], rdi
 * 000000014005D22B: push    r13
 * 000000014005D22D: sub     rsp, 60h
 * 000000014005D231: mov     rdx, cs:WPP_GLOBAL_Control
 * 000000014005D238: lea     r13, aNull; "NULL"
 * 000000014005D23F: mov     rdi, [rsp+68h+arg_38]
 * 000000014005D247: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 000000014005D24B: mov     rsi, rcx
 * 000000014005D24E: test    dword ptr [rdx+2Ch], 200h
 * 000000014005D255: lea     r8d, [rbx+3Dh]
 * 000000014005D259: jz      loc_14005D2F6
 * 000000014005D25F: cmp     byte ptr [rdx+29h], 4
 * 000000014005D263: jb      loc_14005D2F6
 * 000000014005D269: test    rdi, rdi
 * 000000014005D26C: jz      short loc_14005D27F
 * 000000014005D26E: mov     rdx, rbx
 * 000000014005D271: inc     rdx
 * 000000014005D274: cmp     byte ptr [rdi+rdx], 0
 * 000000014005D278: jnz     short loc_14005D271
 * 000000014005D27A: inc     rdx
 * 000000014005D27D: jmp     short loc_14005D284
 * 000000014005D27F: mov     edx, 5
 * 000000014005D284: mov     rax, cs:pfnWppTraceMessage
 * 000000014005D28B: test    rdi, rdi
 * 000000014005D28E: mov     r9d, r8d
 * 000000014005D291: mov     rcx, rdi
 * 000000014005D294: cmovz   rcx, r13
 * 000000014005D298: lea     r8, WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids
 * 000000014005D29F: and     [rsp+68h+var_18], 0
 * 000000014005D2A5: mov     [rsp+68h+var_20], rdx
 * 000000014005D2AA: mov     edx, 2Bh ; '+'
 * 000000014005D2AF: mov     [rsp+68h+var_28], rcx
 * 000000014005D2B4: lea     rcx, [rsp+68h+arg_30]
 * 000000014005D2BC: mov     [rsp+68h+var_30], 8
 * 000000014005D2C5: mov     [rsp+68h+var_38], rcx
 * 000000014005D2CA: lea     rcx, [rsp+68h+arg_28]
 * 000000014005D2D2: mov     [rsp+68h+var_40], 4
 * 000000014005D2DB: mov     [rsp+68h+var_48], rcx
 * 000000014005D2E0: mov     rcx, cs:WPP_GLOBAL_Control
 * 000000014005D2E7: mov     rcx, [rcx+18h]
 * 000000014005D2EB: call    _guard_dispatch_icall
 * 000000014005D2F0: mov     r8d, 3Ch ; '<'
 * 000000014005D2F6: test    rdi, rdi
 * 000000014005D2F9: jz      short loc_14005D309
 * 000000014005D2FB: inc     rbx
 * 000000014005D2FE: cmp     byte ptr [rdi+rbx], 0
 * 000000014005D302: jnz     short loc_14005D2FB
 * 000000014005D304: inc     rbx
 * 000000014005D307: jmp     short loc_14005D30E
 * 000000014005D309: mov     ebx, 5
 * 000000014005D30E: test    rdi, rdi
 * 000000014005D311: lea     rax, [rsp+68h+arg_30]
 * 000000014005D319: mov     edx, 4
 * 000000014005D31E: lea     r9, WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids
 * 000000014005D325: cmovz   rdi, r13
 * 000000014005D329: mov     rcx, rsi
 * 000000014005D32C: and     [rsp+68h+var_10], 0
 * 000000014005D332: mov     [rsp+68h+var_18], rbx
 * 000000014005D337: mov     [rsp+68h+var_20], rdi
 * 000000014005D33C: mov     [rsp+68h+var_28], 8
 * 000000014005D345: mov     [rsp+68h+var_30], rax
 * 000000014005D34A: lea     rax, [rsp+68h+arg_28]
 * 000000014005D352: mov     [rsp+68h+var_38], 4
 * 000000014005D35B: mov     [rsp+68h+var_40], rax
 * 000000014005D360: mov     word ptr [rsp+68h+var_48], r8w
 * 000000014005D366: lea     r8d, [rdx+6]
 * 000000014005D36A: call    cs:__imp_WppAutoLogTrace
 * 000000014005D371: nop     dword ptr [rax+rax+00h]
 * 000000014005D376: lea     r11, [rsp+68h+var_8]
 * 000000014005D37B: mov     rbx, [r11+10h]
 * 000000014005D37F: mov     rsi, [r11+18h]
 * 000000014005D383: mov     rdi, [r11+20h]
 * 000000014005D387: mov     rsp, r11
 * 000000014005D38A: pop     r13
 * 000000014005D38C: retn
 */
