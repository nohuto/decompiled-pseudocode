/*
 * XREFs of WPP_RECORDER_SF_ss @ 0x140064454
 * Callers:
 *     PciConfigSpaceHandlerWorker @ 0x140014A50 (PciConfigSpaceHandlerWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ss @ 0x140064454
 * Reason: Hex-Rays returned no pseudocode for 0x140064454
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140064454: mov     rax, rsp
 * 0000000140064457: mov     [rax+8], rbx
 * 000000014006445B: mov     [rax+10h], rbp
 * 000000014006445F: mov     [rax+18h], rsi
 * 0000000140064463: mov     [rax+20h], rdi
 * 0000000140064467: push    r12
 * 0000000140064469: push    r13
 * 000000014006446B: push    r15
 * 000000014006446D: sub     rsp, 50h
 * 0000000140064471: mov     rdx, cs:WPP_GLOBAL_Control
 * 0000000140064478: lea     r12, aNull; "NULL"
 * 000000014006447F: mov     rsi, [rsp+68h+arg_28]
 * 0000000140064487: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 000000014006448B: mov     rdi, [rsp+68h+arg_30]
 * 0000000140064493: mov     rbp, rcx
 * 0000000140064496: test    dword ptr [rdx+2Ch], 100000h
 * 000000014006449D: lea     r15d, [rbx+6]
 * 00000001400644A1: lea     r13d, [rbx+0Ch]
 * 00000001400644A5: jz      loc_14006453C
 * 00000001400644AB: cmp     byte ptr [rdx+29h], 2
 * 00000001400644AF: jb      loc_14006453C
 * 00000001400644B5: test    rdi, rdi
 * 00000001400644B8: jz      short loc_1400644CC
 * 00000001400644BA: mov     r8, rbx
 * 00000001400644BD: inc     r8
 * 00000001400644C0: cmp     byte ptr [rdi+r8], 0
 * 00000001400644C5: jnz     short loc_1400644BD
 * 00000001400644C7: inc     r8
 * 00000001400644CA: jmp     short loc_1400644CF
 * 00000001400644CC: mov     r8, r15
 * 00000001400644CF: test    rdi, rdi
 * 00000001400644D2: mov     r9, rdi
 * 00000001400644D5: cmovz   r9, r12
 * 00000001400644D9: test    rsi, rsi
 * 00000001400644DC: jz      short loc_1400644EF
 * 00000001400644DE: mov     rdx, rbx
 * 00000001400644E1: inc     rdx
 * 00000001400644E4: cmp     byte ptr [rsi+rdx], 0
 * 00000001400644E8: jnz     short loc_1400644E1
 * 00000001400644EA: inc     rdx
 * 00000001400644ED: jmp     short loc_1400644F2
 * 00000001400644EF: mov     rdx, r15
 * 00000001400644F2: mov     rax, cs:pfnWppTraceMessage
 * 00000001400644F9: test    rsi, rsi
 * 00000001400644FC: mov     rcx, rsi
 * 00000001400644FF: cmovz   rcx, r12
 * 0000000140064503: and     [rsp+68h+var_28], 0
 * 0000000140064509: mov     [rsp+68h+var_30], r8
 * 000000014006450E: lea     r8, WPP_94f6cc7e4eb03ed98099c561227e81da_Traceguids
 * 0000000140064515: mov     [rsp+68h+var_38], r9
 * 000000014006451A: mov     r9d, r13d
 * 000000014006451D: mov     [rsp+68h+var_40], rdx
 * 0000000140064522: mov     edx, 2Bh ; '+'
 * 0000000140064527: mov     [rsp+68h+var_48], rcx
 * 000000014006452C: mov     rcx, cs:WPP_GLOBAL_Control
 * 0000000140064533: mov     rcx, [rcx+18h]
 * 0000000140064537: call    _guard_dispatch_icall
 * 000000014006453C: test    rdi, rdi
 * 000000014006453F: jz      short loc_140064552
 * 0000000140064541: mov     rax, rbx
 * 0000000140064544: inc     rax
 * 0000000140064547: cmp     byte ptr [rdi+rax], 0
 * 000000014006454B: jnz     short loc_140064544
 * 000000014006454D: inc     rax
 * 0000000140064550: jmp     short loc_140064555
 * 0000000140064552: mov     rax, r15
 * 0000000140064555: test    rdi, rdi
 * 0000000140064558: cmovz   rdi, r12
 * 000000014006455C: test    rsi, rsi
 * 000000014006455F: jz      short loc_14006456F
 * 0000000140064561: inc     rbx
 * 0000000140064564: cmp     byte ptr [rsi+rbx], 0
 * 0000000140064568: jnz     short loc_140064561
 * 000000014006456A: inc     rbx
 * 000000014006456D: jmp     short loc_140064572
 * 000000014006456F: mov     rbx, r15
 * 0000000140064572: test    rsi, rsi
 * 0000000140064575: lea     r9, WPP_94f6cc7e4eb03ed98099c561227e81da_Traceguids
 * 000000014006457C: mov     edx, 2
 * 0000000140064581: mov     rcx, rbp
 * 0000000140064584: cmovz   rsi, r12
 * 0000000140064588: and     [rsp+68h+var_20], 0
 * 000000014006458E: mov     [rsp+68h+var_28], rax
 * 0000000140064593: mov     [rsp+68h+var_30], rdi
 * 0000000140064598: mov     [rsp+68h+var_38], rbx
 * 000000014006459D: lea     r8d, [rdx+13h]
 * 00000001400645A1: mov     [rsp+68h+var_40], rsi
 * 00000001400645A6: mov     word ptr [rsp+68h+var_48], r13w
 * 00000001400645AC: call    cs:__imp_WppAutoLogTrace
 * 00000001400645B3: nop     dword ptr [rax+rax+00h]
 * 00000001400645B8: lea     r11, [rsp+68h+var_18]
 * 00000001400645BD: mov     rbx, [r11+20h]
 * 00000001400645C1: mov     rbp, [r11+28h]
 * 00000001400645C5: mov     rsi, [r11+30h]
 * 00000001400645C9: mov     rdi, [r11+38h]
 * 00000001400645CD: mov     rsp, r11
 * 00000001400645D0: pop     r15
 * 00000001400645D2: pop     r13
 * 00000001400645D4: pop     r12
 * 00000001400645D6: retn
 */
