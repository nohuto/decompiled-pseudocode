/*
 * XREFs of CcUnmapInactiveViewsInternal @ 0x1403F877C
 * Callers:
 *     CcGetVacbMiss @ 0x1402D5510 (CcGetVacbMiss.c)
 *     CcUnmapInactiveViews @ 0x1403F8634 (CcUnmapInactiveViews.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     CcIncrementOpenCount @ 0x1402AAADC (CcIncrementOpenCount.c)
 *     CcDecrementOpenCount @ 0x1402ABDBC (CcDecrementOpenCount.c)
 *     CcSetVacbLargeOffset @ 0x1402D5FE0 (CcSetVacbLargeOffset.c)
 *     KeAcquireQueuedSpinLock @ 0x1402D6AF0 (KeAcquireQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402D84E0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     KxReleaseQueuedSpinLock @ 0x140321BB0 (KxReleaseQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140322C90 (KeReleaseQueuedSpinLock.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     CcGetRandomVacbArrayWithReference @ 0x1403F86DC (CcGetRandomVacbArrayWithReference.c)
 *     CcReferenceVacbArray @ 0x1403F8DB0 (CcReferenceVacbArray.c)
 *     CcRecalculateVacbArrayHighwaterMark @ 0x1403F8E04 (CcRecalculateVacbArrayHighwaterMark.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x1403F8E34 (CcAcquireBcbLockAndVacbLock.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1403F8EA0 (CcReleaseBcbLockAndVacbLock.c)
 *     CcSetVacbInFreeList @ 0x1403F8F18 (CcSetVacbInFreeList.c)
 *     CcGetVacbLargeOffset @ 0x1403F8FC0 (CcGetVacbLargeOffset.c)
 *     CcDereferenceVacbArray @ 0x1403F9050 (CcDereferenceVacbArray.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     CcUnmapVacb @ 0x1408E5FE0 (CcUnmapVacb.c)
 *     RtlRandom @ 0x140A4F590 (RtlRandom.c)
 */

