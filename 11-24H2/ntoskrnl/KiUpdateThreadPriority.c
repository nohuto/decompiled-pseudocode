/*
 * XREFs of KiUpdateThreadPriority @ 0x140429720
 * Callers:
 *     KiSoftParkElectionUnparkProcessor @ 0x140201414 (KiSoftParkElectionUnparkProcessor.c)
 *     KiSetPriorityThread @ 0x14024FBBC (KiSetPriorityThread.c)
 *     KiQuantumEnd @ 0x140293C70 (KiQuantumEnd.c)
 *     KiQueueReadyThread @ 0x140295020 (KiQueueReadyThread.c)
 *     KiDeferredReadySingleThread @ 0x14031ED40 (KiDeferredReadySingleThread.c)
 *     KiRemoveBoostThread @ 0x1403230A4 (KiRemoveBoostThread.c)
 *     KiSetPriorityBoost @ 0x140338930 (KiSetPriorityBoost.c)
 *     KeYieldExecution @ 0x14033C510 (KeYieldExecution.c)
 *     KiInitializeForegroundBoostThread @ 0x1403B3D80 (KiInitializeForegroundBoostThread.c)
 *     KiParkCurrentProcessor @ 0x1403E9898 (KiParkCurrentProcessor.c)
 *     KiUnparkCurrentProcessor @ 0x1403E9EF8 (KiUnparkCurrentProcessor.c)
 *     KiComputeEffectivePriority @ 0x1404024F0 (KiComputeEffectivePriority.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1404E6D30 (KiUpdateVPBackingThreadPriority.c)
 *     KiApplyForegroundBoostThread @ 0x1404F6D4C (KiApplyForegroundBoostThread.c)
 *     KiCompleteKernelInit @ 0x140B55C50 (KiCompleteKernelInit.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     KiComputeThreadQos @ 0x14029A450 (KiComputeThreadQos.c)
 *     KiQueryEffectivePriorityThread @ 0x14034BFE0 (KiQueryEffectivePriorityThread.c)
 *     KiUpdateStandbyStealSummaryForStandbyChange @ 0x1404E95F0 (KiUpdateStandbyStealSummaryForStandbyChange.c)
 *     KiUpdateThreadQosGroupingSummaries @ 0x1404E9670 (KiUpdateThreadQosGroupingSummaries.c)
 */

