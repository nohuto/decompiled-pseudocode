/*
 * XREFs of PopNetDisarmRefreshTimer @ 0x14075B6E8
 * Callers:
 *     PopNetWnfLowPowerEpochCallback @ 0x140A30E70 (PopNetWnfLowPowerEpochCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     KeCancelTimer2 @ 0x1403AF520 (KeCancelTimer2.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 */

char __fastcall PopNetDisarmRefreshTimer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char result; // al

  result = KeCancelTimer2((__int64)&PopNetRefreshTimer, 0LL, a3, a4);
  if ( PopDiagHandleRegistered )
  {
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_NET_REFRESH_TIMER_DISARMED);
    if ( result )
      return EtwWrite(PopDiagHandle, &POP_ETW_EVENT_NET_REFRESH_TIMER_DISARMED, 0LL, 0, 0LL);
  }
  return result;
}
