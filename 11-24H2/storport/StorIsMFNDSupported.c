/*
 * XREFs of StorIsMFNDSupported @ 0x140055FDC
 * Callers:
 *     RaidDeleteAdapter @ 0x1400437A8 (RaidDeleteAdapter.c)
 *     RaidAdapterMFNDChildPFControl @ 0x14005B108 (RaidAdapterMFNDChildPFControl.c)
 *     RaidAdapterMFNDNameSpacePageMapControl @ 0x14005B548 (RaidAdapterMFNDNameSpacePageMapControl.c)
 *     RaidAdapterMFNDNameSpaceRead @ 0x14005B974 (RaidAdapterMFNDNameSpaceRead.c)
 *     RaidAdapterMFNDNameSpaceWrite @ 0x14005BE0C (RaidAdapterMFNDNameSpaceWrite.c)
 *     RaidAdapterReconfigureMFND @ 0x14005DA44 (RaidAdapterReconfigureMFND.c)
 *     RaidAdapterStartDevice @ 0x140061808 (RaidAdapterStartDevice.c)
 *     RaProcessMFNDChildControllerEvent @ 0x14008A178 (RaProcessMFNDChildControllerEvent.c)
 *     StorMFNDHealthTelemetrySupported @ 0x1400AF414 (StorMFNDHealthTelemetrySupported.c)
 *     StorGetLogForMFNDChildControllerAsyncEvent @ 0x1400C4204 (StorGetLogForMFNDChildControllerAsyncEvent.c)
 *     StorMFNDChildPFControl @ 0x14018E6B4 (StorMFNDChildPFControl.c)
 *     StorMFNDNSPageMapControl @ 0x14018E7E8 (StorMFNDNSPageMapControl.c)
 *     StorMFNDNameSpaceReadWrite @ 0x14018E90C (StorMFNDNameSpaceReadWrite.c)
 *     StorQueryMFNDCapability @ 0x14018EC48 (StorQueryMFNDCapability.c)
 *     StorQueryMFNDChildPFCommandPermission @ 0x14018EE90 (StorQueryMFNDChildPFCommandPermission.c)
 *     StorQueryMFNDChildPFGlobalProperty @ 0x14018F10C (StorQueryMFNDChildPFGlobalProperty.c)
 *     StorQueryMFNDChildPFList @ 0x14018F2D0 (StorQueryMFNDChildPFList.c)
 *     StorQueryMFNDChildPFQoSStatisticsLog @ 0x14018F94C (StorQueryMFNDChildPFQoSStatisticsLog.c)
 *     StorQueryMFNDChildPFQoSStatisticsProperty @ 0x14018FC9C (StorQueryMFNDChildPFQoSStatisticsProperty.c)
 *     StorQueryMFNDChildPFQueuesState @ 0x14018FEA4 (StorQueryMFNDChildPFQueuesState.c)
 *     StorQueryMFNDChildPFSettings @ 0x140190278 (StorQueryMFNDChildPFSettings.c)
 *     StorQueryMFNDMigrationQoS @ 0x140190584 (StorQueryMFNDMigrationQoS.c)
 *     StorQueryMFNDNamespacePageMap @ 0x140190768 (StorQueryMFNDNamespacePageMap.c)
 *     StorQueryMFNDOperationInfo @ 0x140190B74 (StorQueryMFNDOperationInfo.c)
 *     StorResetMFND @ 0x140190CF8 (StorResetMFND.c)
 *     StorRetrieveMFNDChildPFGlobalProperty @ 0x140190DD8 (StorRetrieveMFNDChildPFGlobalProperty.c)
 *     StorSetMFNDChildPFCommandPermission @ 0x1401914C8 (StorSetMFNDChildPFCommandPermission.c)
 *     StorSetMFNDChildPFGlobalProperty @ 0x1401916CC (StorSetMFNDChildPFGlobalProperty.c)
 *     StorSetMFNDChildPFQoS @ 0x1401918C0 (StorSetMFNDChildPFQoS.c)
 *     StorSetMFNDChildPFQoSStatisticsProperty @ 0x140191B28 (StorSetMFNDChildPFQoSStatisticsProperty.c)
 *     StorSetMFNDChildPFQueuesState @ 0x140191D2C (StorSetMFNDChildPFQueuesState.c)
 *     StorSetMFNDChildPFSettings @ 0x14019204C (StorSetMFNDChildPFSettings.c)
 *     StorSetMFNDMigrationQoS @ 0x140192354 (StorSetMFNDMigrationQoS.c)
 *     StorSetMFNDOperationInfo @ 0x14019289C (StorSetMFNDOperationInfo.c)
 * Callees:
 *     <none>
 */

bool __fastcall StorIsMFNDSupported(__int64 a1)
{
  return MFNDEnabled && (*(_BYTE *)(a1 + 111) & 1) != 0 && *(_QWORD *)(a1 + 6160) != 0LL;
}
