/*
 * XREFs of MiInitialSlabPopulate @ 0x14067C6D0
 * Callers:
 *     <none>
 * Callees:
 *     MiReplenishSlabAllocator @ 0x1403769E8 (MiReplenishSlabAllocator.c)
 */

__int64 __fastcall MiInitialSlabPopulate(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rdx

  v5 = *(_QWORD *)(a2 + 104);
  if ( v5 )
    MiReplenishSlabAllocator(a2, v5, 0x40u, a4);
  return 0LL;
}
