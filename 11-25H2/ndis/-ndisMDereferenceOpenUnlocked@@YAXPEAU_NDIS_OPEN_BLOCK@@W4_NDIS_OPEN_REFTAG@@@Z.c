/*
 * XREFs of ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x14005A6A0
 * Callers:
 *     ?ndisMOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x140012DA0 (-ndisMOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x140013110 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     NdisMCoRequestComplete @ 0x140027AB0 (NdisMCoRequestComplete.c)
 *     NdisMCoOidRequestComplete @ 0x14005B1F0 (NdisMCoOidRequestComplete.c)
 *     ?ndisMDirectOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x14005B6B0 (-ndisMDirectOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisLegacyRequest@@YAHPEAXPEAU_NDIS_REQUEST@@@Z @ 0x140077B10 (-ndisLegacyRequest@@YAHPEAXPEAU_NDIS_REQUEST@@@Z.c)
 *     ?ndisSendCompleteWithPause@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x14008A470 (-ndisSendCompleteWithPause@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisDereferenceReceiveFilter@@YAKPEAU_NDIS_RECEIVE_FILTER_BLOCK@@@Z @ 0x1400991A0 (-ndisDereferenceReceiveFilter@@YAKPEAU_NDIS_RECEIVE_FILTER_BLOCK@@@Z.c)
 *     ?ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_FILTER_CAPABILITIES@@@Z @ 0x1400B1638 (-ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE.c)
 *     ?ndisDereferenceReceiveQueue@@YAKPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z @ 0x1400B1B18 (-ndisDereferenceReceiveQueue@@YAKPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z.c)
 *     ?ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_CAPABILITIES@@PEAU_NDIS_SRIOV_CAPABILITIES@@@Z @ 0x1400B31D0 (-ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_.c)
 *     ?ndisPktMonRegisterAllOpens@@YAXXZ @ 0x1400B9D50 (-ndisPktMonRegisterAllOpens@@YAXXZ.c)
 *     ?ndisUnbindAdapterWorkItem@@YAXPEAX@Z @ 0x1400BF870 (-ndisUnbindAdapterWorkItem@@YAXPEAX@Z.c)
 *     ndisCoIndicateStatusInternal @ 0x1400DB1E0 (ndisCoIndicateStatusInternal.c)
 *     ?ndisMSendPacketCompleteToOpen@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1400DF670 (-ndisMSendPacketCompleteToOpen@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x14015FDF0 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ndisHandleProtocolReconfigNotification @ 0x14017CEA0 (ndisHandleProtocolReconfigNotification.c)
 *     ?ndisMFinishQueuedPendingOpen@@YAXPEAX@Z @ 0x140182910 (-ndisMFinishQueuedPendingOpen@@YAXPEAX@Z.c)
 *     ?ndisNotifyAfRegistration@@YAXPEAX@Z @ 0x140182D90 (-ndisNotifyAfRegistration@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x14005A740 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 */

void __fastcall ndisMDereferenceOpenUnlocked(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rbp
  KIRQL v5; // al
  KIRQL v6; // bl

  v2 = *(_QWORD *)(a1 + 16);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 96));
  *(_QWORD *)(v2 + 520) = KeGetCurrentThread();
  v6 = v5;
  ndisMDereferenceOpenLocked(a1, a2);
  *(_QWORD *)(v2 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), v6);
}
