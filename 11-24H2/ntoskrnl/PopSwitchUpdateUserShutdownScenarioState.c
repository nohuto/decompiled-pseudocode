/*
 * XREFs of PopSwitchUpdateUserShutdownScenarioState @ 0x140752440
 * Callers:
 *     PoUserShutdownCancelled @ 0x1406F9670 (PoUserShutdownCancelled.c)
 *     PoUserShutdownInitiated @ 0x140A9C570 (PoUserShutdownInitiated.c)
 * Callees:
 *     SleepstudyHelperBlockerActiveDereference @ 0x140444B00 (SleepstudyHelperBlockerActiveDereference.c)
 *     SleepstudyHelperBlockerActiveReference @ 0x140444BA0 (SleepstudyHelperBlockerActiveReference.c)
 *     PpmEndHighPerfRequest @ 0x1404648C4 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x140464930 (PpmBeginHighPerfRequest.c)
 *     PopQueueWorkItem @ 0x140491E08 (PopQueueWorkItem.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PopTransitionCheckpoint @ 0x140A71648 (PopTransitionCheckpoint.c)
 *     PdcTaskClientRequest @ 0x140A87D84 (PdcTaskClientRequest.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopSwitchUpdateUserShutdownScenarioState @ 0x140752440
 * Reason: Hex-Rays returned no pseudocode for 0x140752440
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140752440: mov     [rsp+arg_0], rbx
 * 0000000140752445: push    rdi
 * 0000000140752446: sub     rsp, 20h
 * 000000014075244A: mov     ebx, ecx
 * 000000014075244C: call    PopAcquirePolicyLock
 * 0000000140752451: cmp     cs:PopUserShutdownScenarioTargetState, ebx
 * 0000000140752457: jz      loc_14075257C
 * 000000014075245D: mov     eax, cs:PopUserShutdownScenarioCurrentState
 * 0000000140752463: mov     cs:PopUserShutdownScenarioTargetState, ebx
 * 0000000140752469: mov     cs:PopUserShutdownScenarioUserInitiated, 1
 * 0000000140752470: test    eax, 0FFFFFFFDh
 * 0000000140752475: jz      loc_14075257C
 * 000000014075247B: cmp     eax, ebx
 * 000000014075247D: jz      loc_14075257C
 * 0000000140752483: mov     edi, ebx
 * 0000000140752485: mov     bl, cs:PopUserShutdownScenarioUserInitiated
 * 000000014075248B: lea     eax, [rdi-1]
 * 000000014075248E: mov     cs:PopUserShutdownScenarioCurrentState, eax
 * 0000000140752494: call    PopReleasePolicyLock
 * 0000000140752499: mov     ecx, edi
 * 000000014075249B: sub     ecx, 1
 * 000000014075249E: jz      short loc_14075250A
 * 00000001407524A0: cmp     ecx, 2
 * 00000001407524A3: jnz     loc_140752563
 * 00000001407524A9: xor     edx, edx
 * 00000001407524AB: lea     ecx, [rdx+7]
 * 00000001407524AE: call    PopTransitionCheckpoint
 * 00000001407524B3: mov     edx, 1
 * 00000001407524B8: lea     rcx, PopSetUserShutdownMarkerWorkItem
 * 00000001407524BF: call    PopQueueWorkItem
 * 00000001407524C4: mov     rax, cs:qword_140E67658
 * 00000001407524CB: mov     cs:PopBsdShutdownInProgress, 1
 * 00000001407524D5: test    rax, rax
 * 00000001407524D8: jz      short loc_1407524DF
 * 00000001407524DA: call    _guard_dispatch_icall_no_overrides
 * 00000001407524DF: mov     rcx, cs:PopUserShutdownTaskClient
 * 00000001407524E6: test    rcx, rcx
 * 00000001407524E9: jz      short loc_140752503
 * 00000001407524EB: mov     dl, 1
 * 00000001407524ED: call    PdcTaskClientRequest
 * 00000001407524F2: mov     rcx, cs:PopUserShutdownWinlogonBlockerHandle; SpinLock
 * 00000001407524F9: test    rcx, rcx
 * 00000001407524FC: jz      short loc_140752503
 * 00000001407524FE: call    SleepstudyHelperBlockerActiveReference
 * 0000000140752503: call    PpmBeginHighPerfRequest
 * 0000000140752508: jmp     short loc_140752563
 * 000000014075250A: mov     edx, 1
 * 000000014075250F: lea     rcx, PopClearUserShutdownMarkerWorkItem
 * 0000000140752516: call    PopQueueWorkItem
 * 000000014075251B: mov     rax, cs:qword_140E67660
 * 0000000140752522: and     cs:PopBsdShutdownInProgress, 0
 * 0000000140752529: test    rax, rax
 * 000000014075252C: jz      short loc_140752535
 * 000000014075252E: mov     cl, bl
 * 0000000140752530: call    _guard_dispatch_icall_no_overrides
 * 0000000140752535: mov     rcx, cs:PopUserShutdownTaskClient
 * 000000014075253C: test    rcx, rcx
 * 000000014075253F: jz      short loc_140752559
 * 0000000140752541: xor     edx, edx
 * 0000000140752543: call    PdcTaskClientRequest
 * 0000000140752548: mov     rcx, cs:PopUserShutdownWinlogonBlockerHandle; SpinLock
 * 000000014075254F: test    rcx, rcx
 * 0000000140752552: jz      short loc_140752559
 * 0000000140752554: call    SleepstudyHelperBlockerActiveDereference
 * 0000000140752559: mov     ecx, 3
 * 000000014075255E: call    PpmEndHighPerfRequest
 * 0000000140752563: call    PopAcquirePolicyLock
 * 0000000140752568: mov     ebx, cs:PopUserShutdownScenarioTargetState
 * 000000014075256E: mov     cs:PopUserShutdownScenarioCurrentState, edi
 * 0000000140752574: cmp     edi, ebx
 * 0000000140752576: jnz     loc_140752483
 * 000000014075257C: call    PopReleasePolicyLock
 * 0000000140752581: mov     rbx, [rsp+28h+arg_0]
 * 0000000140752586: add     rsp, 20h
 * 000000014075258A: pop     rdi
 * 000000014075258B: retn
 */
