/*
 * XREFs of PopWnfUserAwayPredictionCallback @ 0x14074B740
 * Callers:
 *     <none>
 * Callees:
 *     PopUpdateSmartUserPresencePredictions @ 0x14075B55C (PopUpdateSmartUserPresencePredictions.c)
 *     ExQueryWnfStateData @ 0x140A31340 (ExQueryWnfStateData.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopWnfUserAwayPredictionCallback @ 0x14074B740
 * Reason: Hex-Rays returned no pseudocode for 0x14074B740
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014074B740: mov     rax, rsp
 * 000000014074B743: push    rbx
 * 000000014074B744: sub     rsp, 30h
 * 000000014074B748: and     qword ptr [rax-10h], 0
 * 000000014074B74D: lea     r9, [rax-18h]
 * 000000014074B751: lea     r8, [rax-10h]
 * 000000014074B755: mov     dword ptr [rax-18h], 8
 * 000000014074B75C: lea     rdx, [rax+20h]
 * 000000014074B760: call    ExQueryWnfStateData
 * 000000014074B765: mov     ebx, eax
 * 000000014074B767: test    eax, eax
 * 000000014074B769: js      short loc_14074B78F
 * 000000014074B76B: cmp     [rsp+38h+var_18], 8
 * 000000014074B770: jnb     short loc_14074B776
 * 000000014074B772: xor     ebx, ebx
 * 000000014074B774: jmp     short loc_14074B78F
 * 000000014074B776: call    PopAcquirePolicyLock
 * 000000014074B77B: mov     rcx, [rsp+38h+var_10]
 * 000000014074B780: mov     edx, 3
 * 000000014074B785: call    PopUpdateSmartUserPresencePredictions
 * 000000014074B78A: call    PopReleasePolicyLock
 * 000000014074B78F: mov     eax, ebx
 * 000000014074B791: add     rsp, 30h
 * 000000014074B795: pop     rbx
 * 000000014074B796: retn
 */
