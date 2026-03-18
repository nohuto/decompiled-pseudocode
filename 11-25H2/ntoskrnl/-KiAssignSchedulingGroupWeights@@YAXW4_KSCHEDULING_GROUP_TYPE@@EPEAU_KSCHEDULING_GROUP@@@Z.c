/*
 * XREFs of ?KiAssignSchedulingGroupWeights@@YAXW4_KSCHEDULING_GROUP_TYPE@@EPEAU_KSCHEDULING_GROUP@@@Z @ 0x1402F6830
 * Callers:
 *     KeInsertSchedulingGroup @ 0x1402F5D80 (KeInsertSchedulingGroup.c)
 *     KeSetSchedulingGroupWeights @ 0x1402F68E8 (KeSetSchedulingGroupWeights.c)
 *     KeRemoveSchedulingGroup @ 0x1404AC2B4 (KeRemoveSchedulingGroup.c)
 *     KeUpdateGroupSchedulingConstants @ 0x1405C3564 (KeUpdateGroupSchedulingConstants.c)
 * Callees:
 *     ?KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x1402F6B24 (-KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 */

void __fastcall KiAssignSchedulingGroupWeights(int a1, unsigned __int8 a2, __int64 a3)
{
  unsigned int v5; // edi
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v7; // rsi
  struct _KSCHEDULING_GROUP *p_Blink; // rcx

  if ( a1 )
  {
    if ( !a3 )
    {
      v5 = KiGroupSchedulingMinimumRate;
LABEL_4:
      Flink = KiSchedulingGroupList.Flink;
      v7 = &KiSchedulingGroupList;
      goto LABEL_6;
    }
    v5 = *(_DWORD *)(a3 + 12);
  }
  else
  {
    if ( a3 )
    {
      if ( !*(_DWORD *)(a3 + 20) )
        return;
      v5 = *(_DWORD *)(a3 + 16);
    }
    else
    {
      if ( !KiGroupSchedulingTotalWeight )
        return;
      v5 = KiGroupSchedulingMinimumWeight;
    }
    if ( !a3 )
      goto LABEL_4;
  }
  v7 = (struct _LIST_ENTRY *)(a3 + 80);
  Flink = *(struct _LIST_ENTRY **)(a3 + 80);
  do
  {
LABEL_6:
    p_Blink = (struct _KSCHEDULING_GROUP *)&Flink[-4].Blink;
    if ( (HIDWORD(Flink[-4].Blink) & 1) == a1 )
    {
      p_Blink->RelativeWeight = (p_Blink->Policy.Weight << 7) / v5;
      if ( !a1 )
        KiUpdateCpuTargetByWeight(p_Blink, a2);
    }
    Flink = Flink->Flink;
  }
  while ( Flink != v7 );
}
