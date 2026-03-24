/*
 * XREFs of NtUserGetMinuserIdForBaseWindow @ 0x1C0144B10
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0053C40 (EtwTraceAcquiredSharedUserCrit.c)
 *     IsEtwUserCritEnabled @ 0x1C0053DF0 (IsEtwUserCritEnabled.c)
 *     HMValidateHandleNoSecure @ 0x1C00590FC (HMValidateHandleNoSecure.c)
 */

/*
 * Hex-Rays decompilation failed for NtUserGetMinuserIdForBaseWindow @ 0x1C0144B10
 * Reason: Hex-Rays returned no pseudocode for 0x1C0144B10
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0144B10: mov     [rsp+arg_0], rbx
 * 00000001C0144B15: mov     [rsp+arg_8], rsi
 * 00000001C0144B1A: push    rdi
 * 00000001C0144B1B: sub     rsp, 20h
 * 00000001C0144B1F: mov     rsi, rcx
 * 00000001C0144B22: call    IsEtwUserCritEnabled
 * 00000001C0144B27: xor     ebx, ebx
 * 00000001C0144B29: test    eax, eax
 * 00000001C0144B2B: jz      short loc_1C0144B53
 * 00000001C0144B2D: call    cs:__imp_PsGetCurrentThreadWin32Thread
 * 00000001C0144B34: nop     dword ptr [rax+rax+00h]
 * 00000001C0144B39: mov     rdi, rax
 * 00000001C0144B3C: test    rax, rax
 * 00000001C0144B3F: jz      short loc_1C0144B53
 * 00000001C0144B41: xor     ecx, ecx; PerformanceFrequency
 * 00000001C0144B43: call    cs:__imp_KeQueryPerformanceCounter
 * 00000001C0144B4A: nop     dword ptr [rax+rax+00h]
 * 00000001C0144B4F: mov     [rdi+8], rax
 * 00000001C0144B53: call    cs:__imp_SGDGetUserSessionState
 * 00000001C0144B5A: nop     dword ptr [rax+rax+00h]
 * 00000001C0144B5F: mov     rcx, [rax+8]; Resource
 * 00000001C0144B63: call    cs:__imp_ExEnterCriticalRegionAndAcquireResourceShared
 * 00000001C0144B6A: nop     dword ptr [rax+rax+00h]
 * 00000001C0144B6F: call    EtwTraceAcquiredSharedUserCrit
 * 00000001C0144B74: mov     dl, 17h
 * 00000001C0144B76: mov     rcx, rsi
 * 00000001C0144B79: call    HMValidateHandleNoSecure
 * 00000001C0144B7E: mov     rdi, rax
 * 00000001C0144B81: test    rax, rax
 * 00000001C0144B84: jz      short loc_1C0144BB7
 * 00000001C0144B86: mov     rcx, [rax+10h]
 * 00000001C0144B8A: mov     rsi, [rcx+1A8h]
 * 00000001C0144B91: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C0144B98: nop     dword ptr [rax+rax+00h]
 * 00000001C0144B9D: test    rax, rax
 * 00000001C0144BA0: jz      short loc_1C0144BAE
 * 00000001C0144BA2: mov     rcx, [rax]
 * 00000001C0144BA5: neg     rcx
 * 00000001C0144BA8: sbb     rdx, rdx
 * 00000001C0144BAB: and     rax, rdx
 * 00000001C0144BAE: cmp     rsi, rax
 * 00000001C0144BB1: jnz     short loc_1C0144BB7
 * 00000001C0144BB3: mov     rbx, [rdi+38h]
 * 00000001C0144BB7: call    UserSessionSwitchLeaveCrit
 * 00000001C0144BBC: mov     rsi, [rsp+28h+arg_8]
 * 00000001C0144BC1: mov     rax, rbx
 * 00000001C0144BC4: mov     rbx, [rsp+28h+arg_0]
 * 00000001C0144BC9: add     rsp, 20h
 * 00000001C0144BCD: pop     rdi
 * 00000001C0144BCE: retn
 */
