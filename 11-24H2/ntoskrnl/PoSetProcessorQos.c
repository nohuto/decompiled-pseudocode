/*
 * XREFs of PoSetProcessorQos @ 0x14029E1A0
 * Callers:
 *     KiCheckForPendingQosUpdate @ 0x14029DE4C (KiCheckForPendingQosUpdate.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     PpmPerfArbitratorApplyProcessorState @ 0x14029E340 (PpmPerfArbitratorApplyProcessorState.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     PpmEventVpQosChange @ 0x1405D9E08 (PpmEventVpQosChange.c)
 *     PpmHvSetVirtualProcessorQos @ 0x1405DC000 (PpmHvSetVirtualProcessorQos.c)
 */

__int64 __fastcall PoSetProcessorQos(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  char v4; // r15
  char v5; // r14
  unsigned __int8 v7; // bp
  __int64 v8; // rsi
  int v9; // eax
  bool v10; // zf
  LARGE_INTEGER PerformanceCounter; // r8
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v17; // eax
  signed __int32 v18; // ett

  v3 = (int)a2;
  v4 = 0;
  v5 = 0;
  v7 = 1;
  if ( (_DWORD)a2 == *(_DWORD *)(a1 + 35392) )
    return 1LL;
  v8 = *(_QWORD *)(a1 + 35256);
  if ( v8 && *(_BYTE *)(v8 + 141) )
  {
    v5 = 1;
    v4 = KeDisableInterrupts(a1, a2, a3);
    KxAcquireSpinLock((PKSPIN_LOCK)(v8 + 144));
  }
  v9 = *(unsigned __int16 *)(a1 + 35400);
  if ( _bittest(&v9, v3) )
    goto LABEL_6;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v13 = PerformanceCounter.QuadPart - *(_QWORD *)(a1 + 35376);
  if ( !PpmPerfQosHysteresis[7 * v3 + *(int *)(a1 + 35392)] || v13 >= *(_QWORD *)(a1 + 35384) || *(_BYTE *)(a1 + 35342) )
  {
    v14 = 2LL * *(_QWORD *)(a1 + 35384);
    *(LARGE_INTEGER *)(a1 + 35376) = PerformanceCounter;
    *(_BYTE *)(a1 + 35342) = v13 >= v14;
LABEL_6:
    v10 = PpmPerfVmQosSupported == 0;
    *(_DWORD *)(a1 + 35392) = v3;
    if ( v10 )
    {
      PpmPerfArbitratorApplyProcessorState(a1, 1LL, 0LL);
    }
    else
    {
      *(_DWORD *)(a1 + 35396) = v3;
      PpmHvSetVirtualProcessorQos(a1);
      PpmEventVpQosChange(a1);
    }
    *(_BYTE *)(a1 + 236) = v3;
    goto LABEL_9;
  }
  v7 = 0;
LABEL_9:
  if ( v5 )
  {
    KxReleaseSpinLock((volatile signed __int64 *)(v8 + 144));
    if ( v4 )
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
  return v7;
}
