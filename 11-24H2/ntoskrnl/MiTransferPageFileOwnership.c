/*
 * XREFs of MiTransferPageFileOwnership @ 0x1402697C8
 * Callers:
 *     MiHandleForkTransitionPte @ 0x1402678C4 (MiHandleForkTransitionPte.c)
 *     MiBuildForkPte @ 0x1402687D0 (MiBuildForkPte.c)
 *     MiCombineInitialInstance @ 0x140294F94 (MiCombineInitialInstance.c)
 * Callees:
 *     MiUpdatePageFileBlockOwner @ 0x140269EDC (MiUpdatePageFileBlockOwner.c)
 */

char __fastcall MiTransferPageFileOwnership(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v5; // r9
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx

  if ( (*(_BYTE *)(a1 + 34) & 0x10) == 0 )
  {
    result = (unsigned __int8)*(_DWORD *)(a1 + 16) >> 2;
    if ( (*(_DWORD *)(a1 + 16) & 4) != 0 )
    {
      v5 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
      v6 = *(_QWORD *)(a1 + 16);
      v7 = *(_QWORD *)(a1 + 16);
      if ( qword_140E2DCC0 )
      {
        if ( (v7 & 0x10) == 0 )
          v7 &= ~qword_140E2DCC0;
      }
      return MiUpdatePageFileBlockOwner(
               *(_QWORD *)(v5 + 8LL * ((unsigned __int16)v6 >> 12) + 18528),
               HIDWORD(v7),
               *(_QWORD *)(a1 + 8),
               a2,
               (*(unsigned __int8 *)(a1 + 34) >> 3) & 1);
    }
  }
  return result;
}
