/*
 * XREFs of PopPowerAggregatorDozeTimerWorker @ 0x140759220
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopIdleCancelAoAcDozeS4Timer @ 0x1404B26F0 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x1404D63C4 (PopIdleArmAoAcDozeS4Timer.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PopPowerAggregatorEvaluateDozeTimers @ 0x1406F53DC (PopPowerAggregatorEvaluateDozeTimers.c)
 *     PopPowerAggregatorDiagTraceEvent @ 0x1409BA124 (PopPowerAggregatorDiagTraceEvent.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x1409BC0E8 (PopPowerAggregatorHandleIntentUnsafe.c)
 *     PopSmartSuspendMakePredictions @ 0x140ABFAB8 (PopSmartSuspendMakePredictions.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopPowerAggregatorDozeTimerWorker @ 0x140759220
 * Reason: Hex-Rays returned no pseudocode for 0x140759220
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140759220: mov     [rsp+arg_8], rbx
 * 0000000140759225: mov     [rsp+arg_10], rsi
 * 000000014075922A: push    rdi
 * 000000014075922B: sub     rsp, 40h
 * 000000014075922F: mov     rax, cs:__security_cookie
 * 0000000140759236: xor     rax, rsp
 * 0000000140759239: mov     [rsp+48h+var_10], rax
 * 000000014075923E: movsxd  rax, ecx
 * 0000000140759241: mov     rsi, rcx
 * 0000000140759244: imul    rdi, rax, 0C8h
 * 000000014075924B: lea     rax, unk_140F08A38
 * 0000000140759252: add     rdi, rax
 * 0000000140759255: mov     eax, [rdi+0A8h]
 * 000000014075925B: mov     ecx, eax
 * 000000014075925D: and     cl, 3
 * 0000000140759260: cmp     cl, 1
 * 0000000140759263: jnz     loc_140759365
 * 0000000140759269: mov     ebx, eax
 * 000000014075926B: and     ebx, 0FFFFFFFEh
 * 000000014075926E: or      ebx, 2
 * 0000000140759271: lock cmpxchg [rdi+0A8h], ebx
 * 0000000140759279: and     al, 3
 * 000000014075927B: cmp     al, cl
 * 000000014075927D: jnz     loc_140759365
 * 0000000140759283: call    PopAcquirePolicyLock
 * 0000000140759288: lea     rcx, PopPowerAggregatorLock
 * 000000014075928F: call    PopAcquireRwLockExclusive
 * 0000000140759294: mov     eax, [rdi+0A8h]
 * 000000014075929A: cmp     eax, ebx
 * 000000014075929C: jnz     loc_140759352
 * 00000001407592A2: and     dword ptr [rsp+48h+UserData.0Ch], 0
 * 00000001407592A7: lea     rax, [rsp+48h+var_28]
 * 00000001407592AC: lea     r8, [rsp+48h+UserData]; UserData
 * 00000001407592B1: mov     [rsp+48h+UserData.Ptr], rax
 * 00000001407592B6: mov     edx, 1; UserDataCount
 * 00000001407592BB: mov     [rsp+48h+var_28], esi
 * 00000001407592BF: lea     rcx, POP_ETW_EVENT_POWER_AGGREGATOR_DOZE_TIMER_TRIGGERED; EventDescriptor
 * 00000001407592C6: mov     [rsp+48h+UserData.Size], 4
 * 00000001407592CE: call    PopPowerAggregatorDiagTraceEvent
 * 00000001407592D3: test    esi, esi
 * 00000001407592D5: jz      short loc_1407592F3
 * 00000001407592D7: cmp     esi, 1
 * 00000001407592DA: jnz     short loc_140759319
 * 00000001407592DC: cmp     dword ptr cs:xmmword_140F08910, esi
 * 00000001407592E2: jnz     short loc_140759319
 * 00000001407592E4: cmp     byte ptr cs:xmmword_140F08920+0Bh, 0
 * 00000001407592EB: jz      short loc_140759319
 * 00000001407592ED: lea     r9d, [rsi+36h]
 * 00000001407592F1: jmp     short loc_140759302
 * 00000001407592F3: cmp     dword ptr cs:xmmword_140F08910, 1
 * 00000001407592FA: jnz     short loc_140759319
 * 00000001407592FC: mov     r9d, 36h ; '6'
 * 0000000140759302: mov     al, byte ptr cs:xmmword_140F08920+8
 * 0000000140759308: neg     al
 * 000000014075930A: sbb     ecx, ecx
 * 000000014075930C: xor     r8d, r8d
 * 000000014075930F: add     ecx, 3
 * 0000000140759312: xor     edx, edx
 * 0000000140759314: call    PopPowerAggregatorHandleIntentUnsafe
 * 0000000140759319: and     ebx, 0FFFFFFFCh
 * 000000014075931C: lea     rcx, [rdi+0B0h]; Event
 * 0000000140759323: xchg    ebx, [rdi+0A8h]
 * 0000000140759329: xor     r8d, r8d; Wait
 * 000000014075932C: xor     edx, edx; Increment
 * 000000014075932E: call    KeSetEvent
 * 0000000140759333: cmp     esi, 1
 * 0000000140759336: jnz     short loc_140759352
 * 0000000140759338: lea     ecx, [rsi+1]
 * 000000014075933B: call    PopSmartSuspendMakePredictions
 * 0000000140759340: call    PopPowerAggregatorEvaluateDozeTimers
 * 0000000140759345: lea     ecx, [rsi+2]
 * 0000000140759348: call    PopIdleCancelAoAcDozeS4Timer
 * 000000014075934D: call    PopIdleArmAoAcDozeS4Timer
 * 0000000140759352: lea     rcx, PopPowerAggregatorLock; BugCheckParameter2
 * 0000000140759359: call    PopReleaseRwLock
 * 000000014075935E: call    PopReleasePolicyLock
 * 0000000140759363: jmp     short loc_140759376
 * 0000000140759365: lea     rcx, [rdi+0B0h]; Event
 * 000000014075936C: xor     r8d, r8d; Wait
 * 000000014075936F: xor     edx, edx; Increment
 * 0000000140759371: call    KeSetEvent
 * 0000000140759376: mov     rcx, [rsp+48h+var_10]
 * 000000014075937B: xor     rcx, rsp; StackCookie
 * 000000014075937E: call    __security_check_cookie
 * 0000000140759383: mov     rbx, [rsp+48h+arg_8]
 * 0000000140759388: mov     rsi, [rsp+48h+arg_10]
 * 000000014075938D: add     rsp, 40h
 * 0000000140759391: pop     rdi
 * 0000000140759392: retn
 */
