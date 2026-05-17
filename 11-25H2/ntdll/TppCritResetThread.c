/*
 * XREFs of TppCritResetThread @ 0x1800F9C38
 * Callers:
 *     TppWorkerThread @ 0x18007DCB0 (TppWorkerThread.c)
 * Callees:
 *     NtSetInformationThread @ 0x1801633C0 (NtSetInformationThread.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtSetInformationObject @ 0x180163D90 (NtSetInformationObject.c)
 */

/*
 * Hex-Rays decompilation failed for TppCritResetThread @ 0x1800F9C38
 * Reason: Hex-Rays returned no pseudocode for 0x1800F9C38
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001800F9C38: test    rcx, rcx
 * 00000001800F9C3B: jnz     short loc_1800F9C3F
 * 00000001800F9C3D: retn
 * 00000001800F9C3F: mov     [rsp+arg_18], rdi
 * 00000001800F9C44: mov     [rsp+Handle], rcx
 * 00000001800F9C49: push    r14
 * 00000001800F9C4B: sub     rsp, 20h
 * 00000001800F9C4F: xor     r14d, r14d
 * 00000001800F9C52: lea     r8, [rsp+28h+Handle]
 * 00000001800F9C57: lea     rdi, [r14-2]
 * 00000001800F9C5B: mov     rcx, rdi
 * 00000001800F9C5E: lea     r9d, [r14+8]
 * 00000001800F9C62: lea     edx, [r14+5]
 * 00000001800F9C66: call    NtSetInformationThread
 * 00000001800F9C6B: lea     r9d, [r14+4]
 * 00000001800F9C6F: mov     [rsp+28h+arg_10], r14d
 * 00000001800F9C74: lea     r8, [rsp+28h+arg_10]
 * 00000001800F9C79: mov     rcx, rdi
 * 00000001800F9C7C: lea     edx, [rdi+14h]
 * 00000001800F9C7F: call    NtSetInformationThread
 * 00000001800F9C84: mov     rcx, [rsp+28h+Handle]
 * 00000001800F9C89: lea     r9d, [r14+2]
 * 00000001800F9C8D: lea     r8, [rsp+28h+arg_8]
 * 00000001800F9C92: mov     [rsp+28h+arg_8], r14w
 * 00000001800F9C98: lea     edx, [rdi+6]
 * 00000001800F9C9B: call    NtSetInformationObject
 * 00000001800F9CA0: mov     rcx, [rsp+28h+Handle]; Handle
 * 00000001800F9CA5: call    NtClose
 * 00000001800F9CAA: lea     r9d, [r14+8]
 * 00000001800F9CAE: mov     [rsp+28h+Handle], r14
 * 00000001800F9CB3: lea     r8, [rsp+28h+Handle]
 * 00000001800F9CB8: mov     rcx, rdi
 * 00000001800F9CBB: lea     edx, [rdi+7]
 * 00000001800F9CBE: call    NtSetInformationThread
 * 00000001800F9CC3: mov     rdi, [rsp+28h+arg_18]
 * 00000001800F9CC8: add     rsp, 20h
 * 00000001800F9CCC: pop     r14
 * 00000001800F9CCE: retn
 */
