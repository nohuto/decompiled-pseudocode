/*
 * XREFs of SymCryptMd5Append @ 0x140525B80
 * Callers:
 *     HashpHashBytes @ 0x1408308F8 (HashpHashBytes.c)
 * Callees:
 *     SymCryptHashAppendInternal @ 0x140528DEC (SymCryptHashAppendInternal.c)
 */

__int64 __fastcall SymCryptMd5Append(__int64 a1, __int64 a2, __int64 a3)
{
  return SymCryptHashAppendInternal(SymCryptMd5Algorithm_default, a1, a2, a3);
}
