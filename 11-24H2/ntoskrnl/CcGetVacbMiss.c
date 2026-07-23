/*
 * XREFs of CcGetVacbMiss @ 0x140356790
 * Callers:
 *     CcGetVirtualAddress @ 0x140229480 (CcGetVirtualAddress.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     MmMapViewInSystemCache @ 0x140356F24 (MmMapViewInSystemCache.c)
 *     CcSetVacbLargeOffset @ 0x140357260 (CcSetVacbLargeOffset.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     CcUnmapInactiveViewsInternal @ 0x1403EE88C (CcUnmapInactiveViewsInternal.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1403EEFB0 (CcReleaseBcbLockAndVacbLock.c)
 *     CcSetVacbInFreeList @ 0x1403EF028 (CcSetVacbInFreeList.c)
 *     CcSetVacbIntoList @ 0x1403EF238 (CcSetVacbIntoList.c)
 *     CcGetVacbFromFreeList @ 0x140425B70 (CcGetVacbFromFreeList.c)
 *     FsRtlIsNtstatusExpected @ 0x14044B3D0 (FsRtlIsNtstatusExpected.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     CcUnmapVacb @ 0x1409DC780 (CcUnmapVacb.c)
 */

unsigned __int64 __fastcall CcGetVacbMiss(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // rbp
  unsigned int v5; // r13d
  char v6; // di
  __int64 v7; // rdx
  unsigned int v8; // r14d
  unsigned __int8 CurrentIrql; // bl
  _QWORD *ArbitraryUserPointer; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 *v15; // rcx
  int *v16; // r8
  __int64 *v17; // rax
  unsigned __int64 VacbFromFreeList; // rdi
  __int64 v19; // rdx
  __int64 **v20; // rcx
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  __int64 v23; // r8
  NTSTATUS v24; // ebp
  char *v25; // rax
  char *v26; // rbx
  __int64 v27; // r9
  __int64 v28; // r15
  __int64 v29; // rbx
  __int64 v30; // r15
  char v31; // dl
  __int16 v32; // r12
  signed __int64 v33; // rax
  signed __int64 v34; // rdx
  __int64 v35; // rtt
  unsigned __int8 v36; // r15
  KIRQL v37; // bl
  __int64 v39; // r10
  int v40; // edx
  int v41; // ecx
  int v42; // r8d
  __int64 v43; // rax
  __int64 v44; // rcx
  KIRQL v45; // bl
  __int64 v46; // rax
  __int16 v47; // r12
  signed __int64 v48; // rax
  signed __int64 v49; // rdx
  __int64 v50; // rtt
  KIRQL v51; // al
  unsigned __int64 v52; // rbx
  __int64 v53; // rcx
  __int64 *v54; // rdx
  _QWORD *v55; // rax
  __int64 v56; // rcx
  int v57; // eax
  __int64 v58; // r9
  char BugCheckParameter4; // [rsp+20h] [rbp-68h]
  __int64 v60; // [rsp+30h] [rbp-58h]
  unsigned __int64 v61; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int8 v62; // [rsp+90h] [rbp+8h]
  __int64 v63; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v64; // [rsp+A0h] [rbp+18h]
  int v65; // [rsp+A8h] [rbp+20h]

  v65 = a4;
  v64 = a3;
  v4 = *(_QWORD *)(a1 + 536);
  v5 = 0;
  HIDWORD(v63) = HIDWORD(a2);
  v60 = v4;
  v6 = 0;
  v7 = (unsigned int)a2 - (a2 & 0x3FFFF);
  LODWORD(v63) = v7;
  v8 = a3;
  while ( 1 )
  {
    v62 = v6;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v7) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v7);
    }
    ArbitraryUserPointer = KeGetPcr()->NtTib.ArbitraryUserPointer;
    v12 = ArbitraryUserPointer[9];
    v13 = (__int64)(ArbitraryUserPointer + 8);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v14 = _InterlockedExchange64((volatile __int64 *)v12, v13);
      if ( v14 )
        KxWaitForLockOwnerShip(v13, v14);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(v13, v12);
    }
    if ( v6 )
    {
      v5 |= 2u;
      v15 = (__int64 *)(v4 + 1232);
      v16 = (int *)(v4 + 1248);
    }
    else
    {
      v15 = &CcVacbFreeList;
      v16 = &CcNumberOfFreeVacbs;
    }
    v17 = (__int64 *)*v15;
    VacbFromFreeList = 0LL;
    if ( (__int64 *)*v15 != v15 )
    {
      v19 = *v17;
      VacbFromFreeList = (unsigned __int64)(v17 - 2);
      ++CcNumberOfMappedVacbs;
      if ( *(__int64 **)(v19 + 8) != v17 )
        goto LABEL_12;
      v20 = (__int64 **)v17[1];
      if ( *v20 != v17 )
        goto LABEL_12;
      *v20 = (__int64 *)v19;
      *(_QWORD *)(v19 + 8) = v20;
      if ( !*v16 )
        KeBugCheckEx(0x34u, 0x394uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      v12 = 0xCCCCCCCCCCCCCCCDuLL;
      --*v16;
      v21 = *(_QWORD *)(VacbFromFreeList + 32);
      v22 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(VacbFromFreeList - v21 - 16) >> 3);
      if ( (unsigned int)v22 > *(_DWORD *)(v21 + 8) )
        *(_DWORD *)(v21 + 8) = v22;
      if ( !*(_QWORD *)VacbFromFreeList )
      {
        v23 = **(unsigned int **)(VacbFromFreeList + 32);
        v12 = *(_QWORD *)(CcVacbArrays + 8 * v23);
        if ( v12 )
        {
          ++*(_DWORD *)(v12 + 4);
          if ( *(_DWORD *)v12 != (_DWORD)v23 )
            KeBugCheckEx(0x34u, 0x176uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        }
      }
      *(_QWORD *)(VacbFromFreeList + 8) = -1LL;
    }
    KxReleaseQueuedSpinLock((volatile signed __int64 **)KeGetPcr()->NtTib.ArbitraryUserPointer + 8, v12);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    if ( !VacbFromFreeList )
    {
      do
      {
        if ( !CcInitializationComplete )
          break;
        if ( !CcNumberOfMappedVacbs )
          break;
        v44 = *(_QWORD *)(*(_QWORD *)(v4 + 8) + 8LL);
        if ( !v44 )
          break;
        if ( !(unsigned int)CcUnmapInactiveViewsInternal(v44, 64LL, 0LL) )
          break;
        v45 = KeAcquireQueuedSpinLock(4uLL);
        VacbFromFreeList = CcGetVacbFromFreeList(v4, v62);
        KeReleaseQueuedSpinLock(4uLL, v45);
      }
      while ( !VacbFromFreeList );
      if ( !VacbFromFreeList )
      {
        if ( v65 == 1 )
          ++CcDbgNumberOfFailedHighPriorityMappingsDueToCcResources;
        v36 = v62;
        v24 = -1073741670;
        goto LABEL_76;
      }
    }
    v61 = *(_QWORD *)(a1 + 32) - v63;
    if ( v61 > 0x40000 )
      LODWORD(v61) = 0x40000;
    v24 = MmMapViewInSystemCache(
            *(_QWORD *)(a1 + 176),
            VacbFromFreeList,
            (unsigned int)&v63,
            (unsigned int)&v61,
            BugCheckParameter4);
    if ( v8 )
      ExAcquireFastMutex((PKGUARDED_MUTEX)(a1 + 288));
    v25 = (char *)KeAbPreAcquire(a1 + 104, 0LL);
    v26 = v25;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 104), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 104), v25, a1 + 104);
    if ( v26 )
      v26[10] = 1;
    v27 = *(_QWORD *)(a1 + 32);
    v28 = *(_QWORD *)(a1 + 88);
    v29 = v63;
    if ( v27 <= 0x2000000 )
    {
      v30 = *(_QWORD *)(v28 + 8 * ((unsigned __int64)(unsigned int)v63 >> 18));
      goto LABEL_35;
    }
    v39 = v63;
    v40 = 0;
    v41 = 25;
    do
    {
      v42 = v41;
      v41 += 7;
      ++v40;
    }
    while ( v27 > 1LL << v41 );
    v30 = *(_QWORD *)(v28 + 8 * (v63 >> v42));
    if ( v30 )
      break;
