/*
 * XREFs of NtUserIsMouseInPointerEnabled @ 0x1C01497E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00462A0 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0053C40 (EtwTraceAcquiredSharedUserCrit.c)
 *     IsEtwUserCritEnabled @ 0x1C0053DF0 (IsEtwUserCritEnabled.c)
 */

/*
 * Hex-Rays decompilation failed for NtUserIsMouseInPointerEnabled @ 0x1C01497E0
 * Reason: Hex-Rays returned no pseudocode for 0x1C01497E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01497E0: push    rbx
 * 00000001C01497E2: sub     rsp, 20h
 * 00000001C01497E6: call    IsEtwUserCritEnabled
 * 00000001C01497EB: test    eax, eax
 * 00000001C01497ED: jz      short loc_1C0149815
 * 00000001C01497EF: call    cs:__imp_PsGetCurrentThreadWin32Thread
 * 00000001C01497F6: nop     dword ptr [rax+rax+00h]
 * 00000001C01497FB: mov     rbx, rax
 * 00000001C01497FE: test    rax, rax
 * 00000001C0149801: jz      short loc_1C0149815
 * 00000001C0149803: xor     ecx, ecx; PerformanceFrequency
 * 00000001C0149805: call    cs:__imp_KeQueryPerformanceCounter
 * 00000001C014980C: nop     dword ptr [rax+rax+00h]
 * 00000001C0149811: mov     [rbx+8], rax
 * 00000001C0149815: call    cs:__imp_SGDGetUserSessionState
 * 00000001C014981C: nop     dword ptr [rax+rax+00h]
 * 00000001C0149821: mov     rcx, [rax+8]; Resource
 * 00000001C0149825: call    cs:__imp_ExEnterCriticalRegionAndAcquireResourceShared
 * 00000001C014982C: nop     dword ptr [rax+rax+00h]
 * 00000001C0149831: call    EtwTraceAcquiredSharedUserCrit
 * 00000001C0149836: call    ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ; PtiCurrentShared(void)
 * 00000001C014983B: mov     rcx, [rax+1A8h]
 * 00000001C0149842: mov     ebx, [rcx+338h]
 * 00000001C0149848: shr     rbx, 2
 * 00000001C014984C: and     ebx, 1
 * 00000001C014984F: call    UserSessionSwitchLeaveCrit
 * 00000001C0149854: mov     eax, ebx
 * 00000001C0149856: add     rsp, 20h
 * 00000001C014985A: pop     rbx
 * 00000001C014985B: retn
 */
