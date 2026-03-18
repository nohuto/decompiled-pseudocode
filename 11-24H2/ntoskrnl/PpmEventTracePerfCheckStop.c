/*
 * XREFs of PpmEventTracePerfCheckStop @ 0x14029FD0C
 * Callers:
 *     PpmCheckRun @ 0x14029FA80 (PpmCheckRun.c)
 * Callees:
 *     EtwWriteEx @ 0x140259680 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402A2030 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void __fastcall PpmEventTracePerfCheckStop(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  const GUID *ActivityId; // r10
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF

  if ( PpmEtwRegistered )
  {
    if ( PpmEtwHandle )
    {
      LOBYTE(a2) = 5;
      if ( (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(PpmEtwHandle + 32) + 96LL, a2, 2LL, PpmEtwHandle)
        || *(_WORD *)(v4 + 102) != (_WORD)ActivityId
        && (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(v4 + 40) + 96LL, v2, v3, v4) )
      {
        UserData.Ptr = (ULONGLONG)&PpmCheckTime;
        *(_QWORD *)&UserData.Size = 8LL;
        EtwWriteEx(PpmEtwHandle, &PPM_ETW_PERF_CHECK_STOP, 0LL, 0, ActivityId, ActivityId, 1u, &UserData);
      }
    }
  }
}
