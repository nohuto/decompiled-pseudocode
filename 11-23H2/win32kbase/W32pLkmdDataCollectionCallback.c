/*
 * XREFs of W32pLkmdDataCollectionCallback @ 0x1C0150920
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0053C40 (EtwTraceAcquiredSharedUserCrit.c)
 *     IsEtwUserCritEnabled @ 0x1C0053DF0 (IsEtwUserCritEnabled.c)
 *     ?_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z @ 0x1C0150604 (-_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z.c)
 */

/*
 * Hex-Rays decompilation failed for W32pLkmdDataCollectionCallback @ 0x1C0150920
 * Reason: Hex-Rays returned no pseudocode for 0x1C0150920
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0150920: mov     rax, rsp
 * 00000001C0150923: mov     [rax+8], rbx
 * 00000001C0150927: mov     [rax+10h], rbp
 * 00000001C015092B: mov     [rax+18h], rsi
 * 00000001C015092F: mov     [rax+20h], rdi
 * 00000001C0150933: push    r14
 * 00000001C0150935: sub     rsp, 50h
 * 00000001C0150939: xorps   xmm0, xmm0
 * 00000001C015093C: mov     rdi, r8
 * 00000001C015093F: movups  xmmword ptr [rax-38h], xmm0
 * 00000001C0150943: mov     rsi, rdx
 * 00000001C0150946: mov     rbp, rcx
 * 00000001C0150949: movups  xmmword ptr [rax-28h], xmm0
 * 00000001C015094D: movups  xmmword ptr [rax-18h], xmm0
 * 00000001C0150951: call    IsEtwUserCritEnabled
 * 00000001C0150956: xor     r14d, r14d
 * 00000001C0150959: test    eax, eax
 * 00000001C015095B: jz      short loc_1C0150983
 * 00000001C015095D: call    cs:__imp_PsGetCurrentThreadWin32Thread
 * 00000001C0150964: nop     dword ptr [rax+rax+00h]
 * 00000001C0150969: mov     rbx, rax
 * 00000001C015096C: test    rax, rax
 * 00000001C015096F: jz      short loc_1C0150983
 * 00000001C0150971: xor     ecx, ecx; PerformanceFrequency
 * 00000001C0150973: call    cs:__imp_KeQueryPerformanceCounter
 * 00000001C015097A: nop     dword ptr [rax+rax+00h]
 * 00000001C015097F: mov     [rbx+8], rax
 * 00000001C0150983: call    cs:__imp_SGDGetUserSessionState
 * 00000001C015098A: nop     dword ptr [rax+rax+00h]
 * 00000001C015098F: mov     rcx, [rax+8]; Resource
 * 00000001C0150993: call    cs:__imp_ExEnterCriticalRegionAndAcquireResourceShared
 * 00000001C015099A: nop     dword ptr [rax+rax+00h]
 * 00000001C015099F: call    EtwTraceAcquiredSharedUserCrit
 * 00000001C01509A4: mov     rcx, [rsp+58h+arg_20]
 * 00000001C01509AC: call    cs:__imp_PsGetProcessWin32Process
 * 00000001C01509B3: nop     dword ptr [rax+rax+00h]
 * 00000001C01509B8: test    rax, rax
 * 00000001C01509BB: jz      short loc_1C01509C2
 * 00000001C01509BD: cmp     [rax], r14
 * 00000001C01509C0: jz      short loc_1C01509CC
 * 00000001C01509C2: mov     [rsp+58h+var_38], rax
 * 00000001C01509C7: test    rax, rax
 * 00000001C01509CA: jnz     short loc_1C01509D3
 * 00000001C01509CC: mov     ebx, 0C000000Dh
 * 00000001C01509D1: jmp     short loc_1C01509F8
 * 00000001C01509D3: lea     rcx, [rsp+58h+var_38]; struct tagWIN32_TRIAGE_DATA *
 * 00000001C01509D8: mov     [rsp+58h+var_30], r14
 * 00000001C01509DD: mov     [rsp+58h+var_28], r14d
 * 00000001C01509E2: mov     [rsp+58h+var_20], rbp
 * 00000001C01509E7: mov     [rsp+58h+var_18], rsi
 * 00000001C01509EC: mov     [rsp+58h+var_10], rdi
 * 00000001C01509F1: call    ?_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z; _AddWin32TriageDataToDump(tagWIN32_TRIAGE_DATA *)
 * 00000001C01509F6: mov     ebx, eax
 * 00000001C01509F8: test    ebx, ebx
 * 00000001C01509FA: cmovns  ebx, r14d
 * 00000001C01509FE: call    UserSessionSwitchLeaveCrit
 * 00000001C0150A03: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0150A08: mov     eax, ebx
 * 00000001C0150A0A: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0150A0F: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0150A14: mov     rdi, [rsp+58h+arg_18]
 * 00000001C0150A19: add     rsp, 50h
 * 00000001C0150A1D: pop     r14
 * 00000001C0150A1F: retn
 */
