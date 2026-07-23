/*
 * XREFs of ?KiUpdateMinimumWeight@@YAEW4_KSCHEDULING_GROUP_TYPE@@EPEAU_KSCHEDULING_GROUP@@@Z @ 0x14049B218
 * Callers:
 *     KeRemoveSchedulingGroup @ 0x14049F368 (KeRemoveSchedulingGroup.c)
 * Callees:
 *     <none>
 */

char __fastcall KiUpdateMinimumWeight(int a1, char a2, struct _LIST_ENTRY *a3)
{
  int Blink_high; // r9d
  unsigned int v6; // ecx
  struct _LIST_ENTRY *v7; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  int v9; // r10d
  int v10; // r11d
  unsigned int Blink_low; // eax

  if ( a1 )
  {
    if ( a3 )
      Blink_high = HIDWORD(a3->Blink);
    else
      Blink_high = KiGroupSchedulingMinimumRate;
    v6 = 10000;
  }
  else
  {
    if ( a3 )
      Blink_high = (int)a3[1].Flink;
    else
      Blink_high = KiGroupSchedulingMinimumWeight;
    v6 = 9;
  }
  v7 = a3 + 5;
  if ( !a3 )
    v7 = &KiSchedulingGroupList;
  Flink = v7->Flink;
  v9 = 0;
  v10 = 0;
  do
  {
    if ( (HIDWORD(Flink[-4].Blink) & 1) == a1 )
    {
      if ( !a2 && LOWORD(Flink[-4].Blink) == Blink_high )
        return 0;
      Blink_low = LOWORD(Flink[-4].Blink);
      if ( Blink_low < v6 )
        v6 = LOWORD(Flink[-4].Blink);
      v9 += Blink_low;
      ++v10;
    }
    Flink = Flink->Flink;
  }
  while ( Flink != v7 );
  if ( a1 )
  {
    if ( v10 )
    {
      if ( a3 )
        HIDWORD(a3->Blink) = v6;
      else
        KiGroupSchedulingMinimumRate = v6;
    }
    else if ( a3 )
    {
      HIDWORD(a3->Blink) = 0;
    }
    else
    {
      KiGroupSchedulingMinimumRate = 0;
    }
  }
  else if ( v10 )
  {
    if ( a3 )
    {
      LODWORD(a3[1].Flink) = v6;
      if ( a2 )
        HIDWORD(a3[1].Flink) = v9;
    }
    else
    {
      KiGroupSchedulingMinimumWeight = v6;
      if ( a2 )
        KiGroupSchedulingTotalWeight = v9;
    }
  }
  else if ( a3 )
  {
    LODWORD(a3[1].Flink) = 0;
    HIDWORD(a3[1].Flink) = 0;
  }
  else
  {
    KiGroupSchedulingMinimumWeight = 0;
    KiGroupSchedulingTotalWeight = 0;
  }
  return 1;
}
