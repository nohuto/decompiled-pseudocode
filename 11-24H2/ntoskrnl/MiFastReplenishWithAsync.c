/*
 * XREFs of MiFastReplenishWithAsync @ 0x14026F5B8
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x14026D5D0 (MiMakeZeroedPageTablesEx.c)
 * Callees:
 *     MiReplenishSlabAllocator @ 0x14021E544 (MiReplenishSlabAllocator.c)
 *     MiAsyncSlabReplenish @ 0x14026F604 (MiAsyncSlabReplenish.c)
 */

__int64 __fastcall MiFastReplenishWithAsync(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned int v5; // ebx

  v5 = MiReplenishSlabAllocator(a1, a2, 64);
  if ( !v5 )
    MiAsyncSlabReplenish(a1, 0LL, a3);
  return v5;
}
