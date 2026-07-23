/*
 * XREFs of KeInsertSchedulingGroup @ 0x14045CB04
 * Callers:
 *     PspEstablishDfssHierarchy @ 0x140777990 (PspEstablishDfssHierarchy.c)
 *     PspSessionObjectCreate @ 0x14077BC7C (PspSessionObjectCreate.c)
 *     PspEstablishJobHierarchy @ 0x14091B360 (PspEstablishJobHierarchy.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1409774CC (PspAddSchedulingGroupToJobChain.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     ?KiAssignSchedulingGroupWeights@@YAXW4_KSCHEDULING_GROUP_TYPE@@EPEAU_KSCHEDULING_GROUP@@@Z @ 0x14045C524 (-KiAssignSchedulingGroupWeights@@YAXW4_KSCHEDULING_GROUP_TYPE@@EPEAU_KSCHEDULING_GROUP@@@Z.c)
 *     ?KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x14045C86C (-KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 *     ?KiInitializeScb@@YAXPEAU_KSCB@@PEAU_KSCHEDULING_GROUP@@1K@Z @ 0x14045CEDC (-KiInitializeScb@@YAXPEAU_KSCB@@PEAU_KSCHEDULING_GROUP@@1K@Z.c)
 *     ?KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x14045CFB4 (-KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 *     ?KiEnableGroupScheduling@@YAXXZ @ 0x1405C4B30 (-KiEnableGroupScheduling@@YAXXZ.c)
 *     EtwTraceSchedulingGroup @ 0x14064C518 (EtwTraceSchedulingGroup.c)
 */

void __fastcall KeInsertSchedulingGroup(
        struct _KSCHEDULING_GROUP *a1,
        _KSCHEDULING_GROUP_POLICY a2,
        struct _KSCHEDULING_GROUP *a3)
{
  unsigned int v3; // r13d
  LARGE_INTEGER v7; // rdx
  $8E9CF67B5D0B21416A2F2FBA3CE2F883 *v8; // rsi
  unsigned int v9; // ebp
  struct _LIST_ENTRY *p_ChildList; // r15
  struct _LIST_ENTRY *v11; // rax
  unsigned int v12; // r12d
  __int64 v13; // rbp
  char *v14; // rsi
  _QWORD *v15; // rdx
  _QWORD *v16; // rax
  struct _LIST_ENTRY *Blink; // rcx
  unsigned int ChildMinRate; // ecx
  struct _LIST_ENTRY *Flink; // rcx
  char *v20; // rcx
  int Weight; // eax
  unsigned int v22; // esi
  struct _LIST_ENTRY *v23; // rbx
  struct _KSCHEDULING_GROUP *p_Blink; // rcx
  unsigned int ChildMinWeight; // ecx
  bool v26; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v28; // [rsp+80h] [rbp+8h]
  char AllFlags; // [rsp+8Ch] [rbp+14h]
  char *v30; // [rsp+90h] [rbp+18h]

  AllFlags = a2.AllFlags;
  v3 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !KiGroupSchedulingEnabled )
    KiEnableGroupScheduling();
  a1->Policy = a2;
  a1->NotificationCycles = 0LL;
  *(_QWORD *)&a1->ChildMinRate = 0LL;
  a1->ChildTotalWeight = 0;
  a1->QueryHistoryTimeStamp = KeQueryPerformanceCounter(0LL).QuadPart;
  v8 = &a1->56;
  v9 = 0;
  a1->ChildList.Blink = &a1->ChildList;
  a1->ChildList.Flink = &a1->ChildList;
  a1->SchedulingGroupList.Blink = &a1->SchedulingGroupList;
  a1->SchedulingGroupList.Flink = &a1->SchedulingGroupList;
  a1->Parent = 0LL;
  a1->MaxQuotaLimitCycles = 0LL;
  for ( a1->MaxQuotaCyclesRemaining = 0LL; v9 < KeMaximumProcessors; ++v9 )
    KiInitializeScb(&a1->PerProcessor[v9], (struct _KSCHEDULING_GROUP *)v7.QuadPart, a3, v9);
  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  p_ChildList = &KiSchedulingGroupList;
  if ( a3 )
  {
    a1->Parent = a3;
    Blink = a3->ChildList.Blink;
    if ( Blink->Flink != &a3->ChildList )
      goto LABEL_16;
    v8->SchedulingGroupList.Flink = &a3->ChildList;
    a1->SchedulingGroupList.Blink = Blink;
    Blink->Flink = &v8->SchedulingGroupList;
    a3->ChildList.Blink = &v8->SchedulingGroupList;
  }
  else
  {
    v11 = KiSchedulingGroupList.Blink;
    if ( KiSchedulingGroupList.Blink->Flink != &KiSchedulingGroupList )
      goto LABEL_16;
    v8->SchedulingGroupList.Flink = &KiSchedulingGroupList;
    a1->SchedulingGroupList.Blink = v11;
    v11->Flink = &v8->SchedulingGroupList;
    KiSchedulingGroupList.Blink = &a1->SchedulingGroupList;
  }
  v12 = 0;
  v28 = KeNumberProcessors_0;
  v30 = 0LL;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    while ( 1 )
    {
      v13 = KiProcessorBlock[v12];
      v14 = (char *)a1 + 440 * v12;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 48), 0LL) )
      {
        do
        {
          if ( (++v3 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v3);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)(v13 + 48) );
      }
      v15 = *(_QWORD **)(v13 + 35472);
      v16 = v14 + 200;
      if ( *v15 != v13 + 35464 )
        break;
      *v16 = v13 + 35464;
      *((_QWORD *)v14 + 26) = v15;
      *v15 = v16;
      *(_QWORD *)(v13 + 35472) = v16;
      if ( (AllFlags & 4) != 0 )
      {
        *((_WORD *)v14 + 120) |= 0xCu;
        *((_DWORD *)v14 + 63) = 1;
      }
      v3 = 0;
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 48), 0LL);
      if ( *(_QWORD *)(v13 + 36416) )
      {
        if ( *(_BYTE *)(v13 + 209) == *(_BYTE *)(*(_QWORD *)(v13 + 36424) + 705LL) )
        {
          *((_WORD *)v14 + 120) |= 0x40u;
          v20 = v14 + 264;
          v30 = v14 + 264;
        }
        else
        {
          v20 = v30;
        }
        *((_QWORD *)v14 + 32) = v20;
      }
      if ( ++v12 >= v28 )
        goto LABEL_23;
    }
