/*
 * XREFs of KiReduceAffinityToRankListMaximums @ 0x14032AD30
 * Callers:
 *     KiTallyHeteroSoftParkElectionVotes @ 0x140329FC0 (KiTallyHeteroSoftParkElectionVotes.c)
 *     KiHeteroReduceToMaximallyPreferredByClass @ 0x14032AA14 (KiHeteroReduceToMaximallyPreferredByClass.c)
 *     KiHeteroIdleSetReduction @ 0x14032AA50 (KiHeteroIdleSetReduction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiReduceAffinityToRankListMaximums(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  unsigned __int8 v3; // r11
  __int64 v5; // r8
  unsigned __int8 i; // cl
  unsigned __int8 v9; // dl

  v2 = 0LL;
  v3 = 0;
  v5 = 0LL;
  for ( i = 0; i < 0x40u; ++i )
  {
    if ( ((1LL << i) & a1) != 0 )
    {
      v9 = *(_BYTE *)(v5 + a2);
      if ( v9 == v3 )
      {
        v2 |= 1LL << v5;
      }
      else if ( v9 > v3 )
      {
        v3 = *(_BYTE *)(v5 + a2);
        v2 = 1LL << i;
      }
    }
    ++v5;
  }
  return v2;
}
