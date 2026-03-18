/*
 * XREFs of PspInsertProcess @ 0x1408F3D10
 * Callers:
 *     PsCreateMinimalProcess @ 0x140769B14 (PsCreateMinimalProcess.c)
 *     NtCreateUserProcess @ 0x1409BC1D0 (NtCreateUserProcess.c)
 *     PspCreateProcess @ 0x140A8F360 (PspCreateProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     PspUnlockProcessListExclusive @ 0x1403D6E4C (PspUnlockProcessListExclusive.c)
 *     PspLockProcessListExclusive @ 0x1403D744C (PspLockProcessListExclusive.c)
 *     PspUnlockProcessExclusive @ 0x1403D76DC (PspUnlockProcessExclusive.c)
 *     SepAuditingForSubCategory @ 0x14046EFD4 (SepAuditingForSubCategory.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x140782CA8 (SepAdtIncorporatePerUserPolicy.c)
 *     SeDeleteAccessState @ 0x140844A10 (SeDeleteAccessState.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 *     PspImplicitAssignProcessToJob @ 0x1408D7F4C (PspImplicitAssignProcessToJob.c)
 *     SeCreateAccessStateEx @ 0x1408F3A90 (SeCreateAccessStateEx.c)
 *     DbgkCopyProcessDebugPort @ 0x1408F4068 (DbgkCopyProcessDebugPort.c)
 *     SeAuditProcessCreation @ 0x1408F435C (SeAuditProcessCreation.c)
 *     ObCheckRefTraceProcess @ 0x140A4FAF4 (ObCheckRefTraceProcess.c)
 *     PspInheritSyscallProvider @ 0x140A517A8 (PspInheritSyscallProvider.c)
 *     PspValidateJobAffinityState @ 0x140A6C688 (PspValidateJobAffinityState.c)
 */

__int64 __fastcall PspInsertProcess(
        char *Object,
        struct _KPROCESS *a2,
        int a3,
        unsigned int a4,
        HANDLE Handle,
        char a6,
        __int64 a7,
        PACCESS_STATE AccessState)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v10; // r10
  int v12; // eax
  PVOID v13; // r14
  _KPROCESS *Process; // r13
  char v16; // al
  int inserted; // edi
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
  if ( dword_140F04368 )
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
     || (inserted = PspImplicitAssignProcessToJob((_DWORD *)a2[1].Padding[3], (__int64)Object, a4), inserted >= 0))
    && (inserted = PspInheritSyscallProvider(Object, a2), inserted >= 0) )
  {
    PspLockProcessListExclusive((__int64)CurrentThread);
    v18 = (_QWORD *)qword_140F054D8;
    v19 = Object + 472;
    if ( *(__int64 **)qword_140F054D8 != &PsActiveProcessHead )
      __fastfail(3u);
    *((_QWORD *)Object + 60) = qword_140F054D8;
    *v19 = &PsActiveProcessHead;
    *v18 = v19;
    qword_140F054D8 = (__int64)(Object + 472);
    *((_QWORD *)Object + 207) = ++PspProcessSequenceNumber;
    PspUnlockProcessListExclusive((__int64)CurrentThread);
    if ( (Process[1].DirectoryTableBase & 0x800000000LL) != 0 )
    {
      inserted = -1073741558;
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
               inserted = v27,
               v27 >= 0) )
    {
      inserted = DbgkCopyProcessDebugPort((PRKPROCESS)Object);
      if ( v13 )
        ObfDereferenceObject(v13);
      if ( inserted >= 0 )
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
        v22 = AccessState;
        v23 = v32;
        inserted = SeCreateAccessStateEx(
                     0LL,
                     (__int64)v21,
                     AccessState,
                     &AccessState[1].OperationID,
                     v32,
                     (_DWORD *)PsProcessType + 19);
        if ( inserted >= 0 )
        {
          ObfReferenceObjectWithTag(Object, 0x72437350u);
          inserted = ObInsertObjectEx(Object, v22, v23, 0, v20, 0LL, 0LL);
          if ( inserted >= 0 )
          {
            ObfDereferenceObjectWithTag(Object, 0x72437350u);
            v24 = *((_QWORD *)Object + 84);
            if ( !v24 )
            {
              _InterlockedOr((volatile signed __int32 *)Object + 125, 0x4000000u);
LABEL_23:
              ObCheckRefTraceProcess(Object);
              if ( (a6 & 1) != 0 )
                PspUnlockProcessExclusive((__int64)Object, (__int64)CurrentThread);
              return 0LL;
            }
            inserted = PspValidateJobAffinityState(v24, Object);
            if ( inserted >= 0 )
              goto LABEL_23;
          }
          SeDeleteAccessState((__int64)v22);
        }
      }
    }
  }
  if ( (a6 & 1) != 0 )
    PspUnlockProcessExclusive((__int64)Object, (__int64)CurrentThread);
  return (unsigned int)inserted;
}
