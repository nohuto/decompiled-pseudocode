/*
 * XREFs of ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140035310
 * Callers:
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x140035250 (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisSendPacketsWithPause@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x140051B20 (-ndisSendPacketsWithPause@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140058210 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisMAbortRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006A4C0 (-ndisMAbortRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMWakeUpDpc@@YAXPEAX000@Z @ 0x140090CB0 (-ndisMWakeUpDpc@@YAXPEAX000@Z.c)
 *     NdisIMRevertBack @ 0x14009F840 (NdisIMRevertBack.c)
 *     NdisIMSwitchToMiniport @ 0x14009F8B0 (NdisIMSwitchToMiniport.c)
 *     NdisMWanIndicateReceive @ 0x1400A0270 (NdisMWanIndicateReceive.c)
 *     NdisMWanIndicateReceiveComplete @ 0x1400A0330 (NdisMWanIndicateReceiveComplete.c)
 *     ?ndisMediaDisconnectTimeout@@YAXPEAX000@Z @ 0x1400A8670 (-ndisMediaDisconnectTimeout@@YAXPEAX000@Z.c)
 *     ?ndisMDeferredDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1400C4B90 (-ndisMDeferredDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?ndisMTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1400D5690 (-ndisMTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ndis5InterruptDpc @ 0x1400D72D0 (ndis5InterruptDpc.c)
 *     ndis5QueuedMiniportDpcWorkItem @ 0x1400D7370 (ndis5QueuedMiniportDpcWorkItem.c)
 *     ndisMDpc @ 0x1400D7410 (ndisMDpc.c)
 *     ?ndisMDeferredSend@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400D7D20 (-ndisMDeferredSend@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDeferredSendPackets@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400D7F30 (-ndisMDeferredSendPackets@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMSendPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400D8400 (-ndisMSendPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMSendPacketsToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400D85C0 (-ndisMSendPacketsToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     NdisMSendComplete @ 0x1400D8850 (NdisMSendComplete.c)
 *     NdisMSendResourcesAvailable @ 0x1400D89C0 (NdisMSendResourcesAvailable.c)
 *     ?ndisMStartWanSends@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400D8F30 (-ndisMStartWanSends@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMWanSend@@YAHPEAX00@Z @ 0x1400D9080 (-ndisMWanSend@@YAHPEAX00@Z.c)
 *     NdisMWanSendComplete @ 0x1400D9230 (NdisMWanSendComplete.c)
 *     ?ndisMDeferredSendPacketsSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400D93B0 (-ndisMDeferredSendPacketsSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDeferredSendSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400D97E0 (-ndisMDeferredSendSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMSendCompleteSG@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1400D9A00 (-ndisMSendCompleteSG@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisMSendPacketsSGToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400D9B80 (-ndisMSendPacketsSGToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400DA414 (-ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMProcessSGListS@@YAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z @ 0x1400DAEB0 (-ndisMProcessSGListS@@YAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z.c)
 *     ?ndisMKillOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1401738D0 (-ndisMKillOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(struct _NDIS_MINIPORT_BLOCK *a1)
{
  KeAcquireSpinLockAtDpcLevel(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
}
