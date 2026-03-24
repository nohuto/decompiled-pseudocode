/*
 * XREFs of PopCoalescingNotify @ 0x140750FA0
 * Callers:
 *     <none>
 * Callees:
 *     PopCoalescingSetTimer @ 0x1402CA544 (PopCoalescingSetTimer.c)
 *     PopPrintEx @ 0x1402CB174 (PopPrintEx.c)
 *     KeCancelTimer @ 0x140333B20 (KeCancelTimer.c)
 *     PopDiagTraceEventNoPayload @ 0x14048C7B4 (PopDiagTraceEventNoPayload.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x1404B7970 (PopEnsureCoalescingWorkerWillRun.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopCoalescingNotify @ 0x140750FA0
 * Reason: Hex-Rays returned no pseudocode for 0x140750FA0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140750FA0: sub     rsp, 28h
 * 0000000140750FA4: call    PopAcquirePolicyLock
 * 0000000140750FA9: test    cs:PopCoalescingState, 2
 * 0000000140750FB0: jz      short loc_140751000
 * 0000000140750FB2: lea     rcx, PopCoalescingTimer; PKTIMER
 * 0000000140750FB9: call    KeCancelTimer
 * 0000000140750FBE: or      cs:PopCoalescingState, 4
 * 0000000140750FC5: call    PopEnsureCoalescingWorkerWillRun
 * 0000000140750FCA: lea     rdx, aPopcoalescingF; "PopCoalescing: FLUSH notification sent."...
 * 0000000140750FD1: mov     ecx, 3
 * 0000000140750FD6: call    PopPrintEx
 * 0000000140750FDB: lea     rcx, POP_ETW_IO_COALESCING_FLUSH; EventDescriptor
 * 0000000140750FE2: call    PopDiagTraceEventNoPayload
 * 0000000140750FE7: mov     rax, 0FFFFF78000000008h
 * 0000000140750FF1: mov     rax, [rax]
 * 0000000140750FF4: mov     cs:PopCoalescingLastFlushTime, rax
 * 0000000140750FFB: call    PopCoalescingSetTimer
 * 0000000140751000: call    PopReleasePolicyLock
 * 0000000140751005: mov     rax, gs:188h
 * 000000014075100E: cmp     dword ptr [rax+1E4h], 0
 * 0000000140751015: jz      short loc_14075101E
 * 0000000140751017: mov     ecx, 20h ; ' '
 * 000000014075101C: int     29h; Win8: RtlFailFast(ecx)
 * 000000014075101E: xor     eax, eax
 * 0000000140751020: add     rsp, 28h
 * 0000000140751024: retn
 */
