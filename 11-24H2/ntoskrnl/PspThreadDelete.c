/*
 * XREFs of PspThreadDelete @ 0x140AD1250
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeEnumerateKernelStackSegments @ 0x140269F48 (KeEnumerateKernelStackSegments.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KeFoldProcessStatisticsThread @ 0x14040E8BC (KeFoldProcessStatisticsThread.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1404251D0 (KiQueryUnbiasedInterruptTime.c)
 *     KeCleanupThreadState @ 0x140444DEC (KeCleanupThreadState.c)
 *     ObFastReplaceObject @ 0x1404512EC (ObFastReplaceObject.c)
 *     KeInitializeDpc @ 0x140455470 (KeInitializeDpc.c)
 *     PspLockProcessExclusive @ 0x14045AB10 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x140462E74 (PspUnlockProcessExclusive.c)
 *     KeBugCheck @ 0x1404FB970 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExMapHandleToPointer @ 0x14084ACF0 (ExMapHandleToPointer.c)
 *     ExDestroyHandle @ 0x14098A050 (ExDestroyHandle.c)
 *     PspDeleteThreadSecurity @ 0x140A29848 (PspDeleteThreadSecurity.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall PspThreadDelete(ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v2; // r9
  struct _KTHREAD *CurrentThread; // r12
  signed __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  void *v8; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  unsigned __int64 v14; // r8
  __int64 *v15; // rdx
  __int64 v16; // r9
  __int64 v17; // r10
  int v18; // r9d
  _QWORD *v19; // r8
  const char *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 UnbiasedInterruptTime; // r11
  unsigned __int64 *v24; // rsi
  __int64 *v25; // r14
  _QWORD *v26; // rax
  _QWORD *v27; // r15
  __int64 *v28; // rcx
  __int64 **v29; // rax

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
      0LL,
      v2);
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
  result = KiQueryUnbiasedInterruptTime();
  if ( result >= qword_140E62440 )
  {
    v13 = qword_140E62430;
    if ( qword_140E62430 )
    {
      if ( (_DWORD)qword_140E62448 )
      {
        v14 = 0LL;
        v15 = ObpObjectTypes;
        v16 = (unsigned int)qword_140E62448;
        do
        {
          v17 = *v15;
          if ( ((*(unsigned __int8 *)(*v15 + 66) >> 6) & 1) != _bittest64(qword_140E62450, v14) && !qword_140E62400 )
          {
            qword_140E62400 = (unsigned int)__ROR4__(8480, 101);
            xmmword_140E62408 = 0LL;
            qword_140E62418 = 268LL;
            qword_140E62420 = v17;
          }
          ++v14;
          ++v15;
          --v16;
        }
        while ( v16 );
        v13 = qword_140E62430;
      }
      v18 = 64;
      v19 = (_QWORD *)(qword_140E62470 + 112);
      v20 = (const char *)(qword_140E62470 + 112);
      if ( qword_140E62470 + 112 < (unsigned __int64)(qword_140E62470 + 176) )
      {
        do
        {
          _mm_prefetch(v20, 0);
          v20 += 64;
        }
        while ( (unsigned __int64)v20 < qword_140E62470 + 176 );
      }
      v21 = 8LL;
      do
      {
        v13 = __ROR8__(v13 - *v19++, qword_140E62438);
        v18 -= 8;
        --v21;
      }
      while ( v21 );
      for ( ; v18; --v18 )
      {
        v22 = *(unsigned __int8 *)v19;
        v19 = (_QWORD *)((char *)v19 + 1);
        v13 = __ROR8__(v13 - v22, qword_140E62438);
      }
      if ( qword_140E62478 != v13 )
      {
        if ( qword_140E62400 )
          goto LABEL_32;
        qword_140E62418 = 268LL;
        qword_140E62400 = (unsigned int)__ROR4__(4341760, 110);
        xmmword_140E62408 = 0LL;
        qword_140E62420 = qword_140E62470;
      }
    }
    if ( !qword_140E62400 )
    {
LABEL_35:
      UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
      v10 = 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL;
      result = UnbiasedInterruptTime + v10 + 288000000000LL;
      qword_140E62440 = result;
      goto LABEL_36;
    }
LABEL_32:
    if ( (void (__fastcall __noreturn *)(struct _KDPC *, _QWORD *, PVOID, PVOID))stru_140E623C0.DeferredRoutine != KiScanQueues )
      KeInitializeDpc(&stru_140E623C0, (PKDEFERRED_ROUTINE)KiScanQueues, &stru_140E623C0);
    qword_140E62428 = 1845888LL;
    KeInsertQueueDpc(&stru_140E623C0, 0LL, 0LL);
    goto LABEL_35;
  }
LABEL_36:
  if ( *(_QWORD *)(BugCheckParameter1 + 1936) )
    result = ObFastReplaceObject((volatile __int64 *)(BugCheckParameter1 + 1936), 0LL);
  v24 = *(unsigned __int64 **)(BugCheckParameter1 + 544);
  if ( v24 )
  {
    v25 = (__int64 *)(BugCheckParameter1 + 1400);
    if ( *(_QWORD *)(BugCheckParameter1 + 1400) )
    {
      PspLockProcessExclusive(*(_QWORD *)(BugCheckParameter1 + 544), (__int64)CurrentThread);
      v26 = KeAbPreAcquire((__int64)(v24 + 188), 0LL);
      v27 = v26;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v24 + 376, 0LL) )
        ExfAcquirePushLockExclusiveEx(v24 + 188, (__int64)v26, (__int64)(v24 + 188));
      if ( v27 )
        *((_BYTE *)v27 + 10) = 1;
      KeFoldProcessStatisticsThread(BugCheckParameter1);
      v28 = (__int64 *)*v25;
      if ( *(__int64 **)(*v25 + 8) != v25 || (v29 = *(__int64 ***)(BugCheckParameter1 + 1408), *v29 != v25) )
        __fastfail(3u);
      *v29 = v28;
      v28[1] = (__int64)v29;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v24 + 188, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v24 + 188);
      KeAbPostRelease((ULONG_PTR)(v24 + 188));
      result = PspUnlockProcessExclusive((__int64)v24);
    }
    if ( (*(_DWORD *)(BugCheckParameter1 + 1440) & 0x100000) != 0 )
      result = guard_dispatch_icall_no_overrides(BugCheckParameter1, v10, v11, v12);
    if ( v24 != PsIdleProcess )
      return ObfDereferenceObjectWithTag(v24, 0x72437350u);
  }
  return result;
}
