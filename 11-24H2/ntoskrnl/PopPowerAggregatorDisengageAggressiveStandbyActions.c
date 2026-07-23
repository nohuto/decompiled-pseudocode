/*
 * XREFs of PopPowerAggregatorDisengageAggressiveStandbyActions @ 0x1406F3AAC
 * Callers:
 *     PopPowerAggregatorDisengageModernStandby @ 0x140A6DED8 (PopPowerAggregatorDisengageModernStandby.c)
 * Callees:
 *     PopQueueWorkItem @ 0x140491E08 (PopQueueWorkItem.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopPowerAggregatorDisengageAggressiveStandbyActions(__int64 a1, __int64 a2)
{
  PopAcquirePolicyLock(a1, a2);
  PopNetStandbyStateMask &= ~2u;
  if ( _InterlockedExchangeAdd(&PopNetGracePeriodState, 0) == 2 )
    PopQueueWorkItem((__int64)&unk_140F07C88, DelayedWorkQueue);
  PopNetStandbyStateMask &= ~0x80u;
  if ( _InterlockedExchangeAdd(&PopNetGracePeriodState, 0) == 2 )
    PopQueueWorkItem((__int64)&unk_140F07C88, DelayedWorkQueue);
  PopAggressiveStandbyAppliedActions = 0;
  PopIdleWakeSkippingEnabled = 0;
  return PopReleasePolicyLock();
}
