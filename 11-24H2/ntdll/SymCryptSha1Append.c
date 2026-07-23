/*
 * XREFs of SymCryptSha1Append @ 0x180157290
 * Callers:
 *     RtlCreateServiceSid @ 0x1800CD9A0 (RtlCreateServiceSid.c)
 *     RtlCreateVirtualAccountSid @ 0x1800CDAF0 (RtlCreateVirtualAccountSid.c)
 *     A_SHAUpdate @ 0x180117F10 (A_SHAUpdate.c)
 * Callees:
 *     SymCryptHashAppendInternal @ 0x180159AD4 (SymCryptHashAppendInternal.c)
 */

/*
 * Hex-Rays decompilation failed for SymCryptSha1Append @ 0x180157290
 * Reason: Hex-Rays returned no pseudocode for 0x180157290
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180157290: sub     rsp, 28h
 * 0000000180157294: mov     r9, r8
 * 0000000180157297: mov     r8, rdx
 * 000000018015729A: mov     rdx, rcx
 * 000000018015729D: lea     rcx, SymCryptSha1Algorithm_default
 * 00000001801572A4: call    SymCryptHashAppendInternal
 * 00000001801572A9: add     rsp, 28h
 * 00000001801572AD: retn
 */
