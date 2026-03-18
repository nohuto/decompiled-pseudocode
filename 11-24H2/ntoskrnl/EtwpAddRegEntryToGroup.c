/*
 * XREFs of EtwpAddRegEntryToGroup @ 0x140839260
 * Callers:
 *     EtwpSetProviderTraitsCommon @ 0x1408361EC (EtwpSetProviderTraitsCommon.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     KeStackAttachProcess @ 0x1402473F0 (KeStackAttachProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140259600 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x14040CCA0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     bsearch @ 0x1404FE760 (bsearch.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     EtwpGetSchematizedFilterSize @ 0x1408384F4 (EtwpGetSchematizedFilterSize.c)
 *     EtwpProviderArrivalCallback @ 0x140838564 (EtwpProviderArrivalCallback.c)
 *     EtwpEventWriteGroupJoin @ 0x140838DC8 (EtwpEventWriteGroupJoin.c)
 *     EtwpAccessCheckFromState @ 0x140839BF8 (EtwpAccessCheckFromState.c)
 *     EtwpIsGuidAllowed @ 0x14083A0B4 (EtwpIsGuidAllowed.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x14083A9D0 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpFindOrCreateGuidEntry @ 0x14083ACCC (EtwpFindOrCreateGuidEntry.c)
 *     EtwpReferenceGuidEntry @ 0x14083AFE0 (EtwpReferenceGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x14083D760 (EtwpUnreferenceGuidEntry.c)
 *     EtwpApplyScopeFilters @ 0x14083D8B0 (EtwpApplyScopeFilters.c)
 *     EtwpCopySchematizedFilters @ 0x14083DD00 (EtwpCopySchematizedFilters.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140926F50 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14095D644 (EtwpReleaseLoggerContext.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpAddRegEntryToGroup(__int64 a1, int a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  char v6; // r9
  __int16 v7; // r15
  __int64 v9; // rax
  __int64 v10; // r13
  int GuidEntry; // r12d
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v13; // rbx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  _QWORD *v16; // rdi
  struct _KTHREAD *v17; // rax
  unsigned __int64 *v18; // rbx
  _QWORD *v19; // rax
  _QWORD *v20; // rdi
  unsigned int SchematizedFilterSize; // eax
  unsigned int *v22; // rdi
  ULONG_PTR v23; // rbx
  int v24; // r8d
  _QWORD *v25; // rcx
  __int64 v26; // rdx
  _QWORD *v27; // rax
  __int64 v28; // r15
  __int64 v29; // r14
  __int16 v30; // cx
  unsigned __int8 v31; // bl
  __int64 v32; // rdi
  __int64 v33; // rdi
  unsigned int *v34; // rbx
  int v35; // eax
  signed __int64 *v36; // rbx
  signed __int64 v37; // rax
  signed __int64 v38; // rdx
  signed __int64 v39; // rtt
  ULONG_PTR v40; // rax
  volatile signed __int64 *v41; // rbx
  signed __int64 v42; // rax
  signed __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rcx
  int v47; // r8d
  int v48; // r9d
  __int64 v49; // rcx
  int v50; // eax
  __int64 v51; // r14
  __int64 v52; // rax
  struct _KPROCESS *v53; // rcx
  unsigned __int8 v54; // bl
  __int64 v55; // r14
  void *v56; // rdi
  unsigned int v57; // r14d
  unsigned __int8 v58; // di
  unsigned __int16 *v59; // rbx
  __int64 v60; // r14
  __int64 v61; // r15
  unsigned int *v62; // r14
  __int64 v63; // r13
  _QWORD *v64; // r15
  bool v65; // r15
  _QWORD *v66; // r13
  int v67; // r15d
  __int64 v68; // r8
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int16 v72; // r13
  unsigned __int16 *v73; // r12
  unsigned __int8 i; // r15
  void *Pool2; // rax
  __int64 v76; // rdi
  _QWORD *v77; // r14
  int v78; // r14d
  __int16 v79; // ax
  int v80; // eax
  __int64 v81; // rdi
  __int16 v82; // ax
  struct _KPROCESS *v83; // rcx
  _WORD v84[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v85; // [rsp+44h] [rbp-BCh]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v87; // [rsp+58h] [rbp-A8h]
  unsigned int *v88; // [rsp+60h] [rbp-A0h]
  unsigned int v89; // [rsp+68h] [rbp-98h]
  __int64 v90; // [rsp+70h] [rbp-90h]
  __int128 v91; // [rsp+78h] [rbp-88h] BYREF
  __int128 v92; // [rsp+88h] [rbp-78h]
  __int128 v93; // [rsp+98h] [rbp-68h]
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-58h] BYREF
  struct _KAPC_STATE v95; // [rsp+D8h] [rbp-28h] BYREF

  BugCheckParameter2[0] = 0LL;
  v6 = *(_BYTE *)(a1 + 98);
  v7 = 0;
  LOWORD(v85) = 0;
  v90 = 0LL;
  v9 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)&v93 = a3;
  v88 = a5;
  v10 = *(_QWORD *)(v9 + 648);
  v87 = v10;
  GuidEntry = EtwpFindOrCreateGuidEntry(v10, a2, 2, (v6 & 2) != 0, (__int64)BugCheckParameter2);
  if ( GuidEntry )
    goto LABEL_36;
  *a5 = 120;
  CurrentThread = KeGetCurrentThread();
  v13 = (unsigned __int64 *)(BugCheckParameter2[0] + 664);
  v14 = BugCheckParameter2[0] + 664;
  --CurrentThread->KernelApcDisable;
  v15 = KeAbPreAcquire(v14, 0LL);
  v16 = v15;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
    ExfAcquirePushLockExclusiveEx(v13, (__int64)v15, (__int64)v13);
  if ( v16 )
    *((_BYTE *)v16 + 10) = 1;
  *(_QWORD *)(BugCheckParameter2[0] + 672) = KeGetCurrentThread();
  v17 = KeGetCurrentThread();
  --v17->KernelApcDisable;
  v18 = (unsigned __int64 *)(*(_QWORD *)(a1 + 32) + 664LL);
  v19 = KeAbPreAcquire((__int64)v18, 0LL);
  v20 = v19;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v18, 0LL) )
    ExfAcquirePushLockExclusiveEx(v18, (__int64)v19, (__int64)v18);
  if ( v20 )
    *((_BYTE *)v20 + 10) = 1;
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 672LL) = KeGetCurrentThread();
  if ( *(_QWORD *)(a1 + 40) )
  {
    GuidEntry = 0;
    goto LABEL_27;
  }
  SchematizedFilterSize = EtwpGetSchematizedFilterSize(*(_QWORD *)(a1 + 32), *(_WORD *)(a1 + 100));
  v22 = v88;
  v89 = SchematizedFilterSize;
  if ( SchematizedFilterSize )
    *v88 += SchematizedFilterSize + 16;
  if ( (*(_BYTE *)(a1 + 98) & 2) != 0 && *v22 > a4 )
  {
    GuidEntry = -1073741789;
    goto LABEL_27;
  }
  v23 = BugCheckParameter2[0];
  EtwpReferenceGuidEntry(BugCheckParameter2[0]);
  v25 = (_QWORD *)(v23 + 56);
  *(_QWORD *)(a1 + 40) = v23;
  v26 = *(_QWORD *)(v23 + 56);
  v27 = (_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(v26 + 8) != v23 + 56 )
    __fastfail(3u);
  *v27 = v26;
  *(_QWORD *)(a1 + 24) = v25;
  *(_QWORD *)(v26 + 8) = v27;
  *v25 = v27;
  if ( !*(_DWORD *)(v23 + 96) )
  {
    v71 = *(_QWORD *)(v23 + 656);
    if ( !v71 || !*(_DWORD *)(v71 + 96) )
    {
      *v22 = 0;
      GuidEntry = 0;
      goto LABEL_27;
    }
  }
  v58 = 0;
  v59 = (unsigned __int16 *)(v23 + 134);
  do
  {
    if ( !*(_DWORD *)(v59 - 3) )
      goto LABEL_68;
    v60 = *v59;
    if ( (unsigned int)v60 < *(_DWORD *)(v10 + 16) && (*(_QWORD *)(*(_QWORD *)(v10 + 712) + 8 * v60) & 1) == 0 )
    {
      v61 = 8 * v60;
      if ( ExAcquireRundownProtectionCacheAwareEx(
             *(PEX_RUNDOWN_REF_CACHE_AWARE *)(8 * v60 + *(_QWORD *)(v10 + 704)),
             1u) )
      {
        if ( (unsigned int)v60 >= *(_DWORD *)(v10 + 16)
          || (_mm_lfence(),
              v70 = *(_QWORD *)(v10 + 712),
              v62 = *(unsigned int **)(v61 + v70),
              ((unsigned __int8)v62 & 1) != 0) )
        {
          ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v61 + *(_QWORD *)(v10 + 704)), 1u);
        }
        else
        {
          if ( v62[80] )
            goto LABEL_74;
          EtwpReleaseLoggerContext(*(_QWORD *)(v61 + v70), 0LL);
        }
      }
    }
    v62 = 0LL;
LABEL_74:
    v63 = *(_QWORD *)(a1 + 32);
    v64 = KeAbPreAcquire((__int64)(v62 + 172), 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v62 + 86, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)v62 + 86, 0, v64, (__int64)(v62 + 172));
    if ( v64 )
      *((_BYTE *)v64 + 10) = 1;
    if ( *((_WORD *)v62 + 664) )
      v65 = bsearch(
              (const void *)(v63 + 40),
              *((const void **)v62 + 167),
              *((unsigned __int16 *)v62 + 664),
              0x10uLL,
              EtwpCompareGuid) == 0LL;
    else
      v65 = 1;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v62 + 86, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v62 + 86);
    KeAbPostRelease((ULONG_PTR)(v62 + 172));
    if ( v65 )
    {
      v66 = KeAbPreAcquire((__int64)(v62 + 172), 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v62 + 86, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)v62 + 86, 0, v66, (__int64)(v62 + 172));
      if ( v66 )
        *((_BYTE *)v66 + 10) = 1;
      if ( *((_QWORD *)v62 + 97) )
        v67 = EtwpAccessCheckFromState(*(_QWORD *)(a1 + 32) + 40LL);
      else
        v67 = -1073741790;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v62 + 86, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v62 + 86);
      KeAbPostRelease((ULONG_PTR)(v62 + 172));
      if ( v67 < 0 )
      {
        EtwpReleaseLoggerContext(v62, 0LL);
        v7 = v85;
      }
      else
      {
        v68 = *v62;
        v7 = (1 << v58) + v85;
        v69 = *((_QWORD *)v62 + 170);
        LOWORD(v85) = v7;
        ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v69 + 704) + 8 * v68), 1u);
      }
      v10 = v87;
    }
    else
    {
      ExReleaseRundownProtectionCacheAwareEx(
        *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v62 + 170) + 704LL) + 8LL * *v62),
        1u);
      v7 = v85;
      v10 = v87;
    }
LABEL_68:
    ++v58;
    v59 += 16;
  }
  while ( v58 < 0x10u );
  v84[0] = v7;
  v85 = 0;
  LOBYTE(v24) = 2;
  GuidEntry = 0;
  EtwpApplyScopeFilters(a1, 0, v24, 0, (__int64)v84);
  *(_WORD *)(a1 + 102) = v7 & v84[0];
  v49 = *(_QWORD *)(BugCheckParameter2[0] + 656);
  if ( v49 )
  {
    v72 = 0;
    v73 = (unsigned __int16 *)(v49 + 134);
    for ( i = 0; i < 0x10u; ++i )
    {
      if ( *(_DWORD *)(v73 - 3) )
      {
        v76 = EtwpAcquireLoggerContextByLoggerId(EtwpHostSiloState, *v73, 0LL);
        if ( (unsigned __int8)EtwpIsGuidAllowed(v76, *(_QWORD *)(a1 + 32) + 40LL) )
        {
          v77 = KeAbPreAcquire(v76 + 688, 0LL);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v76 + 688), 17LL, 0LL) )
            ExfAcquirePushLockSharedEx((signed __int64 *)(v76 + 688), 0, v77, v76 + 688);
          if ( v77 )
            *((_BYTE *)v77 + 10) = 1;
          if ( *(_QWORD *)(v76 + 776) )
            v78 = EtwpAccessCheckFromState(*(_QWORD *)(a1 + 32) + 40LL);
          else
            v78 = -1073741790;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v76 + 688), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v76 + 688));
          KeAbPostRelease(v76 + 688);
          if ( v78 >= 0 )
            v72 += 1 << i;
        }
        EtwpReleaseLoggerContext(v76, 0LL);
      }
      v73 += 16;
    }
    v84[0] = v72;
    GuidEntry = 0;
    v85 = 0;
    LOBYTE(v48) = 1;
    LOBYTE(v47) = 2;
    EtwpApplyScopeFilters(a1, 0, v47, v48, (__int64)v84);
    v79 = v72 & v84[0];
    v10 = v87;
    *(_WORD *)(a1 + 106) = v79;
  }
  if ( !*(_WORD *)(a1 + 102) )
  {
    if ( !*(_WORD *)(a1 + 106) )
    {
      GuidEntry = 0;
      *v88 = 0;
      goto LABEL_27;
    }
LABEL_58:
    v54 = 0;
    v55 = 0LL;
    do
    {
      v80 = *(unsigned __int16 *)(a1 + 106);
      if ( _bittest(&v80, v54) )
      {
        v81 = EtwpAcquireLoggerContextByLoggerId(
                EtwpHostSiloState,
                *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 656LL) + v55 + 134),
                0LL);
        v82 = *(_WORD *)(a1 + 98);
        if ( (v82 & 0x10) != 0 || (*(_DWORD *)(v81 + 816) & 0x2000000) != 0 )
        {
          if ( (v82 & 1) != 0 )
          {
            EtwpProviderArrivalCallback(v81, 0, a1);
          }
          else if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 488LL)) )
          {
            v83 = *(struct _KPROCESS **)(a1 + 80);
            memset(&v95, 0, sizeof(v95));
            KeStackAttachProcess(v83, &v95);
            EtwpProviderArrivalCallback(v81, 1, a1);
            KiUnstackDetachProcess((__int64)&v95, 0);
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 488LL));
          }
        }
        EtwpReleaseLoggerContext(v81, 0LL);
      }
      ++v54;
      v55 += 32LL;
    }
    while ( v54 < 0x10u );
    goto LABEL_24;
  }
  v31 = 0;
  v32 = 0LL;
  do
  {
    v50 = *(unsigned __int16 *)(a1 + 102);
    if ( _bittest(&v50, v31) )
    {
      v51 = *(unsigned __int16 *)(v32 + *(_QWORD *)(a1 + 40) + 134);
      if ( (unsigned int)v51 < *(_DWORD *)(v10 + 16)
        && (*(_QWORD *)(*(_QWORD *)(v10 + 712) + 8 * v51) & 1) == 0
        && (v28 = 8 * v51,
            ExAcquireRundownProtectionCacheAwareEx(
              *(PEX_RUNDOWN_REF_CACHE_AWARE *)(8 * v51 + *(_QWORD *)(v10 + 704)),
              1u)) )
      {
        if ( (unsigned int)v51 >= *(_DWORD *)(v10 + 16)
          || (_mm_lfence(), v52 = *(_QWORD *)(v10 + 712), v29 = *(_QWORD *)(v28 + v52), (v29 & 1) != 0) )
        {
          ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v28 + *(_QWORD *)(v10 + 704)), 1u);
          v29 = 0LL;
        }
        else if ( !*(_DWORD *)(v29 + 320) )
        {
          EtwpReleaseLoggerContext(*(_QWORD *)(v28 + v52), 0LL);
          v29 = 0LL;
        }
      }
      else
      {
        v29 = 0LL;
      }
      v30 = *(_WORD *)(a1 + 98);
      if ( (v30 & 0x10) != 0 || (*(_DWORD *)(v29 + 816) & 0x2000000) != 0 )
      {
        if ( (v30 & 1) != 0 )
        {
          EtwpProviderArrivalCallback(v29, 0, a1);
        }
        else if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 488LL)) )
        {
          v53 = *(struct _KPROCESS **)(a1 + 80);
          memset(&ApcState, 0, sizeof(ApcState));
          KeStackAttachProcess(v53, &ApcState);
          EtwpProviderArrivalCallback(v29, 1, a1);
          KiUnstackDetachProcess((__int64)&ApcState, 0);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 488LL));
        }
      }
      ExReleaseRundownProtectionCacheAwareEx(
        *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*(_QWORD *)(v29 + 1360) + 704LL) + 8LL * *(unsigned int *)v29),
        1u);
    }
    ++v31;
    v32 += 32LL;
  }
  while ( v31 < 0x10u );
  GuidEntry = v85;
  if ( *(_WORD *)(a1 + 106) )
    goto LABEL_58;
LABEL_24:
  if ( (*(_BYTE *)(a1 + 98) & 1) != 0 )
  {
    if ( *(_QWORD *)(a1 + 88) )
    {
      v56 = 0LL;
      v93 = 0LL;
      v91 = 0LL;
      v92 = 0LL;
      EtwpComputeRegEntryEnableInfo(a1, &v91);
      v57 = v89;
      if ( v89 )
      {
        Pool2 = (void *)ExAllocatePool2(0x100uLL);
        v56 = Pool2;
        if ( Pool2 )
        {
          *(_QWORD *)&v93 = Pool2;
          *((_QWORD *)&v93 + 1) = v57 | 0x8000000000000000uLL;
          EtwpCopySchematizedFilters(Pool2);
        }
      }
      guard_dispatch_icall_no_overrides(&CPER_EMPTY_GUID, 1LL, BYTE4(v91), v92);
      if ( v56 )
        ExFreePoolWithTag(v56, 0);
    }
  }
  else
  {
    v33 = v93;
    EtwpComputeRegEntryEnableInfo(a1, v93 + 72);
    v34 = v88;
    *v88 = 120;
    v35 = EtwpGetSchematizedFilterSize(*(_QWORD *)(a1 + 32), *(_WORD *)(a1 + 100));
    if ( v35 )
    {
      *v34 = v35 + 136;
      *(_DWORD *)(v33 + 132) = 0x80000000;
      *(_DWORD *)(v33 + 128) = v35;
      *(_QWORD *)(v33 + 120) = 136LL;
      EtwpCopySchematizedFilters((void *)(v33 + 136));
      *(_DWORD *)(v33 + 116) = 1;
    }
    else
    {
      *(_DWORD *)(v33 + 116) = 0;
    }
  }
LABEL_27:
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 672LL) = 0LL;
  v36 = (signed __int64 *)(*(_QWORD *)(a1 + 32) + 664LL);
  _m_prefetchw(v36);
  v37 = *v36;
  v38 = *v36 - 16;
  if ( (*v36 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v38 = 0LL;
  if ( (v37 & 2) != 0 || (v39 = *v36, v39 != _InterlockedCompareExchange64(v36, v38, v37)) )
    ExfReleasePushLock(v36);
  KeAbPostRelease((ULONG_PTR)v36);
  KeLeaveCriticalRegionThread();
  v40 = BugCheckParameter2[0];
  *(_QWORD *)(BugCheckParameter2[0] + 672) = 0LL;
  v41 = (volatile signed __int64 *)(v40 + 664);
  _m_prefetchw((const void *)(v40 + 664));
  v42 = *(_QWORD *)(v40 + 664);
  v43 = v42 - 16;
  if ( (v42 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v43 = 0LL;
  if ( (v42 & 2) != 0 || v42 != _InterlockedCompareExchange64(v41, v43, v42) )
    ExfReleasePushLock(v41);
  KeAbPostRelease((ULONG_PTR)v41);
  KeLeaveCriticalRegionThread();
LABEL_36:
  if ( BugCheckParameter2[0] )
    EtwpUnreferenceGuidEntry(BugCheckParameter2[0]);
  if ( GuidEntry >= 0 && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_GROUP_JOIN) )
    EtwpEventWriteGroupJoin(v45, v44, a1);
  return (unsigned int)GuidEntry;
}
