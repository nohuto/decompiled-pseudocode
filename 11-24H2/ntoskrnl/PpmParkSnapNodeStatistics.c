/*
 * XREFs of PpmParkSnapNodeStatistics @ 0x140230C2C
 * Callers:
 *     PpmCheckSnapAllUtility @ 0x1404073F0 (PpmCheckSnapAllUtility.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     PpmIdleSnapConcurrency @ 0x140230838 (PpmIdleSnapConcurrency.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
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
  __int64 v7; // r9
  char v8; // r14
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  void *v11; // rcx
  size_t v12; // r8
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  unsigned __int8 j; // si
  __int64 v17; // rcx

  for ( i = 0; i < (unsigned int)PpmParkNumNodes; ++i )
  {
    v1 = PpmParkNodes + 1296LL * i;
    if ( *(_WORD *)(v1 + 10) )
    {
      v2 = *(_QWORD *)(v1 + 1104);
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v8 = KeDisableInterrupts(v5, v4, v6, v7);
      KxAcquireSpinLock((PKSPIN_LOCK)v2);
      v9 = *(_QWORD *)(v2 + 16);
      if ( PerformanceCounter.QuadPart > v9 )
      {
        v10 = *(unsigned int *)(v2 + 12);
        *(LARGE_INTEGER *)(v2 + 16) = PerformanceCounter;
        *(_QWORD *)(v2 + 24) += PerformanceCounter.QuadPart - v9;
        *(_QWORD *)(v2 + 8 * v10 + 328) += PerformanceCounter.QuadPart - v9;
      }
      v11 = *(void **)(v1 + 1112);
      v12 = 8LL * *(unsigned int *)(v1 + 1160);
      *(_QWORD *)(v1 + 1136) = *(_QWORD *)(v2 + 24);
      memmove(v11, (const void *)(v2 + 328), v12);
      KxReleaseSpinLock((volatile signed __int64 *)v2);
      if ( v8 )
      {
        SchedulerAssist = (signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
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
            KiRemoveSystemWorkPriorityKick();
        }
        _enable();
      }
      if ( *(_BYTE *)(v1 + 1185) )
      {
        for ( j = 0; j < *(_BYTE *)(v1 + 12); ++j )
        {
          v17 = *(_QWORD *)(v1 + 1288) + 640LL * j;
          PpmIdleSnapConcurrency(*(PKSPIN_LOCK *)(v17 + 568), v17 + 576);
        }
      }
    }
  }
}
