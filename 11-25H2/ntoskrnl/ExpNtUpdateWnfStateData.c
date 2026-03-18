/*
 * XREFs of ExpNtUpdateWnfStateData @ 0x1408E4380
 * Callers:
 *     ExWnfCrossVmCallback @ 0x1407AFF80 (ExWnfCrossVmCallback.c)
 *     NtUpdateWnfStateData @ 0x1408E4340 (NtUpdateWnfStateData.c)
 *     PfSnPowerBoost @ 0x1408EC6A4 (PfSnPowerBoost.c)
 *     PfSnPowerBoostUpdate @ 0x140A7A900 (PfSnPowerBoostUpdate.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleaseRundownProtection @ 0x1403242B0 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x140326BD0 (ExfAcquireRundownProtection.c)
 *     SeAccessCheck @ 0x1403624F0 (SeAccessCheck.c)
 *     PsGetSessionById @ 0x1403D6DB0 (PsGetSessionById.c)
 *     ExGetExtensionTable @ 0x14042C694 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1404516B0 (ExReleaseExtensionTable.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x1406AAA20 (RtlCopyVolatileMemory.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     ExpWnfCreateNameInstance @ 0x140898930 (ExpWnfCreateNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1408E4E70 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfWriteStateData @ 0x1408E5390 (ExpWnfWriteStateData.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1408E5D40 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1408E6080 (ExpWnfCheckCrossScopeAccess.c)
 *     SeCaptureSid @ 0x140916DC8 (SeCaptureSid.c)
 *     ExpWnfLookupPermanentName @ 0x14091BC30 (ExpWnfLookupPermanentName.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x1409E2CC0 (ExpWnfValidatePubSubPreconditions.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  unsigned int *v11; // rsi
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
  signed __int64 *v24; // rdi
  __int64 *v25; // rbx
  _QWORD *v26; // rdx
  struct _EX_RUNDOWN_REF *v27; // rdi
  unsigned __int64 v28; // rtt
  __int64 v29; // rbx
  int v30; // eax
  _QWORD *Count; // rcx
  unsigned int v32; // r15d
  NTSTATUS v33; // eax
  unsigned __int64 v34; // rbx
  struct _EX_RUNDOWN_REF *v35; // rcx
  unsigned __int64 v36; // rtt
  struct _EX_RUNDOWN_REF *v37; // rcx
  unsigned __int64 v38; // rtt
  struct _EX_RUNDOWN_REF *v40; // r15
  unsigned __int64 ExtensionTable; // r14
  int v42; // ebx
  void *Ptr; // rbx
  PVOID v44; // rcx
  ULONG v45; // edx
  __int64 v46; // r8
  PVOID v47; // rsi
  struct _EX_RUNDOWN_REF *v48; // rbx
  __int64 *v49; // rdi
  struct _EX_RUNDOWN_REF *v50; // r15
  int PreviouslyGrantedAccess; // [rsp+20h] [rbp-148h]
  unsigned int Privileges; // [rsp+28h] [rbp-140h]
  int v53; // [rsp+50h] [rbp-118h]
  int v55; // [rsp+64h] [rbp-104h]
  unsigned __int64 v56; // [rsp+68h] [rbp-100h]
  struct _EX_RUNDOWN_REF *v57; // [rsp+70h] [rbp-F8h] BYREF
  PEPROCESS v58; // [rsp+78h] [rbp-F0h]
  NTSTATUS v59; // [rsp+80h] [rbp-E8h]
  PSID Sid; // [rsp+88h] [rbp-E0h]
  int v61[2]; // [rsp+90h] [rbp-D8h] BYREF
  NTSTATUS AccessStatus; // [rsp+98h] [rbp-D0h] BYREF
  PVOID Object[2]; // [rsp+A0h] [rbp-C8h] BYREF
  PVOID P; // [rsp+B0h] [rbp-B8h] BYREF
  int v65; // [rsp+B8h] [rbp-B0h]
  ACCESS_MASK GrantedAccess; // [rsp+BCh] [rbp-ACh] BYREF
  __int64 v67; // [rsp+C0h] [rbp-A8h] BYREF
  __int128 *v68; // [rsp+C8h] [rbp-A0h]
  __int64 v69; // [rsp+D0h] [rbp-98h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+E8h] [rbp-80h] BYREF
  __int64 v71; // [rsp+108h] [rbp-60h]
  __int64 v72; // [rsp+110h] [rbp-58h]
  __int128 v73; // [rsp+118h] [rbp-50h] BYREF

  v69 = a2;
  v73 = 0LL;
  Sid = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v61 = 0LL;
  v57 = 0LL;
  v55 = 0;
  *(_OWORD *)Object = 0LL;
  v68 = (__int128 *)a4;
  v67 = 0LL;
  v11 = (unsigned int *)0x7FFFFFFF0000LL;
  if ( PreviousMode )
  {
    v19 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Src < 0x7FFFFFFF0000LL )
      v19 = (__int64)Src;
    RtlCopyVolatileMemory(&v67, (const void *)v19, 8uLL);
    v12 = v67;
  }
  else
  {
    v12 = *Src;
    v67 = *Src;
  }
  v13 = v12 ^ 0x41C64E6DA3BC0074LL;
  v56 = v13;
  if ( (v13 & 0xF) != 1
    || (v14 = (v13 >> 6) & 0xF, v15 = (v13 >> 4) & 3, (_DWORD)v15 != 3) && (_DWORD)v15 && (unsigned int)(v15 - 1) >= 2
    || (_DWORD)v14 != 5 && (unsigned int)v14 > 2 && (unsigned int)(v14 - 3) > 1
    || ((v13 >> 10) & 1) != 0 && (((v13 >> 6) & 9) != 0 || (_DWORD)v14 == 6) )
  {
    v53 = -1073741811;
    goto LABEL_81;
  }
  v65 = (v13 >> 4) & 3;
  v16 = (v13 >> 6) & 0xF;
  v55 = v16;
  if ( PreviousMode && a4 )
  {
    v20 = 0x7FFFFFFF0000LL;
    if ( a4 < 0x7FFFFFFF0000LL )
      v20 = a4;
    RtlCopyVolatileMemory(&v73, (const void *)v20, 0x10uLL);
    v68 = &v73;
  }
  if ( !Srca )
  {
    Sid = 0LL;
    goto LABEL_46;
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
          v11 = Srca;
        v21 = *v11;
        LODWORD(Object[1]) = *v11;
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
      v17 = SeCaptureSid(Srca, PreviouslyGrantedAccess, 0, (__int64)Object);
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
  v53 = v17;
  if ( v17 < 0 )
    goto LABEL_81;
LABEL_46:
  if ( PreviousMode )
  {
    v59 = 0;
    if ( Srca )
    {
      v53 = ExpWnfCheckCrossScopeAccess(v13);
      if ( v53 < 0 )
        goto LABEL_81;
    }
  }
  else
  {
    v59 = 1;
  }
  if ( PreviousMode )
  {
    v22 = KeGetCurrentThread();
    Process = v22->ApcState.Process;
    v58 = Process;
    if ( v16 == 3 && (!Sid || Process == *(PEPROCESS *)Sid) )
      goto LABEL_125;
  }
  else
  {
    LODWORD(v22) = 0;
    Process = PsInitialSystemProcess;
    v58 = PsInitialSystemProcess;
  }
  if ( v16 != 5 || !a8 )
  {
LABEL_51:
    v53 = ExpWnfResolveScopeInstance((int)v61, (int)Process, (int)v22, v16, Sid);
    if ( v53 < 0 )
      goto LABEL_81;
    v24 = (signed __int64 *)(*(_QWORD *)v61 + 48LL);
    v25 = KeAbPreAcquire(*(_QWORD *)v61 + 48LL, 0LL);
    if ( _InterlockedCompareExchange64(v24, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v24, 0, v25, (unsigned __int64)v24);
    if ( v25 )
      *((_BYTE *)v25 + 10) = 1;
    v26 = *(_QWORD **)(*(_QWORD *)v61 + 56LL);
    if ( !v26 )
      goto LABEL_65;
    do
    {
      if ( v56 < v26[3] )
      {
        v26 = (_QWORD *)*v26;
      }
      else
      {
        if ( v56 <= v26[3] )
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
LABEL_65:
      v27 = 0LL;
    }
    v29 = *(_QWORD *)v61;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v61 + 48LL), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v29 + 48));
    KeAbPostRelease(v29 + 48);
    if ( v27 )
    {
      v57 = v27;
      v30 = 0;
    }
    else
    {
      v30 = -1073741772;
    }
    v53 = v30;
    if ( v30 == -1073741772 && v65 != 3 )
    {
      v34 = v56;
      v53 = ExpWnfLookupPermanentName(v56, &P);
      if ( v53 < 0 )
        goto LABEL_81;
      v32 = a3;
      v47 = P;
      v53 = ExpWnfValidatePubSubPreconditions(2u, v59);
      if ( v53 < 0 )
        goto LABEL_81;
      v53 = ExpWnfCreateNameInstance(*(__int64 *)v61, v56, (__int64)v47, (unsigned __int64)Process, &v57);
      ExFreePoolWithTag(v47, 0x20666E57u);
      P = 0LL;
      if ( v53 < 0 )
        goto LABEL_81;
      goto LABEL_78;
    }
    if ( v30 < 0 )
      goto LABEL_81;
    if ( v59 )
      goto LABEL_73;
    Ptr = v57[9].Ptr;
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
    v33 = AccessStatus;
    if ( AccessStatus >= 0 )
    {
LABEL_73:
      Count = (_QWORD *)v57[8].Count;
      if ( !Count )
        goto LABEL_74;
      if ( v68 )
      {
        v46 = *Count - *(_QWORD *)v68;
        if ( *Count == *(_QWORD *)v68 )
          v46 = Count[1] - *((_QWORD *)v68 + 1);
        if ( !v46 )
        {
LABEL_74:
          v32 = a3;
          if ( a3 <= LODWORD(v57[7].Count) )
            v33 = 0;
          else
            v33 = -1073741811;
          goto LABEL_76;
        }
      }
      v33 = -1073741811;
    }
    v32 = a3;
LABEL_76:
    v53 = v33;
    if ( v33 < 0 )
      goto LABEL_81;
    v34 = v56;
LABEL_78:
    v53 = ExpWnfWriteStateData(v57, v69, v32, a6, a7, Privileges);
    if ( v53 >= 0 )
    {
      if ( v55 == 5 )
      {
        v71 = v34 ^ 0x41C64E6DA3BC0074LL;
        v48 = v57 + 10;
        v49 = KeAbPreAcquire((__int64)&v57[10], 0LL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v48, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx((signed __int64 *)v48, 0, v49, (unsigned __int64)v48);
        if ( v49 )
          *((_BYTE *)v49 + 10) = 1;
        v50 = (struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostRoot;
        if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostRoot) )
        {
          guard_dispatch_icall_no_overrides(0LL);
          ExReleaseExtensionTable(v50);
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v48, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)v48);
        KeAbPostRelease((ULONG_PTR)v48);
      }
      ExpWnfNotifyNameSubscribers(v57, 1LL, 1LL);
      v53 = 0;
    }
    goto LABEL_81;
  }
  if ( a7 )
  {
LABEL_125:
    v53 = -1073741811;
    goto LABEL_81;
  }
  v72 = v13 ^ 0x41C64E6DA3BC0074LL;
  v40 = (struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostGuest;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostGuest);
  if ( ExtensionTable )
  {
    Privileges = a3;
    v42 = guard_dispatch_icall_no_overrides(0LL);
  }
  else
  {
    v42 = -1073741822;
  }
  if ( ExtensionTable )
    ExReleaseExtensionTable(v40);
  v53 = v42;
  if ( v42 == -1073741822 )
  {
    Process = v58;
    goto LABEL_51;
  }
LABEL_81:
  if ( v57 )
  {
    v35 = v57 + 1;
    _m_prefetchw(&v57[1]);
    v36 = v35->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v36 != _InterlockedCompareExchange64((volatile signed __int64 *)v35, v36 - 2, v36) )
      ExfReleaseRundownProtection(v35);
  }
  if ( *(_QWORD *)v61 )
  {
    v37 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)v61 + 8LL);
    _m_prefetchw((const void *)(*(_QWORD *)v61 + 8LL));
    v38 = v37->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v38 != _InterlockedCompareExchange64((volatile signed __int64 *)v37, v38 - 2, v38) )
      ExfReleaseRundownProtection(v37);
  }
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v55 )
  {
    switch ( v55 )
    {
      case 1:
        v44 = Object[0];
        if ( !Object[0] )
          return (unsigned int)v53;
        v45 = 2035381072;
        break;
      case 2:
        if ( Object[0] && PreviousMode == 1 )
          ExFreePoolWithTag(Object[0], 0);
        return (unsigned int)v53;
      case 3:
        v44 = Object[0];
        if ( !Object[0] )
          return (unsigned int)v53;
        v45 = 543583831;
        break;
      default:
        return (unsigned int)v53;
    }
    ObfDereferenceObjectWithTag(v44, v45);
  }
  return (unsigned int)v53;
}
