/*
 * XREFs of PspThreadDelete @ 0x140ACF4E0
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateKernelStackSegments @ 0x14021F4D8 (KeEnumerateKernelStackSegments.c)
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeFoldProcessStatisticsThread @ 0x140406ABC (KeFoldProcessStatisticsThread.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140419080 (KiQueryUnbiasedInterruptTime.c)
 *     KeCleanupThreadState @ 0x14043CF94 (KeCleanupThreadState.c)
 *     ObFastReplaceObject @ 0x14044674C (ObFastReplaceObject.c)
 *     KeInitializeDpc @ 0x14044A220 (KeInitializeDpc.c)
 *     PspLockProcessExclusive @ 0x14044FF38 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x140458484 (PspUnlockProcessExclusive.c)
 *     KeBugCheck @ 0x1404F9230 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExMapHandleToPointer @ 0x140846FB0 (ExMapHandleToPointer.c)
 *     ExDestroyHandle @ 0x1408961C0 (ExDestroyHandle.c)
 *     PspDeleteThreadSecurity @ 0x140A1E208 (PspDeleteThreadSecurity.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall PspThreadDelete(ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v2; // r9
  struct _KTHREAD *CurrentThread; // r12
  signed __int64 *v4; // rax
  void *v5; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rdx
  unsigned __int64 v9; // r8
  __int64 *v10; // rdx
  __int64 v11; // r9
  __int64 v12; // r10
  int v13; // r9d
  _QWORD *v14; // r8
  const char *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 UnbiasedInterruptTime; // r11
  unsigned __int64 *v19; // rsi
  __int64 *v20; // r14
  char *v21; // rax
  char *v22; // r15
  __int64 *v23; // rcx
  __int64 **v24; // rax

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
      (void (__fastcall *)(__int64, _QWORD *, __int64))PspDeleteKernelStack,
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
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  }
  PspDeleteThreadSecurity(BugCheckParameter1);
  v5 = *(void **)(BugCheckParameter1 + 1696);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x6D4E6854u);
  result = KiQueryUnbiasedInterruptTime();
  if ( result >= qword_140E625D0 )
  {
    v8 = qword_140E625C0;
    if ( qword_140E625C0 )
    {
      if ( (_DWORD)qword_140E625D8 )
      {
        v9 = 0LL;
        v10 = ObpObjectTypes;
        v11 = (unsigned int)qword_140E625D8;
        do
        {
          v12 = *v10;
          if ( ((*(unsigned __int8 *)(*v10 + 66) >> 6) & 1) != _bittest64(&qword_140E625E0, v9) && !qword_140E62590 )
          {
            qword_140E62590 = (unsigned int)__ROR4__(8480, 101);
            xmmword_140E62598 = 0LL;
            qword_140E625A8 = 268LL;
            qword_140E625B0 = v12;
          }
          ++v9;
          ++v10;
          --v11;
        }
        while ( v11 );
        v8 = qword_140E625C0;
      }
      v13 = 64;
      v14 = (_QWORD *)(qword_140E62600 + 112);
      v15 = (const char *)(qword_140E62600 + 112);
      if ( qword_140E62600 + 112 < (unsigned __int64)(qword_140E62600 + 176) )
      {
        do
        {
          _mm_prefetch(v15, 0);
          v15 += 64;
        }
        while ( (unsigned __int64)v15 < qword_140E62600 + 176 );
      }
      v16 = 8LL;
      do
      {
        v8 = __ROR8__(v8 - *v14++, qword_140E625C8);
        v13 -= 8;
        --v16;
      }
      while ( v16 );
      for ( ; v13; --v13 )
      {
        v17 = *(unsigned __int8 *)v14;
        v14 = (_QWORD *)((char *)v14 + 1);
        v8 = __ROR8__(v8 - v17, qword_140E625C8);
      }
      if ( qword_140E62608 != v8 )
      {
        if ( qword_140E62590 )
          goto LABEL_32;
        qword_140E625A8 = 268LL;
        qword_140E62590 = (unsigned int)__ROR4__(4341760, 110);
        xmmword_140E62598 = 0LL;
        qword_140E625B0 = qword_140E62600;
      }
    }
    if ( !qword_140E62590 )
    {
LABEL_35:
      UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
      v7 = 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL;
      result = UnbiasedInterruptTime + v7 + 288000000000LL;
      qword_140E625D0 = result;
      goto LABEL_36;
    }
LABEL_32:
    if ( (void (__fastcall __noreturn *)(struct _KDPC *, _QWORD *, PVOID, PVOID))stru_140E62550.DeferredRoutine != KiScanQueues )
      KeInitializeDpc(&stru_140E62550, (PKDEFERRED_ROUTINE)KiScanQueues, &stru_140E62550);
    qword_140E625B8 = 1845888LL;
    KeInsertQueueDpc(&stru_140E62550, 0LL, 0LL);
    goto LABEL_35;
  }
LABEL_36:
  if ( *(_QWORD *)(BugCheckParameter1 + 1936) )
    result = ObFastReplaceObject((volatile __int64 *)(BugCheckParameter1 + 1936), 0LL);
  v19 = *(unsigned __int64 **)(BugCheckParameter1 + 544);
  if ( v19 )
  {
    v20 = (__int64 *)(BugCheckParameter1 + 1400);
    if ( *(_QWORD *)(BugCheckParameter1 + 1400) )
    {
      PspLockProcessExclusive(*(_QWORD *)(BugCheckParameter1 + 544), (__int64)CurrentThread);
      v21 = (char *)KeAbPreAcquire((__int64)(v19 + 188), 0LL);
      v22 = v21;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v19 + 376, 0LL) )
        ExfAcquirePushLockExclusiveEx(v19 + 188, v21, (__int64)(v19 + 188));
      if ( v22 )
        v22[10] = 1;
      KeFoldProcessStatisticsThread(BugCheckParameter1);
      v23 = (__int64 *)*v20;
      if ( *(__int64 **)(*v20 + 8) != v20 || (v24 = *(__int64 ***)(BugCheckParameter1 + 1408), *v24 != v20) )
        __fastfail(3u);
      *v24 = v23;
      v23[1] = (__int64)v24;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v19 + 188, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v19 + 188);
      KeAbPostRelease((ULONG_PTR)(v19 + 188));
      result = PspUnlockProcessExclusive((__int64)v19);
    }
    if ( (*(_DWORD *)(BugCheckParameter1 + 1440) & 0x100000) != 0 )
      result = guard_dispatch_icall_no_overrides(BugCheckParameter1, v7);
    if ( v19 != PsIdleProcess )
      return ObfDereferenceObjectWithTag(v19, 0x72437350u);
  }
  return result;
}
