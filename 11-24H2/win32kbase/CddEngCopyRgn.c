/*
 * XREFs of CddEngCopyRgn @ 0x1401CF400
 * Callers:
 *     <none>
 * Callees:
 *     CddEngCombineRgn @ 0x1401CF310 (CddEngCombineRgn.c)
 */

__int64 __fastcall CddEngCopyRgn(REGION_CORE **a1, REGION_CORE *a2)
{
  return CddEngCombineRgn(a1, a2, 0LL, 5);
}
