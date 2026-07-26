/*
 * XREFs of ?ndisIsNblContextVeriferEnabled@@YA_NPEAU_NDIS_OBJECT_HEADER@@@Z @ 0x140017B20
 * Callers:
 *     ?ndisMFakeSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x140027460 (-ndisMFakeSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     NdisSetOptionalHandlers @ 0x1400942B0 (NdisSetOptionalHandlers.c)
 *     ?ndisFakeFilterReceiveHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14009A0D0 (-ndisFakeFilterReceiveHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1400D39F0 (-ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 * Callees:
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x140019660 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 */

bool __fastcall ndisIsNblContextVeriferEnabled(const struct _NDIS_FILTER_BLOCK *a1)
{
  int v1; // eax

  if ( !ndisNblContextVerifierMode || ndisNblContextVerifierMode == 3 || !a1 )
    goto LABEL_2;
  switch ( a1->Header.Type )
  {
    case 5u:
      LOBYTE(v1) = FILTER_TEST_FLAG(a1, 0x400u) != 0;
      return v1;
    case 0x11u:
      LOBYTE(v1) = (*((_DWORD *)&a1[2].PktMonComp + 14) & 0x1000) != 0;
      return v1;
    case 0x12u:
      return *(_DWORD *)&a1->StackExpansionFallback.WorkItemQueued >> 31;
    default:
LABEL_2:
      LOBYTE(v1) = 0;
      break;
  }
  return v1;
}
