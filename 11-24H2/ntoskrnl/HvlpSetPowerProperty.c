/*
 * XREFs of HvlpSetPowerProperty @ 0x1404B88E0
 * Callers:
 *     HvlRegisterLogicalProcessorFrequency @ 0x1404B8884 (HvlRegisterLogicalProcessorFrequency.c)
 *     HvlConfigureIdleStates @ 0x140586374 (HvlConfigureIdleStates.c)
 *     HvlRegisterPerfFeedbackCounters @ 0x140586924 (HvlRegisterPerfFeedbackCounters.c)
 *     HvlSetLogicalProcessorCppcRequest @ 0x140586A10 (HvlSetLogicalProcessorCppcRequest.c)
 *     HvlSetPlatformIdleState @ 0x140586A70 (HvlSetPlatformIdleState.c)
 *     HvlpPowerPolicySettingCallback @ 0x140586EE0 (HvlpPowerPolicySettingCallback.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x14039CBE0 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x14039CC08 (HvlpHvToNtStatus.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     HvlpHandleInsufficientMemory @ 0x140580554 (HvlpHandleInsufficientMemory.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall HvlpSetPowerProperty(__int128 *a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  PSLIST_ENTRY v3; // rax
  _QWORD *HypercallCachedPages; // rcx
  _SLIST_ENTRY *Next; // rdi
  char v6; // r14
  _SLIST_ENTRY *v7; // rsi
  __int128 *v8; // rax
  __int64 v9; // rdx
  __int128 v10; // xmm0
  unsigned __int16 v11; // ax
  __int64 v12; // rcx
  unsigned __int16 v13; // bx
  struct _KPRCB *v14; // rax
  struct _KPRCB *v15; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v17; // eax
  signed __int32 v18; // ett
  __int128 v20; // [rsp+20h] [rbp-20h]
  _SLIST_ENTRY *v21; // [rsp+30h] [rbp-10h]

  v20 = 0LL;
  v21 = 0LL;
  while ( 1 )
  {
    if ( (HvlpFlags & 8) != 0
      && (CurrentPrcb = KeGetCurrentPrcb(),
          v3 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList),
          (HypercallCachedPages = &v3->Next) != 0LL) )
    {
      Next = v3[1].Next;
      v6 = 1;
      v7 = v3;
      *((_QWORD *)&v20 + 1) = CurrentPrcb;
      v21 = v3;
    }
    else
    {
      BYTE8(v20) = KeDisableInterrupts();
      v6 = 4;
      v7 = v21;
      HIDWORD(v20) = 1;
      HypercallCachedPages = KeGetCurrentPrcb()->HypercallCachedPages;
      Next = (_SLIST_ENTRY *)HypercallCachedPages[2];
    }
    v8 = a1;
    v9 = 4LL;
    do
    {
      v10 = *v8;
      v8 += 8;
      *(_OWORD *)HypercallCachedPages = v10;
      HypercallCachedPages += 16;
      *((_OWORD *)HypercallCachedPages - 7) = *(v8 - 7);
      *((_OWORD *)HypercallCachedPages - 6) = *(v8 - 6);
      *((_OWORD *)HypercallCachedPages - 5) = *(v8 - 5);
      *((_OWORD *)HypercallCachedPages - 4) = *(v8 - 4);
      *((_OWORD *)HypercallCachedPages - 3) = *(v8 - 3);
      *((_OWORD *)HypercallCachedPages - 2) = *(v8 - 2);
      *((_OWORD *)HypercallCachedPages - 1) = *(v8 - 1);
      --v9;
    }
    while ( v9 );
    *(_OWORD *)HypercallCachedPages = *v8;
    HypercallCachedPages[2] = *((_QWORD *)v8 + 2);
    v11 = HvcallInitiateHypercall(156);
    v12 = 0LL;
    v13 = v11;
    if ( (v6 & 1) != 0 )
    {
      v7[1].Next = Next;
      RtlpInterlockedPushEntrySList((PSLIST_HEADER)(*((_QWORD *)&v20 + 1) + 35776LL), v7);
    }
    else
    {
      v14 = KeGetCurrentPrcb();
      if ( (BYTE12(v20) & 1) != 0 )
      {
        v12 = (__int64)v14->HypercallCachedPages;
      }
      else if ( (BYTE12(v20) & 2) != 0 )
      {
        v12 = (__int64)v14->HypercallCachedPages + 4096;
      }
      *(_QWORD *)(v12 + 16) = Next;
      if ( BYTE8(v20) )
      {
        v15 = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)v15->SchedulerAssist;
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
            KiRemoveSystemWorkPriorityKick((__int64)v15);
        }
        _enable();
      }
    }
    if ( !HvlpHvStatusIsInsufficientMemory(v13) )
      break;
    if ( (int)HvlpHandleInsufficientMemory(v13) < 0 )
      return 3221225626LL;
  }
  return HvlpHvToNtStatus(v13);
}
