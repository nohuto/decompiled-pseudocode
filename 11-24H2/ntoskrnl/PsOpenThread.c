/*
 * XREFs of PsOpenThread @ 0x14083B940
 * Callers:
 *     NtOpenThread @ 0x14083B910 (NtOpenThread.c)
 *     NtAlpcOpenSenderThread @ 0x1409A9420 (NtAlpcOpenSenderThread.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x1403E0270 (SepCreateAccessStateFromSubjectContext.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     PsGetThreadId @ 0x140442630 (PsGetThreadId.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SeCaptureSubjectContextEx @ 0x14083BF00 (SeCaptureSubjectContextEx.c)
 *     SeDeleteAccessState @ 0x14083D240 (SeDeleteAccessState.c)
 *     PsLookupThreadByThreadId @ 0x140846770 (PsLookupThreadByThreadId.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     ObOpenObjectByPointer @ 0x1408511D0 (ObOpenObjectByPointer.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PsOpenThread(unsigned __int64 a1, int a2, __int64 a3, _OWORD *a4, char a5, KPROCESSOR_MODE a6)
{
  int v9; // r14d
  __int64 v10; // rcx
  bool v11; // cl
  char v12; // al
  KPROCESSOR_MODE AccessMode; // r12
  _DWORD *v14; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  struct _KPROCESS *Process; // rdx
  int v17; // ebx
  ULONG v18; // r15d
  KPROCESSOR_MODE v19; // dl
  HANDLE CycleTime; // rdi
  PETHREAD v21; // r14
  int v23; // edx
  char v25; // [rsp+42h] [rbp-2F6h] BYREF
  KPROCESSOR_MODE v26; // [rsp+43h] [rbp-2F5h] BYREF
  ULONG HandleAttributes; // [rsp+44h] [rbp-2F4h]
  int v28; // [rsp+48h] [rbp-2F0h]
  unsigned int v29; // [rsp+50h] [rbp-2E8h] BYREF
  int v30; // [rsp+58h] [rbp-2E0h] BYREF
  int v31; // [rsp+60h] [rbp-2D8h] BYREF
  PETHREAD Thread; // [rsp+68h] [rbp-2D0h] BYREF
  _QWORD *v33; // [rsp+70h] [rbp-2C8h] BYREF
  HANDLE ThreadId[2]; // [rsp+78h] [rbp-2C0h]
  HANDLE Handle; // [rsp+88h] [rbp-2B0h] BYREF
  __int64 v36; // [rsp+90h] [rbp-2A8h] BYREF
  struct _ACCESS_STATE PassedAccessState; // [rsp+A0h] [rbp-298h] BYREF
  _QWORD v38[28]; // [rsp+140h] [rbp-1F8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+220h] [rbp-118h] BYREF
  int *v40; // [rsp+240h] [rbp-F8h]
  __int64 v41; // [rsp+248h] [rbp-F0h]
  unsigned int *v42; // [rsp+250h] [rbp-E8h]
  __int64 v43; // [rsp+258h] [rbp-E0h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+260h] [rbp-D8h] BYREF
  unsigned int *v45; // [rsp+280h] [rbp-B8h]
  __int64 v46; // [rsp+288h] [rbp-B0h]
  int *v47; // [rsp+290h] [rbp-A8h]
  __int64 v48; // [rsp+298h] [rbp-A0h]
  int *v49; // [rsp+2A0h] [rbp-98h]
  __int64 v50; // [rsp+2A8h] [rbp-90h]
  _QWORD **v51; // [rsp+2B0h] [rbp-88h]
  __int64 v52; // [rsp+2B8h] [rbp-80h]
  char *v53; // [rsp+2C0h] [rbp-78h]
  __int64 v54; // [rsp+2C8h] [rbp-70h]
  KPROCESSOR_MODE *v55; // [rsp+2D0h] [rbp-68h]
  __int64 v56; // [rsp+2D8h] [rbp-60h]
  __int64 *v57; // [rsp+2E0h] [rbp-58h]
  __int64 v58; // [rsp+2E8h] [rbp-50h]

  v33 = (_QWORD *)a1;
  Handle = 0LL;
  Thread = 0LL;
  *(_OWORD *)ThreadId = 0LL;
  memset_0(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset_0(v38, 0, sizeof(v38));
  v9 = 0;
  v28 = 0;
  if ( a5 )
  {
    v10 = 0x7FFFFFFF0000LL;
    if ( a1 < 0x7FFFFFFF0000LL )
      v10 = a1;
    *(_QWORD *)v10 = *(_QWORD *)v10;
    if ( (a3 & 3) == 0 )
    {
      v11 = *(_QWORD *)(a3 + 16) != 0LL;
      HandleAttributes = *(_DWORD *)(a3 + 24) & 0x1DF2;
      if ( !a4 )
      {
        v12 = 0;
        goto LABEL_9;
      }
      if ( ((unsigned __int8)a4 & 3) == 0 )
      {
        *(_OWORD *)ThreadId = *a4;
        v12 = 1;
LABEL_9:
        AccessMode = a6;
        goto LABEL_11;
      }
    }
    ExRaiseDatatypeMisalignment();
  }
  v11 = *(_QWORD *)(a3 + 16) != 0LL;
  v23 = 73714;
  AccessMode = a6;
  if ( a6 )
    v23 = 7666;
  HandleAttributes = *(_DWORD *)(a3 + 24) & v23;
  if ( a4 )
  {
    *(_OWORD *)ThreadId = *a4;
    v12 = 1;
  }
  else
  {
    v12 = 0;
  }
LABEL_11:
  if ( v11 || !v12 )
  {
    v17 = -1073741776;
  }
  else
  {
    while ( 1 )
    {
      v14 = (_DWORD *)PsThreadType + 19;
      CurrentThread = KeGetCurrentThread();
      Process = CurrentThread->ApcState.Process;
      memset(&SubjectContext, 0, sizeof(SubjectContext));
      SeCaptureSubjectContextEx(CurrentThread, Process, &SubjectContext);
      v17 = SepCreateAccessStateFromSubjectContext(&SubjectContext, &PassedAccessState, v38, a2, v14);
      if ( v17 < 0 )
        break;
      v18 = HandleAttributes;
      if ( (HandleAttributes & 0x400) == 0 || v9 )
        v19 = AccessMode;
      else
        v19 = 1;
      if ( SeSinglePrivilegeCheck(SeDebugPrivilege, v19) )
      {
        if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
          PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
        else
          PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
        PassedAccessState.RemainingDesiredAccess = 0;
      }
      CycleTime = ThreadId[0];
      if ( ThreadId[0] )
      {
        Thread = 0LL;
        v17 = PsLookupThreadByThreadId(ThreadId[1], &Thread);
        if ( v17 < 0 )
          goto LABEL_40;
        v21 = Thread;
        if ( (HANDLE)Thread[1].CycleTime != CycleTime )
        {
          ObfDereferenceObject(Thread);
          v17 = -1073741813;
LABEL_40:
          SeDeleteAccessState(&PassedAccessState);
          goto LABEL_29;
        }
      }
      else
      {
        v17 = PsLookupThreadByThreadId(ThreadId[1], &Thread);
        if ( v17 < 0 )
          goto LABEL_40;
        v21 = Thread;
        CycleTime = (HANDLE)Thread[1].CycleTime;
        ThreadId[0] = CycleTime;
      }
      v17 = ObOpenObjectByPointer(
              v21,
              HandleAttributes,
              &PassedAccessState,
              0,
              (POBJECT_TYPE)PsThreadType,
              AccessMode,
              &Handle);
      SeDeleteAccessState(&PassedAccessState);
      ObfDereferenceObject(v21);
      if ( v17 >= 0 )
      {
        *v33 = Handle;
        if ( v28
          && (unsigned int)dword_140E08630 > 5
          && (qword_140E08640 & 0x400000000000LL) != 0
          && (qword_140E08648 & 0x400000000000LL) == qword_140E08648 )
        {
          v29 = (unsigned int)PsGetThreadId(v21);
          v45 = &v29;
          v46 = 4LL;
          v30 = (int)CycleTime;
          v47 = &v30;
          v48 = 4LL;
          v31 = a2;
          v49 = &v31;
          v50 = 4LL;
          LODWORD(v33) = v18;
          v51 = &v33;
          v52 = 4LL;
          v25 = a5;
          v53 = &v25;
          v54 = 1LL;
          v26 = AccessMode;
          v55 = &v26;
          v56 = 1LL;
          v36 = 0x1000000LL;
          v57 = &v36;
          v58 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E08630,
            (unsigned __int8 *)byte_140051B6B,
            0LL,
            0LL,
            9u,
            &v44);
        }
        goto LABEL_29;
      }
      if ( (HandleAttributes & 0x400) == 0 || v17 != -1073741790 || v28 )
        goto LABEL_29;
      v9 = 1;
      v28 = 1;
    }
  }
  LODWORD(CycleTime) = ThreadId[0];
LABEL_29:
  v29 = v17;
  v30 = a2;
  v31 = (int)ThreadId[1];
  LODWORD(v33) = (_DWORD)CycleTime;
  SubjectContext.ClientToken = &v33;
  *(_QWORD *)&SubjectContext.ImpersonationLevel = 4LL;
  SubjectContext.PrimaryToken = &v31;
  SubjectContext.ProcessAuditId = (PVOID)4;
  v40 = &v30;
  v41 = 4LL;
  v42 = &v29;
  v43 = 4LL;
  EtwWrite(EtwApiCallsProvRegHandle, &KERNEL_AUDIT_API_OPENTHREAD, 0LL, 4u, (PEVENT_DATA_DESCRIPTOR)&SubjectContext);
  return (unsigned int)v17;
}
