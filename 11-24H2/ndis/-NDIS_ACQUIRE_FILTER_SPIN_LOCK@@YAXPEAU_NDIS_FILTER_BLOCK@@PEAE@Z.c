/*
 * XREFs of ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1400482F0
 * Callers:
 *     NdisFOidRequestComplete @ 0x14000C810 (NdisFOidRequestComplete.c)
 *     ?ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140033D30 (-ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     NdisFNetPnPEvent @ 0x140036340 (NdisFNetPnPEvent.c)
 *     NdisFIndicateStatus @ 0x140050610 (NdisFIndicateStatus.c)
 *     ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x14009A8D0 (-ndisStackExpansionFallbackWorker@@YAXPEAX@Z.c)
 *     ?ndisNblTrackerSetSqmFlag@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1400A1E5C (-ndisNblTrackerSetSqmFlag@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 *     ?ndisCancelOidRequestOnFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAXE@Z @ 0x1400B9A5C (-ndisCancelOidRequestOnFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAXE@Z.c)
 *     ?ndisRefNextFilterForOidCancellation@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@PEAE@Z @ 0x1400BE1D8 (-ndisRefNextFilterForOidCancellation@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@.c)
 *     ndisDoCancelDirectOidRequest @ 0x1400C706C (ndisDoCancelDirectOidRequest.c)
 *     ndisFCancelDirectOidRequestInternal @ 0x1400C7200 (ndisFCancelDirectOidRequestInternal.c)
 *     NdisFDirectOidRequestComplete @ 0x1400C77F0 (NdisFDirectOidRequestComplete.c)
 *     ?ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x140174100 (-ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140176CB0 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NDIS_ACQUIRE_FILTER_SPIN_LOCK(struct _NDIS_FILTER_BLOCK *a1, unsigned __int8 *a2)
{
  *a2 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->LockThread = KeGetCurrentThread();
}
