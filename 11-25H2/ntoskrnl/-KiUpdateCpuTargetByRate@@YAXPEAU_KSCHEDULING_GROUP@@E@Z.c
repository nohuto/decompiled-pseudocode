/*
 * XREFs of ?KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x1402F61B0
 * Callers:
 *     KeSetSchedulingGroupCpuRates @ 0x1402F5B44 (KeSetSchedulingGroupCpuRates.c)
 *     KeInsertSchedulingGroup @ 0x1402F5D80 (KeInsertSchedulingGroup.c)
 *     ?KiUpdateChildrenCpuTarget@@YAXPEAU_LIST_ENTRY@@E@Z @ 0x1405C3320 (-KiUpdateChildrenCpuTarget@@YAXPEAU_LIST_ENTRY@@E@Z.c)
 *     KeUpdateGroupSchedulingConstants @ 0x1405C3564 (KeUpdateGroupSchedulingConstants.c)
 * Callees:
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402780C0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     ?KiResetScb@@YAXPEAU_KSCB@@PEAU_KPRCB@@@Z @ 0x1402F6460 (-KiResetScb@@YAXPEAU_KSCB@@PEAU_KPRCB@@@Z.c)
 *     ?KiCheckForEffectivePriorityChange@@YAXPEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@@Z @ 0x1402F6764 (-KiCheckForEffectivePriorityChange@@YAXPEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x14032DCE0 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     EtwTraceScbRankChange @ 0x1404F4C94 (EtwTraceScbRankChange.c)
 *     ?KiUpdateChildrenCpuTarget@@YAXPEAU_LIST_ENTRY@@E@Z @ 0x1405C3320 (-KiUpdateChildrenCpuTarget@@YAXPEAU_LIST_ENTRY@@E@Z.c)
 */

void __fastcall KiUpdateCpuTargetByRate(struct _KSCHEDULING_GROUP *a1, unsigned __int8 a2)
{
  _KSCB *Parent; // r9
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rdi
  unsigned int v7; // r14d
  __int16 v8; // r13
  struct _KPRCB *v9; // r15
  _KSCB *v10; // rsi
  unsigned __int16 PrcbLockFlags; // cx
  unsigned __int16 v12; // cx
  struct _LIST_ENTRY *p_ChildList; // rcx
  union _KISOLATION_UNIT_LOCK_HANDLE *v14; // rdx
  __int64 v15; // r9
  __int64 v16[11]; // [rsp+20h] [rbp-58h] BYREF
  bool v17; // [rsp+80h] [rbp+8h]
  char v18; // [rsp+88h] [rbp+10h]
  __int16 v19; // [rsp+90h] [rbp+18h]
  unsigned int v20; // [rsp+98h] [rbp+20h]

  v16[0] = 0LL;
  if ( a1->Parent )
  {
    KiAcquirePrcbLocksForIsolationUnit(KiProcessorBlock[0], 0LL, v16);
    Parent = a1->PerProcessor[0].Parent;
    v5 = Parent->MinQuotaCycleTarget * a1->Policy.Weight / 0x2710;
    v6 = Parent->MaxQuotaCycleTarget * a1->Policy.MaxRate / 0x2710;
    KiReleasePrcbLocksForIsolationUnit(v16);
  }
  else
  {
    v5 = KiCyclesPerGeneration * (unsigned __int64)a1->Policy.Weight / 0x2710;
    v6 = KiCyclesPerGeneration * (unsigned __int64)a1->Policy.MaxRate / 0x2710;
  }
  v17 = v6 == KiCyclesPerGeneration;
  if ( v5 == KiCyclesPerGeneration )
    v19 = 32;
  else
    v19 = 0;
  v7 = 0;
  v20 = KeNumberProcessors_0;
  if ( KeMaximumProcessors )
  {
    v8 = 16 * (v6 == KiCyclesPerGeneration);
    do
    {
      v9 = (struct _KPRCB *)KiProcessorBlock[v7];
      v18 = 0;
      v10 = &a1->PerProcessor[v7];
      if ( v9 )
      {
        KiAcquirePrcbLocksForIsolationUnit(v9, 0LL, v16);
        if ( !v17 )
        {
          if ( v9->ClockOwner )
          {
            a1->MaxQuotaLimitCycles = v6 * v20;
            a1->MaxQuotaCyclesRemaining = v6 * v20;
          }
        }
      }
      PrcbLockFlags = v10->PrcbLockFlags;
      v10->MinQuotaCycleTarget = v5;
      v10->MaxQuotaCycleTarget = v6;
      v12 = v19 | v8 & 0xFFDF | PrcbLockFlags & 0xFFCF;
      v10->PrcbLockFlags = v12;
      v10->PrcbLockFlags = v12 ^ (v12 ^ (16 * LOWORD(a1->Policy.AllFlags))) & 0x80;
      if ( v9 )
      {
        if ( a2 )
        {
          v10->LongTermCycles = 0LL;
          v10->OverQuotaHistory = 0LL;
          if ( (a1->Policy.AllFlags & 2) != 0 )
          {
            KiResetScb(&a1->PerProcessor[v7], v9);
            v18 = 1;
            KiCheckForEffectivePriorityChange(v9, v14, &a1->PerProcessor[v7]);
          }
        }
        KiReleasePrcbLocksForIsolationUnit(v16);
        v15 = 0LL;
        if ( v18 && (WORD2(xmmword_140FC5B10) & 0x4000) != 0 )
        {
          LOBYTE(v15) = (*(_BYTE *)&v10->0 & 2) != 0;
          EtwTraceScbRankChange(a1, v7, v10->Rank, v15, v16[0]);
        }
      }
      ++v7;
    }
    while ( v7 < KeMaximumProcessors );
  }
  if ( a2 )
    a1->QueryHistoryTimeStamp = KeQueryPerformanceCounter(0LL).QuadPart;
  p_ChildList = &a1->ChildList;
  if ( p_ChildList->Flink != p_ChildList )
    KiUpdateChildrenCpuTarget(p_ChildList, a2);
}
