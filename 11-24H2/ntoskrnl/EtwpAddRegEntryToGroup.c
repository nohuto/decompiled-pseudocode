/*
 * XREFs of EtwpAddRegEntryToGroup @ 0x140AD9390
 * Callers:
 *     EtwpSetProviderTraitsCommon @ 0x1409F69B4 (EtwpSetProviderTraitsCommon.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x14020DE80 (ExfReleaseRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140289C10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     ExfAcquireRundownProtection @ 0x1402F60C0 (ExfAcquireRundownProtection.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline @ 0x14064D73C (Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     EtwpIsGuidAllowed @ 0x140833108 (EtwpIsGuidAllowed.c)
 *     EtwpAccessCheckFromState @ 0x140836E70 (EtwpAccessCheckFromState.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x140837AF0 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpFindOrCreateGuidEntry @ 0x14083866C (EtwpFindOrCreateGuidEntry.c)
 *     EtwpReferenceGuidEntry @ 0x140838980 (EtwpReferenceGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x140839DC0 (EtwpUnreferenceGuidEntry.c)
 *     EtwpCopySchematizedFilters @ 0x14083A308 (EtwpCopySchematizedFilters.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140929090 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpGetSchematizedFilterSize @ 0x1409E9380 (EtwpGetSchematizedFilterSize.c)
 *     EtwpProviderArrivalCallback @ 0x140A3B8FC (EtwpProviderArrivalCallback.c)
 *     EtwpApplyContainerFilter @ 0x140A78118 (EtwpApplyContainerFilter.c)
 *     EtwpApplyExeFilter @ 0x140A78C24 (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x140A7975C (EtwpApplyPackageIdFilter.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpAddRegEntryToGroup(__int64 a1, _DWORD *a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  __int64 v7; // rax
  char v8; // r9
  __int16 v9; // r13
  int v10; // esi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v12; // rdi
  __int64 v13; // rcx
  char *v14; // rax
  char *v15; // rsi
  struct _KTHREAD *v16; // rax
  unsigned __int64 *v17; // rdi
  char *v18; // rax
  char *v19; // rsi
  unsigned int SchematizedFilterSize; // eax
  ULONG_PTR v21; // r12
  _QWORD *v22; // rcx
  __int64 v23; // rdx
  _QWORD *v24; // rax
  __int64 v25; // rax
  unsigned __int8 v26; // r15
  unsigned __int16 *v27; // r12
  signed __int64 *v28; // rsi
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v29; // rcx
  __int64 v30; // rdx
  char *v31; // r14
  _TOKEN_ACCESS_INFORMATION *v32; // r8
  int v33; // r14d
  int v34; // r12d
  __int64 v35; // rsi
  unsigned int v36; // r14d
  __int64 v37; // rdi
  _DWORD *v38; // r15
  __int64 v39; // rax
  char v40; // cl
  unsigned int *v41; // r8
  unsigned int v42; // ecx
  _DWORD *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rdx
  ULONG_PTR v47; // rax
  __int64 v48; // r12
  unsigned __int8 v49; // r15
  __int16 v50; // r13
  unsigned __int16 *v51; // r12
  signed __int64 *v52; // rsi
  __int64 v53; // r8
  __int64 v54; // rcx
  __int64 v55; // rdx
  char *v56; // r14
  _TOKEN_ACCESS_INFORMATION *v57; // r8
  int v58; // r14d
  int v59; // r12d
  unsigned int v60; // r15d
  __int64 v61; // rdi
  __int64 v62; // r14
  _DWORD *v63; // rsi
  __int64 v64; // rax
  char v65; // cl
  unsigned int *v66; // r8
  unsigned int v67; // ecx
  _DWORD *v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rdx
  __int64 v71; // rdx
  unsigned __int8 v72; // si
  __int64 v73; // r14
  int v74; // eax
  unsigned int *v75; // rdi
  __int64 v76; // r9
  struct _EX_RUNDOWN_REF *v77; // rcx
  unsigned __int64 v78; // rtt
  _KPROCESS *v79; // rcx
  __int64 v80; // r9
  __int64 v81; // r8
  __int64 v82; // r9
  struct _EX_RUNDOWN_REF *v83; // rcx
  unsigned __int64 v84; // rtt
  unsigned __int8 v85; // si
  __int64 v86; // r14
  int v87; // eax
  unsigned int *v88; // rdi
  __int64 v89; // r9
  struct _EX_RUNDOWN_REF *v90; // rcx
  unsigned __int64 v91; // rtt
  _KPROCESS *v92; // rcx
  __int64 v93; // r9
  __int64 v94; // r8
  __int64 v95; // r9
  struct _EX_RUNDOWN_REF *v96; // rcx
  unsigned __int64 v97; // rtt
  char *Pool2; // rdi
  unsigned int v99; // r14d
  unsigned __int16 v100; // r8
  __int64 v101; // rdx
  __int64 v102; // rsi
  unsigned int *v103; // rdi
  int v104; // r11d
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // r9
  unsigned int v108; // edx
  _DWORD *v109; // r8
  int v110; // eax
  __int64 *v111; // rdi
  signed __int64 v112; // rax
  signed __int64 v113; // rdx
  __int64 v114; // rtt
  ULONG_PTR v115; // rax
  volatile signed __int64 *v116; // rdi
  signed __int64 v117; // rax
  signed __int64 v118; // rdx
  __int64 v119; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v122; // [rsp+58h] [rbp-A8h]
  __int64 v123; // [rsp+68h] [rbp-98h]
  __int128 *v124; // [rsp+70h] [rbp-90h]
  unsigned int *v125; // [rsp+78h] [rbp-88h]
  _OWORD v126[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v127; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v128[3]; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v129[3]; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+110h] [rbp+10h] BYREF
  __int64 v131; // [rsp+120h] [rbp+20h]
  __int64 v132; // [rsp+128h] [rbp+28h]

  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 648LL);
  v8 = (*(_BYTE *)(a1 + 98) & 2) != 0;
  *(_QWORD *)&v127 = a3;
  v9 = 0;
  v125 = a5;
  BugCheckParameter2 = 0LL;
  v124 = 0LL;
  v123 = v7;
  v10 = EtwpFindOrCreateGuidEntry(v7, a2, 2u, v8, &BugCheckParameter2);
  if ( v10 )
    goto LABEL_167;
  *a5 = 120;
  CurrentThread = KeGetCurrentThread();
  v12 = (unsigned __int64 *)(BugCheckParameter2 + 664);
  v13 = BugCheckParameter2 + 664;
  --CurrentThread->KernelApcDisable;
  v14 = (char *)KeAbPreAcquire(v13, 0LL);
  v15 = v14;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
    ExfAcquirePushLockExclusiveEx(v12, v14, (__int64)v12);
  if ( v15 )
    v15[10] = 1;
  *(_QWORD *)(BugCheckParameter2 + 672) = KeGetCurrentThread();
  v16 = KeGetCurrentThread();
  --v16->KernelApcDisable;
  v17 = (unsigned __int64 *)(*(_QWORD *)(a1 + 32) + 664LL);
  v18 = (char *)KeAbPreAcquire((__int64)v17, 0LL);
  v19 = v18;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v17, 0LL) )
    ExfAcquirePushLockExclusiveEx(v17, v18, (__int64)v17);
  if ( v19 )
    v19[10] = 1;
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 672LL) = KeGetCurrentThread();
  if ( !*(_QWORD *)(a1 + 40) )
  {
    SchematizedFilterSize = EtwpGetSchematizedFilterSize(*(_QWORD *)(a1 + 32), *(_WORD *)(a1 + 100));
    v122 = SchematizedFilterSize;
    if ( SchematizedFilterSize )
      *a5 += SchematizedFilterSize + 16;
    if ( (*(_BYTE *)(a1 + 98) & 2) != 0 && *a5 > a4 )
    {
      v10 = -1073741789;
      goto LABEL_156;
    }
    v21 = BugCheckParameter2;
    EtwpReferenceGuidEntry(BugCheckParameter2);
    v22 = (_QWORD *)(v21 + 56);
    *(_QWORD *)(a1 + 40) = v21;
    v23 = *(_QWORD *)(v21 + 56);
    v24 = (_QWORD *)(a1 + 16);
    if ( *(_QWORD *)(v23 + 8) != v21 + 56 )
      __fastfail(3u);
    *v24 = v23;
    *(_QWORD *)(a1 + 24) = v22;
    *(_QWORD *)(v23 + 8) = v24;
    *v22 = v24;
    if ( !*(_DWORD *)(v21 + 96) )
    {
      v25 = *(_QWORD *)(v21 + 656);
      if ( !v25 || !*(_DWORD *)(v25 + 96) )
      {
        *a5 = 0;
        v10 = 0;
        goto LABEL_156;
      }
    }
    v26 = 0;
    v27 = (unsigned __int16 *)(v21 + 134);
    do
    {
      if ( *(_DWORD *)(v27 - 3) )
      {
        v28 = (signed __int64 *)EtwpAcquireLoggerContextByLoggerId(v123, *v27, 0);
        if ( EtwpIsGuidAllowed((__int64)v28, (const void *)(*(_QWORD *)(a1 + 32) + 40LL)) )
        {
          v31 = (char *)KeAbPreAcquire((__int64)(v28 + 86), 0LL);
          if ( _InterlockedCompareExchange64(v28 + 86, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(v28 + 86, 0, v31, (__int64)(v28 + 86));
          if ( v31 )
            v31[10] = 1;
          v32 = (_TOKEN_ACCESS_INFORMATION *)v28[97];
          if ( v32 )
            v33 = EtwpAccessCheckFromState((unsigned int *)(*(_QWORD *)(a1 + 32) + 40LL), v30, v32);
          else
            v33 = -1073741790;
          if ( _InterlockedCompareExchange64(v28 + 86, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v28 + 86);
          KeAbPostRelease((ULONG_PTR)(v28 + 86));
          if ( v33 >= 0 )
            v9 += 1 << v26;
          v29 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(*(_QWORD *)(v28[170] + 704) + 8LL * *(unsigned int *)v28);
        }
        else
        {
          v29 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(*(_QWORD *)(v28[170] + 704) + 8LL * *(unsigned int *)v28);
        }
        ExReleaseRundownProtectionCacheAwareEx(v29, 1u);
      }
      ++v26;
      v27 += 16;
    }
    while ( v26 < 0x10u );
    LOWORD(v34) = v9;
    if ( (*(_BYTE *)(a1 + 98) & 1) == 0 )
    {
      v35 = *(_QWORD *)(a1 + 40);
      LOWORD(v34) = 0;
      v36 = 0;
      v37 = 0LL;
      v38 = (_DWORD *)(v35 + 128);
      while ( 1 )
      {
        if ( *v38 )
        {
          v39 = *(_QWORD *)(v35 + 640);
          v40 = 1;
          if ( !v39 )
            goto LABEL_61;
          if ( (*(_DWORD *)(v39 + v37) & 0x80000004) != 0x80000004 )
            goto LABEL_53;
          v41 = *(unsigned int **)(v39 + v37 + 8);
          if ( !v41 )
            goto LABEL_53;
          v42 = 0;
          if ( *v41 )
            break;
        }
LABEL_62:
        ++v36;
        v38 += 8;
        v37 += 104LL;
        if ( v36 >= 0x10 )
          goto LABEL_63;
      }
      v43 = v41 + 1;
      while ( *v43 != *(_DWORD *)(*(_QWORD *)(a1 + 80) + 464LL) )
      {
        ++v42;
        ++v43;
        if ( v42 >= *v41 )
          goto LABEL_62;
      }
      v40 = 1;
LABEL_53:
      v44 = *(_QWORD *)(v35 + 640);
      if ( (*(_DWORD *)(v44 + v37) & 0x80000008) == 0x80000008 )
        v40 = EtwpApplyExeFilter(a1, *(unsigned __int16 **)(v44 + v37 + 16));
      if ( !v40 )
        goto LABEL_62;
      v45 = *(_QWORD *)(v35 + 640);
      if ( ((*(_DWORD *)(v45 + v37) & 0x80000010) == 0x80000010 || (*(_DWORD *)(v45 + v37) & 0x80000020) == 0x80000020)
        && !EtwpApplyPackageIdFilter(a1, *(unsigned __int16 **)(v45 + v37 + 24), *(unsigned __int16 **)(v45 + v37 + 32)) )
      {
        goto LABEL_62;
      }
      v46 = *(_QWORD *)(v35 + 640);
      if ( (*(_DWORD *)(v46 + v37) & 0x80008000) == 0x80008000
        && !EtwpApplyContainerFilter(a1, *(unsigned __int16 **)(v46 + v37 + 40)) )
      {
        goto LABEL_62;
      }
LABEL_61:
      v34 = (unsigned __int16)v34 | (1 << v36);
      goto LABEL_62;
    }
LABEL_63:
    v47 = BugCheckParameter2;
    *(_WORD *)(a1 + 102) = v9 & v34;
    v48 = *(_QWORD *)(v47 + 656);
    if ( v48 )
    {
      v49 = 0;
      v50 = 0;
      v51 = (unsigned __int16 *)(v48 + 134);
      do
      {
        if ( *(_DWORD *)(v51 - 3) )
        {
          v52 = (signed __int64 *)EtwpAcquireLoggerContextByLoggerId(EtwpHostSiloState, *v51, 0);
          if ( EtwpIsGuidAllowed((__int64)v52, (const void *)(*(_QWORD *)(a1 + 32) + 40LL)) )
          {
            v56 = (char *)KeAbPreAcquire((__int64)(v52 + 86), 0LL);
            if ( _InterlockedCompareExchange64(v52 + 86, 17LL, 0LL) )
              ExfAcquirePushLockSharedEx(v52 + 86, 0, v56, (__int64)(v52 + 86));
            if ( v56 )
              v56[10] = 1;
            v57 = (_TOKEN_ACCESS_INFORMATION *)v52[97];
            if ( v57 )
              v58 = EtwpAccessCheckFromState((unsigned int *)(*(_QWORD *)(a1 + 32) + 40LL), v55, v57);
            else
              v58 = -1073741790;
            if ( _InterlockedCompareExchange64(v52 + 86, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(v52 + 86);
            KeAbPostRelease((ULONG_PTR)(v52 + 86));
            v53 = *(unsigned int *)v52;
            if ( v58 >= 0 )
              v50 += 1 << v49;
            v54 = *(_QWORD *)(v52[170] + 704);
          }
          else
          {
            v53 = *(unsigned int *)v52;
            v54 = *(_QWORD *)(v52[170] + 704);
          }
          ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v54 + 8 * v53), 1u);
        }
        ++v49;
        v51 += 16;
      }
      while ( v49 < 0x10u );
      LOWORD(v59) = v50;
      if ( (*(_BYTE *)(a1 + 98) & 1) == 0 )
      {
        LOWORD(v59) = 0;
        v60 = 0;
        v61 = 0LL;
        v62 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 656LL);
        v63 = (_DWORD *)(v62 + 136);
        while ( 1 )
        {
          if ( !*(v63 - 2) || (*v63 & 0x400) == 0 )
            goto LABEL_104;
          v64 = *(_QWORD *)(v62 + 640);
          v65 = 1;
          if ( !v64 )
            goto LABEL_103;
          if ( (*(_DWORD *)(v61 + v64) & 0x80000004) != 0x80000004 )
            goto LABEL_95;
          v66 = *(unsigned int **)(v61 + v64 + 8);
          if ( !v66 )
            goto LABEL_95;
          v67 = 0;
          if ( *v66 )
            break;
LABEL_104:
          ++v60;
          v63 += 8;
          v61 += 104LL;
          if ( v60 >= 0x10 )
            goto LABEL_105;
        }
        v68 = v66 + 1;
        while ( *v68 != *(_DWORD *)(*(_QWORD *)(a1 + 80) + 464LL) )
        {
          ++v67;
          ++v68;
          if ( v67 >= *v66 )
            goto LABEL_104;
        }
        v65 = 1;
LABEL_95:
        v69 = *(_QWORD *)(v62 + 640);
        if ( (*(_DWORD *)(v61 + v69) & 0x80000008) == 0x80000008 )
          v65 = EtwpApplyExeFilter(a1, *(unsigned __int16 **)(v61 + v69 + 16));
        if ( !v65 )
          goto LABEL_104;
        v70 = *(_QWORD *)(v62 + 640);
        if ( ((*(_DWORD *)(v70 + v61) & 0x80000010) == 0x80000010 || (*(_DWORD *)(v70 + v61) & 0x80000020) == 0x80000020)
          && !EtwpApplyPackageIdFilter(
                a1,
                *(unsigned __int16 **)(v70 + v61 + 24),
                *(unsigned __int16 **)(v70 + v61 + 32)) )
        {
          goto LABEL_104;
        }
        v71 = *(_QWORD *)(v62 + 640);
        if ( (*(_DWORD *)(v71 + v61) & 0x80008000) == 0x80008000
          && !EtwpApplyContainerFilter(a1, *(unsigned __int16 **)(v71 + v61 + 40)) )
        {
          goto LABEL_104;
        }
LABEL_103:
        v59 = (unsigned __int16)v59 | (1 << v60);
        goto LABEL_104;
      }
LABEL_105:
      *(_WORD *)(a1 + 106) = v50 & v59;
    }
    if ( *(_WORD *)(a1 + 102) )
    {
      v72 = 0;
      v73 = 0LL;
      do
      {
        v74 = *(unsigned __int16 *)(a1 + 102);
        if ( _bittest(&v74, v72) )
        {
          v75 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId(
                                  v123,
                                  *(unsigned __int16 *)(v73 + *(_QWORD *)(a1 + 40) + 134),
                                  0);
          if ( (*(_BYTE *)(a1 + 98) & 0x10) != 0
            || (unsigned int)Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline()
            && (*(_WORD *)(a1 + 98) & 0x400) != 0
            || (v75[204] & 0x2000000) != 0 )
          {
            if ( (*(_BYTE *)(a1 + 98) & 1) != 0 )
            {
              EtwpProviderArrivalCallback((__int64)v75, 0, a1, v76);
            }
            else
            {
              v77 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)(a1 + 80) + 488LL);
              _m_prefetchw(v77);
              v78 = v77->Count & 0xFFFFFFFFFFFFFFFEuLL;
              if ( v78 == _InterlockedCompareExchange64((volatile signed __int64 *)v77, v78 + 2, v78)
                || ExfAcquireRundownProtection(v77) )
              {
                v79 = *(_KPROCESS **)(a1 + 80);
                memset(v128, 0, sizeof(v128));
                KiStackAttachProcess(v79, 0, (__int64)v128);
                EtwpProviderArrivalCallback((__int64)v75, 1, a1, v80);
                KiUnstackDetachProcess((__int64)v128, 0, v81, v82);
                v83 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)(a1 + 80) + 488LL);
                _m_prefetchw(v83);
                v84 = v83->Count & 0xFFFFFFFFFFFFFFFEuLL;
                if ( v84 != _InterlockedCompareExchange64((volatile signed __int64 *)v83, v84 - 2, v84) )
                  ExfReleaseRundownProtection(v83);
              }
            }
          }
          ExReleaseRundownProtectionCacheAwareEx(
            *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v75 + 170) + 704LL) + 8LL * *v75),
            1u);
        }
        ++v72;
        v73 += 32LL;
      }
      while ( v72 < 0x10u );
      if ( !*(_WORD *)(a1 + 106) )
        goto LABEL_138;
    }
    else if ( !*(_WORD *)(a1 + 106) )
    {
      v10 = 0;
      *v125 = 0;
      goto LABEL_156;
    }
    v85 = 0;
    v86 = 0LL;
    do
    {
      v87 = *(unsigned __int16 *)(a1 + 106);
      if ( _bittest(&v87, v85) )
      {
        v88 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId(
                                EtwpHostSiloState,
                                *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 656LL) + v86 + 134),
                                0);
        if ( (*(_BYTE *)(a1 + 98) & 0x10) != 0
          || (unsigned int)Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline()
          && (*(_WORD *)(a1 + 98) & 0x400) != 0
          || (v88[204] & 0x2000000) != 0 )
        {
          if ( (*(_BYTE *)(a1 + 98) & 1) != 0 )
          {
            EtwpProviderArrivalCallback((__int64)v88, 0, a1, v89);
          }
          else
          {
            v90 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)(a1 + 80) + 488LL);
            _m_prefetchw(v90);
            v91 = v90->Count & 0xFFFFFFFFFFFFFFFEuLL;
            if ( v91 == _InterlockedCompareExchange64((volatile signed __int64 *)v90, v91 + 2, v91)
              || ExfAcquireRundownProtection(v90) )
            {
              v92 = *(_KPROCESS **)(a1 + 80);
              memset(v129, 0, sizeof(v129));
              KiStackAttachProcess(v92, 0, (__int64)v129);
              EtwpProviderArrivalCallback((__int64)v88, 1, a1, v93);
              KiUnstackDetachProcess((__int64)v129, 0, v94, v95);
              v96 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)(a1 + 80) + 488LL);
              _m_prefetchw(v96);
              v97 = v96->Count & 0xFFFFFFFFFFFFFFFEuLL;
              if ( v97 != _InterlockedCompareExchange64((volatile signed __int64 *)v96, v97 - 2, v97) )
                ExfReleaseRundownProtection(v96);
            }
          }
        }
        ExReleaseRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v88 + 170) + 704LL) + 8LL * *v88),
          1u);
      }
      ++v85;
      v86 += 32LL;
    }
    while ( v85 < 0x10u );
LABEL_138:
    if ( (*(_BYTE *)(a1 + 98) & 1) != 0 )
    {
      if ( *(_QWORD *)(a1 + 88) )
      {
        v127 = 0LL;
        Pool2 = 0LL;
        memset(v126, 0, sizeof(v126));
        EtwpComputeRegEntryEnableInfo(a1, (__int64)v126);
        v99 = v122;
        if ( v122 )
        {
          Pool2 = (char *)ExAllocatePool2(0x100uLL, v122, 0x46777445u);
          if ( Pool2 )
          {
            v100 = *(_WORD *)(a1 + 100);
            v101 = *(_QWORD *)(a1 + 32);
            v124 = &v127;
            *(_QWORD *)&v127 = Pool2;
            *((_QWORD *)&v127 + 1) = v99 | 0x8000000000000000uLL;
            EtwpCopySchematizedFilters(Pool2, v101, v100);
          }
        }
        guard_dispatch_icall_no_overrides(&CPER_EMPTY_GUID, 1LL);
        if ( Pool2 )
          ExFreePoolWithTag(Pool2, 0);
      }
    }
    else
    {
      v102 = v127;
      EtwpComputeRegEntryEnableInfo(a1, v127 + 72);
      v103 = v125;
      v104 = 0;
      *v125 = 120;
      v105 = *(_QWORD *)(a1 + 32);
      v106 = *(_QWORD *)(v105 + 640);
      if ( !v106 )
        goto LABEL_154;
      v107 = v106 + 88;
      v108 = 0;
      v109 = (_DWORD *)(v105 + 128);
      do
      {
        if ( *v109 )
        {
          if ( *(_QWORD *)v107 )
          {
            v110 = *(unsigned __int16 *)(a1 + 100);
            if ( _bittest(&v110, (unsigned __int8)v108) )
              v104 += (*(_DWORD *)(*(_QWORD *)v107 + 16LL) + 7) & 0xFFFFFFF8;
          }
        }
        ++v108;
        v109 += 8;
        v107 += 104LL;
      }
      while ( v108 < 0x10 );
      if ( v104 )
      {
        *v103 = v104 + 136;
        *(_DWORD *)(v102 + 132) = 0x80000000;
        *(_DWORD *)(v102 + 128) = v104;
        *(_QWORD *)(v102 + 120) = 136LL;
        EtwpCopySchematizedFilters((char *)(v102 + 136), *(_QWORD *)(a1 + 32), *(_WORD *)(a1 + 100));
        *(_DWORD *)(v102 + 116) = 1;
      }
      else
      {
LABEL_154:
        *(_DWORD *)(v102 + 116) = 0;
      }
    }
    v10 = 0;
    goto LABEL_156;
  }
  v10 = 0;
LABEL_156:
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 672LL) = 0LL;
  v111 = (__int64 *)(*(_QWORD *)(a1 + 32) + 664LL);
  _m_prefetchw(v111);
  v112 = *v111;
  v113 = *v111 - 16;
  if ( (*v111 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v113 = 0LL;
  if ( (v112 & 2) != 0 || (v114 = *v111, v114 != _InterlockedCompareExchange64(v111, v113, v112)) )
    ExfReleasePushLock(v111);
  KeAbPostRelease((ULONG_PTR)v111);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v115 = BugCheckParameter2;
  *(_QWORD *)(BugCheckParameter2 + 672) = 0LL;
  v116 = (volatile signed __int64 *)(v115 + 664);
  _m_prefetchw((const void *)(v115 + 664));
  v117 = *(_QWORD *)(v115 + 664);
  v118 = v117 - 16;
  if ( (v117 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v118 = 0LL;
  if ( (v117 & 2) != 0 || v117 != _InterlockedCompareExchange64(v116, v118, v117) )
    ExfReleasePushLock(v116);
  KeAbPostRelease((ULONG_PTR)v116);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_167:
  if ( BugCheckParameter2 )
    EtwpUnreferenceGuidEntry((__int64 *)BugCheckParameter2);
  if ( v10 >= 0 && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_GROUP_JOIN) )
  {
    UserData.Ptr = *(_QWORD *)(a1 + 32) + 40LL;
    v119 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)&UserData.Size = 16LL;
    v131 = v119 + 40;
    v132 = 16LL;
    EtwWrite(EtwpEventTracingProvRegHandle, &ETW_EVENT_GROUP_JOIN, 0LL, 2u, &UserData);
  }
  return (unsigned int)v10;
}
