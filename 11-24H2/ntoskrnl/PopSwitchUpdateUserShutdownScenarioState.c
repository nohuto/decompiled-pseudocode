/*
 * XREFs of PopSwitchUpdateUserShutdownScenarioState @ 0x140754120
 * Callers:
 *     PoUserShutdownCancelled @ 0x1406FBA30 (PoUserShutdownCancelled.c)
 *     PoUserShutdownInitiated @ 0x140AA11E0 (PoUserShutdownInitiated.c)
 * Callees:
 *     SleepstudyHelperBlockerActiveDereference @ 0x14044DC00 (SleepstudyHelperBlockerActiveDereference.c)
 *     SleepstudyHelperBlockerActiveReference @ 0x14044DCA0 (SleepstudyHelperBlockerActiveReference.c)
 *     PpmEndHighPerfRequest @ 0x14046BC44 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x14046BCB0 (PpmBeginHighPerfRequest.c)
 *     PopQueueWorkItem @ 0x140497478 (PopQueueWorkItem.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PopTransitionCheckpoint @ 0x140A77528 (PopTransitionCheckpoint.c)
 *     PdcTaskClientRequest @ 0x140A8B894 (PdcTaskClientRequest.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopSwitchUpdateUserShutdownScenarioState @ 0x140754120
 * Reason: Hex-Rays returned no pseudocode for 0x140754120
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140754120: mov     [rsp+arg_0], rbx
 * 0000000140754125: push    rdi
 * 0000000140754126: sub     rsp, 20h
 * 000000014075412A: mov     ebx, ecx
 * 000000014075412C: call    PopAcquirePolicyLock
 * 0000000140754131: cmp     cs:PopUserShutdownScenarioTargetState, ebx
 * 0000000140754137: jz      loc_14075425C
 * 000000014075413D: mov     eax, cs:PopUserShutdownScenarioCurrentState
 * 0000000140754143: mov     cs:PopUserShutdownScenarioTargetState, ebx
 * 0000000140754149: mov     cs:PopUserShutdownScenarioUserInitiated, 1
 * 0000000140754150: test    eax, 0FFFFFFFDh
 * 0000000140754155: jz      loc_14075425C
 * 000000014075415B: cmp     eax, ebx
 * 000000014075415D: jz      loc_14075425C
 * 0000000140754163: mov     edi, ebx
 * 0000000140754165: mov     bl, cs:PopUserShutdownScenarioUserInitiated
 * 000000014075416B: lea     eax, [rdi-1]
 * 000000014075416E: mov     cs:PopUserShutdownScenarioCurrentState, eax
 * 0000000140754174: call    PopReleasePolicyLock
 * 0000000140754179: mov     ecx, edi
 * 000000014075417B: sub     ecx, 1
 * 000000014075417E: jz      short loc_1407541EA
 * 0000000140754180: cmp     ecx, 2
 * 0000000140754183: jnz     loc_140754243
 * 0000000140754189: xor     edx, edx
 * 000000014075418B: lea     ecx, [rdx+7]
 * 000000014075418E: call    PopTransitionCheckpoint
 * 0000000140754193: mov     edx, 1
 * 0000000140754198: lea     rcx, PopSetUserShutdownMarkerWorkItem
 * 000000014075419F: call    PopQueueWorkItem
 * 00000001407541A4: mov     rax, cs:qword_140E674E8
 * 00000001407541AB: mov     cs:PopBsdShutdownInProgress, 1
 * 00000001407541B5: test    rax, rax
 * 00000001407541B8: jz      short loc_1407541BF
 * 00000001407541BA: call    _guard_dispatch_icall_no_overrides
 * 00000001407541BF: mov     rcx, cs:PopUserShutdownTaskClient
 * 00000001407541C6: test    rcx, rcx
 * 00000001407541C9: jz      short loc_1407541E3
 * 00000001407541CB: mov     dl, 1
 * 00000001407541CD: call    PdcTaskClientRequest
 * 00000001407541D2: mov     rcx, cs:PopUserShutdownWinlogonBlockerHandle; SpinLock
 * 00000001407541D9: test    rcx, rcx
 * 00000001407541DC: jz      short loc_1407541E3
 * 00000001407541DE: call    SleepstudyHelperBlockerActiveReference
 * 00000001407541E3: call    PpmBeginHighPerfRequest
 * 00000001407541E8: jmp     short loc_140754243
 * 00000001407541EA: mov     edx, 1
 * 00000001407541EF: lea     rcx, PopClearUserShutdownMarkerWorkItem
 * 00000001407541F6: call    PopQueueWorkItem
 * 00000001407541FB: mov     rax, cs:qword_140E674F0
 * 0000000140754202: and     cs:PopBsdShutdownInProgress, 0
 * 0000000140754209: test    rax, rax
 * 000000014075420C: jz      short loc_140754215
 * 000000014075420E: mov     cl, bl
 * 0000000140754210: call    _guard_dispatch_icall_no_overrides
 * 0000000140754215: mov     rcx, cs:PopUserShutdownTaskClient
 * 000000014075421C: test    rcx, rcx
 * 000000014075421F: jz      short loc_140754239
 * 0000000140754221: xor     edx, edx
 * 0000000140754223: call    PdcTaskClientRequest
 * 0000000140754228: mov     rcx, cs:PopUserShutdownWinlogonBlockerHandle; SpinLock
 * 000000014075422F: test    rcx, rcx
 * 0000000140754232: jz      short loc_140754239
 * 0000000140754234: call    SleepstudyHelperBlockerActiveDereference
 * 0000000140754239: mov     ecx, 3
 * 000000014075423E: call    PpmEndHighPerfRequest
 * 0000000140754243: call    PopAcquirePolicyLock
 * 0000000140754248: mov     ebx, cs:PopUserShutdownScenarioTargetState
 * 000000014075424E: mov     cs:PopUserShutdownScenarioCurrentState, edi
 * 0000000140754254: cmp     edi, ebx
 * 0000000140754256: jnz     loc_140754163
 * 000000014075425C: call    PopReleasePolicyLock
 * 0000000140754261: mov     rbx, [rsp+28h+arg_0]
 * 0000000140754266: add     rsp, 20h
 * 000000014075426A: pop     rdi
 * 000000014075426B: retn
 */
