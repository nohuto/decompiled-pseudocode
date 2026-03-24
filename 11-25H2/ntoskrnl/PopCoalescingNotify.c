/*
 * XREFs of PopCoalescingNotify @ 0x140744ED0
 * Callers:
 *     <none>
 * Callees:
 *     KeCancelTimer @ 0x1402ECAA0 (KeCancelTimer.c)
 *     PopCoalescingSetTimer @ 0x1403A7FF4 (PopCoalescingSetTimer.c)
 *     PopPrintEx @ 0x1403A9514 (PopPrintEx.c)
 *     PopDiagTraceEventNoPayload @ 0x140488BD4 (PopDiagTraceEventNoPayload.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x1404B810C (PopEnsureCoalescingWorkerWillRun.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopCoalescingNotify @ 0x140744ED0
 * Reason: Hex-Rays returned no pseudocode for 0x140744ED0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140744ED0: sub     rsp, 28h
 * 0000000140744ED4: call    PopAcquirePolicyLock
 * 0000000140744ED9: test    cs:PopCoalescingState, 2
 * 0000000140744EE0: jz      short loc_140744F30
 * 0000000140744EE2: lea     rcx, PopCoalescingTimer; PKTIMER
 * 0000000140744EE9: call    KeCancelTimer
 * 0000000140744EEE: or      cs:PopCoalescingState, 4
 * 0000000140744EF5: call    PopEnsureCoalescingWorkerWillRun
 * 0000000140744EFA: lea     rdx, aPopcoalescingF; "PopCoalescing: FLUSH notification sent."...
 * 0000000140744F01: mov     ecx, 3
 * 0000000140744F06: call    PopPrintEx
 * 0000000140744F0B: lea     rcx, POP_ETW_IO_COALESCING_FLUSH; EventDescriptor
 * 0000000140744F12: call    PopDiagTraceEventNoPayload
 * 0000000140744F17: mov     rax, 0FFFFF78000000008h
 * 0000000140744F21: mov     rax, [rax]
 * 0000000140744F24: mov     cs:PopCoalescingLastFlushTime, rax
 * 0000000140744F2B: call    PopCoalescingSetTimer
 * 0000000140744F30: call    PopReleasePolicyLock
 * 0000000140744F35: mov     rax, gs:188h
 * 0000000140744F3E: cmp     dword ptr [rax+1E4h], 0
 * 0000000140744F45: jz      short loc_140744F4E
 * 0000000140744F47: mov     ecx, 20h ; ' '
 * 0000000140744F4C: int     29h; Win8: RtlFailFast(ecx)
 * 0000000140744F4E: xor     eax, eax
 * 0000000140744F50: add     rsp, 28h
 * 0000000140744F54: retn
 */
