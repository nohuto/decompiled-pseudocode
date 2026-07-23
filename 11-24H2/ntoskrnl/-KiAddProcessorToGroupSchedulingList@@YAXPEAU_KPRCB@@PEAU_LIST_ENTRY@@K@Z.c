/*
 * XREFs of ?KiAddProcessorToGroupSchedulingList@@YAXPEAU_KPRCB@@PEAU_LIST_ENTRY@@K@Z @ 0x1405C4A94
 * Callers:
 *     ?KiAddProcessorToGroupSchedulingList@@YAXPEAU_KPRCB@@PEAU_LIST_ENTRY@@K@Z @ 0x1405C4A94 (-KiAddProcessorToGroupSchedulingList@@YAXPEAU_KPRCB@@PEAU_LIST_ENTRY@@K@Z.c)
 *     KiAddProcessorToGroupSchedulingDatabase @ 0x140B5CE04 (KiAddProcessorToGroupSchedulingDatabase.c)
 * Callees:
 *     ?KiAddProcessorToGroupSchedulingList@@YAXPEAU_KPRCB@@PEAU_LIST_ENTRY@@K@Z @ 0x1405C4A94 (-KiAddProcessorToGroupSchedulingList@@YAXPEAU_KPRCB@@PEAU_LIST_ENTRY@@K@Z.c)
 */

void __fastcall KiAddProcessorToGroupSchedulingList(struct _KPRCB *a1, struct _LIST_ENTRY *a2, unsigned int a3)
{
  struct _LIST_ENTRY *Flink; // rbx
  __int64 v7; // r15
  _LIST_ENTRY *p_ScbList; // rsi
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v10; // rax
  struct _LIST_ENTRY *v11; // rdx

  Flink = a2->Flink;
  if ( a2->Flink != a2 )
  {
    v7 = 440LL * a3;
    p_ScbList = &a1->ScbList;
    do
    {
      Blink = p_ScbList->Blink;
      v10 = (struct _LIST_ENTRY *)((char *)Flink + v7 + 144);
      if ( Blink->Flink != p_ScbList )
        __fastfail(3u);
      v10->Blink = Blink;
      v10->Flink = p_ScbList;
      Blink->Flink = v10;
      v11 = (struct _LIST_ENTRY *)((char *)Flink + 24);
      p_ScbList->Blink = v10;
      if ( v11->Flink != v11 )
        KiAddProcessorToGroupSchedulingList(a1, v11, a3);
      Flink = Flink->Flink;
    }
    while ( Flink != a2 );
  }
}