__int64 __fastcall CcUnmapInactiveViewsInternal(__int64 a1, unsigned int a2, char a3, _QWORD *a4)
{
  unsigned int v4; // r12d
  __int64 RandomVacbArrayWithReference; // rsi
  int v6; // r13d
  __int64 v7; // r15
  unsigned int v8; // r14d
  bool v9; // di
  __int64 v10; // rbx
  unsigned int v11; // ebx
  KIRQL v12; // di
  unsigned int v13; // ebx
  ULONG v14; // eax
  _QWORD *v15; // rdi
  KIRQL v16; // al
  __int64 v17; // rdx
  KIRQL v18; // r14
  char v19; // bl
  __int64 v20; // rdx
  __int64 v21; // rcx
  char v22; // r8
  __int64 v23; // rbx
  __int64 v24; // rdi
  unsigned int v25; // r12d
  unsigned int v26; // r12d
  __int64 v27; // r13
  __int64 v28; // r14
  __int64 VacbLargeOffset; // r15
  int v30; // r14d
  unsigned int v31; // ecx
  KIRQL v32; // al
  __int64 v33; // r8
  KIRQL v34; // bl
  __int64 v35; // r14
  int v36; // edi
  __int64 *v37; // rbx
  bool v38; // zf
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  bool v43; // [rsp+28h] [rbp-49h]
  unsigned int v44; // [rsp+2Ch] [rbp-45h]
  unsigned int v45; // [rsp+30h] [rbp-41h]
  int v46; // [rsp+34h] [rbp-3Dh]
  unsigned int v47; // [rsp+38h] [rbp-39h]
  int v48; // [rsp+3Ch] [rbp-35h]
  int v49; // [rsp+40h] [rbp-31h]
  int v50; // [rsp+44h] [rbp-2Dh]
  __int64 v51; // [rsp+48h] [rbp-29h]
  struct _KLOCK_QUEUE_HANDLE v52; // [rsp+50h] [rbp-21h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-9h] BYREF
  unsigned int v55; // [rsp+E0h] [rbp+6Fh]
  int v56; // [rsp+E8h] [rbp+77h]

  v55 = a2;
  v46 = -1;
  v44 = 0;
  v4 = 0;
  v47 = 0;
  RandomVacbArrayWithReference = 0LL;
  v50 = 0;
  v6 = 0;
  v49 = 0;
  v7 = 0LL;
  v48 = 0;
  v8 = 0;
  v51 = 0LL;
  v45 = 0;
  memset(&v52, 0, sizeof(v52));
  if ( a4 )
  {
    *a4 = 0LL;
    v49 = 1;
  }
  v56 = a3 & 1;
  v9 = !(a3 & 1);
  v43 = v9;
  while ( 2 )
  {
    while ( v4 < a2 )
    {
      while ( 1 )
      {
        if ( v8 > CcVacbArraysHighestUsedIndex )
        {
          a2 = v55;
          goto LABEL_63;
        }
        if ( RandomVacbArrayWithReference )
        {
          LODWORD(v10) = v46;
          goto LABEL_16;
        }
        LODWORD(v10) = -1;
        v46 = -1;
        if ( v9 )
          break;
        v11 = v8;
        v12 = KeAcquireQueuedSpinLock(4uLL);
        while ( 1 )
        {
          RandomVacbArrayWithReference = CcReferenceVacbArray(v11);
          if ( RandomVacbArrayWithReference )
            break;
          if ( ++v11 >= 0x500 )
          {
            RandomVacbArrayWithReference = 0LL;
            goto LABEL_13;
          }
        }
        CcRecalculateVacbArrayHighwaterMark(RandomVacbArrayWithReference);
LABEL_13:
        KeReleaseQueuedSpinLock(4uLL, v12);
        v9 = v43;
        v45 = ++v8;
        if ( RandomVacbArrayWithReference )
        {
          LODWORD(v10) = -1;
          goto LABEL_15;
        }
      }
      RandomVacbArrayWithReference = CcGetRandomVacbArrayWithReference();
LABEL_15:
      if ( *(_DWORD *)(RandomVacbArrayWithReference + 4) == 1 )
        goto LABEL_22;
LABEL_16:
      if ( v9 )
      {
        v13 = 0;
        do
        {
          v14 = RtlRandom(&CcRandomSeed);
          v15 = (_QWORD *)(RandomVacbArrayWithReference
                         + 8
                         * (v14 % (*(_DWORD *)(RandomVacbArrayWithReference + 8) + 1)
                          + 4LL * (v14 % (*(_DWORD *)(RandomVacbArrayWithReference + 8) + 1))
                          + 2));
          if ( (unsigned __int64)(v15[1] - 1LL) > 0xFFFFFFFFFFFFFFFDuLL || *((_WORD *)v15 + 8) || !*v15 )
          {
            ++v13;
          }
          else if ( v15 )
          {
            goto LABEL_29;
          }
        }
        while ( v13 <= 0x10 );
        ++CcDbgRandomFailed;
        v9 = 0;
        v43 = 0;
        goto LABEL_22;
      }
      if ( (_DWORD)v10 == -1 )
      {
        LODWORD(v10) = *(_DWORD *)(RandomVacbArrayWithReference + 8) + 1;
        v46 = v10;
      }
      if ( !(_DWORD)v10 )
        goto LABEL_22;
      do
      {
        v10 = (unsigned int)(v10 - 1);
        v15 = (_QWORD *)(RandomVacbArrayWithReference + 8 * ((unsigned int)v10 + 2LL + 4 * v10));
        if ( (unsigned __int64)(v15[1] - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL
          && !*((_WORD *)v15 + 8)
          && *v15
          && (!v7 || ((v7 ^ *v15) & 0xFFFFFFE00000LL) == 0) )
        {
          break;
        }
        v15 = 0LL;
      }
      while ( (_DWORD)v10 );
      v46 = v10;
      if ( !v15 )
      {
        v9 = v43;
LABEL_22:
        CcDereferenceVacbArray(RandomVacbArrayWithReference, 0LL);
        a2 = v55;
        RandomVacbArrayWithReference = 0LL;
        continue;
      }
LABEL_29:
      v16 = KeAcquireQueuedSpinLock(4uLL);
      v17 = v15[1];
      v18 = v16;
      if ( (unsigned __int64)(v17 - 1) > 0xFFFFFFFFFFFFFFFDuLL
        || *((_WORD *)v15 + 8)
        || !*v15
        || v7 && ((v7 ^ *v15) & 0xFFFFFFE00000LL) != 0 )
      {
        goto LABEL_30;
      }
      memset(&LockHandle, 0, sizeof(LockHandle));
      v19 = 0;
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*(_QWORD *)(v17 + 536) + 768LL), &LockHandle);
      v21 = v15[1];
      if ( *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(v21 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28) + 8LL) == v21 )
      {
        CcIncrementOpenCount(v21, v20, 1);
        v19 = v22;
      }
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle, v20);
      if ( !v19 )
      {
LABEL_30:
        v51 = 0LL;
        v7 = 0LL;
        KeReleaseQueuedSpinLock(4uLL, v18);
        goto LABEL_52;
      }
      v23 = v15[2];
      v24 = v15[1];
      v25 = *(_DWORD *)(v24 + 152);
      KeReleaseQueuedSpinLock(4uLL, v18);
      v26 = (v25 >> 9) & 1;
      CcAcquireBcbLockAndVacbLock(v26, v24);
      v27 = *(_QWORD *)(v24 + 536);
      if ( a1 != v27 || v23 < 0 || (v28 = *(_QWORD *)(v24 + 32), v23 >= v28) )
      {
        CcReleaseBcbLockAndVacbLock(v26, v24);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v27 + 768), &v52);
        CcDecrementOpenCount(v24);
        KeReleaseInStackQueuedSpinLock(&v52);
        v4 = v44;
        goto LABEL_51;
      }
      if ( v28 <= 0x2000000 )
        VacbLargeOffset = *(_QWORD *)(*(_QWORD *)(v24 + 88) + 8 * ((unsigned __int64)(unsigned int)v23 >> 18));
      else
        VacbLargeOffset = CcGetVacbLargeOffset(v24, v23);
      if ( !VacbLargeOffset || *(_WORD *)(VacbLargeOffset + 16) )
      {
        CcReleaseBcbLockAndVacbLock(v26, v24);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v27 + 768), &v52);
        CcDecrementOpenCount(v24);
        KeReleaseInStackQueuedSpinLock(&v52);
        v4 = v44;
        goto LABEL_50;
      }
      if ( v28 > 0x2000000 )
        CcSetVacbLargeOffset(v24, v23, 0LL, 0LL);
      else
        *(_QWORD *)(*(_QWORD *)(v24 + 88) + 8 * ((unsigned __int64)(unsigned int)v23 >> 18)) = 0LL;
      _InterlockedDecrement((volatile signed __int32 *)(v24 + 548));
      if ( *(_DWORD *)(v27 + 1248) < (unsigned int)CcMinimumFreeHighPriorityVacbs )
      {
        v30 = 1;
LABEL_81:
        v31 = v48 | 2;
        v51 = 0LL;
        v48 |= 2u;
        goto LABEL_47;
      }
      v30 = 0;
      if ( v49 )
        goto LABEL_81;
      v31 = v48 & 0xFFFFFFFD;
      v48 &= ~2u;
      if ( !v51 )
      {
        if ( v56 )
          v51 = *(_QWORD *)VacbLargeOffset;
      }
