/*
 * XREFs of PopTraceSystemIdleS0LowPowerDoze @ 0x14074C928
 * Callers:
 *     PopIdleAoAcDozeToS4 @ 0x14074FAF0 (PopIdleAoAcDozeToS4.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140257AF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
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
