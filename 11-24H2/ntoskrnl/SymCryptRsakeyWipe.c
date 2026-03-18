/*
 * XREFs of SymCryptRsakeyWipe @ 0x140522278
 * Callers:
 *     HashpVerifyPkcs1Signature @ 0x14082FD90 (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptWipe @ 0x14051DC34 (SymCryptWipe.c)
 */

__int64 __fastcall SymCryptRsakeyWipe(__int64 a1)
{
  return SymCryptWipe(a1, *(unsigned int *)(a1 + 4));
}
