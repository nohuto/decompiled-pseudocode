/*
 * XREFs of RaSrbSetMiniportContext @ 0x140010610
 * Callers:
 *     RaidPowerPassToMiniPort @ 0x14001018C (RaidPowerPassToMiniPort.c)
 *     RaAdapterStartPowerIo @ 0x1400104F4 (RaAdapterStartPowerIo.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x140010664 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x140060440 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x140060974 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     TcglibEalExecuteCommandSync @ 0x1400853BC (TcglibEalExecuteCommandSync.c)
 *     StorGetNVMePollingInformation @ 0x14008F3D4 (StorGetNVMePollingInformation.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x14009634C (RaUnitScsiGetDumpPointersIoctl.c)
 *     StorpTelemetrySendAdapterSurfaceUfsHealthInfo @ 0x1400B99D8 (StorpTelemetrySendAdapterSurfaceUfsHealthInfo.c)
 *     NvmeAdapterMiniportPassthroughRequestIoctl @ 0x1400D42D8 (NvmeAdapterMiniportPassthroughRequestIoctl.c)
 *     NvmePnPPassToMiniPort @ 0x1400DC2FC (NvmePnPPassToMiniPort.c)
 *     NvmePnPPassToStorMQMiniPort @ 0x1400DC604 (NvmePnPPassToStorMQMiniPort.c)
 *     NvmeAdapterCreateFabricControllerQueue @ 0x1400E0A40 (NvmeAdapterCreateFabricControllerQueue.c)
 *     NvmeAdapterDeleteFabricControllerQueue @ 0x1400E0F60 (NvmeAdapterDeleteFabricControllerQueue.c)
 *     NvmeAdapterDrainFabricControllerQueue @ 0x1400E1D28 (NvmeAdapterDrainFabricControllerQueue.c)
 *     NvmeAdapterPrepareControllerQueueRequest @ 0x1400E60E0 (NvmeAdapterPrepareControllerQueueRequest.c)
 *     NvmeAdapterTransportDisconnectFabricControllerQueue @ 0x1400E8E70 (NvmeAdapterTransportDisconnectFabricControllerQueue.c)
 *     NvmeAdapterTransportReconnectFabricControllerQueue @ 0x1400E932C (NvmeAdapterTransportReconnectFabricControllerQueue.c)
 *     RaidAdapterDiagnosticIoctl @ 0x14018169C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x140182524 (RaidAdapterGetMiniportDumpInfo.c)
 *     StorSendMFNDCommand @ 0x140190F24 (StorSendMFNDCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaSrbSetMiniportContext(int *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  int v4; // eax
  __int64 result; // rax

  v3 = 79LL;
  v4 = *a1;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    if ( v4 != 1314275652 )
      v3 = 131LL;
    result = (unsigned int)(a1[v3] + 7);
    if ( (result & 0xFFFFFFF8) != 0 )
      *(_QWORD *)(a2 + 104) = a3;
  }
  else
  {
    if ( v4 != 1314275652 )
      v3 = 131LL;
    result = (unsigned int)(a1[v3] + 7);
    if ( (result & 0xFFFFFFF8) != 0 )
      *(_QWORD *)(a2 + 56) = a3;
  }
  return result;
}
