/*
 * XREFs of PopUpdateOverThrottledCount @ 0x140752E84
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140499AC0 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalZoneRemove @ 0x140752D30 (PopThermalZoneRemove.c)
 * Callees:
 *     PopDiagTraceThermalOverthrottleState @ 0x1405D2D04 (PopDiagTraceThermalOverthrottleState.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopUpdateOverThrottledCount @ 0x140752E84
 * Reason: Hex-Rays returned no pseudocode for 0x140752E84
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140752E84: push    rbx
 * 0000000140752E86: sub     rsp, 40h
 * 0000000140752E8A: mov     rcx, [rcx+30h]
 * 0000000140752E8E: and     [rsp+48h+Buffer], 0
 * 0000000140752E93: movzx   ebx, dl
 * 0000000140752E96: mov     edx, ebx
 * 0000000140752E98: call    PopDiagTraceThermalOverthrottleState
 * 0000000140752E9D: call    PopAcquirePolicyLock
 * 0000000140752EA2: test    bl, bl
 * 0000000140752EA4: jz      short loc_140752EBF
 * 0000000140752EA6: mov     eax, cs:dword_140F0AFA8
 * 0000000140752EAC: inc     eax
 * 0000000140752EAE: mov     cs:dword_140F0AFA8, eax
 * 0000000140752EB4: cmp     eax, 1
 * 0000000140752EB7: jnz     short loc_140752EF0
 * 0000000140752EB9: mov     [rsp+48h+Buffer], eax
 * 0000000140752EBD: jmp     short loc_140752EC8
 * 0000000140752EBF: add     cs:dword_140F0AFA8, 0FFFFFFFFh
 * 0000000140752EC6: jnz     short loc_140752EF0
 * 0000000140752EC8: and     [rsp+48h+var_18], 0
 * 0000000140752ECD: lea     rdx, [rsp+48h+Buffer]; Buffer
 * 0000000140752ED2: and     [rsp+48h+var_20], 0
 * 0000000140752ED7: lea     rcx, WNF_PO_THERMAL_OVERTHROTTLE; StateName
 * 0000000140752EDE: and     [rsp+48h+var_28], 0
 * 0000000140752EE4: xor     r9d, r9d; TypeId
 * 0000000140752EE7: lea     r8d, [r9+4]; Length
 * 0000000140752EEB: call    ZwUpdateWnfStateData
 * 0000000140752EF0: call    PopReleasePolicyLock
 * 0000000140752EF5: add     rsp, 40h
 * 0000000140752EF9: pop     rbx
 * 0000000140752EFA: retn
 */
