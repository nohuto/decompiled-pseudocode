/*
 * XREFs of WPP_RECORDER_SF_Lqs @ 0x14005AAC4
 * Callers:
 *     ACPIBuildProcessPowerResourcePhasePep @ 0x140059060 (ACPIBuildProcessPowerResourcePhasePep.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Lqs @ 0x14005AAC4
 * Reason: Hex-Rays returned no pseudocode for 0x14005AAC4
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014005AAC4: mov     rax, rsp
 * 000000014005AAC7: mov     [rax+8], rbx
 * 000000014005AACB: mov     [rax+10h], rbp
 * 000000014005AACF: mov     [rax+18h], rsi
 * 000000014005AAD3: mov     [rax+20h], rdi
 * 000000014005AAD7: push    r14
 * 000000014005AAD9: sub     rsp, 60h
 * 000000014005AADD: mov     r10, cs:WPP_GLOBAL_Control
 * 000000014005AAE4: lea     r8, aNull; "NULL"
 * 000000014005AAEB: mov     rdi, [rsp+68h+arg_38]
 * 000000014005AAF3: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 000000014005AAF7: movzx   ebp, r9w
 * 000000014005AAFB: mov     r14, rcx
 * 000000014005AAFE: movzx   esi, dl
 * 000000014005AB01: mov     eax, [r10+2Ch]
 * 000000014005AB05: test    al, 1
 * 000000014005AB07: jz      loc_14005AB9E
 * 000000014005AB0D: cmp     [r10+29h], sil
 * 000000014005AB11: jb      loc_14005AB9E
 * 000000014005AB17: test    rdi, rdi
 * 000000014005AB1A: jz      short loc_14005AB2D
 * 000000014005AB1C: mov     rcx, rbx
 * 000000014005AB1F: inc     rcx
 * 000000014005AB22: cmp     byte ptr [rdi+rcx], 0
 * 000000014005AB26: jnz     short loc_14005AB1F
 * 000000014005AB28: inc     rcx
 * 000000014005AB2B: jmp     short loc_14005AB32
 * 000000014005AB2D: mov     ecx, 5
 * 000000014005AB32: mov     rax, cs:pfnWppTraceMessage
 * 000000014005AB39: test    rdi, rdi
 * 000000014005AB3C: mov     rdx, rdi
 * 000000014005AB3F: mov     r9d, ebp
 * 000000014005AB42: cmovz   rdx, r8
 * 000000014005AB46: and     [rsp+68h+var_18], 0
 * 000000014005AB4C: mov     [rsp+68h+var_20], rcx
 * 000000014005AB51: lea     r8, WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids
 * 000000014005AB58: mov     [rsp+68h+var_28], rdx
 * 000000014005AB5D: lea     rcx, [rsp+68h+arg_30]
 * 000000014005AB65: mov     [rsp+68h+var_30], 8
 * 000000014005AB6E: mov     edx, 2Bh ; '+'
 * 000000014005AB73: mov     [rsp+68h+var_38], rcx
 * 000000014005AB78: lea     rcx, [rsp+68h+arg_28]
 * 000000014005AB80: mov     [rsp+68h+var_40], 4
 * 000000014005AB89: mov     [rsp+68h+var_48], rcx
 * 000000014005AB8E: mov     rcx, [r10+18h]
 * 000000014005AB92: call    _guard_dispatch_icall
 * 000000014005AB97: lea     r8, aNull; "NULL"
 * 000000014005AB9E: test    rdi, rdi
 * 000000014005ABA1: jz      short loc_14005ABB1
 * 000000014005ABA3: inc     rbx
 * 000000014005ABA6: cmp     byte ptr [rdi+rbx], 0
 * 000000014005ABAA: jnz     short loc_14005ABA3
 * 000000014005ABAC: inc     rbx
 * 000000014005ABAF: jmp     short loc_14005ABB6
 * 000000014005ABB1: mov     ebx, 5
 * 000000014005ABB6: test    rdi, rdi
 * 000000014005ABB9: lea     rax, [rsp+68h+arg_30]
 * 000000014005ABC1: lea     r9, WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids
 * 000000014005ABC8: mov     edx, esi
 * 000000014005ABCA: cmovz   rdi, r8
 * 000000014005ABCE: mov     rcx, r14
 * 000000014005ABD1: and     [rsp+68h+var_10], 0
 * 000000014005ABD7: mov     r8d, 1
 * 000000014005ABDD: mov     [rsp+68h+var_18], rbx
 * 000000014005ABE2: mov     [rsp+68h+var_20], rdi
 * 000000014005ABE7: mov     [rsp+68h+var_28], 8
 * 000000014005ABF0: mov     [rsp+68h+var_30], rax
 * 000000014005ABF5: lea     rax, [rsp+68h+arg_28]
 * 000000014005ABFD: mov     [rsp+68h+var_38], 4
 * 000000014005AC06: mov     [rsp+68h+var_40], rax
 * 000000014005AC0B: mov     word ptr [rsp+68h+var_48], bp
 * 000000014005AC10: call    cs:__imp_WppAutoLogTrace
 * 000000014005AC17: nop     dword ptr [rax+rax+00h]
 * 000000014005AC1C: lea     r11, [rsp+68h+var_8]
 * 000000014005AC21: mov     rbx, [r11+10h]
 * 000000014005AC25: mov     rbp, [r11+18h]
 * 000000014005AC29: mov     rsi, [r11+20h]
 * 000000014005AC2D: mov     rdi, [r11+28h]
 * 000000014005AC31: mov     rsp, r11
 * 000000014005AC34: pop     r14
 * 000000014005AC36: retn
 */
