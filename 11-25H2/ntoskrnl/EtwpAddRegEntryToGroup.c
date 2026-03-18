/*
 * XREFs of EtwpAddRegEntryToGroup @ 0x140899D60
 * Callers:
 *     EtwpSetProviderTraitsCommon @ 0x140896C34 (EtwpSetProviderTraitsCommon.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x14030BEC0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     KeStackAttachProcess @ 0x140348CD0 (KeStackAttachProcess.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140405F50 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     bsearch @ 0x1404FBFE0 (bsearch.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     EtwpGetSchematizedFilterSize @ 0x140898F94 (EtwpGetSchematizedFilterSize.c)
 *     EtwpProviderArrivalCallback @ 0x140899014 (EtwpProviderArrivalCallback.c)
 *     EtwpEventWriteGroupJoin @ 0x140899878 (EtwpEventWriteGroupJoin.c)
 *     EtwpAccessCheckFromState @ 0x14089A6E0 (EtwpAccessCheckFromState.c)
 *     EtwpIsGuidAllowed @ 0x14089AB9C (EtwpIsGuidAllowed.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x14089B4A0 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpFindOrCreateGuidEntry @ 0x14089B79C (EtwpFindOrCreateGuidEntry.c)
 *     EtwpReferenceGuidEntry @ 0x14089BAD0 (EtwpReferenceGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x14089E370 (EtwpUnreferenceGuidEntry.c)
 *     EtwpApplyScopeFilters @ 0x14089E4C0 (EtwpApplyScopeFilters.c)
 *     EtwpCopySchematizedFilters @ 0x14089E8F4 (EtwpCopySchematizedFilters.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1409328B0 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x1409FF024 (EtwpReleaseLoggerContext.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpAddRegEntryToGroup(__int64 a1, int a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  char v6; // r9
  char v8; // r15
  __int64 v9; // rax
  __int64 v10; // r13
  int GuidEntry; // r12d
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v13; // rbx
  __int64 v14; // rcx
  __int64 *v15; // rax
  __int64 *v16; // rdi
  struct _KTHREAD *v17; // rax
  unsigned __int64 *v18; // rbx
  __int64 *v19; // rax
  __int64 *v20; // rdi
  unsigned int SchematizedFilterSize; // eax
  unsigned int *v22; // rdi
  ULONG_PTR v23; // rbx
  int v24; // r8d
  _QWORD *v25; // rcx
  __int64 v26; // rdx
  _QWORD *v27; // rax
  unsigned __int8 v28; // di
  unsigned __int16 *v29; // rbx
  int v30; // r8d
  int v31; // r9d
  __int64 v32; // rcx
  unsigned __int8 v33; // bl
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // r15
  __int64 v37; // rsi
  __int16 v38; // cx
  __int64 v39; // rdi
  unsigned int *v40; // rbx
  int v41; // eax
  __int64 *v42; // rbx
  signed __int64 v43; // rax
  signed __int64 v44; // rdx
  __int64 v45; // rtt
  ULONG_PTR v46; // rax
  volatile signed __int64 *v47; // rbx
  signed __int64 v48; // rax
  signed __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v53; // rsi
  __int64 v54; // r15
  unsigned int *v55; // rsi
  __int64 v56; // r13
  __int64 *v57; // r15
  bool v58; // r12
  __int64 *v59; // r13
  int v60; // r12d
  __int64 v61; // r8
  __int64 v62; // rax
  __int64 v63; // rax
  struct _KPROCESS *v64; // rcx
  __int64 v65; // rax
  unsigned __int8 v66; // bl
  __int64 v67; // rsi
  void *v68; // rdi
  unsigned int v69; // esi
  __int64 v70; // rax
  char v71; // r13
  unsigned __int16 *v72; // r12
  unsigned __int8 i; // si
  void *Pool2; // rax
  __int64 v75; // rdi
  __int64 *v76; // r15
  int v77; // r15d
  char v78; // al
  __int64 v79; // rdi
  __int16 v80; // ax
  struct _KPROCESS *v81; // rcx
  char v82; // [rsp+40h] [rbp-C0h] BYREF
  char v83; // [rsp+41h] [rbp-BFh]
  int v84; // [rsp+48h] [rbp-B8h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v86; // [rsp+58h] [rbp-A8h]
  unsigned int *v87; // [rsp+60h] [rbp-A0h]
  unsigned int v88; // [rsp+68h] [rbp-98h]
  __int64 v89; // [rsp+70h] [rbp-90h]
  _OWORD v90[2]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v91; // [rsp+98h] [rbp-68h]
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-58h] BYREF
  struct _KAPC_STATE v93; // [rsp+D8h] [rbp-28h] BYREF

  BugCheckParameter2 = 0LL;
  v6 = *(_BYTE *)(a1 + 98);
  v89 = 0LL;
  v8 = 0;
  v9 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)&v91 = a3;
  v87 = a5;
  v10 = *(_QWORD *)(v9 + 392);
  v83 = 0;
  v86 = v10;
  GuidEntry = EtwpFindOrCreateGuidEntry(v10, a2, 2, (v6 & 2) != 0, (__int64)&BugCheckParameter2);
  if ( GuidEntry )
    goto LABEL_46;
  *a5 = 120;
  CurrentThread = KeGetCurrentThread();
  v13 = (unsigned __int64 *)(BugCheckParameter2 + 408);
  v14 = BugCheckParameter2 + 408;
  --CurrentThread->KernelApcDisable;
  v15 = KeAbPreAcquire(v14, 0LL);
  v16 = v15;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
    ExfAcquirePushLockExclusiveEx(v13, v15, (__int64)v13);
  if ( v16 )
    *((_BYTE *)v16 + 10) = 1;
  *(_QWORD *)(BugCheckParameter2 + 416) = KeGetCurrentThread();
  v17 = KeGetCurrentThread();
  --v17->KernelApcDisable;
  v18 = (unsigned __int64 *)(*(_QWORD *)(a1 + 32) + 408LL);
  v19 = KeAbPreAcquire((__int64)v18, 0LL);
  v20 = v19;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v18, 0LL) )
    ExfAcquirePushLockExclusiveEx(v18, v19, (__int64)v18);
  if ( v20 )
    *((_BYTE *)v20 + 10) = 1;
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 416LL) = KeGetCurrentThread();
  if ( *(_QWORD *)(a1 + 40) )
  {
    GuidEntry = 0;
    goto LABEL_37;
  }
  SchematizedFilterSize = EtwpGetSchematizedFilterSize(*(_QWORD *)(a1 + 32), *(_BYTE *)(a1 + 100));
  v22 = v87;
  v88 = SchematizedFilterSize;
  if ( SchematizedFilterSize )
    *v87 += SchematizedFilterSize + 16;
  if ( (*(_BYTE *)(a1 + 98) & 2) != 0 && *v22 > a4 )
  {
    GuidEntry = -1073741789;
    goto LABEL_37;
  }
  v23 = BugCheckParameter2;
  EtwpReferenceGuidEntry(BugCheckParameter2);
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
    v70 = *(_QWORD *)(v23 + 400);
    if ( !v70 || !*(_DWORD *)(v70 + 96) )
    {
      *v22 = 0;
      GuidEntry = 0;
      goto LABEL_37;
    }
  }
  v28 = 0;
  v29 = (unsigned __int16 *)(v23 + 134);
  do
  {
    if ( !*(_DWORD *)(v29 - 3) )
      goto LABEL_20;
    v53 = *v29;
    if ( (unsigned int)v53 < *(_DWORD *)(v10 + 16) && (*(_QWORD *)(*(_QWORD *)(v10 + 456) + 8 * v53) & 1) == 0 )
    {
      v54 = 8 * v53;
      if ( ExAcquireRundownProtectionCacheAwareEx(
             *(PEX_RUNDOWN_REF_CACHE_AWARE *)(8 * v53 + *(_QWORD *)(v10 + 448)),
             1u) )
      {
        if ( (unsigned int)v53 >= *(_DWORD *)(v10 + 16)
          || (_mm_lfence(),
              v65 = *(_QWORD *)(v10 + 456),
              v55 = *(unsigned int **)(v54 + v65),
              ((unsigned __int8)v55 & 1) != 0) )
        {
          ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v54 + *(_QWORD *)(v10 + 448)), 1u);
        }
        else
        {
          if ( v55[80] )
            goto LABEL_56;
          EtwpReleaseLoggerContext(*(_QWORD *)(v54 + v65), 0LL);
        }
      }
    }
    v55 = 0LL;
LABEL_56:
    v56 = *(_QWORD *)(a1 + 32);
    v57 = KeAbPreAcquire((__int64)(v55 + 172), 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v55 + 86, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)v55 + 86, 0, v57, (unsigned __int64)(v55 + 172));
    if ( v57 )
      *((_BYTE *)v57 + 10) = 1;
    if ( *((_WORD *)v55 + 664) )
      v58 = bsearch(
              (const void *)(v56 + 40),
              *((const void **)v55 + 167),
              *((unsigned __int16 *)v55 + 664),
              0x10uLL,
              EtwpCompareGuid) == 0LL;
    else
      v58 = 1;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v55 + 86, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v55 + 86);
    KeAbPostRelease((ULONG_PTR)(v55 + 172));
    if ( v58 )
    {
      v59 = KeAbPreAcquire((__int64)(v55 + 172), 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v55 + 86, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)v55 + 86, 0, v59, (unsigned __int64)(v55 + 172));
      if ( v59 )
        *((_BYTE *)v59 + 10) = 1;
      if ( *((_QWORD *)v55 + 97) )
        v60 = EtwpAccessCheckFromState(*(_QWORD *)(a1 + 32) + 40LL);
      else
        v60 = -1073741790;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v55 + 86, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v55 + 86);
      KeAbPostRelease((ULONG_PTR)(v55 + 172));
      if ( v60 < 0 )
      {
        EtwpReleaseLoggerContext(v55, 0LL);
        v8 = v83;
      }
      else
      {
        v61 = *v55;
        v8 = (1 << v28) + v83;
        v62 = *((_QWORD *)v55 + 170);
        v83 = v8;
        ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v62 + 448) + 8 * v61), 1u);
      }
      v10 = v86;
    }
    else
    {
      ExReleaseRundownProtectionCacheAwareEx(
        *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v55 + 170) + 448LL) + 8LL * *v55),
        1u);
      v8 = v83;
      v10 = v86;
    }
LABEL_20:
    ++v28;
    v29 += 16;
  }
  while ( v28 < 8u );
  v82 = v8;
  v84 = 0;
  LOBYTE(v24) = 2;
  GuidEntry = 0;
  EtwpApplyScopeFilters(a1, 0, v24, 0, (__int64)&v82);
  *(_BYTE *)(a1 + 101) = v8 & v82;
  v32 = *(_QWORD *)(BugCheckParameter2 + 400);
  if ( v32 )
  {
    v71 = 0;
    v72 = (unsigned __int16 *)(v32 + 134);
    for ( i = 0; i < 8u; ++i )
    {
      if ( *(_DWORD *)(v72 - 3) )
      {
        v75 = EtwpAcquireLoggerContextByLoggerId(EtwpHostSiloState, *v72, 0LL);
        if ( (unsigned __int8)EtwpIsGuidAllowed(v75, *(_QWORD *)(a1 + 32) + 40LL) )
        {
          v76 = KeAbPreAcquire(v75 + 688, 0LL);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v75 + 688), 17LL, 0LL) )
            ExfAcquirePushLockSharedEx((signed __int64 *)(v75 + 688), 0, v76, v75 + 688);
          if ( v76 )
            *((_BYTE *)v76 + 10) = 1;
          if ( *(_QWORD *)(v75 + 776) )
            v77 = EtwpAccessCheckFromState(*(_QWORD *)(a1 + 32) + 40LL);
          else
            v77 = -1073741790;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v75 + 688), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v75 + 688));
          KeAbPostRelease(v75 + 688);
          if ( v77 >= 0 )
            v71 += 1 << i;
        }
        EtwpReleaseLoggerContext(v75, 0LL);
      }
      v72 += 16;
    }
    v82 = v71;
    GuidEntry = 0;
    v84 = 0;
    LOBYTE(v31) = 1;
    LOBYTE(v30) = 2;
    EtwpApplyScopeFilters(a1, 0, v30, v31, (__int64)&v82);
    v78 = v71 & v82;
    v10 = v86;
    *(_BYTE *)(a1 + 103) = v78;
  }
  if ( !*(_BYTE *)(a1 + 101) )
  {
    if ( !*(_BYTE *)(a1 + 103) )
    {
      GuidEntry = 0;
      *v87 = 0;
      goto LABEL_37;
    }
LABEL_91:
    v66 = 0;
    v67 = 0LL;
    do
    {
      if ( ((unsigned __int8)(1 << v66) & *(_BYTE *)(a1 + 103)) != 0 )
      {
        v79 = EtwpAcquireLoggerContextByLoggerId(
                EtwpHostSiloState,
                *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 400LL) + v67 + 134),
                0LL);
        v80 = *(_WORD *)(a1 + 98);
        if ( (v80 & 0x10) != 0 || (*(_DWORD *)(v79 + 816) & 0x2000000) != 0 )
        {
          if ( (v80 & 1) != 0 )
          {
            EtwpProviderArrivalCallback(v79, 0, a1);
          }
          else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 488LL)) )
          {
            v81 = *(struct _KPROCESS **)(a1 + 80);
            memset(&v93, 0, sizeof(v93));
            KeStackAttachProcess(v81, &v93);
            EtwpProviderArrivalCallback(v79, 1, a1);
            KiUnstackDetachProcess((__int64)&v93, 0LL);
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 488LL));
          }
        }
        EtwpReleaseLoggerContext(v79, 0LL);
      }
      ++v66;
      v67 += 32LL;
    }
    while ( v66 < 8u );
    goto LABEL_34;
  }
  v33 = 0;
  v34 = 0LL;
  do
  {
    if ( ((unsigned __int8)(1 << v33) & *(_BYTE *)(a1 + 101)) != 0 )
    {
      v35 = *(unsigned __int16 *)(v34 + *(_QWORD *)(a1 + 40) + 134);
      if ( (unsigned int)v35 < *(_DWORD *)(v10 + 16)
        && (*(_QWORD *)(*(_QWORD *)(v10 + 456) + 8 * v35) & 1) == 0
        && (v36 = 8 * v35,
            ExAcquireRundownProtectionCacheAwareEx(
              *(PEX_RUNDOWN_REF_CACHE_AWARE *)(8 * v35 + *(_QWORD *)(v10 + 448)),
              1u)) )
      {
        if ( (unsigned int)v35 >= *(_DWORD *)(v10 + 16)
          || (_mm_lfence(), v63 = *(_QWORD *)(v10 + 456), v37 = *(_QWORD *)(v36 + v63), (v37 & 1) != 0) )
        {
          ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v36 + *(_QWORD *)(v10 + 448)), 1u);
          v37 = 0LL;
        }
        else if ( !*(_DWORD *)(v37 + 320) )
        {
          EtwpReleaseLoggerContext(*(_QWORD *)(v36 + v63), 0LL);
          v37 = 0LL;
        }
      }
      else
      {
        v37 = 0LL;
      }
      v38 = *(_WORD *)(a1 + 98);
      if ( (v38 & 0x10) != 0 || (*(_DWORD *)(v37 + 816) & 0x2000000) != 0 )
      {
        if ( (v38 & 1) != 0 )
        {
          EtwpProviderArrivalCallback(v37, 0, a1);
        }
        else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 488LL)) )
        {
          v64 = *(struct _KPROCESS **)(a1 + 80);
          memset(&ApcState, 0, sizeof(ApcState));
          KeStackAttachProcess(v64, &ApcState);
          EtwpProviderArrivalCallback(v37, 1, a1);
          KiUnstackDetachProcess((__int64)&ApcState, 0LL);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 488LL));
        }
      }
      ExReleaseRundownProtectionCacheAwareEx(
        *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*(_QWORD *)(v37 + 1360) + 448LL) + 8LL * *(unsigned int *)v37),
        1u);
    }
    ++v33;
    v34 += 32LL;
  }
  while ( v33 < 8u );
  GuidEntry = v84;
  if ( *(_BYTE *)(a1 + 103) )
    goto LABEL_91;
LABEL_34:
  if ( (*(_BYTE *)(a1 + 98) & 1) != 0 )
  {
    if ( *(_QWORD *)(a1 + 88) )
    {
      v68 = 0LL;
      v91 = 0LL;
      memset(v90, 0, sizeof(v90));
      EtwpComputeRegEntryEnableInfo(a1, v90);
      v69 = v88;
      if ( v88 )
      {
        Pool2 = (void *)ExAllocatePool2(0x100uLL);
        v68 = Pool2;
        if ( Pool2 )
        {
          *(_QWORD *)&v91 = Pool2;
          *((_QWORD *)&v91 + 1) = v69 | 0x8000000000000000uLL;
          EtwpCopySchematizedFilters(Pool2);
        }
      }
      guard_dispatch_icall_no_overrides(&CPER_EMPTY_GUID);
      if ( v68 )
        ExFreePoolWithTag(v68, 0);
    }
  }
  else
  {
    v39 = v91;
    EtwpComputeRegEntryEnableInfo(a1, v91 + 72);
    v40 = v87;
    *v87 = 120;
    v41 = EtwpGetSchematizedFilterSize(*(_QWORD *)(a1 + 32), *(_BYTE *)(a1 + 100));
    if ( v41 )
    {
      *v40 = v41 + 136;
      *(_DWORD *)(v39 + 132) = 0x80000000;
      *(_DWORD *)(v39 + 128) = v41;
      *(_QWORD *)(v39 + 120) = 136LL;
      EtwpCopySchematizedFilters((void *)(v39 + 136));
      *(_DWORD *)(v39 + 116) = 1;
    }
    else
    {
      *(_DWORD *)(v39 + 116) = 0;
    }
  }
LABEL_37:
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 416LL) = 0LL;
  v42 = (__int64 *)(*(_QWORD *)(a1 + 32) + 408LL);
  _m_prefetchw(v42);
  v43 = *v42;
  v44 = *v42 - 16;
  if ( (*v42 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v44 = 0LL;
  if ( (v43 & 2) != 0 || (v45 = *v42, v45 != _InterlockedCompareExchange64(v42, v44, v43)) )
    ExfReleasePushLock(v42);
  KeAbPostRelease((ULONG_PTR)v42);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v46 = BugCheckParameter2;
  *(_QWORD *)(BugCheckParameter2 + 416) = 0LL;
  v47 = (volatile signed __int64 *)(v46 + 408);
  _m_prefetchw((const void *)(v46 + 408));
  v48 = *(_QWORD *)(v46 + 408);
  v49 = v48 - 16;
  if ( (v48 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v49 = 0LL;
  if ( (v48 & 2) != 0 || v48 != _InterlockedCompareExchange64(v47, v49, v48) )
    ExfReleasePushLock(v47);
  KeAbPostRelease((ULONG_PTR)v47);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_46:
  if ( BugCheckParameter2 )
    EtwpUnreferenceGuidEntry((PVOID)BugCheckParameter2);
  if ( GuidEntry >= 0 && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_GROUP_JOIN) )
    EtwpEventWriteGroupJoin(v51, v50, a1);
  return (unsigned int)GuidEntry;
}
