/*
 * XREFs of PopPowerAggregatorDisengageAggressiveStandbyActions @ 0x1406EA150
 * Callers:
 *     PopPowerAggregatorDisengageModernStandby @ 0x140A2BC28 (PopPowerAggregatorDisengageModernStandby.c)
 * Callees:
 *     PopQueueWorkItem @ 0x140497BA0 (PopQueueWorkItem.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopPowerAggregatorDisengageAggressiveStandbyActions(__int64 a1, __int64 a2)
{
  PopAcquirePolicyLock(a1, a2);
  PopNetStandbyStateMask &= ~2u;
  if ( _InterlockedExchangeAdd(&PopNetGracePeriodState, 0) == 2 )
    PopQueueWorkItem((__int64)&unk_140F073A8, DelayedWorkQueue);
  PopNetStandbyStateMask &= ~0x80u;
  if ( _InterlockedExchangeAdd(&PopNetGracePeriodState, 0) == 2 )
    PopQueueWorkItem((__int64)&unk_140F073A8, DelayedWorkQueue);
  PopAggressiveStandbyAppliedActions = 0;
  PopIdleWakeSkippingEnabled = 0;
  return PopReleasePolicyLock();
}