LABEL_16:
    __fastfail(3u);
  }
LABEL_23:
  if ( (a1->Policy.AllFlags & 1) != 0 )
  {
    if ( a3 )
    {
      ChildMinRate = a3->ChildMinRate;
      if ( !ChildMinRate || (Weight = a2.Weight, a2.Weight < ChildMinRate) )
      {
        a3->ChildMinRate = a2.Weight;
        KiAssignSchedulingGroupWeights(1, 0, (__int64)a3);
        goto LABEL_38;
      }
    }
    else
    {
      ChildMinRate = KiGroupSchedulingMinimumRate;
      if ( !KiGroupSchedulingMinimumRate || (Weight = a2.Weight, a2.Weight < (unsigned int)KiGroupSchedulingMinimumRate) )
      {
        Flink = KiSchedulingGroupList.Flink;
        KiGroupSchedulingMinimumRate = a2.Weight;
        do
        {
          if ( (HIDWORD(Flink[-4].Blink) & 1) != 0 )
            LODWORD(Flink[-3].Flink) = (LOWORD(Flink[-4].Blink) << 7) / (unsigned int)a2.Weight;
          Flink = Flink->Flink;
        }
        while ( Flink != &KiSchedulingGroupList );
        goto LABEL_38;
      }
    }
    a1->RelativeWeight = (Weight << 7) / ChildMinRate;
LABEL_38:
    KiUpdateCpuTargetByRate(a1, 0);
    goto LABEL_39;
  }
  if ( a3 )
  {
    ChildMinWeight = a3->ChildMinWeight;
    if ( !ChildMinWeight || a2.Weight < ChildMinWeight )
      a3->ChildMinWeight = a2.Weight;
    v26 = a2.Weight + a3->ChildTotalWeight == 0;
    a3->ChildTotalWeight += a2.Weight;
    if ( !v26 )
    {
      v22 = a3->ChildMinWeight;
      p_ChildList = &a3->ChildList;
      v23 = a3->ChildList.Flink;
      do
      {
LABEL_49:
        p_Blink = (struct _KSCHEDULING_GROUP *)&v23[-4].Blink;
        if ( (HIDWORD(v23[-4].Blink) & 1) == 0 )
        {
          p_Blink->RelativeWeight = (p_Blink->Policy.Weight << 7) / v22;
          KiUpdateCpuTargetByWeight(p_Blink, 0);
        }
        v23 = v23->Flink;
      }
      while ( v23 != p_ChildList );
    }
  }
  else
  {
    v22 = KiGroupSchedulingMinimumWeight;
    if ( !KiGroupSchedulingMinimumWeight || a2.Weight < (unsigned int)KiGroupSchedulingMinimumWeight )
    {
      v22 = a2.Weight;
      KiGroupSchedulingMinimumWeight = a2.Weight;
    }
    KiGroupSchedulingTotalWeight += a2.Weight;
    if ( KiGroupSchedulingTotalWeight )
    {
      v23 = KiSchedulingGroupList.Flink;
      goto LABEL_49;
    }
  }
LABEL_39:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( (WORD2(xmmword_140FC6B50) & 0x4000) != 0 )
    EtwTraceSchedulingGroup(a1, 1378LL);
}
