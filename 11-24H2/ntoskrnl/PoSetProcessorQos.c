/*
 * XREFs of PoSetProcessorQos @ 0x1402ACC90
 * Callers:
 *     KiCheckForPendingQosUpdate @ 0x1402AC93C (KiCheckForPendingQosUpdate.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     PpmPerfArbitratorApplyProcessorState @ 0x1402ACE30 (PpmPerfArbitratorApplyProcessorState.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     PpmEventVpQosChange @ 0x1405D7124 (PpmEventVpQosChange.c)
 *     PpmHvSetVirtualProcessorQos @ 0x1405D8ED0 (PpmHvSetVirtualProcessorQos.c)
 */

__int64 __fastcall PoSetProcessorQos(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  char v5; // r15
  char v6; // r14
  unsigned __int8 v8; // bp
  __int64 v9; // rsi
  int v10; // eax
  bool v11; // zf
  LARGE_INTEGER PerformanceCounter; // r8
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v18; // eax
  signed __int32 v19; // ett

  v4 = (int)a2;
  v5 = 0;
  v6 = 0;
  v8 = 1;
  if ( (_DWORD)a2 == *(_DWORD *)(a1 + 35392) )
    return 1LL;
  v9 = *(_QWORD *)(a1 + 35256);
  if ( v9 && *(_BYTE *)(v9 + 141) )
  {
    v6 = 1;
    v5 = KeDisableInterrupts(a1, a2, a3, a4);
    KxAcquireSpinLock((PKSPIN_LOCK)(v9 + 144));
  }
  v10 = *(unsigned __int16 *)(a1 + 35400);
  if ( _bittest(&v10, v4) )
    goto LABEL_6;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v14 = PerformanceCounter.QuadPart - *(_QWORD *)(a1 + 35376);
  if ( !PpmPerfQosHysteresis[7 * v4 + *(int *)(a1 + 35392)] || v14 >= *(_QWORD *)(a1 + 35384) || *(_BYTE *)(a1 + 35342) )
  {
    v15 = 2LL * *(_QWORD *)(a1 + 35384);
    *(LARGE_INTEGER *)(a1 + 35376) = PerformanceCounter;
    *(_BYTE *)(a1 + 35342) = v14 >= v15;
LABEL_6:
    v11 = PpmPerfVmQosSupported == 0;
    *(_DWORD *)(a1 + 35392) = v4;
    if ( v11 )
    {
      PpmPerfArbitratorApplyProcessorState(a1, 1LL, 0LL);
    }
    else
    {
      *(_DWORD *)(a1 + 35396) = v4;
      PpmHvSetVirtualProcessorQos(a1);
      PpmEventVpQosChange(a1);
    }
    *(_BYTE *)(a1 + 236) = v4;
    goto LABEL_9;
  }
  v8 = 0;
LABEL_9:
  if ( v6 )
  {
    KxReleaseSpinLock((volatile signed __int64 *)(v9 + 144));
    if ( v5 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v18 = *SchedulerAssist;
        do
        {
          v19 = v18;
          v18 = _InterlockedCompareExchange(SchedulerAssist, v18 & 0xFFDFFFFF, v18);
        }
        while ( v19 != v18 );
        if ( (v18 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
    }
  }
  return v8;
}
