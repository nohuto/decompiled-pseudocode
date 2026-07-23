/*
 * XREFs of PopThermalZoneAdd @ 0x140752BE0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     KeInitializeTimer2 @ 0x1403ADE80 (KeInitializeTimer2.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     KeInitializeIRTimer @ 0x1404BD12C (KeInitializeIRTimer.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1405D17D4 (PopThermalUpdateTelemetryClientCount.c)
 *     PopChangeCapability @ 0x140A61C60 (PopChangeCapability.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopThermalZoneAdd @ 0x140752BE0
 * Reason: Hex-Rays returned no pseudocode for 0x140752BE0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140752BE0: mov     [rsp+arg_8], rbx
 * 0000000140752BE5: push    rdi
 * 0000000140752BE6: sub     rsp, 30h
 * 0000000140752BEA: mov     rbx, rcx
 * 0000000140752BED: lea     rdx, PopThermalZoneTimerCallback
 * 0000000140752BF4: add     rcx, 128h
 * 0000000140752BFB: mov     r8, rbx
 * 0000000140752BFE: cmp     cs:PopThermalPollingMode, 0
 * 0000000140752C05: jnz     short loc_140752C11
 * 0000000140752C07: xor     r9d, r9d
 * 0000000140752C0A: call    KeInitializeTimer2
 * 0000000140752C0F: jmp     short loc_140752C2B
 * 0000000140752C11: lea     r9, [rsp+38h+arg_0]
 * 0000000140752C16: mov     [rsp+38h+arg_0], 40008h
 * 0000000140752C1E: mov     [rsp+38h+var_18], 2
 * 0000000140752C26: call    KeInitializeIRTimer
 * 0000000140752C2B: mov     rax, [rbx+38h]
 * 0000000140752C2F: mov     ecx, 64h ; 'd'
 * 0000000140752C34: or      word ptr [rbx+45h], 0FFFFh
 * 0000000140752C3A: xor     r8d, r8d; State
 * 0000000140752C3D: mov     [rbx+50h], ecx
 * 0000000140752C40: xor     edx, edx; Type
 * 0000000140752C42: mov     [rbx+54h], ecx
 * 0000000140752C45: mov     byte ptr [rbx+40h], 6
 * 0000000140752C49: mov     byte ptr [rbx+43h], 2
 * 0000000140752C4D: mov     dword ptr [rbx+4Ch], 3E8h
 * 0000000140752C54: mov     dword ptr [rax+30h], 0C000009Dh
 * 0000000140752C5B: mov     eax, cs:PopThermalZoneNextId
 * 0000000140752C61: mov     [rbx+1F0h], eax
 * 0000000140752C67: inc     eax
 * 0000000140752C69: mov     [rbx+0D8h], ecx
 * 0000000140752C6F: lea     rcx, [rbx+1C0h]; Event
 * 0000000140752C76: mov     cs:PopThermalZoneNextId, eax
 * 0000000140752C7C: call    KeInitializeEvent
 * 0000000140752C81: lea     rcx, [rbx+1D8h]; Event
 * 0000000140752C88: xor     r8d, r8d; State
 * 0000000140752C8B: xor     edx, edx; Type
 * 0000000140752C8D: call    KeInitializeEvent
 * 0000000140752C92: lea     rdi, [rbx+108h]
 * 0000000140752C99: and     qword ptr [rdi], 0
 * 0000000140752C9D: lea     rax, PopThermalWorker
 * 0000000140752CA4: mov     [rdi+10h], rax
 * 0000000140752CA8: mov     rax, 0FFFFF78000000008h
 * 0000000140752CB2: mov     [rdi+18h], rbx
 * 0000000140752CB6: mov     rax, [rax]
 * 0000000140752CB9: mov     [rbx+200h], rax
 * 0000000140752CC0: mov     [rbx+208h], rax
 * 0000000140752CC7: and     qword ptr [rbx+1B8h], 0
 * 0000000140752CCF: mov     eax, cs:PopThermalZoneCount
 * 0000000140752CD5: and     qword ptr [rbx+1B0h], 0
 * 0000000140752CDD: inc     eax
 * 0000000140752CDF: mov     cs:PopThermalZoneCount, eax
 * 0000000140752CE5: cmp     eax, 1
 * 0000000140752CE8: jnz     short loc_140752D02
 * 0000000140752CEA: call    PopAcquirePolicyLock
 * 0000000140752CEF: mov     dl, 1
 * 0000000140752CF1: lea     rcx, unk_140F0B66D
 * 0000000140752CF8: call    PopChangeCapability
 * 0000000140752CFD: call    PopReleasePolicyLock
 * 0000000140752D02: mov     cl, 1
 * 0000000140752D04: call    PopThermalUpdateTelemetryClientCount
 * 0000000140752D09: mov     edx, 1; QueueType
 * 0000000140752D0E: mov     rcx, rdi; WorkItem
 * 0000000140752D11: call    ExQueueWorkItem
 * 0000000140752D16: mov     rbx, [rsp+38h+arg_8]
 * 0000000140752D1B: add     rsp, 30h
 * 0000000140752D1F: pop     rdi
 * 0000000140752D20: retn
 */
