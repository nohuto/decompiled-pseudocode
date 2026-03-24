/*
 * XREFs of PopThermalZoneRemove @ 0x140748940
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeDisableTimer2 @ 0x14036F62C (KeDisableTimer2.c)
 *     IoCancelIrp @ 0x14041B240 (IoCancelIrp.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x1404D4110 (PopTraceThermalZonePassiveHistogram.c)
 *     PopThermalStandbyNotify @ 0x1405CF320 (PopThermalStandbyNotify.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1405CF604 (PopThermalUpdateTelemetryClientCount.c)
 *     PopDiagTraceThermalStandbyState @ 0x1405D0DAC (PopDiagTraceThermalStandbyState.c)
 *     PopTraceCr3Mitigated @ 0x1405D15FC (PopTraceCr3Mitigated.c)
 *     PopTraceThermalZoneActiveActivity @ 0x1405D1D7C (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceZoneCr3Mitigated @ 0x1405D1F50 (PopTraceZoneCr3Mitigated.c)
 *     PopUpdateOverThrottledCount @ 0x140748A94 (PopUpdateOverThrottledCount.c)
 *     PopChangeCapability @ 0x140A65B60 (PopChangeCapability.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140A8AAD8 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140A9CEA4 (PopThermalUpdateActiveTimeTracking.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

/*
 * Hex-Rays decompilation failed for PopThermalZoneRemove @ 0x140748940
 * Reason: Hex-Rays returned no pseudocode for 0x140748940
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140748940: mov     [rsp+arg_0], rbx
 * 0000000140748945: push    rdi
 * 0000000140748946: sub     rsp, 30h
 * 000000014074894A: mov     rbx, rcx
 * 000000014074894D: mov     byte ptr [rcx+42h], 1
 * 0000000140748951: mov     rcx, [rcx+38h]; Irp
 * 0000000140748955: call    IoCancelIrp
 * 000000014074895A: and     [rsp+38h+var_18], 0
 * 0000000140748960: lea     rcx, [rbx+1C0h]; Object
 * 0000000140748967: xor     r9d, r9d; Alertable
 * 000000014074896A: xor     r8d, r8d; WaitMode
 * 000000014074896D: xor     edx, edx; WaitReason
 * 000000014074896F: call    KeWaitForSingleObject
 * 0000000140748974: cmp     byte ptr [rbx+91h], 0
 * 000000014074897B: lea     rdi, [rbx+1F8h]
 * 0000000140748982: jz      short loc_140748997
 * 0000000140748984: mov     dl, [rbx+50h]
 * 0000000140748987: mov     rcx, rdi
 * 000000014074898A: call    PopThermalUpdatePassiveTimeTracking
 * 000000014074898F: mov     rcx, rbx
 * 0000000140748992: call    PopTraceThermalZonePassiveHistogram
 * 0000000140748997: cmp     byte ptr [rbx+1F9h], 0
 * 000000014074899E: jbe     short loc_1407489B3
 * 00000001407489A0: mov     dl, [rbx+45h]
 * 00000001407489A3: mov     rcx, rdi
 * 00000001407489A6: call    PopThermalUpdateActiveTimeTracking
 * 00000001407489AB: mov     rcx, rbx
 * 00000001407489AE: call    PopTraceThermalZoneActiveActivity
 * 00000001407489B3: or      edi, 0FFFFFFFFh
 * 00000001407489B6: cmp     byte ptr [rbx+48h], 0
 * 00000001407489BA: jz      short loc_140748A1E
 * 00000001407489BC: mov     rcx, [rbx+30h]
 * 00000001407489C0: xor     edx, edx
 * 00000001407489C2: call    PopDiagTraceThermalStandbyState
 * 00000001407489C7: lea     rcx, PopSystemThermalInfo
 * 00000001407489CE: call    PopAcquireRwLockExclusive
 * 00000001407489D3: mov     ecx, cs:dword_140F0A498
 * 00000001407489D9: mov     rdx, rbx
 * 00000001407489DC: add     cs:dword_140F0A494, edi
 * 00000001407489E2: call    PopTraceZoneCr3Mitigated
 * 00000001407489E7: cmp     cs:dword_140F0A494, 0
 * 00000001407489EE: jnz     short loc_140748A12
 * 00000001407489F0: mov     ecx, cs:dword_140F0A498
 * 00000001407489F6: call    PopTraceCr3Mitigated
 * 00000001407489FB: cmp     byte ptr cs:word_140F0A490+1, 1
 * 0000000140748A02: jnz     short loc_140748A12
 * 0000000140748A04: xor     ecx, ecx
 * 0000000140748A06: call    PopThermalStandbyNotify
 * 0000000140748A0B: mov     byte ptr cs:word_140F0A490+1, 0
 * 0000000140748A12: lea     rcx, PopSystemThermalInfo
 * 0000000140748A19: call    PopReleaseRwLock
 * 0000000140748A1E: cmp     byte ptr [rbx+49h], 0
 * 0000000140748A22: jz      short loc_140748A2E
 * 0000000140748A24: xor     edx, edx
 * 0000000140748A26: mov     rcx, rbx
 * 0000000140748A29: call    PopUpdateOverThrottledCount
 * 0000000140748A2E: mov     r8b, 1
 * 0000000140748A31: lea     rcx, [rbx+128h]
 * 0000000140748A38: mov     dl, r8b
 * 0000000140748A3B: xor     r9d, r9d
 * 0000000140748A3E: call    KeDisableTimer2
 * 0000000140748A43: or      byte ptr [rbx+41h], 80h
 * 0000000140748A47: add     cs:PopThermalZoneCount, edi
 * 0000000140748A4D: jnz     short loc_140748A67
 * 0000000140748A4F: call    PopAcquirePolicyLock
 * 0000000140748A54: xor     edx, edx
 * 0000000140748A56: lea     rcx, unk_140F0B8CD
 * 0000000140748A5D: call    PopChangeCapability
 * 0000000140748A62: call    PopReleasePolicyLock
 * 0000000140748A67: xor     ecx, ecx
 * 0000000140748A69: call    PopThermalUpdateTelemetryClientCount
 * 0000000140748A6E: mov     rcx, [rbx+418h]; P
 * 0000000140748A75: test    rcx, rcx
 * 0000000140748A78: jz      short loc_140748A81
 * 0000000140748A7A: xor     edx, edx; Tag
 * 0000000140748A7C: call    ExFreePoolWithTag
 * 0000000140748A81: mov     rbx, [rsp+38h+arg_0]
 * 0000000140748A86: add     rsp, 30h
 * 0000000140748A8A: pop     rdi
 * 0000000140748A8B: retn
 */
