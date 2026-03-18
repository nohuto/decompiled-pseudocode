/*
 * XREFs of PopTraceStandbyConnectivityRundown @ 0x140A38BA8
 * Callers:
 *     PopDiagTraceControlCallback @ 0x140A37E50 (PopDiagTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14041C1B0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void PopTraceStandbyConnectivityRundown()
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  int *v1; // [rsp+40h] [rbp-28h]
  int v2; // [rsp+48h] [rbp-20h]
  int v3; // [rsp+4Ch] [rbp-1Ch]

  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_STANDBY_CONNECTIVITY_RUNDOWN) )
    {
      UserData.Reserved = 0;
      v3 = 0;
      UserData.Ptr = (ULONGLONG)&PopNetStandbyState;
      UserData.Size = 4;
      v1 = &PopNetStandbyReason;
      v2 = 4;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_STANDBY_CONNECTIVITY_RUNDOWN, 0LL, 2u, &UserData);
    }
  }
}
