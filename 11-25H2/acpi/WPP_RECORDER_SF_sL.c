/*
 * XREFs of WPP_RECORDER_SF_SL @ 0x140067324
 * Callers:
 *     OSReadAcpiConfigurationData @ 0x1400C4D0C (OSReadAcpiConfigurationData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_SL @ 0x140067324
 * Reason: Hex-Rays returned no pseudocode for 0x140067324
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140067324: mov     rax, rsp
 * 0000000140067327: mov     [rax+8], rbx
 * 000000014006732B: mov     [rax+10h], rbp
 * 000000014006732F: mov     [rax+18h], rsi
 * 0000000140067333: mov     [rax+20h], rdi
 * 0000000140067337: push    r12
 * 0000000140067339: push    r13
 * 000000014006733B: push    r14
 * 000000014006733D: sub     rsp, 50h
 * 0000000140067341: mov     rdx, cs:WPP_GLOBAL_Control
 * 0000000140067348: lea     r12, aNull_0; "NULL"
 * 000000014006734F: mov     rbx, [rsp+68h+arg_28]
 * 0000000140067357: xor     r14d, r14d
 * 000000014006735A: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 000000014006735E: mov     rbp, rcx
 * 0000000140067361: test    dword ptr [rdx+2Ch], 200000h
 * 0000000140067368: lea     r13d, [r14+11h]
 * 000000014006736C: lea     esi, [rdi+0Bh]
 * 000000014006736F: jz      short loc_1400673EB
 * 0000000140067371: cmp     byte ptr [rdx+29h], 2
 * 0000000140067375: jb      short loc_1400673EB
 * 0000000140067377: test    rbx, rbx
 * 000000014006737A: jz      short loc_140067393
 * 000000014006737C: mov     rax, rdi
 * 000000014006737F: inc     rax
 * 0000000140067382: cmp     [rbx+rax*2], r14w
 * 0000000140067387: jnz     short loc_14006737F
 * 0000000140067389: lea     rdx, ds:2[rax*2]
 * 0000000140067391: jmp     short loc_140067396
 * 0000000140067393: mov     rdx, rsi
 * 0000000140067396: mov     rax, cs:pfnWppTraceMessage
 * 000000014006739D: lea     r8, [rsp+68h+arg_30]
 * 00000001400673A5: mov     [rsp+68h+var_28], r14
 * 00000001400673AA: test    rbx, rbx
 * 00000001400673AD: mov     [rsp+68h+var_30], 4
 * 00000001400673B6: mov     rcx, rbx
 * 00000001400673B9: cmovz   rcx, r12
 * 00000001400673BD: mov     [rsp+68h+var_38], r8
 * 00000001400673C2: mov     [rsp+68h+var_40], rdx
 * 00000001400673C7: lea     r8, WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids
 * 00000001400673CE: mov     [rsp+68h+var_48], rcx
 * 00000001400673D3: mov     r9d, r13d
 * 00000001400673D6: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001400673DD: mov     edx, 2Bh ; '+'
 * 00000001400673E2: mov     rcx, [rcx+18h]
 * 00000001400673E6: call    _guard_dispatch_icall
 * 00000001400673EB: test    rbx, rbx
 * 00000001400673EE: jz      short loc_140067405
 * 00000001400673F0: inc     rdi
 * 00000001400673F3: cmp     [rbx+rdi*2], r14w
 * 00000001400673F8: jnz     short loc_1400673F0
 * 00000001400673FA: lea     rsi, ds:2[rdi*2]
 * 0000000140067402: test    rbx, rbx
 * 0000000140067405: mov     [rsp+68h+var_20], r14
 * 000000014006740A: lea     rax, [rsp+68h+arg_30]
 * 0000000140067412: mov     [rsp+68h+var_28], 4
 * 000000014006741B: lea     r9, WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids
 * 0000000140067422: mov     [rsp+68h+var_30], rax
 * 0000000140067427: mov     edx, 2
 * 000000014006742C: cmovz   rbx, r12
 * 0000000140067430: mov     [rsp+68h+var_38], rsi
 * 0000000140067435: mov     [rsp+68h+var_40], rbx
 * 000000014006743A: mov     rcx, rbp
 * 000000014006743D: mov     word ptr [rsp+68h+var_48], r13w
 * 0000000140067443: lea     r8d, [rdx+14h]
 * 0000000140067447: call    cs:__imp_WppAutoLogTrace
 * 000000014006744E: nop     dword ptr [rax+rax+00h]
 * 0000000140067453: lea     r11, [rsp+68h+var_18]
 * 0000000140067458: mov     rbx, [r11+20h]
 * 000000014006745C: mov     rbp, [r11+28h]
 * 0000000140067460: mov     rsi, [r11+30h]
 * 0000000140067464: mov     rdi, [r11+38h]
 * 0000000140067468: mov     rsp, r11
 * 000000014006746B: pop     r14
 * 000000014006746D: pop     r13
 * 000000014006746F: pop     r12
 * 0000000140067471: retn
 */
