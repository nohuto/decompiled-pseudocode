/*
 * XREFs of RaidLogAllocationFailure @ 0x14008D748
 * Callers:
 *     RaGetUnitPerfCounterIdString @ 0x14000904C (RaGetUnitPerfCounterIdString.c)
 *     RaBuildHwFirmwareGetInfoBufferForMiniport @ 0x14000C4E4 (RaBuildHwFirmwareGetInfoBufferForMiniport.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x14000C75C (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x14000CE9C (RaidUnitSendSrbIoControlSynchronously.c)
 *     StorpTelemetryGetUnitIoCounters @ 0x14000DC10 (StorpTelemetryGetUnitIoCounters.c)
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaidAllocateSrb @ 0x14000EB90 (RaidAllocateSrb.c)
 *     RaidPnPPassToMiniPort @ 0x140010ED8 (RaidPnPPassToMiniPort.c)
 *     RaidpBuildAdapterBusRelations @ 0x1400173D8 (RaidpBuildAdapterBusRelations.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x140018EB0 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidBusEnumeratorGetUnit @ 0x140019940 (RaidBusEnumeratorGetUnit.c)
 *     RaidBusEnumeratorProbeLunZero @ 0x14001A200 (RaidBusEnumeratorProbeLunZero.c)
 *     RaidBusEnumeratorGenericInquiry @ 0x14001A9E0 (RaidBusEnumeratorGenericInquiry.c)
 *     RaidBusEnumeratorIssueReportLuns @ 0x14001AF90 (RaidBusEnumeratorIssueReportLuns.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x14001DF90 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaInitializeRaidResources @ 0x1400219E0 (RaInitializeRaidResources.c)
 *     StorUnmapSenseInfo @ 0x140025620 (StorUnmapSenseInfo.c)
 *     RaUnitBuildDsmNotifyBufferForMiniport @ 0x140035B20 (RaUnitBuildDsmNotifyBufferForMiniport.c)
 *     RaidAdjustDeferredQueueDepth @ 0x140037FC8 (RaidAdjustDeferredQueueDepth.c)
 *     RaidAllocatePoolEx @ 0x14008AB5C (RaidAllocatePoolEx.c)
 *     NvmeControllerRegisterPowerSettingChangeNotification @ 0x140132810 (NvmeControllerRegisterPowerSettingChangeNotification.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidLogAllocationFailure(void *a1, __int64 a2, __int64 a3, int a4, int a5)
{
  char *ErrorLogEntry; // rax

  ErrorLogEntry = (char *)IoAllocateErrorLogEntry(a1, 0x48u);
  if ( ErrorLogEntry )
  {
    *(_QWORD *)(ErrorLogEntry + 4) = 0LL;
    *(_QWORD *)(ErrorLogEntry + 28) = 0LL;
    *(_QWORD *)(ErrorLogEntry + 36) = 0LL;
    *((_DWORD *)ErrorLogEntry + 11) = 0;
    *(_DWORD *)ErrorLogEntry = 0x200000;
    *((_DWORD *)ErrorLogEntry + 6) = 0;
    *((_DWORD *)ErrorLogEntry + 3) = -2147221448;
    *((_DWORD *)ErrorLogEntry + 4) = 10;
    *((_DWORD *)ErrorLogEntry + 5) = -1073741801;
    *((_QWORD *)ErrorLogEntry + 6) = a2;
    *((_QWORD *)ErrorLogEntry + 7) = a3;
    *((_DWORD *)ErrorLogEntry + 16) = a4;
    *((_DWORD *)ErrorLogEntry + 17) = a5;
    IoWriteErrorLogEntry(ErrorLogEntry);
  }
  else
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
  }
}
