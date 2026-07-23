/*
 * XREFs of SshpTracingWriteBlockerStateChange @ 0x140444E2C
 * Callers:
 *     SshpSetBlockerActive @ 0x140444D60 (SshpSetBlockerActive.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402D1760 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall SshpTracingWriteBlockerStateChange(__int64 a1)
{
  char result; // al
  unsigned __int8 v2; // dl
  __int64 v3; // r8
  __int64 v4; // r9
  char v5; // r10
  const GUID *ActivityId; // r11
  int v7; // eax
  int v8; // [rsp+40h] [rbp+7h] BYREF
  __int64 v9; // [rsp+48h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+17h] BYREF
  __int64 *v11; // [rsp+60h] [rbp+27h]
  __int64 v12; // [rsp+68h] [rbp+2Fh]
  int *v13; // [rsp+70h] [rbp+37h]
  __int64 v14; // [rsp+78h] [rbp+3Fh]
  __int64 v15; // [rsp+A0h] [rbp+67h] BYREF

  v15 = a1;
  result = SshpTraceHandleRegistered;
  if ( SshpTraceHandleRegistered )
  {
    if ( SshpTraceHandle )
    {
      result = EtwpLevelKeywordEnabled(*(_QWORD *)(SshpTraceHandle + 32) + 96LL, 4u, 0x8000000000000004uLL);
      if ( result
        || *(_WORD *)(v4 + 102) != (_WORD)ActivityId
        && (result = EtwpLevelKeywordEnabled(*(_QWORD *)(v4 + 40) + 96LL, v2, v3)) != 0 )
      {
        *(_QWORD *)&UserData.Size = 8LL;
        UserData.Ptr = (ULONGLONG)&v15;
        v9 = MEMORY[0xFFFFF78000000008];
        v11 = &v9;
        v7 = (int)ActivityId;
        LOBYTE(v7) = v5 != 0;
        v12 = 8LL;
        v8 = v7;
        v14 = 4LL;
        v13 = &v8;
        return EtwWriteEx(
                 SshpTraceHandle,
                 &SLEEPSTUDY_EVT_BLOCKER_STATE_CHANGE,
                 0LL,
                 1u,
                 ActivityId,
                 ActivityId,
                 3u,
                 &UserData);
      }
    }
  }
  return result;
}
