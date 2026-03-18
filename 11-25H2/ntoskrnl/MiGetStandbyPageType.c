/*
 * XREFs of MiGetStandbyPageType @ 0x1403EDEA0
 * Callers:
 *     MiFindSuitableLookasideReplacement @ 0x140215040 (MiFindSuitableLookasideReplacement.c)
 *     MiRebuildStandbyLookasideList @ 0x1403ED9D0 (MiRebuildStandbyLookasideList.c)
 * Callees:
 *     MiGetPfnSlabType @ 0x1402170E0 (MiGetPfnSlabType.c)
 */

__int64 __fastcall MiGetStandbyPageType(ULONG_PTR a1)
{
  __int64 v2; // rcx

  if ( a1 >= qword_140E358C0 && a1 < qword_140E358C0 + 2048 )
    return 1LL;
  v2 = 48 * a1 - 0x220000000000LL;
  if ( (*(_DWORD *)(v2 + 32) & 0x8000000) != 0 && (unsigned int)MiGetPfnSlabType(v2) == 9 )
    return 2LL;
  else
    return 0LL;
}
