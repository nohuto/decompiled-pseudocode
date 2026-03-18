/*
 * XREFs of PsOpenThread @ 0x1408430F0
 * Callers:
 *     NtOpenThread @ 0x1408430C0 (NtOpenThread.c)
 *     NtAlpcOpenSenderThread @ 0x1409CCE90 (NtAlpcOpenSenderThread.c)
 * Callees:
 *     EtwWrite @ 0x140257AF0 (EtwWrite.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x1403E3020 (SepCreateAccessStateFromSubjectContext.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PsGetThreadId @ 0x14044BF30 (PsGetThreadId.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SeCaptureSubjectContextEx @ 0x1408436C0 (SeCaptureSubjectContextEx.c)
 *     SeDeleteAccessState @ 0x140844A10 (SeDeleteAccessState.c)
 *     PsLookupThreadByThreadId @ 0x14084E700 (PsLookupThreadByThreadId.c)
 *     ObOpenObjectByPointer @ 0x140857EB0 (ObOpenObjectByPointer.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PsOpenThread(HANDLE *a1, int a2, __int64 a3, _OWORD *a4, char a5, KPROCESSOR_MODE AccessMode)
{
  __int64 v9; // rcx
  bool v10; // cl
  char v11; // al
  KPROCESSOR_MODE v12; // r15
  _DWORD *v13; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  struct _KPROCESS *Process; // rdx
  int v16; // ebx
  ULONG v17; // r12d
  KPROCESSOR_MODE v18; // dl
  HANDLE CycleTime; // rdi
  PETHREAD v20; // r15
  int v22; // edx
  char v24; // [rsp+42h] [rbp-2F6h] BYREF
  KPROCESSOR_MODE v25; // [rsp+43h] [rbp-2F5h] BYREF
  int v26; // [rsp+44h] [rbp-2F4h]
  ULONG HandleAttributes; // [rsp+48h] [rbp-2F0h]
  unsigned int v28; // [rsp+50h] [rbp-2E8h] BYREF
  int v29; // [rsp+58h] [rbp-2E0h] BYREF
  int v30; // [rsp+60h] [rbp-2D8h] BYREF
  ULONG v31; // [rsp+68h] [rbp-2D0h] BYREF
  PETHREAD Thread; // [rsp+70h] [rbp-2C8h] BYREF
  HANDLE ThreadId[2]; // [rsp+78h] [rbp-2C0h]
  HANDLE Handle; // [rsp+88h] [rbp-2B0h] BYREF
  __int64 v35; // [rsp+90h] [rbp-2A8h] BYREF
  struct _ACCESS_STATE PassedAccessState; // [rsp+A0h] [rbp-298h] BYREF
  _QWORD v37[28]; // [rsp+140h] [rbp-1F8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+220h] [rbp-118h] BYREF
  int *v39; // [rsp+240h] [rbp-F8h]
  __int64 v40; // [rsp+248h] [rbp-F0h]
  unsigned int *v41; // [rsp+250h] [rbp-E8h]
  __int64 v42; // [rsp+258h] [rbp-E0h]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+260h] [rbp-D8h] BYREF
  unsigned int *v44; // [rsp+280h] [rbp-B8h]
  __int64 v45; // [rsp+288h] [rbp-B0h]
  int *v46; // [rsp+290h] [rbp-A8h]
  __int64 v47; // [rsp+298h] [rbp-A0h]
  int *v48; // [rsp+2A0h] [rbp-98h]
  __int64 v49; // [rsp+2A8h] [rbp-90h]
  ULONG *v50; // [rsp+2B0h] [rbp-88h]
  __int64 v51; // [rsp+2B8h] [rbp-80h]
  char *v52; // [rsp+2C0h] [rbp-78h]
  __int64 v53; // [rsp+2C8h] [rbp-70h]
  KPROCESSOR_MODE *v54; // [rsp+2D0h] [rbp-68h]
  __int64 v55; // [rsp+2D8h] [rbp-60h]
  __int64 *v56; // [rsp+2E0h] [rbp-58h]
  __int64 v57; // [rsp+2E8h] [rbp-50h]

  Handle = 0LL;
  Thread = 0LL;
  *(_OWORD *)ThreadId = 0LL;
  memset_0(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset_0(v37, 0, sizeof(v37));
  v26 = 0;
  if ( a5 )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v9 = (__int64)a1;
    *(_QWORD *)v9 = *(_QWORD *)v9;
    if ( (a3 & 3) == 0 )
    {
      v10 = *(_QWORD *)(a3 + 16) != 0LL;
      HandleAttributes = *(_DWORD *)(a3 + 24) & 0x1DF2;
      if ( !a4 )
      {
        v11 = 0;
        goto LABEL_8;
      }
      if ( ((unsigned __int8)a4 & 3) == 0 )
      {
        *(_OWORD *)ThreadId = *a4;
        v11 = 1;
LABEL_8:
        v12 = AccessMode;
        goto LABEL_11;
      }
    }
    ExRaiseDatatypeMisalignment();
  }
  v10 = *(_QWORD *)(a3 + 16) != 0LL;
  v22 = 73714;
  v12 = AccessMode;
  if ( AccessMode )
    v22 = 7666;
  HandleAttributes = *(_DWORD *)(a3 + 24) & v22;
  if ( a4 )
  {
    *(_OWORD *)ThreadId = *a4;
    v11 = 1;
  }
  else
  {
    v11 = 0;
  }
LABEL_11:
  if ( v10 || !v11 )
  {
    v16 = -1073741776;
  }
  else
  {
    while ( 1 )
    {
      v13 = (_DWORD *)PsThreadType + 19;
      CurrentThread = KeGetCurrentThread();
      Process = CurrentThread->ApcState.Process;
      memset(&SubjectContext, 0, sizeof(SubjectContext));
      SeCaptureSubjectContextEx(CurrentThread, Process, &SubjectContext);
      v16 = SepCreateAccessStateFromSubjectContext(&SubjectContext, &PassedAccessState, v37, a2, v13);
      if ( v16 < 0 )
        break;
      v17 = HandleAttributes;
      if ( (HandleAttributes & 0x400) == 0 || v26 )
        v18 = v12;
      else
        v18 = 1;
      if ( SeSinglePrivilegeCheck(SeDebugPrivilege, v18) )
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
        v16 = PsLookupThreadByThreadId(ThreadId[1], &Thread);
        if ( v16 < 0 )
          goto LABEL_40;
        v20 = Thread;
        if ( (HANDLE)Thread[1].CycleTime != CycleTime )
        {
          ObfDereferenceObject(Thread);
          v16 = -1073741813;
LABEL_40:
          SeDeleteAccessState(&PassedAccessState);
          goto LABEL_29;
        }
      }
      else
      {
        v16 = PsLookupThreadByThreadId(ThreadId[1], &Thread);
        if ( v16 < 0 )
          goto LABEL_40;
        v20 = Thread;
        CycleTime = (HANDLE)Thread[1].CycleTime;
        ThreadId[0] = CycleTime;
      }
      v16 = ObOpenObjectByPointer(
              v20,
              HandleAttributes,
              &PassedAccessState,
              0,
              (POBJECT_TYPE)PsThreadType,
              AccessMode,
              &Handle);
      SeDeleteAccessState(&PassedAccessState);
      ObfDereferenceObject(v20);
      if ( v16 >= 0 )
      {
        *a1 = Handle;
        if ( v26
          && (unsigned int)dword_140E084E0 > 5
          && (qword_140E084F0 & 0x400000000000LL) != 0
          && (qword_140E084F8 & 0x400000000000LL) == qword_140E084F8 )
        {
          v28 = (unsigned int)PsGetThreadId(v20);
          v44 = &v28;
          v45 = 4LL;
          v29 = (int)CycleTime;
          v46 = &v29;
          v47 = 4LL;
          v30 = a2;
          v48 = &v30;
          v49 = 4LL;
          v31 = v17;
          v50 = &v31;
          v51 = 4LL;
          v24 = a5;
          v52 = &v24;
          v53 = 1LL;
          v25 = AccessMode;
          v54 = &v25;
          v55 = 1LL;
          v35 = 0x1000000LL;
          v56 = &v35;
          v57 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E084E0,
            (unsigned __int8 *)byte_14004FBB8,
            0LL,
            0LL,
            9u,
            &v43);
        }
        goto LABEL_29;
      }
      if ( (HandleAttributes & 0x400) == 0 || v16 != -1073741790 || v26 )
        goto LABEL_29;
      v26 = 1;
      v12 = AccessMode;
    }
  }
  LODWORD(CycleTime) = ThreadId[0];
LABEL_29:
  v28 = v16;
  v29 = a2;
  v30 = (int)ThreadId[1];
  v31 = (unsigned int)CycleTime;
  SubjectContext.ClientToken = &v31;
  *(_QWORD *)&SubjectContext.ImpersonationLevel = 4LL;
  SubjectContext.PrimaryToken = &v30;
  SubjectContext.ProcessAuditId = (PVOID)4;
  v39 = &v29;
  v40 = 4LL;
  v41 = &v28;
  v42 = 4LL;
  EtwWrite(EtwApiCallsProvRegHandle, &KERNEL_AUDIT_API_OPENTHREAD, 0LL, 4u, (PEVENT_DATA_DESCRIPTOR)&SubjectContext);
  return (unsigned int)v16;
}
