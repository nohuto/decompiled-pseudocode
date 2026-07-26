/*
 * XREFs of NdisFreeRWLock @ 0x1400171E0
 * Callers:
 *     ?ndisMCleanupMiniportBlockOnStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14004EC40 (-ndisMCleanupMiniportBlockOnStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?nullCreateFilter@@YAEPEAPEAU_X_FILTER@@@Z @ 0x140098760 (-nullCreateFilter@@YAEPEAPEAU_X_FILTER@@@Z.c)
 *     ?EthFreeFilterBuffers@@YAXPEAU_X_FILTER@@_N@Z @ 0x1400A0204 (-EthFreeFilterBuffers@@YAXPEAU_X_FILTER@@_N@Z.c)
 *     ?nullDeleteFilter@@YAXPEAU_X_FILTER@@@Z @ 0x1400B9404 (-nullDeleteFilter@@YAXPEAU_X_FILTER@@@Z.c)
 *     ?ndisVerifyNdisFreeRWLock@@YAXPEAU_NDIS_RW_LOCK_EX@@@Z @ 0x1400C9900 (-ndisVerifyNdisFreeRWLock@@YAXPEAU_NDIS_RW_LOCK_EX@@@Z.c)
 *     ndisUnloadPeriodicReceives @ 0x140198AE4 (ndisUnloadPeriodicReceives.c)
 * Callees:
 *     ?ndisFreePerProcessorSlot@@YAXPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x140017280 (-ndisFreePerProcessorSlot@@YAXPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z.c)
 */

void __stdcall NdisFreeRWLock(PNDIS_RW_LOCK_EX Lock)
{
  *(_DWORD *)Lock |= 0xFFFFFF7F;
  ndisFreePerProcessorSlot(*((_QWORD *)Lock + 4), 0x7772444EuLL);
  ExFreePoolWithTag(Lock, 0x7772444Eu);
}
