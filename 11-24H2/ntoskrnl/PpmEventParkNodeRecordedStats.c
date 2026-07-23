/*
 * XREFs of PpmEventParkNodeRecordedStats @ 0x14044BBFC
 * Callers:
 *     PpmParkRecordNodeStatistics @ 0x140401FC4 (PpmParkRecordNodeStatistics.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402D1760 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PpmEventParkNodeRecordedStats(__int16 a1, __int64 a2, char a3, __int64 a4, char a5)
{
  _UNKNOWN **v5; // rax
  unsigned __int8 v6; // dl
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r10
  const GUID *ActivityId; // r11
  int v11; // edx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-31h] BYREF
  __int64 *v14; // [rsp+58h] [rbp-21h]
  __int64 v15; // [rsp+60h] [rbp-19h]
  char *v16; // [rsp+68h] [rbp-11h]
  __int64 v17; // [rsp+70h] [rbp-9h]
  __int64 v18; // [rsp+78h] [rbp-1h]
  __int64 v19; // [rsp+80h] [rbp+7h]
  __int64 v20; // [rsp+88h] [rbp+Fh]
  int v21; // [rsp+90h] [rbp+17h]
  int v22; // [rsp+94h] [rbp+1Bh]
  char *v23; // [rsp+98h] [rbp+1Fh]
  __int64 v24; // [rsp+A0h] [rbp+27h]
  __int64 v25; // [rsp+A8h] [rbp+2Fh]
  int v26; // [rsp+B0h] [rbp+37h]
  int v27; // [rsp+B4h] [rbp+3Bh]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+57h] BYREF
  __int16 v29; // [rsp+D8h] [rbp+5Fh] BYREF
  __int64 v30; // [rsp+E0h] [rbp+67h] BYREF
  char v31; // [rsp+E8h] [rbp+6Fh] BYREF

  v5 = &retaddr;
  v31 = a3;
  v30 = a2;
  v29 = a1;
  if ( PpmEtwRegistered )
  {
    if ( PpmEtwHandle )
    {
      LOBYTE(v5) = EtwpLevelKeywordEnabled(*(_QWORD *)(PpmEtwHandle + 32) + 96LL, 5u, 2LL);
      if ( (_BYTE)v5
        || *(_WORD *)(v9 + 102) != (_WORD)ActivityId
        && (LOBYTE(v5) = EtwpLevelKeywordEnabled(*(_QWORD *)(v9 + 40) + 96LL, v6, v7), (_BYTE)v5) )
      {
        *(_QWORD *)&UserData.Size = v7;
        v11 = *(_DWORD *)(v8 + 48);
        UserData.Ptr = (ULONGLONG)&v29;
        v14 = &v30;
        v16 = &v31;
        v20 = *(_QWORD *)(v8 + 8);
        v23 = &a5;
        v25 = *(_QWORD *)(v8 + 16);
        v18 = v8 + 48;
        v21 = 8 * v11;
        v26 = 8 * v11;
        v15 = 8LL;
        v17 = 1LL;
        v19 = 4LL;
        v22 = (int)ActivityId;
        v24 = 1LL;
        v27 = (int)ActivityId;
        LOBYTE(v5) = EtwWriteEx(
                       PpmEtwHandle,
                       &PPM_ETW_PARK_NODE_STATS_V2,
                       0LL,
                       0,
                       ActivityId,
                       ActivityId,
                       7u,
                       &UserData);
      }
    }
  }
  return (char)v5;
}
