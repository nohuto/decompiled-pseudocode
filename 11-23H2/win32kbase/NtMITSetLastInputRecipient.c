/*
 * XREFs of NtMITSetLastInputRecipient @ 0x1C0142140
 * Callers:
 *     <none>
 * Callees:
 *     ?SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z @ 0x1C000B5F0 (-SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0053C40 (EtwTraceAcquiredSharedUserCrit.c)
 *     IsEtwUserCritEnabled @ 0x1C0053DF0 (IsEtwUserCritEnabled.c)
 *     IsInputThread @ 0x1C0057E50 (IsInputThread.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     PtiFromThreadId @ 0x1C0098730 (PtiFromThreadId.c)
 */

/*
 * Hex-Rays decompilation failed for NtMITSetLastInputRecipient @ 0x1C0142140
 * Reason: Hex-Rays returned no pseudocode for 0x1C0142140
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0142140: mov     [rsp+arg_0], rbx
 * 00000001C0142145: mov     [rsp+arg_8], rsi
 * 00000001C014214A: push    rdi
 * 00000001C014214B: sub     rsp, 20h
 * 00000001C014214F: mov     esi, ecx
 * 00000001C0142151: call    IsEtwUserCritEnabled
 * 00000001C0142156: xor     ebx, ebx
 * 00000001C0142158: test    eax, eax
 * 00000001C014215A: jz      short loc_1C0142182
 * 00000001C014215C: call    cs:__imp_PsGetCurrentThreadWin32Thread
 * 00000001C0142163: nop     dword ptr [rax+rax+00h]
 * 00000001C0142168: mov     rdi, rax
 * 00000001C014216B: test    rax, rax
 * 00000001C014216E: jz      short loc_1C0142182
 * 00000001C0142170: xor     ecx, ecx; PerformanceFrequency
 * 00000001C0142172: call    cs:__imp_KeQueryPerformanceCounter
 * 00000001C0142179: nop     dword ptr [rax+rax+00h]
 * 00000001C014217E: mov     [rdi+8], rax
 * 00000001C0142182: call    cs:__imp_SGDGetUserSessionState
 * 00000001C0142189: nop     dword ptr [rax+rax+00h]
 * 00000001C014218E: mov     rcx, [rax+8]; Resource
 * 00000001C0142192: call    cs:__imp_ExEnterCriticalRegionAndAcquireResourceShared
 * 00000001C0142199: nop     dword ptr [rax+rax+00h]
 * 00000001C014219E: call    EtwTraceAcquiredSharedUserCrit
 * 00000001C01421A3: call    IsInputThread
 * 00000001C01421A8: test    al, al
 * 00000001C01421AA: jnz     short loc_1C01421B8
 * 00000001C01421AC: mov     ecx, 5
 * 00000001C01421B1: call    UserSetLastError
 * 00000001C01421B6: jmp     short loc_1C01421E0
 * 00000001C01421B8: mov     ecx, esi
 * 00000001C01421BA: call    PtiFromThreadId
 * 00000001C01421BF: test    rax, rax
 * 00000001C01421C2: jnz     short loc_1C01421C9
 * 00000001C01421C4: lea     ecx, [rax+57h]
 * 00000001C01421C7: jmp     short loc_1C01421B1
 * 00000001C01421C9: mov     rcx, qword ptr cs:WPP_MAIN_CB+148h; this
 * 00000001C01421D0: xor     r8d, r8d; bool
 * 00000001C01421D3: mov     rdx, rax; struct tagTHREADINFO *
 * 00000001C01421D6: call    ?SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z; CInputGlobals::SetPtiLastWoken(tagTHREADINFO *,bool)
 * 00000001C01421DB: mov     ebx, 1
 * 00000001C01421E0: call    UserSessionSwitchLeaveCrit
 * 00000001C01421E5: mov     rsi, [rsp+28h+arg_8]
 * 00000001C01421EA: mov     rax, rbx
 * 00000001C01421ED: mov     rbx, [rsp+28h+arg_0]
 * 00000001C01421F2: add     rsp, 20h
 * 00000001C01421F6: pop     rdi
 * 00000001C01421F7: retn
 */
