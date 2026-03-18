/*
 * XREFs of PspThreadDelete @ 0x140AC7750
 * Callers:
 *     <none>
 * Callees:
 *     KeCleanupThreadState @ 0x140204878 (KeCleanupThreadState.c)
 *     KeEnumerateKernelStackSegments @ 0x140228B88 (KeEnumerateKernelStackSegments.c)
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     PspUnlockProcessExclusive @ 0x1403D76DC (PspUnlockProcessExclusive.c)
 *     KeFoldProcessStatisticsThread @ 0x140410F44 (KeFoldProcessStatisticsThread.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14042F3F0 (KiQueryUnbiasedInterruptTime.c)
 *     ObFastReplaceObject @ 0x14044FAEC (ObFastReplaceObject.c)
 *     KeInitializeDpc @ 0x140454E30 (KeInitializeDpc.c)
 *     PspLockProcessExclusive @ 0x14045AFE0 (PspLockProcessExclusive.c)
 *     KeBugCheck @ 0x1404F9260 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     Feature_IoMgr_FileObject_Process_FastRef__private_IsEnabledDeviceUsageNoInline @ 0x14059238C (Feature_IoMgr_FileObject_Process_FastRef__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExMapHandleToPointer @ 0x14084EF40 (ExMapHandleToPointer.c)
 *     ExDestroyHandle @ 0x1408B4AF0 (ExDestroyHandle.c)
 *     PspDeleteThreadSecurity @ 0x140A1FD08 (PspDeleteThreadSecurity.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

LONG_PTR __fastcall PspThreadDelete(ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v2; // r9
  struct _KTHREAD *CurrentThread; // r12
  signed __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  void *v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // r8
  __int64 *v11; // rdx
  __int64 v12; // r9
  __int64 v13; // r10
  int v14; // r9d
  _QWORD *v15; // r8
  const char *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  LONG_PTR result; // rax
  unsigned __int64 *v20; // rsi
  __int64 *v21; // r14
  __int64 *v22; // rax
  __int64 *v23; // r15
  __int64 *v24; // rcx
  __int64 **v25; // rax

  KeCleanupThreadState(BugCheckParameter1);
  if ( *(_DWORD *)(BugCheckParameter1 + 1516) )
    KeBugCheckEx(0x94u, 1uLL, BugCheckParameter1, *(unsigned int *)(BugCheckParameter1 + 1516), 0LL);
  if ( *(_DWORD *)(BugCheckParameter1 + 1504) )
    KeBugCheckEx(0x13Cu, BugCheckParameter1, *(unsigned int *)(BugCheckParameter1 + 1504), 0LL, 0LL);
  if ( *(_DWORD *)(BugCheckParameter1 + 1508) )
    KeBugCheckEx(0x13Cu, BugCheckParameter1, *(unsigned int *)(BugCheckParameter1 + 1508), 1uLL, 0LL);
  if ( *(_DWORD *)(BugCheckParameter1 + 1512) )
    KeBugCheckEx(0x13Cu, BugCheckParameter1, *(unsigned int *)(BugCheckParameter1 + 1512), 2uLL, 0LL);
  v2 = *(_QWORD *)(BugCheckParameter1 + 1744);
  if ( v2 != BugCheckParameter1 + 1744 )
    KeBugCheckEx(0x1C6u, 0x15uLL, BugCheckParameter1, v2, 0LL);
  if ( *(_QWORD *)(BugCheckParameter1 + 40) )
    KeEnumerateKernelStackSegments(
      BugCheckParameter1,
      (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))PspDeleteKernelStack,
      0LL);
  CurrentThread = KeGetCurrentThread();
  if ( *(_QWORD *)(BugCheckParameter1 + 1296) )
  {
    --CurrentThread->KernelApcDisable;
    v4 = ExMapHandleToPointer(PspCidTable, *(_QWORD *)(BugCheckParameter1 + 1296));
    if ( !v4 )
      KeBugCheck(0x17u);
    ExDestroyHandle(PspCidTable, *(_QWORD *)(BugCheckParameter1 + 1296), v4);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v5, v6, v7);
  }
  PspDeleteThreadSecurity(BugCheckParameter1);
  v8 = *(void **)(BugCheckParameter1 + 1696);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x6D4E6854u);
  if ( KiQueryUnbiasedInterruptTime() >= (unsigned __int64)qword_140E62200 )
  {
    v9 = qword_140E621F0;
    if ( qword_140E621F0 )
    {
      if ( (_DWORD)qword_140E62208 )
      {
        v10 = 0LL;
        v11 = ObpObjectTypes;
        v12 = (unsigned int)qword_140E62208;
        do
        {
          v13 = *v11;
          if ( ((*(unsigned __int8 *)(*v11 + 66) >> 6) & 1) != _bittest64(qword_140E62210, v10) && !qword_140E621C0 )
          {
            qword_140E621C0 = (unsigned int)__ROR4__(8480, 101);
            xmmword_140E621C8 = 0LL;
            qword_140E621D8 = 268LL;
            qword_140E621E0 = v13;
          }
          ++v10;
          ++v11;
          --v12;
        }
        while ( v12 );
        v9 = qword_140E621F0;
      }
      v14 = 64;
      v15 = (_QWORD *)(qword_140E62230 + 112);
      v16 = (const char *)(qword_140E62230 + 112);
      if ( qword_140E62230 + 112 < (unsigned __int64)(qword_140E62230 + 176) )
      {
        do
        {
          _mm_prefetch(v16, 0);
          v16 += 64;
        }
        while ( (unsigned __int64)v16 < qword_140E62230 + 176 );
      }
      v17 = 8LL;
      do
      {
        v9 = __ROR8__(v9 - *v15++, qword_140E621F8);
        v14 -= 8;
        --v17;
      }
      while ( v17 );
      for ( ; v14; --v14 )
      {
        v18 = *(unsigned __int8 *)v15;
        v15 = (_QWORD *)((char *)v15 + 1);
        v9 = __ROR8__(v9 - v18, qword_140E621F8);
      }
      if ( qword_140E62238 != v9 )
      {
        if ( qword_140E621C0 )
          goto LABEL_32;
        qword_140E621D8 = 268LL;
        qword_140E621C0 = (unsigned int)__ROR4__(4341760, 110);
        xmmword_140E621C8 = 0LL;
        qword_140E621E0 = qword_140E62230;
      }
    }
    if ( !qword_140E621C0 )
    {
LABEL_35:
      qword_140E62200 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
      goto LABEL_36;
    }
LABEL_32:
    if ( (void (__fastcall __noreturn *)(struct _KDPC *, _QWORD *, PVOID, PVOID))stru_140E62180.DeferredRoutine != KiScanQueues )
      KeInitializeDpc(&stru_140E62180, (PKDEFERRED_ROUTINE)KiScanQueues, &stru_140E62180);
    qword_140E621E8 = 1845888LL;
    KeInsertQueueDpc(&stru_140E62180, 0LL, 0LL);
    goto LABEL_35;
  }
LABEL_36:
  result = Feature_IoMgr_FileObject_Process_FastRef__private_IsEnabledDeviceUsageNoInline();
  if ( (_DWORD)result && *(_QWORD *)(BugCheckParameter1 + 1936) )
    result = ObFastReplaceObject((volatile __int64 *)(BugCheckParameter1 + 1936), 0LL);
  v20 = *(unsigned __int64 **)(BugCheckParameter1 + 544);
  if ( v20 )
  {
    v21 = (__int64 *)(BugCheckParameter1 + 1400);
    if ( *(_QWORD *)(BugCheckParameter1 + 1400) )
    {
      PspLockProcessExclusive(*(_QWORD *)(BugCheckParameter1 + 544), (__int64)CurrentThread);
      v22 = KeAbPreAcquire((__int64)(v20 + 188), 0LL);
      v23 = v22;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v20 + 376, 0LL) )
        ExfAcquirePushLockExclusiveEx(v20 + 188, v22, (__int64)(v20 + 188));
      if ( v23 )
        *((_BYTE *)v23 + 10) = 1;
      KeFoldProcessStatisticsThread(BugCheckParameter1);
      v24 = (__int64 *)*v21;
      if ( *(__int64 **)(*v21 + 8) != v21 || (v25 = *(__int64 ***)(BugCheckParameter1 + 1408), *v25 != v21) )
        __fastfail(3u);
      *v25 = v24;
      v24[1] = (__int64)v25;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v20 + 188, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v20 + 188);
      KeAbPostRelease((ULONG_PTR)(v20 + 188));
      result = PspUnlockProcessExclusive((__int64)v20, (__int64)CurrentThread);
    }
    if ( (*(_DWORD *)(BugCheckParameter1 + 1440) & 0x100000) != 0 )
      result = guard_dispatch_icall_no_overrides(BugCheckParameter1);
    if ( v20 != PsIdleProcess )
      return ObfDereferenceObjectWithTag(v20, 0x72437350u);
  }
  return result;
}
