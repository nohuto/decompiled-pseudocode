/*
 * XREFs of sub_14050A0C0 @ 0x14050A0C0
 * Callers:
 *     <none>
 * Callees:
 *     qsort @ 0x1404FED20 (qsort.c)
 */

void __fastcall sub_14050A0C0(void *a1, unsigned int a2)
{
  qsort(a1, a2, 8uLL, PtFuncCompare);
}
