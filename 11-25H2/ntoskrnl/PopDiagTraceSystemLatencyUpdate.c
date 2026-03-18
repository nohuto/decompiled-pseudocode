/*
 * XREFs of PopDiagTraceSystemLatencyUpdate @ 0x140470210
 * Callers:
 *     PopDiagTraceControlCallback @ 0x140A32540 (PopDiagTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
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
