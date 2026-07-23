/*
 * XREFs of KeRemoveSchedulingGroup @ 0x14049F368
 * Callers:
 *     PspEstablishDfssHierarchy @ 0x140777990 (PspEstablishDfssHierarchy.c)
 *     PsSessionObjectDelete @ 0x14077B8F0 (PsSessionObjectDelete.c)
 *     PspEstablishJobHierarchy @ 0x14091B360 (PspEstablishJobHierarchy.c)
 *     PspRemoveCpuRateControl @ 0x1409777A4 (PspRemoveCpuRateControl.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ?KiAssignSchedulingGroupWeights@@YAXW4_KSCHEDULING_GROUP_TYPE@@EPEAU_KSCHEDULING_GROUP@@@Z @ 0x14045C524 (-KiAssignSchedulingGroupWeights@@YAXW4_KSCHEDULING_GROUP_TYPE@@EPEAU_KSCHEDULING_GROUP@@@Z.c)
 *     ?KiUpdateMinimumWeight@@YAEW4_KSCHEDULING_GROUP_TYPE@@EPEAU_KSCHEDULING_GROUP@@@Z @ 0x14049B218 (-KiUpdateMinimumWeight@@YAEW4_KSCHEDULING_GROUP_TYPE@@EPEAU_KSCHEDULING_GROUP@@@Z.c)
 *     ?KiFlushScbReferences@@YAXPEAU_KPRCB@@PEAU_KSCB@@@Z @ 0x1405C4C04 (-KiFlushScbReferences@@YAXPEAU_KPRCB@@PEAU_KSCB@@@Z.c)
 *     EtwTraceSchedulingGroup @ 0x14064C518 (EtwTraceSchedulingGroup.c)
 */

__int64 __fastcall KeRemoveSchedulingGroup(unsigned __int16 *a1)
{
  __int64 v2; // rdx
  unsigned __int16 **v3; // rcx
  struct _KPRCB **v4; // r15
  __int64 v5; // r13
  __int64 v6; // r14
  char v7; // bp
  __int64 v8; // rdi
  __int64 v9; // r12
  __int64 v10; // rbp
  __int64 v11; // r13
  unsigned int v12; // ebx
  unsigned __int16 *v13; // rax
  __int64 v14; // rdx
  unsigned __int16 **v15; // rcx
  char v16; // r8
  __int64 v17; // r9
  int v18; // ebx
  struct _LIST_ENTRY *v19; // r8
  __int64 v20; // r8
  int v22; // eax
  struct _KSCB *v23; // rbx
  __int64 v24; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  char v26; // [rsp+80h] [rbp+8h]
  __int64 v27; // [rsp+88h] [rbp+10h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  v2 = *((_QWORD *)a1 + 7);
  v3 = (unsigned __int16 **)*((_QWORD *)a1 + 8);
  if ( *(unsigned __int16 **)(v2 + 8) != a1 + 28 || *v3 != a1 + 28 )
LABEL_12:
    __fastfail(3u);
  *v3 = (unsigned __int16 *)v2;
  v4 = (struct _KPRCB **)KiProcessorBlock;
  v5 = 0LL;
  *(_QWORD *)(v2 + 8) = v3;
  v6 = (unsigned int)KeNumberProcessors_0;
  v7 = 0;
  v8 = *((_QWORD *)a1 + 12);
  v9 = 0LL;
  v27 = 0LL;
  v26 = 0;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    do
    {
      v10 = KiProcessorBlock[v9];
      v11 = 220LL * (unsigned int)v9;
      v12 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 48), 0LL) )
      {
        do
        {
          if ( (++v12 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v12);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)(v10 + 48) );
      }
      v13 = &a1[v11 + 100];
      v4 = (struct _KPRCB **)KiProcessorBlock;
      v14 = *(_QWORD *)v13;
      v15 = (unsigned __int16 **)*((_QWORD *)v13 + 1);
      if ( *(unsigned __int16 **)(*(_QWORD *)v13 + 8LL) != v13 || *v15 != v13 )
        goto LABEL_12;
      *v15 = (unsigned __int16 *)v14;
      *(_QWORD *)(v14 + 8) = v15;
      v16 = v26;
      if ( (a1[v11 + 120] & 0x100) != 0 )
        v16 = 1;
      v26 = v16;
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 48), 0LL);
      v9 = (unsigned int)(v9 + 1);
      v17 = *(_QWORD *)&a1[v11 + 92] + v27;
      v27 = v17;
    }
    while ( (unsigned int)v9 < (unsigned int)v6 );
    v7 = v16;
    v5 = v17;
  }
  v18 = *((_DWORD *)a1 + 1) & 1;
  if ( !v18 )
  {
    v22 = *a1;
    if ( !v8 )
    {
      KiGroupSchedulingTotalWeight -= v22;
      goto LABEL_19;
    }
    *(_DWORD *)(v8 + 20) -= v22;
LABEL_34:
    if ( *(_QWORD *)(v8 + 80) == v8 + 80 )
    {
      *(_DWORD *)(v8 + 16) = 0;
      *(_DWORD *)(v8 + 12) = 0;
      goto LABEL_25;
    }
    v19 = (struct _LIST_ENTRY *)v8;
    goto LABEL_21;
  }
  if ( v8 )
    goto LABEL_34;
LABEL_19:
  if ( KiSchedulingGroupList.Flink == &KiSchedulingGroupList )
  {
    KiGroupSchedulingMinimumWeight = 0;
    KiGroupSchedulingMinimumRate = 0;
    goto LABEL_25;
  }
  v19 = 0LL;
LABEL_21:
  if ( KiUpdateMinimumWeight(v18, 0, v19) || !v18 )
    KiAssignSchedulingGroupWeights(v18, 0, v20);
LABEL_25:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v7 && (_DWORD)v6 )
  {
    v23 = (struct _KSCB *)(a1 + 64);
    v24 = v6;
    do
    {
      KiFlushScbReferences(*v4++, v23++);
      --v24;
    }
    while ( v24 );
  }
  if ( (WORD2(xmmword_140FC6B50) & 0x4000) != 0 )
    EtwTraceSchedulingGroup(a1, 1379LL);
  return v5;
}
