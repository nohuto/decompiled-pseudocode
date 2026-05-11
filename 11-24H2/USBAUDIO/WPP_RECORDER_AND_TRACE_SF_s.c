/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_s @ 0x140014258
 * Callers:
 *     ?GetDeviceContainerId@CSidebandDevice@@AEAAJPEAU_GUID@@@Z @ 0x14000F930 (-GetDeviceContainerId@CSidebandDevice@@AEAAJPEAU_GUID@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001BB50 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_s @ 0x140014258
 * Reason: Hex-Rays returned no pseudocode for 0x140014258
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140014258: mov     [rsp+arg_0], rbx
 * 000000014001425D: mov     [rsp+arg_8], rbp
 * 0000000140014262: mov     [rsp+arg_10], rsi
 * 0000000140014267: push    rdi
 * 0000000140014268: push    r12
 * 000000014001426A: push    r13
 * 000000014001426C: sub     rsp, 40h
 * 0000000140014270: mov     rdi, [rsp+58h+arg_40]
 * 0000000140014278: lea     r12, aNull; "NULL"
 * 000000014001427F: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 0000000140014283: mov     rbp, r9
 * 0000000140014286: mov     sil, r8b
 * 0000000140014289: mov     r11, rcx
 * 000000014001428C: lea     r13d, [rbx+21h]
 * 0000000140014290: test    dl, dl
 * 0000000140014292: jz      short loc_1400142EA
 * 0000000140014294: mov     r10, cs:pfnWppTraceMessage
 * 000000014001429B: test    rdi, rdi
 * 000000014001429E: jz      short loc_1400142B1
 * 00000001400142A0: mov     rax, rbx
 * 00000001400142A3: inc     rax
 * 00000001400142A6: cmp     byte ptr [rdi+rax], 0
 * 00000001400142AA: jnz     short loc_1400142A3
 * 00000001400142AC: inc     rax
 * 00000001400142AF: jmp     short loc_1400142B6
 * 00000001400142B1: mov     eax, 5
 * 00000001400142B6: test    rdi, rdi
 * 00000001400142B9: lea     r8, WPP_309f1687d4053247ca5427ea11d9cc71_Traceguids
 * 00000001400142C0: mov     rcx, rdi
 * 00000001400142C3: mov     r9d, r13d
 * 00000001400142C6: cmovz   rcx, r12
 * 00000001400142CA: mov     edx, 2Bh ; '+'
 * 00000001400142CF: and     [rsp+58h+var_28], 0
 * 00000001400142D5: mov     [rsp+58h+var_30], rax
 * 00000001400142DA: mov     rax, r10
 * 00000001400142DD: mov     [rsp+58h+var_38], rcx
 * 00000001400142E2: mov     rcx, r11
 * 00000001400142E5: call    _guard_dispatch_icall
 * 00000001400142EA: test    sil, sil
 * 00000001400142ED: jz      short loc_140014340
 * 00000001400142EF: test    rdi, rdi
 * 00000001400142F2: jz      short loc_140014302
 * 00000001400142F4: inc     rbx
 * 00000001400142F7: cmp     byte ptr [rdi+rbx], 0
 * 00000001400142FB: jnz     short loc_1400142F4
 * 00000001400142FD: inc     rbx
 * 0000000140014300: jmp     short loc_140014307
 * 0000000140014302: mov     ebx, 5
 * 0000000140014307: test    rdi, rdi
 * 000000014001430A: lea     r9, WPP_309f1687d4053247ca5427ea11d9cc71_Traceguids
 * 0000000140014311: mov     rcx, rbp
 * 0000000140014314: cmovz   rdi, r12
 * 0000000140014318: and     [rsp+58h+var_20], 0
 * 000000014001431E: xor     edx, edx
 * 0000000140014320: mov     [rsp+58h+var_28], rbx
 * 0000000140014325: mov     [rsp+58h+var_30], rdi
 * 000000014001432A: mov     word ptr [rsp+58h+var_38], r13w
 * 0000000140014330: lea     r8d, [rdx+9]
 * 0000000140014334: call    cs:__imp_WppAutoLogTrace
 * 000000014001433B: nop     dword ptr [rax+rax+00h]
 * 0000000140014340: mov     rbx, [rsp+58h+arg_0]
 * 0000000140014345: mov     rbp, [rsp+58h+arg_8]
 * 000000014001434A: mov     rsi, [rsp+58h+arg_10]
 * 000000014001434F: add     rsp, 40h
 * 0000000140014353: pop     r13
 * 0000000140014355: pop     r12
 * 0000000140014357: pop     rdi
 * 0000000140014358: retn
 */
