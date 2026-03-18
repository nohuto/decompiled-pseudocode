/*
 * XREFs of PpmEventTracePpmProfileStatusRundown @ 0x140A96518
 * Callers:
 *     PpmEventTraceControlCallback @ 0x140ACA960 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14041C1B0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void PpmEventTracePpmProfileStatusRundown()
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PROCESSOR_PROFILE_STATUS_RUNDOWN) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&PpmProfileStatus;
      UserData.Size = 4;
      EtwWrite(PpmEtwHandle, &PPM_ETW_PROCESSOR_PROFILE_STATUS_RUNDOWN, 0LL, 1u, &UserData);
    }
  }
}
