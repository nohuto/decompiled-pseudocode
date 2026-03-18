/*
 * XREFs of EtwpRegisterUMProvider @ 0x14083C6F0
 * Callers:
 *     NtTraceControl @ 0x140834A80 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140259600 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     SeAccessCheck @ 0x14035A5B0 (SeAccessCheck.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x14040CCA0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwWrite @ 0x14041C1B0 (EtwWrite.c)
 *     ObReferenceObjectByPointer @ 0x140432520 (ObReferenceObjectByPointer.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B3890 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     EtwpUpdateEnableMask @ 0x14083658C (EtwpUpdateEnableMask.c)
 *     EtwpCheckLoggerControlAccess @ 0x140836724 (EtwpCheckLoggerControlAccess.c)
 *     EtwpAddGuidEntry @ 0x140838B30 (EtwpAddGuidEntry.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x14083A9D0 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpReferenceGuidEntry @ 0x14083AFE0 (EtwpReferenceGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x14083D760 (EtwpUnreferenceGuidEntry.c)
 *     EtwpApplyScopeFilters @ 0x14083D8B0 (EtwpApplyScopeFilters.c)
 *     EtwpTrackProviderRegistration @ 0x14083DAD0 (EtwpTrackProviderRegistration.c)
 *     EtwpCopySchematizedFilters @ 0x14083DD00 (EtwpCopySchematizedFilters.c)
 *     ObpFreeObjectNameBuffer @ 0x14083E740 (ObpFreeObjectNameBuffer.c)
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14084D8F0 (SeCaptureSubjectContext.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     ObInsertObjectEx @ 0x140857620 (ObInsertObjectEx.c)
 *     ObpAllocateObject @ 0x14089B290 (ObpAllocateObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x14089CCA0 (ObpCaptureObjectCreateInformation.c)
 *     EtwpReleaseLoggerContext @ 0x14095D644 (EtwpReleaseLoggerContext.c)
 *     ObpRegisterObject @ 0x140AB735C (ObpRegisterObject.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpRegisterUMProvider(__int64 a1, ULONGLONG a2, unsigned int a3, char a4, __int64 a5)
{
  unsigned int v6; // ecx
  ULONGLONG v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r13
  int v11; // eax
  BOOL v12; // edx
  _QWORD *v13; // r15
  __int64 v14; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v16; // rcx
  _QWORD **v17; // rsi
  signed __int64 *v18; // r14
  _QWORD *v19; // rbx
  _QWORD *i; // rbx
  __int64 v21; // rax
  void *v22; // rbx
  NTSTATUS Information; // ebx
  struct _KTHREAD *v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rsi
  int v27; // r8d
  unsigned int *v28; // r10
  unsigned int v29; // eax
  __int64 v30; // r9
  __int64 v31; // r12
  struct _KPRCB *CurrentPrcb; // r13
  _GENERAL_LOOKASIDE *P; // rbx
  POBJECT_TYPE v34; // r14
  int v35; // edx
  __int64 v36; // rsi
  _GENERAL_LOOKASIDE *L; // rbx
  __int64 v38; // r9
  __int64 Size; // rdx
  __int64 Tag; // r8
  __int64 Type; // rcx
  int v42; // edx
  __int64 v43; // r8
  __int64 v44; // r9
  unsigned int DefaultNonPagedPoolCharge; // ecx
  void *v46; // rcx
  struct _KPRCB *v47; // rdx
  _GENERAL_LOOKASIDE *v48; // rcx
  volatile signed __int16 *v49; // r14
  _KPROCESS *Process; // rbx
  volatile signed __int16 **v51; // rax
  __int64 v52; // rcx
  int v54; // ecx
  signed __int64 v55; // rax
  signed __int64 v56; // rdx
  __int64 v57; // rtt
  __int64 v58; // rax
  unsigned int v59; // r14d
  volatile signed __int16 *v60; // r12
  char v61; // dl
  int v62; // r9d
  __int64 v63; // rcx
  unsigned __int16 v64; // si
  __int16 v65; // ax
  __int64 v66; // rax
  _DWORD *v67; // r14
  int v68; // edx
  int v69; // eax
  __int16 v70; // di
  unsigned __int16 *v71; // rsi
  __int16 v72; // di
  __int64 v73; // r8
  __int64 v74; // r13
  __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // r13
  int v78; // eax
  int v79; // eax
  unsigned int v80; // r9d
  _DWORD *v81; // r8
  __int64 v82; // r10
  __int64 v83; // r11
  int v84; // eax
  bool v85; // cf
  struct _KPRCB *v86; // rdx
  _GENERAL_LOOKASIDE *v87; // rcx
  void (__stdcall *FreeEx)(PVOID); // rdx
  unsigned int v89; // edx
  _DWORD *v90; // rcx
  __int64 v91; // r9
  __int64 v92; // rsi
  volatile signed __int16 *v93; // rsi
  struct _KTHREAD *v94; // rax
  unsigned __int64 *v95; // rbx
  _QWORD *v96; // rax
  _QWORD *v97; // rsi
  signed __int64 *v98; // rdi
  signed __int64 v99; // rax
  signed __int64 v100; // rdx
  signed __int64 v101; // rtt
  char v102; // dl
  unsigned __int16 v103[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v104; // [rsp+54h] [rbp-ACh] BYREF
  int v105; // [rsp+58h] [rbp-A8h]
  __int64 v106; // [rsp+60h] [rbp-A0h]
  unsigned int v107; // [rsp+68h] [rbp-98h]
  unsigned int v108; // [rsp+6Ch] [rbp-94h]
  NTSTATUS AccessStatus; // [rsp+70h] [rbp-90h] BYREF
  __int64 v110; // [rsp+78h] [rbp-88h]
  ACCESS_MASK GrantedAccess; // [rsp+80h] [rbp-80h] BYREF
  __int64 v112; // [rsp+88h] [rbp-78h]
  __int64 v113; // [rsp+90h] [rbp-70h] BYREF
  __int64 v114; // [rsp+98h] [rbp-68h] BYREF
  __int64 v115; // [rsp+A0h] [rbp-60h]
  __int128 v116; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v117; // [rsp+B8h] [rbp-48h] BYREF
  ULONGLONG v118; // [rsp+C0h] [rbp-40h]
  _QWORD v119[4]; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v120; // [rsp+E8h] [rbp-18h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+F8h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+118h] [rbp+18h] BYREF

  v6 = *(_DWORD *)(a2 + 16);
  v7 = a2;
  v115 = a5;
  LOWORD(v105) = *(_WORD *)(a2 + 20);
  v8 = *(_QWORD *)a2;
  v107 = a3;
  v9 = v8 - SecurityProviderGuid;
  v10 = 0LL;
  LOBYTE(v103[0]) = a4;
  v118 = a2;
  v114 = 0LL;
  v106 = 0LL;
  v104 = 0;
  v108 = v6;
  if ( !v9 )
    v9 = *(_QWORD *)(a2 + 8) - *((_QWORD *)&SecurityProviderGuid + 1);
  if ( !v9 )
    return 3221225506LL;
  v11 = *(_DWORD *)(a2 + 8);
  v12 = v6 - 2 > 1;
  v13 = 0LL;
  v14 = 56LL * ((*(_DWORD *)v7 ^ *(_DWORD *)(v7 + 4) ^ *(_DWORD *)(v7 + 12) ^ v11) & 0x3F);
  CurrentThread = KeGetCurrentThread();
  LODWORD(v110) = v12;
  v16 = a1 + v14 + 720;
  v17 = (_QWORD **)(v16 + 16LL * v12);
  --CurrentThread->KernelApcDisable;
  v18 = (signed __int64 *)(v16 + 48);
  v19 = KeAbPreAcquire(v16 + 48, 0LL);
  if ( _InterlockedCompareExchange64(v18, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v18, 0, v19, (__int64)v18);
  if ( v19 )
    *((_BYTE *)v19 + 10) = 1;
  for ( i = *v17; i != v17; i = (_QWORD *)*i )
  {
    v21 = *(_QWORD *)v7 - i[5];
    if ( *(_QWORD *)v7 == i[5] )
      v21 = *(_QWORD *)(v7 + 8) - i[6];
    if ( !v21 && EtwpReferenceGuidEntry((ULONG_PTR)i) )
    {
      v13 = i;
      break;
    }
  }
  if ( _InterlockedCompareExchange64(v18, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v18);
  KeAbPostRelease((ULONG_PTR)v18);
  KeLeaveCriticalRegionThread();
  if ( !v13 )
  {
    v13 = EtwpAddGuidEntry(a1, (_DWORD *)v7, v110);
    if ( !v13 )
      return (unsigned int)-1073741801;
  }
  v22 = (void *)v13[9];
  AccessStatus = 0;
  GrantedAccess = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  SeAccessCheck(
    v22,
    &SubjectContext,
    0,
    0x800u,
    0,
    0LL,
    (PGENERIC_MAPPING)&EtwpGenericMapping,
    1,
    &GrantedAccess,
    &AccessStatus);
  SeReleaseSubjectContext(&SubjectContext);
  Information = AccessStatus;
  if ( !AccessStatus )
  {
    if ( v13[82] )
    {
      v94 = KeGetCurrentThread();
      --v94->KernelApcDisable;
      v95 = (unsigned __int64 *)(v13[82] + 664LL);
      v96 = KeAbPreAcquire((__int64)v95, 0LL);
      v97 = v96;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v95, 0LL) )
        ExfAcquirePushLockExclusiveEx(v95, (__int64)v96, (__int64)v95);
      if ( v97 )
        *((_BYTE *)v97 + 10) = 1;
      *(_QWORD *)(v13[82] + 672LL) = KeGetCurrentThread();
    }
    v24 = KeGetCurrentThread();
    --v24->KernelApcDisable;
    v25 = KeAbPreAcquire((__int64)(v13 + 83), 0LL);
    v26 = v25;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v13 + 166, 0LL) )
      ExfAcquirePushLockExclusiveEx(v13 + 83, (__int64)v25, (__int64)(v13 + 83));
    if ( v26 )
      *((_BYTE *)v26 + 10) = 1;
    v27 = 0;
    v28 = (unsigned int *)v115;
    v13[84] = KeGetCurrentThread();
    v29 = 160;
    *v28 = 160;
    v30 = v13[80];
    if ( v30 )
    {
      v89 = 0;
      v90 = v13 + 16;
      v91 = v30 + 88;
      do
      {
        if ( *v90 && *(_QWORD *)v91 )
          v27 += (*(_DWORD *)(*(_QWORD *)v91 + 16LL) + 7) & 0xFFFFFFF8;
        ++v89;
        v90 += 8;
        v91 += 104LL;
      }
      while ( v89 < 0x10 );
      v29 = *v28;
    }
    if ( v27 )
    {
      v29 = v27 + 176;
      *v28 = v27 + 176;
    }
    if ( v29 > v107 )
    {
      Information = -1073741789;
      goto LABEL_55;
    }
    v31 = *(_QWORD *)(v7 + 32);
    v117 = 0LL;
    CurrentPrcb = KeGetCurrentPrcb();
    v113 = 0LL;
    v119[1] = 0LL;
    v119[2] = 0LL;
    P = CurrentPrcb->PPLookasideList[4].P;
    v34 = EtwpRegistrationObjectType;
    v119[0] = 48LL;
    v119[3] = 64LL;
    ++P->TotalAllocates;
    v120 = 0LL;
    v116 = 0LL;
    v36 = (__int64)RtlpInterlockedPopEntrySList(&P->ListHead);
    if ( v36 )
      goto LABEL_32;
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[4].L;
    ++L->TotalAllocates;
    v36 = (__int64)RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( v36
      || (Size = L->Size,
          Tag = L->Tag,
          Type = (unsigned int)L->Type,
          ++L->AllocateMisses,
          (v36 = guard_dispatch_icall_no_overrides(Type, Size, Tag, v38)) != 0) )
    {
LABEL_32:
      *(_DWORD *)v36 = CurrentPrcb->Number;
    }
    if ( !v36 )
    {
      v10 = v106;
      Information = -1073741670;
      goto LABEL_55;
    }
    v10 = 0LL;
    LOBYTE(v35) = 1;
    Information = ObpCaptureObjectCreateInformation(0, v35, (unsigned int)v119, (unsigned int)&v116, v36, 0);
    if ( Information < 0 )
    {
      v86 = KeGetCurrentPrcb();
      v87 = v86->PPLookasideList[4].P;
      ++v87->TotalFrees;
      if ( LOWORD(v87->ListHead.Alignment) < v87->Depth
        || (++v87->FreeMisses,
            v87 = v86->PPLookasideList[4].L,
            ++v87->TotalFrees,
            LOWORD(v87->ListHead.Alignment) < v87->Depth) )
      {
        RtlpInterlockedPushEntrySList(&v87->ListHead, (PSLIST_ENTRY)v36);
        goto LABEL_55;
      }
      ++v87->FreeMisses;
      FreeEx = (void (__stdcall *)(PVOID))v87->FreeEx;
      if ( FreeEx == ExFreePool )
        goto LABEL_117;
      goto LABEL_139;
    }
    if ( (*(_DWORD *)v36 & v34->TypeInfo.InvalidAttributes) != 0 )
    {
      Information = -1073741811;
LABEL_38:
      if ( *((_QWORD *)&v116 + 1) )
        ObpFreeObjectNameBuffer(&v116);
      v46 = *(void **)(v36 + 32);
      if ( v46 )
      {
        if ( *(_BYTE *)(v36 + 16) <= 1u )
          ExFreePoolWithTag(v46, 0);
        *(_QWORD *)(v36 + 32) = 0LL;
      }
      v47 = KeGetCurrentPrcb();
      v48 = v47->PPLookasideList[4].P;
      ++v48->TotalFrees;
      if ( LOWORD(v48->ListHead.Alignment) < v48->Depth
        || (++v48->FreeMisses,
            v48 = v47->PPLookasideList[4].L,
            ++v48->TotalFrees,
            LOWORD(v48->ListHead.Alignment) < v48->Depth) )
      {
        RtlpInterlockedPushEntrySList(&v48->ListHead, (PSLIST_ENTRY)v36);
LABEL_55:
        v13[84] = 0LL;
        _m_prefetchw(v13 + 83);
        v55 = v13[83];
        v56 = v55 - 16;
        if ( (v55 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v56 = 0LL;
        if ( (v55 & 2) != 0 || (v57 = v13[83], v57 != _InterlockedCompareExchange64(v13 + 83, v56, v55)) )
          ExfReleasePushLock(v13 + 83);
        KeAbPostRelease((ULONG_PTR)(v13 + 83));
        KeLeaveCriticalRegionThread();
        v58 = v13[82];
        if ( v58 )
        {
          *(_QWORD *)(v58 + 672) = 0LL;
          v98 = (signed __int64 *)(v13[82] + 664LL);
          _m_prefetchw(v98);
          v99 = *v98;
          v100 = *v98 - 16;
          if ( (*v98 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v100 = 0LL;
          if ( (v99 & 2) != 0 || (v101 = *v98, v101 != _InterlockedCompareExchange64(v98, v100, v99)) )
            ExfReleasePushLock(v98);
          KeAbPostRelease((ULONG_PTR)v98);
          KeLeaveCriticalRegionThread();
        }
        if ( v10 )
          ObfDereferenceObject((PVOID)v10);
        goto LABEL_62;
      }
      ++v48->FreeMisses;
      FreeEx = (void (__stdcall *)(PVOID))v48->FreeEx;
      if ( FreeEx == ExFreePool )
      {
LABEL_117:
        ExFreePool((PVOID)v36);
        goto LABEL_55;
      }
LABEL_139:
      guard_dispatch_icall_no_overrides(v36, FreeEx, v43, v44);
      goto LABEL_55;
    }
    if ( (*(_DWORD *)v36 & 0x10) != 0 && !SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, 0) )
    {
      Information = -1073741727;
      goto LABEL_38;
    }
    DefaultNonPagedPoolCharge = v34->TypeInfo.DefaultNonPagedPoolCharge;
    *(_DWORD *)(v36 + 20) = v34->TypeInfo.DefaultPagedPoolCharge;
    LOBYTE(v42) = 1;
    *(_DWORD *)(v36 + 24) = DefaultNonPagedPoolCharge;
    Information = ObpAllocateObject(v36, v42, (_DWORD)v34, (unsigned int)&v116, 120, (__int64)&v113, 0LL);
    if ( Information < 0 )
      goto LABEL_38;
    v92 = v113;
    if ( ObpTraceFlags )
    {
      ObpRegisterObject(v113);
      ObpPushStackInfo(v92, 1, 1u, 0x746C6644u);
    }
    v93 = (volatile signed __int16 *)(v92 + 48);
    EtwpReferenceGuidEntry((ULONG_PTR)v13);
    v49 = v93 + 49;
    if ( v108 == 2 )
      _InterlockedOr16(v93 + 49, 8u);
    *((_QWORD *)v93 + 11) = v31;
    _InterlockedOr16(v49, 2u);
    Process = KeGetCurrentThread()->ApcState.Process;
    ObfReferenceObjectWithTag(Process, 0x52777445u);
    *((_WORD *)v93 + 48) = v105;
    v51 = (volatile signed __int16 **)(v13 + 7);
    *((_QWORD *)v93 + 10) = Process;
    *((_QWORD *)v93 + 11) = v31;
    *((_QWORD *)v93 + 4) = v13;
    v52 = v13[7];
    if ( *(_QWORD **)(v52 + 8) != v13 + 7 )
      __fastfail(3u);
    *((_QWORD *)v93 + 1) = v51;
    *(_QWORD *)v93 = v52;
    *(_QWORD *)(v52 + 8) = v93;
    *v51 = v93;
    *((_QWORD *)v93 + 3) = v93 + 8;
    *((_QWORD *)v93 + 2) = v93 + 8;
    _InterlockedOr16(v49, 0x40u);
    ObReferenceObjectByPointer((PVOID)v93, 0, EtwpRegistrationObjectType, 0);
    v59 = 0;
    Information = ObInsertObjectEx((PVOID)v93, 0, (__int64)&v117, (__int64)&v114);
    v10 = (__int64)v93;
    v60 = v93;
    if ( Information < 0 )
      goto LABEL_55;
    ObfDereferenceObject((PVOID)v93);
    if ( LOBYTE(v103[0]) )
      _InterlockedOr16(v93 + 49, 0x80u);
    *(_QWORD *)(v7 + 24) = v114;
    if ( !*((_DWORD *)v13 + 24) )
    {
LABEL_70:
      v61 = *(_BYTE *)(v10 + 98);
      v103[0] = *(_WORD *)(v10 + 100);
      EtwpApplyScopeFilters(v10, (v61 & 8) != 0, 0, 0, (__int64)v103);
      v63 = v13[82];
      if ( v63 )
      {
        if ( *(_DWORD *)(v63 + 96) )
          EtwpUpdateEnableMask(v63, (*(_BYTE *)(v10 + 98) & 8) != 0, 1, 1, (_WORD *)(v10 + 104));
        LOBYTE(v62) = 1;
        v102 = *(_BYTE *)(v10 + 98);
        v104 = *(_WORD *)(v10 + 104);
        EtwpApplyScopeFilters(v10, (v102 & 8) != 0, 0, v62, (__int64)&v104);
      }
      v64 = v103[0];
      v65 = v104;
      if ( (*(_BYTE *)(v10 + 98) & 8) != 0 )
      {
        *(_WORD *)(v10 + 104) = v104;
      }
      else
      {
        v64 = *(_WORD *)(v10 + 100) & v103[0];
        *(_WORD *)(v10 + 104) &= v104;
        v65 = *(_WORD *)(v10 + 104);
      }
      *(_WORD *)(v10 + 100) = v64;
      v103[0] = v64;
      if ( v64 || v65 )
      {
        EtwpComputeRegEntryEnableInfo(v10, v7 + 112);
        v69 = *((_BYTE *)v13 + 91) & 1;
        BYTE3(v106) = 0;
        *(_DWORD *)(v7 + 152) = v69;
        LOWORD(v106) = *((_WORD *)v13 + 44);
        BYTE2(v106) = *((_BYTE *)v13 + 90);
        HIDWORD(v106) = *((_DWORD *)v13 + 20);
        v66 = v106;
      }
      else
      {
        v66 = 0LL;
        *(_OWORD *)(v7 + 112) = 0LL;
        *(_OWORD *)(v7 + 128) = 0LL;
        *(_DWORD *)(v7 + 152) = 0;
      }
      v67 = (_DWORD *)v115;
      *(_QWORD *)(v7 + 144) = v66;
      v68 = 0;
      *v67 = 160;
      if ( !v13[80] )
        goto LABEL_77;
      v80 = 0;
      v81 = v13 + 16;
      v82 = 0LL;
      do
      {
        if ( *v81 )
        {
          v83 = *(_QWORD *)(v82 + v13[80] + 88);
          if ( v83 )
          {
            v84 = v64;
            if ( _bittest(&v84, (unsigned __int8)v80) )
              v68 += (*(_DWORD *)(v83 + 16) + 7) & 0xFFFFFFF8;
          }
        }
        ++v80;
        v81 += 8;
        v82 += 104LL;
      }
      while ( v80 < 0x10 );
      if ( v68 )
      {
        *v67 = v68 + 176;
        *(_DWORD *)(v7 + 168) = v68;
        *(_DWORD *)(v7 + 172) = 0x80000000;
        *(_QWORD *)(v7 + 160) = 136LL;
        EtwpCopySchematizedFilters((void *)(v7 + 176));
        v54 = 1;
      }
      else
      {
LABEL_77:
        v54 = 0;
      }
      *(_DWORD *)(v7 + 156) = v54;
      *(_DWORD *)(v7 + 44) = *v67;
      EtwpTrackProviderRegistration(v10);
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_REGISTER) )
      {
        UserData.Ptr = v7;
        *(_QWORD *)&UserData.Size = 16LL;
        EtwWrite(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_REGISTER, 0LL, 1u, &UserData);
      }
      goto LABEL_55;
    }
    v70 = *((_WORD *)v93 + 49);
    v71 = (unsigned __int16 *)v13 + 67;
    v107 = Information;
    v72 = v70 & 8;
    while ( 1 )
    {
      if ( !*(_DWORD *)(v71 - 3) )
        goto LABEL_81;
      v73 = *v71;
      v105 = 0;
      v108 = v73;
      if ( v72 )
      {
        if ( (_DWORD)v73 != *((unsigned __int16 *)v13 + 44) )
          goto LABEL_81;
      }
      v74 = v13[81];
      v112 = v74;
      if ( (unsigned int)v73 >= *(_DWORD *)(v74 + 16) )
        goto LABEL_81;
      if ( (*(_QWORD *)(*(_QWORD *)(v74 + 712) + 8 * v73) & 1) != 0 )
        goto LABEL_81;
      v75 = *(_QWORD *)(v74 + 704);
      v110 = 8 * v73;
      if ( !ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(8 * v73 + v75), 1u) )
        goto LABEL_81;
      if ( v108 >= *(_DWORD *)(v74 + 16) )
        goto LABEL_99;
      _mm_lfence();
      v76 = *(_QWORD *)(v74 + 712);
      v77 = *(_QWORD *)(v110 + v76);
      if ( (v77 & 1) != 0 )
        break;
      if ( *(_DWORD *)(v77 + 320) )
      {
        if ( v77 )
        {
          v78 = *(_DWORD *)(v77 + 12);
          if ( v72 )
          {
            v85 = (v78 & 0x1000000) != 0;
            v79 = v105;
            if ( v85 )
              v79 = -1073741790;
LABEL_94:
            v105 = v79;
          }
          else if ( (v78 & 0x80u) != 0 )
          {
            v79 = EtwpCheckLoggerControlAccess(0x200u, v77);
            goto LABEL_94;
          }
          ExReleaseRundownProtectionCacheAwareEx(
            *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*(_QWORD *)(v77 + 1360) + 704LL) + 8LL * *(unsigned int *)v77),
            1u);
          if ( !v105 )
            *((_WORD *)v60 + 50) |= 1 << (v59 & 0xF);
        }
      }
      else
      {
        EtwpReleaseLoggerContext(*(_QWORD *)(v110 + v76), 0LL);
      }
LABEL_81:
      ++v59;
      v71 += 16;
      if ( v59 >= 0x10 )
      {
        v7 = v118;
        v10 = (__int64)v60;
        Information = v107;
        goto LABEL_70;
      }
    }
    v74 = v112;
LABEL_99:
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v110 + *(_QWORD *)(v74 + 704)), 1u);
    goto LABEL_81;
  }
LABEL_62:
  EtwpUnreferenceGuidEntry((ULONG_PTR)v13);
  return (unsigned int)Information;
}
