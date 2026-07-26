/*
 * XREFs of ?NDIS_ACQUIRE_FILTER_SPIN_LOCK_DPC@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140034790
 * Callers:
 *     ?ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140033D30 (-ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140058210 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisQueueRestoreRequestsOnTop@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@IE@Z @ 0x1400BDE90 (-ndisQueueRestoreRequestsOnTop@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@IE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NDIS_ACQUIRE_FILTER_SPIN_LOCK_DPC(struct _NDIS_FILTER_BLOCK *a1)
{
  KeAcquireSpinLockAtDpcLevel(&a1->Lock);
  a1->LockThread = KeGetCurrentThread();
}
