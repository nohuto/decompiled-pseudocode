/*
 * XREFs of MiDeleteSlabAllocator @ 0x14067BC60
 * Callers:
 *     <none>
 * Callees:
 *     MiAsyncSlabReplenish @ 0x140390EF4 (MiAsyncSlabReplenish.c)
 *     MiFreeSlabEntries @ 0x1403B5608 (MiFreeSlabEntries.c)
 */

__int64 __fastcall MiDeleteSlabAllocator(__int64 a1, __int64 a2)
{
  MiAsyncSlabReplenish(a2, 0LL, 2);
  MiFreeSlabEntries(a1, a2);
  return 0LL;
}
