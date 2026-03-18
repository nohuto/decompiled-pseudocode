/*
 * XREFs of Normalization__PageLookup @ 0x140777AD0
 * Callers:
 *     NormBuffer__GetLastChar @ 0x1405E3404 (NormBuffer__GetLastChar.c)
 *     NormBuffer__IsBlocked @ 0x1405E3588 (NormBuffer__IsBlocked.c)
 *     NormBuffer__SortBeforeSameClass @ 0x1405E3904 (NormBuffer__SortBeforeSameClass.c)
 * Callees:
 *     <none>
 */

char __fastcall Normalization__PageLookup(__int64 a1, int a2)
{
  return *(_BYTE *)(((__int64)a2 >> 7) + *(_QWORD *)(a1 + 32));
}
