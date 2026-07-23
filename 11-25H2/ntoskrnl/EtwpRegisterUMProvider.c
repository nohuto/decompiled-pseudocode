/*
 * XREFs of EtwpRegisterUMProvider @ 0x14089D2F0
 * Callers:
 *     NtTraceControl @ 0x140895400 (NtTraceControl.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140257AF0 (EtwWrite.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x14030BEC0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     SeAccessCheck @ 0x1403624F0 (SeAccessCheck.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140405F50 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ObReferenceObjectByPointer @ 0x140435FB0 (ObReferenceObjectByPointer.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     ObpAllocateObject @ 0x14085AAF0 (ObpAllocateObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x14085C5F0 (ObpCaptureObjectCreateInformation.c)
 *     EtwpUpdateEnableMask @ 0x140896F0C (EtwpUpdateEnableMask.c)
 *     EtwpCheckLoggerControlAccess @ 0x1408970A0 (EtwpCheckLoggerControlAccess.c)
 *     EtwpAddGuidEntry @ 0x1408995E0 (EtwpAddGuidEntry.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x14089B4A0 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpReferenceGuidEntry @ 0x14089BAD0 (EtwpReferenceGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x14089E370 (EtwpUnreferenceGuidEntry.c)
 *     EtwpApplyScopeFilters @ 0x14089E4C0 (EtwpApplyScopeFilters.c)
 *     EtwpTrackProviderRegistration @ 0x14089E6D0 (EtwpTrackProviderRegistration.c)
 *     EtwpCopySchematizedFilters @ 0x14089E8F4 (EtwpCopySchematizedFilters.c)
 *     ObpFreeObjectNameBuffer @ 0x14089F1A0 (ObpFreeObjectNameBuffer.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 *     EtwpReleaseLoggerContext @ 0x1409FF024 (EtwpReleaseLoggerContext.c)
 *     ObpRegisterObject @ 0x140AB24BC (ObpRegisterObject.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpRegisterUMProvider(__int64 a1, ULONGLONG a2, unsigned int a3, char a4, __int64 a5)
{
  int v6; // ecx
  ULONGLONG v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  volatile signed __int16 *v10; // r14
  int v11; // eax
  BOOL v12; // edx
  _QWORD *v13; // r15
  __int64 v14; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v16; // rcx
  _QWORD **v17; // rsi
  signed __int64 *v18; // r12
  __int64 *v19; // rbx
  _QWORD *i; // rbx
  __int64 v21; // rax
  void *v22; // rbx
  int inserted; // ebx
  struct _KTHREAD *v24; // rax
  __int64 *v25; // rax
  __int64 *v26; // rsi
  int v27; // r8d
  unsigned int *v28; // r10
  unsigned int v29; // eax
  __int64 v30; // r9
  __int64 v31; // r12
  POBJECT_TYPE v32; // r14
  struct _KPRCB *CurrentPrcb; // r13
  _GENERAL_LOOKASIDE *P; // rbx
  _SLIST_ENTRY *v35; // rsi
  unsigned int DefaultNonPagedPoolCharge; // ecx
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v38; // rdx
  _GENERAL_LOOKASIDE *v39; // rcx
  volatile signed __int16 *v40; // r14
  _KPROCESS *Process; // rbx
  volatile signed __int16 **v42; // rax
  __int64 v43; // rcx
  struct _KPRCB *v44; // rdx
  int v45; // ecx
  signed __int64 v46; // rax
  signed __int64 v47; // rdx
  __int64 v48; // rtt
  __int64 v49; // rax
  volatile signed __int16 *v51; // r12
  char v52; // dl
  int v53; // r9d
  __int64 v54; // rcx
  unsigned __int8 v55; // si
  char v56; // al
  __int64 v57; // rax
  _DWORD *v58; // r12
  int v59; // r8d
  int v60; // eax
  __int16 v61; // di
  unsigned int v62; // r14d
  unsigned __int16 *v63; // rsi
  __int16 v64; // di
  __int64 v65; // r8
  __int64 v66; // r13
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // r13
  int v70; // eax
  int v71; // eax
  unsigned int v72; // edx
  _DWORD *v73; // rcx
  __int64 v74; // r9
  _GENERAL_LOOKASIDE *L; // rbx
  __int64 Type; // rcx
  unsigned int v77; // r10d
  _DWORD *v78; // r9
  __int64 v79; // r11
  __int64 v80; // r14
  bool v81; // cf
  __int64 v82; // rsi
  volatile signed __int16 *v83; // rsi
  struct _KTHREAD *v84; // rax
  unsigned __int64 *v85; // rbx
  __int64 *v86; // rax
  __int64 *v87; // rsi
  signed __int64 *v88; // rdi
  signed __int64 v89; // rax
  signed __int64 v90; // rdx
  signed __int64 v91; // rtt
  char v92; // dl
  char v93; // [rsp+50h] [rbp-B0h] BYREF
  char v94[3]; // [rsp+51h] [rbp-AFh] BYREF
  int v95; // [rsp+54h] [rbp-ACh]
  __int64 v96; // [rsp+58h] [rbp-A8h]
  volatile signed __int16 *v97; // [rsp+60h] [rbp-A0h]
  unsigned int v98; // [rsp+68h] [rbp-98h]
  NTSTATUS AccessStatus; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v100; // [rsp+70h] [rbp-90h]
  ACCESS_MASK GrantedAccess; // [rsp+78h] [rbp-88h] BYREF
  __int64 v102; // [rsp+80h] [rbp-80h]
  __int64 v103; // [rsp+88h] [rbp-78h] BYREF
  __int64 v104; // [rsp+90h] [rbp-70h] BYREF
  __int64 v105; // [rsp+98h] [rbp-68h]
  __int128 v106; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v107; // [rsp+B0h] [rbp-50h] BYREF
  ULONGLONG v108; // [rsp+B8h] [rbp-48h]
  _QWORD v109[4]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v110; // [rsp+E0h] [rbp-20h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+F0h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+110h] [rbp+10h] BYREF

  v6 = *(_DWORD *)(a2 + 16);
  v7 = a2;
  v105 = a5;
  LOWORD(v95) = *(_WORD *)(a2 + 20);
  v8 = *(_QWORD *)a2;
  v98 = a3;
  v9 = v8 - *(_QWORD *)&SecurityProviderGuid.Data1;
  v10 = 0LL;
  v93 = a4;
  v108 = a2;
  v104 = 0LL;
  v97 = 0LL;
  v94[0] = 0;
  LODWORD(v96) = v6;
  if ( !v9 )
    v9 = *(_QWORD *)(a2 + 8) - *(_QWORD *)SecurityProviderGuid.Data4;
  if ( v9 )
  {
    v11 = *(_DWORD *)(a2 + 8);
    v12 = (unsigned int)(v6 - 2) > 1;
    v13 = 0LL;
    v14 = 56LL * ((*(_DWORD *)v7 ^ *(_DWORD *)(v7 + 4) ^ *(_DWORD *)(v7 + 12) ^ v11) & 0x3F);
    CurrentThread = KeGetCurrentThread();
    LODWORD(v100) = v12;
    v16 = a1 + v14 + 464;
    v17 = (_QWORD **)(v16 + 16LL * v12);
    --CurrentThread->KernelApcDisable;
    v18 = (signed __int64 *)(v16 + 48);
    v19 = KeAbPreAcquire(v16 + 48, 0LL);
    if ( _InterlockedCompareExchange64(v18, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v18, 0, v19, (unsigned __int64)v18);
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( !v13 )
    {
      v13 = EtwpAddGuidEntry(a1, (_DWORD *)v7, v100);
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
    inserted = AccessStatus;
    if ( AccessStatus )
    {
LABEL_62:
      EtwpUnreferenceGuidEntry(v13);
      return (unsigned int)inserted;
    }
    if ( v13[50] )
    {
      v84 = KeGetCurrentThread();
      --v84->KernelApcDisable;
      v85 = (unsigned __int64 *)(v13[50] + 408LL);
      v86 = KeAbPreAcquire((__int64)v85, 0LL);
      v87 = v86;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v85, 0LL) )
        ExfAcquirePushLockExclusiveEx(v85, v86, (__int64)v85);
      if ( v87 )
        *((_BYTE *)v87 + 10) = 1;
      *(_QWORD *)(v13[50] + 416LL) = KeGetCurrentThread();
    }
    v24 = KeGetCurrentThread();
    --v24->KernelApcDisable;
    v25 = KeAbPreAcquire((__int64)(v13 + 51), 0LL);
    v26 = v25;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v13 + 102, 0LL) )
      ExfAcquirePushLockExclusiveEx(v13 + 51, v25, (__int64)(v13 + 51));
    if ( v26 )
      *((_BYTE *)v26 + 10) = 1;
    v27 = 0;
    v28 = (unsigned int *)v105;
    v13[52] = KeGetCurrentThread();
    v29 = 160;
    *v28 = 160;
    v30 = v13[48];
    if ( v30 )
    {
      v72 = 0;
      v73 = v13 + 16;
      v74 = v30 + 88;
      do
      {
        if ( *v73 && *(_QWORD *)v74 )
          v27 += (*(_DWORD *)(*(_QWORD *)v74 + 16LL) + 7) & 0xFFFFFFF8;
        ++v72;
        v73 += 8;
        v74 += 104LL;
      }
      while ( v72 < 8 );
      v29 = *v28;
    }
    if ( v27 )
    {
      v29 = v27 + 176;
      *v28 = v27 + 176;
    }
    if ( v29 > v98 )
    {
      inserted = -1073741789;
      goto LABEL_55;
    }
    v31 = *(_QWORD *)(v7 + 32);
    v32 = EtwpRegistrationObjectType;
    v107 = 0LL;
    v109[1] = 0LL;
    v109[2] = 0LL;
    v103 = 0LL;
    CurrentPrcb = KeGetCurrentPrcb();
    v109[0] = 48LL;
    v109[3] = 64LL;
    v110 = 0LL;
    P = CurrentPrcb->PPLookasideList[4].P;
    v106 = 0LL;
    ++P->TotalAllocates;
    v35 = RtlpInterlockedPopEntrySList(&P->ListHead);
    if ( v35
      || (++P->AllocateMisses,
          L = CurrentPrcb->PPLookasideList[4].L,
          ++L->TotalAllocates,
          (v35 = RtlpInterlockedPopEntrySList(&L->ListHead)) != 0LL)
      || (Type = (unsigned int)L->Type,
          ++L->AllocateMisses,
          (v35 = (_SLIST_ENTRY *)guard_dispatch_icall_no_overrides(Type)) != 0LL) )
    {
      LODWORD(v35->Next) = CurrentPrcb->Number;
    }
    if ( !v35 )
    {
      v10 = v97;
      inserted = -1073741670;
      goto LABEL_55;
    }
    inserted = ObpCaptureObjectCreateInformation(0, 1, (__int64)v109, &v106, (__int64)v35, 0);
    if ( inserted < 0 )
    {
      v44 = KeGetCurrentPrcb();
      v39 = v44->PPLookasideList[4].P;
      ++v39->TotalFrees;
      if ( LOWORD(v39->ListHead.Alignment) >= v39->Depth )
      {
        ++v39->FreeMisses;
        v39 = v44->PPLookasideList[4].L;
        ++v39->TotalFrees;
        if ( LOWORD(v39->ListHead.Alignment) >= v39->Depth )
        {
          ++v39->FreeMisses;
          if ( (void (__stdcall *)(PVOID))v39->FreeEx == ExFreePool )
          {
            ExFreePool(v35);
            v10 = 0LL;
            goto LABEL_55;
          }
          goto LABEL_140;
        }
      }
LABEL_49:
      RtlpInterlockedPushEntrySList(&v39->ListHead, v35);
LABEL_50:
      v10 = 0LL;
LABEL_55:
      v13[52] = 0LL;
      _m_prefetchw(v13 + 51);
      v46 = v13[51];
      v47 = v46 - 16;
      if ( (v46 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v47 = 0LL;
      if ( (v46 & 2) != 0 || (v48 = v13[51], v48 != _InterlockedCompareExchange64(v13 + 51, v47, v46)) )
        ExfReleasePushLock(v13 + 51);
      KeAbPostRelease((ULONG_PTR)(v13 + 51));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v49 = v13[50];
      if ( v49 )
      {
        *(_QWORD *)(v49 + 416) = 0LL;
        v88 = (signed __int64 *)(v13[50] + 408LL);
        _m_prefetchw(v88);
        v89 = *v88;
        v90 = *v88 - 16;
        if ( (*v88 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v90 = 0LL;
        if ( (v89 & 2) != 0 || (v91 = *v88, v91 != _InterlockedCompareExchange64(v88, v90, v89)) )
          ExfReleasePushLock(v88);
        KeAbPostRelease((ULONG_PTR)v88);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      }
      if ( v10 )
        ObfDereferenceObject((PVOID)v10);
      goto LABEL_62;
    }
    if ( ((__int64)v35->Next & v32->TypeInfo.InvalidAttributes) != 0 )
    {
      inserted = -1073741811;
LABEL_36:
      if ( *((_QWORD *)&v106 + 1) )
        ObpFreeObjectNameBuffer(&v106);
      Next = v35[2].Next;
      if ( Next )
      {
        if ( LOBYTE(v35[1].Next) <= 1u )
          ExFreePoolWithTag(Next, 0);
        v35[2].Next = 0LL;
      }
      v38 = KeGetCurrentPrcb();
      v39 = v38->PPLookasideList[4].P;
      ++v39->TotalFrees;
      if ( LOWORD(v39->ListHead.Alignment) >= v39->Depth )
      {
        ++v39->FreeMisses;
        v39 = v38->PPLookasideList[4].L;
        ++v39->TotalFrees;
        if ( LOWORD(v39->ListHead.Alignment) >= v39->Depth )
        {
          ++v39->FreeMisses;
          if ( (void (__stdcall *)(PVOID))v39->FreeEx == ExFreePool )
          {
            ExFreePool(v35);
            goto LABEL_50;
          }
LABEL_140:
          guard_dispatch_icall_no_overrides(v35);
          goto LABEL_50;
        }
      }
      goto LABEL_49;
    }
    if ( ((__int64)v35->Next & 0x10) != 0 && !SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, 0) )
    {
      inserted = -1073741727;
      goto LABEL_36;
    }
    DefaultNonPagedPoolCharge = v32->TypeInfo.DefaultNonPagedPoolCharge;
    HIDWORD(v35[1].Next) = v32->TypeInfo.DefaultPagedPoolCharge;
    *((_DWORD *)&v35[1].Next + 2) = DefaultNonPagedPoolCharge;
    inserted = ObpAllocateObject(v35, 1, (__int64)v32, &v106, 112, &v103, 0LL);
    if ( inserted < 0 )
      goto LABEL_36;
    v82 = v103;
    if ( ObpTraceFlags )
    {
      ObpRegisterObject(v103);
      ObpPushStackInfo(v82, 1, 1u, 0x746C6644u);
    }
    v83 = (volatile signed __int16 *)(v82 + 48);
    EtwpReferenceGuidEntry((ULONG_PTR)v13);
    v40 = v83 + 49;
    if ( (_DWORD)v96 == 2 )
      _InterlockedOr16(v83 + 49, 8u);
    *((_QWORD *)v83 + 11) = v31;
    _InterlockedOr16(v40, 2u);
    Process = KeGetCurrentThread()->ApcState.Process;
    ObfReferenceObjectWithTag(Process, 0x52777445u);
    *((_WORD *)v83 + 48) = v95;
    v42 = (volatile signed __int16 **)(v13 + 7);
    *((_QWORD *)v83 + 10) = Process;
    *((_QWORD *)v83 + 11) = v31;
    *((_QWORD *)v83 + 4) = v13;
    v43 = v13[7];
    if ( *(_QWORD **)(v43 + 8) != v13 + 7 )
      __fastfail(3u);
    *((_QWORD *)v83 + 1) = v42;
    *(_QWORD *)v83 = v43;
    *(_QWORD *)(v43 + 8) = v83;
    *v42 = v83;
    *((_QWORD *)v83 + 3) = v83 + 8;
    *((_QWORD *)v83 + 2) = v83 + 8;
    _InterlockedOr16(v40, 0x40u);
    ObReferenceObjectByPointer((PVOID)v83, 0, EtwpRegistrationObjectType, 0);
    inserted = ObInsertObjectEx((PVOID)v83, 0LL, 0, (__int64)&v107, (__int64)&v104);
    v10 = v83;
    v51 = v83;
    if ( inserted < 0 )
      goto LABEL_55;
    ObfDereferenceObject((PVOID)v83);
    if ( v93 )
      _InterlockedOr16(v83 + 49, 0x80u);
    *(_QWORD *)(v7 + 24) = v104;
    v97 = v83;
    if ( !*((_DWORD *)v13 + 24) )
    {
LABEL_72:
      v52 = *((_BYTE *)v10 + 98);
      v93 = *((_BYTE *)v10 + 100);
      EtwpApplyScopeFilters((_DWORD)v10, (v52 & 8) != 0, 0, 0, (__int64)&v93);
      v54 = v13[50];
      if ( v54 )
      {
        if ( *(_DWORD *)(v54 + 96) )
          EtwpUpdateEnableMask(v54, (v10[49] & 8) != 0, 1, 1, (_BYTE *)v10 + 102);
        LOBYTE(v53) = 1;
        v92 = *((_BYTE *)v10 + 98);
        v94[0] = *((_BYTE *)v10 + 102);
        EtwpApplyScopeFilters((_DWORD)v10, (v92 & 8) != 0, 0, v53, (__int64)v94);
      }
      v55 = v93;
      v56 = v94[0];
      if ( (v10[49] & 8) != 0 )
      {
        *((_BYTE *)v10 + 102) = v94[0];
      }
      else
      {
        v55 = v10[50] & v93;
        *((_BYTE *)v10 + 102) &= v94[0];
        v56 = *((_BYTE *)v10 + 102);
      }
      *((_BYTE *)v10 + 100) = v55;
      v93 = v55;
      if ( v55 || v56 )
      {
        EtwpComputeRegEntryEnableInfo((__int64)v10, v7 + 112);
        v60 = *((_BYTE *)v13 + 91) & 1;
        BYTE3(v96) = 0;
        *(_DWORD *)(v7 + 152) = v60;
        LOWORD(v96) = *((_WORD *)v13 + 44);
        BYTE2(v96) = *((_BYTE *)v13 + 90);
        HIDWORD(v96) = *((_DWORD *)v13 + 20);
        v57 = v96;
      }
      else
      {
        v57 = 0LL;
        *(_OWORD *)(v7 + 112) = 0LL;
        *(_OWORD *)(v7 + 128) = 0LL;
        *(_DWORD *)(v7 + 152) = 0;
      }
      v58 = (_DWORD *)v105;
      v59 = 0;
      *(_QWORD *)(v7 + 144) = v57;
      *v58 = 160;
      if ( v13[48] )
      {
        v77 = 0;
        v78 = v13 + 16;
        v79 = 0LL;
        do
        {
          if ( *v78 )
          {
            v80 = *(_QWORD *)(v79 + v13[48] + 88);
            if ( v80 )
            {
              if ( ((unsigned __int8)(1 << v77) & v55) != 0 )
                v59 += (*(_DWORD *)(v80 + 16) + 7) & 0xFFFFFFF8;
            }
          }
          ++v77;
          v78 += 8;
          v79 += 104LL;
        }
        while ( v77 < 8 );
        if ( v59 )
        {
          *v58 = v59 + 176;
          *(_DWORD *)(v7 + 168) = v59;
          *(_DWORD *)(v7 + 172) = 0x80000000;
          *(_QWORD *)(v7 + 160) = 136LL;
          EtwpCopySchematizedFilters((void *)(v7 + 176));
          v10 = v97;
          v45 = 1;
          goto LABEL_53;
        }
        v10 = v97;
      }
      v45 = 0;
LABEL_53:
      *(_DWORD *)(v7 + 156) = v45;
      *(_DWORD *)(v7 + 44) = *v58;
      EtwpTrackProviderRegistration(v10);
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_REGISTER) )
      {
        UserData.Ptr = v7;
        *(_QWORD *)&UserData.Size = 16LL;
        EtwWrite(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_REGISTER, 0LL, 1u, &UserData);
      }
      goto LABEL_55;
    }
    v61 = *((_WORD *)v83 + 49);
    v62 = 0;
    v98 = inserted;
    v63 = (unsigned __int16 *)v13 + 67;
    v64 = v61 & 8;
    v97 = v51;
    while ( 1 )
    {
      if ( !*(_DWORD *)(v63 - 3) )
        goto LABEL_83;
      v65 = *v63;
      LODWORD(v96) = *v63;
      v95 = 0;
      if ( v64 )
      {
        if ( (_DWORD)v65 != *((unsigned __int16 *)v13 + 44) )
          goto LABEL_83;
      }
      v66 = v13[49];
      v102 = v66;
      if ( (unsigned int)v65 >= *(_DWORD *)(v66 + 16) )
        goto LABEL_83;
      if ( (*(_QWORD *)(*(_QWORD *)(v66 + 456) + 8 * v65) & 1) != 0 )
        goto LABEL_83;
      v67 = *(_QWORD *)(v66 + 448);
      v100 = 8 * v65;
      if ( !ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v67 + 8 * v65), 1u) )
        goto LABEL_83;
      if ( (unsigned int)v96 >= *(_DWORD *)(v66 + 16) )
        goto LABEL_101;
      _mm_lfence();
      v68 = *(_QWORD *)(v66 + 456);
      v69 = *(_QWORD *)(v100 + v68);
      if ( (v69 & 1) != 0 )
        break;
      if ( *(_DWORD *)(v69 + 320) )
      {
        if ( v69 )
        {
          v70 = *(_DWORD *)(v69 + 12);
          if ( v64 )
          {
            v81 = (v70 & 0x1000000) != 0;
            v71 = v95;
            if ( v81 )
              v71 = -1073741790;
LABEL_96:
            v95 = v71;
          }
          else if ( (v70 & 0x80u) != 0 )
          {
            v71 = EtwpCheckLoggerControlAccess(0x200u, v69);
            goto LABEL_96;
          }
          ExReleaseRundownProtectionCacheAwareEx(
            *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*(_QWORD *)(v69 + 1360) + 448LL) + 8LL * *(unsigned int *)v69),
            1u);
          if ( !v95 )
            *((_BYTE *)v51 + 100) |= 1 << v62;
        }
      }
      else
      {
        EtwpReleaseLoggerContext(*(_QWORD *)(v100 + v68), 0LL);
      }
LABEL_83:
      ++v62;
      v63 += 16;
      if ( v62 >= 8 )
      {
        v7 = v108;
        v10 = v51;
        inserted = v98;
        goto LABEL_72;
      }
    }
    v66 = v102;
LABEL_101:
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v100 + *(_QWORD *)(v66 + 448)), 1u);
    goto LABEL_83;
  }
  return 3221225506LL;
}
