/*
 * XREFs of PpmPerfSetProcessorIdle @ 0x1404BF3F0
 * Callers:
 *     PoIdle @ 0x140441770 (PoIdle.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     PpmPerfArbitratorApplyProcessorState @ 0x1402ACE30 (PpmPerfArbitratorApplyProcessorState.c)
 *     KeUpdatePendingQosRequest @ 0x1402AD48C (KeUpdatePendingQosRequest.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 */

char __fastcall PpmPerfSetProcessorIdle(__int64 a1, __int64 QuadPart, __int64 a3)
{
  char v3; // r12
  char v4; // r15
  char v5; // bp
  bool v6; // r14
  __int64 v7; // rdi
  _BYTE *v8; // rsi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // eax
  int v14; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v17; // eax
  signed __int32 v18; // ett

  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0LL;
  v8 = (_BYTE *)QuadPart;
  if ( PpmPerfQosEnabled && PpmPerfQosManageIdleProcessors && *(_DWORD *)(a1 + 35392) != 5 )
  {
    v7 = *(_QWORD *)(a1 + 35256);
    if ( v7 && *(_BYTE *)(v7 + 141) )
    {
      v5 = 1;
      v6 = KeDisableInterrupts();
      KxAcquireSpinLock((PKSPIN_LOCK)(v7 + 144));
    }
    if ( (*(_BYTE *)(a1 + 35400) & 0x20) == 0 )
    {
      QuadPart = KeQueryPerformanceCounter(0LL).QuadPart;
      v10 = QuadPart - *(_QWORD *)(a1 + 35376);
      v11 = *(_QWORD *)(a1 + 35384);
      if ( v10 < v11 && !*(_BYTE *)(a1 + 35342) )
      {
        v12 = *(_DWORD *)(a1 + 236);
        v3 = 1;
        if ( (v12 & 0x100) == 0 )
        {
          v4 = 1;
          v13 = v12 | 0x100;
LABEL_16:
          *(_DWORD *)(a1 + 236) = v13;
          KeUpdatePendingQosRequest(a1, QuadPart, a3);
          goto LABEL_17;
        }
        goto LABEL_17;
      }
      *(_QWORD *)(a1 + 35376) = QuadPart;
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
  if ( v5 )
  {
    KxReleaseSpinLock((volatile signed __int64 *)(v7 + 144));
    if ( v6 )
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
  if ( v8 )
    *v8 = v3;
  return v4;
}
