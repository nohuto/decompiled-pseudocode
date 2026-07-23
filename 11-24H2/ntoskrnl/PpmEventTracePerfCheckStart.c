/*
 * XREFs of PpmEventTracePerfCheckStart @ 0x14044C314
 * Callers:
 *     PpmCheckStart @ 0x14044C244 (PpmCheckStart.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402D1760 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PpmEventTracePerfCheckStart(__int64 a1, int a2)
{
  unsigned __int8 v2; // dl
  __int64 v3; // r8
  __int64 v4; // r9
  const GUID *ActivityId; // r10
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v7; // [rsp+50h] [rbp-30h]
  __int64 v8; // [rsp+58h] [rbp-28h]
  int *v9; // [rsp+60h] [rbp-20h]
  __int64 v10; // [rsp+68h] [rbp-18h]
  __int64 v11; // [rsp+90h] [rbp+10h] BYREF
  int v12; // [rsp+98h] [rbp+18h] BYREF

  v12 = a2;
  v11 = a1;
  if ( PpmEtwRegistered
    && PpmEtwHandle
    && (EtwpLevelKeywordEnabled(*(_QWORD *)(PpmEtwHandle + 32) + 96LL, 5u, 2LL)
     || *(_WORD *)(v4 + 102) != (_WORD)ActivityId && EtwpLevelKeywordEnabled(*(_QWORD *)(v4 + 40) + 96LL, v2, v3)) )
  {
    UserData.Ptr = (ULONGLONG)&PpmCheckTime;
    *(_QWORD *)&UserData.Size = 8LL;
    v7 = &v11;
    v8 = 8LL;
    v9 = &v12;
    v10 = 4LL;
    EtwWriteEx(PpmEtwHandle, &PPM_ETW_PERF_CHECK_START, 0LL, 0, ActivityId, ActivityId, 3u, &UserData);
  }
}
