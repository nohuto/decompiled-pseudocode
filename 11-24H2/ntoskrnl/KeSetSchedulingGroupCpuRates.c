/*
 * XREFs of KeSetSchedulingGroupCpuRates @ 0x14045C5E8
 * Callers:
 *     NtSetInformationJobObject @ 0x140ACC7F0 (NtSetInformationJobObject.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ?KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x14045C86C (-KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 *     ?KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x14045CFB4 (-KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 *     EtwTraceSchedulingGroup @ 0x14064C518 (EtwTraceSchedulingGroup.c)
 */

void __fastcall KeSetSchedulingGroupCpuRates(__int64 a1, struct _KSCHEDULING_GROUP **a2, _KSCHEDULING_GROUP_POLICY *a3)
{
  struct _LIST_ENTRY *v5; // r14
  unsigned int AllFlags; // eax
  unsigned int Blink_low; // edx
  _KSCHEDULING_GROUP *Parent; // rcx
  struct _LIST_ENTRY *p_ChildList; // r9
  struct _LIST_ENTRY *Flink; // r8
  int v11; // r10d
  int v12; // r11d
  unsigned int v13; // ebx
  _KSCHEDULING_GROUP *v14; // rcx
  unsigned int v15; // ecx
  _KSCHEDULING_GROUP *v16; // rdx
  struct _LIST_ENTRY *v17; // r9
  struct _LIST_ENTRY *v18; // r8
  int v19; // r10d
  unsigned int v20; // r11d
  _KSCHEDULING_GROUP *v21; // rcx
  unsigned int ChildMinRate; // r8d
  struct _LIST_ENTRY *v23; // rcx
  unsigned int ChildMinWeight; // ebp
  struct _LIST_ENTRY *v25; // rsi
  struct _LIST_ENTRY *v26; // rbx
  struct _KSCHEDULING_GROUP *p_Blink; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  v5 = &KiSchedulingGroupList;
  AllFlags = (*a2)->Policy.AllFlags;
  if ( (AllFlags & 1) == 0 )
  {
    Blink_low = 9;
    (*a2)->Policy.AllFlags = AllFlags | 1;
    Parent = (*a2)->Parent;
    p_ChildList = &Parent->ChildList;
    if ( !Parent )
      p_ChildList = &KiSchedulingGroupList;
    Flink = p_ChildList->Flink;
    v11 = 0;
    v12 = 0;
    do
    {
      v13 = Blink_low;
      if ( (HIDWORD(Flink[-4].Blink) & 1) == 0 )
      {
        Blink_low = LOWORD(Flink[-4].Blink);
        ++v12;
        v11 += Blink_low;
        if ( Blink_low >= v13 )
          Blink_low = v13;
      }
      Flink = Flink->Flink;
    }
    while ( Flink != p_ChildList );
    if ( v12 )
    {
      if ( Parent )
      {
        Parent->ChildMinWeight = Blink_low;
        Parent->ChildTotalWeight = v11;
      }
      else
      {
        KiGroupSchedulingMinimumWeight = Blink_low;
        KiGroupSchedulingTotalWeight = v11;
      }
    }
    else if ( Parent )
    {
      Parent->ChildMinWeight = 0;
      Parent->ChildTotalWeight = 0;
    }
    else
    {
      KiGroupSchedulingMinimumWeight = 0;
      KiGroupSchedulingTotalWeight = 0;
    }
    v14 = (*a2)->Parent;
    if ( v14 )
    {
      if ( !v14->ChildTotalWeight )
        goto LABEL_12;
      ChildMinWeight = v14->ChildMinWeight;
      v25 = &v14->ChildList;
      v26 = v14->ChildList.Flink;
    }
    else
    {
      if ( !KiGroupSchedulingTotalWeight )
        goto LABEL_12;
      ChildMinWeight = KiGroupSchedulingMinimumWeight;
      v25 = &KiSchedulingGroupList;
      v26 = KiSchedulingGroupList.Flink;
    }
    do
    {
      p_Blink = (struct _KSCHEDULING_GROUP *)&v26[-4].Blink;
      if ( (HIDWORD(v26[-4].Blink) & 1) == 0 )
      {
        p_Blink->RelativeWeight = (p_Blink->Policy.Weight << 7) / ChildMinWeight;
        KiUpdateCpuTargetByWeight(p_Blink, 0);
      }
      v26 = v26->Flink;
    }
    while ( v26 != v25 );
  }
LABEL_12:
  (*a2)->Policy = *a3;
  KiUpdateCpuTargetByRate(*a2, 1u);
  v15 = 10000;
  v16 = (*a2)->Parent;
  v17 = &v16->ChildList;
  if ( !v16 )
    v17 = &KiSchedulingGroupList;
  v18 = v17->Flink;
  v19 = 0;
  do
  {
    v20 = v15;
    if ( (HIDWORD(v18[-4].Blink) & 1) != 0 )
    {
      v15 = LOWORD(v18[-4].Blink);
      ++v19;
      if ( v15 >= v20 )
        v15 = v20;
    }
    v18 = v18->Flink;
  }
  while ( v18 != v17 );
  if ( v19 )
  {
    if ( v16 )
      v16->ChildMinRate = v15;
    else
      KiGroupSchedulingMinimumRate = v15;
  }
  else if ( v16 )
  {
    v16->ChildMinRate = 0;
  }
  else
  {
    KiGroupSchedulingMinimumRate = 0;
  }
  v21 = (*a2)->Parent;
  if ( v21 )
  {
    ChildMinRate = v21->ChildMinRate;
    v5 = &v21->ChildList;
    v23 = v21->ChildList.Flink;
  }
  else
  {
    ChildMinRate = KiGroupSchedulingMinimumRate;
    v23 = KiSchedulingGroupList.Flink;
  }
  do
  {
    if ( (HIDWORD(v23[-4].Blink) & 1) != 0 )
      LODWORD(v23[-3].Flink) = (LOWORD(v23[-4].Blink) << 7) / ChildMinRate;
    v23 = v23->Flink;
  }
  while ( v23 != v5 );
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( (WORD2(xmmword_140FC6B50) & 0x4000) != 0 )
    EtwTraceSchedulingGroup(*a2, 1380LL);
}
