/*
 * XREFs of ?KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x1402F6B24
 * Callers:
 *     KeSetSchedulingGroupCpuRates @ 0x1402F5B44 (KeSetSchedulingGroupCpuRates.c)
 *     ?KiAssignSchedulingGroupWeights@@YAXW4_KSCHEDULING_GROUP_TYPE@@EPEAU_KSCHEDULING_GROUP@@@Z @ 0x1402F6830 (-KiAssignSchedulingGroupWeights@@YAXW4_KSCHEDULING_GROUP_TYPE@@EPEAU_KSCHEDULING_GROUP@@@Z.c)
 *     KeSetSchedulingGroupWeights @ 0x1402F68E8 (KeSetSchedulingGroupWeights.c)
 *     ?KiUpdateChildrenCpuTarget@@YAXPEAU_LIST_ENTRY@@E@Z @ 0x1405C3320 (-KiUpdateChildrenCpuTarget@@YAXPEAU_LIST_ENTRY@@E@Z.c)
 * Callees:
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402780C0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     ?KiResetScb@@YAXPEAU_KSCB@@PEAU_KPRCB@@@Z @ 0x1402F6460 (-KiResetScb@@YAXPEAU_KSCB@@PEAU_KPRCB@@@Z.c)
 *     ?KiCheckForEffectivePriorityChange@@YAXPEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@@Z @ 0x1402F6764 (-KiCheckForEffectivePriorityChange@@YAXPEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x14032DCE0 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     EtwTraceScbRankChange @ 0x1404F4C94 (EtwTraceScbRankChange.c)
 *     ?KiUpdateChildrenCpuTarget@@YAXPEAU_LIST_ENTRY@@E@Z @ 0x1405C3320 (-KiUpdateChildrenCpuTarget@@YAXPEAU_LIST_ENTRY@@E@Z.c)
 */

void __fastcall KiUpdateCpuTargetByWeight(struct _KSCHEDULING_GROUP *a1, unsigned __int8 a2)
{
  unsigned int Weight; // esi
  unsigned __int16 MaxRate; // bp
  unsigned __int64 MaxQuotaCycleTarget; // rdi
  unsigned __int64 v7; // r15
  unsigned int v8; // ebp
  __int16 v9; // r13
  struct _KPRCB *v10; // r14
  _KSCB *v11; // rsi
  unsigned __int16 PrcbLockFlags; // cx
  unsigned __int16 v13; // cx
  struct _LIST_ENTRY *p_ChildList; // rcx
  __int64 v15; // r9
  _KSCB *Parent; // rdi
  union _KISOLATION_UNIT_LOCK_HANDLE *v17; // rdx
  __int64 v18[11]; // [rsp+20h] [rbp-58h] BYREF
  bool v19; // [rsp+80h] [rbp+8h]
  char v20; // [rsp+88h] [rbp+10h]
  __int16 v21; // [rsp+90h] [rbp+18h]
  unsigned int v22; // [rsp+98h] [rbp+20h]

  Weight = a1->Policy.Weight;
  MaxRate = a1->Policy.MaxRate;
  v18[0] = 0LL;
  if ( a1->Parent )
  {
    KiAcquirePrcbLocksForIsolationUnit(KiProcessorBlock[0], 0LL, v18);
    Parent = a1->PerProcessor[0].Parent;
    v7 = Parent->MinQuotaCycleTarget * a1->Policy.Weight / a1->Parent->ChildTotalWeight;
    if ( (_WORD)Weight == MaxRate )
      MaxQuotaCycleTarget = Parent->MinQuotaCycleTarget * a1->Policy.Weight / a1->Parent->ChildTotalWeight;
    else
      MaxQuotaCycleTarget = Parent->MaxQuotaCycleTarget;
    KiReleasePrcbLocksForIsolationUnit(v18);
  }
  else
  {
    MaxQuotaCycleTarget = KiCyclesPerGeneration;
    v7 = KiCyclesPerGeneration * (unsigned __int64)Weight / (unsigned int)KiGroupSchedulingTotalWeight;
    if ( (_WORD)Weight == MaxRate )
      MaxQuotaCycleTarget = KiCyclesPerGeneration
                          * (unsigned __int64)Weight
                          / (unsigned int)KiGroupSchedulingTotalWeight;
  }
  v19 = MaxQuotaCycleTarget == KiCyclesPerGeneration;
  if ( v7 == KiCyclesPerGeneration )
    v21 = 32;
  else
    v21 = 0;
  v8 = 0;
  v22 = KeNumberProcessors_0;
  if ( KeMaximumProcessors )
  {
    v9 = 16 * (MaxQuotaCycleTarget == KiCyclesPerGeneration);
    do
    {
      v10 = (struct _KPRCB *)KiProcessorBlock[v8];
      v20 = 0;
      v11 = &a1->PerProcessor[v8];
      if ( v10 )
      {
        KiAcquirePrcbLocksForIsolationUnit(v10, 0LL, v18);
        if ( !v19 )
        {
          if ( v10->ClockOwner )
          {
            a1->MaxQuotaLimitCycles = MaxQuotaCycleTarget * v22;
            a1->MaxQuotaCyclesRemaining = MaxQuotaCycleTarget * v22;
          }
        }
      }
      PrcbLockFlags = v11->PrcbLockFlags;
      v11->MinQuotaCycleTarget = v7;
      v11->MaxQuotaCycleTarget = MaxQuotaCycleTarget;
      v13 = v21 | v9 & 0xFFDF | PrcbLockFlags & 0xFFCF;
      v11->PrcbLockFlags = v13;
      v11->PrcbLockFlags = v13 ^ (v13 ^ (16 * LOWORD(a1->Policy.AllFlags))) & 0x80;
      if ( v10 )
      {
        if ( a2 )
        {
          v11->LongTermCycles = 0LL;
          v11->OverQuotaHistory = 0LL;
          if ( (a1->Policy.AllFlags & 2) != 0 )
          {
            KiResetScb(&a1->PerProcessor[v8], v10);
            v20 = 1;
            KiCheckForEffectivePriorityChange(v10, v17, &a1->PerProcessor[v8]);
          }
        }
        KiReleasePrcbLocksForIsolationUnit(v18);
        if ( v20 && (WORD2(xmmword_140FC5B10) & 0x4000) != 0 )
        {
          LOBYTE(v15) = (*(_BYTE *)&v11->0 & 2) != 0;
          EtwTraceScbRankChange(a1, v8, v11->Rank, v15, v18[0]);
        }
      }
      ++v8;
    }
    while ( v8 < KeMaximumProcessors );
  }
  if ( a2 )
    a1->QueryHistoryTimeStamp = KeQueryPerformanceCounter(0LL).QuadPart;
  p_ChildList = &a1->ChildList;
  if ( p_ChildList->Flink != p_ChildList )
    KiUpdateChildrenCpuTarget(p_ChildList, a2);
}
