/*
 * XREFs of PpmPerfSetProcessorIdle @ 0x1404C693C
 * Callers:
 *     PoIdle @ 0x14044B7A0 (PoIdle.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     PpmPerfArbitratorApplyProcessorState @ 0x1403E8E10 (PpmPerfArbitratorApplyProcessorState.c)
 *     KeUpdatePendingQosRequest @ 0x1403E9444 (KeUpdatePendingQosRequest.c)
 */

char __fastcall PpmPerfSetProcessorIdle(__int64 a1, char *a2)
{
  char v2; // r12
  char v3; // r15
  char v4; // bp
  bool v5; // r14
  __int64 v6; // rdi
  LARGE_INTEGER PerformanceCounter; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // eax
  int v14; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v17; // eax
  signed __int32 v18; // ett

  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0LL;
  if ( PpmPerfQosEnabled && PpmPerfQosManageIdleProcessors && *(_DWORD *)(a1 + 35392) != 5 )
  {
    v6 = *(_QWORD *)(a1 + 35256);
    if ( v6 && *(_BYTE *)(v6 + 141) )
    {
      v4 = 1;
      v5 = KeDisableInterrupts();
      KxAcquireSpinLock((PKSPIN_LOCK)(v6 + 144));
    }
    if ( (*(_BYTE *)(a1 + 35400) & 0x20) == 0 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v10 = PerformanceCounter.QuadPart - *(_QWORD *)(a1 + 35376);
      v11 = *(_QWORD *)(a1 + 35384);
      if ( v10 < v11 && !*(_BYTE *)(a1 + 35342) )
      {
        v12 = *(_DWORD *)(a1 + 236);
        v2 = 1;
        if ( (v12 & 0x100) == 0 )
        {
          v3 = 1;
          v13 = v12 | 0x100;
LABEL_16:
          *(_DWORD *)(a1 + 236) = v13;
          KeUpdatePendingQosRequest(a1);
          goto LABEL_17;
        }
        goto LABEL_17;
      }
      *(LARGE_INTEGER *)(a1 + 35376) = PerformanceCounter;
      *(_BYTE *)(a1 + 35342) = v10 >= 2 * v11;
    }
    *(_DWORD *)(a1 + 35392) = 5;
    PpmPerfArbitratorApplyProcessorState(a1, 1u, 0);
    *(_BYTE *)(a1 + 236) = 5;
  }
  v14 = *(_DWORD *)(a1 + 236);
  if ( (v14 & 0x100) != 0 )
  {
    v13 = v14 & 0xFFFFFEFF;
    goto LABEL_16;
  }
LABEL_17:
  if ( v4 )
  {
    KxReleaseSpinLock((volatile signed __int64 *)(v6 + 144));
    if ( v5 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v17 = *SchedulerAssist;
        do
        {
          v18 = v17;
          v17 = _InterlockedCompareExchange(SchedulerAssist, v17 & 0xFFDFFFFF, v17);
        }
        while ( v18 != v17 );
        if ( (v17 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
    }
  }
  if ( a2 )
    *a2 = v2;
  return v3;
}
