/*
 * XREFs of MiOkToBinMoreLargePtes @ 0x1403F5E74
 * Callers:
 *     MiInsertCachedPte @ 0x14029E0E0 (MiInsertCachedPte.c)
 * Callees:
 *     MiEmptyPteBins @ 0x1403F67B4 (MiEmptyPteBins.c)
 */

__int64 __fastcall MiOkToBinMoreLargePtes(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rdx

  v3 = *(_QWORD *)(a2 + 64);
  v4 = a3 + v3;
  if ( v3 <= 0 )
    v4 = a3;
  if ( v4 >= 0x80 )
  {
    MiEmptyPteBins(a1, 0LL, 5LL);
    return 0LL;
  }
  else
  {
    if ( v4 >= 0x40 )
      MiEmptyPteBins(a1, 0LL, 4LL);
    return 1LL;
  }
}
