/*
 * XREFs of MiZeroPageLogEntriesMergable @ 0x140413754
 * Callers:
 *     MiLogZeroPageDecision @ 0x140413620 (MiLogZeroPageDecision.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiZeroPageLogEntriesMergable(int *a1, int *a2)
{
  unsigned __int8 v2; // r8
  unsigned int v3; // r8d
  unsigned int v4; // edx
  unsigned int v5; // ecx
  __int64 v6; // kr00_8

  if ( *((_WORD *)a1 + 4) != *((_WORD *)a2 + 4) || *((_WORD *)a1 + 5) != *((_WORD *)a2 + 5) )
    return 0LL;
  v2 = a2[3] & 0xF;
  if ( (a1[3] & 0xFu) > 4 )
  {
    if ( v2 <= 4u )
      return 0LL;
  }
  else if ( v2 > 4u )
  {
    return 0LL;
  }
  v3 = *a1;
  if ( (*a1 & 1) == 0 )
  {
    v4 = *a2;
    if ( (v4 & 1) == 0 )
    {
      if ( v3 < v4 )
      {
        v5 = v4 - v3;
        v6 = 3435973837LL * v4;
      }
      else
      {
        v5 = v3 - v4;
        v6 = 3435973837LL * v3;
      }
      if ( v5 <= HIDWORD(v6) >> 3 )
        return 1LL;
    }
  }
  return 0LL;
}
