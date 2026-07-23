/*
 * XREFs of SymCryptRsakeySizeofModulus @ 0x14051FBA8
 * Callers:
 *     SymCryptRsaCoreVerifyInput @ 0x140522CCC (SymCryptRsaCoreVerifyInput.c)
 *     SymCryptRsaPkcs1Sign @ 0x140522D90 (SymCryptRsaPkcs1Sign.c)
 *     SymCryptRsaPkcs1Verify @ 0x140522EEC (SymCryptRsaPkcs1Verify.c)
 *     HashpVerifyPkcs1Signature @ 0x1408305C0 (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptRsakeySizeofModulus(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(a1 + 16) + 7) >> 3;
}
