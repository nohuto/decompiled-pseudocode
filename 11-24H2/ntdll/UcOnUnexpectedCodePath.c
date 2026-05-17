/*
 * XREFs of UcOnUnexpectedCodePath @ 0x180157500
 * Callers:
 *     RtlLogUnexpectedCodepath @ 0x1801471E0 (RtlLogUnexpectedCodepath.c)
 * Callees:
 *     RtlReportException @ 0x180001490 (RtlReportException.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180051AD4 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlRunOnceExecuteOnce @ 0x180098200 (RtlRunOnceExecuteOnce.c)
 *     _tlgKeywordOn @ 0x18010D208 (_tlgKeywordOn.c)
 *     RtlCaptureContext @ 0x180120C00 (RtlCaptureContext.c)
 *     UcpFindOrCreateTelemetryRecord @ 0x180157868 (UcpFindOrCreateTelemetryRecord.c)
 *     UcpRetrieveCurrentConfigSettings @ 0x180157A04 (UcpRetrieveCurrentConfigSettings.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall UcOnUnexpectedCodePath(unsigned int *a1)
{
  unsigned int v2; // eax
  volatile signed __int32 **v3; // rdx
  int v4; // edi
  unsigned __int64 v5; // r8
  void *UniqueThread; // rbx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  int v11; // r14d
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v16; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v17; // [rsp+40h] [rbp-C8h] BYREF
  int v18; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v19; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B8h] BYREF
  void *v21; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v22; // [rsp+60h] [rbp-A8h]
  unsigned int v23; // [rsp+64h] [rbp-A4h]
  unsigned int v24; // [rsp+68h] [rbp-A0h]
  int v25; // [rsp+6Ch] [rbp-9Ch]
  _DWORD v26[4]; // [rsp+78h] [rbp-90h] BYREF
  void *v27; // [rsp+88h] [rbp-80h]
  int v28; // [rsp+90h] [rbp-78h]
  __int64 *v29; // [rsp+98h] [rbp-70h]
  __int64 v30; // [rsp+A0h] [rbp-68h]
  unsigned int *v31; // [rsp+A8h] [rbp-60h]
  __int64 v32; // [rsp+B0h] [rbp-58h]
  unsigned int *v33; // [rsp+B8h] [rbp-50h]
  __int64 v34; // [rsp+C0h] [rbp-48h]
  int *v35; // [rsp+C8h] [rbp-40h]
  __int64 v36; // [rsp+D0h] [rbp-38h]
  __int64 *v37; // [rsp+D8h] [rbp-30h]
  __int64 v38; // [rsp+E0h] [rbp-28h]
  struct _CONTEXT ContextRecord; // [rsp+118h] [rbp+10h] BYREF
  void *retaddr; // [rsp+610h] [rbp+508h]

  v21 = retaddr;
  v22 = *a1;
  v23 = a1[1];
  v2 = a1[2];
  v25 = 0;
  v24 = v2;
  v4 = RtlRunOnceExecuteOnce(
         &UcpInitOnUnexpectedCodePathOnce,
         (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))UcpInitOnUnexpectedCodePathOnceCallBack,
         0LL,
         0LL);
  if ( v4 >= 0 )
  {
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    if ( UcpLockOwningThreadHandle && UniqueThread == (void *)UcpLockOwningThreadHandle )
      return 3221225485LL;
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&UcpExclusiveLock, v3, v5);
    UcpLockOwningThreadHandle = (__int64)UniqueThread;
    LOWORD(v15) = 0;
    UcpRetrieveCurrentConfigSettings(a1, &v15, (char *)&v15 + 1);
    v8 = UcpFindOrCreateTelemetryRecord(&v21);
    v9 = v8;
    if ( v8 )
    {
      ++*(_DWORD *)(v8 + 16);
      ++*(_DWORD *)(v8 + 20);
      v10 = (unsigned int)((MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24);
      if ( (unsigned __int64)(unsigned int)v10 - *(_QWORD *)(v9 + 8) > 0xEA60 )
      {
        *(_QWORD *)(v9 + 8) = v10;
        v11 = *(_DWORD *)(v9 + 16);
        UcpLockOwningThreadHandle = 0LL;
        RtlReleaseSRWLockExclusive(&UcpExclusiveLock);
        if ( !(_BYTE)v15 )
        {
          if ( (unsigned int)dword_1801CC6B8 > 4 && tlgKeywordOn((__int64)&dword_1801CC6B8, 0x400000000000LL) )
          {
            v20 = *a1;
            v29 = &v20;
            v16 = a1[1];
            v31 = &v16;
            v17 = a1[2];
            v33 = &v17;
            v35 = &v18;
            v37 = &v19;
            v30 = 8LL;
            v32 = v14;
            v34 = v14;
            v18 = v11;
            v36 = v14;
            LODWORD(v19) = 0;
            v38 = v14;
            tlgWriteTransfer_EtwEventWriteTransfer(v12, byte_1801A24AF, v13, v14, 7, (__int64)v26);
          }
          *(_DWORD *)(v9 + 16) = 0;
        }
        if ( BYTE1(v15) == 1 )
        {
          memset_thunk_772440563353939046(v26, 0, 0x98uLL);
          v27 = retaddr;
          v29 = (__int64 *)*a1;
          v30 = a1[1];
          v31 = (unsigned int *)a1[2];
          v26[0] = 514;
          v28 = 3;
          memset_thunk_772440563353939046(&ContextRecord, 0, 0x4D0uLL);
          RtlCaptureContext(&ContextRecord);
          return (unsigned int)RtlReportException((__int64)v26, (__int64)&ContextRecord, 0xFu);
        }
        return (unsigned int)v4;
      }
      v4 = 0;
    }
    else
    {
      v4 = -1073741801;
    }
    UcpLockOwningThreadHandle = 0LL;
    RtlReleaseSRWLockExclusive(&UcpExclusiveLock);
  }
  return (unsigned int)v4;
}
