/*
 * XREFs of ?MoveNodesFromNodesListStackToList@CSidebandDevice@@SAXPEAU_LIST_ENTRY@@0@Z @ 0x140012A6C
 * Callers:
 *     ?TraverseForward@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_LIST_ENTRY@@@Z @ 0x14000ABA0 (-TraverseForward@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_.c)
 *     ?TraverseBackward@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_LIST_ENTRY@@@Z @ 0x1400131C4 (-TraverseBackward@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU.c)
 * Callees:
 *     <none>
 */

void __fastcall CSidebandDevice::MoveNodesFromNodesListStackToList(struct _LIST_ENTRY *a1, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v5; // rax
  struct _LIST_ENTRY *v6; // rdx
  struct _LIST_ENTRY *v7; // rax
  struct _LIST_ENTRY *v8; // r8
  struct _LIST_ENTRY *v9; // r8

  while ( a1->Flink != a1 )
  {
    Blink = a1->Blink;
    if ( Blink->Flink != a1 || (v5 = Blink->Blink, v5->Flink != Blink) )
LABEL_11:
      __fastfail(3u);
    a1->Blink = v5;
    v6 = Blink + 1;
    v5->Flink = a1;
    while ( v6->Flink != v6 )
    {
      v7 = Blink[1].Blink;
      if ( v7->Flink != v6 )
        goto LABEL_11;
      v8 = v7->Blink;
      if ( v8->Flink != v7 )
        goto LABEL_11;
      Blink[1].Blink = v8;
      v8->Flink = v6;
      v9 = a2->Blink;
      if ( v9->Flink != a2 )
        goto LABEL_11;
      v7->Flink = a2;
      v7->Blink = v9;
      v9->Flink = v7;
      a2->Blink = v7;
    }
    ExFreePool(Blink);
  }
}
