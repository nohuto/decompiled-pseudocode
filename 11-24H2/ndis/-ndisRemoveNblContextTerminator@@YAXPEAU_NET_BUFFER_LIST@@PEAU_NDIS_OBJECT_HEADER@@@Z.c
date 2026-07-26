/*
 * XREFs of ?ndisRemoveNblContextTerminator@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_OBJECT_HEADER@@@Z @ 0x140074880
 * Callers:
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14001A8A0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x14001DE10 (NdisMIndicateReceiveNetBufferLists.c)
 *     ?ndisMFakeSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x140027460 (-ndisMFakeSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisFakeFilterReceiveHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14009A0D0 (-ndisFakeFilterReceiveHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 * Callees:
 *     NdisFreeNetBufferListContext @ 0x140021D40 (NdisFreeNetBufferListContext.c)
 *     NblContextVerifierBugcheckContextCorruption @ 0x1400A27F8 (NblContextVerifierBugcheckContextCorruption.c)
 */

void __fastcall ndisRemoveNblContextTerminator(PNET_BUFFER_LIST NetBufferList, struct _NDIS_OBJECT_HEADER *a2)
{
  PNET_BUFFER_LIST i; // rbx

  for ( i = NetBufferList; i; i = (PNET_BUFFER_LIST)i->Link.Alignment )
  {
    if ( *(struct _NDIS_OBJECT_HEADER **)&i->Context->ContextData[i->Context->Offset] != a2 )
      NblContextVerifierBugcheckContextCorruption(i, NetBufferList, a2);
    NdisFreeNetBufferListContext(i, 8u);
  }
}
