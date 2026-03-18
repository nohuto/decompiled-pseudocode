/*
 * XREFs of MiAllocateImportList @ 0x140A184A4
 * Callers:
 *     MiAddEntryToImportList @ 0x1407E732C (MiAddEntryToImportList.c)
 *     MiResolveImageReferences @ 0x140A17C94 (MiResolveImageReferences.c)
 *     MiCompressImportList @ 0x140A183F4 (MiCompressImportList.c)
 * Callees:
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
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
