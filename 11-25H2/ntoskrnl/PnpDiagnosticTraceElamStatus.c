/*
 * XREFs of PnpDiagnosticTraceElamStatus @ 0x1405A10AC
 * Callers:
 *     PnpNotifyEarlyLaunchStatusUpdate @ 0x140BCDB00 (PnpNotifyEarlyLaunchStatusUpdate.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
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
