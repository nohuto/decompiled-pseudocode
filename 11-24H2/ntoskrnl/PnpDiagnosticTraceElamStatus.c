/*
 * XREFs of PnpDiagnosticTraceElamStatus @ 0x1405A175C
 * Callers:
 *     PnpNotifyEarlyLaunchStatusUpdate @ 0x140BE0B00 (PnpNotifyEarlyLaunchStatusUpdate.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall PnpDiagnosticTraceElamStatus(PCEVENT_DESCRIPTOR EventDescriptor, int a2)
{
  unsigned int v3; // ebx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  int v6; // [rsp+78h] [rbp+10h] BYREF

  v6 = a2;
  v3 = 0;
  if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, EventDescriptor) )
  {
    UserData.Ptr = (ULONGLONG)&v6;
    *(_QWORD *)&UserData.Size = 4LL;
    return (unsigned int)EtwWriteEx(PnpEtwHandle, EventDescriptor, 0LL, 0, 0LL, 0LL, 1u, &UserData);
  }
  return v3;
}
