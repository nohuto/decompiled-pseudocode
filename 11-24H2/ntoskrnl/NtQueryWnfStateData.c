/*
 * XREFs of NtQueryWnfStateData @ 0x140901E30
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x14020DE80 (ExfReleaseRundownProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquireRundownProtection @ 0x1402F60C0 (ExfAcquireRundownProtection.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     SeAccessCheck @ 0x1403B6900 (SeAccessCheck.c)
 *     PsGetSessionById @ 0x1403C2E70 (PsGetSessionById.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406B6C90 (RtlCopyVolatileMemory.c)
 *     ExpWnfLookupPermanentName @ 0x140833714 (ExpWnfLookupPermanentName.c)
 *     ExpWnfCreateNameInstance @ 0x140835DA0 (ExpWnfCreateNameInstance.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     SeCaptureSid @ 0x140869508 (SeCaptureSid.c)
 *     ExRaiseAccessViolation @ 0x1408BEAA0 (ExRaiseAccessViolation.c)
 *     ExpWnfReadStateData @ 0x140901C9C (ExpWnfReadStateData.c)
 *     ExpWnfResolveScopeInstance @ 0x1409032C0 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x140904A84 (ExpWnfCheckCrossScopeAccess.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x1409D92F0 (ExpWnfValidatePubSubPreconditions.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtQueryWnfStateData(
        PCWNF_STATE_NAME StateName,
        PCWNF_TYPE_ID TypeId,
        const void *ExplicitScope,
        PWNF_CHANGE_STAMP ChangeStamp,
        PVOID Buffer,
        PULONG BufferSize)
{
  PWNF_CHANGE_STAMP v6; // r10
  PULONG v9; // r9
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r13
  __int64 v12; // rsi
  WNF_STATE_NAME v13; // rbx
  unsigned __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  _BOOL8 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // edx
  __int64 v22; // rcx
  PVOID v23; // r15
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rdx
  int v27; // edi
  int v28; // eax
  PVOID *v29; // rcx
  unsigned int v30; // ecx
  __int64 v31; // rdx
  NTSTATUS v32; // r14d
  struct _KTHREAD *v33; // r8
  PEPROCESS Process; // rsi
  signed __int64 *v35; // rbx
  char *v36; // rdi
  _QWORD *v37; // rdx
  struct _EX_RUNDOWN_REF *v38; // rbx
  unsigned __int64 v39; // rtt
  _QWORD *Count; // rcx
  NTSTATUS v41; // eax
  struct _EX_RUNDOWN_REF *v42; // rcx
  unsigned __int64 v43; // rtt
  struct _EX_RUNDOWN_REF *v44; // rcx
  unsigned __int64 v45; // rtt
  PULONG v47; // rax
  PVOID v48; // rcx
  ULONG v49; // edx
  __int64 v50; // r8
  int v51; // eax
  void *Ptr; // rbx
  __int64 v53; // rdi
  int PreviouslyGrantedAccess; // [rsp+20h] [rbp-148h]
  NTSTATUS StateData; // [rsp+50h] [rbp-118h]
  int v56; // [rsp+5Ch] [rbp-10Ch]
  unsigned int v57; // [rsp+60h] [rbp-108h]
  unsigned __int64 v58; // [rsp+70h] [rbp-F8h]
  struct _EX_RUNDOWN_REF *v59; // [rsp+78h] [rbp-F0h] BYREF
  int v60[2]; // [rsp+80h] [rbp-E8h] BYREF
  NTSTATUS AccessStatus; // [rsp+88h] [rbp-E0h] BYREF
  PSID Sid; // [rsp+90h] [rbp-D8h]
  PVOID P; // [rsp+98h] [rbp-D0h] BYREF
  PVOID Object[2]; // [rsp+A0h] [rbp-C8h] BYREF
  PULONG v65; // [rsp+B0h] [rbp-B8h]
  PWNF_CHANGE_STAMP v66; // [rsp+B8h] [rbp-B0h]
  int v67; // [rsp+C0h] [rbp-A8h]
  ACCESS_MASK GrantedAccess; // [rsp+C4h] [rbp-A4h] BYREF
  WNF_STATE_NAME v69; // [rsp+C8h] [rbp-A0h] BYREF
  PCWNF_TYPE_ID v70; // [rsp+D0h] [rbp-98h]
  unsigned __int64 v71; // [rsp+D8h] [rbp-90h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+F0h] [rbp-78h] BYREF
  __int128 v73; // [rsp+110h] [rbp-58h] BYREF

  v6 = ChangeStamp;
  v66 = ChangeStamp;
  v9 = BufferSize;
  v65 = BufferSize;
  v73 = 0LL;
  Sid = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v60 = 0LL;
  v59 = 0LL;
  v56 = 0;
  *(_OWORD *)Object = 0LL;
  v70 = TypeId;
  v69 = 0LL;
  v12 = 0x7FFFFFFF0000LL;
  if ( PreviousMode )
  {
    v31 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)StateName < 0x7FFFFFFF0000LL )
      v31 = (__int64)StateName;
    RtlCopyVolatileMemory(&v69, (const void *)v31, 8uLL);
    v13 = v69;
    v9 = v65;
    v6 = v66;
  }
  else
  {
    v13 = *StateName;
    v69 = *StateName;
  }
  v14 = *(_QWORD *)&v13 ^ 0x41C64E6DA3BC0074LL;
  v58 = v14;
  if ( (v14 & 0xF) != 1
    || (v15 = (v14 >> 6) & 0xF, v16 = (v14 >> 4) & 3, v71 = v14 >> 10, v17 = (v14 & 0x400) != 0, (_DWORD)v16 != 3)
    && (_DWORD)v16
    && (unsigned int)(v16 - 1) >= 2
    || (_DWORD)v15 != 5 && (unsigned int)v15 > 2 && (unsigned int)(v15 - 3) > 1
    || (v14 & 0x400) != 0 && (((v14 >> 6) & 9) != 0 || (_DWORD)v15 == 6) )
  {
    StateData = -1073741811;
    goto LABEL_83;
  }
  if ( PreviousMode )
  {
    if ( TypeId )
    {
      v18 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)TypeId < 0x7FFFFFFF0000LL )
        v18 = (__int64)TypeId;
      RtlCopyVolatileMemory(&v73, (const void *)v18, 0x10uLL);
      v70 = (PCWNF_TYPE_ID)&v73;
      v9 = v65;
      v6 = v66;
    }
    v19 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v6 < 0x7FFFFFFF0000LL )
      v19 = (__int64)v6;
    *(_DWORD *)v19 = *(_DWORD *)v19;
    v20 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v9 < 0x7FFFFFFF0000LL )
      v20 = (__int64)v9;
    v21 = *(_DWORD *)v20;
    v57 = *(_DWORD *)v20;
    v22 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v9 < 0x7FFFFFFF0000LL )
      v22 = (__int64)v9;
    *(_DWORD *)v22 = *(_DWORD *)v22;
    v23 = Buffer;
    if ( v21 )
    {
      v24 = (unsigned __int64)Buffer;
      v25 = (unsigned __int64)Buffer + v21 - 1;
      if ( (unsigned __int64)Buffer > v25 || v25 >= 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v26 = (v25 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v24 = *(_BYTE *)v24;
        v24 = (v24 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v24 != v26 );
    }
  }
  else
  {
    v57 = *v9;
    v23 = Buffer;
  }
  v67 = (v14 >> 4) & 3;
  v27 = (v14 >> 6) & 0xF;
  v56 = v27;
  if ( !ExplicitScope )
  {
    Sid = 0LL;
    goto LABEL_59;
  }
  switch ( v27 )
  {
    case 3:
      v28 = ObpReferenceObjectByHandleWithTag(
              (ULONG_PTR)ExplicitScope,
              0,
              (__int64)PsProcessType,
              PreviousMode,
              0x20666E57u,
              Object,
              0LL,
              0LL);
      if ( v28 < 0 )
        break;
      v29 = Object;
      goto LABEL_28;
    case 0:
LABEL_42:
      v28 = -1073741811;
      break;
    case 1:
      if ( PreviousMode )
      {
        if ( (unsigned __int64)ExplicitScope < 0x7FFFFFFF0000LL )
          v12 = (__int64)ExplicitScope;
        v30 = *(_DWORD *)v12;
        LODWORD(Object[1]) = *(_DWORD *)v12;
      }
      else
      {
        v30 = *(_DWORD *)ExplicitScope;
        LODWORD(Object[1]) = *(_DWORD *)ExplicitScope;
      }
      Object[0] = (PVOID)PsGetSessionById(v30);
      if ( Object[0] )
      {
        Sid = &Object[1];
        v28 = 0;
        break;
      }
      goto LABEL_42;
    case 2:
      v28 = SeCaptureSid(ExplicitScope, PreviousMode, v17, (__int64)v9, PreviouslyGrantedAccess, 0, Object);
      if ( v28 >= 0 )
      {
        v29 = (PVOID *)Object[0];
LABEL_28:
        Sid = v29;
      }
      break;
    default:
      v28 = -1073741811;
      break;
  }
  StateData = v28;
  if ( v28 < 0 )
    goto LABEL_83;
LABEL_59:
  if ( PreviousMode )
  {
    v32 = 0;
    if ( ExplicitScope )
    {
      StateData = ExpWnfCheckCrossScopeAccess(v14);
      if ( StateData < 0 )
        goto LABEL_83;
    }
  }
  else
  {
    v32 = 1;
  }
  if ( PreviousMode )
  {
    v33 = KeGetCurrentThread();
    Process = v33->ApcState.Process;
  }
  else
  {
    LODWORD(v33) = 0;
    Process = PsInitialSystemProcess;
  }
  StateData = ExpWnfResolveScopeInstance((int)v60, (int)Process, (int)v33, v27, Sid);
  if ( StateData >= 0 )
  {
    v35 = (signed __int64 *)(*(_QWORD *)v60 + 48LL);
    v36 = (char *)KeAbPreAcquire(*(_QWORD *)v60 + 48LL, 0LL);
    if ( _InterlockedCompareExchange64(v35, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v35, 0, v36, (__int64)v35);
    if ( v36 )
      v36[10] = 1;
    v37 = *(_QWORD **)(*(_QWORD *)v60 + 56LL);
    if ( !v37 )
      goto LABEL_79;
    do
    {
      if ( v58 < v37[3] )
      {
        v37 = (_QWORD *)*v37;
      }
      else
      {
        if ( v58 <= v37[3] )
          break;
        v37 = (_QWORD *)v37[1];
      }
    }
    while ( v37 );
    if ( v37 )
    {
      v38 = (struct _EX_RUNDOWN_REF *)(v37 - 2);
      if ( v37 != (_QWORD *)16 )
      {
        _m_prefetchw(&v38[1]);
        v39 = v38[1].Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v39 != _InterlockedCompareExchange64((volatile signed __int64 *)&v38[1], v39 + 2, v39)
          && !ExfAcquireRundownProtection(v38 + 1) )
        {
          v38 = 0LL;
        }
      }
    }
    else
    {
LABEL_79:
      v38 = 0LL;
    }
    v53 = *(_QWORD *)v60;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v60 + 48LL), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v53 + 48));
    KeAbPostRelease(v53 + 48);
    if ( v38 )
    {
      v59 = v38;
      v51 = 0;
    }
    else
    {
      v51 = -1073741772;
    }
    StateData = v51;
    if ( v51 == -1073741772 && v67 != 3 )
    {
      StateData = ExpWnfLookupPermanentName(v58, (PSECURITY_DESCRIPTOR **)&P);
      if ( StateData < 0 )
        goto LABEL_83;
      StateData = ExpWnfValidatePubSubPreconditions(1u, v32);
      if ( StateData < 0 )
        goto LABEL_83;
      if ( v56 == 5 || (v71 & 1) != 0 )
      {
        StateData = ExpWnfCreateNameInstance(*(__int64 *)v60, v58, (__int64)P, (unsigned __int64)Process, &v59);
        ExFreePoolWithTag(P, 0x20666E57u);
        P = 0LL;
        if ( StateData < 0 )
          goto LABEL_83;
      }
LABEL_98:
      v47 = v65;
      if ( v59 )
      {
        StateData = ExpWnfReadStateData((__int64)v59, v66, v23, v57, v65);
      }
      else
      {
        *v66 = 0;
        *v47 = 0;
        StateData = 0;
      }
      goto LABEL_83;
    }
    if ( v51 < 0 )
      goto LABEL_83;
    if ( v32 )
      goto LABEL_80;
    Ptr = v59[9].Ptr;
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    GrantedAccess = 0;
    AccessStatus = 0;
    SeCaptureSubjectContext(&SubjectContext);
    SeAccessCheck(
      Ptr,
      &SubjectContext,
      0,
      1u,
      0,
      0LL,
      (PGENERIC_MAPPING)&ExpWnfNotificationMapping,
      1,
      &GrantedAccess,
      &AccessStatus);
    SeReleaseSubjectContext(&SubjectContext);
    v41 = AccessStatus;
    if ( AccessStatus >= 0 )
    {
LABEL_80:
      Count = (_QWORD *)v59[8].Count;
      if ( !Count )
      {
LABEL_81:
        v41 = 0;
        goto LABEL_82;
      }
      if ( v70 )
      {
        v50 = *Count - *(_QWORD *)&v70->TypeId.Data1;
        if ( *Count == *(_QWORD *)&v70->TypeId.Data1 )
          v50 = Count[1] - *(_QWORD *)v70->TypeId.Data4;
        if ( !v50 )
          goto LABEL_81;
        v41 = -1073741811;
      }
      else
      {
        v41 = -1073741811;
      }
    }
LABEL_82:
    StateData = v41;
    if ( v41 < 0 )
      goto LABEL_83;
    goto LABEL_98;
  }
LABEL_83:
  if ( v59 )
  {
    v42 = v59 + 1;
    _m_prefetchw(&v59[1]);
    v43 = v42->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v43 != _InterlockedCompareExchange64((volatile signed __int64 *)v42, v43 - 2, v43) )
      ExfReleaseRundownProtection(v42);
  }
  if ( *(_QWORD *)v60 )
  {
    v44 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)v60 + 8LL);
    _m_prefetchw((const void *)(*(_QWORD *)v60 + 8LL));
    v45 = v44->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v45 != _InterlockedCompareExchange64((volatile signed __int64 *)v44, v45 - 2, v45) )
      ExfReleaseRundownProtection(v44);
  }
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  KeLeaveCriticalRegionThread();
  if ( v56 )
  {
    switch ( v56 )
    {
      case 1:
        v48 = Object[0];
        if ( !Object[0] )
          return StateData;
        v49 = 2035381072;
        break;
      case 2:
        if ( Object[0] && PreviousMode == 1 )
          ExFreePoolWithTag(Object[0], 0);
        return StateData;
      case 3:
        v48 = Object[0];
        if ( !Object[0] )
          return StateData;
        v49 = 543583831;
        break;
      default:
        return StateData;
    }
    ObfDereferenceObjectWithTag(v48, v49);
  }
  return StateData;
}
