/*
 * XREFs of SymCryptRsakeySetValue @ 0x140521B08
 * Callers:
 *     SymCryptRsaSelftest @ 0x140529908 (SymCryptRsaSelftest.c)
 *     HashpVerifyPkcs1Signature @ 0x14082FD90 (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptRsakeySetValueInternal @ 0x140521B70 (SymCryptRsakeySetValueInternal.c)
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
