/*
 * XREFs of PopWnfHibernatePolicyCallback @ 0x140747190
 * Callers:
 *     <none>
 * Callees:
 *     PopQueryHiberPersistedRegValue @ 0x140746BCC (PopQueryHiberPersistedRegValue.c)
 *     PopTraceHibernatePolicyUpdate @ 0x14074C628 (PopTraceHibernatePolicyUpdate.c)
 *     PopAcquireTransitionLock @ 0x140A8DB1C (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x140AA0354 (PopReleaseTransitionLock.c)
 *     PopHibernateEvaluation @ 0x140AAE8C4 (PopHibernateEvaluation.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopWnfHibernatePolicyCallback @ 0x140747190
 * Reason: Hex-Rays returned no pseudocode for 0x140747190
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140747190: mov     rax, rsp
 * 0000000140747193: mov     [rax+8], rbx
 * 0000000140747197: push    rdi
 * 0000000140747198: sub     rsp, 30h
 * 000000014074719C: and     dword ptr [rax-14h], 0
 * 00000001407471A0: lea     rdx, [rax-14h]
 * 00000001407471A4: mov     ecx, 3
 * 00000001407471A9: mov     byte ptr [rax-18h], 0
 * 00000001407471AD: call    PopQueryHiberPersistedRegValue
 * 00000001407471B2: mov     edi, eax
 * 00000001407471B4: test    eax, eax
 * 00000001407471B6: js      short loc_1407471FB
 * 00000001407471B8: mov     ecx, 2
 * 00000001407471BD: call    PopAcquireTransitionLock
 * 00000001407471C2: call    PopAcquirePolicyLock
 * 00000001407471C7: mov     ebx, [rsp+38h+var_14]
 * 00000001407471CB: lea     r8, [rsp+38h+var_18]
 * 00000001407471D0: mov     dl, 1
 * 00000001407471D2: mov     cs:PopAllowHibernateReg, ebx
 * 00000001407471D8: mov     cl, dl
 * 00000001407471DA: call    PopHibernateEvaluation
 * 00000001407471DF: mov     edi, eax
 * 00000001407471E1: call    PopReleasePolicyLock
 * 00000001407471E6: mov     ecx, 2
 * 00000001407471EB: call    PopReleaseTransitionLock
 * 00000001407471F0: mov     dl, [rsp+38h+var_18]
 * 00000001407471F4: mov     ecx, ebx
 * 00000001407471F6: call    PopTraceHibernatePolicyUpdate
 * 00000001407471FB: mov     rbx, [rsp+38h+arg_0]
 * 0000000140747200: mov     eax, edi
 * 0000000140747202: add     rsp, 30h
 * 0000000140747206: pop     rdi
 * 0000000140747207: retn
 */
