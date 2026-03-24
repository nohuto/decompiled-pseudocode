/*
 * XREFs of PopWnfUserAwayPredictionCallback @ 0x140741340
 * Callers:
 *     <none>
 * Callees:
 *     PopUpdateSmartUserPresencePredictions @ 0x14074FCF8 (PopUpdateSmartUserPresencePredictions.c)
 *     ExQueryWnfStateData @ 0x140A36E60 (ExQueryWnfStateData.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopWnfUserAwayPredictionCallback @ 0x140741340
 * Reason: Hex-Rays returned no pseudocode for 0x140741340
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140741340: mov     rax, rsp
 * 0000000140741343: push    rbx
 * 0000000140741344: sub     rsp, 30h
 * 0000000140741348: and     qword ptr [rax-10h], 0
 * 000000014074134D: lea     r9, [rax-18h]
 * 0000000140741351: lea     r8, [rax-10h]
 * 0000000140741355: mov     dword ptr [rax-18h], 8
 * 000000014074135C: lea     rdx, [rax+20h]
 * 0000000140741360: call    ExQueryWnfStateData
 * 0000000140741365: mov     ebx, eax
 * 0000000140741367: test    eax, eax
 * 0000000140741369: js      short loc_14074138F
 * 000000014074136B: cmp     [rsp+38h+var_18], 8
 * 0000000140741370: jnb     short loc_140741376
 * 0000000140741372: xor     ebx, ebx
 * 0000000140741374: jmp     short loc_14074138F
 * 0000000140741376: call    PopAcquirePolicyLock
 * 000000014074137B: mov     rcx, [rsp+38h+var_10]
 * 0000000140741380: mov     edx, 3
 * 0000000140741385: call    PopUpdateSmartUserPresencePredictions
 * 000000014074138A: call    PopReleasePolicyLock
 * 000000014074138F: mov     eax, ebx
 * 0000000140741391: add     rsp, 30h
 * 0000000140741395: pop     rbx
 * 0000000140741396: retn
 */
