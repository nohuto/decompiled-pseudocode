/*
 * XREFs of FsRtlpOplockTryPrepForAckTimeout @ 0x140700570
 * Callers:
 *     FsRtlpRequestExclusiveOplock @ 0x1404E552C (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1404E5DD0 (FsRtlpRequestShareableOplock.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1403746E0 (ExAllocateFromNPagedLookasideList.c)
 *     IoIsFileOriginRemote @ 0x1403A5880 (IoIsFileOriginRemote.c)
 *     ExGetPreviousMode @ 0x140449890 (ExGetPreviousMode.c)
 *     KeInitializeTimerEx @ 0x14044DC30 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x140454E30 (KeInitializeDpc.c)
 *     FsRtlpOplockIsSubjectToTimeout @ 0x14057DFAC (FsRtlpOplockIsSubjectToTimeout.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     FsRtlpOplockGetThreadIntegrityLevel @ 0x1406FFB60 (FsRtlpOplockGetThreadIntegrityLevel.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     SePrivilegeCheck @ 0x1409C2C50 (SePrivilegeCheck.c)
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
