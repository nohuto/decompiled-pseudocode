/*
 * XREFs of PpmEventPerfSelectProcessorState @ 0x1403A3000
 * Callers:
 *     PpmPerfSelectProcessorState @ 0x1403A2AD8 (PpmPerfSelectProcessorState.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402D1760 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PpmEventPerfSelectProcessorState(__int64 a1, int a2, int a3, int a4, char a5)
{
  __int64 *v5; // r10
  _DWORD *v6; // rax
  __int64 v7; // r9
  const EVENT_DESCRIPTOR *v8; // r10
  const GUID *ActivityId; // r11
  _DWORD v11[4]; // [rsp+40h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-11h] BYREF
  int *v13; // [rsp+60h] [rbp-1h]
  __int64 v14; // [rsp+68h] [rbp+7h]
  int *v15; // [rsp+70h] [rbp+Fh]
  __int64 v16; // [rsp+78h] [rbp+17h]
  int *v17; // [rsp+80h] [rbp+1Fh]
  __int64 v18; // [rsp+88h] [rbp+27h]
  char *v19; // [rsp+90h] [rbp+2Fh]
  __int64 v20; // [rsp+98h] [rbp+37h]
  int v21; // [rsp+C8h] [rbp+67h] BYREF
  int v22; // [rsp+D0h] [rbp+6Fh] BYREF
  int v23; // [rsp+D8h] [rbp+77h] BYREF

  v23 = a4;
  v22 = a3;
  v21 = a2;
  v11[0] = 0;
  if ( *(_BYTE *)(a1 + 68) )
  {
    v5 = PPM_ETW_PERF_SELECT_PROCESSOR_STATE;
    LOWORD(v11[0]) = *(unsigned __int8 *)(a1 - 35040);
    BYTE2(v11[0]) = *(_BYTE *)(a1 - 35039);
    *(_QWORD *)&UserData.Size = 3LL;
  }
  else
  {
    v5 = PPM_ETW_PERF_SELECT_PROCESSOR_STATE_HV;
    v11[0] = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 20LL);
    *(_QWORD *)&UserData.Size = 4LL;
  }
  v6 = v11;
  UserData.Ptr = (ULONGLONG)v11;
  if ( PpmEtwRegistered )
  {
    if ( PpmEtwHandle )
    {
      LOBYTE(v6) = EtwpLevelKeywordEnabled(*(_QWORD *)(PpmEtwHandle + 32) + 96LL, *((_BYTE *)v5 + 4), v5[1]);
      if ( (_BYTE)v6
        || *(_WORD *)(v7 + 102) != (_WORD)ActivityId
        && (LOBYTE(v6) = EtwpLevelKeywordEnabled(*(_QWORD *)(v7 + 40) + 96LL, v8->Level, v8->Keyword), (_BYTE)v6) )
      {
        v13 = &v21;
        v14 = 4LL;
        v15 = &v22;
        v16 = 4LL;
        v17 = &v23;
        v18 = 4LL;
        v19 = &a5;
        v20 = 4LL;
        LOBYTE(v6) = EtwWriteEx(PpmEtwHandle, v8, 0LL, 0, ActivityId, ActivityId, 5u, &UserData);
      }
    }
  }
  return (char)v6;
}
