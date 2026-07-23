/*
 * XREFs of PspInsertProcess @ 0x1408FD2CC
 * Callers:
 *     PsCreateMinimalProcess @ 0x1407798C4 (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x1409F98C4 (PspCreateProcess.c)
 *     NtCreateUserProcess @ 0x140AC9930 (NtCreateUserProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     PspUnlockProcessListExclusive @ 0x1403C2F0C (PspUnlockProcessListExclusive.c)
 *     PspLockProcessListExclusive @ 0x1403C350C (PspLockProcessListExclusive.c)
 *     PspUnlockProcessExclusive @ 0x140458484 (PspUnlockProcessExclusive.c)
 *     SepAuditingForSubCategory @ 0x1404683D8 (SepAuditingForSubCategory.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x140791F38 (SepAdtIncorporatePerUserPolicy.c)
 *     SeDeleteAccessState @ 0x14083D240 (SeDeleteAccessState.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     PspImplicitAssignProcessToJob @ 0x1408D79EC (PspImplicitAssignProcessToJob.c)
 *     SeCreateAccessStateEx @ 0x1408FCAF0 (SeCreateAccessStateEx.c)
 *     SeAuditProcessCreation @ 0x1408FD624 (SeAuditProcessCreation.c)
 *     DbgkCopyProcessDebugPort @ 0x1408FDA74 (DbgkCopyProcessDebugPort.c)
 *     ObCheckRefTraceProcess @ 0x140A4B068 (ObCheckRefTraceProcess.c)
 *     PspInheritSyscallProvider @ 0x140A4E06C (PspInheritSyscallProvider.c)
 *     PspValidateJobAffinityState @ 0x140A673AC (PspValidateJobAffinityState.c)
 */

__int64 __fastcall PspInsertProcess(
        char *Object,
        struct _KPROCESS *a2,
        int a3,
        unsigned int a4,
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
  char v16; // al
  int AccessState; // edi
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  char v20; // r14
  PEPROCESS v21; // rdx
  struct _ACCESS_STATE *v22; // rsi
  int v23; // r13d
  __int64 v24; // rcx
  PACCESS_TOKEN PrimaryToken; // r9
  NTSTATUS v27; // eax
  PVOID v28; // [rsp+40h] [rbp-30h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+48h] [rbp-28h] BYREF
  char v30; // [rsp+B0h] [rbp+40h] BYREF
  char v31; // [rsp+B8h] [rbp+48h]
  int v32; // [rsp+C0h] [rbp+50h]
  unsigned int v33; // [rsp+C8h] [rbp+58h]

  v33 = a4;
  v32 = a3;
  CurrentThread = KeGetCurrentThread();
  v10 = *((_QWORD *)Object + 96);
  v12 = *((_DWORD *)Object + 116);
  v13 = 0LL;
  v31 = 0;
  Process = CurrentThread->ApcState.Process;
  *(_DWORD *)(v10 + 40) = v12;
  v16 = SepAuditingForSubCategory(134, 1);
  v30 = v16;
  if ( dword_140F049E8 )
  {
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    SeCaptureSubjectContext(&SubjectContext);
    PrimaryToken = SubjectContext.PrimaryToken;
    if ( SubjectContext.ClientToken )
      PrimaryToken = SubjectContext.ClientToken;
    SepAdtIncorporatePerUserPolicy(0x22u, 1, 0, (__int64)PrimaryToken, &v30);
    SeReleaseSubjectContext(&SubjectContext);
    v16 = v30;
  }
  if ( v16 )
    SeAuditProcessCreation((PRKPROCESS)Object);
  if ( !a2
    || (!a2[1].Padding[3]
     || (AccessState = PspImplicitAssignProcessToJob((_DWORD *)a2[1].Padding[3], (__int64)Object, a4), AccessState >= 0))
    && (AccessState = PspInheritSyscallProvider(Object, a2), AccessState >= 0) )
  {
    PspLockProcessListExclusive((__int64)CurrentThread);
    v18 = (_QWORD *)qword_140F05BD8;
    v19 = Object + 472;
    if ( *(__int64 **)qword_140F05BD8 != &PsActiveProcessHead )
      __fastfail(3u);
    *((_QWORD *)Object + 60) = qword_140F05BD8;
    *v19 = &PsActiveProcessHead;
    *v18 = v19;
    qword_140F05BD8 = (__int64)(Object + 472);
    *((_QWORD *)Object + 207) = ++PspProcessSequenceNumber;
    PspUnlockProcessListExclusive((__int64)CurrentThread);
    if ( (Process[1].DirectoryTableBase & 0x800000000LL) != 0 )
    {
      AccessState = -1073741558;
    }
    else if ( !Handle
           || (v28 = 0LL,
               v27 = ObReferenceObjectByHandle(
                       Handle,
                       2u,
                       DbgkDebugObjectType,
                       KeGetCurrentThread()->PreviousMode,
                       &v28,
                       0LL),
               v13 = v28,
               AccessState = v27,
               v27 >= 0) )
    {
      AccessState = DbgkCopyProcessDebugPort((PRKPROCESS)Object);
      if ( v13 )
        ObfDereferenceObject(v13);
      if ( AccessState >= 0 )
      {
        if ( v31 && (v33 & 2) != 0 )
          _InterlockedOr((volatile signed __int32 *)Object + 125, 2u);
        v20 = 0;
        if ( !a2 || (v21 = PsInitialSystemProcess, a2 != PsInitialSystemProcess) )
        {
          if ( (a6 & 2) != 0 )
          {
            v21 = (PEPROCESS)Object;
            v20 = 1;
          }
          else
          {
            v21 = Process;
          }
        }
        v22 = a8;
        v23 = v32;
        AccessState = SeCreateAccessStateEx(
                        0LL,
                        (__int64)v21,
                        a8,
                        &a8[1].OperationID,
                        v32,
                        (_DWORD *)PsProcessType + 19);
        if ( AccessState >= 0 )
        {
          ObfReferenceObjectWithTag(Object, 0x72437350u);
          AccessState = ObInsertObjectEx((struct _FILE_OBJECT *)Object, v22, v23, 0, v20, 0LL, 0LL);
          if ( AccessState >= 0 )
          {
            ObfDereferenceObjectWithTag(Object, 0x72437350u);
            v24 = *((_QWORD *)Object + 84);
            if ( !v24 )
            {
              _InterlockedOr((volatile signed __int32 *)Object + 125, 0x4000000u);
LABEL_23:
              ObCheckRefTraceProcess(Object);
              if ( (a6 & 1) != 0 )
                PspUnlockProcessExclusive((__int64)Object);
              return 0LL;
            }
            AccessState = PspValidateJobAffinityState(v24, Object);
            if ( AccessState >= 0 )
              goto LABEL_23;
          }
          SeDeleteAccessState((__int64)v22);
        }
      }
    }
  }
  if ( (a6 & 1) != 0 )
    PspUnlockProcessExclusive((__int64)Object);
  return (unsigned int)AccessState;
}
