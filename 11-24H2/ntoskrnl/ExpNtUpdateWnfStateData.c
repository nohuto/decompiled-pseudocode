/*
 * XREFs of ExpNtUpdateWnfStateData @ 0x1408AC580
 * Callers:
 *     ExWnfCrossVmCallback @ 0x1407BF750 (ExWnfCrossVmCallback.c)
 *     NtUpdateWnfStateData @ 0x1408AC540 (NtUpdateWnfStateData.c)
 *     PfSnPowerBoost @ 0x1409526A4 (PfSnPowerBoost.c)
 *     PfSnPowerBoostUpdate @ 0x140A7DBD8 (PfSnPowerBoostUpdate.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x1402456A0 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x140247210 (ExfAcquireRundownProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     PsGetSessionById @ 0x140349430 (PsGetSessionById.c)
 *     SeAccessCheck @ 0x14035A5B0 (SeAccessCheck.c)
 *     ExGetExtensionTable @ 0x1403AA530 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x14044FE80 (ExReleaseExtensionTable.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x1406B5CF0 (RtlCopyVolatileMemory.c)
 *     ExpWnfCreateNameInstance @ 0x140837E90 (ExpWnfCreateNameInstance.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14084D8F0 (SeCaptureSubjectContext.c)
 *     ExpWnfLookupPermanentName @ 0x14085ACA8 (ExpWnfLookupPermanentName.c)
 *     SeCaptureSid @ 0x140864EF8 (SeCaptureSid.c)
 *     ExpWnfResolveScopeInstance @ 0x1408AD060 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfWriteStateData @ 0x1408AD580 (ExpWnfWriteStateData.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1408ADF30 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1408AE824 (ExpWnfCheckCrossScopeAccess.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x1409DF540 (ExpWnfValidatePubSubPreconditions.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpNtUpdateWnfStateData(
        __int64 *Src,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned int *Srca,
        unsigned int a6,
        int a7,
        int a8)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r12
  __int64 v11; // rsi
  __int64 v12; // rbx
  unsigned __int64 v13; // rbx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // edi
  int v17; // eax
  PVOID *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned int v21; // ecx
  struct _KTHREAD *v22; // rsi
  PEPROCESS Process; // r14
  signed __int64 *v24; // rbx
  _QWORD *v25; // rdi
  _QWORD *v26; // rdx
  struct _EX_RUNDOWN_REF *v27; // rbx
  unsigned __int64 v28; // rtt
  __int64 v29; // rdi
  int v30; // eax
  void *Ptr; // rbx
  NTSTATUS v32; // eax
  unsigned int v33; // r15d
  struct _EX_RUNDOWN_REF *v34; // r15
  unsigned __int64 ExtensionTable; // r14
  int v36; // ebx
  _QWORD *Count; // rcx
  unsigned __int64 v38; // rbx
  struct _EX_RUNDOWN_REF *v39; // rcx
  unsigned __int64 v40; // rtt
  struct _EX_RUNDOWN_REF *v41; // rcx
  unsigned __int64 v42; // rtt
  PVOID v44; // rcx
  ULONG v45; // edx
  __int64 v46; // r8
  PVOID v47; // rsi
  struct _EX_RUNDOWN_REF *v48; // rbx
  _QWORD *v49; // rdi
  unsigned int v50; // r12d
  struct _EX_RUNDOWN_REF *v51; // r15
  int PreviouslyGrantedAccess; // [rsp+20h] [rbp-148h]
  unsigned int Privileges; // [rsp+28h] [rbp-140h]
  int v54; // [rsp+50h] [rbp-118h]
  char v55; // [rsp+54h] [rbp-114h]
  int v57; // [rsp+64h] [rbp-104h]
  unsigned __int64 v58; // [rsp+68h] [rbp-100h]
  struct _EX_RUNDOWN_REF *v59; // [rsp+70h] [rbp-F8h] BYREF
  PEPROCESS v60; // [rsp+78h] [rbp-F0h]
  NTSTATUS v61; // [rsp+80h] [rbp-E8h]
  PSID Sid; // [rsp+88h] [rbp-E0h]
  int v63[2]; // [rsp+90h] [rbp-D8h] BYREF
  NTSTATUS AccessStatus; // [rsp+98h] [rbp-D0h] BYREF
  PVOID Object[2]; // [rsp+A0h] [rbp-C8h] BYREF
  PVOID P; // [rsp+B0h] [rbp-B8h] BYREF
  int v67; // [rsp+B8h] [rbp-B0h]
  ACCESS_MASK GrantedAccess; // [rsp+BCh] [rbp-ACh] BYREF
  __int64 v69; // [rsp+C0h] [rbp-A8h] BYREF
  __int128 *v70; // [rsp+C8h] [rbp-A0h]
  __int64 v71; // [rsp+D0h] [rbp-98h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+E8h] [rbp-80h] BYREF
  __int64 v73; // [rsp+108h] [rbp-60h] BYREF
  __int64 v74; // [rsp+110h] [rbp-58h] BYREF
  __int128 v75; // [rsp+118h] [rbp-50h] BYREF

  v71 = a2;
  v75 = 0LL;
  Sid = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v55 = PreviousMode;
  P = 0LL;
  *(_QWORD *)v63 = 0LL;
  v59 = 0LL;
  v57 = 0;
  *(_OWORD *)Object = 0LL;
  v70 = (__int128 *)a4;
  v69 = 0LL;
  v11 = 0x7FFFFFFF0000LL;
  if ( PreviousMode )
  {
    v19 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Src < 0x7FFFFFFF0000LL )
      v19 = (__int64)Src;
    RtlCopyVolatileMemory(&v69, (const void *)v19, 8uLL);
    v12 = v69;
  }
  else
  {
    v12 = *Src;
    v69 = *Src;
  }
  v13 = v12 ^ 0x41C64E6DA3BC0074LL;
  v58 = v13;
  if ( (v13 & 0xF) != 1
    || (v14 = (v13 >> 6) & 0xF, v15 = (v13 >> 4) & 3, (_DWORD)v15 != 3)
    && (_DWORD)v15
    && (v15 = (unsigned int)(v15 - 1), (unsigned int)v15 >= 2)
    || (_DWORD)v14 != 5
    && (v15 = (v13 >> 6) & 0xF, (_DWORD)v14)
    && (v15 = (unsigned int)(v14 - 1), (_DWORD)v14 != 1)
    && (v15 = (unsigned int)(v14 - 2), (_DWORD)v14 != 2)
    && (v15 = (unsigned int)(v14 - 3), (unsigned int)v15 > 1)
    || ((v13 >> 10) & 1) != 0 && (((v13 >> 6) & 9) != 0 || (_DWORD)v14 == 6) )
  {
    v54 = -1073741811;
    goto LABEL_94;
  }
  v67 = (v13 >> 4) & 3;
  v16 = (v13 >> 6) & 0xF;
  v57 = v16;
  if ( PreviousMode && a4 )
  {
    v20 = 0x7FFFFFFF0000LL;
    if ( a4 < 0x7FFFFFFF0000LL )
      v20 = a4;
    RtlCopyVolatileMemory(&v75, (const void *)v20, 0x10uLL);
    v70 = &v75;
  }
  if ( !Srca )
  {
    Sid = 0LL;
    goto LABEL_48;
  }
  switch ( v16 )
  {
    case 3:
      v17 = ObpReferenceObjectByHandleWithTag(
              (ULONG_PTR)Srca,
              0,
              (__int64)PsProcessType,
              PreviousMode,
              0x20666E57u,
              Object,
              0LL,
              0LL);
      if ( v17 < 0 )
        break;
      v18 = Object;
      goto LABEL_16;
    case 0:
LABEL_35:
      v17 = -1073741811;
      break;
    case 1:
      if ( PreviousMode )
      {
        if ( (unsigned __int64)Srca < 0x7FFFFFFF0000LL )
          v11 = (__int64)Srca;
        v21 = *(_DWORD *)v11;
        LODWORD(Object[1]) = *(_DWORD *)v11;
      }
      else
      {
        v21 = *Srca;
        LODWORD(Object[1]) = *Srca;
      }
      Object[0] = (PVOID)PsGetSessionById(v21);
      if ( Object[0] )
      {
        Sid = &Object[1];
        v17 = 0;
        break;
      }
      goto LABEL_35;
    case 2:
      v17 = SeCaptureSid(Srca, PreviousMode, v14, v15, PreviouslyGrantedAccess, 0, Object);
      if ( v17 >= 0 )
      {
        v18 = (PVOID *)Object[0];
LABEL_16:
        Sid = v18;
      }
      break;
    default:
      v17 = -1073741811;
      break;
  }
  v54 = v17;
  if ( v17 < 0 )
    goto LABEL_94;
LABEL_48:
  if ( PreviousMode )
  {
    v61 = 0;
    if ( Srca )
    {
      v54 = ExpWnfCheckCrossScopeAccess(v13);
      if ( v54 < 0 )
        goto LABEL_94;
    }
  }
  else
  {
    v61 = 1;
  }
  if ( PreviousMode )
  {
    v22 = KeGetCurrentThread();
    Process = v22->ApcState.Process;
    v60 = Process;
    if ( v16 == 3 && (!Sid || Process == *(PEPROCESS *)Sid) )
      goto LABEL_127;
  }
  else
  {
    LODWORD(v22) = 0;
    Process = PsInitialSystemProcess;
    v60 = PsInitialSystemProcess;
  }
  if ( v16 != 5 || !a8 )
  {
LABEL_53:
    v54 = ExpWnfResolveScopeInstance((int)v63, (int)Process, (int)v22, v16, Sid);
    if ( v54 < 0 )
      goto LABEL_94;
    v24 = (signed __int64 *)(*(_QWORD *)v63 + 48LL);
    v25 = KeAbPreAcquire(*(_QWORD *)v63 + 48LL, 0LL);
    if ( _InterlockedCompareExchange64(v24, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v24, 0, v25, (__int64)v24);
    if ( v25 )
      *((_BYTE *)v25 + 10) = 1;
    v26 = *(_QWORD **)(*(_QWORD *)v63 + 56LL);
    if ( !v26 )
      goto LABEL_67;
    do
    {
      if ( v58 < v26[3] )
      {
        v26 = (_QWORD *)*v26;
      }
      else
      {
        if ( v58 <= v26[3] )
          break;
        v26 = (_QWORD *)v26[1];
      }
    }
    while ( v26 );
    if ( !v26
      || (v27 = (struct _EX_RUNDOWN_REF *)(v26 - 2), v26 != (_QWORD *)16)
      && (_m_prefetchw(&v27[1]),
          v28 = v27[1].Count & 0xFFFFFFFFFFFFFFFEuLL,
          v28 != _InterlockedCompareExchange64((volatile signed __int64 *)&v27[1], v28 + 2, v28))
      && !ExfAcquireRundownProtection(v27 + 1) )
    {
LABEL_67:
      v27 = 0LL;
    }
    v29 = *(_QWORD *)v63;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v63 + 48LL), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v29 + 48));
    KeAbPostRelease(v29 + 48);
    if ( v27 )
    {
      v59 = v27;
      v30 = 0;
    }
    else
    {
      v30 = -1073741772;
    }
    v54 = v30;
    if ( v30 == -1073741772 && v67 != 3 )
    {
      v38 = v58;
      v54 = ExpWnfLookupPermanentName(v58, (PSECURITY_DESCRIPTOR **)&P);
      if ( v54 < 0 )
        goto LABEL_94;
      v33 = a3;
      v47 = P;
      v54 = ExpWnfValidatePubSubPreconditions(2u, v61);
      if ( v54 < 0 )
        goto LABEL_94;
      v54 = ExpWnfCreateNameInstance(*(__int64 *)v63, v58, (__int64)v47, (unsigned __int64)Process, &v59);
      ExFreePoolWithTag(v47, 0x20666E57u);
      P = 0LL;
      if ( v54 < 0 )
        goto LABEL_94;
      goto LABEL_91;
    }
    if ( v30 < 0 )
      goto LABEL_94;
    if ( v61 )
      goto LABEL_86;
    Ptr = v59[9].Ptr;
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    GrantedAccess = 0;
    AccessStatus = 0;
    SeCaptureSubjectContext(&SubjectContext);
    SeAccessCheck(
      Ptr,
      &SubjectContext,
      0,
      2u,
      0,
      0LL,
      (PGENERIC_MAPPING)&ExpWnfNotificationMapping,
      1,
      &GrantedAccess,
      &AccessStatus);
    SeReleaseSubjectContext(&SubjectContext);
    v32 = AccessStatus;
    if ( AccessStatus >= 0 )
    {
LABEL_86:
      Count = (_QWORD *)v59[8].Count;
      if ( !Count )
        goto LABEL_87;
      if ( v70 )
      {
        v46 = *Count - *(_QWORD *)v70;
        if ( *Count == *(_QWORD *)v70 )
          v46 = Count[1] - *((_QWORD *)v70 + 1);
        if ( !v46 )
        {
LABEL_87:
          v33 = a3;
          if ( a3 <= LODWORD(v59[7].Count) )
            v32 = 0;
          else
            v32 = -1073741811;
          goto LABEL_89;
        }
      }
      v32 = -1073741811;
    }
    v33 = a3;
LABEL_89:
    v54 = v32;
    if ( v32 < 0 )
      goto LABEL_94;
    v38 = v58;
LABEL_91:
    v54 = ExpWnfWriteStateData(v59, v71, v33, a6, a7, Privileges);
    if ( v54 >= 0 )
    {
      if ( v57 == 5 )
      {
        v73 = v38 ^ 0x41C64E6DA3BC0074LL;
        v48 = v59 + 10;
        v49 = KeAbPreAcquire((__int64)&v59[10], 0LL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v48, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx((signed __int64 *)v48, 0, v49, (__int64)v48);
        if ( v49 )
          *((_BYTE *)v49 + 10) = 1;
        v50 = v59[12].Count;
        v51 = (struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostRoot;
        if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostRoot) )
        {
          guard_dispatch_icall_no_overrides(0LL, 0LL, &v73, v50);
          ExReleaseExtensionTable(v51);
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v48, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)v48);
        KeAbPostRelease((ULONG_PTR)v48);
        PreviousMode = v55;
      }
      ExpWnfNotifyNameSubscribers(v59, 1LL, 1LL);
      v54 = 0;
    }
    goto LABEL_94;
  }
  if ( a7 )
  {
LABEL_127:
    v54 = -1073741811;
    goto LABEL_94;
  }
  v74 = v13 ^ 0x41C64E6DA3BC0074LL;
  v34 = (struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostGuest;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostGuest);
  if ( ExtensionTable )
  {
    Privileges = a3;
    v36 = guard_dispatch_icall_no_overrides(0LL, 1LL, &v74, 0xFFFFFFFFLL);
  }
  else
  {
    v36 = -1073741822;
  }
  if ( ExtensionTable )
    ExReleaseExtensionTable(v34);
  v54 = v36;
  if ( v36 == -1073741822 )
  {
    Process = v60;
    goto LABEL_53;
  }
LABEL_94:
  if ( v59 )
  {
    v39 = v59 + 1;
    _m_prefetchw(&v59[1]);
    v40 = v39->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v40 != _InterlockedCompareExchange64((volatile signed __int64 *)v39, v40 - 2, v40) )
      ExfReleaseRundownProtection(v39);
  }
  if ( *(_QWORD *)v63 )
  {
    v41 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)v63 + 8LL);
    _m_prefetchw((const void *)(*(_QWORD *)v63 + 8LL));
    v42 = v41->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v42 != _InterlockedCompareExchange64((volatile signed __int64 *)v41, v42 - 2, v42) )
      ExfReleaseRundownProtection(v41);
  }
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  KeLeaveCriticalRegionThread();
  if ( v57 )
  {
    switch ( v57 )
    {
      case 1:
        v44 = Object[0];
        if ( !Object[0] )
          return (unsigned int)v54;
        v45 = 2035381072;
        break;
      case 2:
        if ( Object[0] && PreviousMode == 1 )
          ExFreePoolWithTag(Object[0], 0);
        return (unsigned int)v54;
      case 3:
        v44 = Object[0];
        if ( !Object[0] )
          return (unsigned int)v54;
        v45 = 543583831;
        break;
      default:
        return (unsigned int)v54;
    }
    ObfDereferenceObjectWithTag(v44, v45);
  }
  return (unsigned int)v54;
}
