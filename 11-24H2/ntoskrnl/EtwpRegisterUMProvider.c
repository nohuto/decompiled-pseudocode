/*
 * XREFs of EtwpRegisterUMProvider @ 0x140838D50
 * Callers:
 *     NtTraceControl @ 0x140A82250 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140289C10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     SeAccessCheck @ 0x1403B6900 (SeAccessCheck.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140405330 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     ObReferenceObjectByPointer @ 0x140424A50 (ObReferenceObjectByPointer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     EtwpAddGuidEntry @ 0x1408367C0 (EtwpAddGuidEntry.c)
 *     EtwpUpdateEnableMask @ 0x14083745C (EtwpUpdateEnableMask.c)
 *     EtwpCheckLoggerControlAccess @ 0x1408375F4 (EtwpCheckLoggerControlAccess.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x140837AF0 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpReferenceGuidEntry @ 0x140838980 (EtwpReferenceGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x140839DC0 (EtwpUnreferenceGuidEntry.c)
 *     EtwpApplyScopeFilters @ 0x140839F10 (EtwpApplyScopeFilters.c)
 *     EtwpTrackProviderRegistration @ 0x14083A130 (EtwpTrackProviderRegistration.c)
 *     EtwpCopySchematizedFilters @ 0x14083A308 (EtwpCopySchematizedFilters.c)
 *     ObpFreeObjectNameBuffer @ 0x14083AD40 (ObpFreeObjectNameBuffer.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     ObpAllocateObject @ 0x1408A3930 (ObpAllocateObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x1408A5340 (ObpCaptureObjectCreateInformation.c)
 *     EtwpReleaseLoggerContext @ 0x140945104 (EtwpReleaseLoggerContext.c)
 *     ObpRegisterObject @ 0x140AB162C (ObpRegisterObject.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  char *v19; // rbx
  _QWORD *i; // rbx
  __int64 v21; // rax
  void *v22; // rbx
  NTSTATUS Information; // ebx
  struct _KTHREAD *v24; // rax
  char *v25; // rax
  char *v26; // rsi
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
  __int64 Size; // rdx
  __int64 Type; // rcx
  int v40; // edx
  unsigned int DefaultNonPagedPoolCharge; // ecx
  void *v42; // rcx
  struct _KPRCB *v43; // rdx
  _GENERAL_LOOKASIDE *v44; // rcx
  volatile signed __int16 *v45; // r14
  _KPROCESS *Process; // rbx
  volatile signed __int16 **v47; // rax
  __int64 v48; // rcx
  int v50; // ecx
  signed __int64 v51; // rax
  signed __int64 v52; // rdx
  __int64 v53; // rtt
  __int64 v54; // rax
  unsigned int v55; // r14d
  volatile signed __int16 *v56; // r12
  char v57; // dl
  int v58; // r9d
  __int64 v59; // rcx
  unsigned __int16 v60; // si
  __int16 v61; // ax
  __int64 v62; // rax
  _DWORD *v63; // r14
  int v64; // edx
  int v65; // eax
  __int16 v66; // di
  unsigned __int16 *v67; // rsi
  __int16 v68; // di
  __int64 v69; // r8
  __int64 v70; // r13
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // r13
  int v74; // eax
  int v75; // eax
  unsigned int v76; // r9d
  _DWORD *v77; // r8
  __int64 v78; // r10
  __int64 v79; // r11
  int v80; // eax
  bool v81; // cf
  struct _KPRCB *v82; // rdx
  _GENERAL_LOOKASIDE *v83; // rcx
  void (__stdcall *FreeEx)(PVOID); // rdx
  unsigned int v85; // edx
  _DWORD *v86; // rcx
  __int64 v87; // r9
  __int64 v88; // rsi
  volatile signed __int16 *v89; // rsi
  struct _KTHREAD *v90; // rax
  unsigned __int64 *v91; // rbx
  char *v92; // rax
  char *v93; // rsi
  signed __int64 *v94; // rdi
  signed __int64 v95; // rax
  signed __int64 v96; // rdx
  signed __int64 v97; // rtt
  char v98; // dl
  unsigned __int16 v99[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v100; // [rsp+54h] [rbp-ACh] BYREF
  int v101; // [rsp+58h] [rbp-A8h]
  __int64 v102; // [rsp+60h] [rbp-A0h]
  unsigned int v103; // [rsp+68h] [rbp-98h]
  unsigned int v104; // [rsp+6Ch] [rbp-94h]
  NTSTATUS AccessStatus; // [rsp+70h] [rbp-90h] BYREF
  __int64 v106; // [rsp+78h] [rbp-88h]
  ACCESS_MASK GrantedAccess; // [rsp+80h] [rbp-80h] BYREF
  __int64 v108; // [rsp+88h] [rbp-78h]
  __int64 v109; // [rsp+90h] [rbp-70h] BYREF
  __int64 v110; // [rsp+98h] [rbp-68h] BYREF
  __int64 v111; // [rsp+A0h] [rbp-60h]
  __int128 v112; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v113; // [rsp+B8h] [rbp-48h] BYREF
  ULONGLONG v114; // [rsp+C0h] [rbp-40h]
  _QWORD v115[4]; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v116; // [rsp+E8h] [rbp-18h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+F8h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+118h] [rbp+18h] BYREF

  v6 = *(_DWORD *)(a2 + 16);
  v7 = a2;
  v111 = a5;
  LOWORD(v101) = *(_WORD *)(a2 + 20);
  v8 = *(_QWORD *)a2;
  v103 = a3;
  v9 = v8 - *(_QWORD *)&SecurityProviderGuid.Data1;
  v10 = 0LL;
  LOBYTE(v99[0]) = a4;
  v114 = a2;
  v110 = 0LL;
  v102 = 0LL;
  v100 = 0;
  v104 = v6;
  if ( !v9 )
    v9 = *(_QWORD *)(a2 + 8) - *(_QWORD *)SecurityProviderGuid.Data4;
  if ( !v9 )
    return 3221225506LL;
  v11 = *(_DWORD *)(a2 + 8);
  v12 = v6 - 2 > 1;
  v13 = 0LL;
  v14 = 56LL * ((*(_DWORD *)v7 ^ *(_DWORD *)(v7 + 4) ^ *(_DWORD *)(v7 + 12) ^ v11) & 0x3F);
  CurrentThread = KeGetCurrentThread();
  LODWORD(v106) = v12;
  v16 = a1 + v14 + 720;
  v17 = (_QWORD **)(v16 + 16LL * v12);
  --CurrentThread->KernelApcDisable;
  v18 = (signed __int64 *)(v16 + 48);
  v19 = (char *)KeAbPreAcquire(v16 + 48, 0LL);
  if ( _InterlockedCompareExchange64(v18, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v18, 0, v19, (__int64)v18);
  if ( v19 )
    v19[10] = 1;
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
    v13 = EtwpAddGuidEntry(a1, (_DWORD *)v7, v106);
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
      v90 = KeGetCurrentThread();
      --v90->KernelApcDisable;
      v91 = (unsigned __int64 *)(v13[82] + 664LL);
      v92 = (char *)KeAbPreAcquire((__int64)v91, 0LL);
      v93 = v92;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v91, 0LL) )
        ExfAcquirePushLockExclusiveEx(v91, v92, (__int64)v91);
      if ( v93 )
        v93[10] = 1;
      *(_QWORD *)(v13[82] + 672LL) = KeGetCurrentThread();
    }
    v24 = KeGetCurrentThread();
    --v24->KernelApcDisable;
    v25 = (char *)KeAbPreAcquire((__int64)(v13 + 83), 0LL);
    v26 = v25;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v13 + 166, 0LL) )
      ExfAcquirePushLockExclusiveEx(v13 + 83, v25, (__int64)(v13 + 83));
    if ( v26 )
      v26[10] = 1;
    v27 = 0;
    v28 = (unsigned int *)v111;
    v13[84] = KeGetCurrentThread();
    v29 = 160;
    *v28 = 160;
    v30 = v13[80];
    if ( v30 )
    {
      v85 = 0;
      v86 = v13 + 16;
      v87 = v30 + 88;
      do
      {
        if ( *v86 && *(_QWORD *)v87 )
          v27 += (*(_DWORD *)(*(_QWORD *)v87 + 16LL) + 7) & 0xFFFFFFF8;
        ++v85;
        v86 += 8;
        v87 += 104LL;
      }
      while ( v85 < 0x10 );
      v29 = *v28;
    }
    if ( v27 )
    {
      v29 = v27 + 176;
      *v28 = v27 + 176;
    }
    if ( v29 > v103 )
    {
      Information = -1073741789;
      goto LABEL_55;
    }
    v31 = *(_QWORD *)(v7 + 32);
    v113 = 0LL;
    CurrentPrcb = KeGetCurrentPrcb();
    v109 = 0LL;
    v115[1] = 0LL;
    v115[2] = 0LL;
    P = CurrentPrcb->PPLookasideList[4].P;
    v34 = EtwpRegistrationObjectType;
    v115[0] = 48LL;
    v115[3] = 64LL;
    ++P->TotalAllocates;
    v116 = 0LL;
    v112 = 0LL;
    v36 = (__int64)RtlpInterlockedPopEntrySList(&P->ListHead);
    if ( v36 )
      goto LABEL_32;
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[4].L;
    ++L->TotalAllocates;
    v36 = (__int64)RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( v36
      || (Size = L->Size,
          Type = (unsigned int)L->Type,
          ++L->AllocateMisses,
          (v36 = guard_dispatch_icall_no_overrides(Type, Size)) != 0) )
    {
LABEL_32:
      *(_DWORD *)v36 = CurrentPrcb->Number;
    }
    if ( !v36 )
    {
      v10 = v102;
      Information = -1073741670;
      goto LABEL_55;
    }
    v10 = 0LL;
    LOBYTE(v35) = 1;
    Information = ObpCaptureObjectCreateInformation(0, v35, (unsigned int)v115, (unsigned int)&v112, v36, 0);
    if ( Information < 0 )
    {
      v82 = KeGetCurrentPrcb();
      v83 = v82->PPLookasideList[4].P;
      ++v83->TotalFrees;
      if ( LOWORD(v83->ListHead.Alignment) < v83->Depth
        || (++v83->FreeMisses,
            v83 = v82->PPLookasideList[4].L,
            ++v83->TotalFrees,
            LOWORD(v83->ListHead.Alignment) < v83->Depth) )
      {
        RtlpInterlockedPushEntrySList(&v83->ListHead, (PSLIST_ENTRY)v36);
        goto LABEL_55;
      }
      ++v83->FreeMisses;
      FreeEx = (void (__stdcall *)(PVOID))v83->FreeEx;
      if ( FreeEx == ExFreePool )
        goto LABEL_117;
      goto LABEL_139;
    }
    if ( (*(_DWORD *)v36 & v34->TypeInfo.InvalidAttributes) != 0 )
    {
      Information = -1073741811;
LABEL_38:
      if ( *((_QWORD *)&v112 + 1) )
        ObpFreeObjectNameBuffer(&v112);
      v42 = *(void **)(v36 + 32);
      if ( v42 )
      {
        if ( *(_BYTE *)(v36 + 16) <= 1u )
          ExFreePoolWithTag(v42, 0);
        *(_QWORD *)(v36 + 32) = 0LL;
      }
      v43 = KeGetCurrentPrcb();
      v44 = v43->PPLookasideList[4].P;
      ++v44->TotalFrees;
      if ( LOWORD(v44->ListHead.Alignment) < v44->Depth
        || (++v44->FreeMisses,
            v44 = v43->PPLookasideList[4].L,
            ++v44->TotalFrees,
            LOWORD(v44->ListHead.Alignment) < v44->Depth) )
      {
        RtlpInterlockedPushEntrySList(&v44->ListHead, (PSLIST_ENTRY)v36);
LABEL_55:
        v13[84] = 0LL;
        _m_prefetchw(v13 + 83);
        v51 = v13[83];
        v52 = v51 - 16;
        if ( (v51 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v52 = 0LL;
        if ( (v51 & 2) != 0 || (v53 = v13[83], v53 != _InterlockedCompareExchange64(v13 + 83, v52, v51)) )
          ExfReleasePushLock(v13 + 83);
        KeAbPostRelease((ULONG_PTR)(v13 + 83));
        KeLeaveCriticalRegionThread();
        v54 = v13[82];
        if ( v54 )
        {
          *(_QWORD *)(v54 + 672) = 0LL;
          v94 = (signed __int64 *)(v13[82] + 664LL);
          _m_prefetchw(v94);
          v95 = *v94;
          v96 = *v94 - 16;
          if ( (*v94 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v96 = 0LL;
          if ( (v95 & 2) != 0 || (v97 = *v94, v97 != _InterlockedCompareExchange64(v94, v96, v95)) )
            ExfReleasePushLock(v94);
          KeAbPostRelease((ULONG_PTR)v94);
          KeLeaveCriticalRegionThread();
        }
        if ( v10 )
          ObfDereferenceObject((PVOID)v10);
        goto LABEL_62;
      }
      ++v44->FreeMisses;
      FreeEx = (void (__stdcall *)(PVOID))v44->FreeEx;
      if ( FreeEx == ExFreePool )
      {
LABEL_117:
        ExFreePool((PVOID)v36);
        goto LABEL_55;
      }
LABEL_139:
      guard_dispatch_icall_no_overrides(v36, FreeEx);
      goto LABEL_55;
    }
    if ( (*(_DWORD *)v36 & 0x10) != 0 && !SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, 0) )
    {
      Information = -1073741727;
      goto LABEL_38;
    }
    DefaultNonPagedPoolCharge = v34->TypeInfo.DefaultNonPagedPoolCharge;
    *(_DWORD *)(v36 + 20) = v34->TypeInfo.DefaultPagedPoolCharge;
    LOBYTE(v40) = 1;
    *(_DWORD *)(v36 + 24) = DefaultNonPagedPoolCharge;
    Information = ObpAllocateObject(v36, v40, (_DWORD)v34, (unsigned int)&v112, 120, (__int64)&v109, 0LL);
    if ( Information < 0 )
      goto LABEL_38;
    v88 = v109;
    if ( ObpTraceFlags )
    {
      ObpRegisterObject(v109);
      ObpPushStackInfo(v88, 1, 1u, 0x746C6644u);
    }
    v89 = (volatile signed __int16 *)(v88 + 48);
    EtwpReferenceGuidEntry((ULONG_PTR)v13);
    v45 = v89 + 49;
    if ( v104 == 2 )
      _InterlockedOr16(v89 + 49, 8u);
    *((_QWORD *)v89 + 11) = v31;
    _InterlockedOr16(v45, 2u);
    Process = KeGetCurrentThread()->ApcState.Process;
    ObfReferenceObjectWithTag(Process, 0x52777445u);
    *((_WORD *)v89 + 48) = v101;
    v47 = (volatile signed __int16 **)(v13 + 7);
    *((_QWORD *)v89 + 10) = Process;
    *((_QWORD *)v89 + 11) = v31;
    *((_QWORD *)v89 + 4) = v13;
    v48 = v13[7];
    if ( *(_QWORD **)(v48 + 8) != v13 + 7 )
      __fastfail(3u);
    *((_QWORD *)v89 + 1) = v47;
    *(_QWORD *)v89 = v48;
    *(_QWORD *)(v48 + 8) = v89;
    *v47 = v89;
    *((_QWORD *)v89 + 3) = v89 + 8;
    *((_QWORD *)v89 + 2) = v89 + 8;
    _InterlockedOr16(v45, 0x40u);
    ObReferenceObjectByPointer((PVOID)v89, 0, EtwpRegistrationObjectType, 0);
    v55 = 0;
    Information = ObInsertObjectEx((PVOID)v89, 0, (__int64)&v113, (__int64)&v110);
    v10 = (__int64)v89;
    v56 = v89;
    if ( Information < 0 )
      goto LABEL_55;
    ObfDereferenceObject((PVOID)v89);
    if ( LOBYTE(v99[0]) )
      _InterlockedOr16(v89 + 49, 0x80u);
    *(_QWORD *)(v7 + 24) = v110;
    if ( !*((_DWORD *)v13 + 24) )
    {
LABEL_70:
      v57 = *(_BYTE *)(v10 + 98);
      v99[0] = *(_WORD *)(v10 + 100);
      EtwpApplyScopeFilters(v10, (v57 & 8) != 0, 0, 0, (__int64)v99);
      v59 = v13[82];
      if ( v59 )
      {
        if ( *(_DWORD *)(v59 + 96) )
          EtwpUpdateEnableMask(v59, (*(_BYTE *)(v10 + 98) & 8) != 0, 1, 1, (_WORD *)(v10 + 104));
        LOBYTE(v58) = 1;
        v98 = *(_BYTE *)(v10 + 98);
        v100 = *(_WORD *)(v10 + 104);
        EtwpApplyScopeFilters(v10, (v98 & 8) != 0, 0, v58, (__int64)&v100);
      }
      v60 = v99[0];
      v61 = v100;
      if ( (*(_BYTE *)(v10 + 98) & 8) != 0 )
      {
        *(_WORD *)(v10 + 104) = v100;
      }
      else
      {
        v60 = *(_WORD *)(v10 + 100) & v99[0];
        *(_WORD *)(v10 + 104) &= v100;
        v61 = *(_WORD *)(v10 + 104);
      }
      *(_WORD *)(v10 + 100) = v60;
      v99[0] = v60;
      if ( v60 || v61 )
      {
        EtwpComputeRegEntryEnableInfo(v10, v7 + 112);
        v65 = *((_BYTE *)v13 + 91) & 1;
        BYTE3(v102) = 0;
        *(_DWORD *)(v7 + 152) = v65;
        LOWORD(v102) = *((_WORD *)v13 + 44);
        BYTE2(v102) = *((_BYTE *)v13 + 90);
        HIDWORD(v102) = *((_DWORD *)v13 + 20);
        v62 = v102;
      }
      else
      {
        v62 = 0LL;
        *(_OWORD *)(v7 + 112) = 0LL;
        *(_OWORD *)(v7 + 128) = 0LL;
        *(_DWORD *)(v7 + 152) = 0;
      }
      v63 = (_DWORD *)v111;
      *(_QWORD *)(v7 + 144) = v62;
      v64 = 0;
      *v63 = 160;
      if ( !v13[80] )
        goto LABEL_77;
      v76 = 0;
      v77 = v13 + 16;
      v78 = 0LL;
      do
      {
        if ( *v77 )
        {
          v79 = *(_QWORD *)(v78 + v13[80] + 88);
          if ( v79 )
          {
            v80 = v60;
            if ( _bittest(&v80, (unsigned __int8)v76) )
              v64 += (*(_DWORD *)(v79 + 16) + 7) & 0xFFFFFFF8;
          }
        }
        ++v76;
        v77 += 8;
        v78 += 104LL;
      }
      while ( v76 < 0x10 );
      if ( v64 )
      {
        *v63 = v64 + 176;
        *(_DWORD *)(v7 + 168) = v64;
        *(_DWORD *)(v7 + 172) = 0x80000000;
        *(_QWORD *)(v7 + 160) = 136LL;
        EtwpCopySchematizedFilters((void *)(v7 + 176));
        v50 = 1;
      }
      else
      {
LABEL_77:
        v50 = 0;
      }
      *(_DWORD *)(v7 + 156) = v50;
      *(_DWORD *)(v7 + 44) = *v63;
      EtwpTrackProviderRegistration(v10);
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_REGISTER) )
      {
        UserData.Ptr = v7;
        *(_QWORD *)&UserData.Size = 16LL;
        EtwWrite(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_REGISTER, 0LL, 1u, &UserData);
      }
      goto LABEL_55;
    }
    v66 = *((_WORD *)v89 + 49);
    v67 = (unsigned __int16 *)v13 + 67;
    v103 = Information;
    v68 = v66 & 8;
    while ( 1 )
    {
      if ( !*(_DWORD *)(v67 - 3) )
        goto LABEL_81;
      v69 = *v67;
      v101 = 0;
      v104 = v69;
      if ( v68 )
      {
        if ( (_DWORD)v69 != *((unsigned __int16 *)v13 + 44) )
          goto LABEL_81;
      }
      v70 = v13[81];
      v108 = v70;
      if ( (unsigned int)v69 >= *(_DWORD *)(v70 + 16) )
        goto LABEL_81;
      if ( (*(_QWORD *)(*(_QWORD *)(v70 + 712) + 8 * v69) & 1) != 0 )
        goto LABEL_81;
      v71 = *(_QWORD *)(v70 + 704);
      v106 = 8 * v69;
      if ( !ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(8 * v69 + v71), 1u) )
        goto LABEL_81;
      if ( v104 >= *(_DWORD *)(v70 + 16) )
        goto LABEL_99;
      _mm_lfence();
      v72 = *(_QWORD *)(v70 + 712);
      v73 = *(_QWORD *)(v106 + v72);
      if ( (v73 & 1) != 0 )
        break;
      if ( *(_DWORD *)(v73 + 320) )
      {
        if ( v73 )
        {
          v74 = *(_DWORD *)(v73 + 12);
          if ( v68 )
          {
            v81 = (v74 & 0x1000000) != 0;
            v75 = v101;
            if ( v81 )
              v75 = -1073741790;
LABEL_94:
            v101 = v75;
          }
          else if ( (v74 & 0x80u) != 0 )
          {
            v75 = EtwpCheckLoggerControlAccess(0x200u, v73);
            goto LABEL_94;
          }
          ExReleaseRundownProtectionCacheAwareEx(
            *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*(_QWORD *)(v73 + 1360) + 704LL) + 8LL * *(unsigned int *)v73),
            1u);
          if ( !v101 )
            *((_WORD *)v56 + 50) |= 1 << (v55 & 0xF);
        }
      }
      else
      {
        EtwpReleaseLoggerContext(*(_QWORD *)(v106 + v72), 0LL);
      }
LABEL_81:
      ++v55;
      v67 += 16;
      if ( v55 >= 0x10 )
      {
        v7 = v114;
        v10 = (__int64)v56;
        Information = v103;
        goto LABEL_70;
      }
    }
    v70 = v108;
LABEL_99:
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v106 + *(_QWORD *)(v70 + 704)), 1u);
    goto LABEL_81;
  }
LABEL_62:
  EtwpUnreferenceGuidEntry((ULONG_PTR)v13);
  return (unsigned int)Information;
}
