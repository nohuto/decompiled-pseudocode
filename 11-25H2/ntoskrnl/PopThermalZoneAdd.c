/*
 * XREFs of PopThermalZoneAdd @ 0x1407487F0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     KeInitializeTimer2 @ 0x14036F140 (KeInitializeTimer2.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     KeInitializeIRTimer @ 0x1404C4448 (KeInitializeIRTimer.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1405CF604 (PopThermalUpdateTelemetryClientCount.c)
 *     PopChangeCapability @ 0x140A65B60 (PopChangeCapability.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopThermalZoneAdd @ 0x1407487F0
 * Reason: Hex-Rays returned no pseudocode for 0x1407487F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001407487F0: mov     [rsp+arg_8], rbx
 * 00000001407487F5: push    rdi
 * 00000001407487F6: sub     rsp, 30h
 * 00000001407487FA: mov     rbx, rcx
 * 00000001407487FD: lea     rdx, PopThermalZoneTimerCallback
 * 0000000140748804: add     rcx, 128h
 * 000000014074880B: mov     r8, rbx
 * 000000014074880E: cmp     cs:PopThermalPollingMode, 0
 * 0000000140748815: jnz     short loc_140748821
 * 0000000140748817: xor     r9d, r9d
 * 000000014074881A: call    KeInitializeTimer2
 * 000000014074881F: jmp     short loc_14074883B
 * 0000000140748821: lea     r9, [rsp+38h+arg_0]
 * 0000000140748826: mov     [rsp+38h+arg_0], 40008h
 * 000000014074882E: mov     [rsp+38h+var_18], 2
 * 0000000140748836: call    KeInitializeIRTimer
 * 000000014074883B: mov     rax, [rbx+38h]
 * 000000014074883F: mov     ecx, 64h ; 'd'
 * 0000000140748844: or      word ptr [rbx+45h], 0FFFFh
 * 000000014074884A: xor     r8d, r8d; State
 * 000000014074884D: mov     [rbx+50h], ecx
 * 0000000140748850: xor     edx, edx; Type
 * 0000000140748852: mov     [rbx+54h], ecx
 * 0000000140748855: mov     byte ptr [rbx+40h], 6
 * 0000000140748859: mov     byte ptr [rbx+43h], 2
 * 000000014074885D: mov     dword ptr [rbx+4Ch], 3E8h
 * 0000000140748864: mov     dword ptr [rax+30h], 0C000009Dh
 * 000000014074886B: mov     eax, cs:PopThermalZoneNextId
 * 0000000140748871: mov     [rbx+1F0h], eax
 * 0000000140748877: inc     eax
 * 0000000140748879: mov     [rbx+0D8h], ecx
 * 000000014074887F: lea     rcx, [rbx+1C0h]; Event
 * 0000000140748886: mov     cs:PopThermalZoneNextId, eax
 * 000000014074888C: call    KeInitializeEvent
 * 0000000140748891: lea     rcx, [rbx+1D8h]; Event
 * 0000000140748898: xor     r8d, r8d; State
 * 000000014074889B: xor     edx, edx; Type
 * 000000014074889D: call    KeInitializeEvent
 * 00000001407488A2: lea     rdi, [rbx+108h]
 * 00000001407488A9: and     qword ptr [rdi], 0
 * 00000001407488AD: lea     rax, PopThermalWorker
 * 00000001407488B4: mov     [rdi+10h], rax
 * 00000001407488B8: mov     rax, 0FFFFF78000000008h
 * 00000001407488C2: mov     [rdi+18h], rbx
 * 00000001407488C6: mov     rax, [rax]
 * 00000001407488C9: mov     [rbx+200h], rax
 * 00000001407488D0: mov     [rbx+208h], rax
 * 00000001407488D7: and     qword ptr [rbx+1B8h], 0
 * 00000001407488DF: mov     eax, cs:PopThermalZoneCount
 * 00000001407488E5: and     qword ptr [rbx+1B0h], 0
 * 00000001407488ED: inc     eax
 * 00000001407488EF: mov     cs:PopThermalZoneCount, eax
 * 00000001407488F5: cmp     eax, 1
 * 00000001407488F8: jnz     short loc_140748912
 * 00000001407488FA: call    PopAcquirePolicyLock
 * 00000001407488FF: mov     dl, 1
 * 0000000140748901: lea     rcx, unk_140F0B8CD
 * 0000000140748908: call    PopChangeCapability
 * 000000014074890D: call    PopReleasePolicyLock
 * 0000000140748912: mov     cl, 1
 * 0000000140748914: call    PopThermalUpdateTelemetryClientCount
 * 0000000140748919: mov     edx, 1; QueueType
 * 000000014074891E: mov     rcx, rdi; WorkItem
 * 0000000140748921: call    ExQueueWorkItem
 * 0000000140748926: mov     rbx, [rsp+38h+arg_8]
 * 000000014074892B: add     rsp, 30h
 * 000000014074892F: pop     rdi
 * 0000000140748930: retn
 */
