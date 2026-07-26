/*
 * XREFs of ?ndisReturnQueuedLowPowerNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1400678A0
 * Callers:
 *     ?ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140152070 (-ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x140180E40 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x140019EA0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisReturnQueuedLowPowerNbls(struct _NDIS_MINIPORT_BLOCK *a1, char a2)
{
  KIRQL v4; // bp
  struct _NET_BUFFER_LIST *LowPowerRcvReturnNbls; // rcx

  v4 = KeAcquireSpinLockRaiseToDpc(&a1->PowerStateLock);
  if ( a2 )
    a1->SurpriseRemoveFlushedRcvReturnQueue = 1;
  LowPowerRcvReturnNbls = a1->LowPowerRcvReturnNbls;
  if ( LowPowerRcvReturnNbls )
  {
    if ( *(_DWORD *)ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(LowPowerRcvReturnNbls, 0LL, (unsigned __int64)a1->NblTracker, 0x8Du, 1u);
    a1->DriverHandle->MiniportDriverCharacteristics.ReturnNetBufferListsHandler(
      a1->MiniportAdapterContext,
      a1->LowPowerRcvReturnNbls,
      1u);
    a1->LowPowerRcvReturnNbls = 0LL;
  }
  KeReleaseSpinLock(&a1->PowerStateLock, v4);
}
