/*
 * XREFs of ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x140062190
 * Callers:
 *     NdisFOidRequestComplete @ 0x140025CF0 (NdisFOidRequestComplete.c)
 *     NdisFNetPnPEvent @ 0x140057170 (NdisFNetPnPEvent.c)
 *     ?ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140058120 (-ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     NdisFIndicateStatus @ 0x14006AE90 (NdisFIndicateStatus.c)
 *     ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x1400A3AA0 (-ndisStackExpansionFallbackWorker@@YAXPEAX@Z.c)
 *     ?ndisNblTrackerSetSqmFlag@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1400AA00C (-ndisNblTrackerSetSqmFlag@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 *     ?ndisCancelOidRequestOnFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAXE@Z @ 0x1400C0C8C (-ndisCancelOidRequestOnFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAXE@Z.c)
 *     ?ndisRefNextFilterForOidCancellation@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@PEAE@Z @ 0x1400C5408 (-ndisRefNextFilterForOidCancellation@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@.c)
 *     ndisDoCancelDirectOidRequest @ 0x1400CE0FC (ndisDoCancelDirectOidRequest.c)
 *     ndisFCancelDirectOidRequestInternal @ 0x1400CE290 (ndisFCancelDirectOidRequestInternal.c)
 *     NdisFDirectOidRequestComplete @ 0x1400CE960 (NdisFDirectOidRequestComplete.c)
 *     ?ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x140182EC0 (-ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1401893D0 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NDIS_ACQUIRE_FILTER_SPIN_LOCK(struct _NDIS_FILTER_BLOCK *a1, unsigned __int8 *a2)
{
  *a2 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->LockThread = KeGetCurrentThread();
}
