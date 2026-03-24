/*
 * XREFs of PopWnfUserAwayPredictionCallback @ 0x14074D410
 * Callers:
 *     <none>
 * Callees:
 *     PopUpdateSmartUserPresencePredictions @ 0x14075C5C0 (PopUpdateSmartUserPresencePredictions.c)
 *     ExQueryWnfStateData @ 0x140A3BB60 (ExQueryWnfStateData.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopWnfUserAwayPredictionCallback @ 0x14074D410
 * Reason: Hex-Rays returned no pseudocode for 0x14074D410
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014074D410: mov     rax, rsp
 * 000000014074D413: push    rbx
 * 000000014074D414: sub     rsp, 30h
 * 000000014074D418: and     qword ptr [rax-10h], 0
 * 000000014074D41D: lea     r9, [rax-18h]
 * 000000014074D421: lea     r8, [rax-10h]
 * 000000014074D425: mov     dword ptr [rax-18h], 8
 * 000000014074D42C: lea     rdx, [rax+20h]
 * 000000014074D430: call    ExQueryWnfStateData
 * 000000014074D435: mov     ebx, eax
 * 000000014074D437: test    eax, eax
 * 000000014074D439: js      short loc_14074D45F
 * 000000014074D43B: cmp     [rsp+38h+var_18], 8
 * 000000014074D440: jnb     short loc_14074D446
 * 000000014074D442: xor     ebx, ebx
 * 000000014074D444: jmp     short loc_14074D45F
 * 000000014074D446: call    PopAcquirePolicyLock
 * 000000014074D44B: mov     rcx, [rsp+38h+var_10]
 * 000000014074D450: mov     edx, 3
 * 000000014074D455: call    PopUpdateSmartUserPresencePredictions
 * 000000014074D45A: call    PopReleasePolicyLock
 * 000000014074D45F: mov     eax, ebx
 * 000000014074D461: add     rsp, 30h
 * 000000014074D465: pop     rbx
 * 000000014074D466: retn
 */
