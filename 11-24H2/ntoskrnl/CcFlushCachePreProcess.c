/*
 * XREFs of CcFlushCachePreProcess @ 0x140278C74
 * Callers:
 *     CcFlushCachePriv @ 0x1402771F0 (CcFlushCachePriv.c)
 *     CcWriteBehindInternal @ 0x140279FE0 (CcWriteBehindInternal.c)
 *     CcWriteBehindAsync @ 0x14027B44C (CcWriteBehindAsync.c)
 *     CcAsyncLazywriteWorkerMulti @ 0x1404C0AEC (CcAsyncLazywriteWorkerMulti.c)
 * Callees:
 *     CcUnmapVacbArray @ 0x1402073E0 (CcUnmapVacbArray.c)
 *     MmFlushSection @ 0x140208E14 (MmFlushSection.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     CcIncrementOpenCount @ 0x14027516C (CcIncrementOpenCount.c)
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140359760 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     KeRcuReadUnlock @ 0x14040C230 (KeRcuReadUnlock.c)
 *     KeRcuReadLock @ 0x14040C360 (KeRcuReadLock.c)
 *     CcPerfLogFlushCache @ 0x140468A8C (CcPerfLogFlushCache.c)
 *     CcPerfLogFlushSection @ 0x14046B5A0 (CcPerfLogFlushSection.c)
 *     CcSerializeWithLazyWriter @ 0x1404A4FF4 (CcSerializeWithLazyWriter.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1404D48A8 (CcBoostLowPriorityWorkerThread.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     CcSetTelemetryPeriodicTimer @ 0x140ABD89C (CcSetTelemetryPeriodicTimer.c)
 */

