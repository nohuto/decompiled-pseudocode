/*
 * XREFs of KiPerformSoftParkElection @ 0x140329D84
 * Callers:
 *     KiSoftParkElectionDpcRoutine @ 0x1403298E0 (KiSoftParkElectionDpcRoutine.c)
 * Callees:
 *     KiPerformSoftParkElectionRound @ 0x140329E30 (KiPerformSoftParkElectionRound.c)
 */

__int64 __fastcall KiPerformSoftParkElection(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  unsigned __int64 v6; // r15
  __int64 i; // rbx
  int v8; // eax

  if ( !KeSoftParkedQueueThreshold )
    return 0LL;
  v4 = *(_QWORD *)(a1 + 80);
  v5 = 0LL;
  v6 = *(_QWORD *)(a2 + 792) / (unsigned __int64)(unsigned int)KeSoftParkedQueueThreshold;
  for ( i = ~v4 & *(_QWORD *)(a1 + 96); i; i &= ~(1LL << v8) )
  {
    if ( !v6 )
      break;
    v8 = KiPerformSoftParkElectionRound(a1, a2, i, v4);
    if ( v8 == -1 )
      break;
    --v6;
    v5 |= 1LL << v8;
    v4 |= 1LL << v8;
  }
  return v5;
}
