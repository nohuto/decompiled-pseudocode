/*
 * XREFs of PopPowerAggregatorDozeTimerWorker @ 0x14074CF60
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopIdleCancelAoAcDozeS4Timer @ 0x1404B170C (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x1404D6CD4 (PopIdleArmAoAcDozeS4Timer.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PopPowerAggregatorEvaluateDozeTimers @ 0x1406E99E8 (PopPowerAggregatorEvaluateDozeTimers.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140964338 (PopPowerAggregatorHandleIntentUnsafe.c)
 *     PopPowerAggregatorDiagTraceEvent @ 0x140A3D584 (PopPowerAggregatorDiagTraceEvent.c)
 *     PopSmartSuspendMakePredictions @ 0x140AC3C7C (PopSmartSuspendMakePredictions.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopPowerAggregatorDozeTimerWorker @ 0x14074CF60
 * Reason: Hex-Rays returned no pseudocode for 0x14074CF60
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014074CF60: mov     [rsp+arg_8], rbx
 * 000000014074CF65: mov     [rsp+arg_10], rsi
 * 000000014074CF6A: push    rdi
 * 000000014074CF6B: sub     rsp, 40h
 * 000000014074CF6F: mov     rax, cs:RtlCopyFromUser_$fo$
 * 000000014074CF76: xor     rax, rsp
 * 000000014074CF79: mov     [rsp+48h+var_10], rax
 * 000000014074CF7E: movsxd  rax, ecx
 * 000000014074CF81: mov     rsi, rcx
 * 000000014074CF84: imul    rdi, rax, 0C8h
 * 000000014074CF8B: lea     rax, unk_140F083B8
 * 000000014074CF92: add     rdi, rax
 * 000000014074CF95: mov     eax, [rdi+0A8h]
 * 000000014074CF9B: mov     ecx, eax
 * 000000014074CF9D: and     cl, 3
 * 000000014074CFA0: cmp     cl, 1
 * 000000014074CFA3: jnz     loc_14074D0A5
 * 000000014074CFA9: mov     ebx, eax
 * 000000014074CFAB: and     ebx, 0FFFFFFFEh
 * 000000014074CFAE: or      ebx, 2
 * 000000014074CFB1: lock cmpxchg [rdi+0A8h], ebx
 * 000000014074CFB9: and     al, 3
 * 000000014074CFBB: cmp     al, cl
 * 000000014074CFBD: jnz     loc_14074D0A5
 * 000000014074CFC3: call    PopAcquirePolicyLock
 * 000000014074CFC8: lea     rcx, PopPowerAggregatorLock
 * 000000014074CFCF: call    PopAcquireRwLockExclusive
 * 000000014074CFD4: mov     eax, [rdi+0A8h]
 * 000000014074CFDA: cmp     eax, ebx
 * 000000014074CFDC: jnz     loc_14074D092
 * 000000014074CFE2: and     dword ptr [rsp+48h+UserData.0Ch], 0
 * 000000014074CFE7: lea     rax, [rsp+48h+var_28]
 * 000000014074CFEC: lea     r8, [rsp+48h+UserData]; UserData
 * 000000014074CFF1: mov     [rsp+48h+UserData.Ptr], rax
 * 000000014074CFF6: mov     edx, 1; UserDataCount
 * 000000014074CFFB: mov     [rsp+48h+var_28], esi
 * 000000014074CFFF: lea     rcx, POP_ETW_EVENT_POWER_AGGREGATOR_DOZE_TIMER_TRIGGERED; EventDescriptor
 * 000000014074D006: mov     [rsp+48h+UserData.Size], 4
 * 000000014074D00E: call    PopPowerAggregatorDiagTraceEvent
 * 000000014074D013: test    esi, esi
 * 000000014074D015: jz      short loc_14074D033
 * 000000014074D017: cmp     esi, 1
 * 000000014074D01A: jnz     short loc_14074D059
 * 000000014074D01C: cmp     dword ptr cs:xmmword_140F08290, esi
 * 000000014074D022: jnz     short loc_14074D059
 * 000000014074D024: cmp     byte ptr cs:xmmword_140F082A0+0Bh, 0
 * 000000014074D02B: jz      short loc_14074D059
 * 000000014074D02D: lea     r9d, [rsi+36h]
 * 000000014074D031: jmp     short loc_14074D042
 * 000000014074D033: cmp     dword ptr cs:xmmword_140F08290, 1
 * 000000014074D03A: jnz     short loc_14074D059
 * 000000014074D03C: mov     r9d, 36h ; '6'
 * 000000014074D042: mov     al, byte ptr cs:xmmword_140F082A0+8
 * 000000014074D048: neg     al
 * 000000014074D04A: sbb     ecx, ecx
 * 000000014074D04C: xor     r8d, r8d
 * 000000014074D04F: add     ecx, 3
 * 000000014074D052: xor     edx, edx
 * 000000014074D054: call    PopPowerAggregatorHandleIntentUnsafe
 * 000000014074D059: and     ebx, 0FFFFFFFCh
 * 000000014074D05C: lea     rcx, [rdi+0B0h]; Event
 * 000000014074D063: xchg    ebx, [rdi+0A8h]
 * 000000014074D069: xor     r8d, r8d; Wait
 * 000000014074D06C: xor     edx, edx; Increment
 * 000000014074D06E: call    KeSetEvent
 * 000000014074D073: cmp     esi, 1
 * 000000014074D076: jnz     short loc_14074D092
 * 000000014074D078: lea     ecx, [rsi+1]
 * 000000014074D07B: call    PopSmartSuspendMakePredictions
 * 000000014074D080: call    PopPowerAggregatorEvaluateDozeTimers
 * 000000014074D085: lea     ecx, [rsi+2]
 * 000000014074D088: call    PopIdleCancelAoAcDozeS4Timer
 * 000000014074D08D: call    PopIdleArmAoAcDozeS4Timer
 * 000000014074D092: lea     rcx, PopPowerAggregatorLock
 * 000000014074D099: call    PopReleaseRwLock
 * 000000014074D09E: call    PopReleasePolicyLock
 * 000000014074D0A3: jmp     short loc_14074D0B6
 * 000000014074D0A5: lea     rcx, [rdi+0B0h]; Event
 * 000000014074D0AC: xor     r8d, r8d; Wait
 * 000000014074D0AF: xor     edx, edx; Increment
 * 000000014074D0B1: call    KeSetEvent
 * 000000014074D0B6: mov     rcx, [rsp+48h+var_10]
 * 000000014074D0BB: xor     rcx, rsp; StackCookie
 * 000000014074D0BE: call    __security_check_cookie
 * 000000014074D0C3: mov     rbx, [rsp+48h+arg_8]
 * 000000014074D0C8: mov     rsi, [rsp+48h+arg_10]
 * 000000014074D0CD: add     rsp, 40h
 * 000000014074D0D1: pop     rdi
 * 000000014074D0D2: retn
 */
