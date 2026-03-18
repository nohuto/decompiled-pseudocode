/*
 * XREFs of PopPowerAggregatorModernStandbyExitStateHandler @ 0x140A2BBE0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PdcPoPerfOverride @ 0x140A2BB1C (PdcPoPerfOverride.c)
 *     PopPdcDisengagePhases @ 0x140A2BB44 (PopPdcDisengagePhases.c)
 *     PopPowerAggregatorDisengageModernStandby @ 0x140A2BC28 (PopPowerAggregatorDisengageModernStandby.c)
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
