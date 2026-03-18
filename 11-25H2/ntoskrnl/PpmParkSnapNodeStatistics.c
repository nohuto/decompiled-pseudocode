/*
 * XREFs of PpmParkSnapNodeStatistics @ 0x140348F24
 * Callers:
 *     PpmCheckSnapAllUtility @ 0x140409950 (PpmCheckSnapAllUtility.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     PpmIdleSnapConcurrency @ 0x140349840 (PpmIdleSnapConcurrency.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 */

void PpmParkSnapNodeStatistics()
{
  unsigned __int16 i; // di
  __int64 v1; // rbx
  __int64 v2; // rsi
  LARGE_INTEGER PerformanceCounter; // rbp
  bool v4; // r14
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  void *v7; // rcx
  size_t v8; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  unsigned __int8 j; // si

  for ( i = 0; i < (unsigned int)PpmParkNumNodes; ++i )
  {
    v1 = PpmParkNodes + 208LL * i;
    if ( *(_BYTE *)(v1 + 10) )
    {
      v2 = *(_QWORD *)(v1 + 48);
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v4 = KeDisableInterrupts();
      KxAcquireSpinLock((PKSPIN_LOCK)v2);
      v5 = *(_QWORD *)(v2 + 16);
      if ( PerformanceCounter.QuadPart > v5 )
      {
        v6 = *(unsigned int *)(v2 + 12);
        *(LARGE_INTEGER *)(v2 + 16) = PerformanceCounter;
        *(_QWORD *)(v2 + 24) += PerformanceCounter.QuadPart - v5;
        *(_QWORD *)(v2 + 8 * v6 + 328) += PerformanceCounter.QuadPart - v5;
      }
      v7 = *(void **)(v1 + 56);
      v8 = 8LL * *(unsigned int *)(v1 + 104);
      *(_QWORD *)(v1 + 80) = *(_QWORD *)(v2 + 24);
      memmove(v7, (const void *)(v2 + 328), v8);
      KxReleaseSpinLock(v2);
      if ( v4 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v11 = *SchedulerAssist;
          do
          {
            v12 = v11;
            v11 = _InterlockedCompareExchange(SchedulerAssist, v11 & 0xFFDFFFFF, v11);
          }
          while ( v12 != v11 );
          if ( (v11 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        _enable();
      }
      if ( *(_BYTE *)(v1 + 121) )
      {
        for ( j = 0; j < *(_BYTE *)(v1 + 11); ++j )
          PpmIdleSnapConcurrency(*(PKSPIN_LOCK *)(*(_QWORD *)(v1 + 200) + 104LL * j + 32));
      }
    }
  }
}
