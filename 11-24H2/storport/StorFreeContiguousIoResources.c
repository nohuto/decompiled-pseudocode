/*
 * XREFs of StorFreeContiguousIoResources @ 0x140010B84
 * Callers:
 *     RaidUnitFreeResources @ 0x14000ED44 (RaidUnitFreeResources.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x140010664 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaFreeRaidResources @ 0x140010D60 (RaFreeRaidResources.c)
 *     RaidUnitCompleteResetRequest @ 0x14003C670 (RaidUnitCompleteResetRequest.c)
 *     RaidDeleteAdapter @ 0x1400437A8 (RaidDeleteAdapter.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1400525C0 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x140060440 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x140060974 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     TcglibEalExecuteCommandSync @ 0x1400853BC (TcglibEalExecuteCommandSync.c)
 *     StorGetNVMePollingInformation @ 0x14008F3D4 (StorGetNVMePollingInformation.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x14009634C (RaUnitScsiGetDumpPointersIoctl.c)
 *     StorFreeExtraIoResourceForGateway @ 0x1400A6D40 (StorFreeExtraIoResourceForGateway.c)
 *     StorpTelemetrySendAdapterSurfaceUfsHealthInfo @ 0x1400B99D8 (StorpTelemetrySendAdapterSurfaceUfsHealthInfo.c)
 *     StorUnitExecuteNvmeSrbComplete @ 0x1400BE310 (StorUnitExecuteNvmeSrbComplete.c)
 *     RaidAdapterDiagnosticIoctl @ 0x14018169C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x140182524 (RaidAdapterGetMiniportDumpInfo.c)
 *     StorSendMFNDCommand @ 0x140190F24 (StorSendMFNDCommand.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1401B63D0 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1401B73F4 (RaWmiPassToMiniPort.c)
 *     StorGetNVMeIdentifyInfo @ 0x1401B8EB4 (StorGetNVMeIdentifyInfo.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1401BA844 (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaidAdapterReleaseResources @ 0x1401BD580 (RaidAdapterReleaseResources.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

void __fastcall StorFreeContiguousIoResources(__int64 a1, __int64 a2)
{
  bool v2; // zf

  if ( *(_DWORD *)a1 == 1094997074 )
  {
    if ( !*(_BYTE *)(a1 + 888) )
    {
LABEL_3:
      MmFreeContiguousMemory((PVOID)a2);
      return;
    }
    v2 = *(_DWORD *)(a1 + 908) == 3;
  }
  else
  {
    if ( *(_DWORD *)a1 != 1314275652 || !*(_BYTE *)(a1 + 1152) )
      goto LABEL_3;
    v2 = *(_DWORD *)(a1 + 1172) == 3;
  }
  if ( !v2 )
    goto LABEL_3;
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, char))(*(_QWORD *)(*(_QWORD *)(a1 + 880) + 8LL) + 24LL))(
    *(_QWORD *)(a1 + 880),
    *(unsigned int *)(a2 + 16),
    *(_QWORD *)(a2 + 24),
    a2,
    1);
}
