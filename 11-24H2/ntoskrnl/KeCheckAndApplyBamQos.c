/*
 * XREFs of KeCheckAndApplyBamQos @ 0x1402ACA20
 * Callers:
 *     KiQuantumEnd @ 0x1402A3870 (KiQuantumEnd.c)
 *     KiCheckForPendingQosUpdate @ 0x1402AC93C (KiCheckForPendingQosUpdate.c)
 *     KeApplyWobBamQos @ 0x1402D1948 (KeApplyWobBamQos.c)
 *     KeUpdateThreadTag @ 0x14046E3F0 (KeUpdateThreadTag.c)
 *     KeSetThreadSchedulerAssist @ 0x140483038 (KeSetThreadSchedulerAssist.c)
 *     SwapContext @ 0x1406B3AE0 (SwapContext.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     PpmPerfArbitratorApplyProcessorState @ 0x1402ACE30 (PpmPerfArbitratorApplyProcessorState.c)
 *     KeUpdatePendingQosRequest @ 0x1402AD48C (KeUpdatePendingQosRequest.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     PpmEventVpQosChange @ 0x1405D7124 (PpmEventVpQosChange.c)
 *     PpmHvSetVirtualProcessorQos @ 0x1405D8ED0 (PpmHvSetVirtualProcessorQos.c)
 */

void __fastcall KeCheckAndApplyBamQos(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // al
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // r15d
  unsigned int *v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rcx
  int v13; // ebp
  char v14; // r12
  char v15; // r13
  unsigned int *v16; // rax
  __int64 v17; // r14
  int v18; // ecx
  bool v19; // zf
  unsigned int v20; // ecx
  struct _KPRCB *v21; // rcx
  signed __int32 *v22; // r8
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v24; // r8
  LARGE_INTEGER v25; // r9
  unsigned __int64 v26; // rax
  signed __int32 v27; // eax
  signed __int32 v28; // ett
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v31; // eax
  signed __int32 v32; // ett
  char v33; // [rsp+70h] [rbp+18h]
  char v34; // [rsp+78h] [rbp+20h]

  if ( !KeHeteroSystemQos )
    return;
  v5 = KeDisableInterrupts(a1, a2, a2, a4);
  v9 = *(unsigned __int8 *)(v7 + 516);
  v10 = (unsigned int *)(a1 + 236);
  v11 = *(unsigned __int8 *)(v7 + 516);
  v12 = (unsigned __int8)*(_DWORD *)(a1 + 236);
  v34 = v5;
  if ( v9 != (_DWORD)v12 )
  {
    v13 = *(_DWORD *)(a1 + 236) & 0x100;
    v14 = 1;
    v15 = 0;
    v33 = 0;
    v16 = (unsigned int *)(a1 + 236);
    if ( (_DWORD)v11 == *(_DWORD *)(a1 + 35392) )
      goto LABEL_15;
    v17 = *(_QWORD *)(a1 + 35256);
    if ( v17 && *(_BYTE *)(v17 + 141) )
    {
      v15 = 1;
      v33 = KeDisableInterrupts(v12, v6, v7, v8);
      KxAcquireSpinLock((PKSPIN_LOCK)(v17 + 144));
    }
    v18 = *(unsigned __int16 *)(a1 + 35400);
    if ( !_bittest(&v18, v11) )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v24 = PerformanceCounter.QuadPart - *(_QWORD *)(a1 + 35376);
      v25 = PerformanceCounter;
      if ( PpmPerfQosHysteresis[7 * v11 + *(int *)(a1 + 35392)]
        && v24 < *(_QWORD *)(a1 + 35384)
        && !*(_BYTE *)(a1 + 35342) )
      {
        v14 = 0;
LABEL_12:
        if ( v15 )
        {
          KxReleaseSpinLock((volatile signed __int64 *)(v17 + 144));
          if ( v33 )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
            if ( SchedulerAssist )
            {
              _m_prefetchw(SchedulerAssist);
              v31 = *SchedulerAssist;
              do
              {
                v32 = v31;
                v31 = _InterlockedCompareExchange(SchedulerAssist, v31 & 0xFFDFFFFF, v31);
              }
              while ( v32 != v31 );
              if ( (v31 & 0x200000) != 0 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
            _enable();
          }
        }
        if ( !v14 )
        {
          *v10 |= 0x100u;
          v20 = *v10;
LABEL_16:
          if ( (v13 != 0) != ((v20 >> 8) & 1) )
            KeUpdatePendingQosRequest(a1);
          goto LABEL_18;
        }
        v16 = (unsigned int *)(a1 + 236);
LABEL_15:
        v20 = *v10 & 0xFFFFFEFF;
        *v16 = v20;
        goto LABEL_16;
      }
      v26 = 2LL * *(_QWORD *)(a1 + 35384);
      *(LARGE_INTEGER *)(a1 + 35376) = v25;
      *(_BYTE *)(a1 + 35342) = v24 >= v26;
    }
    v19 = PpmPerfVmQosSupported == 0;
    *(_DWORD *)(a1 + 35392) = v11;
    if ( v19 )
    {
      PpmPerfArbitratorApplyProcessorState(a1, 1LL, 0LL);
    }
    else
    {
      *(_DWORD *)(a1 + 35396) = v11;
      PpmHvSetVirtualProcessorQos(a1);
      PpmEventVpQosChange(a1);
    }
    *(_BYTE *)v10 = v9;
    goto LABEL_12;
  }
LABEL_18:
  if ( v34 )
  {
    v21 = KeGetCurrentPrcb();
    v22 = (signed __int32 *)v21->SchedulerAssist;
    if ( v22 )
    {
      _m_prefetchw(v22);
      v27 = *v22;
      do
      {
        v28 = v27;
        v27 = _InterlockedCompareExchange(v22, v27 & 0xFFDFFFFF, v27);
      }
      while ( v28 != v27 );
      if ( (v27 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)v21);
    }
    _enable();
  }
}
