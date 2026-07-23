/*
 * XREFs of PopPreCriticalBatteryNotify @ 0x140756A10
 * Callers:
 *     <none>
 * Callees:
 *     PopPowerAggregatorForceSessionSwitch @ 0x140AC5414 (PopPowerAggregatorForceSessionSwitch.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopPreCriticalBatteryNotify @ 0x140756A10
 * Reason: Hex-Rays returned no pseudocode for 0x140756A10
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140756A10: sub     rsp, 28h
 * 0000000140756A14: call    PopAcquirePolicyLock
 * 0000000140756A19: mov     ecx, 2Dh ; '-'
 * 0000000140756A1E: call    PopPowerAggregatorForceSessionSwitch
 * 0000000140756A23: call    PopReleasePolicyLock
 * 0000000140756A28: xor     eax, eax
 * 0000000140756A2A: add     rsp, 28h
 * 0000000140756A2E: retn
 */