__int64 __fastcall KiUpdateThreadPriority(__int64 a1, __int64 a2, __int64 a3, char a4, char a5)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned int v8; // esi
  struct _SINGLE_LIST_ENTRY *v10; // rcx
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rdx
  __int64 result; // rax
  int v13; // ecx
  struct _KPRCB **v14; // r15
  __int64 v15; // rbp
  struct _KPRCB *v16; // rsi
  unsigned __int8 *PriorityState; // r14
  unsigned __int8 v18; // bl
  char v19; // al
  unsigned __int8 v20; // cl
  volatile signed __int32 *SchedulerAssist; // r8
  int v22; // ecx
  unsigned __int32 v23; // eax
  unsigned int v24; // ecx
  unsigned int v25; // edx
  __int64 v26; // r8
  _KPRIORITY_STATE *v27; // r9
  char v28; // cl
  __int64 v29; // rdx
  volatile signed __int32 *v30; // rcx
  int v31; // edx
  __int64 v32; // [rsp+20h] [rbp-28h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v8 = 1;
  if ( a4 > *(char *)(a3 + 195) )
  {
    if ( *(_BYTE *)(a3 + 792) )
    {
      v10 = (struct _SINGLE_LIST_ENTRY *)(a3 + 808);
      if ( *(_QWORD *)(a3 + 808) == 1LL )
      {
        p_AbPropagateBoostsList = &CurrentPrcb->AbPropagateBoostsList;
        if ( CurrentPrcb != (struct _KPRCB *)-37240LL )
        {
          v10->Next = p_AbPropagateBoostsList->Next;
          p_AbPropagateBoostsList->Next = v10;
          _InterlockedIncrement16((volatile signed __int16 *)(a3 + 868));
          if ( !CurrentPrcb->AbDpc.DeferredContext )
          {
            KeInsertQueueDpc(&CurrentPrcb->AbDpc, CurrentPrcb, 0LL);
            CurrentPrcb->AbDpc.DeferredContext = (PVOID)1;
          }
        }
      }
    }
  }
  *(_BYTE *)(a3 + 195) = a4;
  result = KiComputeThreadQos(a3);
  if ( (_DWORD)result != *(unsigned __int8 *)(a3 + 516) )
    *(_BYTE *)(a3 + 516) = result;
  if ( a5 )
  {
    v13 = *(_DWORD *)(a3 + 120) >> 1;
    v32 = a1;
    if ( (v13 & 1) != 0 )
    {
      result = *(_QWORD *)(a1 + 36440);
      v8 = *(unsigned __int8 *)result;
      v14 = (struct _KPRCB **)(result + 8);
      if ( !*(_BYTE *)result )
        goto LABEL_31;
    }
    else
    {
      v14 = (struct _KPRCB **)&v32;
    }
    v15 = v8;
    do
    {
      v16 = *v14;
      PriorityState = (unsigned __int8 *)(*v14)->PriorityState;
      v18 = *PriorityState;
      if ( (*(_BYTE *)(a3 + 2) & 4) != 0 )
        v19 = v18 ^ KiQueryEffectivePriorityThread(a3, *v14);
      else
        v19 = *(_BYTE *)(a3 + 195) ^ v18;
      v20 = (v18 ^ v19 & 0x7F) & 0x7F | ((unsigned __int8)(*(_DWORD *)(a3 + 120) >> 1) << 7);
      *PriorityState = v20;
      SchedulerAssist = (volatile signed __int32 *)v16->SchedulerAssist;
      if ( SchedulerAssist )
      {
        v22 = v20 & 0x7F;
        if ( (_KTHREAD *)a3 == v16->IdleThread )
          v22 = KiVpThreadSystemWorkPriority;
        v23 = (unsigned __int32)*SchedulerAssist >> 8;
        if ( v22 != (unsigned __int8)v23 )
        {
          if ( v22 <= (unsigned __int8)v23 )
            v24 = (v22 << 8) - ((unsigned __int8)v23 << 8);
          else
            v24 = (v22 - (unsigned __int8)v23) << 8;
          _InterlockedAdd(SchedulerAssist, v24);
        }
      }
      v25 = *(_DWORD *)(a3 + 84);
      v26 = *(unsigned int *)(a3 + 80);
      v27 = v16->PriorityState;
      if ( (unsigned int)v26 <= v25 )
        v26 = v25;
      v29 = 64LL;
      if ( (unsigned int)v26 < KiDynamicHeteroCpuPolicyExpectedCycles )
        v29 = 0LL;
      v28 = v27[64].AllFields ^ (*(_BYTE *)(a3 + 516) ^ v27[64].AllFields) & 7;
      v27[64].AllFields = v29 | (v28 ^ (v28 ^ (8 * *(_BYTE *)(a3 + 517))) & 0x38) & 0xBF;
      KiUpdateThreadQosGroupingSummaries(v16, v29, v26, v27);
      result = KiUpdateStandbyStealSummaryForStandbyChange(v16);
      ++v14;
      --v15;
    }
    while ( v15 );
  }
LABEL_31:
  if ( (*(_DWORD *)(a3 + 120) & 0x400000) != 0 )
  {
    v30 = *(volatile signed __int32 **)(a3 + 968);
    v31 = *(char *)(a3 + 195);
    result = *(unsigned int *)v30;
    if ( v31 != (unsigned __int8)result )
    {
      result = v31 - (unsigned int)(unsigned __int8)result;
      _InterlockedAdd(v30, result);
    }
  }
  return result;
}
