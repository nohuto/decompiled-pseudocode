/*
 * XREFs of TppCritResetThread @ 0x1800F80A8
 * Callers:
 *     TppWorkerThread @ 0x1800238D0 (TppWorkerThread.c)
 * Callees:
 *     NtSetInformationThread @ 0x180161E30 (NtSetInformationThread.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtSetInformationObject @ 0x180162800 (NtSetInformationObject.c)
 */

/*
 * Hex-Rays decompilation failed for TppCritResetThread @ 0x1800F80A8
 * Reason: Hex-Rays returned no pseudocode for 0x1800F80A8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001800F80A8: test    rcx, rcx
 * 00000001800F80AB: jnz     short loc_1800F80AF
 * 00000001800F80AD: retn
 * 00000001800F80AF: mov     [rsp+arg_18], rdi
 * 00000001800F80B4: mov     [rsp+Handle], rcx
 * 00000001800F80B9: push    r14
 * 00000001800F80BB: sub     rsp, 20h
 * 00000001800F80BF: xor     r14d, r14d
 * 00000001800F80C2: lea     r8, [rsp+28h+Handle]
 * 00000001800F80C7: lea     rdi, [r14-2]
 * 00000001800F80CB: mov     rcx, rdi
 * 00000001800F80CE: lea     r9d, [r14+8]
 * 00000001800F80D2: lea     edx, [r14+5]
 * 00000001800F80D6: call    NtSetInformationThread
 * 00000001800F80DB: lea     r9d, [r14+4]
 * 00000001800F80DF: mov     [rsp+28h+arg_10], r14d
 * 00000001800F80E4: lea     r8, [rsp+28h+arg_10]
 * 00000001800F80E9: mov     rcx, rdi
 * 00000001800F80EC: lea     edx, [rdi+14h]
 * 00000001800F80EF: call    NtSetInformationThread
 * 00000001800F80F4: mov     rcx, [rsp+28h+Handle]
 * 00000001800F80F9: lea     r9d, [r14+2]
 * 00000001800F80FD: lea     r8, [rsp+28h+arg_8]
 * 00000001800F8102: mov     [rsp+28h+arg_8], r14w
 * 00000001800F8108: lea     edx, [rdi+6]
 * 00000001800F810B: call    NtSetInformationObject
 * 00000001800F8110: mov     rcx, [rsp+28h+Handle]; Handle
 * 00000001800F8115: call    NtClose
 * 00000001800F811A: lea     r9d, [r14+8]
 * 00000001800F811E: mov     [rsp+28h+Handle], r14
 * 00000001800F8123: lea     r8, [rsp+28h+Handle]
 * 00000001800F8128: mov     rcx, rdi
 * 00000001800F812B: lea     edx, [rdi+7]
 * 00000001800F812E: call    NtSetInformationThread
 * 00000001800F8133: mov     rdi, [rsp+28h+arg_18]
 * 00000001800F8138: add     rsp, 20h
 * 00000001800F813C: pop     r14
 * 00000001800F813E: retn
 */
