/*
 * XREFs of PopPreCriticalBatteryNotify @ 0x140758590
 * Callers:
 *     <none>
 * Callees:
 *     PopPowerAggregatorForceSessionSwitch @ 0x140AC7988 (PopPowerAggregatorForceSessionSwitch.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopPreCriticalBatteryNotify @ 0x140758590
 * Reason: Hex-Rays returned no pseudocode for 0x140758590
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140758590: sub     rsp, 28h
 * 0000000140758594: call    PopAcquirePolicyLock
 * 0000000140758599: mov     ecx, 2Dh ; '-'
 * 000000014075859E: call    PopPowerAggregatorForceSessionSwitch
 * 00000001407585A3: call    PopReleasePolicyLock
 * 00000001407585A8: xor     eax, eax
 * 00000001407585AA: add     rsp, 28h
 * 00000001407585AE: retn
 */
