/*
 * XREFs of PopUpdateOverThrottledCount @ 0x140748A94
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x14049FAD0 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalZoneRemove @ 0x140748940 (PopThermalZoneRemove.c)
 * Callees:
 *     PopDiagTraceThermalOverthrottleState @ 0x1405D0D90 (PopDiagTraceThermalOverthrottleState.c)
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopUpdateOverThrottledCount @ 0x140748A94
 * Reason: Hex-Rays returned no pseudocode for 0x140748A94
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140748A94: push    rbx
 * 0000000140748A96: sub     rsp, 40h
 * 0000000140748A9A: mov     rcx, [rcx+30h]
 * 0000000140748A9E: and     [rsp+48h+Buffer], 0
 * 0000000140748AA3: movzx   ebx, dl
 * 0000000140748AA6: mov     edx, ebx
 * 0000000140748AA8: call    PopDiagTraceThermalOverthrottleState
 * 0000000140748AAD: call    PopAcquirePolicyLock
 * 0000000140748AB2: test    bl, bl
 * 0000000140748AB4: jz      short loc_140748ACF
 * 0000000140748AB6: mov     eax, cs:dword_140F0A4A8
 * 0000000140748ABC: inc     eax
 * 0000000140748ABE: mov     cs:dword_140F0A4A8, eax
 * 0000000140748AC4: cmp     eax, 1
 * 0000000140748AC7: jnz     short loc_140748B00
 * 0000000140748AC9: mov     [rsp+48h+Buffer], eax
 * 0000000140748ACD: jmp     short loc_140748AD8
 * 0000000140748ACF: add     cs:dword_140F0A4A8, 0FFFFFFFFh
 * 0000000140748AD6: jnz     short loc_140748B00
 * 0000000140748AD8: and     [rsp+48h+var_18], 0
 * 0000000140748ADD: lea     rdx, [rsp+48h+Buffer]; Buffer
 * 0000000140748AE2: and     [rsp+48h+var_20], 0
 * 0000000140748AE7: lea     rcx, WNF_PO_THERMAL_OVERTHROTTLE; StateName
 * 0000000140748AEE: and     [rsp+48h+var_28], 0
 * 0000000140748AF4: xor     r9d, r9d; TypeId
 * 0000000140748AF7: lea     r8d, [r9+4]; Length
 * 0000000140748AFB: call    ZwUpdateWnfStateData
 * 0000000140748B00: call    PopReleasePolicyLock
 * 0000000140748B05: add     rsp, 40h
 * 0000000140748B09: pop     rbx
 * 0000000140748B0A: retn
 */
