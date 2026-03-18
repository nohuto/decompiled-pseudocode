/*
 * XREFs of ?KiAssignSchedulingGroupWeights@@YAXW4_KSCHEDULING_GROUP_TYPE@@EPEAU_KSCHEDULING_GROUP@@@Z @ 0x140310890
 * Callers:
 *     KeInsertSchedulingGroup @ 0x14030F2B8 (KeInsertSchedulingGroup.c)
 *     KeSetSchedulingGroupWeights @ 0x140310E70 (KeSetSchedulingGroupWeights.c)
 *     KeRemoveSchedulingGroup @ 0x1404A45D8 (KeRemoveSchedulingGroup.c)
 *     KeUpdateGroupSchedulingConstants @ 0x1405C7904 (KeUpdateGroupSchedulingConstants.c)
 * Callees:
 *     ?KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x140310BD8 (-KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 */

void __fastcall KiAssignSchedulingGroupWeights(int a1, unsigned __int8 a2, __int64 a3)
{
  struct _LIST_ENTRY *v5; // rsi
  struct _LIST_ENTRY *Flink; // rbx
  struct _KSCHEDULING_GROUP *p_Blink; // rcx
  unsigned int v8; // edi

  if ( a1 )
  {
    if ( a3 )
    {
      v8 = *(_DWORD *)(a3 + 12);
LABEL_5:
      v5 = (struct _LIST_ENTRY *)(a3 + 80);
      Flink = *(struct _LIST_ENTRY **)(a3 + 80);
      goto LABEL_6;
    }
    v8 = KiGroupSchedulingMinimumRate;
  }
  else
  {
    if ( a3 )
    {
      if ( !*(_DWORD *)(a3 + 20) )
        return;
      v8 = *(_DWORD *)(a3 + 16);
    }
    else
    {
      if ( !KiGroupSchedulingTotalWeight )
        return;
      v8 = KiGroupSchedulingMinimumWeight;
    }
    if ( a3 )
      goto LABEL_5;
  }
  Flink = KiSchedulingGroupList.Flink;
  v5 = &KiSchedulingGroupList;
  do
  {
LABEL_6:
    p_Blink = (struct _KSCHEDULING_GROUP *)&Flink[-4].Blink;
    if ( (HIDWORD(Flink[-4].Blink) & 1) == a1 )
    {
      p_Blink->RelativeWeight = (p_Blink->Policy.Weight << 7) / v8;
      if ( !a1 )
        KiUpdateCpuTargetByWeight(p_Blink, a2);
    }
    Flink = Flink->Flink;
  }
  while ( Flink != v5 );
}
