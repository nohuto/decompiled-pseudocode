/*
 * XREFs of PopNetDisarmRefreshTimer @ 0x14075C748
 * Callers:
 *     PopNetWnfLowPowerEpochCallback @ 0x140A3B690 (PopNetWnfLowPowerEpochCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     KeCancelTimer2 @ 0x1403C0960 (KeCancelTimer2.c)
 *     EtwWrite @ 0x14041C1B0 (EtwWrite.c)
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
