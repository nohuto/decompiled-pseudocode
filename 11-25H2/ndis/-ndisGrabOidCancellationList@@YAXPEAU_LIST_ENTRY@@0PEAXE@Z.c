/*
 * XREFs of ?ndisGrabOidCancellationList@@YAXPEAU_LIST_ENTRY@@0PEAXE@Z @ 0x140097A90
 * Callers:
 *     ?ndisCancelOidRequestOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXE@Z @ 0x140023320 (-ndisCancelOidRequestOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXE@Z.c)
 *     ?ndisCancelOidRequestOnFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAXE@Z @ 0x1400C0C8C (-ndisCancelOidRequestOnFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAXE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisGrabOidCancellationList(struct _LIST_ENTRY *a1, struct _LIST_ENTRY *a2, _LIST_ENTRY *a3, char a4)
{
  _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v5; // r9
  _LIST_ENTRY *Blink; // r10
  _LIST_ENTRY *v7; // r10

  a2->Blink = a2;
  a2->Flink = a2;
  Flink = a1->Flink;
  if ( a1->Flink != a1 )
  {
    if ( a4 )
    {
      *a2 = *a1;
      a1->Blink = a1;
      a1->Flink = a1;
      a2->Flink->Blink = a2;
      a2->Blink->Flink = a2;
    }
    else
    {
      do
      {
        v5 = Flink->Flink;
        if ( Flink[-4].Blink == a3 )
        {
          if ( v5->Blink != Flink
            || (Blink = Flink->Blink, Blink->Flink != Flink)
            || (Blink->Flink = v5, v5->Blink = Blink, v7 = a2->Blink, v7->Flink != a2) )
          {
            __fastfail(3u);
          }
          Flink->Flink = a2;
          Flink->Blink = v7;
          v7->Flink = Flink;
          a2->Blink = Flink;
        }
        Flink = v5;
      }
      while ( v5 != a1 );
    }
  }
}
