/*
 * XREFs of CcGetVacbMiss @ 0x1403B3D50
 * Callers:
 *     CcGetVirtualAddress @ 0x1402D8300 (CcGetVirtualAddress.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeReleaseQueuedSpinLock @ 0x14028B980 (KeReleaseQueuedSpinLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KeAcquireQueuedSpinLock @ 0x140301270 (KeAcquireQueuedSpinLock.c)
 *     MmMapViewInSystemCache @ 0x1403B44EC (MmMapViewInSystemCache.c)
 *     CcSetVacbLargeOffset @ 0x1403B4820 (CcSetVacbLargeOffset.c)
 *     CcUnmapInactiveViewsInternal @ 0x1403B5BF0 (CcUnmapInactiveViewsInternal.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1403B6E80 (CcReleaseBcbLockAndVacbLock.c)
 *     CcSetVacbInFreeList @ 0x1403B6EF8 (CcSetVacbInFreeList.c)
 *     CcGetVacbFromFreeList @ 0x140437F90 (CcGetVacbFromFreeList.c)
 *     CcSetVacbIntoList @ 0x14044CE9C (CcSetVacbIntoList.c)
 *     FsRtlIsNtstatusExpected @ 0x1404562A0 (FsRtlIsNtstatusExpected.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     CcUnmapVacb @ 0x1408B5FF0 (CcUnmapVacb.c)
 */

unsigned __int64 __fastcall CcGetVacbMiss(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // rbp
  unsigned int v5; // r13d
  char v6; // di
  unsigned int v7; // r14d
  unsigned __int8 CurrentIrql; // bl
  char *ArbitraryUserPointer; // rcx
  volatile __int64 *v11; // r8
  struct _KPRCB *v12; // rcx
  struct _KPRCB **v13; // rdx
  __int64 *v14; // rcx
  int *v15; // r8
  __int64 *v16; // rax
  unsigned __int64 VacbFromFreeList; // rdi
  __int64 v18; // rdx
  __int64 **v19; // rcx
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // r8
  _DWORD *v23; // rdx
  NTSTATUS v24; // ebp
  __int64 *v25; // rax
  __int64 *v26; // rbx
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
  _QWORD *v54; // rax
  __int64 v55; // rcx
  int v56; // eax
  __int64 v57; // r9
  char BugCheckParameter4; // [rsp+20h] [rbp-68h]
  __int64 v59; // [rsp+30h] [rbp-58h]
  unsigned __int64 v60; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int8 v61; // [rsp+90h] [rbp+8h]
  __int64 v62; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v63; // [rsp+A0h] [rbp+18h]
  int v64; // [rsp+A8h] [rbp+20h]

  v64 = a4;
  v63 = a3;
  v4 = *(_QWORD *)(a1 + 536);
  v5 = 0;
  HIDWORD(v62) = HIDWORD(a2);
  v59 = v4;
  v6 = 0;
  LODWORD(v62) = a2 - (a2 & 0x3FFFF);
  v7 = a3;
  while ( 1 )
  {
    v61 = v6;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    ArbitraryUserPointer = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer;
    v11 = (volatile __int64 *)*((_QWORD *)ArbitraryUserPointer + 9);
    v12 = (struct _KPRCB *)(ArbitraryUserPointer + 64);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v13 = (struct _KPRCB **)_InterlockedExchange64(v11, (__int64)v12);
      if ( v13 )
        KxWaitForLockOwnerShip(v12, v13);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented((__int64)v12, v11);
    }
    if ( v6 )
    {
      v5 |= 2u;
      v14 = (__int64 *)(v4 + 1232);
      v15 = (int *)(v4 + 1248);
    }
    else
    {
      v14 = &CcVacbFreeList;
      v15 = &CcNumberOfFreeVacbs;
    }
    v16 = (__int64 *)*v14;
    VacbFromFreeList = 0LL;
    if ( (__int64 *)*v14 != v14 )
    {
      v18 = *v16;
      VacbFromFreeList = (unsigned __int64)(v16 - 2);
      ++CcNumberOfMappedVacbs;
      if ( *(__int64 **)(v18 + 8) != v16 )
        goto LABEL_12;
      v19 = (__int64 **)v16[1];
      if ( *v19 != v16 )
        goto LABEL_12;
      *v19 = (__int64 *)v18;
      *(_QWORD *)(v18 + 8) = v19;
      if ( !*v15 )
        KeBugCheckEx(0x34u, 0x394uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      --*v15;
      v20 = *(_QWORD *)(VacbFromFreeList + 32);
      v21 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(VacbFromFreeList - v20 - 16) >> 3);
      if ( (unsigned int)v21 > *(_DWORD *)(v20 + 8) )
        *(_DWORD *)(v20 + 8) = v21;
      if ( !*(_QWORD *)VacbFromFreeList )
      {
        v22 = **(unsigned int **)(VacbFromFreeList + 32);
        v23 = *(_DWORD **)(CcVacbArrays + 8 * v22);
        if ( v23 )
        {
          ++v23[1];
          if ( *v23 != (_DWORD)v22 )
            KeBugCheckEx(0x34u, 0x176uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        }
      }
      *(_QWORD *)(VacbFromFreeList + 8) = -1LL;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 64));
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
        VacbFromFreeList = CcGetVacbFromFreeList(v4, v61);
        KeReleaseQueuedSpinLock(4uLL, v45);
      }
      while ( !VacbFromFreeList );
      if ( !VacbFromFreeList )
      {
        if ( v64 == 1 )
          ++CcDbgNumberOfFailedHighPriorityMappingsDueToCcResources;
        v36 = v61;
        v24 = -1073741670;
        goto LABEL_74;
      }
    }
    v60 = *(_QWORD *)(a1 + 32) - v62;
    if ( v60 > 0x40000 )
      LODWORD(v60) = 0x40000;
    v24 = MmMapViewInSystemCache(
            *(_QWORD *)(a1 + 176),
            VacbFromFreeList,
            (unsigned int)&v62,
            (unsigned int)&v60,
            BugCheckParameter4);
    if ( v7 )
      ExAcquireFastMutex((PKGUARDED_MUTEX)(a1 + 288));
    v25 = KeAbPreAcquire(a1 + 104, 0LL);
    v26 = v25;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 104), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 104), v25, a1 + 104);
    if ( v26 )
      *((_BYTE *)v26 + 10) = 1;
    v27 = *(_QWORD *)(a1 + 32);
    v28 = *(_QWORD *)(a1 + 88);
    v29 = v62;
    if ( v27 <= 0x2000000 )
    {
      v30 = *(_QWORD *)(v28 + 8 * ((unsigned __int64)(unsigned int)v62 >> 18));
      goto LABEL_33;
    }
    v39 = v62;
    v40 = 0;
    v41 = 25;
    do
    {
      v42 = v41;
      v41 += 7;
      ++v40;
    }
    while ( v27 > 1LL << v41 );
    v30 = *(_QWORD *)(v28 + 8 * (v62 >> v42));
    if ( v30 )
      break;
