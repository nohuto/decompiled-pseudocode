/*
 * XREFs of PpmExecutePeriodicPerfCheck @ 0x1402ABD08
 * Callers:
 *     KiUpdateTime @ 0x1402AA2B0 (KiUpdateTime.c)
 *     PpmCheckTimerCallback @ 0x1405D42C0 (PpmCheckTimerCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 */

void __fastcall PpmExecutePeriodicPerfCheck(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  LARGE_INTEGER InterruptTimePrecise; // rdi
  char v7; // r14
  unsigned __int64 v8; // rdx
  signed __int64 QuadPart; // r8
  unsigned __int64 v10; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp+8h] BYREF

  v4 = PpmCheckLastEffectiveExecutionTime;
  if ( PpmCheckLastEffectiveExecutionTime )
  {
    if ( PpmCheckTimerImplementation )
    {
      v5 = (unsigned int)KeMinimumIncrement;
      if ( PpmCheckPeriod > (unsigned __int64)(unsigned int)KeMinimumIncrement )
        v5 = PpmCheckPeriod;
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    }
    else
    {
      v5 = (unsigned int)KeTimeIncrement;
      if ( PpmCheckPeriod > (unsigned __int64)(unsigned int)KeTimeIncrement )
        v5 = PpmCheckPeriod;
      InterruptTimePrecise.QuadPart = MEMORY[0xFFFFF78000000008];
    }
    if ( v5 + v4 <= InterruptTimePrecise.QuadPart )
    {
      v7 = KeDisableInterrupts(a1, a2, a3, a4);
      KxAcquireSpinLock(&PpmCheckExecutionLock);
      if ( PpmCheckLastActualExecutionTime + (v5 >> 1) <= InterruptTimePrecise.QuadPart )
      {
        LODWORD(v8) = 0;
        QuadPart = InterruptTimePrecise.QuadPart;
        if ( v4 != 1 )
        {
          if ( !PpmCheckTimerImplementation && v4 + v5 + KeMaximumIncrement > InterruptTimePrecise.QuadPart )
            QuadPart = v5 + v4;
          v10 = QuadPart - v5 - v4;
          if ( PpmCheckTimerImplementation )
          {
            if ( PpmCheckLastActualExecutionTime + v5 < InterruptTimePrecise.QuadPart && v10 >= v5 )
            {
              if ( v10 >= 0x989680 )
                v10 = 10000000LL;
              v8 = v10 / v5;
            }
          }
          else if ( v5 + PpmCheckLastActualExecutionTime + KeMaximumIncrement < InterruptTimePrecise.QuadPart
                 && v10 >= v5 )
          {
            LODWORD(v8) = 64;
            if ( (unsigned int)((QuadPart - v5 - v4) / v5) < 0x40 )
              LODWORD(v8) = (QuadPart - v5 - v4) / v5;
          }
        }
        if ( v4 == _InterlockedCompareExchange64(&PpmCheckLastEffectiveExecutionTime, QuadPart, v4) )
        {
          PpmCheckLastActualExecutionTime = InterruptTimePrecise.QuadPart;
          KeInsertQueueDpc(&PpmCheckStartDpc, (PVOID)(unsigned int)v8, 0LL);
        }
      }
      KxReleaseSpinLock((volatile signed __int64 *)&PpmCheckExecutionLock);
      if ( v7 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v13 = *SchedulerAssist;
          do
          {
            v14 = v13;
            v13 = _InterlockedCompareExchange(SchedulerAssist, v13 & 0xFFDFFFFF, v13);
          }
          while ( v14 != v13 );
          if ( (v13 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        _enable();
      }
    }
  }
}
