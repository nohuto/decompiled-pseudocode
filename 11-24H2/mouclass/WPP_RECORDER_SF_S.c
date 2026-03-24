/*
 * XREFs of WPP_RECORDER_SF_S @ 0x1C00047D0
 * Callers:
 *     MouCreateClassObject @ 0x1C000F950 (MouCreateClassObject.c)
 *     MouseAddDeviceEx @ 0x1C000FF40 (MouseAddDeviceEx.c)
 *     MouConfiguration @ 0x1C0011A90 (MouConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1C0006B20 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_S @ 0x1C00047D0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00047D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00047D0: mov     [rsp+arg_0], rbx
 * 00000001C00047D5: mov     [rsp+arg_8], rbp
 * 00000001C00047DA: mov     [rsp+arg_10], rsi
 * 00000001C00047DF: push    rdi
 * 00000001C00047E0: push    r12
 * 00000001C00047E2: push    r13
 * 00000001C00047E4: push    r14
 * 00000001C00047E6: push    r15
 * 00000001C00047E8: sub     rsp, 40h
 * 00000001C00047EC: mov     rdi, [rsp+68h+arg_28]
 * 00000001C00047F4: mov     rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C00047FB: mov     ebp, r8d
 * 00000001C00047FE: mov     r13, rcx
 * 00000001C0004801: mov     r14d, r8d
 * 00000001C0004804: shr     r14, 10h
 * 00000001C0004808: movzx   r15d, dl
 * 00000001C000480C: lea     esi, [rbx+0Bh]
 * 00000001C000480F: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C0004816: lea     r11d, [rbp-1]
 * 00000001C000481A: mov     r10d, r11d
 * 00000001C000481D: movzx   r12d, r9w
 * 00000001C0004821: shr     r10, 5
 * 00000001C0004825: lea     rax, [r14+r14*4]
 * 00000001C0004829: and     r10d, 7FFh
 * 00000001C0004830: and     r11d, 1Fh
 * 00000001C0004834: lea     r8, [r10+rax*4]
 * 00000001C0004838: mov     eax, [rdx+r8*4+2Ch]
 * 00000001C000483D: bt      eax, r11d
 * 00000001C0004841: lea     r8, aNull_0; "NULL"
 * 00000001C0004848: jb      short loc_1C00048C1
 * 00000001C000484A: test    rdi, rdi
 * 00000001C000484D: jz      short loc_1C0004867
 * 00000001C000484F: nop
 * 00000001C0004850: cmp     word ptr [rdi+rbx*2+2], 0
 * 00000001C0004856: lea     rbx, [rbx+1]
 * 00000001C000485A: jnz     short loc_1C0004850
 * 00000001C000485C: lea     rsi, ds:2[rbx*2]
 * 00000001C0004864: test    rdi, rdi
 * 00000001C0004867: cmovz   rdi, r8
 * 00000001C000486B: mov     [rsp+68h+var_30], 0
 * 00000001C0004874: mov     [rsp+68h+var_38], rsi
 * 00000001C0004879: lea     r9, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0004880: mov     [rsp+68h+var_40], rdi
 * 00000001C0004885: mov     r8d, ebp
 * 00000001C0004888: mov     edx, r15d
 * 00000001C000488B: mov     word ptr [rsp+68h+var_48], r12w
 * 00000001C0004891: mov     rcx, r13
 * 00000001C0004894: call    cs:__imp_WppAutoLogTrace
 * 00000001C000489B: nop     dword ptr [rax+rax+00h]
 * 00000001C00048A0: mov     rbx, [rsp+68h+arg_0]
 * 00000001C00048A5: mov     rbp, [rsp+68h+arg_8]
 * 00000001C00048AA: mov     rsi, [rsp+68h+arg_10]
 * 00000001C00048B2: add     rsp, 40h
 * 00000001C00048B6: pop     r15
 * 00000001C00048B8: pop     r14
 * 00000001C00048BA: pop     r13
 * 00000001C00048BC: pop     r12
 * 00000001C00048BE: pop     rdi
 * 00000001C00048BF: retn
 * 00000001C00048C1: lea     r10, [r14+r14*4]
 * 00000001C00048C5: shl     r10, 4
 * 00000001C00048C9: add     r10, rdx
 * 00000001C00048CC: cmp     [r10+29h], r15b
 * 00000001C00048D0: jb      loc_1C000484A
 * 00000001C00048D6: test    rdi, rdi
 * 00000001C00048D9: jz      short loc_1C00048F4
 * 00000001C00048DB: mov     rax, rbx
 * 00000001C00048DE: cmp     word ptr [rdi+rax*2+2], 0
 * 00000001C00048E4: lea     rax, [rax+1]
 * 00000001C00048E8: jnz     short loc_1C00048DE
 * 00000001C00048EA: lea     rcx, ds:2[rax*2]
 * 00000001C00048F2: jmp     short loc_1C00048F7
 * 00000001C00048F4: mov     rcx, rsi
 * 00000001C00048F7: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00048FE: test    rdi, rdi
 * 00000001C0004901: mov     [rsp+68h+var_38], 0
 * 00000001C000490A: mov     rdx, rdi
 * 00000001C000490D: cmovz   rdx, r8
 * 00000001C0004911: mov     [rsp+68h+var_40], rcx
 * 00000001C0004916: mov     rcx, [r10+18h]
 * 00000001C000491A: lea     r8, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0004921: mov     [rsp+68h+var_48], rdx
 * 00000001C0004926: mov     r9d, r12d
 * 00000001C0004929: mov     edx, 2Bh ; '+'
 * 00000001C000492E: call    _guard_dispatch_icall
 * 00000001C0004933: lea     r8, aNull_0; "NULL"
 * 00000001C000493A: jmp     loc_1C000484A
 */
