/*
 * XREFs of KeSetSchedulingGroupWeights @ 0x14045C2E8
 * Callers:
 *     PsSetCpuQuotaInformation @ 0x1405E247C (PsSetCpuQuotaInformation.c)
 *     NtSetInformationJobObject @ 0x140ACC7F0 (NtSetInformationJobObject.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ?KiAssignSchedulingGroupWeights@@YAXW4_KSCHEDULING_GROUP_TYPE@@EPEAU_KSCHEDULING_GROUP@@@Z @ 0x14045C524 (-KiAssignSchedulingGroupWeights@@YAXW4_KSCHEDULING_GROUP_TYPE@@EPEAU_KSCHEDULING_GROUP@@@Z.c)
 *     ?KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x14045C86C (-KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 *     EtwTraceSchedulingGroup @ 0x14064C518 (EtwTraceSchedulingGroup.c)
 */

void __fastcall KeSetSchedulingGroupWeights(unsigned int a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // r15
  struct _LIST_ENTRY *v6; // r14
  _QWORD *v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rbp
  int v10; // eax
  unsigned int v11; // edx
  __int64 v12; // rcx
  int v13; // r11d
  struct _LIST_ENTRY *v14; // r9
  struct _LIST_ENTRY *Flink; // r8
  int v16; // r10d
  unsigned int Blink_low; // eax
  _QWORD *v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // edx
  __int64 v21; // rcx
  struct _LIST_ENTRY *v22; // r10
  struct _LIST_ENTRY *v23; // r8
  int v24; // r9d
  int v25; // r11d
  unsigned int v26; // ebx
  __int64 v27; // rcx
  unsigned int v28; // esi
  struct _LIST_ENTRY *v29; // rbx
  struct _KSCHEDULING_GROUP *p_Blink; // rcx
  __int64 v31; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v3 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  v6 = &KiSchedulingGroupList;
  if ( (_DWORD)v3 )
  {
    v7 = a2;
    v8 = a3 - (_QWORD)a2;
    v9 = (unsigned int)v3;
    do
    {
      v10 = *(_DWORD *)(*v7 + 4LL);
      if ( (v10 & 1) != 0 )
      {
        v11 = 10000;
        *(_DWORD *)(*v7 + 4LL) = v10 & 0xFFFFFFFE;
        v12 = *(_QWORD *)(*v7 + 96LL);
        if ( v12 )
        {
          v13 = *(_DWORD *)(v12 + 12);
          v14 = (struct _LIST_ENTRY *)(v12 + 80);
        }
        else
        {
          v13 = KiGroupSchedulingMinimumRate;
          v14 = &KiSchedulingGroupList;
        }
        Flink = v14->Flink;
        v16 = 0;
        do
        {
          if ( (HIDWORD(Flink[-4].Blink) & 1) != 0 )
          {
            Blink_low = LOWORD(Flink[-4].Blink);
            if ( Blink_low == v13 )
              goto LABEL_22;
            if ( Blink_low < v11 )
              v11 = LOWORD(Flink[-4].Blink);
            ++v16;
          }
          Flink = Flink->Flink;
        }
        while ( Flink != v14 );
        if ( v16 )
        {
          if ( v12 )
            *(_DWORD *)(v12 + 12) = v11;
          else
            KiGroupSchedulingMinimumRate = v11;
        }
        else if ( v12 )
        {
          *(_DWORD *)(v12 + 12) = 0;
        }
        else
        {
          KiGroupSchedulingMinimumRate = 0;
        }
        KiAssignSchedulingGroupWeights(1LL, 0LL, *(_QWORD *)(*v7 + 96LL));
      }
LABEL_22:
      v18 = (_QWORD *)*v7;
      v19 = *(_QWORD *)((char *)v7++ + v8);
      *v18 = v19;
      --v9;
    }
    while ( v9 );
  }
  v20 = 9;
  v21 = *(_QWORD *)(*a2 + 96LL);
  v22 = (struct _LIST_ENTRY *)(v21 + 80);
  if ( !v21 )
    v22 = &KiSchedulingGroupList;
  v23 = v22->Flink;
  v24 = 0;
  v25 = 0;
  do
  {
    v26 = v20;
    if ( (HIDWORD(v23[-4].Blink) & 1) == 0 )
    {
      v20 = LOWORD(v23[-4].Blink);
      ++v25;
      v24 += v20;
      if ( v20 >= v26 )
        v20 = v26;
    }
    v23 = v23->Flink;
  }
  while ( v23 != v22 );
  if ( v25 )
  {
    if ( v21 )
    {
      *(_DWORD *)(v21 + 16) = v20;
      *(_DWORD *)(v21 + 20) = v24;
    }
    else
    {
      KiGroupSchedulingMinimumWeight = v20;
      KiGroupSchedulingTotalWeight = v24;
    }
  }
  else if ( v21 )
  {
    *(_DWORD *)(v21 + 16) = 0;
    *(_DWORD *)(v21 + 20) = 0;
  }
  else
  {
    KiGroupSchedulingMinimumWeight = 0;
    KiGroupSchedulingTotalWeight = 0;
  }
  v27 = *(_QWORD *)(*a2 + 96LL);
  if ( v27 )
  {
    if ( !*(_DWORD *)(v27 + 20) )
      goto LABEL_45;
    v28 = *(_DWORD *)(v27 + 16);
    v6 = (struct _LIST_ENTRY *)(v27 + 80);
    v29 = *(struct _LIST_ENTRY **)(v27 + 80);
  }
  else
  {
    if ( !KiGroupSchedulingTotalWeight )
      goto LABEL_45;
    v28 = KiGroupSchedulingMinimumWeight;
    v29 = KiSchedulingGroupList.Flink;
  }
  do
  {
    p_Blink = (struct _KSCHEDULING_GROUP *)&v29[-4].Blink;
    if ( (HIDWORD(v29[-4].Blink) & 1) == 0 )
    {
      p_Blink->RelativeWeight = (p_Blink->Policy.Weight << 7) / v28;
      KiUpdateCpuTargetByWeight(p_Blink, 1u);
    }
    v29 = v29->Flink;
  }
  while ( v29 != v6 );
LABEL_45:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( (WORD2(xmmword_140FC6B50) & 0x4000) != 0 && (_DWORD)v3 )
  {
    v31 = v3;
    do
    {
      EtwTraceSchedulingGroup(*a2++, 1380LL);
      --v31;
    }
    while ( v31 );
  }
}
