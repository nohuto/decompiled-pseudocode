/*
 * XREFs of MiDeleteSlabAllocator @ 0x1406874F0
 * Callers:
 *     <none>
 * Callees:
 *     MiFreeSlabEntries @ 0x1402D3B04 (MiFreeSlabEntries.c)
 *     MiAsyncSlabReplenish @ 0x1404141C0 (MiAsyncSlabReplenish.c)
 */

__int64 __fastcall MiDeleteSlabAllocator(__int64 a1, __int64 a2)
{
  MiAsyncSlabReplenish(a2, 0LL, 2);
  MiFreeSlabEntries(a1, a2);
  return 0LL;
}
