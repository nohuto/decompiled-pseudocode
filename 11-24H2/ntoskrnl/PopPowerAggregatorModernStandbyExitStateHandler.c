/*
 * XREFs of PopPowerAggregatorModernStandbyExitStateHandler @ 0x140A6DE90
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorDisengageModernStandby @ 0x140A6DED8 (PopPowerAggregatorDisengageModernStandby.c)
 *     PdcPoPerfOverride @ 0x140A91EBC (PdcPoPerfOverride.c)
 *     PopPdcDisengagePhases @ 0x140A93B20 (PopPdcDisengagePhases.c)
 */

__int64 __fastcall PopPowerAggregatorModernStandbyExitStateHandler(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 72) )
  {
    PopPowerAggregatorDisengageModernStandby();
  }
  else
  {
    PoModernStandbyActionInProgress = 0;
    PopReleaseRwLock(&PopPowerAggregatorLock);
    PdcPoPerfOverride();
    PopPdcDisengagePhases();
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock);
  }
  return 0LL;
}
