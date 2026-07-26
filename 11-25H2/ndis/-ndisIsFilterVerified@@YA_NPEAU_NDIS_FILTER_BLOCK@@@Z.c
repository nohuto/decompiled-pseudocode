/*
 * XREFs of ?ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14003C9A0
 * Callers:
 *     NdisFSendNetBufferListsComplete @ 0x1400207A0 (NdisFSendNetBufferListsComplete.c)
 *     ?ndisSendNBLToFilter@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x140021110 (-ndisSendNBLToFilter@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x14003BF50 (-ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z.c)
 *     ??$ndisInvokeIterativeDatapath@$0A@$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KK@Z@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x14003C590 (--$ndisInvokeIterativeDatapath@$0A@$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KK@Z@@YAXPEAU_NET_BUFFER_LIST.c)
 *     ??$ndisDataPathExpandStackCallback@$02$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAX@Z @ 0x14003C9D0 (--$ndisDataPathExpandStackCallback@$02$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAX@Z.c)
 *     ?ndisFInvokePause@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_PAUSE_PARAMETERS@@@Z @ 0x14016DAB0 (-ndisFInvokePause@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_PAUSE_PARAMETERS@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisIsFilterVerified(struct _NDIS_FILTER_BLOCK *a1)
{
  return ndisVerifierNdisDispatch && a1->Header.Type == 5 && a1->VerifierContext;
}
