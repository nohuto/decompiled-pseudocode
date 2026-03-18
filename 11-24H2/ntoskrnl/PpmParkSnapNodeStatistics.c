/*
 * XREFs of PpmParkSnapNodeStatistics @ 0x14027B69C
 * Callers:
 *     PpmCheckSnapAllUtility @ 0x140417640 (PpmCheckSnapAllUtility.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     PpmIdleSnapConcurrency @ 0x14027B2A8 (PpmIdleSnapConcurrency.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 */

void PpmParkSnapNodeStatistics()
{
  unsigned __int16 i; // di
  __int64 v1; // rbx
  __int64 v2; // rsi
  LARGE_INTEGER PerformanceCounter; // rbp
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  char v7; // r14
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  void *v10; // rcx
  size_t v11; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  unsigned __int8 j; // si
  __int64 v17; // rcx

  for ( i = 0; i < (unsigned int)PpmParkNumNodes; ++i )
  {
    v1 = PpmParkNodes + 1288LL * i;
    if ( *(_WORD *)(v1 + 10) )
    {
      v2 = *(_QWORD *)(v1 + 1104);
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v7 = KeDisableInterrupts(v5, v4, v6);
      KxAcquireSpinLock((PKSPIN_LOCK)v2);
      v8 = *(_QWORD *)(v2 + 16);
      if ( PerformanceCounter.QuadPart > v8 )
      {
        v9 = *(unsigned int *)(v2 + 12);
        *(LARGE_INTEGER *)(v2 + 16) = PerformanceCounter;
        *(_QWORD *)(v2 + 24) += PerformanceCounter.QuadPart - v8;
        *(_QWORD *)(v2 + 8 * v9 + 328) += PerformanceCounter.QuadPart - v8;
      }
      v10 = *(void **)(v1 + 1112);
      v11 = 8LL * *(unsigned int *)(v1 + 1160);
      *(_QWORD *)(v1 + 1136) = *(_QWORD *)(v2 + 24);
      memmove(v10, (const void *)(v2 + 328), v11);
      KxReleaseSpinLock((volatile signed __int64 *)v2);
      if ( v7 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v14 = *SchedulerAssist;
          do
          {
            v15 = v14;
            v14 = _InterlockedCompareExchange(SchedulerAssist, v14 & 0xFFDFFFFF, v14);
          }
          while ( v15 != v14 );
          if ( (v14 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        _enable();
      }
      if ( *(_BYTE *)(v1 + 1185) )
      {
        for ( j = 0; j < *(_BYTE *)(v1 + 12); ++j )
        {
          v17 = *(_QWORD *)(v1 + 1280) + 640LL * j;
          PpmIdleSnapConcurrency(*(PKSPIN_LOCK *)(v17 + 568), v17 + 576);
        }
      }
    }
  }
}
