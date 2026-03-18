/*
 * XREFs of MiSortMdlFrames @ 0x1406665E0
 * Callers:
 *     MiRemoveMdlPages @ 0x1407DB738 (MiRemoveMdlPages.c)
 * Callees:
 *     qsort @ 0x1404FC5A0 (qsort.c)
 */

void __fastcall MiSortMdlFrames(__int64 a1)
{
  qsort(
    (void *)(a1 + 48),
    (unsigned __int64)*(unsigned int *)(a1 + 40) >> 12,
    8uLL,
    (int (__cdecl *)(const void *, const void *))HalpNodeCostSort);
}
