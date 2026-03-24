/*
 * XREFs of PopWnfHibernatePolicyCallback @ 0x140753280
 * Callers:
 *     <none>
 * Callees:
 *     PopQueryHiberPersistedRegValue @ 0x140752CB0 (PopQueryHiberPersistedRegValue.c)
 *     PopTraceHibernatePolicyUpdate @ 0x1407586E8 (PopTraceHibernatePolicyUpdate.c)
 *     PopAcquireTransitionLock @ 0x140A928AC (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x140AA56F0 (PopReleaseTransitionLock.c)
 *     PopHibernateEvaluation @ 0x140AB38B0 (PopHibernateEvaluation.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopWnfHibernatePolicyCallback @ 0x140753280
 * Reason: Hex-Rays returned no pseudocode for 0x140753280
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140753280: mov     rax, rsp
 * 0000000140753283: mov     [rax+8], rbx
 * 0000000140753287: push    rdi
 * 0000000140753288: sub     rsp, 30h
 * 000000014075328C: and     dword ptr [rax-14h], 0
 * 0000000140753290: lea     rdx, [rax-14h]
 * 0000000140753294: mov     ecx, 3
 * 0000000140753299: mov     byte ptr [rax-18h], 0
 * 000000014075329D: call    PopQueryHiberPersistedRegValue
 * 00000001407532A2: mov     edi, eax
 * 00000001407532A4: test    eax, eax
 * 00000001407532A6: js      short loc_1407532EB
 * 00000001407532A8: mov     ecx, 2
 * 00000001407532AD: call    PopAcquireTransitionLock
 * 00000001407532B2: call    PopAcquirePolicyLock
 * 00000001407532B7: mov     ebx, [rsp+38h+var_14]
 * 00000001407532BB: lea     r8, [rsp+38h+var_18]
 * 00000001407532C0: mov     dl, 1
 * 00000001407532C2: mov     cs:PopAllowHibernateReg, ebx
 * 00000001407532C8: mov     cl, dl
 * 00000001407532CA: call    PopHibernateEvaluation
 * 00000001407532CF: mov     edi, eax
 * 00000001407532D1: call    PopReleasePolicyLock
 * 00000001407532D6: mov     ecx, 2
 * 00000001407532DB: call    PopReleaseTransitionLock
 * 00000001407532E0: mov     dl, [rsp+38h+var_18]
 * 00000001407532E4: mov     ecx, ebx
 * 00000001407532E6: call    PopTraceHibernatePolicyUpdate
 * 00000001407532EB: mov     rbx, [rsp+38h+arg_0]
 * 00000001407532F0: mov     eax, edi
 * 00000001407532F2: add     rsp, 30h
 * 00000001407532F6: pop     rdi
 * 00000001407532F7: retn
 */
