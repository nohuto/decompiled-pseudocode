/*
 * XREFs of NtUserGetKeyboardType @ 0x1C0144A90
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0053C40 (EtwTraceAcquiredSharedUserCrit.c)
 *     IsEtwUserCritEnabled @ 0x1C0053DF0 (IsEtwUserCritEnabled.c)
 *     _GetKeyboardType @ 0x1C01EAE6C (_GetKeyboardType.c)
 */

/*
 * Hex-Rays decompilation failed for NtUserGetKeyboardType @ 0x1C0144A90
 * Reason: Hex-Rays returned no pseudocode for 0x1C0144A90
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0144A90: mov     [rsp+arg_0], rbx
 * 00000001C0144A95: push    rdi
 * 00000001C0144A96: sub     rsp, 20h
 * 00000001C0144A9A: mov     edi, ecx
 * 00000001C0144A9C: call    IsEtwUserCritEnabled
 * 00000001C0144AA1: test    eax, eax
 * 00000001C0144AA3: jz      short loc_1C0144ACB
 * 00000001C0144AA5: call    cs:__imp_PsGetCurrentThreadWin32Thread
 * 00000001C0144AAC: nop     dword ptr [rax+rax+00h]
 * 00000001C0144AB1: mov     rbx, rax
 * 00000001C0144AB4: test    rax, rax
 * 00000001C0144AB7: jz      short loc_1C0144ACB
 * 00000001C0144AB9: xor     ecx, ecx; PerformanceFrequency
 * 00000001C0144ABB: call    cs:__imp_KeQueryPerformanceCounter
 * 00000001C0144AC2: nop     dword ptr [rax+rax+00h]
 * 00000001C0144AC7: mov     [rbx+8], rax
 * 00000001C0144ACB: call    cs:__imp_SGDGetUserSessionState
 * 00000001C0144AD2: nop     dword ptr [rax+rax+00h]
 * 00000001C0144AD7: mov     rcx, [rax+8]; Resource
 * 00000001C0144ADB: call    cs:__imp_ExEnterCriticalRegionAndAcquireResourceShared
 * 00000001C0144AE2: nop     dword ptr [rax+rax+00h]
 * 00000001C0144AE7: call    EtwTraceAcquiredSharedUserCrit
 * 00000001C0144AEC: mov     ecx, edi
 * 00000001C0144AEE: call    _GetKeyboardType
 * 00000001C0144AF3: movsxd  rbx, eax
 * 00000001C0144AF6: call    UserSessionSwitchLeaveCrit
 * 00000001C0144AFB: mov     rax, rbx
 * 00000001C0144AFE: mov     rbx, [rsp+28h+arg_0]
 * 00000001C0144B03: add     rsp, 20h
 * 00000001C0144B07: pop     rdi
 * 00000001C0144B08: retn
 */
