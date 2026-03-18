/*
 * XREFs of MiRelinkTransitionSlabPages @ 0x1404CAA48
 * Callers:
 *     MiDemoteSlabEntry @ 0x1403B7C60 (MiDemoteSlabEntry.c)
 *     MiDeleteSlabEntriesForIdentity @ 0x14067BCB0 (MiDeleteSlabEntriesForIdentity.c)
 * Callees:
 *     MiInsertPageInList @ 0x14021AFB0 (MiInsertPageInList.c)
 *     MiDiscardTransitionPteEx @ 0x1402C5640 (MiDiscardTransitionPteEx.c)
 */

__int64 __fastcall MiRelinkTransitionSlabPages(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  ULONG_PTR v3; // rbx
  char v4; // al
  unsigned int v5; // edx

  v1 = 0LL;
  v2 = a1;
  while ( v2 != 0x3FFFFFFFFFLL )
  {
    v3 = 48 * v2 - 0x220000000000LL;
    v2 = *(_QWORD *)v3 & 0xFFFFFFFFFFLL;
    if ( (*(_QWORD *)(v3 + 24) & 0x4000000000000000LL) != 0 )
    {
      *(_QWORD *)(v3 + 24) &= ~0x4000000000000000uLL;
      MiDiscardTransitionPteEx(v3);
      ++v1;
    }
    else
    {
      v4 = *(_BYTE *)(v3 + 34) & 7;
      if ( v4 == 2 )
      {
        v5 = 4;
        ++v1;
      }
      else
      {
        v5 = 16;
        if ( v4 == 3 )
          v5 = 8;
      }
      MiInsertPageInList(v3, v5);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return v1;
}
