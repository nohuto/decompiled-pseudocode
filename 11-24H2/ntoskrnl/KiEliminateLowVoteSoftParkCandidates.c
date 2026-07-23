/*
 * XREFs of KiEliminateLowVoteSoftParkCandidates @ 0x14032A6CC
 * Callers:
 *     KiPerformHeteroSoftParkElection @ 0x140329E98 (KiPerformHeteroSoftParkElection.c)
 * Callees:
 *     <none>
 */

char __fastcall KiEliminateLowVoteSoftParkCandidates(__int64 a1, unsigned __int64 *a2, __int64 *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // rax
  unsigned int v6; // ecx
  char v7; // r11

  v3 = -1LL;
  v5 = 0LL;
  v6 = 0;
  v7 = 0;
  do
  {
    if ( ((1LL << v6) & a1) != 0 )
    {
      if ( v3 > *a2 )
      {
        v3 = *a2;
        v5 = 1LL << v6;
      }
      else if ( v3 == *a2 )
      {
        v5 |= 1LL << v7;
      }
    }
    ++v6;
    ++v7;
    ++a2;
  }
  while ( v6 < 0x40 );
  if ( v5 == a1 )
  {
    *a3 = a1;
    return 0;
  }
  else
  {
    *a3 = a1 & ~v5;
    return 1;
  }
}
