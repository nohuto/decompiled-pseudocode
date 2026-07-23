/*
 * XREFs of VmpLogSplitMergeMemoryRange @ 0x1407A0420
 * Callers:
 *     VmSplitMemoryRange @ 0x140A73D90 (VmSplitMemoryRange.c)
 *     VmMergeMemoryRanges @ 0x140A76400 (VmMergeMemoryRanges.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     PsGetProcessId @ 0x140427BE0 (PsGetProcessId.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall VmpLogSplitMergeMemoryRange(__int64 a1, int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  _UNKNOWN **v5; // rax
  __int64 v6; // rbx
  __int64 v9; // r8
  unsigned __int8 *v10; // rdx
  unsigned int *v11; // rax
  int v13; // [rsp+28h] [rbp-61h]
  int v14; // [rsp+30h] [rbp-59h]
  unsigned int ProcessId; // [rsp+48h] [rbp-41h] BYREF
  unsigned int v16; // [rsp+4Ch] [rbp-3Dh] BYREF
  __int64 v17; // [rsp+50h] [rbp-39h] BYREF
  _QWORD v18[2]; // [rsp+58h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+68h] [rbp-21h] BYREF
  unsigned int *p_ProcessId; // [rsp+88h] [rbp-1h]
  int v21; // [rsp+90h] [rbp+7h]
  int v22; // [rsp+94h] [rbp+Bh]
  __int64 *v23; // [rsp+98h] [rbp+Fh]
  int v24; // [rsp+A0h] [rbp+17h]
  int v25; // [rsp+A4h] [rbp+1Bh]
  __int64 *v26; // [rsp+A8h] [rbp+1Fh]
  int v27; // [rsp+B0h] [rbp+27h]
  int v28; // [rsp+B4h] [rbp+2Bh]
  unsigned int *v29; // [rsp+B8h] [rbp+2Fh]
  int v30; // [rsp+C0h] [rbp+37h]
  int v31; // [rsp+C4h] [rbp+3Bh]
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+57h] BYREF

  v5 = &retaddr;
  v6 = *(_QWORD *)&VmpTraceLoggingProvider;
  if ( a2 )
  {
    if ( **(_DWORD **)&VmpTraceLoggingProvider > 5u )
    {
      LOBYTE(v5) = tlgKeywordOn(*(__int64 *)&VmpTraceLoggingProvider, 128LL);
      if ( (_BYTE)v5 )
      {
        ProcessId = (unsigned int)PsGetProcessId(KeGetCurrentThread()->ApcState.Process);
        v26 = v18;
        p_ProcessId = &ProcessId;
        v10 = (unsigned __int8 *)qword_140052A78;
        v17 = a3;
        v23 = &v17;
        v24 = 8;
        v27 = 8;
        v16 = a5;
        v11 = &v16;
        v18[0] = a4;
LABEL_8:
        v22 = 0;
        v25 = 0;
        v28 = 0;
        v31 = 0;
        v29 = v11;
        v21 = 4;
        v30 = 4;
        LOBYTE(v5) = tlgWriteEx_EtwWriteEx(v6, v10, v9, 0, v13, v14, 6u, &v19);
      }
    }
  }
  else if ( **(_DWORD **)&VmpTraceLoggingProvider > 5u )
  {
    LOBYTE(v5) = tlgKeywordOn(*(__int64 *)&VmpTraceLoggingProvider, 128LL);
    if ( (_BYTE)v5 )
    {
      v16 = (unsigned int)PsGetProcessId(KeGetCurrentThread()->ApcState.Process);
      v26 = &v17;
      p_ProcessId = &v16;
      v10 = (unsigned __int8 *)&byte_1400525F7;
      v18[0] = a3;
      v23 = v18;
      v24 = 8;
      v27 = 8;
      ProcessId = a5;
      v11 = &ProcessId;
      v17 = a4;
      goto LABEL_8;
    }
  }
  return (char)v5;
}
