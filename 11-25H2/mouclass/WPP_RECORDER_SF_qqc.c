/*
 * XREFs of WPP_RECORDER_SF_qqc @ 0x1C0003210
 * Callers:
 *     MousePnP @ 0x1C0002B50 (MousePnP.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1C0006B20 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqc @ 0x1C0003210
 * Reason: Hex-Rays returned no pseudocode for 0x1C0003210
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0003210: mov     [rsp+arg_0], rbx
 * 00000001C0003215: push    rsi
 * 00000001C0003216: sub     rsp, 60h
 * 00000001C000321A: mov     rbx, rcx
 * 00000001C000321D: mov     esi, 53h ; 'S'
 * 00000001C0003222: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0003229: mov     eax, [rcx+2Ch]
 * 00000001C000322C: test    al, 20h
 * 00000001C000322E: jnz     short loc_1C00032AB
 * 00000001C0003230: mov     [rsp+68h+var_10], 0
 * 00000001C0003239: lea     rax, [rsp+68h+arg_38]
 * 00000001C0003241: mov     [rsp+68h+var_18], 1
 * 00000001C000324A: lea     r9, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0003251: mov     [rsp+68h+var_20], rax
 * 00000001C0003256: mov     edx, 4
 * 00000001C000325B: mov     [rsp+68h+var_28], 8
 * 00000001C0003264: lea     rax, [rsp+68h+arg_30]
 * 00000001C000326C: mov     [rsp+68h+var_30], rax
 * 00000001C0003271: mov     rcx, rbx
 * 00000001C0003274: lea     rax, [rsp+68h+arg_28]
 * 00000001C000327C: mov     [rsp+68h+var_38], 8
 * 00000001C0003285: mov     [rsp+68h+var_40], rax
 * 00000001C000328A: lea     r8d, [rdx+2]
 * 00000001C000328E: mov     word ptr [rsp+68h+var_48], si
 * 00000001C0003293: call    cs:__imp_WppAutoLogTrace
 * 00000001C000329A: nop     dword ptr [rax+rax+00h]
 * 00000001C000329F: mov     rbx, [rsp+68h+arg_0]
 * 00000001C00032A4: add     rsp, 60h
 * 00000001C00032A8: pop     rsi
 * 00000001C00032A9: retn
 * 00000001C00032AB: cmp     byte ptr [rcx+29h], 4
 * 00000001C00032AF: jb      loc_1C0003230
 * 00000001C00032B5: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00032BC: lea     rdx, [rsp+68h+arg_38]
 * 00000001C00032C4: mov     rcx, [rcx+18h]
 * 00000001C00032C8: lea     r8, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C00032CF: mov     [rsp+68h+var_18], 0
 * 00000001C00032D8: mov     r9d, esi
 * 00000001C00032DB: mov     [rsp+68h+var_20], 1
 * 00000001C00032E4: mov     [rsp+68h+var_28], rdx
 * 00000001C00032E9: lea     rdx, [rsp+68h+arg_30]
 * 00000001C00032F1: mov     [rsp+68h+var_30], 8
 * 00000001C00032FA: mov     [rsp+68h+var_38], rdx
 * 00000001C00032FF: lea     rdx, [rsp+68h+arg_28]
 * 00000001C0003307: mov     [rsp+68h+var_40], 8
 * 00000001C0003310: mov     [rsp+68h+var_48], rdx
 * 00000001C0003315: mov     edx, 2Bh ; '+'
 * 00000001C000331A: call    _guard_dispatch_icall
 * 00000001C000331F: jmp     loc_1C0003230
 */
