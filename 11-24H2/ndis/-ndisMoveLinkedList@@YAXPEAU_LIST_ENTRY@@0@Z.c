/*
 * XREFs of ?ndisMoveLinkedList@@YAXPEAU_LIST_ENTRY@@0@Z @ 0x1400506D0
 * Callers:
 *     ?ndisRequestPowerResume@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400C2F54 (-ndisRequestPowerResume@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1400C3178 (-ndisSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisMoveLinkedList(struct _LIST_ENTRY *a1, struct _LIST_ENTRY *a2)
{
  if ( a2->Flink == a2 )
  {
    a1->Blink = a1;
    a1->Flink = a1;
  }
  else
  {
    *a1 = *a2;
    a2->Blink = a2;
    a2->Flink = a2;
    a1->Flink->Blink = a1;
    a1->Blink->Flink = a1;
  }
}
