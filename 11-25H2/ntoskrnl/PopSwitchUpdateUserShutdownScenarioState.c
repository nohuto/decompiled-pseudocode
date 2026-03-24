/*
 * XREFs of PopSwitchUpdateUserShutdownScenarioState @ 0x140748030
 * Callers:
 *     PoUserShutdownCancelled @ 0x1406EFBC0 (PoUserShutdownCancelled.c)
 *     PoUserShutdownInitiated @ 0x140A9B420 (PoUserShutdownInitiated.c)
 * Callees:
 *     SleepstudyHelperBlockerActiveDereference @ 0x14044E0C0 (SleepstudyHelperBlockerActiveDereference.c)
 *     SleepstudyHelperBlockerActiveReference @ 0x14044E160 (SleepstudyHelperBlockerActiveReference.c)
 *     PpmEndHighPerfRequest @ 0x14046D2B4 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x14046D320 (PpmBeginHighPerfRequest.c)
 *     PopQueueWorkItem @ 0x140497BA0 (PopQueueWorkItem.c)
 *     Feature_RsUserModeShutdown__private_IsEnabledDeviceUsageNoInline @ 0x1405CF098 (Feature_RsUserModeShutdown__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PopTransitionCheckpoint @ 0x140A1C604 (PopTransitionCheckpoint.c)
 *     PdcTaskClientRequest @ 0x140A86C44 (PdcTaskClientRequest.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopSwitchUpdateUserShutdownScenarioState @ 0x140748030
 * Reason: Hex-Rays returned no pseudocode for 0x140748030
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140748030: mov     [rsp+arg_0], rbx
 * 0000000140748035: push    rdi
 * 0000000140748036: sub     rsp, 20h
 * 000000014074803A: mov     ebx, ecx
 * 000000014074803C: call    PopAcquirePolicyLock
 * 0000000140748041: cmp     cs:PopUserShutdownScenarioTargetState, ebx
 * 0000000140748047: jz      loc_14074817E
 * 000000014074804D: mov     eax, cs:PopUserShutdownScenarioCurrentState
 * 0000000140748053: mov     cs:PopUserShutdownScenarioTargetState, ebx
 * 0000000140748059: mov     cs:PopUserShutdownScenarioUserInitiated, 1
 * 0000000140748060: test    eax, 0FFFFFFFDh
 * 0000000140748065: jz      loc_14074817E
 * 000000014074806B: cmp     eax, ebx
 * 000000014074806D: jz      loc_14074817E
 * 0000000140748073: mov     edi, ebx
 * 0000000140748075: mov     bl, cs:PopUserShutdownScenarioUserInitiated
 * 000000014074807B: lea     eax, [rdi-1]
 * 000000014074807E: mov     cs:PopUserShutdownScenarioCurrentState, eax
 * 0000000140748084: call    PopReleasePolicyLock
 * 0000000140748089: mov     ecx, edi
 * 000000014074808B: sub     ecx, 1
 * 000000014074808E: jz      short loc_140748103
 * 0000000140748090: cmp     ecx, 2
 * 0000000140748093: jnz     loc_140748165
 * 0000000140748099: xor     edx, edx
 * 000000014074809B: lea     ecx, [rdx+7]
 * 000000014074809E: call    PopTransitionCheckpoint
 * 00000001407480A3: mov     edx, 1
 * 00000001407480A8: lea     rcx, PopSetUserShutdownMarkerWorkItem
 * 00000001407480AF: call    PopQueueWorkItem
 * 00000001407480B4: mov     rax, cs:qword_140E67208
 * 00000001407480BB: mov     cs:PopBsdShutdownInProgress, 1
 * 00000001407480C5: test    rax, rax
 * 00000001407480C8: jz      short loc_1407480CF
 * 00000001407480CA: call    _guard_dispatch_icall_no_overrides
 * 00000001407480CF: mov     rcx, cs:PopUserShutdownTaskClient
 * 00000001407480D6: test    rcx, rcx
 * 00000001407480D9: jz      short loc_1407480FC
 * 00000001407480DB: mov     dl, 1
 * 00000001407480DD: call    PdcTaskClientRequest
 * 00000001407480E2: call    Feature_RsUserModeShutdown__private_IsEnabledDeviceUsageNoInline
 * 00000001407480E7: test    eax, eax
 * 00000001407480E9: jz      short loc_1407480FC
 * 00000001407480EB: mov     rcx, cs:PopUserShutdownWinlogonBlockerHandle; SpinLock
 * 00000001407480F2: test    rcx, rcx
 * 00000001407480F5: jz      short loc_1407480FC
 * 00000001407480F7: call    SleepstudyHelperBlockerActiveReference
 * 00000001407480FC: call    PpmBeginHighPerfRequest
 * 0000000140748101: jmp     short loc_140748165
 * 0000000140748103: mov     edx, 1
 * 0000000140748108: lea     rcx, PopClearUserShutdownMarkerWorkItem
 * 000000014074810F: call    PopQueueWorkItem
 * 0000000140748114: mov     rax, cs:qword_140E67210
 * 000000014074811B: and     cs:PopBsdShutdownInProgress, 0
 * 0000000140748122: test    rax, rax
 * 0000000140748125: jz      short loc_14074812E
 * 0000000140748127: mov     cl, bl
 * 0000000140748129: call    _guard_dispatch_icall_no_overrides
 * 000000014074812E: mov     rcx, cs:PopUserShutdownTaskClient
 * 0000000140748135: test    rcx, rcx
 * 0000000140748138: jz      short loc_14074815B
 * 000000014074813A: xor     edx, edx
 * 000000014074813C: call    PdcTaskClientRequest
 * 0000000140748141: call    Feature_RsUserModeShutdown__private_IsEnabledDeviceUsageNoInline
 * 0000000140748146: test    eax, eax
 * 0000000140748148: jz      short loc_14074815B
 * 000000014074814A: mov     rcx, cs:PopUserShutdownWinlogonBlockerHandle; SpinLock
 * 0000000140748151: test    rcx, rcx
 * 0000000140748154: jz      short loc_14074815B
 * 0000000140748156: call    SleepstudyHelperBlockerActiveDereference
 * 000000014074815B: mov     ecx, 3
 * 0000000140748160: call    PpmEndHighPerfRequest
 * 0000000140748165: call    PopAcquirePolicyLock
 * 000000014074816A: mov     ebx, cs:PopUserShutdownScenarioTargetState
 * 0000000140748170: mov     cs:PopUserShutdownScenarioCurrentState, edi
 * 0000000140748176: cmp     edi, ebx
 * 0000000140748178: jnz     loc_140748073
 * 000000014074817E: call    PopReleasePolicyLock
 * 0000000140748183: mov     rbx, [rsp+28h+arg_0]
 * 0000000140748188: add     rsp, 20h
 * 000000014074818C: pop     rdi
 * 000000014074818D: retn
 */
