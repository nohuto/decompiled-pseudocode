/*
 * XREFs of PpmEventTraceProcessorLatencyLimitChange @ 0x1402AECA0
 * Callers:
 *     PpmIdleUpdateProcessorLatencyLimit @ 0x1402AE9D0 (PpmIdleUpdateProcessorLatencyLimit.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402D1760 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PpmEventTraceProcessorLatencyLimitChange(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r10
  const GUID *ActivityId; // r11
  __int16 v7; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  __int64 v9; // [rsp+58h] [rbp-28h]
  __int64 v10; // [rsp+60h] [rbp-20h]
  int *v11; // [rsp+68h] [rbp-18h]
  __int64 v12; // [rsp+70h] [rbp-10h]
  int v13; // [rsp+98h] [rbp+18h] BYREF

  v13 = a2;
  if ( PpmEtwRegistered )
  {
    if ( PpmEtwHandle )
    {
      LOBYTE(a2) = 5;
      if ( (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(PpmEtwHandle + 32) + 96LL, a2, 2LL, PpmEtwHandle)
        || *(_WORD *)(v4 + 102) != (_WORD)ActivityId
        && (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(v4 + 40) + 96LL, v2, v3, v4) )
      {
        v7 = *(unsigned __int8 *)(v5 + 208);
        UserData.Ptr = (ULONGLONG)&v7;
        v9 = v5 + 209;
        v11 = &v13;
        *(_QWORD *)&UserData.Size = v3;
        v10 = 1LL;
        v12 = 4LL;
        EtwWriteEx(PpmEtwHandle, &PPM_ETW_PROCESSOR_LATENCY_CHANGE, 0LL, 0, ActivityId, ActivityId, 3u, &UserData);
      }
    }
  }
}
