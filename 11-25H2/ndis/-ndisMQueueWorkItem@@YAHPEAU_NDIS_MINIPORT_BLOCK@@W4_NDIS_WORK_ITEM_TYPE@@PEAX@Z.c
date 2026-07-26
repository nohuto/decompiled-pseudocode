/*
 * XREFs of ?ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z @ 0x14006C2D0
 * Callers:
 *     ?ndisReturnPacketToMiniport@@YAXPEAXPEAU_NDIS_PACKET@@@Z @ 0x14006C180 (-ndisReturnPacketToMiniport@@YAXPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMWakeUpDpc@@YAXPEAX000@Z @ 0x14009C0A0 (-ndisMWakeUpDpc@@YAXPEAX000@Z.c)
 *     ?ndisMReset@@YAHPEAX@Z @ 0x1400A6920 (-ndisMReset@@YAHPEAX@Z.c)
 *     ?ndisMSendPacketsToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400DF8D0 (-ndisMSendPacketsToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     NdisMSendComplete @ 0x1400DFB50 (NdisMSendComplete.c)
 *     NdisMSendResourcesAvailable @ 0x1400DFCB0 (NdisMSendResourcesAvailable.c)
 *     ?ndisMWanSend@@YAHPEAX00@Z @ 0x1400E0380 (-ndisMWanSend@@YAHPEAX00@Z.c)
 *     ?ndisMSendCompleteSG@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1400E0C60 (-ndisMSendCompleteSG@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisMProcessSGListS@@YAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z @ 0x1400E20C0 (-ndisMProcessSGListS@@YAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisMQueueWorkItem(struct _NDIS_MINIPORT_BLOCK *a1, int a2, _SINGLE_LIST_ENTRY *a3)
{
  __int64 v4; // rbx
  _SINGLE_LIST_ENTRY *Next; // rcx
  unsigned int v7; // ebx

  v4 = a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      12,
      44,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)a1);
  }
  Next = a1->SingleWorkItems[v4].Next;
  if ( Next )
  {
    a1->SingleWorkItems[v4] = (_SINGLE_LIST_ENTRY)Next->Next;
    LODWORD(Next[1].Next) = v4;
    Next[2].Next = a3;
    Next->Next = (_SINGLE_LIST_ENTRY *)a1->WorkQueue[v4];
    a1->WorkQueue[v4].Next = Next;
    v7 = 0;
  }
  else
  {
    v7 = 65539;
  }
  if ( (a1->Flags & 0x48000) == 0x8000 && !v7 )
    KeInsertQueueDpc(&a1->DeferredDpc, 0LL, 0LL);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xCu,
      0x2Du,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)a1,
      v7);
  return v7;
}
