/*
 * XREFs of _tlgWriteTransfer_EtwWriteTransfer @ 0x140035110
 * Callers:
 *     RaidAdapterResetBus @ 0x14002F998 (RaidAdapterResetBus.c)
 *     StorpTelemetryLogUnitPerfDataMeasures @ 0x140034D34 (StorpTelemetryLogUnitPerfDataMeasures.c)
 *     RaidAdapterCompleteInitialization @ 0x140037B0C (RaidAdapterCompleteInitialization.c)
 *     StorpTelemetryMiniportEventAdapter @ 0x140039EC4 (StorpTelemetryMiniportEventAdapter.c)
 *     RaUnitTelemetryIdIoctl @ 0x14003A938 (RaUnitTelemetryIdIoctl.c)
 *     StorpCSExitTelemetry @ 0x14003B750 (StorpCSExitTelemetry.c)
 *     RaidUnitCompleteResetRequest @ 0x14003C670 (RaidUnitCompleteResetRequest.c)
 *     StorpLogRegisterAdapterPerfStates @ 0x140042A9C (StorpLogRegisterAdapterPerfStates.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x14004DDC4 (RaUnitDeviceUsageNotificationIrp.c)
 *     StorpTelemetrySendUnitPauseRequestCounters @ 0x14005406C (StorpTelemetrySendUnitPauseRequestCounters.c)
 *     StorpTelemetryNvmeHealthCriticalInfo @ 0x140054BD0 (StorpTelemetryNvmeHealthCriticalInfo.c)
 *     StorpTelemetryLogUnitPerfDataCriticalData @ 0x14005505C (StorpTelemetryLogUnitPerfDataCriticalData.c)
 *     RaidAdapterResetBusNoLock @ 0x14005E034 (RaidAdapterResetBusNoLock.c)
 *     RaidAdapterStartDevice @ 0x140061808 (RaidAdapterStartDevice.c)
 *     StorpMarkDeviceFailed @ 0x140075234 (StorpMarkDeviceFailed.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x140077AE8 (RaidAdapterSetMaxOperationalPower.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1400781BC (RaidRegisterForRuntimePowerManagement.c)
 *     RaUnitStartResetIo @ 0x14009942C (RaUnitStartResetIo.c)
 *     RaidUnitResetTarget @ 0x14009FE7C (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1400A01E8 (RaidUnitResetUnit.c)
 *     StorpCSEntryTelemetry @ 0x1400AF51C (StorpCSEntryTelemetry.c)
 *     StorpLogPerAdapterStatistics @ 0x1400B0A00 (StorpLogPerAdapterStatistics.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1400B0FA0 (StorpLogPhysicalTopologyInfo.c)
 *     StorpTelemetryAdapterNvmeHealthCriticalInfo @ 0x1400B22F4 (StorpTelemetryAdapterNvmeHealthCriticalInfo.c)
 *     StorpTelemetryAdapterNvmeHealthInfo @ 0x1400B256C (StorpTelemetryAdapterNvmeHealthInfo.c)
 *     StorpTelemetryLogNvmeNamespaceErrorDataCriticalData @ 0x1400B3B60 (StorpTelemetryLogNvmeNamespaceErrorDataCriticalData.c)
 *     StorpTelemetryLogNvmeNamespaceErrorDataMeasures @ 0x1400B3DE4 (StorpTelemetryLogNvmeNamespaceErrorDataMeasures.c)
 *     StorpTelemetryLogUnitDeviceStatisticsCriticalData @ 0x1400B4068 (StorpTelemetryLogUnitDeviceStatisticsCriticalData.c)
 *     StorpTelemetryLogUnitDeviceStatisticsMeasures @ 0x1400B4554 (StorpTelemetryLogUnitDeviceStatisticsMeasures.c)
 *     StorpTelemetryLogUnitErrorDataCriticalData @ 0x1400B4A48 (StorpTelemetryLogUnitErrorDataCriticalData.c)
 *     StorpTelemetryLogUnitErrorDataMeasures @ 0x1400B4D58 (StorpTelemetryLogUnitErrorDataMeasures.c)
 *     StorpTelemetryLogUnitQosDataMeasures @ 0x1400B50B4 (StorpTelemetryLogUnitQosDataMeasures.c)
 *     StorpTelemetryLogUnitSmartAttributesCriticalData @ 0x1400B55D0 (StorpTelemetryLogUnitSmartAttributesCriticalData.c)
 *     StorpTelemetryLogUnitSmartAttributesMeasures @ 0x1400B5A10 (StorpTelemetryLogUnitSmartAttributesMeasures.c)
 *     StorpTelemetryMarkNamespaceResponsive @ 0x1400B5E48 (StorpTelemetryMarkNamespaceResponsive.c)
 *     StorpTelemetryMarkNamespaceUnresponsive @ 0x1400B606C (StorpTelemetryMarkNamespaceUnresponsive.c)
 *     StorpTelemetryMarkUnitResponsive @ 0x1400B62A4 (StorpTelemetryMarkUnitResponsive.c)
 *     StorpTelemetryMarkUnitUnresponsive @ 0x1400B6414 (StorpTelemetryMarkUnitUnresponsive.c)
 *     StorpTelemetryNvmeControllerHealthCriticalInfo @ 0x1400B6704 (StorpTelemetryNvmeControllerHealthCriticalInfo.c)
 *     StorpTelemetryNvmeControllerHealthInfo @ 0x1400B69B4 (StorpTelemetryNvmeControllerHealthInfo.c)
 *     StorpTelemetryNvmeHealthInfo @ 0x1400B6C64 (StorpTelemetryNvmeHealthInfo.c)
 *     StorpTelemetryNvmeIceKeySlotFull @ 0x1400B6F70 (StorpTelemetryNvmeIceKeySlotFull.c)
 *     StorpTelemetryNvmeLogNamespacePerfDataCriticalData @ 0x1400B7118 (StorpTelemetryNvmeLogNamespacePerfDataCriticalData.c)
 *     StorpTelemetryNvmeLogNamespacePerfDataMeasures @ 0x1400B745C (StorpTelemetryNvmeLogNamespacePerfDataMeasures.c)
 *     StorpTelemetrySendAdapterDlrmStatistics @ 0x1400B8D68 (StorpTelemetrySendAdapterDlrmStatistics.c)
 *     StorpTelemetrySendAdapterSurfaceUfsHealthInfo @ 0x1400B99D8 (StorpTelemetrySendAdapterSurfaceUfsHealthInfo.c)
 *     StorpTelemetrySendAdapterUfsHealthInfo @ 0x1400BA1F0 (StorpTelemetrySendAdapterUfsHealthInfo.c)
 *     StorpTelemetrySendAdaptiveIdleCounters @ 0x1400BA4EC (StorpTelemetrySendAdaptiveIdleCounters.c)
 *     NvmeAdapterCompleteInitialization @ 0x1400CD5A8 (NvmeAdapterCompleteInitialization.c)
 *     NvmeNamespaceDeviceUsageNotificationIrp @ 0x1400FDD98 (NvmeNamespaceDeviceUsageNotificationIrp.c)
 *     NvmeNamespaceTelemetryIdIoctl @ 0x140113F68 (NvmeNamespaceTelemetryIdIoctl.c)
 *     NvmeRegisterForRuntimePowerManagement @ 0x140136338 (NvmeRegisterForRuntimePowerManagement.c)
 *     NvmeAdapterSurpriseRemovalIrp @ 0x14019DCB8 (NvmeAdapterSurpriseRemovalIrp.c)
 *     NvmeNamespaceStartDeviceIrp @ 0x1401A97E8 (NvmeNamespaceStartDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1401BB518 (RaidAdapterSurpriseRemovalIrp.c)
 *     RaUnitStartDeviceIrp @ 0x1401BC368 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall tlgWriteTransfer_EtwWriteTransfer(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        ULONG UserDataCount,
        struct _EVENT_DATA_DESCRIPTOR *a6)
{
  unsigned __int64 v6; // rax
  unsigned __int16 *v7; // rdx
  EVENT_DESCRIPTOR v9; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&v9.Id = *a2 << 24;
  *(_DWORD *)&v9.Level = *(unsigned __int16 *)(a2 + 1);
  v6 = *(_QWORD *)(a2 + 3);
  v7 = (unsigned __int16 *)(a2 + 11);
  v9.Keyword = v6;
  a6->Ptr = (unsigned __int64)off_140170180;
  a6->Size = *(unsigned __int16 *)off_140170180;
  a6[1].Ptr = (unsigned __int64)v7;
  a6->Reserved = 2;
  a6[1].Size = *v7;
  a6[1].Reserved = 1;
  return EtwWriteTransfer(RegHandle, &v9, 0LL, 0LL, UserDataCount, a6);
}
