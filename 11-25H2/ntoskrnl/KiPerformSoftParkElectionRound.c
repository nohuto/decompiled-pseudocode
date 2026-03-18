/*
 * XREFs of KiPerformSoftParkElectionRound @ 0x1403127A4
 * Callers:
 *     KiPerformSoftParkElection @ 0x14031372C (KiPerformSoftParkElection.c)
 * Callees:
 *     KiPerformHeteroSoftParkElection @ 0x140312A14 (KiPerformHeteroSoftParkElection.c)
 *     KiReduceAffinityToRankListMinimums @ 0x1403133E0 (KiReduceAffinityToRankListMinimums.c)
 */

__int64 __fastcall KiPerformSoftParkElectionRound(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rax
  bool v9; // zf
  __int64 result; // rax

  v6 = *(_QWORD *)(a2 + 1760);
  v7 = a2 + 864;
  if ( KeHeteroSystem && v7 )
  {
    v8 = KiPerformHeteroSoftParkElection(a1, v7, a3, v6, a4);
    v9 = v8 == 0;
  }
  else
  {
    v8 = v6 & a3;
    v9 = v8 == 0;
  }
  if ( v9 )
    return 0xFFFFFFFFLL;
  _BitScanForward64((unsigned __int64 *)&result, KiReduceAffinityToRankListMinimums(v8, a1 + 448));
  return result;
}
