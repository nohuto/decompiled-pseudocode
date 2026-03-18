/*
 * XREFs of MiInitialSlabPopulate @ 0x140687F60
 * Callers:
 *     <none>
 * Callees:
 *     MiReplenishSlabAllocator @ 0x140413B18 (MiReplenishSlabAllocator.c)
 */

__int64 __fastcall MiInitialSlabPopulate(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rdx

  v3 = *(_QWORD *)(a2 + 104);
  if ( v3 )
    MiReplenishSlabAllocator(a2, v3, 64);
  return 0LL;
}
