/*
 * XREFs of HvpLogEntryCheckDataChecksum @ 0x140AA86A8
 * Callers:
 *     HvpIncrementalLogFileEnumeratorAdvance @ 0x140A83C5C (HvpIncrementalLogFileEnumeratorAdvance.c)
 * Callees:
 *     SymCryptMarvin32 @ 0x14051AEA8 (SymCryptMarvin32.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall HvpLogEntryCheckDataChecksum(__int64 a1, int a2, __int64 a3)
{
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF

  SymCryptMarvin32(HvSymcryptSeed, (unsigned __int16 *)(a1 + 40), (unsigned int)(a2 - 40), &v5);
  return *(_QWORD *)(a3 + 24) == v5;
}
