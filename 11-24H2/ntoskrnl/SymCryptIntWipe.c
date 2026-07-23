/*
 * XREFs of SymCryptIntWipe @ 0x140521440
 * Callers:
 *     SymCryptRsaCoreEnc @ 0x140522AF4 (SymCryptRsaCoreEnc.c)
 *     HashpVerifyPkcs1Signature @ 0x1408305C0 (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptWipe @ 0x14051B504 (SymCryptWipe.c)
 */

__int64 __fastcall SymCryptIntWipe(__int64 a1)
{
  return SymCryptWipe(a1, *(unsigned int *)(a1 + 8));
}
