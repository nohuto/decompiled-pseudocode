/*
 * XREFs of PopNetDisengageNetworkRefresh @ 0x14075C7F8
 * Callers:
 *     PopNetRefreshTimerWorkerCallback @ 0x14075C980 (PopNetRefreshTimerWorkerCallback.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x140A3B690 (PopNetWnfLowPowerEpochCallback.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 *     PopNetSetResiliencyPhaseBias @ 0x140AA5624 (PopNetSetResiliencyPhaseBias.c)
 */

__int64 PopNetDisengageNetworkRefresh()
{
  __int64 result; // rax
  char v1; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  ZwUpdateWnfStateData((__int64)&WNF_PO_OPPORTUNISTIC_CS, (__int64)&v1);
  result = PopNetSetResiliencyPhaseBias(0LL);
  PopNetRefreshIntervalActive = 0;
  return result;
}
