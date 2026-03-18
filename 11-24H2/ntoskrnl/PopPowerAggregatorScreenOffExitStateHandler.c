/*
 * XREFs of PopPowerAggregatorScreenOffExitStateHandler @ 0x1409026E0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x140902758 (PopPowerAggregatorEnterScreenOff.c)
 *     PopPdcAreAllPhasesDisengaged @ 0x140902A58 (PopPdcAreAllPhasesDisengaged.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140902BD0 (PopPowerAggregatorSetCurrentState.c)
 */

__int64 __fastcall PopPowerAggregatorScreenOffExitStateHandler(__int64 a1)
{
  char v3; // bl
  _OWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_QWORD *)(a1 + 64) == *(_QWORD *)(a1 + 32) )
  {
    PopReleaseRwLock((signed __int64 *)&PopPowerAggregatorLock);
    v3 = PopPdcAreAllPhasesDisengaged();
    PopAcquireRwLockExclusive(&PopPowerAggregatorLock);
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