LABEL_36:
    if ( v24 < 0 )
      goto LABEL_56;
    v31 = 1;
    if ( v27 > 0x2000000 )
    {
      v31 = CcSetVacbLargeOffset(a1, v63, VacbFromFreeList, 0LL);
    }
    else if ( VacbFromFreeList < 0xFFFFFFFFFFFFFFFEuLL )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)(unsigned int)v63 >> 18)) = VacbFromFreeList;
LABEL_42:
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 548));
      v29 = v63;
      goto LABEL_43;
    }
    if ( VacbFromFreeList <= 0xFFFFFFFFFFFFFFFDuLL )
      goto LABEL_42;
LABEL_43:
    if ( v31 )
    {
      if ( *(_QWORD *)(VacbFromFreeList + 8) != -1LL )
        KeBugCheckEx(0x34u, 0x7A4uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      *(_QWORD *)(VacbFromFreeList + 8) = a1;
      *(_QWORD *)(VacbFromFreeList + 16) = v29;
      v32 = _InterlockedIncrement((volatile signed __int32 *)(VacbFromFreeList + 16));
      if ( v32 )
      {
        if ( v32 == 1 )
          _InterlockedIncrement((volatile signed __int32 *)(a1 + 552));
        if ( v63 >= *(_QWORD *)(a1 + 376) )
          *(_QWORD *)(a1 + 376) = v63 + 0x40000;
        _m_prefetchw((const void *)(a1 + 104));
        v33 = *(_QWORD *)(a1 + 104);
        v34 = v33 - 16;
        if ( (v33 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v34 = 0LL;
        if ( (v33 & 2) != 0
          || (v35 = *(_QWORD *)(a1 + 104),
              v35 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 104), v34, v33)) )
        {
          ExfReleasePushLock((_QWORD *)(a1 + 104));
        }
        KeAbPostRelease(a1 + 104);
        if ( v64 )
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 288));
        return VacbFromFreeList;
      }
