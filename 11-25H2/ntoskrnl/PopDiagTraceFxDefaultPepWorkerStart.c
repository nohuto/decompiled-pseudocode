/*
 * XREFs of PopDiagTraceFxDefaultPepWorkerStart @ 0x14034D5B8
 * Callers:
 *     PopPepWork @ 0x14034D020 (PopPepWork.c)
 * Callees:
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402576B0 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void PopDiagTraceFxDefaultPepWorkerStart()
{
  unsigned __int8 v0; // dl
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // r10
  const GUID *ActivityId; // r11
  const GUID *v5; // [rsp+40h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-20h] BYREF

  if ( PopDiagHandleRegistered
    && PopDiagHandle
    && (EtwpLevelKeywordEnabled(*(_QWORD *)(PopDiagHandle + 32) + 96LL, 4u, 256LL)
     || *(_BYTE *)(v2 + 101) != (_BYTE)ActivityId && EtwpLevelKeywordEnabled(*(_QWORD *)(v2 + 40) + 96LL, v0, v1)) )
  {
    v5 = ActivityId;
    if ( v3 )
      v5 = *(const GUID **)(v3 + 48);
    UserData.Ptr = (ULONGLONG)&v5;
    *(_QWORD *)&UserData.Size = 8LL;
    EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_START, 0LL, 1u, ActivityId, ActivityId, 1u, &UserData);
  }
}
