/*
 * XREFs of KiUpdateSystemTime @ 0x1404A2140
 * Callers:
 *     KeSetTimeAdjustment @ 0x140317AD8 (KeSetTimeAdjustment.c)
 *     KiSetSystemTimeDpc @ 0x140477490 (KiSetSystemTimeDpc.c)
 *     KiCalibrateTimeAdjustment @ 0x140B6BCD0 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KiComputeNewSystemTime @ 0x1402ABEDC (KiComputeNewSystemTime.c)
 *     RtlWriteAcquireTickLock @ 0x1402ABFD4 (RtlWriteAcquireTickLock.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 */

__int64 __fastcall KiUpdateSystemTime(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rsi
  bool v7; // r14
  LARGE_INTEGER PerformanceCounter; // r15
  __int64 v9; // r11
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  int v13; // ett

  v3 = MmWriteableSharedUserData;
  v7 = KeDisableInterrupts();
  RtlWriteAcquireTickLock((signed __int64 *)(v3 + 832));
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v9 = KiComputeNewSystemTime(PerformanceCounter.QuadPart);
  if ( a1 )
  {
    KiSystemTimeErrorAccumulator = 0LL;
    v9 = a1 + MEMORY[0xFFFFF78000000014];
  }
  *(LARGE_INTEGER *)(MmWriteableSharedUserData + 840) = PerformanceCounter;
  *(_DWORD *)(MmWriteableSharedUserData + 28) = HIDWORD(v9);
  *(_QWORD *)(MmWriteableSharedUserData + 20) = v9;
  if ( a2 )
  {
    *(_QWORD *)(MmWriteableSharedUserData + 856) = *(_QWORD *)a2;
    *(_BYTE *)(MmWriteableSharedUserData + 872) = *(_BYTE *)(a2 + 8);
  }
  result = *(_QWORD *)(v3 + 832) + 1LL;
  *(_QWORD *)(v3 + 832) = result;
  if ( (a3 & 1) == 0 )
  {
    if ( (a3 & 4) != 0 )
    {
      KeBootTimeBias = 0LL;
      KeBootTime.QuadPart = v9;
    }
    else
    {
      KeBootTime.QuadPart += a1;
      KeBootTimeBias += a1;
    }
  }
  if ( v7 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      LODWORD(result) = *SchedulerAssist;
      do
      {
        v13 = result;
        result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
      }
      while ( v13 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  return result;
}
