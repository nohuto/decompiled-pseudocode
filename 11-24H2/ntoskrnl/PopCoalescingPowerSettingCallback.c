/*
 * XREFs of PopCoalescingPowerSettingCallback @ 0x14074F350
 * Callers:
 *     <none>
 * Callees:
 *     PopUpdateDiskIdleTimeoutSetting @ 0x1409A0E90 (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopCheckResiliencyScenarios @ 0x140A1BD98 (PopCheckResiliencyScenarios.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopCoalescingPowerSettingCallback @ 0x14074F350
 * Reason: Hex-Rays returned no pseudocode for 0x14074F350
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014074F350: mov     [rsp+arg_0], rbx
 * 000000014074F355: mov     [rsp+arg_8], rbp
 * 000000014074F35A: mov     [rsp+arg_10], rsi
 * 000000014074F35F: push    rdi
 * 000000014074F360: sub     rsp, 20h
 * 000000014074F364: mov     ebp, r8d
 * 000000014074F367: mov     rdi, rdx
 * 000000014074F36A: mov     rsi, rcx
 * 000000014074F36D: mov     ebx, 0C000000Dh
 * 000000014074F372: call    PopAcquirePolicyLock
 * 000000014074F377: mov     r9, qword ptr cs:GUID_DISK_COALESCING_POWERDOWN_TIMEOUT.Data1
 * 000000014074F37E: sub     r9, [rsi]
 * 000000014074F381: jnz     short loc_14074F38E
 * 000000014074F383: mov     r9, qword ptr cs:GUID_DISK_COALESCING_POWERDOWN_TIMEOUT.Data4
 * 000000014074F38A: sub     r9, [rsi+8]
 * 000000014074F38E: test    r9, r9
 * 000000014074F391: jnz     short loc_14074F3C7
 * 000000014074F393: cmp     ebp, 4
 * 000000014074F396: jnz     short loc_14074F3C7
 * 000000014074F398: test    rdi, rdi
 * 000000014074F39B: jz      short loc_14074F3C7
 * 000000014074F39D: mov     eax, [rdi]
 * 000000014074F39F: or      ecx, 0FFFFFFFFh
 * 000000014074F3A2: test    eax, eax
 * 000000014074F3A4: mov     cs:PopDppeCoalescingSpindownTimeout, eax
 * 000000014074F3AA: cmovz   eax, ecx
 * 000000014074F3AD: cmp     eax, cs:PopDiskCoalescingTimeout
 * 000000014074F3B3: jz      short loc_14074F3C0
 * 000000014074F3B5: mov     cs:PopDiskCoalescingTimeout, eax
 * 000000014074F3BB: call    PopUpdateDiskIdleTimeoutSetting
 * 000000014074F3C0: call    PopCheckResiliencyScenarios
 * 000000014074F3C5: xor     ebx, ebx
 * 000000014074F3C7: call    PopReleasePolicyLock
 * 000000014074F3CC: mov     rbp, [rsp+28h+arg_8]
 * 000000014074F3D1: mov     eax, ebx
 * 000000014074F3D3: mov     rbx, [rsp+28h+arg_0]
 * 000000014074F3D8: mov     rsi, [rsp+28h+arg_10]
 * 000000014074F3DD: add     rsp, 20h
 * 000000014074F3E1: pop     rdi
 * 000000014074F3E2: retn
 */
