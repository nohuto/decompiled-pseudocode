/*
 * XREFs of WPP_RECORDER_SF_I @ 0x1400C9544
 * Callers:
 *     ndisIfCreateInterfaceFromPersistentStore @ 0x140088780 (ndisIfCreateInterfaceFromPersistentStore.c)
 *     ndisIfUpdateInterfaceFromPersistentStore @ 0x14008B160 (ndisIfUpdateInterfaceFromPersistentStore.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_I @ 0x1400C9544
 * Reason: Hex-Rays returned no pseudocode for 0x1400C9544
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400C9544: mov     rax, rsp
 * 00000001400C9547: mov     [rax+8], rbx
 * 00000001400C954B: mov     [rax+10h], rsi
 * 00000001400C954F: push    rdi
 * 00000001400C9550: sub     rsp, 40h
 * 00000001400C9554: mov     r8, cs:WPP_GLOBAL_Control
 * 00000001400C955B: mov     rsi, rcx
 * 00000001400C955E: movzx   edi, r9w
 * 00000001400C9562: movzx   ebx, dl
 * 00000001400C9565: test    dword ptr [r8+2Ch], 200000h
 * 00000001400C956D: jz      short loc_1400C9592
 * 00000001400C956F: cmp     [r8+29h], bl
 * 00000001400C9573: jb      short loc_1400C9592
 * 00000001400C9575: and     qword ptr [rax-28h], 0
 * 00000001400C957A: lea     r8, [rax+30h]
 * 00000001400C957E: mov     r9d, 8
 * 00000001400C9584: lea     rcx, WPP_84bd40d134543b4dc326a9a718d945dc_Traceguids; struct _GUID *
 * 00000001400C958B: mov     edx, edi; unsigned __int16
 * 00000001400C958D: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001400C9592: and     [rsp+48h+var_10], 0
 * 00000001400C9598: lea     rax, [rsp+48h+arg_28]
 * 00000001400C959D: mov     [rsp+48h+var_18], 8
 * 00000001400C95A6: lea     r9, WPP_84bd40d134543b4dc326a9a718d945dc_Traceguids
 * 00000001400C95AD: mov     [rsp+48h+var_20], rax
 * 00000001400C95B2: mov     r8d, 16h
 * 00000001400C95B8: mov     edx, ebx
 * 00000001400C95BA: mov     [rsp+48h+var_28], di
 * 00000001400C95BF: mov     rcx, rsi
 * 00000001400C95C2: call    cs:__imp_WppAutoLogTrace
 * 00000001400C95C9: nop     dword ptr [rax+rax+00h]
 * 00000001400C95CE: mov     rbx, [rsp+48h+arg_0]
 * 00000001400C95D3: mov     rsi, [rsp+48h+arg_8]
 * 00000001400C95D8: add     rsp, 40h
 * 00000001400C95DC: pop     rdi
 * 00000001400C95DD: retn
 */
