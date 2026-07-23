/*
 * XREFs of PopWnfHibernatePolicyCallback @ 0x1407515A0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueryHiberPersistedRegValue @ 0x140750FD0 (PopQueryHiberPersistedRegValue.c)
 *     PopTraceHibernatePolicyUpdate @ 0x140756B68 (PopTraceHibernatePolicyUpdate.c)
 *     PopAcquireTransitionLock @ 0x140A8F05C (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x140AA0760 (PopReleaseTransitionLock.c)
 *     PopHibernateEvaluation @ 0x140AAE820 (PopHibernateEvaluation.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopWnfHibernatePolicyCallback @ 0x1407515A0
 * Reason: Hex-Rays returned no pseudocode for 0x1407515A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001407515A0: mov     rax, rsp
 * 00000001407515A3: mov     [rax+8], rbx
 * 00000001407515A7: push    rdi
 * 00000001407515A8: sub     rsp, 30h
 * 00000001407515AC: and     dword ptr [rax-14h], 0
 * 00000001407515B0: lea     rdx, [rax-14h]
 * 00000001407515B4: mov     ecx, 3
 * 00000001407515B9: mov     byte ptr [rax-18h], 0
 * 00000001407515BD: call    PopQueryHiberPersistedRegValue
 * 00000001407515C2: mov     edi, eax
 * 00000001407515C4: test    eax, eax
 * 00000001407515C6: js      short loc_14075160B
 * 00000001407515C8: mov     ecx, 2
 * 00000001407515CD: call    PopAcquireTransitionLock
 * 00000001407515D2: call    PopAcquirePolicyLock
 * 00000001407515D7: mov     ebx, [rsp+38h+var_14]
 * 00000001407515DB: lea     r8, [rsp+38h+var_18]
 * 00000001407515E0: mov     dl, 1
 * 00000001407515E2: mov     cs:PopAllowHibernateReg, ebx
 * 00000001407515E8: mov     cl, dl
 * 00000001407515EA: call    PopHibernateEvaluation
 * 00000001407515EF: mov     edi, eax
 * 00000001407515F1: call    PopReleasePolicyLock
 * 00000001407515F6: mov     ecx, 2
 * 00000001407515FB: call    PopReleaseTransitionLock
 * 0000000140751600: mov     dl, [rsp+38h+var_18]
 * 0000000140751604: mov     ecx, ebx
 * 0000000140751606: call    PopTraceHibernatePolicyUpdate
 * 000000014075160B: mov     rbx, [rsp+38h+arg_0]
 * 0000000140751610: mov     eax, edi
 * 0000000140751612: add     rsp, 30h
 * 0000000140751616: pop     rdi
 * 0000000140751617: retn
 */
