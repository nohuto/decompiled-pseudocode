/*
 * XREFs of PopDiagTraceSystemIdleRundown @ 0x140A38B1C
 * Callers:
 *     PopDiagTraceControlCallback @ 0x140A37E50 (PopDiagTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14041C1B0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void PopDiagTraceSystemIdleRundown()
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_IDLE_RUNDOWN) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&PopIdleScanInterval;
      UserData.Size = 4;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_IDLE_RUNDOWN, 0LL, 1u, &UserData);
    }
  }
}
