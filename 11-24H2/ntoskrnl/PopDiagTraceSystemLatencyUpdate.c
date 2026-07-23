/*
 * XREFs of PopDiagTraceSystemLatencyUpdate @ 0x140469380
 * Callers:
 *     PopDiagTraceControlCallback @ 0x140A2CF10 (PopDiagTraceControlCallback.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceSystemLatencyUpdate(char a1, int a2)
{
  const EVENT_DESCRIPTOR *v3; // rdx
  const EVENT_DESCRIPTOR *v4; // rdx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  int v6; // [rsp+78h] [rbp+10h] BYREF

  v6 = a2;
  if ( PopDiagHandleRegistered )
  {
    v3 = &POP_ETW_EVENT_SYSTEM_LATENCY_UPDATE;
    if ( a1 )
      v3 = &POP_ETW_EVENT_SYSTEM_LATENCY_RUNDOWN;
    if ( EtwEventEnabled(PopDiagHandle, v3) )
    {
      UserData.Reserved = 0;
      v4 = &POP_ETW_EVENT_SYSTEM_LATENCY_RUNDOWN;
      UserData.Ptr = (ULONGLONG)&v6;
      UserData.Size = 4;
      if ( !a1 )
        v4 = &POP_ETW_EVENT_SYSTEM_LATENCY_UPDATE;
      EtwWriteEx(PopDiagHandle, v4, 0LL, 0, 0LL, 0LL, 1u, &UserData);
    }
  }
}
