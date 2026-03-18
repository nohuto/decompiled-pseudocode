/*
 * XREFs of EngSort @ 0x14026CE90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall EngSort(PBYTE pjBuf, ULONG c, ULONG cjElem, SORTCOMP pfnComp)
{
  qsort(pjBuf, c, cjElem, pfnComp);
}
