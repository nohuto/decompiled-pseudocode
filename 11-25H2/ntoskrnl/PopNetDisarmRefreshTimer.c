/*
 * XREFs of PopNetDisarmRefreshTimer @ 0x14074FE88
 * Callers:
 *     PopNetWnfLowPowerEpochCallback @ 0x140A36900 (PopNetWnfLowPowerEpochCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140257AF0 (EtwWrite.c)
 *     KeCancelTimer2 @ 0x14036FE50 (KeCancelTimer2.c)
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
