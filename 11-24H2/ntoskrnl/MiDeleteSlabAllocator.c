/*
 * XREFs of MiDeleteSlabAllocator @ 0x140688620
 * Callers:
 *     <none>
 * Callees:
 *     MiAsyncSlabReplenish @ 0x14026F604 (MiAsyncSlabReplenish.c)
 *     MiFreeSlabEntries @ 0x140354D7C (MiFreeSlabEntries.c)
 */

__int64 __fastcall MiDeleteSlabAllocator(__int64 a1, __int64 a2)
{
  MiAsyncSlabReplenish(a2, 0LL, 2);
  MiFreeSlabEntries(a1, a2);
  return 0LL;
}
