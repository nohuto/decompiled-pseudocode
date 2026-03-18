/*
 * XREFs of MiFastReplenishWithAsync @ 0x140414728
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x1403A62E0 (MiMakeZeroedPageTablesEx.c)
 * Callees:
 *     MiReplenishSlabAllocator @ 0x140413B18 (MiReplenishSlabAllocator.c)
 *     MiAsyncSlabReplenish @ 0x1404141C0 (MiAsyncSlabReplenish.c)
 */

__int64 __fastcall MiFastReplenishWithAsync(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned int v5; // ebx

  v5 = MiReplenishSlabAllocator(a1, a2, 64);
  if ( !v5 )
    MiAsyncSlabReplenish(a1, 0LL, a3);
  return v5;
}
