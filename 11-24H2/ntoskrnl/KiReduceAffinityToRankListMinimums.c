/*
 * XREFs of KiReduceAffinityToRankListMinimums @ 0x14032A9B0
 * Callers:
 *     KiPerformSoftParkElectionRound @ 0x140329E30 (KiPerformSoftParkElectionRound.c)
 *     KiTallyHeteroSoftParkElectionVotes @ 0x140329FC0 (KiTallyHeteroSoftParkElectionVotes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiReduceAffinityToRankListMinimums(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  unsigned __int8 v4; // cl
  __int64 v5; // r8
  unsigned __int8 v7; // r11
  unsigned __int8 v9; // dl

  v2 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v7 = -1;
  do
  {
    if ( ((1LL << v4) & a1) != 0 )
    {
      v9 = *(_BYTE *)(v5 + a2);
      if ( v9 == v7 )
      {
        v2 |= 1LL << v5;
      }
      else if ( v9 < v7 )
      {
        v7 = *(_BYTE *)(v5 + a2);
        v2 = 1LL << v4;
      }
    }
    ++v4;
    ++v5;
  }
  while ( v4 < 0x40u );
  return v2;
}
