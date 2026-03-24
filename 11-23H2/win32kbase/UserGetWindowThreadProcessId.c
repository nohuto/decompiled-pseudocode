/*
 * XREFs of UserGetWindowThreadProcessId @ 0x1C014F370
 * Callers:
 *     ?Initialize@CInputQueue@@IEAAJPEAUHWND__@@UtagMsgRoutingInfo@@@Z @ 0x1C009C890 (-Initialize@CInputQueue@@IEAAJPEAUHWND__@@UtagMsgRoutingInfo@@@Z.c)
 *     NtUserGetWindowThreadProcessId @ 0x1C0146050 (NtUserGetWindowThreadProcessId.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0053C40 (EtwTraceAcquiredSharedUserCrit.c)
 *     IsEtwUserCritEnabled @ 0x1C0053DF0 (IsEtwUserCritEnabled.c)
 *     HMValidateCatHandleNoRip @ 0x1C0208374 (HMValidateCatHandleNoRip.c)
 */

/*
 * Hex-Rays decompilation failed for UserGetWindowThreadProcessId @ 0x1C014F370
 * Reason: Hex-Rays returned no pseudocode for 0x1C014F370
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C014F370: mov     [rsp+arg_0], rbx
 * 00000001C014F375: mov     [rsp+arg_8], rsi
 * 00000001C014F37A: push    rdi
 * 00000001C014F37B: sub     rsp, 20h
 * 00000001C014F37F: mov     rsi, rdx
 * 00000001C014F382: mov     rdi, rcx
 * 00000001C014F385: call    IsEtwUserCritEnabled
 * 00000001C014F38A: test    eax, eax
 * 00000001C014F38C: jz      short loc_1C014F3B4
 * 00000001C014F38E: call    cs:__imp_PsGetCurrentThreadWin32Thread
 * 00000001C014F395: nop     dword ptr [rax+rax+00h]
 * 00000001C014F39A: mov     rbx, rax
 * 00000001C014F39D: test    rax, rax
 * 00000001C014F3A0: jz      short loc_1C014F3B4
 * 00000001C014F3A2: xor     ecx, ecx; PerformanceFrequency
 * 00000001C014F3A4: call    cs:__imp_KeQueryPerformanceCounter
 * 00000001C014F3AB: nop     dword ptr [rax+rax+00h]
 * 00000001C014F3B0: mov     [rbx+8], rax
 * 00000001C014F3B4: call    cs:__imp_SGDGetUserSessionState
 * 00000001C014F3BB: nop     dword ptr [rax+rax+00h]
 * 00000001C014F3C0: mov     rcx, [rax+8]; Resource
 * 00000001C014F3C4: call    cs:__imp_ExEnterCriticalRegionAndAcquireResourceShared
 * 00000001C014F3CB: nop     dword ptr [rax+rax+00h]
 * 00000001C014F3D0: call    EtwTraceAcquiredSharedUserCrit
 * 00000001C014F3D5: mov     rcx, rdi
 * 00000001C014F3D8: xor     ebx, ebx
 * 00000001C014F3DA: call    HMValidateCatHandleNoRip
 * 00000001C014F3DF: test    rax, rax
 * 00000001C014F3E2: jz      short loc_1C014F417
 * 00000001C014F3E4: mov     rdi, [rax+10h]
 * 00000001C014F3E8: mov     rcx, [rdi]; Thread
 * 00000001C014F3EB: call    cs:__imp_PsGetThreadId
 * 00000001C014F3F2: nop     dword ptr [rax+rax+00h]
 * 00000001C014F3F7: mov     rbx, rax
 * 00000001C014F3FA: test    rsi, rsi
 * 00000001C014F3FD: jz      short loc_1C014F417
 * 00000001C014F3FF: mov     rcx, [rdi+1A8h]
 * 00000001C014F406: mov     rcx, [rcx]; Process
 * 00000001C014F409: call    cs:__imp_PsGetProcessId
 * 00000001C014F410: nop     dword ptr [rax+rax+00h]
 * 00000001C014F415: mov     [rsi], eax
 * 00000001C014F417: call    UserSessionSwitchLeaveCrit
 * 00000001C014F41C: mov     rsi, [rsp+28h+arg_8]
 * 00000001C014F421: mov     eax, ebx
 * 00000001C014F423: mov     rbx, [rsp+28h+arg_0]
 * 00000001C014F428: add     rsp, 20h
 * 00000001C014F42C: pop     rdi
 * 00000001C014F42D: retn
 */
