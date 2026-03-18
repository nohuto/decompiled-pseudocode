/*
 * XREFs of KeInsertSchedulingGroup @ 0x1402F5D80
 * Callers:
 *     PspEstablishDfssHierarchy @ 0x140767CF0 (PspEstablishDfssHierarchy.c)
 *     PspSessionObjectCreate @ 0x14076C22C (PspSessionObjectCreate.c)
 *     PspEstablishJobHierarchy @ 0x1409040C0 (PspEstablishJobHierarchy.c)
 *     PspAddSchedulingGroupToJobChain @ 0x140A57628 (PspAddSchedulingGroupToJobChain.c)
 * Callees:
 *     ?KiInitializeScb@@YAXPEAU_KSCB@@PEAU_KSCHEDULING_GROUP@@1K@Z @ 0x1402F60D8 (-KiInitializeScb@@YAXPEAU_KSCB@@PEAU_KSCHEDULING_GROUP@@1K@Z.c)
 *     ?KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x1402F61B0 (-KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 *     ?KiAssignSchedulingGroupWeights@@YAXW4_KSCHEDULING_GROUP_TYPE@@EPEAU_KSCHEDULING_GROUP@@@Z @ 0x1402F6830 (-KiAssignSchedulingGroupWeights@@YAXW4_KSCHEDULING_GROUP_TYPE@@EPEAU_KSCHEDULING_GROUP@@@Z.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ?KiEnableGroupScheduling@@YAXXZ @ 0x1405C3060 (-KiEnableGroupScheduling@@YAXXZ.c)
 *     EtwTraceSchedulingGroup @ 0x140641F48 (EtwTraceSchedulingGroup.c)
 */

void __fastcall KeInsertSchedulingGroup(
        struct _KSCHEDULING_GROUP *a1,
        _KSCHEDULING_GROUP_POLICY a2,
        struct _KSCHEDULING_GROUP *a3)
{
  unsigned int v3; // r12d
  LARGE_INTEGER v7; // rdx
  $5408859869BA416A4CED72CE427A36E6 *v8; // rsi
  unsigned int v9; // ebp
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v11; // rax
  unsigned int v12; // r13d
  unsigned int v13; // r15d
  __int64 v14; // rbp
  char *v15; // rsi
  struct _LIST_ENTRY ***v16; // rdx
  struct _LIST_ENTRY **v17; // rax
  unsigned int ChildMinRate; // ecx
  struct _LIST_ENTRY *Flink; // rcx
  unsigned int ChildMinWeight; // ecx
  int Weight; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  struct _LIST_ENTRY *v23; // [rsp+80h] [rbp+8h]
  char AllFlags; // [rsp+8Ch] [rbp+14h]

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
  v12 = KeNumberProcessors_0;
  v13 = 0;
  v23 = 0LL;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    while ( 1 )
    {
      v14 = KiProcessorBlock[v13];
      v15 = (char *)a1 + 440 * v13;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 48), 0LL) )
      {
        do
        {
          if ( (++v3 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(Blink) )
          {
            HvlNotifyLongSpinWait(v3);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)(v14 + 48) );
      }
      Blink = (struct _LIST_ENTRY *)(v14 + 35464);
      v16 = *(struct _LIST_ENTRY ****)(v14 + 35472);
      v17 = (struct _LIST_ENTRY **)(v15 + 200);
      if ( *v16 != (struct _LIST_ENTRY **)(v14 + 35464) )
        break;
      *v17 = Blink;
      *((_QWORD *)v15 + 26) = v16;
      *v16 = v17;
      *(_QWORD *)(v14 + 35472) = v17;
      if ( (AllFlags & 4) != 0 )
      {
        *((_WORD *)v15 + 120) |= 0xCu;
        *((_DWORD *)v15 + 63) = 1;
      }
      v3 = 0;
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 48), 0LL);
      if ( *(_QWORD *)(v14 + 36416) )
      {
        if ( *(_BYTE *)(v14 + 209) == *(_BYTE *)(*(_QWORD *)(v14 + 36424) + 705LL) )
        {
          *((_WORD *)v15 + 120) |= 0x40u;
          Blink = (struct _LIST_ENTRY *)(v15 + 264);
          v23 = (struct _LIST_ENTRY *)(v15 + 264);
        }
        else
        {
          Blink = v23;
        }
        *((_QWORD *)v15 + 32) = Blink;
      }
      if ( ++v13 >= v12 )
        goto LABEL_21;
    }
LABEL_16:
    __fastfail(3u);
  }
LABEL_21:
  if ( (a1->Policy.AllFlags & 1) != 0 )
  {
    if ( a3 )
    {
      ChildMinRate = a3->ChildMinRate;
      if ( !ChildMinRate || (Weight = a2.Weight, a2.Weight < ChildMinRate) )
      {
        a3->ChildMinRate = a2.Weight;
        KiAssignSchedulingGroupWeights(
          1LL,
          0LL,
          a3,
          &KiSchedulingGroupList,
          LockHandle.LockQueue.Next,
          LockHandle.LockQueue.Lock,
          *(_QWORD *)&LockHandle.OldIrql);
LABEL_28:
        KiUpdateCpuTargetByRate(a1, 0);
        goto LABEL_29;
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
        goto LABEL_28;
      }
    }
    a1->RelativeWeight = (Weight << 7) / ChildMinRate;
    goto LABEL_28;
  }
  if ( a3 )
  {
    ChildMinWeight = a3->ChildMinWeight;
    if ( !ChildMinWeight || a2.Weight < ChildMinWeight )
      a3->ChildMinWeight = a2.Weight;
    a3->ChildTotalWeight += a2.Weight;
  }
  else
  {
    if ( !KiGroupSchedulingMinimumWeight || a2.Weight < (unsigned int)KiGroupSchedulingMinimumWeight )
      KiGroupSchedulingMinimumWeight = a2.Weight;
    KiGroupSchedulingTotalWeight += a2.Weight;
  }
  KiAssignSchedulingGroupWeights(
    0LL,
    0LL,
    a3,
    &KiSchedulingGroupList,
    LockHandle.LockQueue.Next,
    LockHandle.LockQueue.Lock,
    *(_QWORD *)&LockHandle.OldIrql);
LABEL_29:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( (WORD2(xmmword_140FC5B10) & 0x4000) != 0 )
    EtwTraceSchedulingGroup(a1, 1378LL);
}