LABEL_47:
      CcUnmapVacb(VacbLargeOffset, v24, v31);
      CcReleaseBcbLockAndVacbLock(v26, v24);
      v4 = v44;
      if ( !v30 )
      {
        v4 = v44 + 1;
        v47 = 1;
        ++v44;
        if ( !v49 )
          goto LABEL_49;
        v49 = 0;
        v47 = 1;
        *a4 = *(_QWORD *)VacbLargeOffset;
        *(_QWORD *)VacbLargeOffset = 0LL;
      }
      v44 = v4;
LABEL_49:
      v32 = KeAcquireQueuedSpinLock(4uLL);
      *(_QWORD *)(VacbLargeOffset + 8) = 0LL;
      LOBYTE(v33) = v30;
      v34 = v32;
      CcSetVacbInFreeList(v27, VacbLargeOffset, v33);
      KeReleaseQueuedSpinLock(4uLL, v34);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v27 + 768), &v52);
      CcDecrementOpenCount(v24);
      KeReleaseInStackQueuedSpinLock(&v52);
LABEL_50:
      v7 = v51;
LABEL_51:
      v6 = v50;
LABEL_52:
      a2 = v55;
      v8 = v45;
      v9 = v43;
    }
LABEL_63:
    if ( RandomVacbArrayWithReference )
    {
      CcDereferenceVacbArray(RandomVacbArrayWithReference, 0LL);
      a2 = v55;
      RandomVacbArrayWithReference = 0LL;
    }
    if ( !v6 && v4 < a2 )
    {
      v6 = 1;
      v35 = (a2 - v4) << 18;
      v36 = 0;
      v50 = 1;
      ExAcquireFastMutex(&CcBcbTrimNotificationListLock);
      v37 = (__int64 *)CcBcbTrimNotificationList;
      if ( (__int64 *)CcBcbTrimNotificationList != &CcBcbTrimNotificationList )
      {
        do
        {
          KeReleaseGuardedMutex(&CcBcbTrimNotificationListLock);
          v36 |= guard_dispatch_icall_no_overrides(v35, v40, v41, v42);
          ExAcquireFastMutex(&CcBcbTrimNotificationListLock);
          v37 = (__int64 *)*v37;
        }
        while ( v37 != &CcBcbTrimNotificationList );
        v7 = v51;
      }
      KeReleaseGuardedMutex(&CcBcbTrimNotificationListLock);
      v8 = v45;
      a2 = v55;
      v38 = v36 == 0;
      v9 = v43;
      if ( !v38 )
        continue;
    }
    break;
  }
  _InterlockedIncrement(&CcDbgNumberOfCcUnmapInactiveViews);
  return v47;
}
