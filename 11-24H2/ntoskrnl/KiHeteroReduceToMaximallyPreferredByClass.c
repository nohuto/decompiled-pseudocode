/*
 * XREFs of KiHeteroReduceToMaximallyPreferredByClass @ 0x14032AA14
 * Callers:
 *     KiTallyHeteroSoftParkElectionVotes @ 0x140329FC0 (KiTallyHeteroSoftParkElectionVotes.c)
 *     KiGetNextClockOwner @ 0x1405B781C (KiGetNextClockOwner.c)
 * Callees:
 *     KiReduceAffinityToRankListMaximums @ 0x14032AD30 (KiReduceAffinityToRankListMaximums.c)
 */

__int64 __fastcall KiHeteroReduceToMaximallyPreferredByClass(__int64 a1, __int64 a2, int a3, unsigned __int8 a4)
{
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdx

  v5 = (unsigned __int64)a4 << 6;
  if ( (unsigned int)(a3 - 3) <= 1 )
    v6 = *(_QWORD *)(a1 + 208) + v5;
  else
    v6 = *(_QWORD *)(a1 + 200) + v5;
  return KiReduceAffinityToRankListMaximums(a2, v6);
}
