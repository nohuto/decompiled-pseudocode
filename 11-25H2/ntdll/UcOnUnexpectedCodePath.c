/*
 * XREFs of UcOnUnexpectedCodePath @ 0x180158AB0
 * Callers:
 *     RtlLogUnexpectedCodepath @ 0x180148790 (RtlLogUnexpectedCodepath.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x180003870 (RtlRunOnceExecuteOnce.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18000D714 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlReportException @ 0x1800CF050 (RtlReportException.c)
 *     _tlgKeywordOn @ 0x18010FC38 (_tlgKeywordOn.c)
 *     RtlCaptureContext @ 0x1801226E0 (RtlCaptureContext.c)
 *     UcpFindOrCreateTelemetryRecord @ 0x180158E18 (UcpFindOrCreateTelemetryRecord.c)
 *     UcpRetrieveCurrentConfigSettings @ 0x180158FB4 (UcpRetrieveCurrentConfigSettings.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall UcOnUnexpectedCodePath(unsigned int *a1)
{
  unsigned int v2; // eax
  int v3; // edi
  void *UniqueThread; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  int v9; // r14d
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v14; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v15; // [rsp+40h] [rbp-C8h] BYREF
  int v16; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v17; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B8h] BYREF
  void *v19; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v20; // [rsp+60h] [rbp-A8h]
  unsigned int v21; // [rsp+64h] [rbp-A4h]
  unsigned int v22; // [rsp+68h] [rbp-A0h]
  int v23; // [rsp+6Ch] [rbp-9Ch]
  _DWORD v24[4]; // [rsp+78h] [rbp-90h] BYREF
  void *v25; // [rsp+88h] [rbp-80h]
  int v26; // [rsp+90h] [rbp-78h]
  __int64 *v27; // [rsp+98h] [rbp-70h]
  __int64 v28; // [rsp+A0h] [rbp-68h]
  unsigned int *v29; // [rsp+A8h] [rbp-60h]
  __int64 v30; // [rsp+B0h] [rbp-58h]
  unsigned int *v31; // [rsp+B8h] [rbp-50h]
  __int64 v32; // [rsp+C0h] [rbp-48h]
  int *v33; // [rsp+C8h] [rbp-40h]
  __int64 v34; // [rsp+D0h] [rbp-38h]
  __int64 *v35; // [rsp+D8h] [rbp-30h]
  __int64 v36; // [rsp+E0h] [rbp-28h]
  struct _CONTEXT ContextRecord; // [rsp+118h] [rbp+10h] BYREF
  void *retaddr; // [rsp+610h] [rbp+508h]

  v19 = retaddr;
  v20 = *a1;
  v21 = a1[1];
  v2 = a1[2];
  v23 = 0;
  v22 = v2;
  v3 = RtlRunOnceExecuteOnce(
         &UcpInitOnUnexpectedCodePathOnce,
         (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))UcpInitOnUnexpectedCodePathOnceCallBack,
         0LL,
         0LL);
  if ( v3 >= 0 )
  {
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    if ( UcpLockOwningThreadHandle && UniqueThread == (void *)UcpLockOwningThreadHandle )
      return 3221225485LL;
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&UcpExclusiveLock);
    UcpLockOwningThreadHandle = (__int64)UniqueThread;
    LOWORD(v13) = 0;
    UcpRetrieveCurrentConfigSettings(a1, &v13, (char *)&v13 + 1);
    v6 = UcpFindOrCreateTelemetryRecord(&v19);
    v7 = v6;
    if ( v6 )
    {
      ++*(_DWORD *)(v6 + 16);
      ++*(_DWORD *)(v6 + 20);
      v8 = (unsigned int)((MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24);
      if ( (unsigned __int64)(unsigned int)v8 - *(_QWORD *)(v7 + 8) > 0xEA60 )
      {
        *(_QWORD *)(v7 + 8) = v8;
        v9 = *(_DWORD *)(v7 + 16);
        UcpLockOwningThreadHandle = 0LL;
        RtlReleaseSRWLockExclusive(&UcpExclusiveLock);
        if ( !(_BYTE)v13 )
        {
          if ( (unsigned int)dword_1801CE6B8 > 4 && tlgKeywordOn((__int64)&dword_1801CE6B8, 0x400000000000LL) )
          {
            v18 = *a1;
            v27 = &v18;
            v14 = a1[1];
            v29 = &v14;
            v15 = a1[2];
            v31 = &v15;
            v33 = &v16;
            v35 = &v17;
            v28 = 8LL;
            v30 = v12;
            v32 = v12;
            v16 = v9;
            v34 = v12;
            LODWORD(v17) = 0;
            v36 = v12;
            tlgWriteTransfer_EtwEventWriteTransfer(v10, byte_1801A44F7, v11, v12, 7, (__int64)v24);
          }
          *(_DWORD *)(v7 + 16) = 0;
        }
        if ( BYTE1(v13) == 1 )
        {
          memset_thunk_772440563353939046(v24, 0, 0x98uLL);
          v25 = retaddr;
          v27 = (__int64 *)*a1;
          v28 = a1[1];
          v29 = (unsigned int *)a1[2];
          v24[0] = 514;
          v26 = 3;
          memset_thunk_772440563353939046(&ContextRecord, 0, 0x4D0uLL);
          RtlCaptureContext(&ContextRecord);
          return (unsigned int)RtlReportException(v24, &ContextRecord, 15LL);
        }
        return (unsigned int)v3;
      }
      v3 = 0;
    }
    else
    {
      v3 = -1073741801;
    }
    UcpLockOwningThreadHandle = 0LL;
    RtlReleaseSRWLockExclusive(&UcpExclusiveLock);
  }
  return (unsigned int)v3;
}
