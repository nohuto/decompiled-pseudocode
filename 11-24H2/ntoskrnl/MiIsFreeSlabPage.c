/*
 * XREFs of MiIsFreeSlabPage @ 0x1404F8AD4
 * Callers:
 *     MiIsPageSecured @ 0x1403F4404 (MiIsPageSecured.c)
 *     MiPurgeSlabEntry @ 0x14047DBD4 (MiPurgeSlabEntry.c)
 * Callees:
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 */

_BOOL8 __fastcall MiIsFreeSlabPage(__int64 a1)
{
  __int64 v1; // r8

  if ( (unsigned int)MiGetPfnSlabType(a1) == 9 || (*(_BYTE *)(v1 + 34) & 7) != 5 )
    return 0LL;
  if ( *(_QWORD *)(v1 + 8) == -1LL )
    return 1LL;
  return *(_QWORD *)(v1 + 8) == -2LL;
}
