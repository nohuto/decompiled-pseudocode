/*
 * XREFs of ?ndisDequeueDirectOidsByRequestId@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAXPEAU_LIST_ENTRY@@@Z @ 0x1400C9F74
 * Callers:
 *     ?ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x14003EE40 (-ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXKPEAPEAU_NET_BUFFER_LIST@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x140062BC0 (-ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXK.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisDequeueDirectOidsByRequestId(
        struct _NDIS_SELECTIVE_SUSPEND *a1,
        _LIST_ENTRY *a2,
        struct _LIST_ENTRY *a3)
{
  char *v3; // r9
  _LIST_ENTRY *v5; // rax
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *v8; // rdx

  v3 = (char *)a1 + 584;
  v5 = (_LIST_ENTRY *)*((_QWORD *)a1 + 73);
  if ( v5 != (_LIST_ENTRY *)((char *)a1 + 584) )
  {
    do
    {
      Flink = v5->Flink;
      if ( v5[-4].Blink == a2 )
      {
        if ( Flink->Blink != v5
          || (Blink = v5->Blink, Blink->Flink != v5)
          || (Blink->Flink = Flink, Flink->Blink = Blink, v8 = a3->Blink, v8->Flink != a3) )
        {
          __fastfail(3u);
        }
        v5->Flink = a3;
        v5->Blink = v8;
        v8->Flink = v5;
        a3->Blink = v5;
      }
      v5 = Flink;
    }
    while ( Flink != (_LIST_ENTRY *)v3 );
  }
}
