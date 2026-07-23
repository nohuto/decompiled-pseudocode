/*
 * XREFs of PopThermalZoneRemove @ 0x140752D30
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeDisableTimer2 @ 0x1403AED68 (KeDisableTimer2.c)
 *     IoCancelIrp @ 0x140408D50 (IoCancelIrp.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x1404CD1F8 (PopTraceThermalZonePassiveHistogram.c)
 *     PopThermalStandbyNotify @ 0x1405D14B0 (PopThermalStandbyNotify.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1405D17D4 (PopThermalUpdateTelemetryClientCount.c)
 *     PopDiagTraceThermalStandbyState @ 0x1405D2D20 (PopDiagTraceThermalStandbyState.c)
 *     PopTraceCr3Mitigated @ 0x1405D3570 (PopTraceCr3Mitigated.c)
 *     PopTraceThermalZoneActiveActivity @ 0x1405D3CF0 (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceZoneCr3Mitigated @ 0x1405D3EC4 (PopTraceZoneCr3Mitigated.c)
 *     PopUpdateOverThrottledCount @ 0x140752E84 (PopUpdateOverThrottledCount.c)
 *     PopChangeCapability @ 0x140A61C60 (PopChangeCapability.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140A8C138 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140A9DA34 (PopThermalUpdateActiveTimeTracking.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

/*
 * Hex-Rays decompilation failed for PopThermalZoneRemove @ 0x140752D30
 * Reason: Hex-Rays returned no pseudocode for 0x140752D30
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140752D30: mov     [rsp+arg_0], rbx
 * 0000000140752D35: push    rdi
 * 0000000140752D36: sub     rsp, 30h
 * 0000000140752D3A: mov     rbx, rcx
 * 0000000140752D3D: mov     byte ptr [rcx+42h], 1
 * 0000000140752D41: mov     rcx, [rcx+38h]; Irp
 * 0000000140752D45: call    IoCancelIrp
 * 0000000140752D4A: and     [rsp+38h+var_18], 0
 * 0000000140752D50: lea     rcx, [rbx+1C0h]; Object
 * 0000000140752D57: xor     r9d, r9d; Alertable
 * 0000000140752D5A: xor     r8d, r8d; WaitMode
 * 0000000140752D5D: xor     edx, edx; WaitReason
 * 0000000140752D5F: call    KeWaitForSingleObject
 * 0000000140752D64: cmp     byte ptr [rbx+91h], 0
 * 0000000140752D6B: lea     rdi, [rbx+1F8h]
 * 0000000140752D72: jz      short loc_140752D87
 * 0000000140752D74: mov     dl, [rbx+50h]
 * 0000000140752D77: mov     rcx, rdi
 * 0000000140752D7A: call    PopThermalUpdatePassiveTimeTracking
 * 0000000140752D7F: mov     rcx, rbx
 * 0000000140752D82: call    PopTraceThermalZonePassiveHistogram
 * 0000000140752D87: cmp     byte ptr [rbx+1F9h], 0
 * 0000000140752D8E: jbe     short loc_140752DA3
 * 0000000140752D90: mov     dl, [rbx+45h]
 * 0000000140752D93: mov     rcx, rdi
 * 0000000140752D96: call    PopThermalUpdateActiveTimeTracking
 * 0000000140752D9B: mov     rcx, rbx
 * 0000000140752D9E: call    PopTraceThermalZoneActiveActivity
 * 0000000140752DA3: or      edi, 0FFFFFFFFh
 * 0000000140752DA6: cmp     byte ptr [rbx+48h], 0
 * 0000000140752DAA: jz      short loc_140752E0E
 * 0000000140752DAC: mov     rcx, [rbx+30h]
 * 0000000140752DB0: xor     edx, edx
 * 0000000140752DB2: call    PopDiagTraceThermalStandbyState
 * 0000000140752DB7: lea     rcx, PopSystemThermalInfo
 * 0000000140752DBE: call    PopAcquireRwLockExclusive
 * 0000000140752DC3: mov     ecx, cs:dword_140F0AF98
 * 0000000140752DC9: mov     rdx, rbx
 * 0000000140752DCC: add     cs:dword_140F0AF94, edi
 * 0000000140752DD2: call    PopTraceZoneCr3Mitigated
 * 0000000140752DD7: cmp     cs:dword_140F0AF94, 0
 * 0000000140752DDE: jnz     short loc_140752E02
 * 0000000140752DE0: mov     ecx, cs:dword_140F0AF98
 * 0000000140752DE6: call    PopTraceCr3Mitigated
 * 0000000140752DEB: cmp     byte ptr cs:word_140F0AF90+1, 1
 * 0000000140752DF2: jnz     short loc_140752E02
 * 0000000140752DF4: xor     ecx, ecx
 * 0000000140752DF6: call    PopThermalStandbyNotify
 * 0000000140752DFB: mov     byte ptr cs:word_140F0AF90+1, 0
 * 0000000140752E02: lea     rcx, PopSystemThermalInfo
 * 0000000140752E09: call    PopReleaseRwLock
 * 0000000140752E0E: cmp     byte ptr [rbx+49h], 0
 * 0000000140752E12: jz      short loc_140752E1E
 * 0000000140752E14: xor     edx, edx
 * 0000000140752E16: mov     rcx, rbx
 * 0000000140752E19: call    PopUpdateOverThrottledCount
 * 0000000140752E1E: mov     r8b, 1
 * 0000000140752E21: lea     rcx, [rbx+128h]
 * 0000000140752E28: mov     dl, r8b
 * 0000000140752E2B: xor     r9d, r9d
 * 0000000140752E2E: call    KeDisableTimer2
 * 0000000140752E33: or      byte ptr [rbx+41h], 80h
 * 0000000140752E37: add     cs:PopThermalZoneCount, edi
 * 0000000140752E3D: jnz     short loc_140752E57
 * 0000000140752E3F: call    PopAcquirePolicyLock
 * 0000000140752E44: xor     edx, edx
 * 0000000140752E46: lea     rcx, unk_140F0B66D
 * 0000000140752E4D: call    PopChangeCapability
 * 0000000140752E52: call    PopReleasePolicyLock
 * 0000000140752E57: xor     ecx, ecx
 * 0000000140752E59: call    PopThermalUpdateTelemetryClientCount
 * 0000000140752E5E: mov     rcx, [rbx+418h]; P
 * 0000000140752E65: test    rcx, rcx
 * 0000000140752E68: jz      short loc_140752E71
 * 0000000140752E6A: xor     edx, edx; Tag
 * 0000000140752E6C: call    ExFreePoolWithTag
 * 0000000140752E71: mov     rbx, [rsp+38h+arg_0]
 * 0000000140752E76: add     rsp, 30h
 * 0000000140752E7A: pop     rdi
 * 0000000140752E7B: retn
 */
