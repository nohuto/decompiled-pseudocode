/*
 * XREFs of Normalization__PageLookup @ 0x140786D20
 * Callers:
 *     NormBuffer__GetLastChar @ 0x1405EF718 (NormBuffer__GetLastChar.c)
 *     NormBuffer__IsBlocked @ 0x1405EF89C (NormBuffer__IsBlocked.c)
 *     NormBuffer__SortBeforeSameClass @ 0x1405EFC18 (NormBuffer__SortBeforeSameClass.c)
 * Callees:
 *     <none>
 */

char __fastcall Normalization__PageLookup(__int64 a1, int a2)
{
  return *(_BYTE *)(((__int64)a2 >> 7) + *(_QWORD *)(a1 + 32));
}