LABEL_34:
    if ( v24 < 0 )
      goto LABEL_54;
    v31 = 1;
    if ( v27 > 0x2000000 )
    {
      v31 = CcSetVacbLargeOffset(a1, v62, VacbFromFreeList, 0LL);
    }
    else if ( VacbFromFreeList < 0xFFFFFFFFFFFFFFFEuLL )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)(unsigned int)v62 >> 18)) = VacbFromFreeList;
LABEL_40:
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 548));
      v29 = v62;
      goto LABEL_41;
    }
    if ( VacbFromFreeList <= 0xFFFFFFFFFFFFFFFDuLL )
      goto LABEL_40;
LABEL_41:
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
        if ( v62 >= *(_QWORD *)(a1 + 376) )
          *(_QWORD *)(a1 + 376) = v62 + 0x40000;
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
        if ( v63 )
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 288));
        return VacbFromFreeList;
      }
LABEL_80:
      KeBugCheckEx(0x34u, 0xBACuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    }
    v24 = -1073741670;
    CcUnmapVacb(VacbFromFreeList, a1, v5);
LABEL_54:
    v7 = v63;
    CcReleaseBcbLockAndVacbLock(v63, a1);
    v36 = v61;
    if ( v61 )
      ++CcDbgNumberOfFailedHighPriorityMappingsDueToMmResources;
    else
      *(_QWORD *)VacbFromFreeList = 0LL;
    v37 = KeAcquireQueuedSpinLock(4uLL);
    CcSetVacbInFreeList(v59, VacbFromFreeList, v61);
    KeReleaseQueuedSpinLock(4uLL, v37);
    if ( !FsRtlIsNtstatusExpected(v24) )
      v24 = -1073741589;
LABEL_74:
    if ( v36 || v64 != 1 )
      RtlRaiseStatus(v24);
    v4 = v59;
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
LABEL_33:
  if ( !v30 )
    goto LABEL_34;
  if ( v24 < 0 )
    goto LABEL_54;
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
  if ( v63 )
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 288));
  CcUnmapVacb(VacbFromFreeList, a1, v5);
  v51 = KeAcquireQueuedSpinLock(4uLL);
  --CcNumberOfMappedVacbs;
  v52 = v51;
  if ( v61 )
  {
    CcSetVacbIntoList(VacbFromFreeList, v59 + 1232);
    *(_QWORD *)(VacbFromFreeList + 8) = 0LL;
    ++*(_DWORD *)(v57 + 1248);
  }
  else
  {
    v53 = CcVacbFreeList;
    v54 = (_QWORD *)(VacbFromFreeList + 16);
    if ( *(__int64 **)(CcVacbFreeList + 8) != &CcVacbFreeList )
LABEL_12:
      __fastfail(3u);
    *v54 = CcVacbFreeList;
    *(_QWORD *)(VacbFromFreeList + 24) = &CcVacbFreeList;
    *(_QWORD *)(v53 + 8) = v54;
    CcVacbFreeList = VacbFromFreeList + 16;
    v55 = *(_QWORD *)(VacbFromFreeList + 32);
    *(_QWORD *)(VacbFromFreeList + 8) = 0LL;
    v56 = *(_DWORD *)(v55 + 4);
    if ( !v56 )
      KeBugCheckEx(0x34u, 0x1A5uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *(_DWORD *)(v55 + 4) = v56 - 1;
    ++CcNumberOfFreeVacbs;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 64));
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v52);
  __writecr8(v52);
  return v30;
}
