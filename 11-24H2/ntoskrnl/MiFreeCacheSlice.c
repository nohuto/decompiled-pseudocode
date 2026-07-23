/*
 * XREFs of MiFreeCacheSlice @ 0x140693778
 * Callers:
 *     MiFreeLargeProcessPagesToCache @ 0x1406937E4 (MiFreeLargeProcessPagesToCache.c)
 *     MiFreeProcessLargePageCache @ 0x140693AC4 (MiFreeProcessLargePageCache.c)
 * Callees:
 *     MiFreeLargeZeroPages @ 0x14026DAE0 (MiFreeLargeZeroPages.c)
 *     MiCoalesceActivePagesIntoFree @ 0x14068DDA4 (MiCoalesceActivePagesIntoFree.c)
 */

__int64 __fastcall MiFreeCacheSlice(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a2 + 64) != 32LL )
    return MiFreeLargeZeroPages(a1, a2, 1);
  result = MiCoalesceActivePagesIntoFree(
             a1,
             0xAAAAAAAAAAAAAAABuLL * ((*(_QWORD *)(a2 + 48) + 0x220000000000LL) >> 4),
             1u);
  if ( !(_DWORD)result )
    return MiFreeLargeZeroPages(a1, a2, 1);
  return result;
}
