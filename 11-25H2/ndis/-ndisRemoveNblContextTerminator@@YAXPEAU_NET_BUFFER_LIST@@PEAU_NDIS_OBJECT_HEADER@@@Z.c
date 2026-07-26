/*
 * XREFs of ?ndisRemoveNblContextTerminator@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_OBJECT_HEADER@@@Z @ 0x1400905A0
 * Callers:
 *     ?ndisMFakeSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x140031E30 (-ndisMFakeSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x140035610 (NdisMIndicateReceiveNetBufferLists.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140039CC0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisFakeFilterReceiveHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1400A3340 (-ndisFakeFilterReceiveHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 * Callees:
 *     NdisFreeNetBufferListContext @ 0x14001A140 (NdisFreeNetBufferListContext.c)
 *     NblContextVerifierBugcheckContextCorruption @ 0x1400AA9A8 (NblContextVerifierBugcheckContextCorruption.c)
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
