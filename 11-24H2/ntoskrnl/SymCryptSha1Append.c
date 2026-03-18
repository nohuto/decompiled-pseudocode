/*
 * XREFs of SymCryptSha1Append @ 0x140526F40
 * Callers:
 *     HashpHashBytes @ 0x1408300C8 (HashpHashBytes.c)
 * Callees:
 *     SymCryptHashAppendInternal @ 0x14052E944 (SymCryptHashAppendInternal.c)
 */

__int64 __fastcall SymCryptSha1Append(__int64 a1, __int64 a2, __int64 a3)
{
  return SymCryptHashAppendInternal(SymCryptSha1Algorithm_default, a1, a2, a3);
}
