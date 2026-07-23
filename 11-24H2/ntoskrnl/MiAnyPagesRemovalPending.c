/*
 * XREFs of MiAnyPagesRemovalPending @ 0x14046B54C
 * Callers:
 *     MiUpdateDemotedSubPage @ 0x1402EF390 (MiUpdateDemotedSubPage.c)
 *     MiConvertSmallPageRangeToLarge @ 0x14034F90C (MiConvertSmallPageRangeToLarge.c)
 *     MiSetPfnRemovalRequested @ 0x1406757A0 (MiSetPfnRemovalRequested.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiAnyPagesRemovalPending(__int64 a1, int a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rcx

  v2 = 48 * a1 - 0x220000000000LL;
  v3 = v2 + 48 * MiPageSizes[a2];
  while ( 1 )
  {
    if ( v2 >= v3 )
      return 0LL;
    if ( (*(_DWORD *)(v2 + 32) & 0x40000000) != 0 )
      break;
    v2 += 48LL;
  }
  return 1LL;
}
