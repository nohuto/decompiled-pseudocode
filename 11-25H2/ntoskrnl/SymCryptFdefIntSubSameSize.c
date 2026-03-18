/*
 * XREFs of SymCryptFdefIntSubSameSize @ 0x14052CA50
 * Callers:
 *     SymCryptIntSubSameSize @ 0x1405212FC (SymCryptIntSubSameSize.c)
 * Callees:
 *     SymCryptFdefRawSubAsm @ 0x140535510 (SymCryptFdefRawSubAsm.c)
 */

__int64 __fastcall SymCryptFdefIntSubSameSize(__int64 a1, __int64 a2, __int64 a3)
{
  return SymCryptFdefRawSubAsm(a1 + 32, a2 + 32, a3 + 32, *(unsigned int *)(a3 + 4));
}
