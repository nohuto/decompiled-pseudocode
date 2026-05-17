/*
 * XREFs of SymCryptSha1Append @ 0x18015A480
 * Callers:
 *     RtlCreateServiceSid @ 0x1800CD150 (RtlCreateServiceSid.c)
 *     RtlCreateVirtualAccountSid @ 0x1800CD2A0 (RtlCreateVirtualAccountSid.c)
 *     A_SHAUpdate @ 0x18011C540 (A_SHAUpdate.c)
 * Callees:
 *     SymCryptHashAppendInternal @ 0x18015CCC4 (SymCryptHashAppendInternal.c)
 */

/*
 * Hex-Rays decompilation failed for SymCryptSha1Append @ 0x18015A480
 * Reason: Hex-Rays returned no pseudocode for 0x18015A480
 * Fallback: raw IDA disassembly follows.
 *
 * 000000018015A480: sub     rsp, 28h
 * 000000018015A484: mov     r9, r8
 * 000000018015A487: mov     r8, rdx
 * 000000018015A48A: mov     rdx, rcx
 * 000000018015A48D: lea     rcx, SymCryptSha1Algorithm_default
 * 000000018015A494: call    SymCryptHashAppendInternal
 * 000000018015A499: add     rsp, 28h
 * 000000018015A49D: retn
 */
