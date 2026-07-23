/*
 * XREFs of SymCryptRsakeyWipe @ 0x14051FBBC
 * Callers:
 *     HashpVerifyPkcs1Signature @ 0x1408305C0 (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptWipe @ 0x14051B504 (SymCryptWipe.c)
 */

__int64 __fastcall SymCryptRsakeyWipe(__int64 a1)
{
  return SymCryptWipe(a1, *(unsigned int *)(a1 + 4));
}
