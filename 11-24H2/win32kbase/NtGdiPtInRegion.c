/*
 * XREFs of NtGdiPtInRegion @ 0x14011FEB0
 * Callers:
 *     <none>
 * Callees:
 *     GrePtInRegion @ 0x14002B1F0 (GrePtInRegion.c)
 */

__int64 __fastcall NtGdiPtInRegion(HRGN a1, int a2, int a3)
{
  return GrePtInRegion(a1, a2, a3);
}
