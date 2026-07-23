/*
 * XREFs of PopDiagTracePlatformRoleRundown @ 0x140A2D510
 * Callers:
 *     PopDiagTraceControlCallback @ 0x140A2CF10 (PopDiagTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void PopDiagTracePlatformRoleRundown()
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_PLATFORMROLE_RUNDOWN) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&PopFirmwarePlatformRole;
      UserData.Size = 4;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_PLATFORMROLE_RUNDOWN, 0LL, 1u, &UserData);
    }
  }
}
