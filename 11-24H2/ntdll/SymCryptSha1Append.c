/*
 * XREFs of SymCryptSha1Append @ 0x180158ED0
 * Callers:
 *     RtlCreateServiceSid @ 0x1800D0430 (RtlCreateServiceSid.c)
 *     RtlCreateVirtualAccountSid @ 0x1800D0580 (RtlCreateVirtualAccountSid.c)
 *     A_SHAUpdate @ 0x180119CE0 (A_SHAUpdate.c)
 * Callees:
 *     SymCryptHashAppendInternal @ 0x18015B714 (SymCryptHashAppendInternal.c)
 */

/*
 * Hex-Rays decompilation failed for SymCryptSha1Append @ 0x180158ED0
 * Reason: Hex-Rays returned no pseudocode for 0x180158ED0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180158ED0: sub     rsp, 28h
 * 0000000180158ED4: mov     r9, r8
 * 0000000180158ED7: mov     r8, rdx
 * 0000000180158EDA: mov     rdx, rcx
 * 0000000180158EDD: lea     rcx, SymCryptSha1Algorithm_default
 * 0000000180158EE4: call    SymCryptHashAppendInternal
 * 0000000180158EE9: add     rsp, 28h
 * 0000000180158EED: retn
 */
