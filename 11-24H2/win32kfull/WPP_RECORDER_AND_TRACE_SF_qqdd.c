/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qqdd @ 0x14010F600
 * Callers:
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z @ 0x14010F3F0 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qqdd @ 0x14010F600
 * Reason: Hex-Rays returned no pseudocode for 0x14010F600
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014010F600: mov     [rsp+arg_0], rbx
 * 000000014010F605: mov     [rsp+arg_8], rbp
 * 000000014010F60A: push    rdi
 * 000000014010F60B: sub     rsp, 70h
 * 000000014010F60F: mov     rdi, r9
 * 000000014010F612: movzx   ebx, r8b
 * 000000014010F616: mov     ebp, 1Ah
 * 000000014010F61B: test    dl, dl
 * 000000014010F61D: jnz     loc_14010F6C3
 * 000000014010F623: test    bl, bl
 * 000000014010F625: jz      loc_14010F6B0
 * 000000014010F62B: mov     [rsp+78h+var_10], 0
 * 000000014010F634: lea     rax, [rsp+78h+arg_58]
 * 000000014010F63C: mov     [rsp+78h+var_18], 4
 * 000000014010F645: lea     r9, WPP_097ed2134af63c79f9965b85d38c414a_Traceguids
 * 000000014010F64C: mov     [rsp+78h+var_20], rax
 * 000000014010F651: mov     edx, 4
 * 000000014010F656: mov     [rsp+78h+var_28], 4
 * 000000014010F65F: lea     rax, [rsp+78h+arg_50]
 * 000000014010F667: mov     [rsp+78h+var_30], rax
 * 000000014010F66C: mov     rcx, rdi
 * 000000014010F66F: mov     [rsp+78h+var_38], 8
 * 000000014010F678: lea     rax, [rsp+78h+arg_48]
 * 000000014010F680: mov     [rsp+78h+var_40], rax
 * 000000014010F685: lea     r8d, [rdx+0Eh]
 * 000000014010F689: lea     rax, [rsp+78h+arg_40]
 * 000000014010F691: mov     [rsp+78h+var_48], 8
 * 000000014010F69A: mov     [rsp+78h+var_50], rax
 * 000000014010F69F: mov     word ptr [rsp+78h+var_58], bp
 * 000000014010F6A4: call    cs:__imp_WppAutoLogTrace
 * 000000014010F6AB: nop     dword ptr [rax+rax+00h]
 * 000000014010F6B0: lea     r11, [rsp+78h+var_8]
 * 000000014010F6B5: mov     rbx, [r11+10h]
 * 000000014010F6B9: mov     rbp, [r11+18h]
 * 000000014010F6BD: mov     rsp, r11
 * 000000014010F6C0: pop     rdi
 * 000000014010F6C1: retn
 * 000000014010F6C3: mov     rax, cs:pfnWppTraceMessage
 * 000000014010F6CA: lea     rdx, [rsp+78h+arg_58]
 * 000000014010F6D2: mov     [rsp+78h+var_18], 0
 * 000000014010F6DB: lea     r8, WPP_097ed2134af63c79f9965b85d38c414a_Traceguids
 * 000000014010F6E2: mov     [rsp+78h+var_20], 4
 * 000000014010F6EB: mov     r9d, ebp
 * 000000014010F6EE: mov     [rsp+78h+var_28], rdx
 * 000000014010F6F3: lea     rdx, [rsp+78h+arg_50]
 * 000000014010F6FB: mov     [rsp+78h+var_30], 4
 * 000000014010F704: mov     [rsp+78h+var_38], rdx
 * 000000014010F709: lea     rdx, [rsp+78h+arg_48]
 * 000000014010F711: mov     [rsp+78h+var_40], 8
 * 000000014010F71A: mov     [rsp+78h+var_48], rdx
 * 000000014010F71F: lea     rdx, [rsp+78h+arg_40]
 * 000000014010F727: mov     [rsp+78h+var_50], 8
 * 000000014010F730: mov     [rsp+78h+var_58], rdx
 * 000000014010F735: mov     edx, 2Bh ; '+'
 * 000000014010F73A: call    _guard_dispatch_icall
 * 000000014010F73F: jmp     loc_14010F623
 */
