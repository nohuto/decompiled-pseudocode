/*
 * XREFs of MiAllocateImportList @ 0x140A13084
 * Callers:
 *     MiAddEntryToImportList @ 0x1407D7474 (MiAddEntryToImportList.c)
 *     MiResolveImageReferences @ 0x140A1286C (MiResolveImageReferences.c)
 *     MiCompressImportList @ 0x140A12FD4 (MiCompressImportList.c)
 * Callees:
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 */

_QWORD *__fastcall MiAllocateImportList(unsigned __int64 a1)
{
  _QWORD *result; // rax

  if ( a1 > 0x1FFFFFFE )
    return 0LL;
  result = (_QWORD *)MiAllocatePool(0x100uLL, (unsigned int)(8 * a1 + 8), 1413770573);
  if ( result )
    *result = a1;
  return result;
}
