/*
 * XREFs of KiVpBackingThreadYieldExecution @ 0x1404CE2D8
 * Callers:
 *     KeYieldExecution @ 0x14031B9F0 (KeYieldExecution.c)
 * Callees:
 *     KiProcessDeferredReadyList @ 0x1402C5F60 (KiProcessDeferredReadyList.c)
 *     KiSetPriorityBoost @ 0x1402DFE70 (KiSetPriorityBoost.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 */

char __fastcall KiVpBackingThreadYieldExecution(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v2; // rdi
  unsigned int v3; // eax
  bool v4; // cf
  char v5; // si
  LARGE_INTEGER PerformanceCounter; // rax
  signed __int64 v7; // rdx
  LARGE_INTEGER v8; // r13
  _QWORD *i; // r14
  volatile signed __int32 *v10; // rbx
  unsigned __int64 v11; // rcx
  unsigned int v13; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v14; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int64 v15; // [rsp+80h] [rbp+18h]

  v14 = 0LL;
  v1 = 0;
  v2 = *(_QWORD *)(a1 + 544);
  v3 = *(_DWORD *)(a1 + 1160) + 1;
  v4 = v3 < KiSchedulerAssistYieldCounterThreshold;
  v5 = 1;
  *(_DWORD *)(a1 + 1160) = v3;
  if ( !v4 )
  {
    *(_DWORD *)(a1 + 1160) = 0;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v7 = *(_QWORD *)(v2 + 248);
    v8 = PerformanceCounter;
    if ( PerformanceCounter.QuadPart >= v7
      && v7 == _InterlockedCompareExchange64(
                 (volatile signed __int64 *)(v2 + 248),
                 PerformanceCounter.QuadPart + KiSchedulerAssistYieldBoostPeriod,
                 v7) )
    {
      ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v2 + 64));
      for ( i = *(_QWORD **)(v2 + 48); i != (_QWORD *)(v2 + 48); i = (_QWORD *)*i )
      {
        v10 = (volatile signed __int32 *)(i - 95);
        if ( (*(_DWORD *)(i - 80) & 0x400000) != 0
          && *((char *)v10 + 195) < KiVpThreadSystemWorkPriority
          && *((_BYTE *)v10 + 388) != 5 )
        {
          v11 = *((_QWORD *)v10 + 9);
          v13 = 0;
          v15 = v11;
          while ( _interlockedbittestandset64(v10 + 16, 0LL) )
          {
            do
              KeYieldProcessorEx(&v13);
            while ( *((_QWORD *)v10 + 8) );
          }
          if ( (v10[30] & 0x400000) != 0
            && *((char *)v10 + 195) < KiVpThreadSystemWorkPriority
            && *((_BYTE *)v10 + 388) != 5 )
          {
            ++v1;
            KiSetPriorityBoost(
              (__int64)&v14,
              (__int64)(i - 95),
              (unsigned int)KiVpThreadSystemWorkPriority,
              v15,
              KiLockQuantumTarget);
            ++*((_DWORD *)v10 + 291);
            *((LARGE_INTEGER *)v10 + 146) = v8;
          }
          *((_QWORD *)v10 + 8) = 0LL;
        }
      }
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v2 + 64));
      if ( v1 )
      {
        KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v14, 2u);
        ++*(_DWORD *)(v2 + 244);
        _InterlockedAdd(&KiSchedulerAssistYieldBoostStats, 1u);
        _InterlockedAdd(&dword_140FC734C, v1);
      }
      return 0;
    }
  }
  return v5;
}
