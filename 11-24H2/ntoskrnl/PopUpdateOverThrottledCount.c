/*
 * XREFs of PopUpdateOverThrottledCount @ 0x140754B64
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x14049EC88 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalZoneRemove @ 0x140754A10 (PopThermalZoneRemove.c)
 * Callees:
 *     PopDiagTraceThermalOverthrottleState @ 0x1405D56F0 (PopDiagTraceThermalOverthrottleState.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopUpdateOverThrottledCount @ 0x140754B64
 * Reason: Hex-Rays returned no pseudocode for 0x140754B64
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140754B64: push    rbx
 * 0000000140754B66: sub     rsp, 40h
 * 0000000140754B6A: mov     rcx, [rcx+30h]
 * 0000000140754B6E: and     [rsp+48h+arg_8], 0
 * 0000000140754B73: movzx   ebx, dl
 * 0000000140754B76: mov     edx, ebx
 * 0000000140754B78: call    PopDiagTraceThermalOverthrottleState
 * 0000000140754B7D: call    PopAcquirePolicyLock
 * 0000000140754B82: test    bl, bl
 * 0000000140754B84: jz      short loc_140754B9F
 * 0000000140754B86: mov     eax, cs:dword_140F0AD28
 * 0000000140754B8C: inc     eax
 * 0000000140754B8E: mov     cs:dword_140F0AD28, eax
 * 0000000140754B94: cmp     eax, 1
 * 0000000140754B97: jnz     short loc_140754BD0
 * 0000000140754B99: mov     [rsp+48h+arg_8], eax
 * 0000000140754B9D: jmp     short loc_140754BA8
 * 0000000140754B9F: add     cs:dword_140F0AD28, 0FFFFFFFFh
 * 0000000140754BA6: jnz     short loc_140754BD0
 * 0000000140754BA8: and     [rsp+48h+var_18], 0
 * 0000000140754BAD: lea     rdx, [rsp+48h+arg_8]
 * 0000000140754BB2: and     [rsp+48h+var_20], 0
 * 0000000140754BB7: lea     rcx, WNF_PO_THERMAL_OVERTHROTTLE
 * 0000000140754BBE: and     [rsp+48h+var_28], 0
 * 0000000140754BC4: xor     r9d, r9d
 * 0000000140754BC7: lea     r8d, [r9+4]
 * 0000000140754BCB: call    ZwUpdateWnfStateData
 * 0000000140754BD0: call    PopReleasePolicyLock
 * 0000000140754BD5: add     rsp, 40h
 * 0000000140754BD9: pop     rbx
 * 0000000140754BDA: retn
 */
