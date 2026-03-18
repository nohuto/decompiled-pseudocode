/*
 * XREFs of Normalization__TableLookup @ 0x140777AE8
 * Callers:
 *     NormBuffer__GetLastChar @ 0x1405E3404 (NormBuffer__GetLastChar.c)
 *     NormBuffer__IsBlocked @ 0x1405E3588 (NormBuffer__IsBlocked.c)
 *     NormBuffer__SortBeforeSameClass @ 0x1405E3904 (NormBuffer__SortBeforeSameClass.c)
 * Callees:
 *     <none>
 */

char __fastcall Normalization__TableLookup(__int64 a1, char a2, unsigned __int8 a3)
{
  return *(_BYTE *)(((unsigned __int64)a3 << 7) + (a2 & 0x7F) + *(_QWORD *)(a1 + 40) - 128);
}
