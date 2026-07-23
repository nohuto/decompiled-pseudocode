/*
 * XREFs of PopTraceSystemIdleS0LowPowerDoze @ 0x140757004
 * Callers:
 *     PopIdleAoAcDozeToS4 @ 0x14075B3A0 (PopIdleAoAcDozeToS4.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void PopTraceSystemIdleS0LowPowerDoze()
{
  int v0; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-20h] BYREF

  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_IDLE_S0_LOW_POWER_DOZE) )
    {
      v0 = 0;
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v0;
      UserData.Size = 4;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_IDLE_S0_LOW_POWER_DOZE, 0LL, 1u, &UserData);
    }
  }
}
