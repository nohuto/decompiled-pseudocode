/*
 * XREFs of PopPowerAggregatorActiveToScreenOffStateHandler @ 0x14074CE00
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopGetMonitorReasonFromPowerEventId @ 0x1404B0130 (PopGetMonitorReasonFromPowerEventId.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140A2C210 (PopPowerAggregatorSetCurrentState.c)
 *     PopSleepstudyStartNextSession @ 0x140AA74D0 (PopSleepstudyStartNextSession.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopPowerAggregatorActiveToScreenOffStateHandler @ 0x14074CE00
 * Reason: Hex-Rays returned no pseudocode for 0x14074CE00
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014074CE00: mov     rax, rsp
 * 000000014074CE03: push    rbx
 * 000000014074CE04: sub     rsp, 40h
 * 000000014074CE08: xorps   xmm0, xmm0
 * 000000014074CE0B: lea     rdx, [rax-28h]
 * 000000014074CE0F: movups  xmmword ptr [rax-28h], xmm0
 * 000000014074CE13: mov     dword ptr [rax-28h], 3
 * 000000014074CE1A: mov     rbx, rcx
 * 000000014074CE1D: movups  xmmword ptr [rax-18h], xmm0
 * 000000014074CE21: call    PopPowerAggregatorSetCurrentState
 * 000000014074CE26: mov     ecx, [rbx+18h]
 * 000000014074CE29: and     dword ptr [rbx+130h], 0
 * 000000014074CE30: call    PopGetMonitorReasonFromPowerEventId
 * 000000014074CE35: mov     ebx, eax
 * 000000014074CE37: lea     rcx, PopPowerAggregatorLock
 * 000000014074CE3E: and     ebx, 0FFFFFFh
 * 000000014074CE44: call    PopReleaseRwLock
 * 000000014074CE49: call    PopAcquirePolicyLock
 * 000000014074CE4E: and     cs:dword_140F0A9C0, 0
 * 000000014074CE55: call    PopReleasePolicyLock
 * 000000014074CE5A: mov     edx, ebx
 * 000000014074CE5C: mov     ecx, 1
 * 000000014074CE61: call    PopSleepstudyStartNextSession
 * 000000014074CE66: lea     rcx, PopPowerAggregatorLock
 * 000000014074CE6D: call    PopAcquireRwLockExclusive
 * 000000014074CE72: xor     eax, eax
 * 000000014074CE74: add     rsp, 40h
 * 000000014074CE78: pop     rbx
 * 000000014074CE79: retn
 */
