/*
 * XREFs of KiCalibrateTimeAdjustment @ 0x140B6BCD0
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlWriteAcquireTickLock @ 0x1402ABFD4 (RtlWriteAcquireTickLock.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     RtlWriteReleaseTickLock @ 0x14044A520 (RtlWriteReleaseTickLock.c)
 *     KeRemoveQueueDpc @ 0x14045A7A0 (KeRemoveQueueDpc.c)
 *     KiUpdateSystemTime @ 0x1404A2140 (KiUpdateSystemTime.c)
 *     KeRebaselineInterruptTime @ 0x1404D229C (KeRebaselineInterruptTime.c)
 *     KiPollFreezeExecution @ 0x1404F7EC0 (KiPollFreezeExecution.c)
 *     HalCalibratePerformanceCounter @ 0x140537C80 (HalCalibratePerformanceCounter.c)
 *     KiRebaselineProcessorStartCycles @ 0x1405AE00C (KiRebaselineProcessorStartCycles.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

ULONG_PTR __fastcall KiCalibrateTimeAdjustment(ULONG_PTR Argument)
{
  struct _KPRCB *CurrentPrcb; // r14
  int v3; // eax
  __int64 v4; // r12
  bool v5; // r15
  __int64 v6; // rax
  ULONG_PTR result; // rax
  __int64 v8; // rbx
  struct _KPRCB *v9; // rcx
  _DWORD *SchedulerAssist; // r8
  int v11; // ett
  __int64 v12; // rbx
  bool v13; // al
  __int64 v14; // rdi
  unsigned __int64 v15; // rbx
  LARGE_INTEGER v16; // r9
  unsigned __int64 v17; // kr00_8
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // [rsp+30h] [rbp-40h]
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-38h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp-30h] BYREF
  __int64 v24; // [rsp+48h] [rbp-28h]
  _QWORD v25[2]; // [rsp+50h] [rbp-20h] BYREF

  PerformanceCounter.QuadPart = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v3 = *(_DWORD *)(Argument + 4);
  v4 = MmWriteableSharedUserData;
  PerformanceFrequency.QuadPart = 0LL;
  if ( CurrentPrcb->Number == v3 )
  {
    v13 = KeDisableInterrupts();
    v14 = *(_QWORD *)(Argument + 8);
    v5 = v13;
    v24 = v14;
    v15 = v14 + MEMORY[0xFFFFF78000000008];
    v16 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( *(_BYTE *)Argument )
    {
      LODWORD(v21) = (PerformanceFrequency.QuadPart * __PAIR64__(HIDWORD(v24), v14)) >> 32;
      HIDWORD(v21) = PerformanceFrequency.HighPart * HIDWORD(v24)
                   + (((unsigned int)v14 * (unsigned __int64)(unsigned int)PerformanceFrequency.HighPart
                     + (((unsigned int)v14 * (unsigned __int64)PerformanceFrequency.LowPart) >> 32)
                     + PerformanceFrequency.LowPart * (unsigned __int64)HIDWORD(v24)) >> 32);
      v17 = v21;
      LODWORD(v21) = v14 * PerformanceFrequency.LowPart;
      *(_DWORD *)(Argument + 20) = v17 / 0x989680;
      HIDWORD(v21) = v17 % 0x989680;
      *(_DWORD *)(Argument + 16) = v21 / 0x989680;
      *(_QWORD *)(Argument + 16) += v16.QuadPart;
    }
    v18 = *(_QWORD *)(Argument + 8);
    KiTickOffset = KeMaximumIncrement - v15 % KeMaximumIncrement;
    *(_QWORD *)(MmWriteableSharedUserData + 944) += v18;
    if ( MEMORY[0xFFFFF780000003B0] < 0 )
      __fastfail(5u);
    RtlWriteAcquireTickLock((signed __int64 *)(v4 + 832));
    *(_DWORD *)(MmWriteableSharedUserData + 16) = HIDWORD(v15);
    *(_QWORD *)(MmWriteableSharedUserData + 8) = v15;
    *(_DWORD *)(MmWriteableSharedUserData + 808) = HIDWORD(v19);
    *(_QWORD *)(MmWriteableSharedUserData + 800) = v19;
    *(_QWORD *)(MmWriteableSharedUserData + 848) = v20;
    KiInterruptTimeErrorAccumulator = 0LL;
    RtlWriteReleaseTickLock((__int64 *)(v4 + 832));
    *(_DWORD *)(Argument + 28) = 0;
  }
  else
  {
    v5 = KeDisableInterrupts();
    do
      KiPollFreezeExecution();
    while ( *(_DWORD *)(Argument + 28) );
  }
  if ( KiSerializeTimerExpiration )
  {
    if ( !CurrentPrcb->ClockOwner )
      goto LABEL_9;
    v6 = KiProcessorBlock[0];
  }
  else
  {
    v6 = (__int64)CurrentPrcb;
  }
  if ( v6 != -16640 )
  {
    v12 = MEMORY[0xFFFFF78000000008] >> 18;
    KeRemoveQueueDpc(&CurrentPrcb->TimerExpirationDpc);
    KeInsertQueueDpc(&CurrentPrcb->TimerExpirationDpc, (PVOID)(unsigned int)(v12 - 256), 0LL);
  }
LABEL_9:
  result = MEMORY[0xFFFFF78000000320];
  CurrentPrcb->LastTick = MEMORY[0xFFFFF78000000320];
  v8 = *(_QWORD *)(Argument + 8);
  if ( *(_BYTE *)Argument )
  {
    HalCalibratePerformanceCounter((volatile signed __int32 *)(Argument + 24), *(_QWORD *)(Argument + 16));
    result = KeRebaselineInterruptTime().QuadPart;
    if ( CurrentPrcb->CycleAccumulationInitialized )
      result = KiRebaselineProcessorStartCycles((__int64)CurrentPrcb);
    if ( (xmmword_140FC6B50 & 0x8000) != 0 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v25[1] = 8LL;
      v25[0] = &PerformanceCounter;
      result = EtwTraceKernelEvent((int)v25, 1, 0x80008000, 4658, 5249026);
    }
  }
  if ( CurrentPrcb->ClockOwner )
    result = KiUpdateSystemTime(v8, 0LL, 3);
  if ( v5 )
  {
    v9 = KeGetCurrentPrcb();
    SchedulerAssist = v9->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      LODWORD(result) = *SchedulerAssist;
      do
      {
        v11 = result;
        result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
      }
      while ( v11 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick((__int64)v9);
    }
    _enable();
  }
  return result;
}
