/*
 * XREFs of SymCryptRsakeySizeofModulus @ 0x140522264
 * Callers:
 *     SymCryptRsaCoreVerifyInput @ 0x1405253B4 (SymCryptRsaCoreVerifyInput.c)
 *     SymCryptRsaPkcs1Sign @ 0x140525478 (SymCryptRsaPkcs1Sign.c)
 *     SymCryptRsaPkcs1Verify @ 0x1405255D4 (SymCryptRsaPkcs1Verify.c)
 *     HashpVerifyPkcs1Signature @ 0x14082FD90 (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptRsakeySizeofModulus(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(a1 + 16) + 7) >> 3;
}
