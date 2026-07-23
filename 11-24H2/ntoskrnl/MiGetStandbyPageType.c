/*
 * XREFs of MiGetStandbyPageType @ 0x1403E78B0
 * Callers:
 *     MiFindSuitableLookasideReplacement @ 0x140222B60 (MiFindSuitableLookasideReplacement.c)
 *     MiRebuildStandbyLookasideList @ 0x1403E73E0 (MiRebuildStandbyLookasideList.c)
 * Callees:
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 */

__int64 __fastcall MiGetStandbyPageType(ULONG_PTR a1)
{
  __int64 v2; // rcx

  if ( a1 >= qword_140E35C40 && a1 < qword_140E35C40 + 2048 )
    return 1LL;
  v2 = 48 * a1 - 0x220000000000LL;
  if ( (*(_DWORD *)(v2 + 32) & 0x8000000) != 0 && (unsigned int)MiGetPfnSlabType(v2) == 9 )
    return 2LL;
  else
    return 0LL;
}
