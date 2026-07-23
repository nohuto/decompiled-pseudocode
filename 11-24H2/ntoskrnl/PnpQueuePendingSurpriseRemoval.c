/*
 * XREFs of PnpQueuePendingSurpriseRemoval @ 0x1409BCDB8
 * Callers:
 *     PiEventRemovalPostSurpriseRemove @ 0x1409BC778 (PiEventRemovalPostSurpriseRemove.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     IopMergeRelationLists @ 0x140731730 (IopMergeRelationLists.c)
 *     IopFreeRelationList @ 0x1409BAF04 (IopFreeRelationList.c)
 *     IopAllocateRelationList @ 0x1409BBBBC (IopAllocateRelationList.c)
 *     IopCheckIfMergeRequired @ 0x1409BCFC0 (IopCheckIfMergeRequired.c)
 *     IopIsDescendantNode @ 0x1409BD468 (IopIsDescendantNode.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1409BD598 (PnpAcquireDependencyRelationsLock.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1409BDC24 (PnpReleaseDependencyRelationsLock.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PnpQueuePendingSurpriseRemoval(PVOID a1, void ***a2, int a3, int a4)
{
  void **v4; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 Pool2; // rbx
  unsigned int **v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  PVOID *v15; // r14
  __int64 *v16; // rax
  PVOID *v17; // rsi
  unsigned int **RelationList; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rsi
  unsigned int *v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r11
  __int64 v27; // r11
  PVOID *v28; // rcx
  PVOID **v29; // rax
  LARGE_INTEGER Interval; // [rsp+58h] [rbp+10h] BYREF

  v4 = *a2;
  CurrentThread = KeGetCurrentThread();
  Pool2 = 0LL;
  *a2 = 0LL;
  v10 = (unsigned int **)v4;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&IopSurpriseRemoveListLock, 1u);
  LOBYTE(v11) = 1;
  PnpAcquireDependencyRelationsLock(v11);
  v15 = (PVOID *)IopPendingSurpriseRemovals;
  while ( v15 != &IopPendingSurpriseRemovals )
  {
    v17 = v15;
    v15 = (PVOID *)*v15;
    if ( v17[7] == a1 )
    {
      Pool2 = (__int64)v17;
      v10 = (unsigned int **)v17[8];
      break;
    }
    if ( (unsigned __int8)IopCheckIfMergeRequired(v17[8], v10) )
    {
      if ( v10 == (unsigned int **)v4 )
      {
        Pool2 = (__int64)v17;
        RelationList = (unsigned int **)IopAllocateRelationList(3LL);
        v10 = RelationList;
        if ( !RelationList )
        {
          v10 = (unsigned int **)v4;
          PnpReleaseDependencyRelationsLock(v20, v19, v21);
          goto LABEL_4;
        }
        IopMergeRelationLists(RelationList, (__int64)v4, 0);
      }
      IopMergeRelationLists(v10, (__int64)v17[8], 1);
      IopFreeRelationList((void **)v17[8]);
      if ( (PVOID *)Pool2 == v17 )
      {
        *(_QWORD *)(Pool2 + 64) = 0LL;
      }
      else
      {
        v28 = (PVOID *)*v17;
        if ( *((PVOID **)*v17 + 1) != v17 )
          goto LABEL_6;
        v29 = (PVOID **)v17[1];
        if ( *v29 != v17 )
          goto LABEL_6;
        *v29 = v28;
        v28[1] = v29;
        ExFreePoolWithTag(v17, 0);
      }
    }
  }
  PnpReleaseDependencyRelationsLock(v13, v12, v14);
  if ( v4 != (void **)v10 )
  {
    IopFreeRelationList(v4);
    goto LABEL_13;
  }
LABEL_4:
  Pool2 = ExAllocatePool2(0x40uLL, 0x70uLL, 0x54706E50u);
  if ( !Pool2 )
  {
    Interval.QuadPart = -10000LL;
    do
    {
      KeDelayExecutionThread(0, 0, &Interval);
      Pool2 = ExAllocatePool2(0x40uLL, 0x70uLL, 0x54706E50u);
    }
    while ( !Pool2 );
  }
  v16 = (__int64 *)qword_140F8B838;
  if ( *(PVOID **)qword_140F8B838 != &IopPendingSurpriseRemovals )
LABEL_6:
    __fastfail(3u);
  *(_QWORD *)Pool2 = &IopPendingSurpriseRemovals;
  *(_QWORD *)(Pool2 + 8) = v16;
  *v16 = Pool2;
  qword_140F8B838 = Pool2;
LABEL_13:
  v22 = 0LL;
  while ( 1 )
  {
    v23 = *v10;
    if ( (unsigned int)v22 >= **v10 || !v23 )
      break;
    _mm_lfence();
    v24 = 3 * v22;
    v22 = (unsigned int)(v22 + 1);
    v25 = *(_QWORD *)&v23[2 * v24 + 4];
    if ( v25 )
      v26 = *(_QWORD *)(*(_QWORD *)(v25 + 312) + 40LL);
    else
      v26 = 0LL;
    if ( (*(_BYTE *)(v26 + 648) & 1) != 0 )
    {
      if ( (unsigned __int8)IopIsDescendantNode(v10) )
      {
        *(_QWORD *)(v27 + 648) &= ~1uLL;
        --*(_DWORD *)(*(_QWORD *)(v27 + 648) + 656LL);
      }
    }
  }
  *(_QWORD *)(Pool2 + 56) = a1;
  *(_DWORD *)(Pool2 + 84) = a3;
  *(_BYTE *)(Pool2 + 88) = 0;
  *(_QWORD *)(Pool2 + 64) = v10;
  *(_DWORD *)(Pool2 + 108) = a4;
  *(_BYTE *)(Pool2 + 104) = 0;
  ExReleaseResourceLite(&IopSurpriseRemoveListLock);
  KeLeaveCriticalRegion();
}