char __fastcall CcFlushCachePreProcess(__int64 a1)
{
  int *v1; // r14
  __int64 v2; // rsi
  char v3; // di
  char v5; // r15
  __int64 v6; // r13
  __int64 v7; // r12
  void *v8; // rax
  void *v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 *v13; // rcx
  __int64 v14; // r8
  char v16; // cl
  __int64 v17; // rcx
  int v18; // eax
  int v19; // ecx
  _QWORD *v20; // rcx
  char v21; // dl
  __int64 v22; // rax
  __int64 v23; // rax
  char v24; // al
  struct _KLOCK_QUEUE_HANDLE v25; // [rsp+40h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-18h] BYREF
  __int64 v27; // [rsp+A0h] [rbp+30h]

  v1 = *(int **)(a1 + 112);
  v2 = *(unsigned int *)(a1 + 104);
  v3 = *(_BYTE *)(a1 + 108);
  v5 = 0;
  v27 = *(_QWORD *)(a1 + 24);
  v6 = 0LL;
  v7 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v25, 0, sizeof(v25));
  if ( *(_QWORD *)(a1 + 88) )
  {
    v8 = *(void **)(a1 + 96);
    if ( v8 )
    {
      if ( v8 != &CcNoDelay )
        KeBugCheckEx(0x34u, 0x16ABuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    }
  }
  ++qword_140F8E720;
  if ( !byte_140F8E6E1 && CcTelemetryGlobalData && !dword_140F8E800 && !dword_140F8E804 )
    CcSetTelemetryPeriodicTimer(DueTime);
  *v1 = 0;
  v9 = *(void **)(a1 + 96);
  *(_QWORD *)(a1 + 152) = 0LL;
  if ( v9 == &CcNoDelay )
  {
    *(_QWORD *)(a1 + 176) = *((_QWORD *)v1 + 1);
    *v1 = -2147483626;
    *(_BYTE *)(a1 + 132) = 1;
LABEL_15:
    *(_QWORD *)(a1 + 96) = 0LL;
    goto LABEL_16;
  }
  v10 = *(_DWORD *)(a1 + 56) | 1;
  *(_DWORD *)(a1 + 56) = v10;
  if ( v3 )
    *(_DWORD *)(a1 + 56) = v10 | 0x10;
  if ( v9 == &CcFlushForImageSection )
  {
    *(_BYTE *)(a1 + 138) = 1;
    goto LABEL_15;
  }
LABEL_16:
  *((_QWORD *)v1 + 1) = 0LL;
  KeRcuReadLock();
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  v12 = *(_QWORD *)(v27 + 8);
  *(_QWORD *)(a1 + 16) = v12;
  if ( v12 )
  {
    v6 = *(_QWORD *)(v12 + 536);
    v7 = *(_QWORD *)(v12 + 600);
    *(_QWORD *)a1 = v6;
    *(_QWORD *)(a1 + 8) = v7;
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 768), &v25);
    v5 = 1;
    if ( *(_BYTE *)(a1 + 132) )
    {
      if ( (*(_DWORD *)(v12 + 152) & 0x10000) != 0 )
      {
        *(_BYTE *)(a1 + 133) = 1;
        if ( *(_DWORD *)(v12 + 524) )
          *(_BYTE *)(a1 + 134) = 1;
      }
    }
    else
    {
      v13 = *(__int64 **)(a1 + 96);
      if ( v13 )
      {
        v11 = *v13;
        v14 = *(_QWORD *)(v12 + 32);
        if ( *v13 >= v14 )
        {
LABEL_23:
          KxReleaseQueuedSpinLock(&v25);
LABEL_24:
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          KeRcuReadUnlock();
          return 0;
        }
        if ( v11 + v2 > v14 )
        {
          LODWORD(v2) = *(_DWORD *)(v12 + 32) - *(_DWORD *)v13;
          *(_DWORD *)(a1 + 104) = v2;
        }
      }
      ++*(_DWORD *)(v12 + 524);
    }
  }
  v16 = *(_BYTE *)(a1 + 132);
  if ( !v16 && !*(_BYTE *)(a1 + 138) && v12 && (*(_DWORD *)(v12 + 524) > 1u || (*(_DWORD *)(v12 + 152) & 0x20) != 0) )
    *(_BYTE *)(a1 + 144) = 1;
  if ( *(_QWORD *)(a1 + 96) && !(_DWORD)v2 )
  {
    if ( v12 )
    {
      if ( !v16 )
        --*(_DWORD *)(v12 + 524);
    }
    if ( !v5 )
      goto LABEL_24;
    goto LABEL_23;
  }
  if ( v12 )
  {
    if ( *(_BYTE *)(a1 + 138) && (*(_DWORD *)(v12 + 524) >= 2u || !(unsigned __int8)CcSerializeWithLazyWriter(v6, v12)) )
    {
      --*(_DWORD *)(v12 + 524);
      KxReleaseQueuedSpinLock(&v25);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      KeRcuReadUnlock();
      *v1 = -1073741740;
      return 0;
    }
    CcIncrementOpenCount(v12, v11, 1);
    *(_QWORD *)(a1 + 168) = *(_QWORD *)((*(_QWORD *)(v12 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18);
    *(_QWORD *)(a1 + 216) = *(unsigned int *)(v12 + 112);
  }
  if ( v5 )
    KxReleaseQueuedSpinLock(&v25);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  KeRcuReadUnlock();
  if ( v12 && (*(_DWORD *)(v12 + 152) & 0x40000000) != 0 )
    *(_BYTE *)(a1 + 134) = 1;
  if ( (xmmword_140FC6B50 & 0x20000) != 0 )
    CcPerfLogFlushCache(
      *(_QWORD *)(a1 + 176),
      v12,
      *(_QWORD *)(a1 + 96),
      v2,
      *(_BYTE *)(a1 + 132) == 1,
      *(_BYTE *)(a1 + 133) == 1,
      *(_BYTE *)(a1 + 134) == 1);
  if ( *(_BYTE *)(a1 + 132) )
  {
    if ( v12 )
      goto LABEL_60;
  }
  else if ( v12 )
  {
    if ( (*(_DWORD *)(v12 + 152) & 0x20) != 0 )
      CcBoostLowPriorityWorkerThread(v6, v12);
LABEL_60:
    v17 = *(_QWORD *)(a1 + 168);
    if ( ((*(_BYTE *)(v17 + 6) & 0x10) == 0 || (*(_BYTE *)(v17 + 4) & 0x20) == 0)
      && (*(_DWORD *)(v12 + 152) & 0x20000) == 0 )
    {
      goto LABEL_64;
    }
  }
  if ( !*(_BYTE *)(a1 + 132) )
    goto LABEL_68;
LABEL_64:
  if ( *(_BYTE *)(a1 + 134) || v12 && (*(_DWORD *)(v12 + 152) & 0x4000000) != 0 || *(_BYTE *)(a1 + 144) )
  {
LABEL_68:
    *(_BYTE *)(a1 + 135) = 1;
    if ( (xmmword_140FC6B50 & 0x20000) != 0 )
      CcPerfLogFlushSection(*(_QWORD *)(a1 + 176), v12, *(_QWORD *)(a1 + 96), v2, *(_DWORD *)(a1 + 56));
    if ( v12 )
      CcUnmapVacbArray(v12, *(__int64 **)(a1 + 96), v2, 0, 0, 0);
    v18 = MmFlushSection(v27, *(__int64 **)(a1 + 96), (unsigned int)v2, 0LL, v1, *(_DWORD *)(a1 + 56));
    if ( v18 >= 0 )
      goto LABEL_78;
    v19 = *v1;
    if ( *(_BYTE *)(a1 + 132) )
    {
      if ( v19 != -2147483626 )
      {
LABEL_78:
        if ( *v1 < 0 )
          *(_DWORD *)(a1 + 128) = *v1;
        goto LABEL_80;
      }
    }
    else if ( v19 )
    {
      goto LABEL_78;
    }
    *v1 = v18;
    goto LABEL_78;
  }
LABEL_80:
  if ( v12 && (*(_DWORD *)(v12 + 152) & 0x4000000) == 0 )
  {
    v20 = *(_QWORD **)(a1 + 96);
    if ( v20 )
      *(_QWORD *)(a1 + 32) = *v20;
    v21 = CcEnablePerVolumeLazyWriter;
    v22 = v7 + 1104;
    if ( !CcEnablePerVolumeLazyWriter )
      v22 = v6 + 1168;
    *(_QWORD *)(a1 + 184) = v22;
    v23 = v7 + 1172;
    if ( !v21 )
      v23 = v6 + 1292;
    *(_QWORD *)(a1 + 192) = v23;
    v24 = *(_BYTE *)(a1 + 132);
    if ( !v24 && !*(_BYTE *)(a1 + 134) && !*(_BYTE *)(a1 + 144) && !v20 && !(_DWORD)v2 && !*(_QWORD *)(a1 + 88) )
      *(_BYTE *)(a1 + 200) = 1;
    *(_DWORD *)(a1 + 48) = 1;
    if ( (_DWORD)v2 )
      *(_DWORD *)(a1 + 48) = v2;
    if ( v24 )
      *(_QWORD *)(a1 + 152) = MEMORY[0xFFFFF78000000320];
    if ( CcEnablePerVolumeLazyWriter
      && *(_BYTE *)(a1 + 132)
      && !*(_BYTE *)(a1 + 135)
      && (*(_DWORD *)(v12 + 152) & 0x40000200) == 0 )
    {
      *(LARGE_INTEGER *)(a1 + 232) = KeQueryPerformanceCounter(0LL);
    }
  }
  return 1;
}
