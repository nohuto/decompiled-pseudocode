/*
 * XREFs of PopNetIsNetworkRefreshEnabled @ 0x14075C8F8
 * Callers:
 *     PopNetRefreshTimerWorkerCallback @ 0x14075C980 (PopNetRefreshTimerWorkerCallback.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x140A3B690 (PopNetWnfLowPowerEpochCallback.c)
 * Callees:
 *     <none>
 */

_BOOL8 PopNetIsNetworkRefreshEnabled()
{
  return (PopNetStandbyStateMask & 0x4E) == 0 && (PopNetStandbyStateMask & 0x80u) != 0 && PopEnableDsNetRefresh != 0;
}
