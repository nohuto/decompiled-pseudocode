/*
 * XREFs of FsRtlpOplockTryPrepForAckTimeout @ 0x140709FE4
 * Callers:
 *     FsRtlpRequestExclusiveOplock @ 0x1404DAE94 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1404DB6D0 (FsRtlpRequestShareableOplock.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1402E2DD0 (ExAllocateFromNPagedLookasideList.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     IoIsFileOriginRemote @ 0x14040C220 (IoIsFileOriginRemote.c)
 *     ExGetPreviousMode @ 0x14043D9E0 (ExGetPreviousMode.c)
 *     KeInitializeTimerEx @ 0x1404449F0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x14044A220 (KeInitializeDpc.c)
 *     FsRtlpOplockIsSubjectToTimeout @ 0x14057EADC (FsRtlpOplockIsSubjectToTimeout.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     FsRtlpOplockGetThreadIntegrityLevel @ 0x1407095D4 (FsRtlpOplockGetThreadIntegrityLevel.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     SePrivilegeCheck @ 0x14099A020 (SePrivilegeCheck.c)
 */

void __fastcall FsRtlpOplockTryPrepForAckTimeout(
        __int64 a1,
        struct _FILE_OBJECT *a2,
        __int64 a3,
        __int64 a4,
        PVOID *a5)
{
  KPROCESSOR_MODE PreviousMode; // bl
  bool v10; // zf
  _BYTE *v11; // rax
  BOOLEAN v12; // bl
  PVOID v13; // rax
  _QWORD *v14; // rax
  PVOID v15[2]; // [rsp+20h] [rbp-50h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-40h] BYREF
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+50h] [rbp-20h] BYREF

  LODWORD(v15[0]) = 0;
  if ( *(_DWORD *)(a4 + 8) )
    goto LABEL_14;
  *(_DWORD *)(a4 + 8) = 0x80000000;
  if ( IoIsFileOriginRemote(a2) )
  {
    *(_DWORD *)(a4 + 8) = -2147483646;
    return;
  }
  PreviousMode = 1;
  if ( a3 )
  {
    v11 = *(_BYTE **)(a3 + 184);
    if ( *v11 != 13 || *(_BYTE *)(a3 + 64) )
      goto LABEL_10;
    v10 = v11[1] == 4;
  }
  else
  {
    PreviousMode = ExGetPreviousMode();
    v10 = PreviousMode == 0;
  }
  if ( v10 )
  {
LABEL_11:
    *(_DWORD *)(a4 + 8) |= 4u;
    return;
  }
LABEL_10:
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  RequiredPrivileges.Privilege[0].Attributes = 0;
  v15[1] = (PVOID)18;
  RequiredPrivileges.Privilege[0].Luid = (LUID)18LL;
  RequiredPrivileges.PrivilegeCount = 1;
  RequiredPrivileges.Control = 1;
  v12 = SePrivilegeCheck(&RequiredPrivileges, &SubjectContext, PreviousMode);
  SeReleaseSubjectContext(&SubjectContext);
  if ( v12 )
    goto LABEL_11;
  if ( !FsRtlpOplockGetThreadIntegrityLevel((__int64)KeGetCurrentThread(), v15) )
  {
    *(_DWORD *)(a4 + 8) |= 1u;
    return;
  }
LABEL_14:
  if ( FsRtlpOplockIsSubjectToTimeout(a4) && !*a5 )
  {
    v13 = ExAllocateFromNPagedLookasideList(&g_OplockAckTimeoutLookaside);
    *a5 = v13;
    memset_0(v13, 0, 0xB8uLL);
    *((_QWORD *)*a5 + 20) = a1;
    *((_QWORD *)*a5 + 21) = a2;
    PsReferenceSiloContext(*((void **)*a5 + 21));
    v14 = *a5;
    v14[16] = 0LL;
    v14[18] = FsRtlpOplockAckTimeoutWorker;
    v14[19] = v14;
    KeInitializeDpc((PRKDPC)*a5 + 1, (PKDEFERRED_ROUTINE)PfSnTracingStateDpcRoutine, *a5);
    KeInitializeTimerEx((PKTIMER)*a5, NotificationTimer);
    *((_DWORD *)*a5 + 44) = v15[0];
  }
}
