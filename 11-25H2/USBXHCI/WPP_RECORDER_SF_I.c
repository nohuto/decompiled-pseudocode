/*
 * XREFs of WPP_RECORDER_SF_i @ 0x1400450D4
 * Callers:
 *     Interrupter_UpdateERDP @ 0x14000BF30 (Interrupter_UpdateERDP.c)
 *     Interrupter_DeInitializeAfterOffload @ 0x140048400 (Interrupter_DeInitializeAfterOffload.c)
 *     Controller_PopulateHardwareVerifierFlags @ 0x140077520 (Controller_PopulateHardwareVerifierFlags.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_i @ 0x1400450D4
 * Reason: Hex-Rays returned no pseudocode for 0x1400450D4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400450D4: mov     rax, rsp
 * 00000001400450D7: mov     [rax+8], rbx
 * 00000001400450DB: mov     [rax+10h], rbp
 * 00000001400450DF: mov     [rax+18h], rsi
 * 00000001400450E3: mov     [rax+20h], rdi
 * 00000001400450E7: push    r14
 * 00000001400450E9: sub     rsp, 40h
 * 00000001400450ED: mov     ebp, r8d
 * 00000001400450F0: mov     r14, rcx
 * 00000001400450F3: mov     ebx, r8d
 * 00000001400450F6: shr     rbx, 10h
 * 00000001400450FA: movzx   esi, r9w
 * 00000001400450FE: lea     r11d, [rbp-1]
 * 0000000140045102: movzx   edi, dl
 * 0000000140045105: mov     r10d, r11d
 * 0000000140045108: and     r11d, 1Fh
 * 000000014004510C: shr     r10, 5
 * 0000000140045110: lea     rax, [rbx+rbx*4]
 * 0000000140045114: and     r10d, 7FFh
 * 000000014004511B: lea     rax, [r10+rax*4]
 * 000000014004511F: mov     r10, cs:WPP_GLOBAL_Control
 * 0000000140045126: mov     eax, [r10+rax*4+2Ch]
 * 000000014004512B: bt      eax, r11d
 * 000000014004512F: jnb     short loc_140045176
 * 0000000140045131: lea     rcx, [rbx+rbx*4]
 * 0000000140045135: add     rcx, rcx
 * 0000000140045138: cmp     [r10+rcx*8+29h], dil
 * 000000014004513D: jb      short loc_140045176
 * 000000014004513F: and     [rsp+48h+var_18], 0
 * 0000000140045145: lea     rdx, [rsp+48h+arg_28]
 * 000000014004514A: mov     rax, cs:pfnWppTraceMessage
 * 0000000140045151: mov     r9d, esi
 * 0000000140045154: mov     r8, [rsp+48h+arg_20]
 * 0000000140045159: mov     rcx, [r10+rcx*8+18h]
 * 000000014004515E: mov     [rsp+48h+var_20], 8
 * 0000000140045167: mov     [rsp+48h+var_28], rdx
 * 000000014004516C: mov     edx, 2Bh ; '+'
 * 0000000140045171: call    _guard_dispatch_icall
 * 0000000140045176: and     [rsp+48h+var_10], 0
 * 000000014004517C: lea     rax, [rsp+48h+arg_28]
 * 0000000140045181: mov     r9, [rsp+48h+arg_20]
 * 0000000140045186: mov     r8d, ebp
 * 0000000140045189: mov     [rsp+48h+var_18], 8
 * 0000000140045192: mov     edx, edi
 * 0000000140045194: mov     [rsp+48h+var_20], rax
 * 0000000140045199: mov     rcx, r14
 * 000000014004519C: mov     word ptr [rsp+48h+var_28], si
 * 00000001400451A1: call    cs:__imp_WppAutoLogTrace
 * 00000001400451A8: nop     dword ptr [rax+rax+00h]
 * 00000001400451AD: mov     rbx, [rsp+48h+arg_0]
 * 00000001400451B2: mov     rbp, [rsp+48h+arg_8]
 * 00000001400451B7: mov     rsi, [rsp+48h+arg_10]
 * 00000001400451BC: mov     rdi, [rsp+48h+arg_18]
 * 00000001400451C1: add     rsp, 40h
 * 00000001400451C5: pop     r14
 * 00000001400451C7: retn
 */
