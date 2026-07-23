/*
 * XREFs of SymCryptMd4Append @ 0x18015F400
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptHashAppendInternal @ 0x180159AD4 (SymCryptHashAppendInternal.c)
 */

size_t __fastcall SymCryptMd4Append(unsigned int *a1, char *a2, size_t a3)
{
  return SymCryptHashAppendInternal((__int64)SymCryptMd4Algorithm_default, a1, a2, a3);
}
