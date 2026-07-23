/*
 * XREFs of PopPowerAggregatorScreenOffExitStateHandler @ 0x140A6DFC0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x140A6E038 (PopPowerAggregatorEnterScreenOff.c)
 *     PopPdcAreAllPhasesDisengaged @ 0x140A6E338 (PopPdcAreAllPhasesDisengaged.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140A6E4B0 (PopPowerAggregatorSetCurrentState.c)
 */

__int64 __fastcall PopPowerAggregatorScreenOffExitStateHandler(__int64 a1)
{
  char v3; // bl
  _OWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_QWORD *)(a1 + 64) == *(_QWORD *)(a1 + 32) )
  {
    PopReleaseRwLock(&PopPowerAggregatorLock);
    v3 = PopPdcAreAllPhasesDisengaged();
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock);
    if ( v3 )
    {
      memset(v4, 0, sizeof(v4));
      LODWORD(v4[0]) = 3;
      PopPowerAggregatorSetCurrentState(a1, v4);
    }
  }
  else
  {
    PopPowerAggregatorEnterScreenOff();
  }
  return 0LL;
}
