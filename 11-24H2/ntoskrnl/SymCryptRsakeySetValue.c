/*
 * XREFs of SymCryptRsakeySetValue @ 0x14051F45C
 * Callers:
 *     SymCryptRsaSelftest @ 0x140527228 (SymCryptRsaSelftest.c)
 *     HashpVerifyPkcs1Signature @ 0x1408305C0 (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptRsakeySetValueInternal @ 0x14051F4C4 (SymCryptRsakeySetValueInternal.c)
 */

__int64 __fastcall SymCryptRsakeySetValue(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        __int64 a10)
{
  return SymCryptRsakeySetValueInternal(a1, a2, a3, a4, 0LL, 0LL, a5, a6, a7, a8, a9, a10);
}
