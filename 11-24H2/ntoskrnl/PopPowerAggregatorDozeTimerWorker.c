/*
 * XREFs of PopPowerAggregatorDozeTimerWorker @ 0x140757680
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopIdleCancelAoAcDozeS4Timer @ 0x1404ACF80 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x1404CF814 (PopIdleArmAoAcDozeS4Timer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopPowerAggregatorEvaluateDozeTimers @ 0x1406F33DC (PopPowerAggregatorEvaluateDozeTimers.c)
 *     PopPowerAggregatorDiagTraceEvent @ 0x1409A0774 (PopPowerAggregatorDiagTraceEvent.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x1409A2738 (PopPowerAggregatorHandleIntentUnsafe.c)
 *     PopSmartSuspendMakePredictions @ 0x140ABAB98 (PopSmartSuspendMakePredictions.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopPowerAggregatorDozeTimerWorker @ 0x140757680
 * Reason: Hex-Rays returned no pseudocode for 0x140757680
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140757680: mov     [rsp+arg_8], rbx
 * 0000000140757685: mov     [rsp+arg_10], rsi
 * 000000014075768A: push    rdi
 * 000000014075768B: sub     rsp, 40h
 * 000000014075768F: mov     rax, cs:__security_cookie
 * 0000000140757696: xor     rax, rsp
 * 0000000140757699: mov     [rsp+48h+var_10], rax
 * 000000014075769E: movsxd  rax, ecx
 * 00000001407576A1: mov     rsi, rcx
 * 00000001407576A4: imul    rdi, rax, 0C8h
 * 00000001407576AB: lea     rax, unk_140F08D98
 * 00000001407576B2: add     rdi, rax
 * 00000001407576B5: mov     eax, [rdi+0A8h]
 * 00000001407576BB: mov     ecx, eax
 * 00000001407576BD: and     cl, 3
 * 00000001407576C0: cmp     cl, 1
 * 00000001407576C3: jnz     loc_1407577C5
 * 00000001407576C9: mov     ebx, eax
 * 00000001407576CB: and     ebx, 0FFFFFFFEh
 * 00000001407576CE: or      ebx, 2
 * 00000001407576D1: lock cmpxchg [rdi+0A8h], ebx
 * 00000001407576D9: and     al, 3
 * 00000001407576DB: cmp     al, cl
 * 00000001407576DD: jnz     loc_1407577C5
 * 00000001407576E3: call    PopAcquirePolicyLock
 * 00000001407576E8: lea     rcx, PopPowerAggregatorLock
 * 00000001407576EF: call    PopAcquireRwLockExclusive
 * 00000001407576F4: mov     eax, [rdi+0A8h]
 * 00000001407576FA: cmp     eax, ebx
 * 00000001407576FC: jnz     loc_1407577B2
 * 0000000140757702: and     dword ptr [rsp+48h+UserData.0Ch], 0
 * 0000000140757707: lea     rax, [rsp+48h+var_28]
 * 000000014075770C: lea     r8, [rsp+48h+UserData]; UserData
 * 0000000140757711: mov     [rsp+48h+UserData.Ptr], rax
 * 0000000140757716: mov     edx, 1; UserDataCount
 * 000000014075771B: mov     [rsp+48h+var_28], esi
 * 000000014075771F: lea     rcx, POP_ETW_EVENT_POWER_AGGREGATOR_DOZE_TIMER_TRIGGERED; EventDescriptor
 * 0000000140757726: mov     [rsp+48h+UserData.Size], 4
 * 000000014075772E: call    PopPowerAggregatorDiagTraceEvent
 * 0000000140757733: test    esi, esi
 * 0000000140757735: jz      short loc_140757753
 * 0000000140757737: cmp     esi, 1
 * 000000014075773A: jnz     short loc_140757779
 * 000000014075773C: cmp     dword ptr cs:xmmword_140F08C70, esi
 * 0000000140757742: jnz     short loc_140757779
 * 0000000140757744: cmp     byte ptr cs:xmmword_140F08C80+0Bh, 0
 * 000000014075774B: jz      short loc_140757779
 * 000000014075774D: lea     r9d, [rsi+36h]
 * 0000000140757751: jmp     short loc_140757762
 * 0000000140757753: cmp     dword ptr cs:xmmword_140F08C70, 1
 * 000000014075775A: jnz     short loc_140757779
 * 000000014075775C: mov     r9d, 36h ; '6'
 * 0000000140757762: mov     al, byte ptr cs:xmmword_140F08C80+8
 * 0000000140757768: neg     al
 * 000000014075776A: sbb     ecx, ecx
 * 000000014075776C: xor     r8d, r8d
 * 000000014075776F: add     ecx, 3
 * 0000000140757772: xor     edx, edx
 * 0000000140757774: call    PopPowerAggregatorHandleIntentUnsafe
 * 0000000140757779: and     ebx, 0FFFFFFFCh
 * 000000014075777C: lea     rcx, [rdi+0B0h]; Event
 * 0000000140757783: xchg    ebx, [rdi+0A8h]
 * 0000000140757789: xor     r8d, r8d; Wait
 * 000000014075778C: xor     edx, edx; Increment
 * 000000014075778E: call    KeSetEvent
 * 0000000140757793: cmp     esi, 1
 * 0000000140757796: jnz     short loc_1407577B2
 * 0000000140757798: lea     ecx, [rsi+1]
 * 000000014075779B: call    PopSmartSuspendMakePredictions
 * 00000001407577A0: call    PopPowerAggregatorEvaluateDozeTimers
 * 00000001407577A5: lea     ecx, [rsi+2]
 * 00000001407577A8: call    PopIdleCancelAoAcDozeS4Timer
 * 00000001407577AD: call    PopIdleArmAoAcDozeS4Timer
 * 00000001407577B2: lea     rcx, PopPowerAggregatorLock
 * 00000001407577B9: call    PopReleaseRwLock
 * 00000001407577BE: call    PopReleasePolicyLock
 * 00000001407577C3: jmp     short loc_1407577D6
 * 00000001407577C5: lea     rcx, [rdi+0B0h]; Event
 * 00000001407577CC: xor     r8d, r8d; Wait
 * 00000001407577CF: xor     edx, edx; Increment
 * 00000001407577D1: call    KeSetEvent
 * 00000001407577D6: mov     rcx, [rsp+48h+var_10]
 * 00000001407577DB: xor     rcx, rsp; StackCookie
 * 00000001407577DE: call    __security_check_cookie
 * 00000001407577E3: mov     rbx, [rsp+48h+arg_8]
 * 00000001407577E8: mov     rsi, [rsp+48h+arg_10]
 * 00000001407577ED: add     rsp, 40h
 * 00000001407577F1: pop     rdi
 * 00000001407577F2: retn
 */
