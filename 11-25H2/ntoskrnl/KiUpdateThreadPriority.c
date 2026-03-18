/*
 * XREFs of KiUpdateThreadPriority @ 0x1403170A0
 * Callers:
 *     KiInitializeForegroundBoostThread @ 0x14026B4D4 (KiInitializeForegroundBoostThread.c)
 *     KeYieldExecution @ 0x14027B240 (KeYieldExecution.c)
 *     KiRemoveBoostThread @ 0x14027EE94 (KiRemoveBoostThread.c)
 *     KiDeferredReadySingleThread @ 0x1402877C0 (KiDeferredReadySingleThread.c)
 *     KiSetPriorityThread @ 0x1402E7840 (KiSetPriorityThread.c)
 *     KiSoftParkElectionUnparkProcessor @ 0x140313EBC (KiSoftParkElectionUnparkProcessor.c)
 *     KiDirectSwitchThread @ 0x140315A20 (KiDirectSwitchThread.c)
 *     KiComputeEffectivePriority @ 0x140316760 (KiComputeEffectivePriority.c)
 *     KiUpdateVPBackingThreadPriority @ 0x140316DD0 (KiUpdateVPBackingThreadPriority.c)
 *     KiSetPriorityBoost @ 0x140326B50 (KiSetPriorityBoost.c)
 *     KiQuantumEnd @ 0x14032ED10 (KiQuantumEnd.c)
 *     KiQueueReadyThread @ 0x14032F910 (KiQueueReadyThread.c)
 *     KiParkCurrentProcessor @ 0x1403E0254 (KiParkCurrentProcessor.c)
 *     KiUnparkCurrentProcessor @ 0x1403E0888 (KiUnparkCurrentProcessor.c)
 *     KiApplyForegroundBoostThread @ 0x1404F46AC (KiApplyForegroundBoostThread.c)
 *     KiCompleteKernelInit @ 0x140B45C50 (KiCompleteKernelInit.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     KiUpdateThreadQosGroupingSummaries @ 0x140317BD0 (KiUpdateThreadQosGroupingSummaries.c)
 *     KiComputeThreadQos @ 0x140318250 (KiComputeThreadQos.c)
 *     KiQueryEffectivePriorityThread @ 0x1403188E0 (KiQueryEffectivePriorityThread.c)
 *     Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline @ 0x1404EFFC4 (Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline.c)
 *     KiUpdateStandbyStealSummaryForStandbyChange @ 0x1404F06D4 (KiUpdateStandbyStealSummaryForStandbyChange.c)
 */

__int64 __fastcall KiUpdateThreadPriority(__int64 a1, __int64 a2, __int64 a3, char a4, char a5)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v7; // rbp
  __int64 result; // rax
  int v11; // ecx
  __int64 *v12; // rsi
  _QWORD *v13; // r14
  char *v14; // r15
  char v15; // bl
  char v16; // al
  char v17; // cl
  volatile signed __int32 *v18; // rdx
  int v19; // ecx
  unsigned __int32 v20; // eax
  unsigned int v21; // ecx
  char v22; // r8
  unsigned int v23; // edx
  __int64 v24; // r9
  char v25; // cl
  __int64 v26; // rcx
  volatile signed __int32 *v27; // rcx
  int v28; // edx
  struct _SINGLE_LIST_ENTRY *v29; // rdx
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rcx
  __int64 v31; // [rsp+20h] [rbp-28h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  LODWORD(v7) = 1;
  if ( a4 > *(char *)(a3 + 195) )
  {
    if ( *(_BYTE *)(a3 + 792) )
    {
      v29 = (struct _SINGLE_LIST_ENTRY *)(a3 + 808);
      if ( *(_QWORD *)(a3 + 808) == 1LL )
      {
        p_AbPropagateBoostsList = &CurrentPrcb->AbPropagateBoostsList;
        if ( CurrentPrcb != (struct _KPRCB *)-37240LL )
        {
          v29->Next = p_AbPropagateBoostsList->Next;
          p_AbPropagateBoostsList->Next = v29;
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
    v11 = *(_DWORD *)(a3 + 120) >> 1;
    v31 = a1;
    if ( (v11 & 1) == 0 )
    {
      v12 = &v31;
      goto LABEL_7;
    }
    result = *(_QWORD *)(a1 + 36440);
    LODWORD(v7) = *(unsigned __int8 *)result;
    v12 = (__int64 *)(result + 8);
    if ( *(_BYTE *)result )
    {
LABEL_7:
      v7 = (unsigned int)v7;
      while ( 1 )
      {
        v13 = (_QWORD *)*v12;
        v14 = *(char **)(*v12 + 56);
        v15 = *v14;
        if ( (*(_BYTE *)(a3 + 2) & 4) != 0 )
          v16 = v15 ^ KiQueryEffectivePriorityThread(a3, *v12);
        else
          v16 = *(_BYTE *)(a3 + 195) ^ v15;
        v17 = (v15 ^ v16 & 0x7F) & 0x7F | ((unsigned __int8)(*(_DWORD *)(a3 + 120) >> 1) << 7);
        *v14 = v17;
        v18 = (volatile signed __int32 *)v13[4567];
        if ( !v18 )
          goto LABEL_21;
        v19 = v17 & 0x7F;
        if ( a3 == v13[3] )
          v19 = KiVpThreadSystemWorkPriority;
        v20 = (unsigned __int32)*v18 >> 8;
        if ( v19 > (unsigned __int8)v20 )
          break;
        if ( v19 != (unsigned __int8)v20 )
        {
          v21 = (v19 << 8) - ((unsigned __int8)v20 << 8);
LABEL_20:
          _InterlockedAdd(v18, v21);
        }
LABEL_21:
        v22 = 64;
        v23 = *(_DWORD *)(a3 + 80);
        v24 = v13[7];
        if ( v23 <= *(_DWORD *)(a3 + 84) )
          v23 = *(_DWORD *)(a3 + 84);
        if ( v23 < KiDynamicHeteroCpuPolicyExpectedCycles )
          v22 = 0;
        v25 = *(_BYTE *)(v24 + 64) ^ (*(_BYTE *)(v24 + 64) ^ *(_BYTE *)(a3 + 516)) & 7;
        *(_BYTE *)(v24 + 64) = v22 | (v25 ^ (v25 ^ (8 * *(_BYTE *)(a3 + 517))) & 0x38) & 0xBF;
        KiUpdateThreadQosGroupingSummaries(v13);
        result = Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline(v26);
        if ( (_DWORD)result )
          result = KiUpdateStandbyStealSummaryForStandbyChange(v13);
        ++v12;
        if ( !--v7 )
          goto LABEL_17;
      }
      v21 = (v19 - (unsigned __int8)v20) << 8;
      goto LABEL_20;
    }
  }
LABEL_17:
  if ( (*(_DWORD *)(a3 + 120) & 0x400000) != 0 )
  {
    v27 = *(volatile signed __int32 **)(a3 + 968);
    v28 = *(char *)(a3 + 195);
    result = *(unsigned int *)v27;
    if ( v28 != (unsigned __int8)result )
    {
      result = v28 - (unsigned int)(unsigned __int8)result;
      _InterlockedAdd(v27, result);
    }
  }
  return result;
}
