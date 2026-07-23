/*
 * XREFs of PopDiagTraceFxDefaultPepWorkerEnd @ 0x140438020
 * Callers:
 *     PopPepWork @ 0x1402BEEE0 (PopPepWork.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwpLevelKeywordEnabled @ 0x1402D1760 (EtwpLevelKeywordEnabled.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceFxDefaultPepWorkerEnd(__int64 a1, int a2, char a3, int a4, int a5)
{
  _UNKNOWN **v5; // rax
  int v6; // esi
  __int64 v10; // r8
  unsigned __int8 v11; // dl
  __int64 v12; // r9
  unsigned __int8 v13; // dl
  __int64 v14; // r9
  unsigned __int8 v15; // dl
  __int64 v16; // r8
  __int64 v17; // r9
  char v18; // al
  const EVENT_DESCRIPTOR *v19; // rdx
  int v20; // r8d
  char *v21; // rdx
  int v22; // ett
  int ActivityId; // [rsp+28h] [rbp-91h]
  int RelatedActivityId; // [rsp+30h] [rbp-89h]
  ULONG UserDataCount; // [rsp+38h] [rbp-81h]
  char v27; // [rsp+48h] [rbp-71h] BYREF
  char v28; // [rsp+49h] [rbp-70h] BYREF
  char v29; // [rsp+4Ah] [rbp-6Fh] BYREF
  int v30; // [rsp+4Ch] [rbp-6Dh] BYREF
  __int64 v31; // [rsp+50h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-61h] BYREF
  char *v33; // [rsp+68h] [rbp-51h]
  __int64 v34; // [rsp+70h] [rbp-49h]
  char *v35; // [rsp+78h] [rbp-41h]
  __int64 v36; // [rsp+80h] [rbp-39h]
  char *v37; // [rsp+88h] [rbp-31h]
  __int64 v38; // [rsp+90h] [rbp-29h]
  __int64 v39[4]; // [rsp+98h] [rbp-21h] BYREF
  int *v40; // [rsp+B8h] [rbp-1h]
  __int64 v41; // [rsp+C0h] [rbp+7h]
  __int64 *v42; // [rsp+C8h] [rbp+Fh]
  __int64 v43; // [rsp+D0h] [rbp+17h]
  _UNKNOWN *retaddr; // [rsp+110h] [rbp+57h] BYREF
  __int64 v45; // [rsp+118h] [rbp+5Fh] BYREF

  v5 = &retaddr;
  v45 = a1;
  v6 = a5;
  if ( a4 == 2 )
  {
    if ( (unsigned int)dword_140E07680 <= 5 )
      goto LABEL_3;
    LOBYTE(v5) = tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL);
    if ( !(_BYTE)v5 )
      goto LABEL_3;
    v40 = &v30;
    v21 = byte_14004A599;
    UserDataCount = 3;
  }
  else
  {
    if ( a4 != 3 )
      goto LABEL_3;
    _m_prefetchw(&PopLogFxDefaultPepWorkerOrphaned);
    LODWORD(v5) = PopLogFxDefaultPepWorkerOrphaned;
    do
    {
      v22 = (int)v5;
      LODWORD(v5) = _InterlockedCompareExchange(&PopLogFxDefaultPepWorkerOrphaned, 0, (signed __int32)v5);
    }
    while ( v22 != (_DWORD)v5 );
    if ( !(_DWORD)v5 )
      goto LABEL_3;
    if ( (unsigned int)dword_140E07680 <= 5 )
      goto LABEL_3;
    LOBYTE(v5) = tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL);
    if ( !(_BYTE)v5 )
      goto LABEL_3;
    v31 = 0x1000000LL;
    v40 = &v30;
    v21 = (char *)&byte_14004A5D8;
    v43 = 8LL;
    v42 = &v31;
    UserDataCount = 4;
  }
  v30 = v6;
  v41 = 4LL;
  LOBYTE(v5) = tlgWriteEx_EtwWriteEx(
                 (int)&dword_140E07680,
                 (int)v21,
                 v20,
                 1,
                 ActivityId,
                 RelatedActivityId,
                 UserDataCount,
                 (__int64)v39);
LABEL_3:
  if ( PopDiagHandleRegistered )
  {
    if ( (v10 = 256LL, PopDiagHandle)
      && ((LOBYTE(v5) = EtwpLevelKeywordEnabled(*(_QWORD *)(PopDiagHandle + 32) + 96LL, 4u, 256LL), (_BYTE)v5)
       || *(_WORD *)(v12 + 102)
       && (LOBYTE(v5) = EtwpLevelKeywordEnabled(*(_QWORD *)(v12 + 40) + 96LL, v11, v10), (_BYTE)v5))
      || PopDiagHandle
      && ((LOBYTE(v5) = EtwpLevelKeywordEnabled(*(_QWORD *)(PopDiagHandle + 32) + 96LL, 1u, v10), (_BYTE)v5)
       || *(_WORD *)(v14 + 102)
       && (LOBYTE(v5) = EtwpLevelKeywordEnabled(*(_QWORD *)(v14 + 40) + 96LL, v13, v10), (_BYTE)v5))
      || PopDiagHandle
      && ((LOBYTE(v5) = EtwpLevelKeywordEnabled(*(_QWORD *)(PopDiagHandle + 32) + 96LL, 1u, v10), (_BYTE)v5)
       || *(_WORD *)(v17 + 102)
       && (LOBYTE(v5) = EtwpLevelKeywordEnabled(*(_QWORD *)(v17 + 40) + 96LL, v15, v16), (_BYTE)v5)) )
    {
      if ( a2 )
      {
        if ( a2 == 1 )
        {
          v18 = -1;
        }
        else
        {
          v18 = a3;
          if ( a2 == 3 )
            v18 = -2;
        }
      }
      else
      {
        v18 = -3;
      }
      v27 = v18;
      UserData.Ptr = (ULONGLONG)&v45;
      v33 = &v27;
      v35 = &v28;
      v37 = &v29;
      v28 = a4;
      v29 = v6;
      *(_QWORD *)&UserData.Size = 8LL;
      v34 = 1LL;
      v36 = 1LL;
      v38 = 1LL;
      LOBYTE(v5) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_END);
      if ( (_BYTE)v5 )
        LOBYTE(v5) = EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_END, 0LL, 1u, 0LL, 0LL, 4u, &UserData);
      if ( a4 == 2 )
      {
        LOBYTE(v5) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_DEVICE_RECOVERED);
        if ( !(_BYTE)v5 )
          return (char)v5;
        v19 = &POP_ETW_EVENT_DEFAULT_PEP_WORKER_DEVICE_RECOVERED;
        goto LABEL_44;
      }
      if ( a4 == 3 )
      {
        LOBYTE(v5) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_DEVICE_ORPHANED);
        if ( (_BYTE)v5 )
        {
          v19 = &POP_ETW_EVENT_DEFAULT_PEP_WORKER_DEVICE_ORPHANED;
LABEL_44:
          LOBYTE(v5) = EtwWriteEx(PopDiagHandle, v19, 0LL, 1u, 0LL, 0LL, 4u, &UserData);
        }
      }
    }
  }
  return (char)v5;
}
