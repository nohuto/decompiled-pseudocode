/*
 * XREFs of KiPerformHeteroSoftParkElection @ 0x140329E98
 * Callers:
 *     KiPerformSoftParkElectionRound @ 0x140329E30 (KiPerformSoftParkElectionRound.c)
 * Callees:
 *     KiTallyHeteroSoftParkElectionVotes @ 0x140329FC0 (KiTallyHeteroSoftParkElectionVotes.c)
 *     KiDoesHeteroSoftParkElectionHaveWinner @ 0x14032A1A0 (KiDoesHeteroSoftParkElectionHaveWinner.c)
 *     KiEliminateLowVoteSoftParkCandidates @ 0x14032A6CC (KiEliminateLowVoteSoftParkCandidates.c)
 *     KiBuildShareCountListForSubNodeByAffinity @ 0x14032A81C (KiBuildShareCountListForSubNodeByAffinity.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KiPerformHeteroSoftParkElection(__int64 a1, int a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 v10; // r8
  int v11; // edx
  __int64 v13; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v16[8]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v17[512]; // [rsp+A0h] [rbp-60h] BYREF

  v5 = 0LL;
  v14 = 0LL;
  memset_0(v16, 0, sizeof(v16));
  v10 = *(_QWORD *)(a1 + 128);
  v11 = *(unsigned __int16 *)(a1 + 136);
  v13 = a3;
  v15 = 0LL;
  KiBuildShareCountListForSubNodeByAffinity((unsigned int)v16, v11, v10, a5, 1);
  while ( 1 )
  {
    KiTallyHeteroSoftParkElectionVotes(a1, a2, a3, a4, (__int64)v16, v17, (__int64)&v14);
    if ( !v14 )
      break;
    if ( (unsigned __int8)KiDoesHeteroSoftParkElectionHaveWinner(v14, a3, v17, &v15) )
      return v15;
    if ( !(unsigned __int8)KiEliminateLowVoteSoftParkCandidates(a3, v17, &v13) )
      return v13;
    a3 = v13;
  }
  return v5;
}
