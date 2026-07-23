/*
 * XREFs of FsRtlpPostStackOverflow @ 0x14057F52C
 * Callers:
 *     FsRtlPostPagingFileStackOverflow @ 0x14057F3D0 (FsRtlPostPagingFileStackOverflow.c)
 *     FsRtlPostStackOverflow @ 0x14057F3F0 (FsRtlPostStackOverflow.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiWakeQueueWaiter @ 0x1402CD6B0 (KiWakeQueueWaiter.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KiWakeOtherQueueWaiters @ 0x1403ACF00 (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x1403AD158 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1403AD184 (EtwTraceEnqueueWork.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

void __fastcall FsRtlpPostStackOverflow(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v5; // rbx
  char *Pool2; // rdi
  char *v9; // rbx
  _QWORD *v10; // r14
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 CurrentThread; // rbp
  char IsThreadRunning; // al
  int v15; // edx
  char **v16; // rcx

  v5 = a4;
  Pool2 = (char *)ExAllocatePool2(0x42uLL, 0x38uLL, 0x73725346u);
  if ( !Pool2 )
  {
    if ( !(_BYTE)v5 )
      RtlRaiseStatus(-1073741670);
    KeWaitForSingleObject(&StackOverflowFallbackSerialEvent, Executive, 0, 0, 0LL);
    Pool2 = (char *)&StackOverflowFallback;
  }
  *((_QWORD *)Pool2 + 5) = a1;
  *((_QWORD *)Pool2 + 6) = a2;
  *((_QWORD *)Pool2 + 4) = a3;
  *(_QWORD *)Pool2 = 0LL;
  *((_QWORD *)Pool2 + 2) = FsRtlStackOverflowRead;
  v9 = (char *)&FsRtlWorkerQueues + 64 * v5;
  *((_QWORD *)Pool2 + 3) = Pool2;
  v10 = v9 + 8;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = (__int64)CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    IsThreadRunning = KeIsThreadRunning((__int64)CurrentPrcb->CurrentThread);
    EtwTraceEnqueueWork(CurrentThread, (__int64)Pool2, IsThreadRunning);
  }
  KiAcquireKobjectLockSafe((volatile signed __int32 *)v9);
  if ( (_QWORD *)*v10 == v10
    || *((_DWORD *)v9 + 10) >= *((_DWORD *)v9 + 11)
    || *(char **)(CurrentThread + 232) == v9 && *(_BYTE *)(CurrentThread + 643) == 15
    || !KiWakeQueueWaiter((__int64)CurrentPrcb, (__int64)v9, (__int64)Pool2) )
  {
    v15 = *((_DWORD *)v9 + 1);
    *((_DWORD *)v9 + 1) = v15 + 1;
    v16 = (char **)*((_QWORD *)v9 + 4);
    if ( *v16 != v9 + 24 )
      __fastfail(3u);
    *(_QWORD *)Pool2 = v9 + 24;
    *((_QWORD *)Pool2 + 1) = v16;
    *v16 = Pool2;
    *((_QWORD *)v9 + 4) = Pool2;
    if ( !v15 && (_QWORD *)*v10 != v10 )
      KiWakeOtherQueueWaiters((__int64)CurrentPrcb, (__int64)v9);
  }
  else
  {
    *(_QWORD *)Pool2 = 0LL;
  }
  _InterlockedAnd((volatile signed __int32 *)v9, 0xFFFFFF7F);
  KiExitDispatcher((unsigned __int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
}
