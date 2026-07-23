/*
 * XREFs of ?KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x14045CFB4
 * Callers:
 *     KeSetSchedulingGroupCpuRates @ 0x14045C5E8 (KeSetSchedulingGroupCpuRates.c)
 *     KeInsertSchedulingGroup @ 0x14045CB04 (KeInsertSchedulingGroup.c)
 *     ?KiUpdateChildrenCpuTarget@@YAXPEAU_LIST_ENTRY@@E@Z @ 0x1405C4DF0 (-KiUpdateChildrenCpuTarget@@YAXPEAU_LIST_ENTRY@@E@Z.c)
 *     KeUpdateGroupSchedulingConstants @ 0x1405C5034 (KeUpdateGroupSchedulingConstants.c)
 * Callees:
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x1402A2D90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140318810 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     ?KiResetScb@@YAXPEAU_KSCB@@PEAU_KPRCB@@@Z @ 0x14045D264 (-KiResetScb@@YAXPEAU_KSCB@@PEAU_KPRCB@@@Z.c)
 *     ?KiCheckForEffectivePriorityChange@@YAXPEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@@Z @ 0x14045D564 (-KiCheckForEffectivePriorityChange@@YAXPEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@.c)
 *     EtwTraceScbRankChange @ 0x1404F4E74 (EtwTraceScbRankChange.c)
 *     ?KiUpdateChildrenCpuTarget@@YAXPEAU_LIST_ENTRY@@E@Z @ 0x1405C4DF0 (-KiUpdateChildrenCpuTarget@@YAXPEAU_LIST_ENTRY@@E@Z.c)
 */

void __fastcall KiUpdateCpuTargetByRate(struct _KSCHEDULING_GROUP *a1, unsigned __int8 a2)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rdi
  unsigned int v6; // r14d
  __int16 v7; // r13
  struct _KPRCB *v8; // r15
  _KSCB *v9; // rsi
  unsigned __int16 PrcbLockFlags; // cx
  unsigned __int16 v11; // cx
  struct _LIST_ENTRY *p_ChildList; // rcx
  union _KISOLATION_UNIT_LOCK_HANDLE *v13; // rdx
  __int64 v14; // r9
  _KSCB *Parent; // r9
  __int64 v16[11]; // [rsp+20h] [rbp-58h] BYREF
  bool v17; // [rsp+80h] [rbp+8h]
  char v18; // [rsp+88h] [rbp+10h]
  __int16 v19; // [rsp+90h] [rbp+18h]
  unsigned int v20; // [rsp+98h] [rbp+20h]

  v16[0] = 0LL;
  if ( a1->Parent )
  {
    KiAcquirePrcbLocksForIsolationUnit(KiProcessorBlock[0], 0LL, (unsigned __int64 *)v16);
    Parent = a1->PerProcessor[0].Parent;
    v4 = Parent->MinQuotaCycleTarget * a1->Policy.Weight / 0x2710;
    v5 = Parent->MaxQuotaCycleTarget * a1->Policy.MaxRate / 0x2710;
    KiReleasePrcbLocksForIsolationUnit(v16);
  }
  else
  {
    v4 = KiCyclesPerGeneration * (unsigned __int64)a1->Policy.Weight / 0x2710;
    v5 = KiCyclesPerGeneration * (unsigned __int64)a1->Policy.MaxRate / 0x2710;
  }
  v17 = v5 == KiCyclesPerGeneration;
  if ( v4 == KiCyclesPerGeneration )
    v19 = 32;
  else
    v19 = 0;
  v6 = 0;
  v20 = KeNumberProcessors_0;
  if ( KeMaximumProcessors )
  {
    v7 = 16 * (v5 == KiCyclesPerGeneration);
    do
    {
      v8 = (struct _KPRCB *)KiProcessorBlock[v6];
      v18 = 0;
      v9 = &a1->PerProcessor[v6];
      if ( v8 )
      {
        KiAcquirePrcbLocksForIsolationUnit((__int64)v8, 0LL, (unsigned __int64 *)v16);
        if ( !v17 )
        {
          if ( v8->ClockOwner )
          {
            a1->MaxQuotaLimitCycles = v5 * v20;
            a1->MaxQuotaCyclesRemaining = v5 * v20;
          }
        }
      }
      PrcbLockFlags = v9->PrcbLockFlags;
      v9->MinQuotaCycleTarget = v4;
      v9->MaxQuotaCycleTarget = v5;
      v11 = v19 | v7 & 0xFFDF | PrcbLockFlags & 0xFFCF;
      v9->PrcbLockFlags = v11;
      v9->PrcbLockFlags = v11 ^ (v11 ^ (16 * LOWORD(a1->Policy.AllFlags))) & 0x80;
      if ( v8 )
      {
        if ( a2 )
        {
          v9->LongTermCycles = 0LL;
          v9->OverQuotaHistory = 0LL;
          if ( (a1->Policy.AllFlags & 2) != 0 )
          {
            KiResetScb(&a1->PerProcessor[v6], v8);
            v18 = 1;
            KiCheckForEffectivePriorityChange(v8, v13, &a1->PerProcessor[v6]);
          }
        }
        KiReleasePrcbLocksForIsolationUnit(v16);
        v14 = 0LL;
        if ( v18 && (WORD2(xmmword_140FC6B50) & 0x4000) != 0 )
        {
          LOBYTE(v14) = (*(_BYTE *)&v9->0 & 2) != 0;
          EtwTraceScbRankChange(a1, v6, v9->Rank, v14);
        }
      }
      ++v6;
    }
    while ( v6 < KeMaximumProcessors );
  }
  if ( a2 )
    a1->QueryHistoryTimeStamp = KeQueryPerformanceCounter(0LL).QuadPart;
  p_ChildList = &a1->ChildList;
  if ( p_ChildList->Flink != p_ChildList )
    KiUpdateChildrenCpuTarget(p_ChildList, a2);
}
