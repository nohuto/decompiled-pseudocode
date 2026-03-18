/*
 * XREFs of PpmExecutePeriodicPerfCheck @ 0x140274878
 * Callers:
 *     KiUpdateTime @ 0x140272C80 (KiUpdateTime.c)
 *     PpmCheckTimerCallback @ 0x1405D2340 (PpmCheckTimerCallback.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 */

void __fastcall PpmExecutePeriodicPerfCheck(__int64 a1, __int64 a2, __int64 a3)
{
  signed __int64 v3; // rsi
  unsigned __int64 v4; // rbx
  unsigned __int64 InterruptTimePrecise; // rdi
  char v6; // r14
  unsigned __int64 v7; // rdx
  signed __int64 v8; // r8
  unsigned __int64 v9; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  char v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = PpmCheckLastEffectiveExecutionTime;
  if ( PpmCheckLastEffectiveExecutionTime )
  {
    if ( PpmCheckTimerImplementation )
    {
      v4 = (unsigned int)KeMinimumIncrement;
      if ( PpmCheckPeriod > (unsigned __int64)(unsigned int)KeMinimumIncrement )
        v4 = PpmCheckPeriod;
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&v14);
    }
    else
    {
      v4 = (unsigned int)KeTimeIncrement;
      if ( PpmCheckPeriod > (unsigned __int64)(unsigned int)KeTimeIncrement )
        v4 = PpmCheckPeriod;
      InterruptTimePrecise = MEMORY[0xFFFFF78000000008];
    }
    if ( v4 + v3 <= InterruptTimePrecise )
    {
      v6 = KeDisableInterrupts(a1, a2, a3);
      KxAcquireSpinLock(&PpmCheckExecutionLock);
      if ( PpmCheckLastActualExecutionTime + (v4 >> 1) <= InterruptTimePrecise )
      {
        LODWORD(v7) = 0;
        v8 = InterruptTimePrecise;
        if ( v3 != 1 )
        {
          if ( !PpmCheckTimerImplementation && v3 + v4 + (unsigned int)KeMaximumIncrement > InterruptTimePrecise )
            v8 = v4 + v3;
          v9 = v8 - v4 - v3;
          if ( PpmCheckTimerImplementation )
          {
            if ( PpmCheckLastActualExecutionTime + v4 < InterruptTimePrecise && v9 >= v4 )
            {
              if ( v9 >= 0x989680 )
                v9 = 10000000LL;
              v7 = v9 / v4;
            }
          }
          else if ( v4 + PpmCheckLastActualExecutionTime + (unsigned int)KeMaximumIncrement < InterruptTimePrecise
                 && v9 >= v4 )
          {
            LODWORD(v7) = 64;
            if ( (unsigned int)((v8 - v4 - v3) / v4) < 0x40 )
              LODWORD(v7) = (v8 - v4 - v3) / v4;
          }
        }
        if ( v3 == _InterlockedCompareExchange64(&PpmCheckLastEffectiveExecutionTime, v8, v3) )
        {
          PpmCheckLastActualExecutionTime = InterruptTimePrecise;
          KeInsertQueueDpc(&PpmCheckStartDpc, (PVOID)(unsigned int)v7, 0LL);
        }
      }
      KxReleaseSpinLock(&PpmCheckExecutionLock);
      if ( v6 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v12 = *SchedulerAssist;
          do
          {
            v13 = v12;
            v12 = _InterlockedCompareExchange(SchedulerAssist, v12 & 0xFFDFFFFF, v12);
          }
          while ( v13 != v12 );
          if ( (v12 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        _enable();
      }
    }
  }
}
