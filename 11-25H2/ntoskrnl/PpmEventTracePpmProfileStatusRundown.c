/*
 * XREFs of PpmEventTracePpmProfileStatusRundown @ 0x140A922CC
 * Callers:
 *     PpmEventTraceControlCallback @ 0x140AC4110 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140257AF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
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
