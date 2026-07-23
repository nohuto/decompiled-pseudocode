/*
 * XREFs of PopNetSetConnectivityConstraint @ 0x14075BA58
 * Callers:
 *     PopPowerAggregatorEngageAggressiveStandbyActions @ 0x1407577FC (PopPowerAggregatorEngageAggressiveStandbyActions.c)
 *     PopNetCompliantNicUpdate @ 0x14075B650 (PopNetCompliantNicUpdate.c)
 *     PopNetNonCompliantDeviceUpdate @ 0x14075B8C0 (PopNetNonCompliantDeviceUpdate.c)
 *     PopNetInitialize @ 0x140C34034 (PopNetInitialize.c)
 * Callees:
 *     PopQueueWorkItem @ 0x140491E08 (PopQueueWorkItem.c)
 */

char __fastcall PopNetSetConnectivityConstraint(int a1)
{
  bool v1; // r8
  signed __int32 v2; // eax

  v1 = 0;
  PopNetStandbyStateMask |= 1 << a1;
  if ( ((a1 - 2) & 0xFFFFFFFA) == 0 )
    v1 = a1 != 7;
  v2 = _InterlockedExchangeAdd(&PopNetGracePeriodState, 0);
  if ( v2 == 2 || v1 )
    LOBYTE(v2) = PopQueueWorkItem((__int64)&unk_140F07C88, DelayedWorkQueue);
  return v2;
}
