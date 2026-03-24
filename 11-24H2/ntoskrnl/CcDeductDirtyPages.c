/*
 * XREFs of CcDeductDirtyPages @ 0x1402CD7A8
 * Callers:
 *     CcUnpinFileDataEx @ 0x1402AB380 (CcUnpinFileDataEx.c)
 *     CcDeleteMbcb @ 0x1402CD624 (CcDeleteMbcb.c)
 *     CcDeleteBcbs @ 0x1402CE42C (CcDeleteBcbs.c)
 *     CcAcquireByteRangeForWrite @ 0x1404DC470 (CcAcquireByteRangeForWrite.c)
 * Callees:
 *     CcDeductDirtyPagesInternal @ 0x1402CD7EC (CcDeductDirtyPagesInternal.c)
 */

/*
 * Hex-Rays decompilation failed for CcDeductDirtyPages @ 0x1402CD7A8
 * Reason: Hex-Rays returned no pseudocode for 0x1402CD7A8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402CD7A8: sub     rsp, 28h
 * 00000001402CD7AC: xor     r9d, r9d
 * 00000001402CD7AF: test    rcx, rcx
 * 00000001402CD7B2: jz      short loc_1402CD7D6
 * 00000001402CD7B4: cmp     cs:CcEnablePerVolumeLazyWriter, r9b
 * 00000001402CD7BB: mov     r8, [rcx+218h]
 * 00000001402CD7C2: jz      short loc_1402CD7CB
 * 00000001402CD7C4: mov     r9, [rcx+258h]
 * 00000001402CD7CB: call    CcDeductDirtyPagesInternal
 * 00000001402CD7D0: add     rsp, 28h
 * 00000001402CD7D4: retn
 * 00000001402CD7D6: mov     rax, cs:PspSystemPartition
 * 00000001402CD7DD: mov     r8, [rax+8]
 * 00000001402CD7E1: jmp     short loc_1402CD7CB
 */
