/*
 * XREFs of ?ndisMFakeSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x140031E30
 * Callers:
 *     NdisSendNetBufferLists @ 0x140031410 (NdisSendNetBufferLists.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisIsNblContextVeriferEnabled@@YA_NPEAU_NDIS_OBJECT_HEADER@@@Z @ 0x140020730 (-ndisIsNblContextVeriferEnabled@@YA_NPEAU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z @ 0x140032490 (-NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z.c)
 *     ?ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1400324C0 (-ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     PktMonClientNblDropNdis @ 0x140046FF0 (PktMonClientNblDropNdis.c)
 *     ?ndisRemoveNblContextTerminator@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_OBJECT_HEADER@@@Z @ 0x1400905A0 (-ndisRemoveNblContextTerminator@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_OBJECT_HEADER@@@Z.c)
 */

void __fastcall ndisMFakeSendNetBufferLists(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        int a3,
        char a4)
{
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      3u,
      0x52u,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)a1,
      a2);
  if ( byte_1401278B0 && ((__int64)a1[4].StackExpansionFallback.WorkItem.WorkerRoutine & 2) != 0 )
    PktMonClientNblDropNdis(
      (_DWORD)a1 + 5816,
      (_DWORD)a2,
      a3,
      2,
      HIDWORD(a1->NextReturnNetBufferListsContext),
      -536866811);
  if ( ndisIsNblContextVeriferEnabled(a1) )
    ndisRemoveNblContextTerminator(a2, &a1->Header);
  NdisSetStatusInNblChain(a2, HIDWORD(a1->NextReturnNetBufferListsContext));
  ndisMSendCompleteNetBufferListsInternal(a1, a2, a4 & 1);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      3u,
      0x53u,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)a1,
      a2);
}
