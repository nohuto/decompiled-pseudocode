/*
 * XREFs of PopCoalescingPowerSettingCallback @ 0x140751030
 * Callers:
 *     <none>
 * Callees:
 *     PopUpdateDiskIdleTimeoutSetting @ 0x1409BA840 (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopCheckResiliencyScenarios @ 0x140A27318 (PopCheckResiliencyScenarios.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopCoalescingPowerSettingCallback @ 0x140751030
 * Reason: Hex-Rays returned no pseudocode for 0x140751030
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140751030: mov     [rsp+arg_0], rbx
 * 0000000140751035: mov     [rsp+arg_8], rbp
 * 000000014075103A: mov     [rsp+arg_10], rsi
 * 000000014075103F: push    rdi
 * 0000000140751040: sub     rsp, 20h
 * 0000000140751044: mov     ebp, r8d
 * 0000000140751047: mov     rdi, rdx
 * 000000014075104A: mov     rsi, rcx
 * 000000014075104D: mov     ebx, 0C000000Dh
 * 0000000140751052: call    PopAcquirePolicyLock
 * 0000000140751057: mov     r9, qword ptr cs:GUID_DISK_COALESCING_POWERDOWN_TIMEOUT.Data1
 * 000000014075105E: sub     r9, [rsi]
 * 0000000140751061: jnz     short loc_14075106E
 * 0000000140751063: mov     r9, qword ptr cs:GUID_DISK_COALESCING_POWERDOWN_TIMEOUT.Data4
 * 000000014075106A: sub     r9, [rsi+8]
 * 000000014075106E: test    r9, r9
 * 0000000140751071: jnz     short loc_1407510A7
 * 0000000140751073: cmp     ebp, 4
 * 0000000140751076: jnz     short loc_1407510A7
 * 0000000140751078: test    rdi, rdi
 * 000000014075107B: jz      short loc_1407510A7
 * 000000014075107D: mov     eax, [rdi]
 * 000000014075107F: or      ecx, 0FFFFFFFFh
 * 0000000140751082: test    eax, eax
 * 0000000140751084: mov     cs:PopDppeCoalescingSpindownTimeout, eax
 * 000000014075108A: cmovz   eax, ecx
 * 000000014075108D: cmp     eax, cs:PopDiskCoalescingTimeout
 * 0000000140751093: jz      short loc_1407510A0
 * 0000000140751095: mov     cs:PopDiskCoalescingTimeout, eax
 * 000000014075109B: call    PopUpdateDiskIdleTimeoutSetting
 * 00000001407510A0: call    PopCheckResiliencyScenarios
 * 00000001407510A5: xor     ebx, ebx
 * 00000001407510A7: call    PopReleasePolicyLock
 * 00000001407510AC: mov     rbp, [rsp+28h+arg_8]
 * 00000001407510B1: mov     eax, ebx
 * 00000001407510B3: mov     rbx, [rsp+28h+arg_0]
 * 00000001407510B8: mov     rsi, [rsp+28h+arg_10]
 * 00000001407510BD: add     rsp, 20h
 * 00000001407510C1: pop     rdi
 * 00000001407510C2: retn
 */