LABEL_80:
      KeBugCheckEx(0x34u, 0xBACuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    }
    v24 = -1073741670;
    CcUnmapVacb(VacbFromFreeList, a1, v5);
LABEL_56:
    v8 = v64;
    CcReleaseBcbLockAndVacbLock(v64, a1);
    v36 = v62;
    if ( v62 )
      ++CcDbgNumberOfFailedHighPriorityMappingsDueToMmResources;
    else
      *(_QWORD *)VacbFromFreeList = 0LL;
    v37 = KeAcquireQueuedSpinLock(4uLL);
    CcSetVacbInFreeList(v60, VacbFromFreeList, v62);
    KeReleaseQueuedSpinLock(4uLL, v37);
    if ( !FsRtlIsNtstatusExpected(v24) )
      v24 = -1073741589;
LABEL_76:
    if ( v36 || v65 != 1 )
      RtlRaiseStatus(v24);
    v4 = v60;
    v6 = 1;
  }
  do
  {
    if ( !v40 )
      break;
    v43 = 1LL << v42;
    v42 -= 7;
    v39 &= v43 - 1;
    --v40;
    v30 = *(_QWORD *)(v30 + 8 * (v39 >> v42));
  }
  while ( v30 );
LABEL_35:
  if ( !v30 )
    goto LABEL_36;
  if ( v24 < 0 )
    goto LABEL_56;
  v46 = *(_QWORD *)(v30 + 8);
  v47 = _InterlockedIncrement((volatile signed __int32 *)(v30 + 16));
  if ( !v47 )
    goto LABEL_80;
  if ( v47 == 1 )
    _InterlockedIncrement((volatile signed __int32 *)(v46 + 552));
  _m_prefetchw((const void *)(a1 + 104));
  v48 = *(_QWORD *)(a1 + 104);
  v49 = v48 - 16;
  if ( (v48 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v49 = 0LL;
  if ( (v48 & 2) != 0
    || (v50 = *(_QWORD *)(a1 + 104),
        v50 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 104), v49, v48)) )
  {
    ExfReleasePushLock((_QWORD *)(a1 + 104));
  }
  KeAbPostRelease(a1 + 104);
  if ( v64 )
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 288));
  CcUnmapVacb(VacbFromFreeList, a1, v5);
  v51 = KeAcquireQueuedSpinLock(4uLL);
  --CcNumberOfMappedVacbs;
  v52 = v51;
  if ( v62 )
  {
    CcSetVacbIntoList(VacbFromFreeList, v60 + 1232);
    *(_QWORD *)(VacbFromFreeList + 8) = 0LL;
    ++*(_DWORD *)(v58 + 1248);
  }
  else
  {
    v53 = CcVacbFreeList;
    v54 = &CcVacbFreeList;
    v55 = (_QWORD *)(VacbFromFreeList + 16);
    if ( *(__int64 **)(CcVacbFreeList + 8) != &CcVacbFreeList )
LABEL_12:
      __fastfail(3u);
    *v55 = CcVacbFreeList;
    *(_QWORD *)(VacbFromFreeList + 24) = &CcVacbFreeList;
    *(_QWORD *)(v53 + 8) = v55;
    CcVacbFreeList = VacbFromFreeList + 16;
    v56 = *(_QWORD *)(VacbFromFreeList + 32);
    *(_QWORD *)(VacbFromFreeList + 8) = 0LL;
    v57 = *(_DWORD *)(v56 + 4);
    if ( !v57 )
      KeBugCheckEx(0x34u, 0x1A5uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *(_DWORD *)(v56 + 4) = v57 - 1;
    ++CcNumberOfFreeVacbs;
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)KeGetPcr()->NtTib.ArbitraryUserPointer + 8, (__int64)v54);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v52);
  __writecr8(v52);
  return v30;
}
