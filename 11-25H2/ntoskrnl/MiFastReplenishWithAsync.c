/*
 * XREFs of MiFastReplenishWithAsync @ 0x140390EA8
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x14038F57C (MiMakeZeroedPageTablesEx.c)
 * Callees:
 *     MiReplenishSlabAllocator @ 0x1403769E8 (MiReplenishSlabAllocator.c)
 *     MiAsyncSlabReplenish @ 0x140390EF4 (MiAsyncSlabReplenish.c)
 */

__int64 __fastcall MiFastReplenishWithAsync(__int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v6; // ebx

  v6 = MiReplenishSlabAllocator(a1, a2, 0x40u, a4);
  if ( !v6 )
    MiAsyncSlabReplenish(a1, 0LL, a3);
  return v6;
}
