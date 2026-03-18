/*
 * XREFs of EngFindResource @ 0x140300090
 * Callers:
 *     <none>
 * Callees:
 *     ?pvFindResource@@YAPEAXPEAX0HHPEAK@Z @ 0x1401D3838 (-pvFindResource@@YAPEAXPEAX0HHPEAK@Z.c)
 */

PVOID __stdcall EngFindResource(HANDLE h, INT iName, INT iType, PULONG pulSize)
{
  return (PVOID)pvFindResource(
                  (void *)(*((_QWORD *)h + 1) + 1LL),
                  *((_QWORD *)h + 1) + *((unsigned int *)h + 6),
                  iName,
                  iType,
                  pulSize);
}
