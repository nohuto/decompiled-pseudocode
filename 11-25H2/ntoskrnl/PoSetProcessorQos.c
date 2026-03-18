/*
 * XREFs of PoSetProcessorQos @ 0x1403E8C70
 * Callers:
 *     KiCheckForPendingQosUpdate @ 0x14027556C (KiCheckForPendingQosUpdate.c)
 *     KeCheckAndApplyBamQos @ 0x1403E8B80 (KeCheckAndApplyBamQos.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     PpmPerfArbitratorApplyProcessorState @ 0x1403E8E10 (PpmPerfArbitratorApplyProcessorState.c)
 *     PpmEventVpQosChange @ 0x1405D5434 (PpmEventVpQosChange.c)
 *     PpmHvSetVirtualProcessorQos @ 0x1405D6E20 (PpmHvSetVirtualProcessorQos.c)
 */

__int64 __fastcall PoSetProcessorQos(__int64 a1, int a2)
{
  __int64 v2; // rdi
  bool v3; // r15
  char v4; // r14
  unsigned __int8 v6; // bp
  __int64 v7; // rsi
  int v8; // eax
  bool v9; // zf
  LARGE_INTEGER PerformanceCounter; // r8
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v16; // eax
  signed __int32 v17; // ett

  v2 = a2;
  v3 = 0;
  v4 = 0;
  v6 = 1;
  if ( a2 == *(_DWORD *)(a1 + 35392) )
    return 1LL;
  v7 = *(_QWORD *)(a1 + 35256);
  if ( v7 && *(_BYTE *)(v7 + 141) )
  {
    v4 = 1;
    v3 = KeDisableInterrupts();
    KxAcquireSpinLock((PKSPIN_LOCK)(v7 + 144));
  }
  v8 = *(unsigned __int16 *)(a1 + 35400);
  if ( _bittest(&v8, v2) )
    goto LABEL_6;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v12 = PerformanceCounter.QuadPart - *(_QWORD *)(a1 + 35376);
  if ( !PpmPerfQosHysteresis[7 * v2 + *(int *)(a1 + 35392)] || v12 >= *(_QWORD *)(a1 + 35384) || *(_BYTE *)(a1 + 35342) )
  {
    v13 = 2LL * *(_QWORD *)(a1 + 35384);
    *(LARGE_INTEGER *)(a1 + 35376) = PerformanceCounter;
    *(_BYTE *)(a1 + 35342) = v12 >= v13;
LABEL_6:
    v9 = PpmPerfVmQosSupported == 0;
    *(_DWORD *)(a1 + 35392) = v2;
    if ( v9 )
    {
      PpmPerfArbitratorApplyProcessorState(a1, 1LL, 0LL);
    }
    else
    {
      *(_DWORD *)(a1 + 35396) = v2;
      PpmHvSetVirtualProcessorQos(a1);
      PpmEventVpQosChange(a1);
    }
    *(_BYTE *)(a1 + 236) = v2;
    goto LABEL_9;
  }
  v6 = 0;
LABEL_9:
  if ( v4 )
  {
    KxReleaseSpinLock((volatile signed __int64 *)(v7 + 144));
    if ( v3 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v16 = *SchedulerAssist;
        do
        {
          v17 = v16;
          v16 = _InterlockedCompareExchange(SchedulerAssist, v16 & 0xFFDFFFFF, v16);
        }
        while ( v17 != v16 );
        if ( (v16 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
    }
  }
  return v6;
}
