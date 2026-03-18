/*
 * XREFs of PopPowerAggregatorModernStandbyExitStateHandler @ 0x1409025B0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorDisengageModernStandby @ 0x1409025F8 (PopPowerAggregatorDisengageModernStandby.c)
 *     PdcPoPerfOverride @ 0x140A9568C (PdcPoPerfOverride.c)
 *     PopPdcDisengagePhases @ 0x140A972F0 (PopPdcDisengagePhases.c)
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
    PopReleaseRwLock((signed __int64 *)&PopPowerAggregatorLock);
    PdcPoPerfOverride();
    PopPdcDisengagePhases();
    PopAcquireRwLockExclusive(&PopPowerAggregatorLock);
  }
  return 0LL;
}
