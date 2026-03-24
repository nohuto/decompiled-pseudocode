/*
 * XREFs of PopPreCriticalBatteryNotify @ 0x14074C4D0
 * Callers:
 *     <none>
 * Callees:
 *     PopPowerAggregatorForceSessionSwitch @ 0x140AC1E1C (PopPowerAggregatorForceSessionSwitch.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopPreCriticalBatteryNotify @ 0x14074C4D0
 * Reason: Hex-Rays returned no pseudocode for 0x14074C4D0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014074C4D0: sub     rsp, 28h
 * 000000014074C4D4: call    PopAcquirePolicyLock
 * 000000014074C4D9: mov     ecx, 2Dh ; '-'
 * 000000014074C4DE: call    PopPowerAggregatorForceSessionSwitch
 * 000000014074C4E3: call    PopReleasePolicyLock
 * 000000014074C4E8: xor     eax, eax
 * 000000014074C4EA: add     rsp, 28h
 * 000000014074C4EE: retn
 */
