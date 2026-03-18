/*
 * XREFs of PpmEventTraceProcessorLatencyLimitChange @ 0x1403B5D60
 * Callers:
 *     PpmIdleUpdateProcessorLatencyLimit @ 0x1403B5A90 (PpmIdleUpdateProcessorLatencyLimit.c)
 * Callees:
 *     EtwWriteEx @ 0x140259680 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402A2030 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void __fastcall PpmEventTraceProcessorLatencyLimitChange(__int64 a1, int a2)
{
  unsigned __int8 v2; // dl
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
  if ( PpmEtwRegistered
    && PpmEtwHandle
    && (EtwpLevelKeywordEnabled(*(_QWORD *)(PpmEtwHandle + 32) + 96LL, 5u, 2LL)
     || *(_WORD *)(v4 + 102) != (_WORD)ActivityId && EtwpLevelKeywordEnabled(*(_QWORD *)(v4 + 40) + 96LL, v2, v3)) )
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
