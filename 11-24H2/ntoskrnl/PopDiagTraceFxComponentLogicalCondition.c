/*
 * XREFs of PopDiagTraceFxComponentLogicalCondition @ 0x140434D90
 * Callers:
 *     PopFxIdleWorkerTail @ 0x1404E22FC (PopFxIdleWorkerTail.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402D1760 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceFxComponentLogicalCondition(__int64 a1, int a2)
{
  unsigned __int8 v2; // dl
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // r10d
  const GUID *ActivityId; // r11
  int v7; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  int *v9; // [rsp+58h] [rbp-28h]
  __int64 v10; // [rsp+60h] [rbp-20h]
  int *v11; // [rsp+68h] [rbp-18h]
  __int64 v12; // [rsp+70h] [rbp-10h]
  __int64 v13; // [rsp+90h] [rbp+10h] BYREF
  int v14; // [rsp+98h] [rbp+18h] BYREF

  v14 = a2;
  v13 = a1;
  if ( PopDiagHandleRegistered
    && PopDiagHandle
    && (EtwpLevelKeywordEnabled(*(_QWORD *)(PopDiagHandle + 32) + 96LL, 4u, 256LL)
     || *(_WORD *)(v4 + 102) != (_WORD)ActivityId && EtwpLevelKeywordEnabled(*(_QWORD *)(v4 + 40) + 96LL, v2, v3)) )
  {
    UserData.Ptr = (ULONGLONG)&v13;
    v7 = v5;
    v9 = &v14;
    *(_QWORD *)&UserData.Size = 8LL;
    v11 = &v7;
    v10 = 4LL;
    v12 = 4LL;
    EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_CONDITION, 0LL, 1u, ActivityId, ActivityId, 3u, &UserData);
  }
}
