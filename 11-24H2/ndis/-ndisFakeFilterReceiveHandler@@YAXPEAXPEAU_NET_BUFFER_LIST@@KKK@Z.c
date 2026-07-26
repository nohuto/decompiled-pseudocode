/*
 * XREFs of ?ndisFakeFilterReceiveHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14009A0D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisIsNblContextVeriferEnabled@@YA_NPEAU_NDIS_OBJECT_HEADER@@@Z @ 0x140017B20 (-ndisIsNblContextVeriferEnabled@@YA_NPEAU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisInvokeNextReceiveCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX20K@Z@Z @ 0x140031B90 (-ndisInvokeNextReceiveCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP.c)
 *     PktMonClientNblDropNdis @ 0x1400410D0 (PktMonClientNblDropNdis.c)
 *     ?ndisRemoveNblContextTerminator@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_OBJECT_HEADER@@@Z @ 0x140074880 (-ndisRemoveNblContextTerminator@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_OBJECT_HEADER@@@Z.c)
 */

void __fastcall ndisFakeFilterReceiveHandler(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  unsigned int v7; // edi
  _NDIS_FILTER_BLOCK *HigherFilter; // r8

  if ( byte_14011D800 && (*((_DWORD *)&a1->PktMonComp + 14) & 2) != 0 )
    PktMonClientNblDropNdis((__int64)&a1->PktMonComp, (__int64)a2, a3, 1LL, -1071448033, -536866814);
  if ( (a5 & 2) == 0 )
  {
    v7 = a5 & 1;
    if ( ndisIsNblContextVeriferEnabled(a1) )
      ndisRemoveNblContextTerminator(a2, &a1->Header);
    HigherFilter = a1->HigherFilter;
    if ( HigherFilter )
      ndisInvokeNextReceiveCompleteHandler(
        a2,
        v7,
        HigherFilter,
        HigherFilter->NextReturnNetBufferListsObject,
        HigherFilter->NextReturnNetBufferListsContext,
        (void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int))HigherFilter->NextReturnNetBufferListsHandler);
    else
      ndisInvokeNextReceiveCompleteHandler(
        a2,
        v7,
        (struct _NDIS_FILTER_BLOCK *)a1->Miniport,
        a1->Miniport->Next.ReturnNetBufferListsObject,
        a1->Miniport->Next.ReturnNetBufferListsContext,
        (void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int))a1->Miniport->Next.ReturnNetBufferListsHandler);
  }
}
