/*
 * XREFs of PopCoalescingPowerSettingCallback @ 0x140744F60
 * Callers:
 *     <none>
 * Callees:
 *     PopCheckResiliencyScenarios @ 0x140A1E378 (PopCheckResiliencyScenarios.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x140A8FF7C (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopCoalescingPowerSettingCallback @ 0x140744F60
 * Reason: Hex-Rays returned no pseudocode for 0x140744F60
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140744F60: mov     [rsp+arg_0], rbx
 * 0000000140744F65: mov     [rsp+arg_8], rbp
 * 0000000140744F6A: mov     [rsp+arg_10], rsi
 * 0000000140744F6F: push    rdi
 * 0000000140744F70: sub     rsp, 20h
 * 0000000140744F74: mov     ebp, r8d
 * 0000000140744F77: mov     rdi, rdx
 * 0000000140744F7A: mov     rsi, rcx
 * 0000000140744F7D: mov     ebx, 0C000000Dh
 * 0000000140744F82: call    PopAcquirePolicyLock
 * 0000000140744F87: mov     r9, qword ptr cs:GUID_DISK_COALESCING_POWERDOWN_TIMEOUT.Data1
 * 0000000140744F8E: sub     r9, [rsi]
 * 0000000140744F91: jnz     short loc_140744F9E
 * 0000000140744F93: mov     r9, qword ptr cs:GUID_DISK_COALESCING_POWERDOWN_TIMEOUT.Data4
 * 0000000140744F9A: sub     r9, [rsi+8]
 * 0000000140744F9E: test    r9, r9
 * 0000000140744FA1: jnz     short loc_140744FD7
 * 0000000140744FA3: cmp     ebp, 4
 * 0000000140744FA6: jnz     short loc_140744FD7
 * 0000000140744FA8: test    rdi, rdi
 * 0000000140744FAB: jz      short loc_140744FD7
 * 0000000140744FAD: mov     eax, [rdi]
 * 0000000140744FAF: or      ecx, 0FFFFFFFFh
 * 0000000140744FB2: test    eax, eax
 * 0000000140744FB4: mov     cs:PopDppeCoalescingSpindownTimeout, eax
 * 0000000140744FBA: cmovz   eax, ecx
 * 0000000140744FBD: cmp     eax, cs:PopDiskCoalescingTimeout
 * 0000000140744FC3: jz      short loc_140744FD0
 * 0000000140744FC5: mov     cs:PopDiskCoalescingTimeout, eax
 * 0000000140744FCB: call    PopUpdateDiskIdleTimeoutSetting
 * 0000000140744FD0: call    PopCheckResiliencyScenarios
 * 0000000140744FD5: xor     ebx, ebx
 * 0000000140744FD7: call    PopReleasePolicyLock
 * 0000000140744FDC: mov     rbp, [rsp+28h+arg_8]
 * 0000000140744FE1: mov     eax, ebx
 * 0000000140744FE3: mov     rbx, [rsp+28h+arg_0]
 * 0000000140744FE8: mov     rsi, [rsp+28h+arg_10]
 * 0000000140744FED: add     rsp, 20h
 * 0000000140744FF1: pop     rdi
 * 0000000140744FF2: retn
 */
