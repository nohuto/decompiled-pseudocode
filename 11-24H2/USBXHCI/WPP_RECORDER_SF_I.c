/*
 * XREFs of WPP_RECORDER_SF_i @ 0x140044BD0
 * Callers:
 *     Interrupter_UpdateERDP @ 0x14001AA50 (Interrupter_UpdateERDP.c)
 *     Interrupter_DeInitializeAfterOffload @ 0x140048710 (Interrupter_DeInitializeAfterOffload.c)
 *     Controller_PopulateHardwareVerifierFlags @ 0x140077234 (Controller_PopulateHardwareVerifierFlags.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_i @ 0x140044BD0
 * Reason: Hex-Rays returned no pseudocode for 0x140044BD0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140044BD0: mov     rax, rsp
 * 0000000140044BD3: mov     [rax+8], rbx
 * 0000000140044BD7: mov     [rax+10h], rbp
 * 0000000140044BDB: mov     [rax+18h], rsi
 * 0000000140044BDF: mov     [rax+20h], rdi
 * 0000000140044BE3: push    r14
 * 0000000140044BE5: sub     rsp, 40h
 * 0000000140044BE9: mov     ebp, r8d
 * 0000000140044BEC: mov     r14, rcx
 * 0000000140044BEF: mov     ebx, r8d
 * 0000000140044BF2: shr     rbx, 10h
 * 0000000140044BF6: movzx   esi, r9w
 * 0000000140044BFA: lea     r11d, [rbp-1]
 * 0000000140044BFE: movzx   edi, dl
 * 0000000140044C01: mov     r10d, r11d
 * 0000000140044C04: and     r11d, 1Fh
 * 0000000140044C08: shr     r10, 5
 * 0000000140044C0C: lea     rax, [rbx+rbx*4]
 * 0000000140044C10: and     r10d, 7FFh
 * 0000000140044C17: lea     rax, [r10+rax*4]
 * 0000000140044C1B: mov     r10, cs:WPP_GLOBAL_Control
 * 0000000140044C22: mov     eax, [r10+rax*4+2Ch]
 * 0000000140044C27: bt      eax, r11d
 * 0000000140044C2B: jnb     short loc_140044C72
 * 0000000140044C2D: lea     rcx, [rbx+rbx*4]
 * 0000000140044C31: add     rcx, rcx
 * 0000000140044C34: cmp     [r10+rcx*8+29h], dil
 * 0000000140044C39: jb      short loc_140044C72
 * 0000000140044C3B: and     [rsp+48h+var_18], 0
 * 0000000140044C41: lea     rdx, [rsp+48h+arg_28]
 * 0000000140044C46: mov     rax, cs:pfnWppTraceMessage
 * 0000000140044C4D: mov     r9d, esi
 * 0000000140044C50: mov     r8, [rsp+48h+arg_20]
 * 0000000140044C55: mov     rcx, [r10+rcx*8+18h]
 * 0000000140044C5A: mov     [rsp+48h+var_20], 8
 * 0000000140044C63: mov     [rsp+48h+var_28], rdx
 * 0000000140044C68: mov     edx, 2Bh ; '+'
 * 0000000140044C6D: call    _guard_dispatch_icall
 * 0000000140044C72: and     [rsp+48h+var_10], 0
 * 0000000140044C78: lea     rax, [rsp+48h+arg_28]
 * 0000000140044C7D: mov     r9, [rsp+48h+arg_20]
 * 0000000140044C82: mov     r8d, ebp
 * 0000000140044C85: mov     [rsp+48h+var_18], 8
 * 0000000140044C8E: mov     edx, edi
 * 0000000140044C90: mov     [rsp+48h+var_20], rax
 * 0000000140044C95: mov     rcx, r14
 * 0000000140044C98: mov     word ptr [rsp+48h+var_28], si
 * 0000000140044C9D: call    cs:__imp_WppAutoLogTrace
 * 0000000140044CA4: nop     dword ptr [rax+rax+00h]
 * 0000000140044CA9: mov     rbx, [rsp+48h+arg_0]
 * 0000000140044CAE: mov     rbp, [rsp+48h+arg_8]
 * 0000000140044CB3: mov     rsi, [rsp+48h+arg_10]
 * 0000000140044CB8: mov     rdi, [rsp+48h+arg_18]
 * 0000000140044CBD: add     rsp, 40h
 * 0000000140044CC1: pop     r14
 * 0000000140044CC3: retn
 */
