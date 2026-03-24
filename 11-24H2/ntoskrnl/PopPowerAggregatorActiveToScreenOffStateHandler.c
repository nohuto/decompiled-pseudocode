/*
 * XREFs of PopPowerAggregatorActiveToScreenOffStateHandler @ 0x140759060
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopGetMonitorReasonFromPowerEventId @ 0x1404B1130 (PopGetMonitorReasonFromPowerEventId.c)
 *     Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline @ 0x1405CCC74 (Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140902BD0 (PopPowerAggregatorSetCurrentState.c)
 *     PopSleepstudyStartNextSession @ 0x140AAC910 (PopSleepstudyStartNextSession.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopPowerAggregatorActiveToScreenOffStateHandler @ 0x140759060
 * Reason: Hex-Rays returned no pseudocode for 0x140759060
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140759060: mov     rax, rsp
 * 0000000140759063: push    rbx
 * 0000000140759064: sub     rsp, 40h
 * 0000000140759068: xorps   xmm0, xmm0
 * 000000014075906B: lea     rdx, [rax-28h]
 * 000000014075906F: movups  xmmword ptr [rax-28h], xmm0
 * 0000000140759073: mov     dword ptr [rax-28h], 3
 * 000000014075907A: mov     rbx, rcx
 * 000000014075907D: movups  xmmword ptr [rax-18h], xmm0
 * 0000000140759081: call    PopPowerAggregatorSetCurrentState
 * 0000000140759086: mov     ecx, [rbx+18h]
 * 0000000140759089: and     dword ptr [rbx+130h], 0
 * 0000000140759090: call    PopGetMonitorReasonFromPowerEventId
 * 0000000140759095: mov     ebx, eax
 * 0000000140759097: lea     rcx, PopPowerAggregatorLock; BugCheckParameter2
 * 000000014075909E: and     ebx, 0FFFFFFh
 * 00000001407590A4: call    PopReleaseRwLock
 * 00000001407590A9: call    Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline
 * 00000001407590AE: test    eax, eax
 * 00000001407590B0: jnz     short loc_1407590C8
 * 00000001407590B2: call    Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline
 * 00000001407590B7: call    PopAcquirePolicyLock
 * 00000001407590BC: and     cs:dword_140F0BDA0, 0
 * 00000001407590C3: call    PopReleasePolicyLock
 * 00000001407590C8: mov     edx, ebx
 * 00000001407590CA: mov     ecx, 1
 * 00000001407590CF: call    PopSleepstudyStartNextSession
 * 00000001407590D4: lea     rcx, PopPowerAggregatorLock
 * 00000001407590DB: call    PopAcquireRwLockExclusive
 * 00000001407590E0: xor     eax, eax
 * 00000001407590E2: add     rsp, 40h
 * 00000001407590E6: pop     rbx
 * 00000001407590E7: retn
 */
