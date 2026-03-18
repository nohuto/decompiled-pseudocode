/*
 * XREFs of PopPowerAggregatorDiagTraceDozeTimerDisarmed @ 0x1406F555C
 * Callers:
 *     PopPowerAggregatorDozeTimerDisarm @ 0x1406F54C4 (PopPowerAggregatorDozeTimerDisarm.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14041C1B0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

char __fastcall PopPowerAggregatorDiagTraceDozeTimerDisarmed(int a1)
{
  int *v1; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF
  int v4; // [rsp+60h] [rbp+8h] BYREF

  v4 = a1;
  UserData.Reserved = 0;
  v1 = &v4;
  UserData.Ptr = (ULONGLONG)&v4;
  UserData.Size = 4;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v1) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_POWER_AGGREGATOR_DOZE_TIMER_DISARMED);
    if ( (_BYTE)v1 )
      LOBYTE(v1) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_POWER_AGGREGATOR_DOZE_TIMER_DISARMED, 0LL, 1u, &UserData);
  }
  return (char)v1;
}
