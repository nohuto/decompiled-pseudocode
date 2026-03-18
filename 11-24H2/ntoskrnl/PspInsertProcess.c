/*
 * XREFs of PspInsertProcess @ 0x1408A7074
 * Callers:
 *     PsCreateMinimalProcess @ 0x1407797C4 (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x140A1B354 (PspCreateProcess.c)
 *     NtCreateUserProcess @ 0x140ACBA80 (NtCreateUserProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     PspUnlockProcessListExclusive @ 0x1403494CC (PspUnlockProcessListExclusive.c)
 *     PspLockProcessListExclusive @ 0x140349ACC (PspLockProcessListExclusive.c)
 *     PspUnlockProcessExclusive @ 0x140462E74 (PspUnlockProcessExclusive.c)
 *     SepAuditingForSubCategory @ 0x14046D838 (SepAuditingForSubCategory.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x140791F68 (SepAdtIncorporatePerUserPolicy.c)
 *     SeDeleteAccessState @ 0x140840F80 (SeDeleteAccessState.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14084D8F0 (SeCaptureSubjectContext.c)
 *     ObInsertObjectEx @ 0x140857620 (ObInsertObjectEx.c)
 *     SeCreateAccessStateEx @ 0x1408A64E0 (SeCreateAccessStateEx.c)
 *     SeAuditProcessCreation @ 0x1408A73CC (SeAuditProcessCreation.c)
 *     DbgkCopyProcessDebugPort @ 0x1408A781C (DbgkCopyProcessDebugPort.c)
 *     PspImplicitAssignProcessToJob @ 0x1408E7184 (PspImplicitAssignProcessToJob.c)
 *     ObCheckRefTraceProcess @ 0x140A53078 (ObCheckRefTraceProcess.c)
 *     PspInheritSyscallProvider @ 0x140A5611C (PspInheritSyscallProvider.c)
 *     PspValidateJobAffinityState @ 0x140A6DEAC (PspValidateJobAffinityState.c)
 */

__int64 __fastcall PspInsertProcess(
        char *Object,
        __int64 a2,
        int a3,
        int a4,
        HANDLE Handle,
        char a6,
        __int64 a7,
        struct _ACCESS_STATE *a8)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v10; // r10
  int v12; // eax
  PVOID v13; // r14
  _KPROCESS *Process; // r13
  char v15; // al
  int AccessState; // edi
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  char v19; // r14
  PEPROCESS v20; // rdx
  struct _ACCESS_STATE *v21; // rsi
  int v22; // r13d
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  PACCESS_TOKEN PrimaryToken; // r9
  NTSTATUS v29; // eax
  PVOID v30; // [rsp+40h] [rbp-30h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+48h] [rbp-28h] BYREF
  char v32; // [rsp+B0h] [rbp+40h] BYREF
  char v33; // [rsp+B8h] [rbp+48h]
  int v34; // [rsp+C0h] [rbp+50h]
  int v35; // [rsp+C8h] [rbp+58h]

  v35 = a4;
  v34 = a3;
  CurrentThread = KeGetCurrentThread();
  v10 = *((_QWORD *)Object + 96);
  v12 = *((_DWORD *)Object + 116);
  v13 = 0LL;
  v33 = 0;
  Process = CurrentThread->ApcState.Process;
  *(_DWORD *)(v10 + 40) = v12;
  v15 = SepAuditingForSubCategory(134, 1);
  v32 = v15;
  if ( dword_140F047C8 )
  {
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    SeCaptureSubjectContext(&SubjectContext);
    PrimaryToken = SubjectContext.PrimaryToken;
    if ( SubjectContext.ClientToken )
      PrimaryToken = SubjectContext.ClientToken;
    SepAdtIncorporatePerUserPolicy(0x22u, 1, 0, (__int64)PrimaryToken, &v32);
    SeReleaseSubjectContext(&SubjectContext);
    v15 = v32;
  }
  if ( v15 )
    SeAuditProcessCreation((PRKPROCESS)Object);
  if ( !a2
    || (!*(_QWORD *)(a2 + 672) || (AccessState = PspImplicitAssignProcessToJob(*(PVOID *)(a2 + 672)), AccessState >= 0))
    && (AccessState = PspInheritSyscallProvider(Object, a2), AccessState >= 0) )
  {
    PspLockProcessListExclusive((__int64)CurrentThread);
    v17 = (_QWORD *)qword_140F05988;
    v18 = Object + 472;
    if ( *(__int64 **)qword_140F05988 != &PsActiveProcessHead )
      __fastfail(3u);
    *((_QWORD *)Object + 60) = qword_140F05988;
    *v18 = &PsActiveProcessHead;
    *v17 = v18;
    qword_140F05988 = (__int64)(Object + 472);
    *((_QWORD *)Object + 207) = ++PspProcessSequenceNumber;
    PspUnlockProcessListExclusive((__int64)CurrentThread);
    if ( (Process[1].DirectoryTableBase & 0x800000000LL) != 0 )
    {
      AccessState = -1073741558;
    }
    else if ( !Handle
           || (v30 = 0LL,
               v29 = ObReferenceObjectByHandle(
                       Handle,
                       2u,
                       DbgkDebugObjectType,
                       KeGetCurrentThread()->PreviousMode,
                       &v30,
                       0LL),
               v13 = v30,
               AccessState = v29,
               v29 >= 0) )
    {
      AccessState = DbgkCopyProcessDebugPort((PRKPROCESS)Object);
      if ( v13 )
        ObfDereferenceObject(v13);
      if ( AccessState >= 0 )
      {
        if ( v33 && (v35 & 2) != 0 )
          _InterlockedOr((volatile signed __int32 *)Object + 125, 2u);
        v19 = 0;
        if ( !a2 || (v20 = PsInitialSystemProcess, (PEPROCESS)a2 != PsInitialSystemProcess) )
        {
          if ( (a6 & 2) != 0 )
          {
            v20 = (PEPROCESS)Object;
            v19 = 1;
          }
          else
          {
            v20 = Process;
          }
        }
        v21 = a8;
        v22 = v34;
        AccessState = SeCreateAccessStateEx(
                        0LL,
                        (__int64)v20,
                        a8,
                        &a8[1].OperationID,
                        v34,
                        (_DWORD *)PsProcessType + 19);
        if ( AccessState >= 0 )
        {
          ObfReferenceObjectWithTag(Object, 0x72437350u);
          AccessState = ObInsertObjectEx((struct _FILE_OBJECT *)Object, v21, v22, 0, v19, 0LL, 0LL);
          if ( AccessState >= 0 )
          {
            ObfDereferenceObjectWithTag(Object, 0x72437350u);
            v26 = *((_QWORD *)Object + 84);
            if ( !v26 )
            {
              _InterlockedOr((volatile signed __int32 *)Object + 125, 0x4000000u);
LABEL_23:
              ObCheckRefTraceProcess(Object);
              if ( (a6 & 1) != 0 )
                PspUnlockProcessExclusive((__int64)Object);
              return 0LL;
            }
            AccessState = PspValidateJobAffinityState(v26, Object);
            if ( AccessState >= 0 )
              goto LABEL_23;
          }
          SeDeleteAccessState((__int64)v21, v23, v24, v25);
        }
      }
    }
  }
  if ( (a6 & 1) != 0 )
    PspUnlockProcessExclusive((__int64)Object);
  return (unsigned int)AccessState;
}
