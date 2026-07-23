/*
 * XREFs of ?KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x1402D9DF0
 * Callers:
 *     KiUpdateGroupSchedulingRank @ 0x1402A87A0 (KiUpdateGroupSchedulingRank.c)
 *     ?KiRecomputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KSCB@@PEAU_KPRCB@@@Z @ 0x1402D8368 (-KiRecomputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KSCB@@PEAU_KPRCB@@@Z.c)
 *     ?KiInsertNonMaxOverQuotaScb@@YAXPEAU_KSCB@@PEAU_KPRCB@@E@Z @ 0x1402D8810 (-KiInsertNonMaxOverQuotaScb@@YAXPEAU_KSCB@@PEAU_KPRCB@@E@Z.c)
 *     KiRemoveThreadFromScbQueue @ 0x1402D8F60 (KiRemoveThreadFromScbQueue.c)
 *     ?KiComputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@@Z @ 0x1402DBA34 (-KiComputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_.c)
 *     KeSetSchedulingGroupRankBias @ 0x14045D344 (KeSetSchedulingGroupRankBias.c)
 * Callees:
 *     ?KiInsertSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x1402D8870 (-KiInsertSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     ?KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x1402D89A8 (-KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 */

unsigned __int8 __fastcall KiResortScbQueue(struct _KPRCB *a1, struct _KSCB *a2, char a3)
{
  char v3; // r9
  _RTL_BALANCED_NODE *p_QueueNode; // r10
  unsigned __int64 v7; // rcx
  unsigned __int64 i; // rcx
  _RTL_BALANCED_NODE *v10; // r8
  _RTL_BALANCED_NODE *j; // rcx
  unsigned __int64 k; // r8
  signed int v13; // eax
  unsigned int v14; // eax
  unsigned int Right_low; // ecx
  int v16; // edx
  int v17; // eax
  unsigned int Rank; // edx
  int v19; // eax
  unsigned int ReadySummary; // eax
  unsigned int v21; // edx
  int v22; // r8d
  int v23; // eax

  v3 = 0;
  p_QueueNode = &a2->QueueNode;
  if ( !a3 )
  {
    v7 = (unsigned __int64)p_QueueNode->Children[0];
    if ( p_QueueNode->Children[0] )
    {
      for ( ; *(_QWORD *)(v7 + 8); v7 = *(_QWORD *)(v7 + 8) )
        ;
    }
    else
    {
      for ( i = a2->QueueNode.ParentValue; ; i = *(_QWORD *)(v7 + 16) )
      {
        v7 = i & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v7 || *(_RTL_BALANCED_NODE **)(v7 + 8) == p_QueueNode )
          break;
        p_QueueNode = (_RTL_BALANCED_NODE *)v7;
      }
    }
    if ( !v7 )
      return v3;
    Rank = a2->Rank;
    v19 = Rank - *(_DWORD *)(v7 + 36);
    if ( Rank != *(_DWORD *)(v7 + 36) )
      goto LABEL_33;
    ReadySummary = a2->ReadySummary;
    if ( (_WORD)ReadySummary )
    {
      v21 = *(unsigned __int16 *)(v7 + 32);
      _BitScanReverse((unsigned int *)&v22, ReadySummary);
      v23 = 0;
      if ( (_WORD)v21 )
        _BitScanReverse((unsigned int *)&v23, v21);
      v19 = v23 - v22;
LABEL_33:
      if ( v19 >= 0 )
        return v3;
      goto LABEL_25;
    }
    if ( Rank || a2->GenerationCycles > *(_QWORD *)(v7 - 88) )
      return v3;
LABEL_25:
    KiRemoveSchedulingGroupQueue(a1, a2, 0);
    KiInsertSchedulingGroupQueue(a1, a2, 0);
    return 1;
  }
  v10 = a2->QueueNode.Children[1];
  if ( v10 )
  {
    for ( j = v10->Children[0]; j; j = j->Children[0] )
      v10 = j;
  }
  else
  {
    for ( k = a2->QueueNode.ParentValue; ; k = v10->ParentValue )
    {
      v10 = (_RTL_BALANCED_NODE *)(k & 0xFFFFFFFFFFFFFFFCuLL);
      if ( !v10 || v10->Children[0] == p_QueueNode )
        break;
      p_QueueNode = v10;
    }
  }
  if ( v10 )
  {
    v13 = a2->Rank - HIDWORD(v10[1].Right);
    if ( !v13 )
    {
      v14 = a2->ReadySummary;
      if ( !(_WORD)v14 )
      {
        if ( !a2->Rank && (_RTL_BALANCED_NODE *)a2->GenerationCycles <= v10[-4].Children[1] )
          return v3;
        goto LABEL_25;
      }
      Right_low = LOWORD(v10[1].Right);
      _BitScanReverse((unsigned int *)&v16, v14);
      v17 = 0;
      if ( (_WORD)Right_low )
        _BitScanReverse((unsigned int *)&v17, Right_low);
      v13 = v17 - v16;
    }
    if ( v13 <= 0 )
      return v3;
    goto LABEL_25;
  }
  return v3;
}
