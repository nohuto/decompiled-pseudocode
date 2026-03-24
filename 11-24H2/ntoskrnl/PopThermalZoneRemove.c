/*
 * XREFs of PopThermalZoneRemove @ 0x140754A10
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     KeDisableTimer2 @ 0x1403C01A8 (KeDisableTimer2.c)
 *     IoCancelIrp @ 0x140418FA0 (IoCancelIrp.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x1404D3FE8 (PopTraceThermalZonePassiveHistogram.c)
 *     PopThermalStandbyNotify @ 0x1405D3D30 (PopThermalStandbyNotify.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1405D4014 (PopThermalUpdateTelemetryClientCount.c)
 *     PopDiagTraceThermalStandbyState @ 0x1405D570C (PopDiagTraceThermalStandbyState.c)
 *     PopTraceCr3Mitigated @ 0x1405D5F5C (PopTraceCr3Mitigated.c)
 *     PopTraceThermalZoneActiveActivity @ 0x1405D66DC (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceZoneCr3Mitigated @ 0x1405D68B0 (PopTraceZoneCr3Mitigated.c)
 *     PopUpdateOverThrottledCount @ 0x140754B64 (PopUpdateOverThrottledCount.c)
 *     PopChangeCapability @ 0x140A688B0 (PopChangeCapability.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140A8FAF8 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140AA26A4 (PopThermalUpdateActiveTimeTracking.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

/*
 * Hex-Rays decompilation failed for PopThermalZoneRemove @ 0x140754A10
 * Reason: Hex-Rays returned no pseudocode for 0x140754A10
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140754A10: mov     [rsp+arg_0], rbx
 * 0000000140754A15: push    rdi
 * 0000000140754A16: sub     rsp, 30h
 * 0000000140754A1A: mov     rbx, rcx
 * 0000000140754A1D: mov     byte ptr [rcx+42h], 1
 * 0000000140754A21: mov     rcx, [rcx+38h]; Irp
 * 0000000140754A25: call    IoCancelIrp
 * 0000000140754A2A: and     [rsp+38h+var_18], 0
 * 0000000140754A30: lea     rcx, [rbx+1C0h]; Object
 * 0000000140754A37: xor     r9d, r9d; Alertable
 * 0000000140754A3A: xor     r8d, r8d; WaitMode
 * 0000000140754A3D: xor     edx, edx; WaitReason
 * 0000000140754A3F: call    KeWaitForSingleObject
 * 0000000140754A44: cmp     byte ptr [rbx+91h], 0
 * 0000000140754A4B: lea     rdi, [rbx+1F8h]
 * 0000000140754A52: jz      short loc_140754A67
 * 0000000140754A54: mov     dl, [rbx+50h]
 * 0000000140754A57: mov     rcx, rdi
 * 0000000140754A5A: call    PopThermalUpdatePassiveTimeTracking
 * 0000000140754A5F: mov     rcx, rbx
 * 0000000140754A62: call    PopTraceThermalZonePassiveHistogram
 * 0000000140754A67: cmp     byte ptr [rbx+1F9h], 0
 * 0000000140754A6E: jbe     short loc_140754A83
 * 0000000140754A70: mov     dl, [rbx+45h]
 * 0000000140754A73: mov     rcx, rdi
 * 0000000140754A76: call    PopThermalUpdateActiveTimeTracking
 * 0000000140754A7B: mov     rcx, rbx
 * 0000000140754A7E: call    PopTraceThermalZoneActiveActivity
 * 0000000140754A83: or      edi, 0FFFFFFFFh
 * 0000000140754A86: cmp     byte ptr [rbx+48h], 0
 * 0000000140754A8A: jz      short loc_140754AEE
 * 0000000140754A8C: mov     rcx, [rbx+30h]
 * 0000000140754A90: xor     edx, edx
 * 0000000140754A92: call    PopDiagTraceThermalStandbyState
 * 0000000140754A97: lea     rcx, PopSystemThermalInfo
 * 0000000140754A9E: call    PopAcquireRwLockExclusive
 * 0000000140754AA3: mov     ecx, cs:dword_140F0AD18
 * 0000000140754AA9: mov     rdx, rbx
 * 0000000140754AAC: add     cs:dword_140F0AD14, edi
 * 0000000140754AB2: call    PopTraceZoneCr3Mitigated
 * 0000000140754AB7: cmp     cs:dword_140F0AD14, 0
 * 0000000140754ABE: jnz     short loc_140754AE2
 * 0000000140754AC0: mov     ecx, cs:dword_140F0AD18
 * 0000000140754AC6: call    PopTraceCr3Mitigated
 * 0000000140754ACB: cmp     byte ptr cs:word_140F0AD10+1, 1
 * 0000000140754AD2: jnz     short loc_140754AE2
 * 0000000140754AD4: xor     ecx, ecx
 * 0000000140754AD6: call    PopThermalStandbyNotify
 * 0000000140754ADB: mov     byte ptr cs:word_140F0AD10+1, 0
 * 0000000140754AE2: lea     rcx, PopSystemThermalInfo; BugCheckParameter2
 * 0000000140754AE9: call    PopReleaseRwLock
 * 0000000140754AEE: cmp     byte ptr [rbx+49h], 0
 * 0000000140754AF2: jz      short loc_140754AFE
 * 0000000140754AF4: xor     edx, edx
 * 0000000140754AF6: mov     rcx, rbx
 * 0000000140754AF9: call    PopUpdateOverThrottledCount
 * 0000000140754AFE: mov     r8b, 1
 * 0000000140754B01: lea     rcx, [rbx+128h]
 * 0000000140754B08: mov     dl, r8b
 * 0000000140754B0B: xor     r9d, r9d
 * 0000000140754B0E: call    KeDisableTimer2
 * 0000000140754B13: or      byte ptr [rbx+41h], 80h
 * 0000000140754B17: add     cs:PopThermalZoneCount, edi
 * 0000000140754B1D: jnz     short loc_140754B37
 * 0000000140754B1F: call    PopAcquirePolicyLock
 * 0000000140754B24: xor     edx, edx
 * 0000000140754B26: lea     rcx, unk_140F0BB4D
 * 0000000140754B2D: call    PopChangeCapability
 * 0000000140754B32: call    PopReleasePolicyLock
 * 0000000140754B37: xor     ecx, ecx
 * 0000000140754B39: call    PopThermalUpdateTelemetryClientCount
 * 0000000140754B3E: mov     rcx, [rbx+418h]; P
 * 0000000140754B45: test    rcx, rcx
 * 0000000140754B48: jz      short loc_140754B51
 * 0000000140754B4A: xor     edx, edx; Tag
 * 0000000140754B4C: call    ExFreePoolWithTag
 * 0000000140754B51: mov     rbx, [rsp+38h+arg_0]
 * 0000000140754B56: add     rsp, 30h
 * 0000000140754B5A: pop     rdi
 * 0000000140754B5B: retn
 */
