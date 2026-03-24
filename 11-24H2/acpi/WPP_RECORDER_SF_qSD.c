/*
 * XREFs of WPP_RECORDER_SF_qsD @ 0x1400600F0
 * Callers:
 *     ExternalRequestBiosNameDeviceAssociation @ 0x14009D610 (ExternalRequestBiosNameDeviceAssociation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qsD @ 0x1400600F0
 * Reason: Hex-Rays returned no pseudocode for 0x1400600F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400600F0: mov     [rsp+arg_0], rbx
 * 00000001400600F5: mov     [rsp+arg_8], rsi
 * 00000001400600FA: mov     [rsp+arg_10], rdi
 * 00000001400600FF: push    r13
 * 0000000140060101: sub     rsp, 60h
 * 0000000140060105: mov     rdx, cs:WPP_GLOBAL_Control
 * 000000014006010C: lea     r13, aNull; "NULL"
 * 0000000140060113: mov     rdi, [rsp+68h+arg_30]
 * 000000014006011B: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 000000014006011F: mov     rsi, rcx
 * 0000000140060122: test    dword ptr [rdx+2Ch], 100000h
 * 0000000140060129: lea     r9d, [rbx+0Eh]
 * 000000014006012D: jz      loc_1400601C7
 * 0000000140060133: cmp     byte ptr [rdx+29h], 2
 * 0000000140060137: jb      loc_1400601C7
 * 000000014006013D: test    rdi, rdi
 * 0000000140060140: jz      short loc_140060153
 * 0000000140060142: mov     rdx, rbx
 * 0000000140060145: inc     rdx
 * 0000000140060148: cmp     byte ptr [rdi+rdx], 0
 * 000000014006014C: jnz     short loc_140060145
 * 000000014006014E: inc     rdx
 * 0000000140060151: jmp     short loc_140060158
 * 0000000140060153: mov     edx, 5
 * 0000000140060158: mov     rax, cs:pfnWppTraceMessage
 * 000000014006015F: lea     r8, [rsp+68h+arg_38]
 * 0000000140060167: test    rdi, rdi
 * 000000014006016A: mov     rcx, rdi
 * 000000014006016D: cmovz   rcx, r13
 * 0000000140060171: and     [rsp+68h+var_18], 0
 * 0000000140060177: mov     [rsp+68h+var_20], 4
 * 0000000140060180: mov     [rsp+68h+var_28], r8
 * 0000000140060185: lea     r8, WPP_8cd4999731163fb3621cd0c511e30926_Traceguids
 * 000000014006018C: mov     [rsp+68h+var_30], rdx
 * 0000000140060191: mov     edx, 2Bh ; '+'
 * 0000000140060196: mov     [rsp+68h+var_38], rcx
 * 000000014006019B: lea     rcx, [rsp+68h+arg_28]
 * 00000001400601A3: mov     [rsp+68h+var_40], 8
 * 00000001400601AC: mov     [rsp+68h+var_48], rcx
 * 00000001400601B1: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001400601B8: mov     rcx, [rcx+18h]
 * 00000001400601BC: call    _guard_dispatch_icall
 * 00000001400601C1: mov     r9d, 0Dh
 * 00000001400601C7: test    rdi, rdi
 * 00000001400601CA: jz      short loc_1400601DA
 * 00000001400601CC: inc     rbx
 * 00000001400601CF: cmp     byte ptr [rdi+rbx], 0
 * 00000001400601D3: jnz     short loc_1400601CC
 * 00000001400601D5: inc     rbx
 * 00000001400601D8: jmp     short loc_1400601DF
 * 00000001400601DA: mov     ebx, 5
 * 00000001400601DF: test    rdi, rdi
 * 00000001400601E2: lea     rax, [rsp+68h+arg_38]
 * 00000001400601EA: mov     edx, 2
 * 00000001400601EF: mov     rcx, rsi
 * 00000001400601F2: cmovz   rdi, r13
 * 00000001400601F6: and     [rsp+68h+var_10], 0
 * 00000001400601FC: mov     [rsp+68h+var_18], 4
 * 0000000140060205: mov     [rsp+68h+var_20], rax
 * 000000014006020A: lea     rax, [rsp+68h+arg_28]
 * 0000000140060212: mov     [rsp+68h+var_28], rbx
 * 0000000140060217: lea     r8d, [rdx+13h]
 * 000000014006021B: mov     [rsp+68h+var_30], rdi
 * 0000000140060220: mov     [rsp+68h+var_38], 8
 * 0000000140060229: mov     [rsp+68h+var_40], rax
 * 000000014006022E: mov     word ptr [rsp+68h+var_48], r9w
 * 0000000140060234: lea     r9, WPP_8cd4999731163fb3621cd0c511e30926_Traceguids
 * 000000014006023B: call    cs:__imp_WppAutoLogTrace
 * 0000000140060242: nop     dword ptr [rax+rax+00h]
 * 0000000140060247: lea     r11, [rsp+68h+var_8]
 * 000000014006024C: mov     rbx, [r11+10h]
 * 0000000140060250: mov     rsi, [r11+18h]
 * 0000000140060254: mov     rdi, [r11+20h]
 * 0000000140060258: mov     rsp, r11
 * 000000014006025B: pop     r13
 * 000000014006025D: retn
 */
