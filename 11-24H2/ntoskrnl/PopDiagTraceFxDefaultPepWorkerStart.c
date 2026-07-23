/*
 * XREFs of PopDiagTraceFxDefaultPepWorkerStart @ 0x1402BF438
 * Callers:
 *     PopPepWork @ 0x1402BEEE0 (PopPepWork.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402D1760 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceFxDefaultPepWorkerStart(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r10
  const GUID *ActivityId; // r11
  const GUID *v7; // [rsp+40h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-20h] BYREF

  if ( PopDiagHandleRegistered )
  {
    if ( PopDiagHandle )
    {
      LOBYTE(a2) = 4;
      if ( (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(PopDiagHandle + 32) + 96LL, a2, 256LL, PopDiagHandle)
        || *(_WORD *)(v4 + 102) != (_WORD)ActivityId
        && (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(v4 + 40) + 96LL, v2, v3, v4) )
      {
        v7 = ActivityId;
        if ( v5 )
          v7 = *(const GUID **)(v5 + 48);
        UserData.Ptr = (ULONGLONG)&v7;
        *(_QWORD *)&UserData.Size = 8LL;
        EtwWriteEx(
          PopDiagHandle,
          &POP_ETW_EVENT_DEFAULT_PEP_WORKER_START,
          0LL,
          1u,
          ActivityId,
          ActivityId,
          1u,
          &UserData);
      }
    }
  }
}
