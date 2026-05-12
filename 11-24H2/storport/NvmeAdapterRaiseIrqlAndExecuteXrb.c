/*
 * XREFs of NvmeAdapterRaiseIrqlAndExecuteXrb @ 0x1400D63DC
 * Callers:
 *     NvmeAdapterMiniportPassthroughRequestIoctl @ 0x1400D42D8 (NvmeAdapterMiniportPassthroughRequestIoctl.c)
 *     NvmePnPPassToMiniPort @ 0x1400DC2FC (NvmePnPPassToMiniPort.c)
 *     NvmePnPPassToStorMQMiniPort @ 0x1400DC604 (NvmePnPPassToStorMQMiniPort.c)
 *     NvmeAdapterCreateFabricControllerQueue @ 0x1400E0A40 (NvmeAdapterCreateFabricControllerQueue.c)
 *     NvmeAdapterDeleteFabricControllerQueue @ 0x1400E0F60 (NvmeAdapterDeleteFabricControllerQueue.c)
 *     NvmeAdapterDrainFabricControllerQueue @ 0x1400E1D28 (NvmeAdapterDrainFabricControllerQueue.c)
 *     NvmeAdapterProcessControllerQueueRequestAsync @ 0x1400E631C (NvmeAdapterProcessControllerQueueRequestAsync.c)
 *     NvmeAdapterProcessControllerQueueRequestSync @ 0x1400E6500 (NvmeAdapterProcessControllerQueueRequestSync.c)
 *     NvmeAdapterTransportDisconnectFabricControllerQueue @ 0x1400E8E70 (NvmeAdapterTransportDisconnectFabricControllerQueue.c)
 *     NvmeAdapterTransportReconnectFabricControllerQueue @ 0x1400E932C (NvmeAdapterTransportReconnectFabricControllerQueue.c)
 * Callees:
 *     NvmeAdapterExecuteXrb @ 0x1400CFAA4 (NvmeAdapterExecuteXrb.c)
 */

__int64 __fastcall NvmeAdapterRaiseIrqlAndExecuteXrb(_DWORD *a1, __int64 a2)
{
  KIRQL v4; // di
  __int64 v5; // r8

  v4 = KfRaiseIrql(2u);
  LODWORD(a2) = NvmeAdapterExecuteXrb(a1, a2, v5);
  KeLowerIrql(v4);
  return (unsigned int)a2;
}
