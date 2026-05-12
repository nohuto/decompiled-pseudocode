/*
 * XREFs of RaidSrbStatusToNtStatus @ 0x14001EF94
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x140010664 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x14001DF90 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidBusEnumeratorProcessSupportedPages @ 0x140020F30 (RaidBusEnumeratorProcessSupportedPages.c)
 *     RaUnitAsyncError @ 0x140029460 (RaUnitAsyncError.c)
 *     RaidBusEnumeratorProcess1667DeviceInquiry @ 0x1400383C0 (RaidBusEnumeratorProcess1667DeviceInquiry.c)
 *     RaidUnitCompleteResetRequest @ 0x14003C670 (RaidUnitCompleteResetRequest.c)
 *     StorPortNotification @ 0x14004B4F0 (StorPortNotification.c)
 *     RaUnitStartIo @ 0x14004E6F0 (RaUnitStartIo.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1400525C0 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x140060440 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x140060974 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidBusEnumeratorProcessAtaInformation @ 0x140068980 (RaidBusEnumeratorProcessAtaInformation.c)
 *     RaidBusEnumeratorProcessBlockDeviceCharacteristics @ 0x140068A60 (RaidBusEnumeratorProcessBlockDeviceCharacteristics.c)
 *     RaidBusEnumeratorProcessDeviceId @ 0x140068AD0 (RaidBusEnumeratorProcessDeviceId.c)
 *     RaidBusEnumeratorProcessInquiry @ 0x140068B60 (RaidBusEnumeratorProcessInquiry.c)
 *     RaidBusEnumeratorProcessProbeLunZero @ 0x140068BB0 (RaidBusEnumeratorProcessProbeLunZero.c)
 *     RaidBusEnumeratorProcessSerialNumber @ 0x140068C00 (RaidBusEnumeratorProcessSerialNumber.c)
 *     TcglibEalExecuteCommandSync @ 0x1400853BC (TcglibEalExecuteCommandSync.c)
 *     RaidCancelIrp @ 0x14008B3DC (RaidCancelIrp.c)
 *     StorGetNVMePollingInformation @ 0x14008F3D4 (StorGetNVMePollingInformation.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x14009634C (RaUnitScsiGetDumpPointersIoctl.c)
 *     StorDrainPendingIoGatewayItems @ 0x1400A6420 (StorDrainPendingIoGatewayItems.c)
 *     StorpTelemetrySendAdapterSurfaceUfsHealthInfo @ 0x1400B99D8 (StorpTelemetrySendAdapterSurfaceUfsHealthInfo.c)
 *     NvmeAdapterMiniportPassthroughRequestIoctl @ 0x1400D42D8 (NvmeAdapterMiniportPassthroughRequestIoctl.c)
 *     NvmeAdapterCreateFabricControllerQueue @ 0x1400E0A40 (NvmeAdapterCreateFabricControllerQueue.c)
 *     NvmeAdapterDeleteFabricControllerQueue @ 0x1400E0F60 (NvmeAdapterDeleteFabricControllerQueue.c)
 *     NvmeAdapterDrainFabricControllerQueue @ 0x1400E1D28 (NvmeAdapterDrainFabricControllerQueue.c)
 *     NvmeAdapterTransportDisconnectFabricControllerQueue @ 0x1400E8E70 (NvmeAdapterTransportDisconnectFabricControllerQueue.c)
 *     NvmeAdapterTransportReconnectFabricControllerQueue @ 0x1400E932C (NvmeAdapterTransportReconnectFabricControllerQueue.c)
 *     NvmeNamespaceExecuteScsiSrbEx @ 0x140100A80 (NvmeNamespaceExecuteScsiSrbEx.c)
 *     RaidAdapterDiagnosticIoctl @ 0x14018169C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x140182524 (RaidAdapterGetMiniportDumpInfo.c)
 *     StorSendMFNDCommand @ 0x140190F24 (StorSendMFNDCommand.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1401B63D0 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1401B73F4 (RaWmiPassToMiniPort.c)
 *     StorGetNVMeIdentifyInfo @ 0x1401B8EB4 (StorGetNVMeIdentifyInfo.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1401BA844 (RaidAdapterFreeMiniportDumpInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidSrbStatusToNtStatus(char a1)
{
  unsigned int v1; // edx
  unsigned int v2; // edx
  unsigned int v3; // edx
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // edx

  v1 = a1 & 0x3F;
  if ( v1 <= 0x16 )
  {
    if ( v1 != 22 )
    {
      if ( v1 > 0xA )
      {
        v7 = v1 - 11;
        if ( !v7 )
          return 3221225653LL;
        v8 = v7 - 6;
        if ( !v8 )
          return 3221225664LL;
        v9 = v8 - 1;
        if ( !v9 )
          return 2147483653LL;
        if ( v9 != 3 )
          return 3221225861LL;
      }
      else
      {
        if ( v1 == 10 )
          return 3221225629LL;
        v2 = v1 - 1;
        if ( !v2 )
          return 0LL;
        v3 = v2 - 4;
        if ( !v3 )
          return 2147483665LL;
        v4 = v3 - 1;
        if ( v4 )
        {
          v5 = v4 - 2;
          if ( v5 )
          {
            if ( v5 == 1 )
              return 3221225653LL;
            return 3221225861LL;
          }
          return 3221225664LL;
        }
      }
      return 3221225488LL;
    }
    return 3221225473LL;
  }
  if ( v1 <= 0x25 )
  {
    if ( v1 == 37 )
      return 3221225996LL;
    v10 = v1 - 23;
    if ( !v10 )
      return 3221225506LL;
    v11 = v10 - 1;
    if ( !v11 )
      return 3221226614LL;
    v12 = v11 - 8;
    if ( !v12 )
      return 3221225664LL;
    v13 = v12 - 1;
    if ( !v13 )
      return 3221225664LL;
    if ( v13 == 1 )
      return 3221225488LL;
    return 3221225861LL;
  }
  v14 = v1 - 38;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( !v15 )
      return 3221225473LL;
    v16 = v15 - 1;
    if ( !v16 )
      return 3221225485LL;
    if ( v16 == 16 )
      return 3221226762LL;
    return 3221225861LL;
  }
  return 3221225626LL;
}
