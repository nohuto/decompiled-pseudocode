/*
 * XREFs of PopThermalZoneAdd @ 0x1407548C0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     KeInitializeTimer2 @ 0x1403BF2C0 (KeInitializeTimer2.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     KeInitializeIRTimer @ 0x1404C1B3C (KeInitializeIRTimer.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1405D4014 (PopThermalUpdateTelemetryClientCount.c)
 *     PopChangeCapability @ 0x140A688B0 (PopChangeCapability.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopThermalZoneAdd @ 0x1407548C0
 * Reason: Hex-Rays returned no pseudocode for 0x1407548C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001407548C0: mov     [rsp+arg_8], rbx
 * 00000001407548C5: push    rdi
 * 00000001407548C6: sub     rsp, 30h
 * 00000001407548CA: mov     rbx, rcx
 * 00000001407548CD: lea     rdx, PopThermalZoneTimerCallback
 * 00000001407548D4: add     rcx, 128h
 * 00000001407548DB: mov     r8, rbx
 * 00000001407548DE: cmp     cs:PopThermalPollingMode, 0
 * 00000001407548E5: jnz     short loc_1407548F1
 * 00000001407548E7: xor     r9d, r9d
 * 00000001407548EA: call    KeInitializeTimer2
 * 00000001407548EF: jmp     short loc_14075490B
 * 00000001407548F1: lea     r9, [rsp+38h+arg_0]
 * 00000001407548F6: mov     [rsp+38h+arg_0], 40008h
 * 00000001407548FE: mov     [rsp+38h+var_18], 2
 * 0000000140754906: call    KeInitializeIRTimer
 * 000000014075490B: mov     rax, [rbx+38h]
 * 000000014075490F: mov     ecx, 64h ; 'd'
 * 0000000140754914: or      word ptr [rbx+45h], 0FFFFh
 * 000000014075491A: xor     r8d, r8d; State
 * 000000014075491D: mov     [rbx+50h], ecx
 * 0000000140754920: xor     edx, edx; Type
 * 0000000140754922: mov     [rbx+54h], ecx
 * 0000000140754925: mov     byte ptr [rbx+40h], 6
 * 0000000140754929: mov     byte ptr [rbx+43h], 2
 * 000000014075492D: mov     dword ptr [rbx+4Ch], 3E8h
 * 0000000140754934: mov     dword ptr [rax+30h], 0C000009Dh
 * 000000014075493B: mov     eax, cs:PopThermalZoneNextId
 * 0000000140754941: mov     [rbx+1F0h], eax
 * 0000000140754947: inc     eax
 * 0000000140754949: mov     [rbx+0D8h], ecx
 * 000000014075494F: lea     rcx, [rbx+1C0h]; Event
 * 0000000140754956: mov     cs:PopThermalZoneNextId, eax
 * 000000014075495C: call    KeInitializeEvent
 * 0000000140754961: lea     rcx, [rbx+1D8h]; Event
 * 0000000140754968: xor     r8d, r8d; State
 * 000000014075496B: xor     edx, edx; Type
 * 000000014075496D: call    KeInitializeEvent
 * 0000000140754972: lea     rdi, [rbx+108h]
 * 0000000140754979: and     qword ptr [rdi], 0
 * 000000014075497D: lea     rax, PopThermalWorker
 * 0000000140754984: mov     [rdi+10h], rax
 * 0000000140754988: mov     rax, 0FFFFF78000000008h
 * 0000000140754992: mov     [rdi+18h], rbx
 * 0000000140754996: mov     rax, [rax]
 * 0000000140754999: mov     [rbx+200h], rax
 * 00000001407549A0: mov     [rbx+208h], rax
 * 00000001407549A7: and     qword ptr [rbx+1B8h], 0
 * 00000001407549AF: mov     eax, cs:PopThermalZoneCount
 * 00000001407549B5: and     qword ptr [rbx+1B0h], 0
 * 00000001407549BD: inc     eax
 * 00000001407549BF: mov     cs:PopThermalZoneCount, eax
 * 00000001407549C5: cmp     eax, 1
 * 00000001407549C8: jnz     short loc_1407549E2
 * 00000001407549CA: call    PopAcquirePolicyLock
 * 00000001407549CF: mov     dl, 1
 * 00000001407549D1: lea     rcx, unk_140F0BB4D
 * 00000001407549D8: call    PopChangeCapability
 * 00000001407549DD: call    PopReleasePolicyLock
 * 00000001407549E2: mov     cl, 1
 * 00000001407549E4: call    PopThermalUpdateTelemetryClientCount
 * 00000001407549E9: mov     edx, 1; QueueType
 * 00000001407549EE: mov     rcx, rdi; WorkItem
 * 00000001407549F1: call    ExQueueWorkItem
 * 00000001407549F6: mov     rbx, [rsp+38h+arg_8]
 * 00000001407549FB: add     rsp, 30h
 * 00000001407549FF: pop     rdi
 * 0000000140754A00: retn
 */
