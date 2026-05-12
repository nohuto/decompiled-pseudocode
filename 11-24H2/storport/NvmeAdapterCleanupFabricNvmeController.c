/*
 * XREFs of NvmeAdapterCleanupFabricNvmeController @ 0x1400DEF90
 * Callers:
 *     NvmeAdapterCleanupSubsystemPort @ 0x1400CD2C0 (NvmeAdapterCleanupSubsystemPort.c)
 *     NvmeAdapterConnectControllerInternal @ 0x1400CD9D0 (NvmeAdapterConnectControllerInternal.c)
 *     NvmeAdapterDisconnectControllerInternal @ 0x1400CF800 (NvmeAdapterDisconnectControllerInternal.c)
 *     NvmeAdapterConnectFabricNvmeController @ 0x1400DFBF4 (NvmeAdapterConnectFabricNvmeController.c)
 *     NvmeAdapterDisconnectFabricNvmeController @ 0x1400E1D10 (NvmeAdapterDisconnectFabricNvmeController.c)
 *     NvmeAdapterNvmeControllerRebuildAssociationWork @ 0x1400E4E20 (NvmeAdapterNvmeControllerRebuildAssociationWork.c)
 * Callees:
 *     NvmeAdapterDisableFabricController @ 0x1400E18E4 (NvmeAdapterDisableFabricController.c)
 *     NvmeAdapterDisableFabricControllerAsyncEvent @ 0x1400E1B6C (NvmeAdapterDisableFabricControllerAsyncEvent.c)
 *     NvmeAdapterDisconnectDeleteFabricControllerQueue @ 0x1400E1C4C (NvmeAdapterDisconnectDeleteFabricControllerQueue.c)
 *     NvmeAdapterFabricControllerFreeDiscoveryEntries @ 0x1400E244C (NvmeAdapterFabricControllerFreeDiscoveryEntries.c)
 *     NvmeAdapterFreeControllerIoQueues @ 0x1400E2DF4 (NvmeAdapterFreeControllerIoQueues.c)
 *     NvmeAdapterFreeFabricNvmeControllerAsyncEventCommands @ 0x1400E2F50 (NvmeAdapterFreeFabricNvmeControllerAsyncEventCommands.c)
 *     NvmeAdapterRemoveFabricControllerNamespaces @ 0x1400E70E0 (NvmeAdapterRemoveFabricControllerNamespaces.c)
 *     NvmeControllerDeletePendingIoQueueContext @ 0x1400ECB00 (NvmeControllerDeletePendingIoQueueContext.c)
 */

__int64 __fastcall NvmeAdapterCleanupFabricNvmeController(__int64 a1, __int64 a2)
{
  int v3; // eax
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 742) )
    NvmeAdapterDisableFabricControllerAsyncEvent();
  v3 = *(_DWORD *)(a1 + 572);
  if ( v3 == 1 )
  {
    if ( *(_QWORD *)(a1 + 728) )
      NvmeAdapterFreeControllerIoQueues(a1);
  }
  else if ( v3 == 2 )
  {
    NvmeAdapterFabricControllerFreeDiscoveryEntries(a1 + 1576);
    *(_QWORD *)(a1 + 1568) = 0LL;
    NvmeAdapterFabricControllerFreeDiscoveryEntries(a1 + 1608);
    *(_QWORD *)(a1 + 1600) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 742) )
    NvmeAdapterFreeFabricNvmeControllerAsyncEventCommands(a1);
  v4 = *(void **)(a1 + 536);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x72536152u);
    *(_QWORD *)(a1 + 536) = 0LL;
  }
  v5 = *(void **)(a1 + 624);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0x52436152u);
    *(_QWORD *)(a1 + 624) = 0LL;
  }
  v6 = *(void **)(a1 + 608);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0x52436152u);
    *(_QWORD *)(a1 + 608) = 0LL;
  }
  v7 = *(void **)(a1 + 600);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x52436152u);
    *(_QWORD *)(a1 + 600) = 0LL;
  }
  v8 = *(void **)(a1 + 592);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0x52436152u);
    *(_QWORD *)(a1 + 592) = 0LL;
  }
  if ( (*(_DWORD *)(a1 + 136) & 0x100LL) != 0 )
  {
    LOBYTE(a2) = 1;
    NvmeAdapterDisableFabricController(a1, a2);
  }
  NvmeAdapterDisconnectDeleteFabricControllerQueue(*(_QWORD *)(a1 + 712));
  NvmeAdapterRemoveFabricControllerNamespaces(a1);
  result = NvmeControllerDeletePendingIoQueueContext(a1);
  *(_DWORD *)(a1 + 568) = 0;
  return result;
}
