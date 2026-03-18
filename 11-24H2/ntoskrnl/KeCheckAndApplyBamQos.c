/*
 * XREFs of KeCheckAndApplyBamQos @ 0x14029DF30
 * Callers:
 *     KiQuantumEnd @ 0x140293C70 (KiQuantumEnd.c)
 *     KiCheckForPendingQosUpdate @ 0x14029DE4C (KiCheckForPendingQosUpdate.c)
 *     KeApplyWobBamQos @ 0x1402A2218 (KeApplyWobBamQos.c)
 *     KeUpdateThreadTag @ 0x140472120 (KeUpdateThreadTag.c)
 *     KeSetThreadSchedulerAssist @ 0x140487FC8 (KeSetThreadSchedulerAssist.c)
 *     SwapContext @ 0x1406B2B40 (SwapContext.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     PpmPerfArbitratorApplyProcessorState @ 0x14029E340 (PpmPerfArbitratorApplyProcessorState.c)
 *     KeUpdatePendingQosRequest @ 0x14029E99C (KeUpdatePendingQosRequest.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     PpmEventVpQosChange @ 0x1405D9E08 (PpmEventVpQosChange.c)
 *     PpmHvSetVirtualProcessorQos @ 0x1405DC000 (PpmHvSetVirtualProcessorQos.c)
 */

void __fastcall KeCheckAndApplyBamQos(__int64 a1, __int64 a2)
{
  char v3; // al
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // r15d
  unsigned int *v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rcx
  int v10; // ebp
  char v11; // r12
  char v12; // r13
  unsigned int *v13; // rax
  __int64 v14; // r14
  int v15; // ecx
  bool v16; // zf
  unsigned int v17; // ecx
  struct _KPRCB *v18; // rcx
  signed __int32 *v19; // r8
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v21; // r8
  LARGE_INTEGER v22; // r9
  unsigned __int64 v23; // rax
  signed __int32 v24; // eax
  signed __int32 v25; // ett
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v28; // eax
  signed __int32 v29; // ett
  char v30; // [rsp+70h] [rbp+18h]
  char v31; // [rsp+78h] [rbp+20h]

  if ( !KeHeteroSystemQos )
    return;
  v3 = KeDisableInterrupts(a1, a2, a2);
  v6 = *(unsigned __int8 *)(v5 + 516);
  v7 = (unsigned int *)(a1 + 236);
  v8 = *(unsigned __int8 *)(v5 + 516);
  v9 = (unsigned __int8)*(_DWORD *)(a1 + 236);
  v31 = v3;
  if ( v6 != (_DWORD)v9 )
  {
    v10 = *(_DWORD *)(a1 + 236) & 0x100;
    v11 = 1;
    v12 = 0;
    v30 = 0;
    v13 = (unsigned int *)(a1 + 236);
    if ( (_DWORD)v8 == *(_DWORD *)(a1 + 35392) )
      goto LABEL_15;
    v14 = *(_QWORD *)(a1 + 35256);
    if ( v14 && *(_BYTE *)(v14 + 141) )
    {
      v12 = 1;
      v30 = KeDisableInterrupts(v9, v4, v5);
      KxAcquireSpinLock((PKSPIN_LOCK)(v14 + 144));
    }
    v15 = *(unsigned __int16 *)(a1 + 35400);
    if ( !_bittest(&v15, v8) )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v21 = PerformanceCounter.QuadPart - *(_QWORD *)(a1 + 35376);
      v22 = PerformanceCounter;
      if ( PpmPerfQosHysteresis[7 * v8 + *(int *)(a1 + 35392)]
        && v21 < *(_QWORD *)(a1 + 35384)
        && !*(_BYTE *)(a1 + 35342) )
      {
        v11 = 0;
LABEL_12:
        if ( v12 )
        {
          KxReleaseSpinLock((volatile signed __int64 *)(v14 + 144));
          if ( v30 )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
            if ( SchedulerAssist )
            {
              _m_prefetchw(SchedulerAssist);
              v28 = *SchedulerAssist;
              do
              {
                v29 = v28;
                v28 = _InterlockedCompareExchange(SchedulerAssist, v28 & 0xFFDFFFFF, v28);
              }
              while ( v29 != v28 );
              if ( (v28 & 0x200000) != 0 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
            _enable();
          }
        }
        if ( !v11 )
        {
          *v7 |= 0x100u;
          v17 = *v7;
LABEL_16:
          if ( (v10 != 0) != ((v17 >> 8) & 1) )
            KeUpdatePendingQosRequest(a1);
          goto LABEL_18;
        }
        v13 = (unsigned int *)(a1 + 236);
LABEL_15:
        v17 = *v7 & 0xFFFFFEFF;
        *v13 = v17;
        goto LABEL_16;
      }
      v23 = 2LL * *(_QWORD *)(a1 + 35384);
      *(LARGE_INTEGER *)(a1 + 35376) = v22;
      *(_BYTE *)(a1 + 35342) = v21 >= v23;
    }
    v16 = PpmPerfVmQosSupported == 0;
    *(_DWORD *)(a1 + 35392) = v8;
    if ( v16 )
    {
      PpmPerfArbitratorApplyProcessorState(a1, 1LL, 0LL);
    }
    else
    {
      *(_DWORD *)(a1 + 35396) = v8;
      PpmHvSetVirtualProcessorQos(a1);
      PpmEventVpQosChange(a1);
    }
    *(_BYTE *)v7 = v6;
    goto LABEL_12;
  }
LABEL_18:
  if ( v31 )
  {
    v18 = KeGetCurrentPrcb();
    v19 = (signed __int32 *)v18->SchedulerAssist;
    if ( v19 )
    {
      _m_prefetchw(v19);
      v24 = *v19;
      do
      {
        v25 = v24;
        v24 = _InterlockedCompareExchange(v19, v24 & 0xFFDFFFFF, v24);
      }
      while ( v25 != v24 );
      if ( (v24 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)v18);
    }
    _enable();
  }
}
