/*
 * XREFs of PopCoalescingNotify @ 0x14074F2C0
 * Callers:
 *     <none>
 * Callees:
 *     KeCancelTimer @ 0x1402BE1D0 (KeCancelTimer.c)
 *     PopCoalescingSetTimer @ 0x14047F5A0 (PopCoalescingSetTimer.c)
 *     PopPrintEx @ 0x14047F604 (PopPrintEx.c)
 *     PopDiagTraceEventNoPayload @ 0x1404874D4 (PopDiagTraceEventNoPayload.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x1404B2150 (PopEnsureCoalescingWorkerWillRun.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopCoalescingNotify @ 0x14074F2C0
 * Reason: Hex-Rays returned no pseudocode for 0x14074F2C0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014074F2C0: sub     rsp, 28h
 * 000000014074F2C4: call    PopAcquirePolicyLock
 * 000000014074F2C9: test    cs:PopCoalescingState, 2
 * 000000014074F2D0: jz      short loc_14074F320
 * 000000014074F2D2: lea     rcx, PopCoalescingTimer; PKTIMER
 * 000000014074F2D9: call    KeCancelTimer
 * 000000014074F2DE: or      cs:PopCoalescingState, 4
 * 000000014074F2E5: call    PopEnsureCoalescingWorkerWillRun
 * 000000014074F2EA: lea     rdx, aPopcoalescingF; "PopCoalescing: FLUSH notification sent."...
 * 000000014074F2F1: mov     ecx, 3
 * 000000014074F2F6: call    PopPrintEx
 * 000000014074F2FB: lea     rcx, POP_ETW_IO_COALESCING_FLUSH; EventDescriptor
 * 000000014074F302: call    PopDiagTraceEventNoPayload
 * 000000014074F307: mov     rax, 0FFFFF78000000008h
 * 000000014074F311: mov     rax, [rax]
 * 000000014074F314: mov     cs:PopCoalescingLastFlushTime, rax
 * 000000014074F31B: call    PopCoalescingSetTimer
 * 000000014074F320: call    PopReleasePolicyLock
 * 000000014074F325: mov     rax, gs:188h
 * 000000014074F32E: cmp     dword ptr [rax+1E4h], 0
 * 000000014074F335: jz      short loc_14074F33E
 * 000000014074F337: mov     ecx, 20h ; ' '
 * 000000014074F33C: int     29h; Win8: RtlFailFast(ecx)
 * 000000014074F33E: xor     eax, eax
 * 000000014074F340: add     rsp, 28h
 * 000000014074F344: retn
 */
